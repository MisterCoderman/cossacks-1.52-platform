#include "recomp.h"

/* FUN_10012eb0 @ 0x11f02eb0 (1334 bytes, 427 insns) */
void f_11f02eb0(void) {
  FTRACE(0x11f02eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f02eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f02eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11f02eb3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02eb6 push esi */
  push32((uint32_t)(ESI));
  /* 11f02eb7 mov eax, dword ptr [0x11f32084] */
  EAX = (r32((uint32_t)(0x11f32084)));
  /* 11f02ebc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f02ebf mov ecx, dword ptr [0x11f32088] */
  ECX = (r32((uint32_t)(0x11f32088)));
  /* 11f02ec5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02ec7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11f02eca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f02ecd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02ed0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11f02ed3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11f02ed6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f02ed9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f02edc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02edf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f02ee2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02ee6 jge 0x11f02efc */
  if ((C.sf==C.of)) goto L_11f02efc;
  /* 11f02ee8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f02eeb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f02eee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f02ef0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f02ef3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11f02efa jmp 0x11f02f11 */
  goto L_11f02f11;
L_11f02efc:;
  /* 11f02efc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11f02f03 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f02f06 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f02f09 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f02f0c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f02f0e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11f02f11:;
  /* 11f02f11 mov ecx, dword ptr [0x11f3207c] */
  ECX = (r32((uint32_t)(0x11f3207c)));
  /* 11f02f17 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11f02f1a:;
  /* 11f02f1a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02f1d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02f20 jae 0x11f02f46 */
  if (!C.cf) goto L_11f02f46;
  /* 11f02f22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02f25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f02f28 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11f02f2a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02f2d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f02f30 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11f02f33 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f02f35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f02f37 je 0x11f02f3b */
  if (C.zf) goto L_11f02f3b;
  /* 11f02f39 jmp 0x11f02f46 */
  goto L_11f02f46;
L_11f02f3b:;
  /* 11f02f3b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02f3e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02f41 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11f02f44 jmp 0x11f02f1a */
  goto L_11f02f1a;
L_11f02f46:;
  /* 11f02f46 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02f49 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02f4c jne 0x11f0302d */
  if (!C.zf) goto L_11f0302d;
  /* 11f02f52 mov eax, dword ptr [0x11f32088] */
  EAX = (r32((uint32_t)(0x11f32088)));
  /* 11f02f57 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11f02f5a:;
  /* 11f02f5a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02f5d cmp ecx, dword ptr [0x11f3207c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f3207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02f63 jae 0x11f02f89 */
  if (!C.cf) goto L_11f02f89;
  /* 11f02f65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02f68 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f02f6b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11f02f6d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02f70 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f02f73 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11f02f76 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f02f78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f02f7a je 0x11f02f7e */
  if (C.zf) goto L_11f02f7e;
  /* 11f02f7c jmp 0x11f02f89 */
  goto L_11f02f89;
L_11f02f7e:;
  /* 11f02f7e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02f81 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02f84 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f02f87 jmp 0x11f02f5a */
  goto L_11f02f5a;
L_11f02f89:;
  /* 11f02f89 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02f8c cmp ecx, dword ptr [0x11f3207c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f3207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02f92 jne 0x11f0302d */
  if (!C.zf) goto L_11f0302d;
L_11f02f98:;
  /* 11f02f98 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02f9b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02f9e jae 0x11f02fb6 */
  if (!C.cf) goto L_11f02fb6;
  /* 11f02fa0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02fa3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02fa7 je 0x11f02fab */
  if (C.zf) goto L_11f02fab;
  /* 11f02fa9 jmp 0x11f02fb6 */
  goto L_11f02fb6;
L_11f02fab:;
  /* 11f02fab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02fae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02fb1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11f02fb4 jmp 0x11f02f98 */
  goto L_11f02f98;
L_11f02fb6:;
  /* 11f02fb6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02fb9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02fbc jne 0x11f03007 */
  if (!C.zf) goto L_11f03007;
  /* 11f02fbe mov eax, dword ptr [0x11f32088] */
  EAX = (r32((uint32_t)(0x11f32088)));
  /* 11f02fc3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11f02fc6:;
  /* 11f02fc6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02fc9 cmp ecx, dword ptr [0x11f3207c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f3207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02fcf jae 0x11f02fe7 */
  if (!C.cf) goto L_11f02fe7;
  /* 11f02fd1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02fd4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02fd8 je 0x11f02fdc */
  if (C.zf) goto L_11f02fdc;
  /* 11f02fda jmp 0x11f02fe7 */
  goto L_11f02fe7;
L_11f02fdc:;
  /* 11f02fdc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02fdf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f02fe2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f02fe5 jmp 0x11f02fc6 */
  goto L_11f02fc6;
L_11f02fe7:;
  /* 11f02fe7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f02fea cmp ecx, dword ptr [0x11f3207c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f3207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02ff0 jne 0x11f03007 */
  if (!C.zf) goto L_11f03007;
  /* 11f02ff2 call 0x11f033f0 */
  push32(0x11f02ff7u); f_11f033f0();
  /* 11f02ff7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f02ffa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f02ffe jne 0x11f03007 */
  if (!C.zf) goto L_11f03007;
  /* 11f03000 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f03002 jmp 0x11f033e1 */
  goto L_11f033e1;
L_11f03007:;
  /* 11f03007 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0300a push edx */
  push32((uint32_t)(EDX));
  /* 11f0300b call 0x11f03500 */
  push32(0x11f03010u); f_11f03500();
  /* 11f03010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03013 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f03016 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11f03019 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11f0301b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0301e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f03021 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03024 jne 0x11f0302d */
  if (!C.zf) goto L_11f0302d;
  /* 11f03026 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f03028 jmp 0x11f033e1 */
  goto L_11f033e1;
L_11f0302d:;
  /* 11f0302d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f03030 mov dword ptr [0x11f3207c], edx */
  w32((uint32_t)(0x11f3207c), (EDX));
  /* 11f03036 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f03039 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f0303c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11f0303f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f03042 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f03044 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11f03047 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0304b je 0x11f03070 */
  if (C.zf) goto L_11f03070;
  /* 11f0304d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03050 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f03053 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f03056 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11f0305a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0305d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f03060 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11f03063 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11f0306a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11f0306c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0306e jne 0x11f030a5 */
  if (!C.zf) goto L_11f030a5;
L_11f03070:;
  /* 11f03070 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11f03077:;
  /* 11f03077 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0307a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f0307d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f03080 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11f03084 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03087 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f0308a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11f0308d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11f03094 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11f03096 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f03098 jne 0x11f030a5 */
  if (!C.zf) goto L_11f030a5;
  /* 11f0309a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0309d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f030a0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11f030a3 jmp 0x11f03077 */
  goto L_11f03077;
L_11f030a5:;
  /* 11f030a5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f030a8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f030ae mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f030b1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11f030b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f030bb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11f030c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f030c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f030c8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f030cb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11f030cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f030d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f030d6 jne 0x11f030f2 */
  if (!C.zf) goto L_11f030f2;
  /* 11f030d8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11f030df mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f030e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f030e5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f030e8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11f030ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11f030f2:;
  /* 11f030f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f030f6 jl 0x11f0310b */
  if ((C.sf!=C.of)) goto L_11f0310b;
  /* 11f030f8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f030fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f030fd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f03100 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f03103 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03106 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11f03109 jmp 0x11f030f2 */
  goto L_11f030f2;
L_11f0310b:;
  /* 11f0310b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0310e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03111 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11f03115 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f03118 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0311b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0311d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03120 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f03123 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f03126 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f03129 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0312c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f0312f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03133 jle 0x11f0313c */
  if ((C.zf||C.sf!=C.of)) goto L_11f0313c;
  /* 11f03135 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11f0313c:;
  /* 11f0313c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0313f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03142 je 0x11f03360 */
  if (C.zf) goto L_11f03360;
  /* 11f03148 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0314b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0314e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f03151 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03154 jne 0x11f0322a */
  if (!C.zf) goto L_11f0322a;
  /* 11f0315a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0315e jge 0x11f031bf */
  if ((C.sf==C.of)) goto L_11f031bf;
  /* 11f03160 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f03165 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f03168 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f0316a not eax */
  EAX = (~(EAX));
  /* 11f0316c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0316f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f03172 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11f03176 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f03178 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0317b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f0317e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11f03182 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f03185 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03188 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11f0318b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f0318e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f03191 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03194 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11f03197 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f0319a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0319d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f031a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f031a3 jne 0x11f031bd */
  if (!C.zf) goto L_11f031bd;
  /* 11f031a5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f031aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f031ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f031af not eax */
  EAX = (~(EAX));
  /* 11f031b1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f031b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f031b6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f031b8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f031bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f031bd:;
  /* 11f031bd jmp 0x11f0322a */
  goto L_11f0322a;
L_11f031bf:;
  /* 11f031bf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f031c2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f031c5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f031ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f031cc not edx */
  EDX = (~(EDX));
  /* 11f031ce mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f031d1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f031d4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11f031db and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f031dd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f031e0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f031e3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11f031ea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f031ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f031f0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f031f3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f031f6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f031f9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f031fc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11f031ff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f03202 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03205 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f03209 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0320b jne 0x11f0322a */
  if (!C.zf) goto L_11f0322a;
  /* 11f0320d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f03210 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03213 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f03218 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f0321a not edx */
  EDX = (~(EDX));
  /* 11f0321c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0321f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f03222 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f03224 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f03227 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11f0322a:;
  /* 11f0322a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0322d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f03230 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f03233 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f03236 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f03239 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0323c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f0323f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f03242 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f03245 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f03248 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0324c je 0x11f03360 */
  if (C.zf) goto L_11f03360;
  /* 11f03252 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03258 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11f0325b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0325e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f03261 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f03264 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f03267 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f0326a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0326d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f03270 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f03273 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f03276 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f03279 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11f0327c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0327f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f03282 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f03285 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f03288 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0328b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0328e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f03291 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03294 jne 0x11f03360 */
  if (!C.zf) goto L_11f03360;
  /* 11f0329a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0329e jge 0x11f032fa */
  if ((C.sf==C.of)) goto L_11f032fa;
  /* 11f032a0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f032a3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f032a6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f032aa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f032ad add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f032b0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11f032b3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f032b5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f032b8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f032bb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11f032be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f032c0 jne 0x11f032d8 */
  if (!C.zf) goto L_11f032d8;
  /* 11f032c2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f032c7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f032ca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f032cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f032cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f032d1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f032d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f032d6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f032d8:;
  /* 11f032d8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f032dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f032e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f032e2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f032e5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f032e8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11f032ec or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f032ee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f032f1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f032f4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11f032f8 jmp 0x11f03360 */
  goto L_11f03360;
L_11f032fa:;
  /* 11f032fa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f032fd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03300 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f03304 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f03307 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0330a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11f0330d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f0330f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f03312 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03315 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11f03318 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0331a jne 0x11f03337 */
  if (!C.zf) goto L_11f03337;
  /* 11f0331c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0331f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03322 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f03327 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f03329 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0332c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f0332f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f03331 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f03334 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11f03337:;
  /* 11f03337 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0333a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0333d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f03342 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f03344 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03347 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f0334a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11f03351 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f03353 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03356 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f03359 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11f03360:;
  /* 11f03360 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03364 je 0x11f0337a */
  if (C.zf) goto L_11f0337a;
  /* 11f03366 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f03369 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0336c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f0336e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f03371 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03374 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f03377 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11f0337a:;
  /* 11f0337a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0337d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03380 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f03383 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f03386 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03389 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0338c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0338e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f03391 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03394 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f03397 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0339a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11f0339d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f033a0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f033a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f033a5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f033a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f033aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f033ad mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11f033af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f033b1 jne 0x11f033d3 */
  if (!C.zf) goto L_11f033d3;
  /* 11f033b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f033b6 cmp eax, dword ptr [0x11f32080] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f32080))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f033bc jne 0x11f033d3 */
  if (!C.zf) goto L_11f033d3;
  /* 11f033be mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f033c1 cmp ecx, dword ptr [0x11f32078] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f32078))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f033c7 jne 0x11f033d3 */
  if (!C.zf) goto L_11f033d3;
  /* 11f033c9 mov dword ptr [0x11f32080], 0 */
  w32((uint32_t)(0x11f32080), (0x0u));
L_11f033d3:;
  /* 11f033d3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f033d6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f033d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11f033db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f033de add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11f033e1:;
  /* 11f033e1 pop esi */
  ESI = (pop32());
  /* 11f033e2 mov esp, ebp */
  ESP = (EBP);
  /* 11f033e4 pop ebp */
  EBP = (pop32());
  /* 11f033e5 ret  */
  ESPCHK(0x11f02eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133f0 @ 0x11f033f0 (271 bytes, 78 insns) */
void f_11f033f0(void) {
  FTRACE(0x11f033f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f033f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f033f1 mov ebp, esp */
  EBP = (ESP);
  /* 11f033f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f033f4 mov eax, dword ptr [0x11f32084] */
  EAX = (r32((uint32_t)(0x11f32084)));
  /* 11f033f9 cmp eax, dword ptr [0x11f32068] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f32068))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f033ff jne 0x11f0344b */
  if (!C.zf) goto L_11f0344b;
  /* 11f03401 mov ecx, dword ptr [0x11f32068] */
  ECX = (r32((uint32_t)(0x11f32068)));
  /* 11f03407 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0340a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0340d push ecx */
  push32((uint32_t)(ECX));
  /* 11f0340e mov edx, dword ptr [0x11f32088] */
  EDX = (r32((uint32_t)(0x11f32088)));
  /* 11f03414 push edx */
  push32((uint32_t)(EDX));
  /* 11f03415 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f03417 mov eax, dword ptr [0x11f3208c] */
  EAX = (r32((uint32_t)(0x11f3208c)));
  /* 11f0341c push eax */
  push32((uint32_t)(EAX));
  /* 11f0341d call dword ptr [0x11f3338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3338c))), 0x11f03423u);
  /* 11f03423 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f03426 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0342a jne 0x11f03433 */
  if (!C.zf) goto L_11f03433;
  /* 11f0342c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0342e jmp 0x11f034fb */
  goto L_11f034fb;
L_11f03433:;
  /* 11f03433 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03436 mov dword ptr [0x11f32088], ecx */
  w32((uint32_t)(0x11f32088), (ECX));
  /* 11f0343c mov edx, dword ptr [0x11f32068] */
  EDX = (r32((uint32_t)(0x11f32068)));
  /* 11f03442 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03445 mov dword ptr [0x11f32068], edx */
  w32((uint32_t)(0x11f32068), (EDX));
L_11f0344b:;
  /* 11f0344b mov eax, dword ptr [0x11f32084] */
  EAX = (r32((uint32_t)(0x11f32084)));
  /* 11f03450 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f03453 mov ecx, dword ptr [0x11f32088] */
  ECX = (r32((uint32_t)(0x11f32088)));
  /* 11f03459 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0345b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0345e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11f03463 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f03465 mov edx, dword ptr [0x11f3208c] */
  EDX = (r32((uint32_t)(0x11f3208c)));
  /* 11f0346b push edx */
  push32((uint32_t)(EDX));
  /* 11f0346c call dword ptr [0x11f33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33390))), 0x11f03472u);
  /* 11f03472 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03475 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11f03478 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0347b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0347f jne 0x11f03485 */
  if (!C.zf) goto L_11f03485;
  /* 11f03481 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f03483 jmp 0x11f034fb */
  goto L_11f034fb;
L_11f03485:;
  /* 11f03485 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f03487 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11f0348c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11f03491 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f03493 call dword ptr [0x11f33388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33388))), 0x11f03499u);
  /* 11f03499 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0349c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11f0349f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f034a2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f034a6 jne 0x11f034c2 */
  if (!C.zf) goto L_11f034c2;
  /* 11f034a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f034ab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f034ae push ecx */
  push32((uint32_t)(ECX));
  /* 11f034af push 0 */
  push32((uint32_t)(0x0u));
  /* 11f034b1 mov edx, dword ptr [0x11f3208c] */
  EDX = (r32((uint32_t)(0x11f3208c)));
  /* 11f034b7 push edx */
  push32((uint32_t)(EDX));
  /* 11f034b8 call dword ptr [0x11f3339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3339c))), 0x11f034beu);
  /* 11f034be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f034c0 jmp 0x11f034fb */
  goto L_11f034fb;
L_11f034c2:;
  /* 11f034c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f034c5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f034cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f034ce mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11f034d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f034d8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11f034df mov eax, dword ptr [0x11f32084] */
  EAX = (r32((uint32_t)(0x11f32084)));
  /* 11f034e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f034e7 mov dword ptr [0x11f32084], eax */
  w32((uint32_t)(0x11f32084), (EAX));
  /* 11f034ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f034ef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11f034f2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11f034f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f034fb:;
  /* 11f034fb mov esp, ebp */
  ESP = (EBP);
  /* 11f034fd pop ebp */
  EBP = (pop32());
  /* 11f034fe ret  */
  ESPCHK(0x11f033f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013500 @ 0x11f03500 (494 bytes, 149 insns) */
void f_11f03500(void) {
  FTRACE(0x11f03500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f03500 push ebp */
  push32((uint32_t)(EBP));
  /* 11f03501 mov ebp, esp */
  EBP = (ESP);
  /* 11f03503 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f03509 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f0350c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11f0350f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f03512 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f03515 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f03518 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11f0351f:;
  /* 11f0351f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03523 jl 0x11f03538 */
  if ((C.sf!=C.of)) goto L_11f03538;
  /* 11f03525 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f03528 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f0352a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0352d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f03530 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03533 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11f03536 jmp 0x11f0351f */
  goto L_11f0351f;
L_11f03538:;
  /* 11f03538 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0353b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f03541 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f03544 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11f0354b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f0354e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11f03555 jmp 0x11f03560 */
  goto L_11f03560;
L_11f03557:;
  /* 11f03557 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0355a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0355d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11f03560:;
  /* 11f03560 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03564 jge 0x11f03586 */
  if ((C.sf==C.of)) goto L_11f03586;
  /* 11f03566 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f03569 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0356c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11f0356f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f03572 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f03575 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f03578 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f0357b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0357e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f03581 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f03584 jmp 0x11f03557 */
  goto L_11f03557;
L_11f03586:;
  /* 11f03586 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f03589 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11f0358c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0358f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f03592 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03594 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f03597 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f03599 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11f0359e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f035a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f035a6 push edx */
  push32((uint32_t)(EDX));
  /* 11f035a7 call dword ptr [0x11f33388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33388))), 0x11f035adu);
  /* 11f035ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f035af jne 0x11f035b9 */
  if (!C.zf) goto L_11f035b9;
  /* 11f035b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f035b4 jmp 0x11f036ea */
  goto L_11f036ea;
L_11f035b9:;
  /* 11f035b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f035bc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f035c1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f035c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f035c7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f035ca jmp 0x11f035d8 */
  goto L_11f035d8;
L_11f035cc:;
  /* 11f035cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f035cf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f035d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f035d8:;
  /* 11f035d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f035db cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f035de ja 0x11f0363d */
  if ((!C.cf&&!C.zf)) goto L_11f0363d;
  /* 11f035e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f035e3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11f035ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f035ed mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11f035f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f035fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f035fd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f03600 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f03603 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11f03609 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0360c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03612 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f03615 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f03618 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0361b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03621 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f03624 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f03627 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0362a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0362f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f03632 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f03635 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11f0363b jmp 0x11f035cc */
  goto L_11f035cc;
L_11f0363d:;
  /* 11f0363d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f03640 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03646 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11f03649 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0364c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0364f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03652 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f03655 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03658 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f0365b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f0365e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f03661 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03664 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f03667 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f0366a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0366d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03670 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11f03673 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03676 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f03679 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f0367c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0367f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03682 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11f03685 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f03688 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0368b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11f03693 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f03696 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f03699 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11f036a4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f036a7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 11f036ab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f036ae mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11f036b1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f036b4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f036b7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 11f036ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f036bc jne 0x11f036cd */
  if (!C.zf) goto L_11f036cd;
  /* 11f036be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f036c1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f036c4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f036c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f036ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11f036cd:;
  /* 11f036cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f036d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f036d5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f036d7 not edx */
  EDX = (~(EDX));
  /* 11f036d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f036dc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f036df and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f036e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f036e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f036e7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_11f036ea:;
  /* 11f036ea mov esp, ebp */
  ESP = (EBP);
  /* 11f036ec pop ebp */
  EBP = (pop32());
  /* 11f036ed ret  */
  ESPCHK(0x11f03500u, _esp0);
  ESP += 4; return;
}

/* FUN_100136f0 @ 0x11f036f0 (1515 bytes, 489 insns) */
void f_11f036f0(void) {
  FTRACE(0x11f036f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f036f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f036f1 mov ebp, esp */
  EBP = (ESP);
  /* 11f036f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f036f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f036f9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f036fc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11f036fe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f03701 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f03704 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11f03707 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11f0370a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0370d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f03710 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03713 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f03716 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f03719 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11f0371c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0371f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03722 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f03728 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0372b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11f03732 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f03735 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f03738 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0373b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f0373e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03741 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f03743 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03746 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11f03749 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0374c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0374f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11f03752 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f03755 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f03757 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11f0375a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f0375d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03760 jle 0x11f03a16 */
  if ((C.zf||C.sf!=C.of)) goto L_11f03a16;
  /* 11f03766 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f03769 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0376c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0376e jne 0x11f0377b */
  if (!C.zf) goto L_11f0377b;
  /* 11f03770 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f03773 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03776 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03779 jle 0x11f03782 */
  if ((C.zf||C.sf!=C.of)) goto L_11f03782;
L_11f0377b:;
  /* 11f0377b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0377d jmp 0x11f03cd7 */
  goto L_11f03cd7;
L_11f03782:;
  /* 11f03782 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f03785 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f03788 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0378b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f0378e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03792 jbe 0x11f0379b */
  if ((C.cf||C.zf)) goto L_11f0379b;
  /* 11f03794 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11f0379b:;
  /* 11f0379b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0379e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f037a1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f037a4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f037a7 jne 0x11f0387d */
  if (!C.zf) goto L_11f0387d;
  /* 11f037ad cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f037b1 jae 0x11f03812 */
  if (!C.cf) goto L_11f03812;
  /* 11f037b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f037b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f037bb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f037bd not edx */
  EDX = (~(EDX));
  /* 11f037bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f037c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f037c5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11f037c9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f037cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f037ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f037d1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11f037d5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f037d8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f037db mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f037de sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f037e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f037e4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f037e7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11f037ea mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f037ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f037f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f037f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f037f6 jne 0x11f03810 */
  if (!C.zf) goto L_11f03810;
  /* 11f037f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f037fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f03800 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f03802 not edx */
  EDX = (~(EDX));
  /* 11f03804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f03807 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f03809 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0380b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0380e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f03810:;
  /* 11f03810 jmp 0x11f0387d */
  goto L_11f0387d;
L_11f03812:;
  /* 11f03812 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f03815 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03818 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f0381d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f0381f not eax */
  EAX = (~(EAX));
  /* 11f03821 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03824 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03827 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11f0382e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f03830 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03833 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03836 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11f0383d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03840 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03843 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11f03846 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f03849 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0384c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0384f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11f03852 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03855 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03858 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f0385c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0385e jne 0x11f0387d */
  if (!C.zf) goto L_11f0387d;
  /* 11f03860 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f03863 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03866 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f0386b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f0386d not eax */
  EAX = (~(EAX));
  /* 11f0386f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f03872 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f03875 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f03877 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0387a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11f0387d:;
  /* 11f0387d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f03880 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f03883 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f03886 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f03889 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f0388c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0388f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f03892 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f03895 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f03898 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11f0389b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0389e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f038a1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f038a4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f038a7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f038ab jle 0x11f039f7 */
  if ((C.zf||C.sf!=C.of)) goto L_11f039f7;
  /* 11f038b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f038b4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f038b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11f038ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f038bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f038c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f038c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11f038c6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f038ca jbe 0x11f038d3 */
  if ((C.cf||C.zf)) goto L_11f038d3;
  /* 11f038cc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11f038d3:;
  /* 11f038d3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f038d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f038d9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11f038dc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11f038df mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f038e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f038e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f038e8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f038eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f038ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f038f1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11f038f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f038f7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f038fa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11f038fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f03900 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f03903 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f03906 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f03909 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0390c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0390f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f03912 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03915 jne 0x11f039e3 */
  if (!C.zf) goto L_11f039e3;
  /* 11f0391b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0391f jae 0x11f0397c */
  if (!C.cf) goto L_11f0397c;
  /* 11f03921 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03924 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03927 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f0392b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0392e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03931 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f03934 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f03937 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0393a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0393d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11f03940 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f03942 jne 0x11f0395a */
  if (!C.zf) goto L_11f0395a;
  /* 11f03944 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f03949 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0394c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f0394e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f03951 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f03953 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f03955 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f03958 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f0395a:;
  /* 11f0395a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f0395f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f03962 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f03964 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03967 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0396a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11f0396e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f03970 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03973 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03976 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11f0397a jmp 0x11f039e3 */
  goto L_11f039e3;
L_11f0397c:;
  /* 11f0397c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0397f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03982 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f03986 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03989 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0398c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f0398f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f03992 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03995 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03998 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11f0399b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0399d jne 0x11f039ba */
  if (!C.zf) goto L_11f039ba;
  /* 11f0399f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f039a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f039a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f039aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f039ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f039af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f039b2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f039b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f039b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11f039ba:;
  /* 11f039ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f039bd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f039c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f039c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f039c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f039ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f039cd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11f039d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f039d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f039d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f039dc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11f039e3:;
  /* 11f039e3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f039e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f039e9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f039eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f039ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f039f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f039f4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11f039f7:;
  /* 11f039f7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f039fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f039fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03a00 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f03a02 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f03a05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03a08 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03a0b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03a0e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11f03a11 jmp 0x11f03cd2 */
  goto L_11f03cd2;
L_11f03a16:;
  /* 11f03a16 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f03a19 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03a1c jge 0x11f03cd2 */
  if ((C.sf==C.of)) goto L_11f03cd2;
  /* 11f03a22 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f03a25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03a28 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03a2b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f03a2d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f03a30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03a33 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03a36 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03a39 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11f03a3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03a3f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03a42 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11f03a45 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f03a48 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03a4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f03a4e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f03a51 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f03a54 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03a57 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11f03a5a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03a5e jbe 0x11f03a67 */
  if ((C.cf||C.zf)) goto L_11f03a67;
  /* 11f03a60 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11f03a67:;
  /* 11f03a67 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f03a6a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f03a6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f03a6f jne 0x11f03bb0 */
  if (!C.zf) goto L_11f03bb0;
  /* 11f03a75 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f03a78 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f03a7b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03a7e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f03a81 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03a85 jbe 0x11f03a8e */
  if ((C.cf||C.zf)) goto L_11f03a8e;
  /* 11f03a87 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11f03a8e:;
  /* 11f03a8e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f03a91 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f03a94 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f03a97 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03a9a jne 0x11f03b70 */
  if (!C.zf) goto L_11f03b70;
  /* 11f03aa0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03aa4 jae 0x11f03b05 */
  if (!C.cf) goto L_11f03b05;
  /* 11f03aa6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f03aab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f03aae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f03ab0 not edx */
  EDX = (~(EDX));
  /* 11f03ab2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03ab5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03ab8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11f03abc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f03abe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03ac1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03ac4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11f03ac8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03acb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03ace mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11f03ad1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f03ad4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03ad7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03ada mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11f03add mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03ae0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03ae3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f03ae7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f03ae9 jne 0x11f03b03 */
  if (!C.zf) goto L_11f03b03;
  /* 11f03aeb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f03af0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f03af3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f03af5 not edx */
  EDX = (~(EDX));
  /* 11f03af7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f03afa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f03afc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f03afe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f03b01 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f03b03:;
  /* 11f03b03 jmp 0x11f03b70 */
  goto L_11f03b70;
L_11f03b05:;
  /* 11f03b05 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f03b08 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03b0b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f03b10 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f03b12 not eax */
  EAX = (~(EAX));
  /* 11f03b14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03b17 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03b1a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11f03b21 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f03b23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03b26 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03b29 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11f03b30 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03b33 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03b36 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11f03b39 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f03b3c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03b3f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03b42 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11f03b45 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03b48 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03b4b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11f03b4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f03b51 jne 0x11f03b70 */
  if (!C.zf) goto L_11f03b70;
  /* 11f03b53 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f03b56 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03b59 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f03b5e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f03b60 not eax */
  EAX = (~(EAX));
  /* 11f03b62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f03b65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f03b68 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f03b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f03b6d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11f03b70:;
  /* 11f03b70 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f03b73 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f03b76 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f03b79 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f03b7c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f03b7f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f03b82 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f03b85 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f03b88 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f03b8b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11f03b8e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f03b91 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03b94 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f03b97 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f03b9a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f03b9d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03ba0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11f03ba3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03ba7 jbe 0x11f03bb0 */
  if ((C.cf||C.zf)) goto L_11f03bb0;
  /* 11f03ba9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11f03bb0:;
  /* 11f03bb0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f03bb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f03bb6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11f03bb9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11f03bbc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03bbf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f03bc2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f03bc5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f03bc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03bcb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f03bce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f03bd1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f03bd4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03bd7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11f03bda mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03bdd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f03be0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03be3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11f03be6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03be9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03bec mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f03bef cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03bf2 jne 0x11f03cbe */
  if (!C.zf) goto L_11f03cbe;
  /* 11f03bf8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03bfc jae 0x11f03c58 */
  if (!C.cf) goto L_11f03c58;
  /* 11f03bfe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03c01 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03c04 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f03c08 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03c0b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03c0e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11f03c11 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f03c13 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03c16 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03c19 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11f03c1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f03c1e jne 0x11f03c36 */
  if (!C.zf) goto L_11f03c36;
  /* 11f03c20 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f03c25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f03c28 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f03c2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f03c2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f03c2f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f03c31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f03c34 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f03c36:;
  /* 11f03c36 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f03c3b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f03c3e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f03c40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03c43 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03c46 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11f03c4a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f03c4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03c4f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03c52 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11f03c56 jmp 0x11f03cbe */
  goto L_11f03cbe;
L_11f03c58:;
  /* 11f03c58 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03c5b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03c5e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11f03c62 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03c65 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03c68 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11f03c6b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f03c6d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03c70 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03c73 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11f03c76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f03c78 jne 0x11f03c95 */
  if (!C.zf) goto L_11f03c95;
  /* 11f03c7a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f03c7d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03c80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11f03c85 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11f03c87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f03c8a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f03c8d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f03c8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f03c92 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11f03c95:;
  /* 11f03c95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f03c98 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03c9b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f03ca0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f03ca2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03ca5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03ca8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11f03caf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f03cb1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03cb4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f03cb7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11f03cbe:;
  /* 11f03cbe mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03cc1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f03cc4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f03cc6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f03cc9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03ccc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f03ccf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11f03cd2:;
  /* 11f03cd2 mov eax, 1 */
  EAX = (0x1u);
L_11f03cd7:;
  /* 11f03cd7 mov esp, ebp */
  ESP = (EBP);
  /* 11f03cd9 pop ebp */
  EBP = (pop32());
  /* 11f03cda ret  */
  ESPCHK(0x11f036f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ce0 @ 0x11f03ce0 (304 bytes, 79 insns) */
void f_11f03ce0(void) {
  FTRACE(0x11f03ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f03ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f03ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11f03ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f03ce4 cmp dword ptr [0x11f32080], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f32080))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03ceb je 0x11f03e0c */
  if (C.zf) goto L_11f03e0c;
  /* 11f03cf1 mov eax, dword ptr [0x11f32078] */
  EAX = (r32((uint32_t)(0x11f32078)));
  /* 11f03cf6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11f03cf9 mov ecx, dword ptr [0x11f32080] */
  ECX = (r32((uint32_t)(0x11f32080)));
  /* 11f03cff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f03d02 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03d04 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f03d07 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11f03d0c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f03d11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f03d14 push eax */
  push32((uint32_t)(EAX));
  /* 11f03d15 call dword ptr [0x11f33398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33398))), 0x11f03d1bu);
  /* 11f03d1b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f03d20 mov ecx, dword ptr [0x11f32078] */
  ECX = (r32((uint32_t)(0x11f32078)));
  /* 11f03d26 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f03d28 mov eax, dword ptr [0x11f32080] */
  EAX = (r32((uint32_t)(0x11f32080)));
  /* 11f03d2d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f03d30 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f03d32 mov edx, dword ptr [0x11f32080] */
  EDX = (r32((uint32_t)(0x11f32080)));
  /* 11f03d38 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f03d3b mov eax, dword ptr [0x11f32080] */
  EAX = (r32((uint32_t)(0x11f32080)));
  /* 11f03d40 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f03d43 mov edx, dword ptr [0x11f32078] */
  EDX = (r32((uint32_t)(0x11f32078)));
  /* 11f03d49 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11f03d54 mov eax, dword ptr [0x11f32080] */
  EAX = (r32((uint32_t)(0x11f32080)));
  /* 11f03d59 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f03d5c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11f03d5f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11f03d62 mov eax, dword ptr [0x11f32080] */
  EAX = (r32((uint32_t)(0x11f32080)));
  /* 11f03d67 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f03d6a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11f03d6d mov edx, dword ptr [0x11f32080] */
  EDX = (r32((uint32_t)(0x11f32080)));
  /* 11f03d73 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11f03d76 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11f03d7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f03d7c jne 0x11f03d92 */
  if (!C.zf) goto L_11f03d92;
  /* 11f03d7e mov edx, dword ptr [0x11f32080] */
  EDX = (r32((uint32_t)(0x11f32080)));
  /* 11f03d84 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f03d87 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11f03d89 mov ecx, dword ptr [0x11f32080] */
  ECX = (r32((uint32_t)(0x11f32080)));
  /* 11f03d8f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11f03d92:;
  /* 11f03d92 mov edx, dword ptr [0x11f32080] */
  EDX = (r32((uint32_t)(0x11f32080)));
  /* 11f03d98 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03d9c jne 0x11f03e02 */
  if (!C.zf) goto L_11f03e02;
  /* 11f03d9e cmp dword ptr [0x11f32084], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f32084))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03da5 jle 0x11f03e02 */
  if ((C.zf||C.sf!=C.of)) goto L_11f03e02;
  /* 11f03da7 mov eax, dword ptr [0x11f32080] */
  EAX = (r32((uint32_t)(0x11f32080)));
  /* 11f03dac mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f03daf push ecx */
  push32((uint32_t)(ECX));
  /* 11f03db0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f03db2 mov edx, dword ptr [0x11f3208c] */
  EDX = (r32((uint32_t)(0x11f3208c)));
  /* 11f03db8 push edx */
  push32((uint32_t)(EDX));
  /* 11f03db9 call dword ptr [0x11f3339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3339c))), 0x11f03dbfu);
  /* 11f03dbf mov eax, dword ptr [0x11f32084] */
  EAX = (r32((uint32_t)(0x11f32084)));
  /* 11f03dc4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f03dc7 mov ecx, dword ptr [0x11f32088] */
  ECX = (r32((uint32_t)(0x11f32088)));
  /* 11f03dcd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03dcf mov edx, dword ptr [0x11f32080] */
  EDX = (r32((uint32_t)(0x11f32080)));
  /* 11f03dd5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03dd8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03dda push ecx */
  push32((uint32_t)(ECX));
  /* 11f03ddb mov eax, dword ptr [0x11f32080] */
  EAX = (r32((uint32_t)(0x11f32080)));
  /* 11f03de0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03de3 push eax */
  push32((uint32_t)(EAX));
  /* 11f03de4 mov ecx, dword ptr [0x11f32080] */
  ECX = (r32((uint32_t)(0x11f32080)));
  /* 11f03dea push ecx */
  push32((uint32_t)(ECX));
  /* 11f03deb call 0x11f01f30 */
  push32(0x11f03df0u); f_11f01f30();
  /* 11f03df0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03df3 mov edx, dword ptr [0x11f32084] */
  EDX = (r32((uint32_t)(0x11f32084)));
  /* 11f03df9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03dfc mov dword ptr [0x11f32084], edx */
  w32((uint32_t)(0x11f32084), (EDX));
L_11f03e02:;
  /* 11f03e02 mov dword ptr [0x11f32080], 0 */
  w32((uint32_t)(0x11f32080), (0x0u));
L_11f03e0c:;
  /* 11f03e0c mov esp, ebp */
  ESP = (EBP);
  /* 11f03e0e pop ebp */
  EBP = (pop32());
  /* 11f03e0f ret  */
  ESPCHK(0x11f03ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e10 @ 0x11f03e10 (1565 bytes, 343 insns) */
void f_11f03e10(void) {
  FTRACE(0x11f03e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f03e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11f03e11 mov ebp, esp */
  EBP = (ESP);
  /* 11f03e13 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f03e19 mov eax, dword ptr [0x11f32084] */
  EAX = (r32((uint32_t)(0x11f32084)));
  /* 11f03e1e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f03e21 push eax */
  push32((uint32_t)(EAX));
  /* 11f03e22 mov ecx, dword ptr [0x11f32088] */
  ECX = (r32((uint32_t)(0x11f32088)));
  /* 11f03e28 push ecx */
  push32((uint32_t)(ECX));
  /* 11f03e29 call dword ptr [0x11f33448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33448))), 0x11f03e2fu);
  /* 11f03e2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f03e31 je 0x11f03e3b */
  if (C.zf) goto L_11f03e3b;
  /* 11f03e33 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f03e36 jmp 0x11f04429 */
  goto L_11f04429;
L_11f03e3b:;
  /* 11f03e3b mov edx, dword ptr [0x11f32088] */
  EDX = (r32((uint32_t)(0x11f32088)));
  /* 11f03e41 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11f03e47 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11f03e51 jmp 0x11f03e62 */
  goto L_11f03e62;
L_11f03e53:;
  /* 11f03e53 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11f03e59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03e5c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11f03e62:;
  /* 11f03e62 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11f03e68 cmp ecx, dword ptr [0x11f32084] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f32084))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03e6e jge 0x11f04427 */
  if ((C.sf==C.of)) goto L_11f04427;
  /* 11f03e74 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11f03e7a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11f03e7d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11f03e83 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11f03e88 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11f03e8e push ecx */
  push32((uint32_t)(ECX));
  /* 11f03e8f call dword ptr [0x11f33448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33448))), 0x11f03e95u);
  /* 11f03e95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f03e97 je 0x11f03ea3 */
  if (C.zf) goto L_11f03ea3;
  /* 11f03e99 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11f03e9e jmp 0x11f04429 */
  goto L_11f04429;
L_11f03ea3:;
  /* 11f03ea3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11f03ea9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11f03eac mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11f03eb2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11f03eb8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03ebe mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11f03ec1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11f03ec7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f03eca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f03ecd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11f03ed7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11f03ee1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f03ee8 jmp 0x11f03ef3 */
  goto L_11f03ef3;
L_11f03eea:;
  /* 11f03eea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f03eed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03ef0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11f03ef3:;
  /* 11f03ef3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03ef7 jge 0x11f043eb */
  if ((C.sf==C.of)) goto L_11f043eb;
  /* 11f03efd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11f03f07 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11f03f11 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11f03f1b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11f03f25 jmp 0x11f03f36 */
  goto L_11f03f36;
L_11f03f27:;
  /* 11f03f27 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11f03f2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03f30 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11f03f36:;
  /* 11f03f36 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03f3d jge 0x11f03f52 */
  if ((C.sf==C.of)) goto L_11f03f52;
  /* 11f03f3f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11f03f45 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11f03f50 jmp 0x11f03f27 */
  goto L_11f03f27;
L_11f03f52:;
  /* 11f03f52 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03f56 jl 0x11f0438d */
  if ((C.sf!=C.of)) goto L_11f0438d;
  /* 11f03f5c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11f03f61 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11f03f67 push ecx */
  push32((uint32_t)(ECX));
  /* 11f03f68 call dword ptr [0x11f33448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33448))), 0x11f03f6eu);
  /* 11f03f6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f03f70 je 0x11f03f7c */
  if (C.zf) goto L_11f03f7c;
  /* 11f03f72 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11f03f77 jmp 0x11f04429 */
  goto L_11f04429;
L_11f03f7c:;
  /* 11f03f7c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11f03f82 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f03f85 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11f03f8f jmp 0x11f03fa0 */
  goto L_11f03fa0;
L_11f03f91:;
  /* 11f03f91 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11f03f97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03f9a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11f03fa0:;
  /* 11f03fa0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03fa7 jge 0x11f04124 */
  if ((C.sf==C.of)) goto L_11f04124;
  /* 11f03fad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f03fb0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03fb3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11f03fb9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f03fbf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f03fc5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11f03fcb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f03fd1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03fd5 jne 0x11f03fe2 */
  if (!C.zf) goto L_11f03fe2;
  /* 11f03fd7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11f03fdd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f03fe0 je 0x11f03fec */
  if (C.zf) goto L_11f03fec;
L_11f03fe2:;
  /* 11f03fe2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11f03fe7 jmp 0x11f04429 */
  goto L_11f04429;
L_11f03fec:;
  /* 11f03fec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f03ff2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f03ff4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11f03ffa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11f04000 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11f04006 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11f0400c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0400f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f04011 je 0x11f04049 */
  if (C.zf) goto L_11f04049;
  /* 11f04013 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11f04019 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0401c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11f04022 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0402c jle 0x11f04038 */
  if ((C.zf||C.sf!=C.of)) goto L_11f04038;
  /* 11f0402e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11f04033 jmp 0x11f04429 */
  goto L_11f04429;
L_11f04038:;
  /* 11f04038 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11f0403e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04041 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11f04047 jmp 0x11f0408b */
  goto L_11f0408b;
L_11f04049:;
  /* 11f04049 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11f0404f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f04052 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f04055 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11f0405b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04062 jle 0x11f0406e */
  if ((C.zf||C.sf!=C.of)) goto L_11f0406e;
  /* 11f04064 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11f0406e:;
  /* 11f0406e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11f04074 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11f0407b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0407e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11f04084 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11f0408b:;
  /* 11f0408b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04092 jl 0x11f040ad */
  if ((C.sf!=C.of)) goto L_11f040ad;
  /* 11f04094 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11f0409a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0409d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0409f jne 0x11f040ad */
  if (!C.zf) goto L_11f040ad;
  /* 11f040a1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f040ab jle 0x11f040b7 */
  if ((C.zf||C.sf!=C.of)) goto L_11f040b7;
L_11f040ad:;
  /* 11f040ad mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11f040b2 jmp 0x11f04429 */
  goto L_11f04429;
L_11f040b7:;
  /* 11f040b7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f040bd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f040c3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f040c6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f040cc je 0x11f040d8 */
  if (C.zf) goto L_11f040d8;
  /* 11f040ce mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11f040d3 jmp 0x11f04429 */
  goto L_11f04429;
L_11f040d8:;
  /* 11f040d8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f040de add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f040e4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11f040ea mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f040f0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f040f6 jb 0x11f03fec */
  if (C.cf) goto L_11f03fec;
  /* 11f040fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f04102 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04108 je 0x11f04114 */
  if (C.zf) goto L_11f04114;
  /* 11f0410a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11f0410f jmp 0x11f04429 */
  goto L_11f04429;
L_11f04114:;
  /* 11f04114 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f04117 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0411c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0411f jmp 0x11f03f91 */
  goto L_11f03f91;
L_11f04124:;
  /* 11f04124 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f04127 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f04129 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0412f je 0x11f0413b */
  if (C.zf) goto L_11f0413b;
  /* 11f04131 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11f04136 jmp 0x11f04429 */
  goto L_11f04429;
L_11f0413b:;
  /* 11f0413b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0413e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11f04144 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11f0414b jmp 0x11f04156 */
  goto L_11f04156;
L_11f0414d:;
  /* 11f0414d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f04150 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04153 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11f04156:;
  /* 11f04156 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0415a jge 0x11f0438d */
  if ((C.sf==C.of)) goto L_11f0438d;
  /* 11f04160 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11f0416a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11f04170 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11f04176:;
  /* 11f04176 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f0417c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f0417f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11f04185 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11f0418b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04191 je 0x11f042ba */
  if (C.zf) goto L_11f042ba;
  /* 11f04197 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0419a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11f041a0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f041a7 je 0x11f042ba */
  if (C.zf) goto L_11f042ba;
  /* 11f041ad mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11f041b3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f041b9 jb 0x11f041ce */
  if (C.cf) goto L_11f041ce;
  /* 11f041bb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11f041c1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f041c6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f041cc jb 0x11f041d8 */
  if (C.cf) goto L_11f041d8;
L_11f041ce:;
  /* 11f041ce mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11f041d3 jmp 0x11f04429 */
  goto L_11f04429;
L_11f041d8:;
  /* 11f041d8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11f041de and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f041e4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 11f041ea mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11f041f0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f041f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11f041f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f041f9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f041fe mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11f04204:;
  /* 11f04204 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f04207 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0420d je 0x11f0422e */
  if (C.zf) goto L_11f0422e;
  /* 11f0420f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f04212 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04218 jne 0x11f0421c */
  if (!C.zf) goto L_11f0421c;
  /* 11f0421a jmp 0x11f0422e */
  goto L_11f0422e;
L_11f0421c:;
  /* 11f0421c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0421f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f04221 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11f04224 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f04227 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04229 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11f0422c jmp 0x11f04204 */
  goto L_11f04204;
L_11f0422e:;
  /* 11f0422e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f04231 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04237 jne 0x11f04243 */
  if (!C.zf) goto L_11f04243;
  /* 11f04239 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 11f0423e jmp 0x11f04429 */
  goto L_11f04429;
L_11f04243:;
  /* 11f04243 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11f04249 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0424b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f0424e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f04251 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11f04257 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0425e jle 0x11f0426a */
  if ((C.zf||C.sf!=C.of)) goto L_11f0426a;
  /* 11f04260 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11f0426a:;
  /* 11f0426a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11f04270 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04273 je 0x11f0427f */
  if (C.zf) goto L_11f0427f;
  /* 11f04275 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 11f0427a jmp 0x11f04429 */
  goto L_11f04429;
L_11f0427f:;
  /* 11f0427f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11f04285 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f04288 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0428e je 0x11f0429a */
  if (C.zf) goto L_11f0429a;
  /* 11f04290 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11f04295 jmp 0x11f04429 */
  goto L_11f04429;
L_11f0429a:;
  /* 11f0429a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11f042a0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11f042a6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11f042ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f042af mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11f042b5 jmp 0x11f04176 */
  goto L_11f04176;
L_11f042ba:;
  /* 11f042ba cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f042c1 je 0x11f04331 */
  if (C.zf) goto L_11f04331;
  /* 11f042c3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f042c7 jge 0x11f042fb */
  if ((C.sf==C.of)) goto L_11f042fb;
  /* 11f042c9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f042ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f042d1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f042d3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11f042d9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f042db mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11f042e1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f042e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f042e9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f042eb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11f042f1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f042f3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11f042f9 jmp 0x11f04331 */
  goto L_11f04331;
L_11f042fb:;
  /* 11f042fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f042fe sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f04301 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f04306 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f04308 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 11f0430e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f04310 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11f04316 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f04319 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0431c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11f04321 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11f04323 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11f04329 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0432b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11f04331:;
  /* 11f04331 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11f04337 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f0433a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04340 jne 0x11f04354 */
  if (!C.zf) goto L_11f04354;
  /* 11f04342 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f04345 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11f0434b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04352 je 0x11f0435e */
  if (C.zf) goto L_11f0435e;
L_11f04354:;
  /* 11f04354 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11f04359 jmp 0x11f04429 */
  goto L_11f04429;
L_11f0435e:;
  /* 11f0435e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11f04364 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f04367 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0436d je 0x11f04379 */
  if (C.zf) goto L_11f04379;
  /* 11f0436f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11f04374 jmp 0x11f04429 */
  goto L_11f04429;
L_11f04379:;
  /* 11f04379 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 11f0437f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04382 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 11f04388 jmp 0x11f0414d */
  goto L_11f0414d;
L_11f0438d:;
  /* 11f0438d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04390 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11f04396 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11f0439c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f043a0 jne 0x11f043ba */
  if (!C.zf) goto L_11f043ba;
  /* 11f043a2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f043a5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11f043ab mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11f043b1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f043b8 je 0x11f043c1 */
  if (C.zf) goto L_11f043c1;
L_11f043ba:;
  /* 11f043ba mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 11f043bf jmp 0x11f04429 */
  goto L_11f04429;
L_11f043c1:;
  /* 11f043c1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11f043c7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f043cd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11f043d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f043d6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f043db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f043de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f043e1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f043e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f043e6 jmp 0x11f03eea */
  goto L_11f03eea;
L_11f043eb:;
  /* 11f043eb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11f043f1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11f043f7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f043f9 jne 0x11f0440c */
  if (!C.zf) goto L_11f0440c;
  /* 11f043fb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11f04401 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11f04407 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0440a je 0x11f04413 */
  if (C.zf) goto L_11f04413;
L_11f0440c:;
  /* 11f0440c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11f04411 jmp 0x11f04429 */
  goto L_11f04429;
L_11f04413:;
  /* 11f04413 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11f04419 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0441c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11f04422 jmp 0x11f03e53 */
  goto L_11f03e53;
L_11f04427:;
  /* 11f04427 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f04429:;
  /* 11f04429 mov esp, ebp */
  ESP = (EBP);
  /* 11f0442b pop ebp */
  EBP = (pop32());
  /* 11f0442c ret  */
  ESPCHK(0x11f03e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10014430 @ 0x11f04430 (250 bytes, 92 insns) */
void f_11f04430(void) {
  FTRACE(0x11f04430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f04430 push ebp */
  push32((uint32_t)(EBP));
  /* 11f04431 mov ebp, esp */
  EBP = (ESP);
  /* 11f04433 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f04436 push ebx */
  push32((uint32_t)(EBX));
  /* 11f04437 push esi */
  push32((uint32_t)(ESI));
  /* 11f04438 push edi */
  push32((uint32_t)(EDI));
  /* 11f04439 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11f0443c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f0443f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11f04442 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11f04445:;
  /* 11f04445 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04449 jne 0x11f04469 */
  if (!C.zf) goto L_11f04469;
  /* 11f0444b push 0x11f2b1f0 */
  push32((uint32_t)(0x11f2b1f0u));
  /* 11f04450 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f04452 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11f04454 push 0x11f2b1e4 */
  push32((uint32_t)(0x11f2b1e4u));
  /* 11f04459 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0445b call 0x11efa680 */
  push32(0x11f04460u); f_11efa680();
  /* 11f04460 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04463 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04466 jne 0x11f04469 */
  if (!C.zf) goto L_11f04469;
  /* 11f04468 int3  */
  x86_unimpl("int3 @ 0x11f04468");
L_11f04469:;
  /* 11f04469 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0446b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0446d jne 0x11f04445 */
  if (!C.zf) goto L_11f04445;
L_11f0446f:;
  /* 11f0446f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04473 jne 0x11f04493 */
  if (!C.zf) goto L_11f04493;
  /* 11f04475 push 0x11f2b1d4 */
  push32((uint32_t)(0x11f2b1d4u));
  /* 11f0447a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0447c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11f0447e push 0x11f2b1e4 */
  push32((uint32_t)(0x11f2b1e4u));
  /* 11f04483 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f04485 call 0x11efa680 */
  push32(0x11f0448au); f_11efa680();
  /* 11f0448a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0448d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04490 jne 0x11f04493 */
  if (!C.zf) goto L_11f04493;
  /* 11f04492 int3  */
  x86_unimpl("int3 @ 0x11f04492");
L_11f04493:;
  /* 11f04493 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f04495 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f04497 jne 0x11f0446f */
  if (!C.zf) goto L_11f0446f;
  /* 11f04499 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0449c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11f044a3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f044a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f044a9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f044ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f044af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f044b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f044b4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f044b7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 11f044be mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f044c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11f044c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f044c5 push edx */
  push32((uint32_t)(EDX));
  /* 11f044c6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f044c9 push eax */
  push32((uint32_t)(EAX));
  /* 11f044ca call 0x11f06210 */
  push32(0x11f044cfu); f_11f06210();
  /* 11f044cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f044d2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f044d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f044d8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f044db sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f044de mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f044e1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f044e4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f044e7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f044eb jl 0x11f0450f */
  if ((C.sf!=C.of)) goto L_11f0450f;
  /* 11f044ed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f044f0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f044f2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11f044f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f044f7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f044fd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11f04500 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f04503 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f04505 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04508 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0450b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f0450d jmp 0x11f04520 */
  goto L_11f04520;
L_11f0450f:;
  /* 11f0450f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f04512 push edx */
  push32((uint32_t)(EDX));
  /* 11f04513 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f04515 call 0x11f05f90 */
  push32(0x11f0451au); f_11f05f90();
  /* 11f0451a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0451d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11f04520:;
  /* 11f04520 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f04523 pop edi */
  EDI = (pop32());
  /* 11f04524 pop esi */
  ESI = (pop32());
  /* 11f04525 pop ebx */
  EBX = (pop32());
  /* 11f04526 mov esp, ebp */
  ESP = (EBP);
  /* 11f04528 pop ebp */
  EBP = (pop32());
  /* 11f04529 ret  */
  ESPCHK(0x11f04430u, _esp0);
  ESP += 4; return;
}

/* FUN_10014530 @ 0x11f04530 (91 bytes, 30 insns) */
void f_11f04530(void) {
  FTRACE(0x11f04530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f04530 push ebp */
  push32((uint32_t)(EBP));
  /* 11f04531 mov ebp, esp */
  EBP = (ESP);
  /* 11f04533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f04536 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f04538 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0453e jne 0x11f0455e */
  if (!C.zf) goto L_11f0455e;
  /* 11f04540 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f04543 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f04545 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04549 jne 0x11f0455e */
  if (!C.zf) goto L_11f0455e;
  /* 11f0454b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0454e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f04550 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04557 jne 0x11f0455e */
  if (!C.zf) goto L_11f0455e;
  /* 11f04559 call 0x11efe990 */
  push32(0x11f0455eu); f_11efe990();
L_11f0455e:;
  /* 11f0455e cmp dword ptr [0x11f308e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f308e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04565 je 0x11f04585 */
  if (C.zf) goto L_11f04585;
  /* 11f04567 mov eax, dword ptr [0x11f308e8] */
  EAX = (r32((uint32_t)(0x11f308e8)));
  /* 11f0456c push eax */
  push32((uint32_t)(EAX));
  /* 11f0456d call 0x11f04630 */
  push32(0x11f04572u); f_11f04630();
  /* 11f04572 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04575 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f04577 je 0x11f04585 */
  if (C.zf) goto L_11f04585;
  /* 11f04579 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0457c push ecx */
  push32((uint32_t)(ECX));
  /* 11f0457d call dword ptr [0x11f308e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f308e8))), 0x11f04583u);
  /* 11f04583 jmp 0x11f04587 */
  goto L_11f04587;
L_11f04585:;
  /* 11f04585 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f04587:;
  /* 11f04587 pop ebp */
  EBP = (pop32());
  /* 11f04588 ret 4 */
  ESPCHK(0x11f04530u, _esp0);
  ESP += 8; return;
}

/* FUN_10014590 @ 0x11f04590 (21 bytes, 7 insns) */
void f_11f04590(void) {
  FTRACE(0x11f04590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f04590 push ebp */
  push32((uint32_t)(EBP));
  /* 11f04591 mov ebp, esp */
  EBP = (ESP);
  /* 11f04593 push 0x11f04530 */
  push32((uint32_t)(0x11f04530u));
  /* 11f04598 call dword ptr [0x11f33384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33384))), 0x11f0459eu);
  /* 11f0459e mov dword ptr [0x11f308e8], eax */
  w32((uint32_t)(0x11f308e8), (EAX));
  /* 11f045a3 pop ebp */
  EBP = (pop32());
  /* 11f045a4 ret  */
  ESPCHK(0x11f04590u, _esp0);
  ESP += 4; return;
}

/* FUN_100145b0 @ 0x11f045b0 (17 bytes, 7 insns) */
void f_11f045b0(void) {
  FTRACE(0x11f045b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f045b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f045b1 mov ebp, esp */
  EBP = (ESP);
  /* 11f045b3 mov eax, dword ptr [0x11f308e8] */
  EAX = (r32((uint32_t)(0x11f308e8)));
  /* 11f045b8 push eax */
  push32((uint32_t)(EAX));
  /* 11f045b9 call dword ptr [0x11f33384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33384))), 0x11f045bfu);
  /* 11f045bf pop ebp */
  EBP = (pop32());
  /* 11f045c0 ret  */
  ESPCHK(0x11f045b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100145d0 @ 0x11f045d0 (43 bytes, 16 insns) */
void f_11f045d0(void) {
  FTRACE(0x11f045d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f045d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f045d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f045d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f045d4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f045db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f045de push eax */
  push32((uint32_t)(EAX));
  /* 11f045df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f045e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f045e3 call dword ptr [0x11f3341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3341c))), 0x11f045e9u);
  /* 11f045e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f045eb je 0x11f045f4 */
  if (C.zf) goto L_11f045f4;
  /* 11f045ed mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11f045f4:;
  /* 11f045f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f045f7 mov esp, ebp */
  ESP = (EBP);
  /* 11f045f9 pop ebp */
  EBP = (pop32());
  /* 11f045fa ret  */
  ESPCHK(0x11f045d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014600 @ 0x11f04600 (43 bytes, 16 insns) */
void f_11f04600(void) {
  FTRACE(0x11f04600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f04600 push ebp */
  push32((uint32_t)(EBP));
  /* 11f04601 mov ebp, esp */
  EBP = (ESP);
  /* 11f04603 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04604 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f0460b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0460e push eax */
  push32((uint32_t)(EAX));
  /* 11f0460f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f04612 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04613 call dword ptr [0x11f33448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33448))), 0x11f04619u);
  /* 11f04619 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0461b je 0x11f04624 */
  if (C.zf) goto L_11f04624;
  /* 11f0461d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11f04624:;
  /* 11f04624 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f04627 mov esp, ebp */
  ESP = (EBP);
  /* 11f04629 pop ebp */
  EBP = (pop32());
  /* 11f0462a ret  */
  ESPCHK(0x11f04600u, _esp0);
  ESP += 4; return;
}

/* _ValidateExecute @ 0x11f04630 (39 bytes, 14 insns) */
void f_11f04630(void) {
  FTRACE(0x11f04630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f04630 push ebp */
  push32((uint32_t)(EBP));
  /* 11f04631 mov ebp, esp */
  EBP = (ESP);
  /* 11f04633 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04634 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f0463b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0463e push eax */
  push32((uint32_t)(EAX));
  /* 11f0463f call dword ptr [0x11f33380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33380))), 0x11f04645u);
  /* 11f04645 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f04647 je 0x11f04650 */
  if (C.zf) goto L_11f04650;
  /* 11f04649 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11f04650:;
  /* 11f04650 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f04653 mov esp, ebp */
  ESP = (EBP);
  /* 11f04655 pop ebp */
  EBP = (pop32());
  /* 11f04656 ret  */
  ESPCHK(0x11f04630u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11f04660 (129 bytes, 56 insns) */
void f_11f04660(void) {
  FTRACE(0x11f04660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f04660 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11f04664 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f04668 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11f0466e jne 0x11f046ac */
  if (!C.zf) goto L_11f046ac;
L_11f04670:;
  /* 11f04670 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f04672 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f04674 jne 0x11f046a4 */
  if (!C.zf) goto L_11f046a4;
  /* 11f04676 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f04678 je 0x11f046a0 */
  if (C.zf) goto L_11f046a0;
  /* 11f0467a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0467d jne 0x11f046a4 */
  if (!C.zf) goto L_11f046a4;
  /* 11f0467f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11f04681 je 0x11f046a0 */
  if (C.zf) goto L_11f046a0;
  /* 11f04683 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11f04686 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f04689 jne 0x11f046a4 */
  if (!C.zf) goto L_11f046a4;
  /* 11f0468b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f0468d je 0x11f046a0 */
  if (C.zf) goto L_11f046a0;
  /* 11f0468f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f04692 jne 0x11f046a4 */
  if (!C.zf) goto L_11f046a4;
  /* 11f04694 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04697 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0469a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11f0469c jne 0x11f04670 */
  if (!C.zf) goto L_11f04670;
  /* 11f0469e mov edi, edi */
  EDI = (EDI);
L_11f046a0:;
  /* 11f046a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f046a2 ret  */
  ESPCHK(0x11f04660u, _esp0);
  ESP += 4; return;
  /* 11f046a3 nop  */
  /* nop */
L_11f046a4:;
  /* 11f046a4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f046a6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f046a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f046a9 ret  */
  ESPCHK(0x11f04660u, _esp0);
  ESP += 4; return;
  /* 11f046aa mov edi, edi */
  EDI = (EDI);
L_11f046ac:;
  /* 11f046ac test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11f046b2 je 0x11f046c8 */
  if (C.zf) goto L_11f046c8;
  /* 11f046b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f046b6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f046b7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f046b9 jne 0x11f046a4 */
  if (!C.zf) goto L_11f046a4;
  /* 11f046bb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f046bc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f046be je 0x11f046a0 */
  if (C.zf) goto L_11f046a0;
  /* 11f046c0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11f046c6 je 0x11f04670 */
  if (C.zf) goto L_11f04670;
L_11f046c8:;
  /* 11f046c8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11f046cb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f046ce cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f046d0 jne 0x11f046a4 */
  if (!C.zf) goto L_11f046a4;
  /* 11f046d2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f046d4 je 0x11f046a0 */
  if (C.zf) goto L_11f046a0;
  /* 11f046d6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f046d9 jne 0x11f046a4 */
  if (!C.zf) goto L_11f046a4;
  /* 11f046db or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11f046dd je 0x11f046a0 */
  if (C.zf) goto L_11f046a0;
  /* 11f046df add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f046e2 jmp 0x11f04670 */
  goto L_11f04670;
}

/* FUN_100147a9 @ 0x11f047a9 (27 bytes, 11 insns) */
void f_11f047a9(void) {
  FTRACE(0x11f047a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f047a9 push ebp */
  push32((uint32_t)(EBP));
  /* 11f047aa mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f047ae mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11f047b0 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11f047b3 push eax */
  push32((uint32_t)(EAX));
  /* 11f047b4 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11f047b7 push eax */
  push32((uint32_t)(EAX));
  /* 11f047b8 call 0x11ef9f32 */
  push32(0x11f047bdu); f_11ef9f32();
  /* 11f047bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f047c0 pop ebp */
  EBP = (pop32());
  /* 11f047c1 ret 4 */
  ESPCHK(0x11f047a9u, _esp0);
  ESP += 8; return;
}

/* __XcptFilter @ 0x11f047d0 (446 bytes, 130 insns) */
void f_11f047d0(void) {
  FTRACE(0x11f047d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f047d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f047d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f047d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f047d6 call 0x11efe7c0 */
  push32(0x11f047dbu); f_11efe7c0();
  /* 11f047db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f047de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f047e1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11f047e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f047e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f047e8 push edx */
  push32((uint32_t)(EDX));
  /* 11f047e9 call 0x11f04990 */
  push32(0x11f047eeu); f_11f04990();
  /* 11f047ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f047f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f047f4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f047f8 je 0x11f04803 */
  if (C.zf) goto L_11f04803;
  /* 11f047fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f047fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04801 jne 0x11f04812 */
  if (!C.zf) goto L_11f04812;
L_11f04803:;
  /* 11f04803 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f04806 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04807 call dword ptr [0x11f3337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3337c))), 0x11f0480du);
  /* 11f0480d jmp 0x11f0498a */
  goto L_11f0498a;
L_11f04812:;
  /* 11f04812 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f04815 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04819 jne 0x11f0482f */
  if (!C.zf) goto L_11f0482f;
  /* 11f0481b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0481e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11f04825 mov eax, 1 */
  EAX = (0x1u);
  /* 11f0482a jmp 0x11f0498a */
  goto L_11f0498a;
L_11f0482f:;
  /* 11f0482f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f04832 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04836 jne 0x11f04840 */
  if (!C.zf) goto L_11f04840;
  /* 11f04838 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0483b jmp 0x11f0498a */
  goto L_11f0498a;
L_11f04840:;
  /* 11f04840 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f04843 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f04846 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f04849 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0484c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11f0484f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11f04852 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f04855 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f04858 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11f0485b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0485e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04862 jne 0x11f04967 */
  if (!C.zf) goto L_11f04967;
  /* 11f04868 mov eax, dword ptr [0x11f2e328] */
  EAX = (r32((uint32_t)(0x11f2e328)));
  /* 11f0486d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f04870 jmp 0x11f0487b */
  goto L_11f0487b;
L_11f04872:;
  /* 11f04872 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f04875 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04878 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11f0487b:;
  /* 11f0487b mov edx, dword ptr [0x11f2e328] */
  EDX = (r32((uint32_t)(0x11f2e328)));
  /* 11f04881 add edx, dword ptr [0x11f2e32c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11f2e32c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04887 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0488a jge 0x11f048a2 */
  if ((C.sf==C.of)) goto L_11f048a2;
  /* 11f0488c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0488f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f04892 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f04895 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11f04898 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11f048a0 jmp 0x11f04872 */
  goto L_11f04872;
L_11f048a2:;
  /* 11f048a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f048a5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11f048a8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f048ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f048ae cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f048b4 jne 0x11f048c5 */
  if (!C.zf) goto L_11f048c5;
  /* 11f048b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f048b9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11f048c0 jmp 0x11f0494d */
  goto L_11f0494d;
L_11f048c5:;
  /* 11f048c5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f048c8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f048ce jne 0x11f048dc */
  if (!C.zf) goto L_11f048dc;
  /* 11f048d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f048d3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11f048da jmp 0x11f0494d */
  goto L_11f0494d;
L_11f048dc:;
  /* 11f048dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f048df cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f048e5 jne 0x11f048f3 */
  if (!C.zf) goto L_11f048f3;
  /* 11f048e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f048ea mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11f048f1 jmp 0x11f0494d */
  goto L_11f0494d;
L_11f048f3:;
  /* 11f048f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f048f6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f048fc jne 0x11f0490a */
  if (!C.zf) goto L_11f0490a;
  /* 11f048fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f04901 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11f04908 jmp 0x11f0494d */
  goto L_11f0494d;
L_11f0490a:;
  /* 11f0490a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0490d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04913 jne 0x11f04921 */
  if (!C.zf) goto L_11f04921;
  /* 11f04915 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f04918 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11f0491f jmp 0x11f0494d */
  goto L_11f0494d;
L_11f04921:;
  /* 11f04921 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f04924 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0492a jne 0x11f04938 */
  if (!C.zf) goto L_11f04938;
  /* 11f0492c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0492f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11f04936 jmp 0x11f0494d */
  goto L_11f0494d;
L_11f04938:;
  /* 11f04938 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0493b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04941 jne 0x11f0494d */
  if (!C.zf) goto L_11f0494d;
  /* 11f04943 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f04946 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11f0494d:;
  /* 11f0494d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f04950 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11f04953 push edx */
  push32((uint32_t)(EDX));
  /* 11f04954 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f04956 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11f04959u);
  /* 11f04959 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0495c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0495f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04962 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11f04965 jmp 0x11f0497e */
  goto L_11f0497e;
L_11f04967:;
  /* 11f04967 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0496a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11f04971 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f04974 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f04977 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04978 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11f0497bu);
  /* 11f0497b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0497e:;
  /* 11f0497e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f04981 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f04984 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11f04987 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f0498a:;
  /* 11f0498a mov esp, ebp */
  ESP = (EBP);
  /* 11f0498c pop ebp */
  EBP = (pop32());
  /* 11f0498d ret  */
  ESPCHK(0x11f047d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014990 @ 0x11f04990 (89 bytes, 35 insns) */
void f_11f04990(void) {
  FTRACE(0x11f04990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f04990 push ebp */
  push32((uint32_t)(EBP));
  /* 11f04991 mov ebp, esp */
  EBP = (ESP);
  /* 11f04993 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04994 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f04997 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f0499a:;
  /* 11f0499a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0499d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0499f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f049a2 je 0x11f049c2 */
  if (C.zf) goto L_11f049c2;
  /* 11f049a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f049a7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f049aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f049ad mov ecx, dword ptr [0x11f2e334] */
  ECX = (r32((uint32_t)(0x11f2e334)));
  /* 11f049b3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f049b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f049b9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f049bb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f049be jae 0x11f049c2 */
  if (!C.cf) goto L_11f049c2;
  /* 11f049c0 jmp 0x11f0499a */
  goto L_11f0499a;
L_11f049c2:;
  /* 11f049c2 mov eax, dword ptr [0x11f2e334] */
  EAX = (r32((uint32_t)(0x11f2e334)));
  /* 11f049c7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f049ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f049cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f049cf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f049d2 jae 0x11f049de */
  if (!C.cf) goto L_11f049de;
  /* 11f049d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f049d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f049d9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f049dc je 0x11f049e2 */
  if (C.zf) goto L_11f049e2;
L_11f049de:;
  /* 11f049de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f049e0 jmp 0x11f049e5 */
  goto L_11f049e5;
L_11f049e2:;
  /* 11f049e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f049e5:;
  /* 11f049e5 mov esp, ebp */
  ESP = (EBP);
  /* 11f049e7 pop ebp */
  EBP = (pop32());
  /* 11f049e8 ret  */
  ESPCHK(0x11f04990u, _esp0);
  ESP += 4; return;
}

/* _abort @ 0x11f049f0 (30 bytes, 12 insns) */
void f_11f049f0(void) {
  FTRACE(0x11f049f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f049f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f049f1 mov ebp, esp */
  EBP = (ESP);
  /* 11f049f3 push 0xa */
  push32((uint32_t)(0xau));
  /* 11f049f5 call 0x11effb50 */
  push32(0x11f049fau); f_11effb50();
  /* 11f049fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f049fd push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11f049ff call 0x11f006c0 */
  push32(0x11f04a04u); f_11f006c0();
  /* 11f04a04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04a07 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f04a09 call 0x11efeb30 */
  push32(0x11f04a0eu); f_11efeb30();
  /* 11f04a0e pop ebp */
  EBP = (pop32());
  /* 11f04a0f ret  */
  ESPCHK(0x11f049f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a10 @ 0x11f04a10 (61 bytes, 18 insns) */
void f_11f04a10(void) {
  FTRACE(0x11f04a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f04a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11f04a11 mov ebp, esp */
  EBP = (ESP);
  /* 11f04a13 cmp dword ptr [0x11f309a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04a1a jne 0x11f04a4b */
  if (!C.zf) goto L_11f04a4b;
  /* 11f04a1c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f04a1e call 0x11efb9c0 */
  push32(0x11f04a23u); f_11efb9c0();
  /* 11f04a23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04a26 cmp dword ptr [0x11f309a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04a2d jne 0x11f04a41 */
  if (!C.zf) goto L_11f04a41;
  /* 11f04a2f call 0x11f04a70 */
  push32(0x11f04a34u); f_11f04a70();
  /* 11f04a34 mov eax, dword ptr [0x11f309a8] */
  EAX = (r32((uint32_t)(0x11f309a8)));
  /* 11f04a39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04a3c mov dword ptr [0x11f309a8], eax */
  w32((uint32_t)(0x11f309a8), (EAX));
L_11f04a41:;
  /* 11f04a41 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f04a43 call 0x11efba60 */
  push32(0x11f04a48u); f_11efba60();
  /* 11f04a48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f04a4b:;
  /* 11f04a4b pop ebp */
  EBP = (pop32());
  /* 11f04a4c ret  */
  ESPCHK(0x11f04a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a50 @ 0x11f04a50 (30 bytes, 11 insns) */
void f_11f04a50(void) {
  FTRACE(0x11f04a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f04a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11f04a51 mov ebp, esp */
  EBP = (ESP);
  /* 11f04a53 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f04a55 call 0x11efb9c0 */
  push32(0x11f04a5au); f_11efb9c0();
  /* 11f04a5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04a5d call 0x11f04a70 */
  push32(0x11f04a62u); f_11f04a70();
  /* 11f04a62 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f04a64 call 0x11efba60 */
  push32(0x11f04a69u); f_11efba60();
  /* 11f04a69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04a6c pop ebp */
  EBP = (pop32());
  /* 11f04a6d ret  */
  ESPCHK(0x11f04a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a70 @ 0x11f04a70 (939 bytes, 266 insns) */
void f_11f04a70(void) {
  FTRACE(0x11f04a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f04a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11f04a71 mov ebp, esp */
  EBP = (ESP);
  /* 11f04a73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f04a76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f04a7d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f04a7f call 0x11efb9c0 */
  push32(0x11f04a84u); f_11efb9c0();
  /* 11f04a84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04a87 mov dword ptr [0x11f308f0], 0 */
  w32((uint32_t)(0x11f308f0), (0x0u));
  /* 11f04a91 mov dword ptr [0x11f2e3e0], 0xffffffff */
  w32((uint32_t)(0x11f2e3e0), (0xffffffffu));
  /* 11f04a9b mov eax, dword ptr [0x11f2e3e0] */
  EAX = (r32((uint32_t)(0x11f2e3e0)));
  /* 11f04aa0 mov dword ptr [0x11f2e3d0], eax */
  w32((uint32_t)(0x11f2e3d0), (EAX));
  /* 11f04aa5 push 0x11f2b290 */
  push32((uint32_t)(0x11f2b290u));
  /* 11f04aaa call 0x11f0a460 */
  push32(0x11f04aafu); f_11f0a460();
  /* 11f04aaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04ab2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f04ab5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04ab9 jne 0x11f04bf3 */
  if (!C.zf) goto L_11f04bf3;
  /* 11f04abf push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f04ac1 call 0x11efba60 */
  push32(0x11f04ac6u); f_11efba60();
  /* 11f04ac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04ac9 push 0x11f308f8 */
  push32((uint32_t)(0x11f308f8u));
  /* 11f04ace call dword ptr [0x11f333f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333f8))), 0x11f04ad4u);
  /* 11f04ad4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04ad7 je 0x11f04bee */
  if (C.zf) goto L_11f04bee;
  /* 11f04add mov dword ptr [0x11f308f0], 1 */
  w32((uint32_t)(0x11f308f0), (0x1u));
  /* 11f04ae7 mov ecx, dword ptr [0x11f308f8] */
  ECX = (r32((uint32_t)(0x11f308f8)));
  /* 11f04aed imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f04af0 mov dword ptr [0x11f2e338], ecx */
  w32((uint32_t)(0x11f2e338), (ECX));
  /* 11f04af6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f04af8 mov dx, word ptr [0x11f3093e] */
  DX = (r16((uint32_t)(0x11f3093e)));
  /* 11f04aff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f04b01 je 0x11f04b19 */
  if (C.zf) goto L_11f04b19;
  /* 11f04b03 mov eax, dword ptr [0x11f3094c] */
  EAX = (r32((uint32_t)(0x11f3094c)));
  /* 11f04b08 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f04b0b mov ecx, dword ptr [0x11f2e338] */
  ECX = (r32((uint32_t)(0x11f2e338)));
  /* 11f04b11 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04b13 mov dword ptr [0x11f2e338], ecx */
  w32((uint32_t)(0x11f2e338), (ECX));
L_11f04b19:;
  /* 11f04b19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f04b1b mov dx, word ptr [0x11f30992] */
  DX = (r16((uint32_t)(0x11f30992)));
  /* 11f04b22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f04b24 je 0x11f04b4e */
  if (C.zf) goto L_11f04b4e;
  /* 11f04b26 cmp dword ptr [0x11f309a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04b2d je 0x11f04b4e */
  if (C.zf) goto L_11f04b4e;
  /* 11f04b2f mov dword ptr [0x11f2e33c], 1 */
  w32((uint32_t)(0x11f2e33c), (0x1u));
  /* 11f04b39 mov eax, dword ptr [0x11f309a0] */
  EAX = (r32((uint32_t)(0x11f309a0)));
  /* 11f04b3e sub eax, dword ptr [0x11f3094c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f3094c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f04b44 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f04b47 mov dword ptr [0x11f2e340], eax */
  w32((uint32_t)(0x11f2e340), (EAX));
  /* 11f04b4c jmp 0x11f04b62 */
  goto L_11f04b62;
L_11f04b4e:;
  /* 11f04b4e mov dword ptr [0x11f2e33c], 0 */
  w32((uint32_t)(0x11f2e33c), (0x0u));
  /* 11f04b58 mov dword ptr [0x11f2e340], 0 */
  w32((uint32_t)(0x11f2e340), (0x0u));
L_11f04b62:;
  /* 11f04b62 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11f04b65 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f04b68 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f04b6a mov edx, dword ptr [0x11f2e3c4] */
  EDX = (r32((uint32_t)(0x11f2e3c4)));
  /* 11f04b70 push edx */
  push32((uint32_t)(EDX));
  /* 11f04b71 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f04b73 push 0x11f308fc */
  push32((uint32_t)(0x11f308fcu));
  /* 11f04b78 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f04b7d mov eax, dword ptr [0x11f309d8] */
  EAX = (r32((uint32_t)(0x11f309d8)));
  /* 11f04b82 push eax */
  push32((uint32_t)(EAX));
  /* 11f04b83 call dword ptr [0x11f333b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b0))), 0x11f04b89u);
  /* 11f04b89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f04b8b je 0x11f04b9f */
  if (C.zf) goto L_11f04b9f;
  /* 11f04b8d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04b91 jne 0x11f04b9f */
  if (!C.zf) goto L_11f04b9f;
  /* 11f04b93 mov ecx, dword ptr [0x11f2e3c4] */
  ECX = (r32((uint32_t)(0x11f2e3c4)));
  /* 11f04b99 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11f04b9d jmp 0x11f04ba8 */
  goto L_11f04ba8;
L_11f04b9f:;
  /* 11f04b9f mov edx, dword ptr [0x11f2e3c4] */
  EDX = (r32((uint32_t)(0x11f2e3c4)));
  /* 11f04ba5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11f04ba8:;
  /* 11f04ba8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11f04bab push eax */
  push32((uint32_t)(EAX));
  /* 11f04bac push 0 */
  push32((uint32_t)(0x0u));
  /* 11f04bae push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f04bb0 mov ecx, dword ptr [0x11f2e3c8] */
  ECX = (r32((uint32_t)(0x11f2e3c8)));
  /* 11f04bb6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04bb7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f04bb9 push 0x11f30950 */
  push32((uint32_t)(0x11f30950u));
  /* 11f04bbe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f04bc3 mov edx, dword ptr [0x11f309d8] */
  EDX = (r32((uint32_t)(0x11f309d8)));
  /* 11f04bc9 push edx */
  push32((uint32_t)(EDX));
  /* 11f04bca call dword ptr [0x11f333b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b0))), 0x11f04bd0u);
  /* 11f04bd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f04bd2 je 0x11f04be5 */
  if (C.zf) goto L_11f04be5;
  /* 11f04bd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04bd8 jne 0x11f04be5 */
  if (!C.zf) goto L_11f04be5;
  /* 11f04bda mov eax, dword ptr [0x11f2e3c8] */
  EAX = (r32((uint32_t)(0x11f2e3c8)));
  /* 11f04bdf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11f04be3 jmp 0x11f04bee */
  goto L_11f04bee;
L_11f04be5:;
  /* 11f04be5 mov ecx, dword ptr [0x11f2e3c8] */
  ECX = (r32((uint32_t)(0x11f2e3c8)));
  /* 11f04beb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11f04bee:;
  /* 11f04bee jmp 0x11f04e17 */
  goto L_11f04e17;
L_11f04bf3:;
  /* 11f04bf3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04bf6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f04bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f04bfb je 0x11f04c1d */
  if (C.zf) goto L_11f04c1d;
  /* 11f04bfd cmp dword ptr [0x11f309a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04c04 je 0x11f04c2c */
  if (C.zf) goto L_11f04c2c;
  /* 11f04c06 mov ecx, dword ptr [0x11f309a4] */
  ECX = (r32((uint32_t)(0x11f309a4)));
  /* 11f04c0c push ecx */
  push32((uint32_t)(ECX));
  /* 11f04c0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04c10 push edx */
  push32((uint32_t)(EDX));
  /* 11f04c11 call 0x11f04660 */
  push32(0x11f04c16u); f_11f04660();
  /* 11f04c16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04c19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f04c1b jne 0x11f04c2c */
  if (!C.zf) goto L_11f04c2c;
L_11f04c1d:;
  /* 11f04c1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f04c1f call 0x11efba60 */
  push32(0x11f04c24u); f_11efba60();
  /* 11f04c24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04c27 jmp 0x11f04e17 */
  goto L_11f04e17;
L_11f04c2c:;
  /* 11f04c2c push 2 */
  push32((uint32_t)(0x2u));
  /* 11f04c2e mov eax, dword ptr [0x11f309a4] */
  EAX = (r32((uint32_t)(0x11f309a4)));
  /* 11f04c33 push eax */
  push32((uint32_t)(EAX));
  /* 11f04c34 call 0x11efc550 */
  push32(0x11f04c39u); f_11efc550();
  /* 11f04c39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04c3c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11f04c41 push 0x11f2b288 */
  push32((uint32_t)(0x11f2b288u));
  /* 11f04c46 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f04c48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04c4b push ecx */
  push32((uint32_t)(ECX));
  /* 11f04c4c call 0x11f00050 */
  push32(0x11f04c51u); f_11f00050();
  /* 11f04c51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04c54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04c57 push eax */
  push32((uint32_t)(EAX));
  /* 11f04c58 call 0x11efbac0 */
  push32(0x11f04c5du); f_11efbac0();
  /* 11f04c5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04c60 mov dword ptr [0x11f309a4], eax */
  w32((uint32_t)(0x11f309a4), (EAX));
  /* 11f04c65 cmp dword ptr [0x11f309a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04c6c jne 0x11f04c7d */
  if (!C.zf) goto L_11f04c7d;
  /* 11f04c6e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f04c70 call 0x11efba60 */
  push32(0x11f04c75u); f_11efba60();
  /* 11f04c75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04c78 jmp 0x11f04e17 */
  goto L_11f04e17;
L_11f04c7d:;
  /* 11f04c7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04c80 push edx */
  push32((uint32_t)(EDX));
  /* 11f04c81 mov eax, dword ptr [0x11f309a4] */
  EAX = (r32((uint32_t)(0x11f309a4)));
  /* 11f04c86 push eax */
  push32((uint32_t)(EAX));
  /* 11f04c87 call 0x11f001d0 */
  push32(0x11f04c8cu); f_11f001d0();
  /* 11f04c8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04c8f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f04c91 call 0x11efba60 */
  push32(0x11f04c96u); f_11efba60();
  /* 11f04c96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04c99 push 3 */
  push32((uint32_t)(0x3u));
  /* 11f04c9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04c9e push ecx */
  push32((uint32_t)(ECX));
  /* 11f04c9f mov edx, dword ptr [0x11f2e3c4] */
  EDX = (r32((uint32_t)(0x11f2e3c4)));
  /* 11f04ca5 push edx */
  push32((uint32_t)(EDX));
  /* 11f04ca6 call 0x11f00a40 */
  push32(0x11f04cabu); f_11f00a40();
  /* 11f04cab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04cae mov eax, dword ptr [0x11f2e3c4] */
  EAX = (r32((uint32_t)(0x11f2e3c4)));
  /* 11f04cb3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11f04cb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04cba add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04cbd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f04cc0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04cc3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f04cc6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04cc9 jne 0x11f04cdd */
  if (!C.zf) goto L_11f04cdd;
  /* 11f04ccb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f04cce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04cd1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f04cd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04cd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04cda mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11f04cdd:;
  /* 11f04cdd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04ce0 push eax */
  push32((uint32_t)(EAX));
  /* 11f04ce1 call 0x11f0a1e0 */
  push32(0x11f04ce6u); f_11f0a1e0();
  /* 11f04ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04ce9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f04cef mov dword ptr [0x11f2e338], eax */
  w32((uint32_t)(0x11f2e338), (EAX));
L_11f04cf4:;
  /* 11f04cf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04cf7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f04cfa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04cfd je 0x11f04d15 */
  if (C.zf) goto L_11f04d15;
  /* 11f04cff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04d02 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f04d05 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04d08 jl 0x11f04d20 */
  if ((C.sf!=C.of)) goto L_11f04d20;
  /* 11f04d0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04d0d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f04d10 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04d13 jg 0x11f04d20 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f04d20;
L_11f04d15:;
  /* 11f04d15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04d18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04d1b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f04d1e jmp 0x11f04cf4 */
  goto L_11f04cf4;
L_11f04d20:;
  /* 11f04d20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04d23 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f04d26 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04d29 jne 0x11f04dc5 */
  if (!C.zf) goto L_11f04dc5;
  /* 11f04d2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04d32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04d35 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f04d38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04d3b push edx */
  push32((uint32_t)(EDX));
  /* 11f04d3c call 0x11f0a1e0 */
  push32(0x11f04d41u); f_11f0a1e0();
  /* 11f04d41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04d44 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f04d47 mov ecx, dword ptr [0x11f2e338] */
  ECX = (r32((uint32_t)(0x11f2e338)));
  /* 11f04d4d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04d4f mov dword ptr [0x11f2e338], ecx */
  w32((uint32_t)(0x11f2e338), (ECX));
L_11f04d55:;
  /* 11f04d55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04d58 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f04d5b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04d5e jl 0x11f04d76 */
  if ((C.sf!=C.of)) goto L_11f04d76;
  /* 11f04d60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04d63 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f04d66 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04d69 jg 0x11f04d76 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f04d76;
  /* 11f04d6b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04d6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04d71 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f04d74 jmp 0x11f04d55 */
  goto L_11f04d55;
L_11f04d76:;
  /* 11f04d76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04d79 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f04d7c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04d7f jne 0x11f04dc5 */
  if (!C.zf) goto L_11f04dc5;
  /* 11f04d81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04d84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04d87 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f04d8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04d8d push ecx */
  push32((uint32_t)(ECX));
  /* 11f04d8e call 0x11f0a1e0 */
  push32(0x11f04d93u); f_11f0a1e0();
  /* 11f04d93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04d96 mov edx, dword ptr [0x11f2e338] */
  EDX = (r32((uint32_t)(0x11f2e338)));
  /* 11f04d9c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04d9e mov dword ptr [0x11f2e338], edx */
  w32((uint32_t)(0x11f2e338), (EDX));
L_11f04da4:;
  /* 11f04da4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04da7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f04daa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04dad jl 0x11f04dc5 */
  if ((C.sf!=C.of)) goto L_11f04dc5;
  /* 11f04daf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04db2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f04db5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04db8 jg 0x11f04dc5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f04dc5;
  /* 11f04dba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04dbd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04dc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f04dc3 jmp 0x11f04da4 */
  goto L_11f04da4;
L_11f04dc5:;
  /* 11f04dc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04dc9 je 0x11f04dd9 */
  if (C.zf) goto L_11f04dd9;
  /* 11f04dcb mov edx, dword ptr [0x11f2e338] */
  EDX = (r32((uint32_t)(0x11f2e338)));
  /* 11f04dd1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f04dd3 mov dword ptr [0x11f2e338], edx */
  w32((uint32_t)(0x11f2e338), (EDX));
L_11f04dd9:;
  /* 11f04dd9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04ddc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f04ddf mov dword ptr [0x11f2e33c], ecx */
  w32((uint32_t)(0x11f2e33c), (ECX));
  /* 11f04de5 cmp dword ptr [0x11f2e33c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e33c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04dec je 0x11f04e0e */
  if (C.zf) goto L_11f04e0e;
  /* 11f04dee push 3 */
  push32((uint32_t)(0x3u));
  /* 11f04df0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f04df3 push edx */
  push32((uint32_t)(EDX));
  /* 11f04df4 mov eax, dword ptr [0x11f2e3c8] */
  EAX = (r32((uint32_t)(0x11f2e3c8)));
  /* 11f04df9 push eax */
  push32((uint32_t)(EAX));
  /* 11f04dfa call 0x11f00a40 */
  push32(0x11f04dffu); f_11f00a40();
  /* 11f04dff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04e02 mov ecx, dword ptr [0x11f2e3c8] */
  ECX = (r32((uint32_t)(0x11f2e3c8)));
  /* 11f04e08 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11f04e0c jmp 0x11f04e17 */
  goto L_11f04e17;
L_11f04e0e:;
  /* 11f04e0e mov edx, dword ptr [0x11f2e3c8] */
  EDX = (r32((uint32_t)(0x11f2e3c8)));
  /* 11f04e14 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11f04e17:;
  /* 11f04e17 mov esp, ebp */
  ESP = (EBP);
  /* 11f04e19 pop ebp */
  EBP = (pop32());
  /* 11f04e1a ret  */
  ESPCHK(0x11f04a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e20 @ 0x11f04e20 (46 bytes, 18 insns) */
void f_11f04e20(void) {
  FTRACE(0x11f04e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f04e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11f04e21 mov ebp, esp */
  EBP = (ESP);
  /* 11f04e23 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04e24 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f04e26 call 0x11efb9c0 */
  push32(0x11f04e2bu); f_11efb9c0();
  /* 11f04e2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04e2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f04e31 push eax */
  push32((uint32_t)(EAX));
  /* 11f04e32 call 0x11f04e50 */
  push32(0x11f04e37u); f_11f04e50();
  /* 11f04e37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04e3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f04e3d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11f04e3f call 0x11efba60 */
  push32(0x11f04e44u); f_11efba60();
  /* 11f04e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04e47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f04e4a mov esp, ebp */
  ESP = (EBP);
  /* 11f04e4c pop ebp */
  EBP = (pop32());
  /* 11f04e4d ret  */
  ESPCHK(0x11f04e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e50 @ 0x11f04e50 (762 bytes, 246 insns) */
void f_11f04e50(void) {
  FTRACE(0x11f04e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f04e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11f04e51 mov ebp, esp */
  EBP = (ESP);
  /* 11f04e53 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04e54 cmp dword ptr [0x11f2e33c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e33c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04e5b jne 0x11f04e64 */
  if (!C.zf) goto L_11f04e64;
  /* 11f04e5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f04e5f jmp 0x11f05146 */
  goto L_11f05146;
L_11f04e64:;
  /* 11f04e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f04e67 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11f04e6a cmp ecx, dword ptr [0x11f2e3d0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f2e3d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04e70 jne 0x11f04e84 */
  if (!C.zf) goto L_11f04e84;
  /* 11f04e72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f04e75 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11f04e78 cmp eax, dword ptr [0x11f2e3e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f2e3e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04e7e je 0x11f0504b */
  if (C.zf) goto L_11f0504b;
L_11f04e84:;
  /* 11f04e84 cmp dword ptr [0x11f308f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f308f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f04e8b je 0x11f05005 */
  if (C.zf) goto L_11f05005;
  /* 11f04e91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f04e93 mov cx, word ptr [0x11f30990] */
  CX = (r16((uint32_t)(0x11f30990)));
  /* 11f04e9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f04e9c jne 0x11f04ef9 */
  if (!C.zf) goto L_11f04ef9;
  /* 11f04e9e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f04ea0 mov dx, word ptr [0x11f3099e] */
  DX = (r16((uint32_t)(0x11f3099e)));
  /* 11f04ea7 push edx */
  push32((uint32_t)(EDX));
  /* 11f04ea8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f04eaa mov ax, word ptr [0x11f3099c] */
  AX = (r16((uint32_t)(0x11f3099c)));
  /* 11f04eb0 push eax */
  push32((uint32_t)(EAX));
  /* 11f04eb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f04eb3 mov cx, word ptr [0x11f3099a] */
  CX = (r16((uint32_t)(0x11f3099a)));
  /* 11f04eba push ecx */
  push32((uint32_t)(ECX));
  /* 11f04ebb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f04ebd mov dx, word ptr [0x11f30998] */
  DX = (r16((uint32_t)(0x11f30998)));
  /* 11f04ec4 push edx */
  push32((uint32_t)(EDX));
  /* 11f04ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f04ec7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f04ec9 mov ax, word ptr [0x11f30994] */
  AX = (r16((uint32_t)(0x11f30994)));
  /* 11f04ecf push eax */
  push32((uint32_t)(EAX));
  /* 11f04ed0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f04ed2 mov cx, word ptr [0x11f30996] */
  CX = (r16((uint32_t)(0x11f30996)));
  /* 11f04ed9 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04eda xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f04edc mov dx, word ptr [0x11f30992] */
  DX = (r16((uint32_t)(0x11f30992)));
  /* 11f04ee3 push edx */
  push32((uint32_t)(EDX));
  /* 11f04ee4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f04ee7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11f04eea push ecx */
  push32((uint32_t)(ECX));
  /* 11f04eeb push 1 */
  push32((uint32_t)(0x1u));
  /* 11f04eed push 1 */
  push32((uint32_t)(0x1u));
  /* 11f04eef call 0x11f05150 */
  push32(0x11f04ef4u); f_11f05150();
  /* 11f04ef4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04ef7 jmp 0x11f04f4a */
  goto L_11f04f4a;
L_11f04ef9:;
  /* 11f04ef9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f04efb mov dx, word ptr [0x11f3099e] */
  DX = (r16((uint32_t)(0x11f3099e)));
  /* 11f04f02 push edx */
  push32((uint32_t)(EDX));
  /* 11f04f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f04f05 mov ax, word ptr [0x11f3099c] */
  AX = (r16((uint32_t)(0x11f3099c)));
  /* 11f04f0b push eax */
  push32((uint32_t)(EAX));
  /* 11f04f0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f04f0e mov cx, word ptr [0x11f3099a] */
  CX = (r16((uint32_t)(0x11f3099a)));
  /* 11f04f15 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04f16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f04f18 mov dx, word ptr [0x11f30998] */
  DX = (r16((uint32_t)(0x11f30998)));
  /* 11f04f1f push edx */
  push32((uint32_t)(EDX));
  /* 11f04f20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f04f22 mov ax, word ptr [0x11f30996] */
  AX = (r16((uint32_t)(0x11f30996)));
  /* 11f04f28 push eax */
  push32((uint32_t)(EAX));
  /* 11f04f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f04f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f04f2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f04f2f mov cx, word ptr [0x11f30992] */
  CX = (r16((uint32_t)(0x11f30992)));
  /* 11f04f36 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04f37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f04f3a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11f04f3d push eax */
  push32((uint32_t)(EAX));
  /* 11f04f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f04f40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f04f42 call 0x11f05150 */
  push32(0x11f04f47u); f_11f05150();
  /* 11f04f47 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f04f4a:;
  /* 11f04f4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f04f4c mov cx, word ptr [0x11f3093c] */
  CX = (r16((uint32_t)(0x11f3093c)));
  /* 11f04f53 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f04f55 jne 0x11f04fb2 */
  if (!C.zf) goto L_11f04fb2;
  /* 11f04f57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f04f59 mov dx, word ptr [0x11f3094a] */
  DX = (r16((uint32_t)(0x11f3094a)));
  /* 11f04f60 push edx */
  push32((uint32_t)(EDX));
  /* 11f04f61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f04f63 mov ax, word ptr [0x11f30948] */
  AX = (r16((uint32_t)(0x11f30948)));
  /* 11f04f69 push eax */
  push32((uint32_t)(EAX));
  /* 11f04f6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f04f6c mov cx, word ptr [0x11f30946] */
  CX = (r16((uint32_t)(0x11f30946)));
  /* 11f04f73 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04f74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f04f76 mov dx, word ptr [0x11f30944] */
  DX = (r16((uint32_t)(0x11f30944)));
  /* 11f04f7d push edx */
  push32((uint32_t)(EDX));
  /* 11f04f7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f04f80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f04f82 mov ax, word ptr [0x11f30940] */
  AX = (r16((uint32_t)(0x11f30940)));
  /* 11f04f88 push eax */
  push32((uint32_t)(EAX));
  /* 11f04f89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f04f8b mov cx, word ptr [0x11f30942] */
  CX = (r16((uint32_t)(0x11f30942)));
  /* 11f04f92 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04f93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f04f95 mov dx, word ptr [0x11f3093e] */
  DX = (r16((uint32_t)(0x11f3093e)));
  /* 11f04f9c push edx */
  push32((uint32_t)(EDX));
  /* 11f04f9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f04fa0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11f04fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f04fa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f04fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f04fa8 call 0x11f05150 */
  push32(0x11f04fadu); f_11f05150();
  /* 11f04fad add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f04fb0 jmp 0x11f05003 */
  goto L_11f05003;
L_11f04fb2:;
  /* 11f04fb2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f04fb4 mov dx, word ptr [0x11f3094a] */
  DX = (r16((uint32_t)(0x11f3094a)));
  /* 11f04fbb push edx */
  push32((uint32_t)(EDX));
  /* 11f04fbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f04fbe mov ax, word ptr [0x11f30948] */
  AX = (r16((uint32_t)(0x11f30948)));
  /* 11f04fc4 push eax */
  push32((uint32_t)(EAX));
  /* 11f04fc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f04fc7 mov cx, word ptr [0x11f30946] */
  CX = (r16((uint32_t)(0x11f30946)));
  /* 11f04fce push ecx */
  push32((uint32_t)(ECX));
  /* 11f04fcf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f04fd1 mov dx, word ptr [0x11f30944] */
  DX = (r16((uint32_t)(0x11f30944)));
  /* 11f04fd8 push edx */
  push32((uint32_t)(EDX));
  /* 11f04fd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f04fdb mov ax, word ptr [0x11f30942] */
  AX = (r16((uint32_t)(0x11f30942)));
  /* 11f04fe1 push eax */
  push32((uint32_t)(EAX));
  /* 11f04fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f04fe4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f04fe6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f04fe8 mov cx, word ptr [0x11f3093e] */
  CX = (r16((uint32_t)(0x11f3093e)));
  /* 11f04fef push ecx */
  push32((uint32_t)(ECX));
  /* 11f04ff0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f04ff3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11f04ff6 push eax */
  push32((uint32_t)(EAX));
  /* 11f04ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f04ff9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f04ffb call 0x11f05150 */
  push32(0x11f05000u); f_11f05150();
  /* 11f05000 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f05003:;
  /* 11f05003 jmp 0x11f0504b */
  goto L_11f0504b;
L_11f05005:;
  /* 11f05005 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f05007 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f05009 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0500b push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0500d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0500f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f05011 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f05013 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f05015 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05018 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11f0501b push edx */
  push32((uint32_t)(EDX));
  /* 11f0501c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0501e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f05020 call 0x11f05150 */
  push32(0x11f05025u); f_11f05150();
  /* 11f05025 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05028 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0502a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0502c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0502e push 2 */
  push32((uint32_t)(0x2u));
  /* 11f05030 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f05032 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f05034 push 5 */
  push32((uint32_t)(0x5u));
  /* 11f05036 push 0xa */
  push32((uint32_t)(0xau));
  /* 11f05038 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0503b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11f0503e push ecx */
  push32((uint32_t)(ECX));
  /* 11f0503f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f05041 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f05043 call 0x11f05150 */
  push32(0x11f05048u); f_11f05150();
  /* 11f05048 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0504b:;
  /* 11f0504b mov edx, dword ptr [0x11f2e3d4] */
  EDX = (r32((uint32_t)(0x11f2e3d4)));
  /* 11f05051 cmp edx, dword ptr [0x11f2e3e4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11f2e3e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05057 jge 0x11f050a4 */
  if ((C.sf==C.of)) goto L_11f050a4;
  /* 11f05059 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0505c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11f0505f cmp ecx, dword ptr [0x11f2e3d4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f2e3d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05065 jl 0x11f05075 */
  if ((C.sf!=C.of)) goto L_11f05075;
  /* 11f05067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0506a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11f0506d cmp eax, dword ptr [0x11f2e3e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f2e3e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05073 jle 0x11f0507c */
  if ((C.zf||C.sf!=C.of)) goto L_11f0507c;
L_11f05075:;
  /* 11f05075 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f05077 jmp 0x11f05146 */
  goto L_11f05146;
L_11f0507c:;
  /* 11f0507c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0507f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11f05082 cmp edx, dword ptr [0x11f2e3d4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11f2e3d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05088 jle 0x11f050a2 */
  if ((C.zf||C.sf!=C.of)) goto L_11f050a2;
  /* 11f0508a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0508d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11f05090 cmp ecx, dword ptr [0x11f2e3e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f2e3e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05096 jge 0x11f050a2 */
  if ((C.sf==C.of)) goto L_11f050a2;
  /* 11f05098 mov eax, 1 */
  EAX = (0x1u);
  /* 11f0509d jmp 0x11f05146 */
  goto L_11f05146;
L_11f050a2:;
  /* 11f050a2 jmp 0x11f050e7 */
  goto L_11f050e7;
L_11f050a4:;
  /* 11f050a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f050a7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11f050aa cmp eax, dword ptr [0x11f2e3e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f2e3e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f050b0 jl 0x11f050c0 */
  if ((C.sf!=C.of)) goto L_11f050c0;
  /* 11f050b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f050b5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11f050b8 cmp edx, dword ptr [0x11f2e3d4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11f2e3d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f050be jle 0x11f050c7 */
  if ((C.zf||C.sf!=C.of)) goto L_11f050c7;
L_11f050c0:;
  /* 11f050c0 mov eax, 1 */
  EAX = (0x1u);
  /* 11f050c5 jmp 0x11f05146 */
  goto L_11f05146;
L_11f050c7:;
  /* 11f050c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f050ca mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11f050cd cmp ecx, dword ptr [0x11f2e3e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f2e3e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f050d3 jle 0x11f050e7 */
  if ((C.zf||C.sf!=C.of)) goto L_11f050e7;
  /* 11f050d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f050d8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11f050db cmp eax, dword ptr [0x11f2e3d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f2e3d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f050e1 jge 0x11f050e7 */
  if ((C.sf==C.of)) goto L_11f050e7;
  /* 11f050e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f050e5 jmp 0x11f05146 */
  goto L_11f05146;
L_11f050e7:;
  /* 11f050e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f050ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f050ed imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f050f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f050f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f050f5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f050f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f050fa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f050fd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f05103 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05105 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0510b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0510e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05111 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11f05114 cmp edx, dword ptr [0x11f2e3d4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11f2e3d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0511a jne 0x11f05132 */
  if (!C.zf) goto L_11f05132;
  /* 11f0511c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0511f cmp eax, dword ptr [0x11f2e3d8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f2e3d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05125 jl 0x11f0512e */
  if ((C.sf!=C.of)) goto L_11f0512e;
  /* 11f05127 mov eax, 1 */
  EAX = (0x1u);
  /* 11f0512c jmp 0x11f05146 */
  goto L_11f05146;
L_11f0512e:;
  /* 11f0512e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f05130 jmp 0x11f05146 */
  goto L_11f05146;
L_11f05132:;
  /* 11f05132 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f05135 cmp ecx, dword ptr [0x11f2e3e8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f2e3e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0513b jge 0x11f05144 */
  if ((C.sf==C.of)) goto L_11f05144;
  /* 11f0513d mov eax, 1 */
  EAX = (0x1u);
  /* 11f05142 jmp 0x11f05146 */
  goto L_11f05146;
L_11f05144:;
  /* 11f05144 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f05146:;
  /* 11f05146 mov esp, ebp */
  ESP = (EBP);
  /* 11f05148 pop ebp */
  EBP = (pop32());
  /* 11f05149 ret  */
  ESPCHK(0x11f04e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10015150 @ 0x11f05150 (504 bytes, 145 insns) */
void f_11f05150(void) {
  FTRACE(0x11f05150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f05150 push ebp */
  push32((uint32_t)(EBP));
  /* 11f05151 mov ebp, esp */
  EBP = (ESP);
  /* 11f05153 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05156 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0515a jne 0x11f0522c */
  if (!C.zf) goto L_11f0522c;
  /* 11f05160 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f05163 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f05166 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f05168 jne 0x11f05179 */
  if (!C.zf) goto L_11f05179;
  /* 11f0516a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0516d mov edx, dword ptr [ecx*4 + 0x11f2e3e8] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11f2e3e8)));
  /* 11f05174 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f05177 jmp 0x11f05186 */
  goto L_11f05186;
L_11f05179:;
  /* 11f05179 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0517c mov ecx, dword ptr [eax*4 + 0x11f2e41c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11f2e41c)));
  /* 11f05183 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11f05186:;
  /* 11f05186 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f05189 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0518c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f0518f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f05192 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05195 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0519b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0519e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f051a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f051a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f051a6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11f051a9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11f051ad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f051ae mov ecx, 7 */
  ECX = (0x7u);
  /* 11f051b3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f051b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f051b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f051bb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f051be jge 0x11f051d9 */
  if ((C.sf==C.of)) goto L_11f051d9;
  /* 11f051c0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f051c3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f051c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f051c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f051cc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f051cf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f051d2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f051d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f051d7 jmp 0x11f051ed */
  goto L_11f051ed;
L_11f051d9:;
  /* 11f051d9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f051dc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f051df mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f051e2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f051e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f051e8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f051ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f051ed:;
  /* 11f051ed cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f051f1 jne 0x11f0522a */
  if (!C.zf) goto L_11f0522a;
  /* 11f051f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f051f6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11f051f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f051fb jne 0x11f0520c */
  if (!C.zf) goto L_11f0520c;
  /* 11f051fd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f05200 mov eax, dword ptr [edx*4 + 0x11f2e3ec] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11f2e3ec)));
  /* 11f05207 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f0520a jmp 0x11f05219 */
  goto L_11f05219;
L_11f0520c:;
  /* 11f0520c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0520f mov edx, dword ptr [ecx*4 + 0x11f2e420] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11f2e420)));
  /* 11f05216 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11f05219:;
  /* 11f05219 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0521c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0521f jle 0x11f0522a */
  if ((C.zf||C.sf!=C.of)) goto L_11f0522a;
  /* 11f05221 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f05224 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05227 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11f0522a:;
  /* 11f0522a jmp 0x11f05261 */
  goto L_11f05261;
L_11f0522c:;
  /* 11f0522c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0522f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f05232 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f05234 jne 0x11f05245 */
  if (!C.zf) goto L_11f05245;
  /* 11f05236 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f05239 mov ecx, dword ptr [eax*4 + 0x11f2e3e8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11f2e3e8)));
  /* 11f05240 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f05243 jmp 0x11f05252 */
  goto L_11f05252;
L_11f05245:;
  /* 11f05245 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f05248 mov eax, dword ptr [edx*4 + 0x11f2e41c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11f2e41c)));
  /* 11f0524f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11f05252:;
  /* 11f05252 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f05255 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f05258 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0525b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0525e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11f05261:;
  /* 11f05261 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05265 jne 0x11f052a1 */
  if (!C.zf) goto L_11f052a1;
  /* 11f05267 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0526a mov dword ptr [0x11f2e3d4], eax */
  w32((uint32_t)(0x11f2e3d4), (EAX));
  /* 11f0526f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11f05272 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f05275 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11f05278 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0527a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0527d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11f05280 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05282 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f05288 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11f0528b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0528d mov dword ptr [0x11f2e3d8], ecx */
  w32((uint32_t)(0x11f2e3d8), (ECX));
  /* 11f05293 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f05296 mov dword ptr [0x11f2e3d0], edx */
  w32((uint32_t)(0x11f2e3d0), (EDX));
  /* 11f0529c jmp 0x11f05344 */
  goto L_11f05344;
L_11f052a1:;
  /* 11f052a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f052a4 mov dword ptr [0x11f2e3e4], eax */
  w32((uint32_t)(0x11f2e3e4), (EAX));
  /* 11f052a9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11f052ac imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f052af mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11f052b2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f052b4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f052b7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11f052ba add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f052bc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f052c2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11f052c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f052c7 mov dword ptr [0x11f2e3e8], ecx */
  w32((uint32_t)(0x11f2e3e8), (ECX));
  /* 11f052cd mov edx, dword ptr [0x11f2e340] */
  EDX = (r32((uint32_t)(0x11f2e340)));
  /* 11f052d3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f052d9 mov eax, dword ptr [0x11f2e3e8] */
  EAX = (r32((uint32_t)(0x11f2e3e8)));
  /* 11f052de add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f052e0 mov dword ptr [0x11f2e3e8], eax */
  w32((uint32_t)(0x11f2e3e8), (EAX));
  /* 11f052e5 cmp dword ptr [0x11f2e3e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e3e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f052ec jge 0x11f05311 */
  if ((C.sf==C.of)) goto L_11f05311;
  /* 11f052ee mov ecx, dword ptr [0x11f2e3e8] */
  ECX = (r32((uint32_t)(0x11f2e3e8)));
  /* 11f052f4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f052fa mov dword ptr [0x11f2e3e8], ecx */
  w32((uint32_t)(0x11f2e3e8), (ECX));
  /* 11f05300 mov edx, dword ptr [0x11f2e3e4] */
  EDX = (r32((uint32_t)(0x11f2e3e4)));
  /* 11f05306 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05309 mov dword ptr [0x11f2e3e4], edx */
  w32((uint32_t)(0x11f2e3e4), (EDX));
  /* 11f0530f jmp 0x11f0533b */
  goto L_11f0533b;
L_11f05311:;
  /* 11f05311 cmp dword ptr [0x11f2e3e8], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e3e8))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0531b jl 0x11f0533b */
  if ((C.sf!=C.of)) goto L_11f0533b;
  /* 11f0531d mov eax, dword ptr [0x11f2e3e8] */
  EAX = (r32((uint32_t)(0x11f2e3e8)));
  /* 11f05322 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05327 mov dword ptr [0x11f2e3e8], eax */
  w32((uint32_t)(0x11f2e3e8), (EAX));
  /* 11f0532c mov ecx, dword ptr [0x11f2e3e4] */
  ECX = (r32((uint32_t)(0x11f2e3e4)));
  /* 11f05332 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05335 mov dword ptr [0x11f2e3e4], ecx */
  w32((uint32_t)(0x11f2e3e4), (ECX));
L_11f0533b:;
  /* 11f0533b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0533e mov dword ptr [0x11f2e3e0], edx */
  w32((uint32_t)(0x11f2e3e0), (EDX));
L_11f05344:;
  /* 11f05344 mov esp, ebp */
  ESP = (EBP);
  /* 11f05346 pop ebp */
  EBP = (pop32());
  /* 11f05347 ret  */
  ESPCHK(0x11f05150u, _esp0);
  ESP += 4; return;
}

/* FUN_10015350 @ 0x11f05350 (836 bytes, 238 insns) */
void f_11f05350(void) {
  FTRACE(0x11f05350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f05350 push ebp */
  push32((uint32_t)(EBP));
  /* 11f05351 mov ebp, esp */
  EBP = (ESP);
  /* 11f05353 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05356 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f05358 call 0x11efb9c0 */
  push32(0x11f0535du); f_11efb9c0();
  /* 11f0535d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05363 push eax */
  push32((uint32_t)(EAX));
  /* 11f05364 call 0x11f056a0 */
  push32(0x11f05369u); f_11f056a0();
  /* 11f05369 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0536c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0536f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05372 cmp ecx, dword ptr [0x11f31dd8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f31dd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05378 jne 0x11f0538b */
  if (!C.zf) goto L_11f0538b;
  /* 11f0537a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f0537c call 0x11efba60 */
  push32(0x11f05381u); f_11efba60();
  /* 11f05381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05384 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f05386 jmp 0x11f05690 */
  goto L_11f05690;
L_11f0538b:;
  /* 11f0538b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0538f jne 0x11f053ac */
  if (!C.zf) goto L_11f053ac;
  /* 11f05391 call 0x11f05780 */
  push32(0x11f05396u); f_11f05780();
  /* 11f05396 call 0x11f05800 */
  push32(0x11f0539bu); f_11f05800();
  /* 11f0539b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f0539d call 0x11efba60 */
  push32(0x11f053a2u); f_11efba60();
  /* 11f053a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f053a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f053a7 jmp 0x11f05690 */
  goto L_11f05690;
L_11f053ac:;
  /* 11f053ac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f053b3 jmp 0x11f053be */
  goto L_11f053be;
L_11f053b5:;
  /* 11f053b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f053b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f053bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f053be:;
  /* 11f053be cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f053c2 jae 0x11f0550f */
  if (!C.cf) goto L_11f0550f;
  /* 11f053c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f053cb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f053ce mov ecx, dword ptr [eax + 0x11f2e460] */
  ECX = (r32((uint32_t)(EAX + 0x11f2e460)));
  /* 11f053d4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f053d7 jne 0x11f0550a */
  if (!C.zf) goto L_11f0550a;
  /* 11f053dd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11f053e4 jmp 0x11f053ef */
  goto L_11f053ef;
L_11f053e6:;
  /* 11f053e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f053e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f053ec mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11f053ef:;
  /* 11f053ef cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f053f6 jae 0x11f05404 */
  if (!C.cf) goto L_11f05404;
  /* 11f053f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f053fb mov byte ptr [eax + 0x11f31f60], 0 */
  w8((uint32_t)(EAX + 0x11f31f60), (0x0u));
  /* 11f05402 jmp 0x11f053e6 */
  goto L_11f053e6;
L_11f05404:;
  /* 11f05404 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f0540b jmp 0x11f05416 */
  goto L_11f05416;
L_11f0540d:;
  /* 11f0540d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f05410 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05413 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11f05416:;
  /* 11f05416 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0541a jae 0x11f05497 */
  if (!C.cf) goto L_11f05497;
  /* 11f0541c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0541f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f05422 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f05425 lea ecx, [edx + eax*8 + 0x11f2e470] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11f2e470));
  /* 11f0542c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0542f jmp 0x11f0543a */
  goto L_11f0543a;
L_11f05431:;
  /* 11f05431 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f05434 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05437 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11f0543a:;
  /* 11f0543a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0543d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0543f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f05441 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f05443 je 0x11f05492 */
  if (C.zf) goto L_11f05492;
  /* 11f05445 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f05448 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0544a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11f0544d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0544f je 0x11f05492 */
  if (C.zf) goto L_11f05492;
  /* 11f05451 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f05454 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f05456 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f05458 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f0545b jmp 0x11f05466 */
  goto L_11f05466;
L_11f0545d:;
  /* 11f0545d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f05460 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05463 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11f05466:;
  /* 11f05466 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f05469 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0546b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11f0546e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05471 ja 0x11f05490 */
  if ((!C.cf&&!C.zf)) goto L_11f05490;
  /* 11f05473 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f05476 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f05479 mov dl, byte ptr [eax + 0x11f31f61] */
  DL = (r8((uint32_t)(EAX + 0x11f31f61)));
  /* 11f0547f or dl, byte ptr [ecx + 0x11f2e458] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11f2e458))); DL = (_r); fl_logic(_r,8); }
  /* 11f05485 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f05488 mov byte ptr [eax + 0x11f31f61], dl */
  w8((uint32_t)(EAX + 0x11f31f61), (DL));
  /* 11f0548e jmp 0x11f0545d */
  goto L_11f0545d;
L_11f05490:;
  /* 11f05490 jmp 0x11f05431 */
  goto L_11f05431;
L_11f05492:;
  /* 11f05492 jmp 0x11f0540d */
  goto L_11f0540d;
L_11f05497:;
  /* 11f05497 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0549a mov dword ptr [0x11f31dd8], ecx */
  w32((uint32_t)(0x11f31dd8), (ECX));
  /* 11f054a0 mov dword ptr [0x11f31e5c], 1 */
  w32((uint32_t)(0x11f31e5c), (0x1u));
  /* 11f054aa mov edx, dword ptr [0x11f31dd8] */
  EDX = (r32((uint32_t)(0x11f31dd8)));
  /* 11f054b0 push edx */
  push32((uint32_t)(EDX));
  /* 11f054b1 call 0x11f05700 */
  push32(0x11f054b6u); f_11f05700();
  /* 11f054b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f054b9 mov dword ptr [0x11f32064], eax */
  w32((uint32_t)(0x11f32064), (EAX));
  /* 11f054be mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f054c5 jmp 0x11f054d0 */
  goto L_11f054d0;
L_11f054c7:;
  /* 11f054c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f054ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f054cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11f054d0:;
  /* 11f054d0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f054d4 jae 0x11f054f4 */
  if (!C.cf) goto L_11f054f4;
  /* 11f054d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f054d9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f054dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f054df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f054e2 mov cx, word ptr [ecx + eax*2 + 0x11f2e464] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11f2e464)));
  /* 11f054ea mov word ptr [edx*2 + 0x11f31e50], cx */
  w16((uint32_t)(EDX*2 + 0x11f31e50), (CX));
  /* 11f054f2 jmp 0x11f054c7 */
  goto L_11f054c7;
L_11f054f4:;
  /* 11f054f4 call 0x11f05800 */
  push32(0x11f054f9u); f_11f05800();
  /* 11f054f9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f054fb call 0x11efba60 */
  push32(0x11f05500u); f_11efba60();
  /* 11f05500 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05503 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f05505 jmp 0x11f05690 */
  goto L_11f05690;
L_11f0550a:;
  /* 11f0550a jmp 0x11f053b5 */
  goto L_11f053b5;
L_11f0550f:;
  /* 11f0550f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11f05512 push edx */
  push32((uint32_t)(EDX));
  /* 11f05513 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05516 push eax */
  push32((uint32_t)(EAX));
  /* 11f05517 call dword ptr [0x11f33378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33378))), 0x11f0551du);
  /* 11f0551d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05520 jne 0x11f05662 */
  if (!C.zf) goto L_11f05662;
  /* 11f05526 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11f0552d jmp 0x11f05538 */
  goto L_11f05538;
L_11f0552f:;
  /* 11f0552f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f05532 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05535 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11f05538:;
  /* 11f05538 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0553f jae 0x11f0554d */
  if (!C.cf) goto L_11f0554d;
  /* 11f05541 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f05544 mov byte ptr [edx + 0x11f31f60], 0 */
  w8((uint32_t)(EDX + 0x11f31f60), (0x0u));
  /* 11f0554b jmp 0x11f0552f */
  goto L_11f0552f;
L_11f0554d:;
  /* 11f0554d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05550 mov dword ptr [0x11f31dd8], eax */
  w32((uint32_t)(0x11f31dd8), (EAX));
  /* 11f05555 mov dword ptr [0x11f32064], 0 */
  w32((uint32_t)(0x11f32064), (0x0u));
  /* 11f0555f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05563 jbe 0x11f0561e */
  if ((C.cf||C.zf)) goto L_11f0561e;
  /* 11f05569 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 11f0556c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11f0556f jmp 0x11f0557a */
  goto L_11f0557a;
L_11f05571:;
  /* 11f05571 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f05574 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05577 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_11f0557a:;
  /* 11f0557a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0557d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0557f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f05581 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f05583 je 0x11f055cc */
  if (C.zf) goto L_11f055cc;
  /* 11f05585 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f05588 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0558a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11f0558d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0558f je 0x11f055cc */
  if (C.zf) goto L_11f055cc;
  /* 11f05591 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f05594 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f05596 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f05598 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f0559b jmp 0x11f055a6 */
  goto L_11f055a6;
L_11f0559d:;
  /* 11f0559d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f055a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f055a3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11f055a6:;
  /* 11f055a6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f055a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f055ab mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11f055ae cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f055b1 ja 0x11f055ca */
  if ((!C.cf&&!C.zf)) goto L_11f055ca;
  /* 11f055b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f055b6 mov cl, byte ptr [eax + 0x11f31f61] */
  CL = (r8((uint32_t)(EAX + 0x11f31f61)));
  /* 11f055bc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 11f055bf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f055c2 mov byte ptr [edx + 0x11f31f61], cl */
  w8((uint32_t)(EDX + 0x11f31f61), (CL));
  /* 11f055c8 jmp 0x11f0559d */
  goto L_11f0559d;
L_11f055ca:;
  /* 11f055ca jmp 0x11f05571 */
  goto L_11f05571;
L_11f055cc:;
  /* 11f055cc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11f055d3 jmp 0x11f055de */
  goto L_11f055de;
L_11f055d5:;
  /* 11f055d5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f055d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f055db mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11f055de:;
  /* 11f055de cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f055e5 jae 0x11f055fe */
  if (!C.cf) goto L_11f055fe;
  /* 11f055e7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f055ea mov dl, byte ptr [ecx + 0x11f31f61] */
  DL = (r8((uint32_t)(ECX + 0x11f31f61)));
  /* 11f055f0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11f055f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f055f6 mov byte ptr [eax + 0x11f31f61], dl */
  w8((uint32_t)(EAX + 0x11f31f61), (DL));
  /* 11f055fc jmp 0x11f055d5 */
  goto L_11f055d5;
L_11f055fe:;
  /* 11f055fe mov ecx, dword ptr [0x11f31dd8] */
  ECX = (r32((uint32_t)(0x11f31dd8)));
  /* 11f05604 push ecx */
  push32((uint32_t)(ECX));
  /* 11f05605 call 0x11f05700 */
  push32(0x11f0560au); f_11f05700();
  /* 11f0560a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0560d mov dword ptr [0x11f32064], eax */
  w32((uint32_t)(0x11f32064), (EAX));
  /* 11f05612 mov dword ptr [0x11f31e5c], 1 */
  w32((uint32_t)(0x11f31e5c), (0x1u));
  /* 11f0561c jmp 0x11f05628 */
  goto L_11f05628;
L_11f0561e:;
  /* 11f0561e mov dword ptr [0x11f31e5c], 0 */
  w32((uint32_t)(0x11f31e5c), (0x0u));
L_11f05628:;
  /* 11f05628 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f0562f jmp 0x11f0563a */
  goto L_11f0563a;
L_11f05631:;
  /* 11f05631 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f05634 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05637 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11f0563a:;
  /* 11f0563a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0563e jae 0x11f0564f */
  if (!C.cf) goto L_11f0564f;
  /* 11f05640 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f05643 mov word ptr [eax*2 + 0x11f31e50], 0 */
  w16((uint32_t)(EAX*2 + 0x11f31e50), (0x0u));
  /* 11f0564d jmp 0x11f05631 */
  goto L_11f05631;
L_11f0564f:;
  /* 11f0564f call 0x11f05800 */
  push32(0x11f05654u); f_11f05800();
  /* 11f05654 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f05656 call 0x11efba60 */
  push32(0x11f0565bu); f_11efba60();
  /* 11f0565b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0565e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f05660 jmp 0x11f05690 */
  goto L_11f05690;
L_11f05662:;
  /* 11f05662 cmp dword ptr [0x11f309ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05669 je 0x11f05683 */
  if (C.zf) goto L_11f05683;
  /* 11f0566b call 0x11f05780 */
  push32(0x11f05670u); f_11f05780();
  /* 11f05670 call 0x11f05800 */
  push32(0x11f05675u); f_11f05800();
  /* 11f05675 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f05677 call 0x11efba60 */
  push32(0x11f0567cu); f_11efba60();
  /* 11f0567c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0567f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f05681 jmp 0x11f05690 */
  goto L_11f05690;
L_11f05683:;
  /* 11f05683 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f05685 call 0x11efba60 */
  push32(0x11f0568au); f_11efba60();
  /* 11f0568a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0568d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11f05690:;
  /* 11f05690 mov esp, ebp */
  ESP = (EBP);
  /* 11f05692 pop ebp */
  EBP = (pop32());
  /* 11f05693 ret  */
  ESPCHK(0x11f05350u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11f056a0 (89 bytes, 21 insns) */
void f_11f056a0(void) {
  FTRACE(0x11f056a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f056a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f056a1 mov ebp, esp */
  EBP = (ESP);
  /* 11f056a3 mov dword ptr [0x11f309ac], 0 */
  w32((uint32_t)(0x11f309ac), (0x0u));
  /* 11f056ad cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f056b1 jne 0x11f056c5 */
  if (!C.zf) goto L_11f056c5;
  /* 11f056b3 mov dword ptr [0x11f309ac], 1 */
  w32((uint32_t)(0x11f309ac), (0x1u));
  /* 11f056bd call dword ptr [0x11f33370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33370))), 0x11f056c3u);
  /* 11f056c3 jmp 0x11f056f7 */
  goto L_11f056f7;
L_11f056c5:;
  /* 11f056c5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f056c9 jne 0x11f056dd */
  if (!C.zf) goto L_11f056dd;
  /* 11f056cb mov dword ptr [0x11f309ac], 1 */
  w32((uint32_t)(0x11f309ac), (0x1u));
  /* 11f056d5 call dword ptr [0x11f33374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33374))), 0x11f056dbu);
  /* 11f056db jmp 0x11f056f7 */
  goto L_11f056f7;
L_11f056dd:;
  /* 11f056dd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f056e1 jne 0x11f056f4 */
  if (!C.zf) goto L_11f056f4;
  /* 11f056e3 mov dword ptr [0x11f309ac], 1 */
  w32((uint32_t)(0x11f309ac), (0x1u));
  /* 11f056ed mov eax, dword ptr [0x11f309d8] */
  EAX = (r32((uint32_t)(0x11f309d8)));
  /* 11f056f2 jmp 0x11f056f7 */
  goto L_11f056f7;
L_11f056f4:;
  /* 11f056f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11f056f7:;
  /* 11f056f7 pop ebp */
  EBP = (pop32());
  /* 11f056f8 ret  */
  ESPCHK(0x11f056a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015700 @ 0x11f05700 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11f05700(void) {
  FTRACE(0x11f05700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f05700 push ebp */
  push32((uint32_t)(EBP));
  /* 11f05701 mov ebp, esp */
  EBP = (ESP);
  /* 11f05703 push ecx */
  push32((uint32_t)(ECX));
  /* 11f05704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05707 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0570a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0570d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05713 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f05716 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0571a ja 0x11f0574a */
  if ((!C.cf&&!C.zf)) goto L_11f0574a;
  /* 11f0571c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0571f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f05721 mov dl, byte ptr [eax + 0x11f05764] */
  DL = (r8((uint32_t)(EAX + 0x11f05764)));
  /* 11f05727 jmp dword ptr [edx*4 + 0x11f05750] */
  switch (EDX) {
    case 0: goto L_11f0572e;
    case 1: goto L_11f05735;
    case 2: goto L_11f0573c;
    case 3: goto L_11f05743;
    case 4: goto L_11f0574a;
    default: x86_unimpl("switch@0x11f05727 out of table"); return;
  }
L_11f0572e:;
  /* 11f0572e mov eax, 0x411 */
  EAX = (0x411u);
  /* 11f05733 jmp 0x11f0574c */
  goto L_11f0574c;
L_11f05735:;
  /* 11f05735 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11f0573a jmp 0x11f0574c */
  goto L_11f0574c;
L_11f0573c:;
  /* 11f0573c mov eax, 0x412 */
  EAX = (0x412u);
  /* 11f05741 jmp 0x11f0574c */
  goto L_11f0574c;
L_11f05743:;
  /* 11f05743 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11f05748 jmp 0x11f0574c */
  goto L_11f0574c;
L_11f0574a:;
  /* 11f0574a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f0574c:;
  /* 11f0574c mov esp, ebp */
  ESP = (EBP);
  /* 11f0574e pop ebp */
  EBP = (pop32());
  /* 11f0574f ret  */
  ESPCHK(0x11f05700u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11f05780 (116 bytes, 29 insns) */
void f_11f05780(void) {
  FTRACE(0x11f05780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f05780 push ebp */
  push32((uint32_t)(EBP));
  /* 11f05781 mov ebp, esp */
  EBP = (ESP);
  /* 11f05783 push ecx */
  push32((uint32_t)(ECX));
  /* 11f05784 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0578b jmp 0x11f05796 */
  goto L_11f05796;
L_11f0578d:;
  /* 11f0578d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f05790 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05793 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f05796:;
  /* 11f05796 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0579d jge 0x11f057ab */
  if ((C.sf==C.of)) goto L_11f057ab;
  /* 11f0579f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f057a2 mov byte ptr [ecx + 0x11f31f60], 0 */
  w8((uint32_t)(ECX + 0x11f31f60), (0x0u));
  /* 11f057a9 jmp 0x11f0578d */
  goto L_11f0578d;
L_11f057ab:;
  /* 11f057ab mov dword ptr [0x11f31dd8], 0 */
  w32((uint32_t)(0x11f31dd8), (0x0u));
  /* 11f057b5 mov dword ptr [0x11f31e5c], 0 */
  w32((uint32_t)(0x11f31e5c), (0x0u));
  /* 11f057bf mov dword ptr [0x11f32064], 0 */
  w32((uint32_t)(0x11f32064), (0x0u));
  /* 11f057c9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f057d0 jmp 0x11f057db */
  goto L_11f057db;
L_11f057d2:;
  /* 11f057d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f057d5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f057d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f057db:;
  /* 11f057db cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f057df jge 0x11f057f0 */
  if ((C.sf==C.of)) goto L_11f057f0;
  /* 11f057e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f057e4 mov word ptr [eax*2 + 0x11f31e50], 0 */
  w16((uint32_t)(EAX*2 + 0x11f31e50), (0x0u));
  /* 11f057ee jmp 0x11f057d2 */
  goto L_11f057d2;
L_11f057f0:;
  /* 11f057f0 mov esp, ebp */
  ESP = (EBP);
  /* 11f057f2 pop ebp */
  EBP = (pop32());
  /* 11f057f3 ret  */
  ESPCHK(0x11f05780u, _esp0);
  ESP += 4; return;
}

/* FUN_10015800 @ 0x11f05800 (770 bytes, 175 insns) */
void f_11f05800(void) {
  FTRACE(0x11f05800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f05800 push ebp */
  push32((uint32_t)(EBP));
  /* 11f05801 mov ebp, esp */
  EBP = (ESP);
  /* 11f05803 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05809 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11f0580f push eax */
  push32((uint32_t)(EAX));
  /* 11f05810 mov ecx, dword ptr [0x11f31dd8] */
  ECX = (r32((uint32_t)(0x11f31dd8)));
  /* 11f05816 push ecx */
  push32((uint32_t)(ECX));
  /* 11f05817 call dword ptr [0x11f33378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33378))), 0x11f0581du);
  /* 11f0581d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05820 jne 0x11f05a39 */
  if (!C.zf) goto L_11f05a39;
  /* 11f05826 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11f05830 jmp 0x11f05841 */
  goto L_11f05841;
L_11f05832:;
  /* 11f05832 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05838 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0583b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11f05841:;
  /* 11f05841 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0584b jae 0x11f05862 */
  if (!C.cf) goto L_11f05862;
  /* 11f0584d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05853 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11f05859 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11f05860 jmp 0x11f05832 */
  goto L_11f05832;
L_11f05862:;
  /* 11f05862 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11f05869 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11f0586f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f05872 jmp 0x11f0587d */
  goto L_11f0587d;
L_11f05874:;
  /* 11f05874 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f05877 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0587a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f0587d:;
  /* 11f0587d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f05880 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f05882 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f05884 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f05886 je 0x11f058c8 */
  if (C.zf) goto L_11f058c8;
  /* 11f05888 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0588b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0588d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f0588f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11f05895 jmp 0x11f058a6 */
  goto L_11f058a6;
L_11f05897:;
  /* 11f05897 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f0589d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f058a0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11f058a6:;
  /* 11f058a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f058a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f058ab mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11f058ae cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f058b4 ja 0x11f058c6 */
  if ((!C.cf&&!C.zf)) goto L_11f058c6;
  /* 11f058b6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f058bc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11f058c4 jmp 0x11f05897 */
  goto L_11f05897;
L_11f058c6:;
  /* 11f058c6 jmp 0x11f05874 */
  goto L_11f05874;
L_11f058c8:;
  /* 11f058c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f058ca mov eax, dword ptr [0x11f32064] */
  EAX = (r32((uint32_t)(0x11f32064)));
  /* 11f058cf push eax */
  push32((uint32_t)(EAX));
  /* 11f058d0 mov ecx, dword ptr [0x11f31dd8] */
  ECX = (r32((uint32_t)(0x11f31dd8)));
  /* 11f058d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f058d7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11f058dd push edx */
  push32((uint32_t)(EDX));
  /* 11f058de push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f058e3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11f058e9 push eax */
  push32((uint32_t)(EAX));
  /* 11f058ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11f058ec call 0x11f07ed0 */
  push32(0x11f058f1u); f_11f07ed0();
  /* 11f058f1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f058f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f058f6 mov ecx, dword ptr [0x11f31dd8] */
  ECX = (r32((uint32_t)(0x11f31dd8)));
  /* 11f058fc push ecx */
  push32((uint32_t)(ECX));
  /* 11f058fd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f05902 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11f05908 push edx */
  push32((uint32_t)(EDX));
  /* 11f05909 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f0590e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11f05914 push eax */
  push32((uint32_t)(EAX));
  /* 11f05915 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f0591a mov ecx, dword ptr [0x11f32064] */
  ECX = (r32((uint32_t)(0x11f32064)));
  /* 11f05920 push ecx */
  push32((uint32_t)(ECX));
  /* 11f05921 call 0x11f08ae0 */
  push32(0x11f05926u); f_11f08ae0();
  /* 11f05926 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05929 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0592b mov edx, dword ptr [0x11f31dd8] */
  EDX = (r32((uint32_t)(0x11f31dd8)));
  /* 11f05931 push edx */
  push32((uint32_t)(EDX));
  /* 11f05932 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f05937 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11f0593d push eax */
  push32((uint32_t)(EAX));
  /* 11f0593e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f05943 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11f05949 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0594a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11f0594f mov edx, dword ptr [0x11f32064] */
  EDX = (r32((uint32_t)(0x11f32064)));
  /* 11f05955 push edx */
  push32((uint32_t)(EDX));
  /* 11f05956 call 0x11f08ae0 */
  push32(0x11f0595bu); f_11f08ae0();
  /* 11f0595b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0595e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11f05968 jmp 0x11f05979 */
  goto L_11f05979;
L_11f0596a:;
  /* 11f0596a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05970 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05973 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11f05979:;
  /* 11f05979 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05983 jae 0x11f05a34 */
  if (!C.cf) goto L_11f05a34;
  /* 11f05989 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f0598f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f05991 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11f05999 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0599c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0599e je 0x11f059d6 */
  if (C.zf) goto L_11f059d6;
  /* 11f059a0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f059a6 mov cl, byte ptr [eax + 0x11f31f61] */
  CL = (r8((uint32_t)(EAX + 0x11f31f61)));
  /* 11f059ac or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11f059af mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f059b5 mov byte ptr [edx + 0x11f31f61], cl */
  w8((uint32_t)(EDX + 0x11f31f61), (CL));
  /* 11f059bb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f059c1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f059c7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11f059ce mov byte ptr [eax + 0x11f31e60], dl */
  w8((uint32_t)(EAX + 0x11f31e60), (DL));
  /* 11f059d4 jmp 0x11f05a2f */
  goto L_11f05a2f;
L_11f059d6:;
  /* 11f059d6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f059dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f059de mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11f059e6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11f059e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f059eb je 0x11f05a22 */
  if (C.zf) goto L_11f05a22;
  /* 11f059ed mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f059f3 mov al, byte ptr [edx + 0x11f31f61] */
  AL = (r8((uint32_t)(EDX + 0x11f31f61)));
  /* 11f059f9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11f059fb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05a01 mov byte ptr [ecx + 0x11f31f61], al */
  w8((uint32_t)(ECX + 0x11f31f61), (AL));
  /* 11f05a07 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05a0d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05a13 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11f05a1a mov byte ptr [edx + 0x11f31e60], cl */
  w8((uint32_t)(EDX + 0x11f31e60), (CL));
  /* 11f05a20 jmp 0x11f05a2f */
  goto L_11f05a2f;
L_11f05a22:;
  /* 11f05a22 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05a28 mov byte ptr [edx + 0x11f31e60], 0 */
  w8((uint32_t)(EDX + 0x11f31e60), (0x0u));
L_11f05a2f:;
  /* 11f05a2f jmp 0x11f0596a */
  goto L_11f0596a;
L_11f05a34:;
  /* 11f05a34 jmp 0x11f05afe */
  goto L_11f05afe;
L_11f05a39:;
  /* 11f05a39 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11f05a43 jmp 0x11f05a54 */
  goto L_11f05a54;
L_11f05a45:;
  /* 11f05a45 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05a4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05a4e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11f05a54:;
  /* 11f05a54 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05a5e jae 0x11f05afe */
  if (!C.cf) goto L_11f05afe;
  /* 11f05a64 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05a6b jb 0x11f05aa8 */
  if (C.cf) goto L_11f05aa8;
  /* 11f05a6d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05a74 ja 0x11f05aa8 */
  if ((!C.cf&&!C.zf)) goto L_11f05aa8;
  /* 11f05a76 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05a7c mov dl, byte ptr [ecx + 0x11f31f61] */
  DL = (r8((uint32_t)(ECX + 0x11f31f61)));
  /* 11f05a82 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11f05a85 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05a8b mov byte ptr [eax + 0x11f31f61], dl */
  w8((uint32_t)(EAX + 0x11f31f61), (DL));
  /* 11f05a91 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05a97 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05a9a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05aa0 mov byte ptr [edx + 0x11f31e60], cl */
  w8((uint32_t)(EDX + 0x11f31e60), (CL));
  /* 11f05aa6 jmp 0x11f05af9 */
  goto L_11f05af9;
L_11f05aa8:;
  /* 11f05aa8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05aaf jb 0x11f05aec */
  if (C.cf) goto L_11f05aec;
  /* 11f05ab1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05ab8 ja 0x11f05aec */
  if ((!C.cf&&!C.zf)) goto L_11f05aec;
  /* 11f05aba mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05ac0 mov cl, byte ptr [eax + 0x11f31f61] */
  CL = (r8((uint32_t)(EAX + 0x11f31f61)));
  /* 11f05ac6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11f05ac9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05acf mov byte ptr [edx + 0x11f31f61], cl */
  w8((uint32_t)(EDX + 0x11f31f61), (CL));
  /* 11f05ad5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05adb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05ade mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05ae4 mov byte ptr [ecx + 0x11f31e60], al */
  w8((uint32_t)(ECX + 0x11f31e60), (AL));
  /* 11f05aea jmp 0x11f05af9 */
  goto L_11f05af9;
L_11f05aec:;
  /* 11f05aec mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11f05af2 mov byte ptr [edx + 0x11f31e60], 0 */
  w8((uint32_t)(EDX + 0x11f31e60), (0x0u));
L_11f05af9:;
  /* 11f05af9 jmp 0x11f05a45 */
  goto L_11f05a45;
L_11f05afe:;
  /* 11f05afe mov esp, ebp */
  ESP = (EBP);
  /* 11f05b00 pop ebp */
  EBP = (pop32());
  /* 11f05b01 ret  */
  ESPCHK(0x11f05800u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b10 @ 0x11f05b10 (23 bytes, 9 insns) */
void f_11f05b10(void) {
  FTRACE(0x11f05b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f05b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11f05b11 mov ebp, esp */
  EBP = (ESP);
  /* 11f05b13 cmp dword ptr [0x11f31e5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f31e5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05b1a je 0x11f05b23 */
  if (C.zf) goto L_11f05b23;
  /* 11f05b1c mov eax, dword ptr [0x11f31dd8] */
  EAX = (r32((uint32_t)(0x11f31dd8)));
  /* 11f05b21 jmp 0x11f05b25 */
  goto L_11f05b25;
L_11f05b23:;
  /* 11f05b23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f05b25:;
  /* 11f05b25 pop ebp */
  EBP = (pop32());
  /* 11f05b26 ret  */
  ESPCHK(0x11f05b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b30 @ 0x11f05b30 (34 bytes, 10 insns) */
void f_11f05b30(void) {
  FTRACE(0x11f05b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f05b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11f05b31 mov ebp, esp */
  EBP = (ESP);
  /* 11f05b33 cmp dword ptr [0x11f321f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f321f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05b3a jne 0x11f05b50 */
  if (!C.zf) goto L_11f05b50;
  /* 11f05b3c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11f05b3e call 0x11f05350 */
  push32(0x11f05b43u); f_11f05350();
  /* 11f05b43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05b46 mov dword ptr [0x11f321f0], 1 */
  w32((uint32_t)(0x11f321f0), (0x1u));
L_11f05b50:;
  /* 11f05b50 pop ebp */
  EBP = (pop32());
  /* 11f05b51 ret  */
  ESPCHK(0x11f05b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b60 @ 0x11f05b60 (664 bytes, 260 insns) [15 switch table(s)] */
void f_11f05b60(void) {
  FTRACE(0x11f05b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f05b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11f05b61 mov ebp, esp */
  EBP = (ESP);
  /* 11f05b63 push edi */
  push32((uint32_t)(EDI));
  /* 11f05b64 push esi */
  push32((uint32_t)(ESI));
  /* 11f05b65 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f05b68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f05b6b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05b6e mov eax, ecx */
  EAX = (ECX);
  /* 11f05b70 mov edx, ecx */
  EDX = (ECX);
  /* 11f05b72 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05b74 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05b76 jbe 0x11f05b80 */
  if ((C.cf||C.zf)) goto L_11f05b80;
  /* 11f05b78 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05b7a jb 0x11f05cf8 */
  if (C.cf) goto L_11f05cf8;
L_11f05b80:;
  /* 11f05b80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f05b86 jne 0x11f05b9c */
  if (!C.zf) goto L_11f05b9c;
  /* 11f05b88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f05b8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f05b8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05b91 jb 0x11f05bbc */
  if (C.cf) goto L_11f05bbc;
  /* 11f05b93 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f05b95 jmp dword ptr [edx*4 + 0x11f05ca8] */
  switch (EDX) {
    case 0: goto L_11f05cb8;
    case 1: goto L_11f05cc0;
    case 2: goto L_11f05ccc;
    case 3: goto L_11f05ce0;
    default: x86_unimpl("switch@0x11f05b95 out of table"); return;
  }
L_11f05b9c:;
  /* 11f05b9c mov eax, edi */
  EAX = (EDI);
  /* 11f05b9e mov edx, 3 */
  EDX = (0x3u);
  /* 11f05ba3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05ba6 jb 0x11f05bb4 */
  if (C.cf) goto L_11f05bb4;
  /* 11f05ba8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f05bab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05bad jmp dword ptr [eax*4 + 0x11f05bc0] */
  switch (EAX) {
    case 1: goto L_11f05bd0;
    case 2: goto L_11f05bfc;
    case 3: goto L_11f05c20;
    default: x86_unimpl("switch@0x11f05bad out of table"); return;
  }
L_11f05bb4:;
  /* 11f05bb4 jmp dword ptr [ecx*4 + 0x11f05cb8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11f05cb8)))); return;
  /* 11f05bbb nop  */
  /* nop */
L_11f05bbc:;
  /* 11f05bbc jmp dword ptr [ecx*4 + 0x11f05c3c] */
  switch (ECX) {
    case 0: goto L_11f05c9f;
    case 1: goto L_11f05c8c;
    case 2: goto L_11f05c84;
    case 3: goto L_11f05c7c;
    case 4: goto L_11f05c74;
    case 5: goto L_11f05c6c;
    case 6: goto L_11f05c64;
    case 7: goto L_11f05c5c;
    default: x86_unimpl("switch@0x11f05bbc out of table"); return;
  }
  /* 11f05bc3 nop  */
  /* nop */
L_11f05bd0:;
  /* 11f05bd0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f05bd2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f05bd4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f05bd6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f05bd9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f05bdc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f05bdf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f05be2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f05be5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05be8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05beb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05bee jb 0x11f05bbc */
  if (C.cf) goto L_11f05bbc;
  /* 11f05bf0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f05bf2 jmp dword ptr [edx*4 + 0x11f05ca8] */
  switch (EDX) {
    case 0: goto L_11f05cb8;
    case 1: goto L_11f05cc0;
    case 2: goto L_11f05ccc;
    case 3: goto L_11f05ce0;
    default: x86_unimpl("switch@0x11f05bf2 out of table"); return;
  }
  /* 11f05bf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f05bfc:;
  /* 11f05bfc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f05bfe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f05c00 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f05c02 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f05c05 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f05c08 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f05c0b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05c0e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05c11 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05c14 jb 0x11f05bbc */
  if (C.cf) goto L_11f05bbc;
  /* 11f05c16 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f05c18 jmp dword ptr [edx*4 + 0x11f05ca8] */
  switch (EDX) {
    case 0: goto L_11f05cb8;
    case 1: goto L_11f05cc0;
    case 2: goto L_11f05ccc;
    case 3: goto L_11f05ce0;
    default: x86_unimpl("switch@0x11f05c18 out of table"); return;
  }
  /* 11f05c1f nop  */
  /* nop */
L_11f05c20:;
  /* 11f05c20 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f05c22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f05c24 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f05c26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f05c27 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f05c2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11f05c2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05c2e jb 0x11f05bbc */
  if (C.cf) goto L_11f05bbc;
  /* 11f05c30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f05c32 jmp dword ptr [edx*4 + 0x11f05ca8] */
  switch (EDX) {
    case 0: goto L_11f05cb8;
    case 1: goto L_11f05cc0;
    case 2: goto L_11f05ccc;
    case 3: goto L_11f05ce0;
    default: x86_unimpl("switch@0x11f05c32 out of table"); return;
  }
  /* 11f05c39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f05c5c:;
  /* 11f05c5c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11f05c60 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11f05c64:;
  /* 11f05c64 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11f05c68 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11f05c6c:;
  /* 11f05c6c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11f05c70 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11f05c74:;
  /* 11f05c74 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11f05c78 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11f05c7c:;
  /* 11f05c7c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11f05c80 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11f05c84:;
  /* 11f05c84 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11f05c88 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11f05c8c:;
  /* 11f05c8c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11f05c90 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11f05c94 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f05c9b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05c9d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f05c9f:;
  /* 11f05c9f jmp dword ptr [edx*4 + 0x11f05ca8] */
  switch (EDX) {
    case 0: goto L_11f05cb8;
    case 1: goto L_11f05cc0;
    case 2: goto L_11f05ccc;
    case 3: goto L_11f05ce0;
    default: x86_unimpl("switch@0x11f05c9f out of table"); return;
  }
  /* 11f05ca6 mov edi, edi */
  EDI = (EDI);
L_11f05cb8:;
  /* 11f05cb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05cbb pop esi */
  ESI = (pop32());
  /* 11f05cbc pop edi */
  EDI = (pop32());
  /* 11f05cbd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f05cbe ret  */
  ESPCHK(0x11f05b60u, _esp0);
  ESP += 4; return;
  /* 11f05cbf nop  */
  /* nop */
L_11f05cc0:;
  /* 11f05cc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f05cc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f05cc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05cc7 pop esi */
  ESI = (pop32());
  /* 11f05cc8 pop edi */
  EDI = (pop32());
  /* 11f05cc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f05cca ret  */
  ESPCHK(0x11f05b60u, _esp0);
  ESP += 4; return;
  /* 11f05ccb nop  */
  /* nop */
L_11f05ccc:;
  /* 11f05ccc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f05cce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f05cd0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f05cd3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f05cd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05cd9 pop esi */
  ESI = (pop32());
  /* 11f05cda pop edi */
  EDI = (pop32());
  /* 11f05cdb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f05cdc ret  */
  ESPCHK(0x11f05b60u, _esp0);
  ESP += 4; return;
  /* 11f05cdd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f05ce0:;
  /* 11f05ce0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f05ce2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11f05ce4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f05ce7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f05cea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f05ced mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f05cf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05cf3 pop esi */
  ESI = (pop32());
  /* 11f05cf4 pop edi */
  EDI = (pop32());
  /* 11f05cf5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f05cf6 ret  */
  ESPCHK(0x11f05b60u, _esp0);
  ESP += 4; return;
  /* 11f05cf7 nop  */
  /* nop */
L_11f05cf8:;
  /* 11f05cf8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11f05cfc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11f05d00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11f05d06 jne 0x11f05d2c */
  if (!C.zf) goto L_11f05d2c;
  /* 11f05d08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f05d0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f05d0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05d11 jb 0x11f05d20 */
  if (C.cf) goto L_11f05d20;
  /* 11f05d13 std  */
  C.df=1;
  /* 11f05d14 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f05d16 cld  */
  C.df=0;
  /* 11f05d17 jmp dword ptr [edx*4 + 0x11f05e40] */
  switch (EDX) {
    case 0: goto L_11f05e50;
    case 1: goto L_11f05e58;
    case 2: goto L_11f05e68;
    case 3: goto L_11f05e7c;
    default: x86_unimpl("switch@0x11f05d17 out of table"); return;
  }
  /* 11f05d1e mov edi, edi */
  EDI = (EDI);
L_11f05d20:;
  /* 11f05d20 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f05d22 jmp dword ptr [ecx*4 + 0x11f05df0] */
  switch (ECX) {
    case 0: goto L_11f05e37;
    default: x86_unimpl("switch@0x11f05d22 out of table"); return;
  }
  /* 11f05d29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f05d2c:;
  /* 11f05d2c mov eax, edi */
  EAX = (EDI);
  /* 11f05d2e mov edx, 3 */
  EDX = (0x3u);
  /* 11f05d33 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05d36 jb 0x11f05d44 */
  if (C.cf) goto L_11f05d44;
  /* 11f05d38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f05d3b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05d3d jmp dword ptr [eax*4 + 0x11f05d48] */
  switch (EAX) {
    case 1: goto L_11f05d58;
    case 2: goto L_11f05d78;
    case 3: goto L_11f05da0;
    default: x86_unimpl("switch@0x11f05d3d out of table"); return;
  }
L_11f05d44:;
  /* 11f05d44 jmp dword ptr [ecx*4 + 0x11f05e40] */
  switch (ECX) {
    case 0: goto L_11f05e50;
    case 1: goto L_11f05e58;
    case 2: goto L_11f05e68;
    case 3: goto L_11f05e7c;
    default: x86_unimpl("switch@0x11f05d44 out of table"); return;
  }
  /* 11f05d4b nop  */
  /* nop */
L_11f05d58:;
  /* 11f05d58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f05d5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f05d5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f05d60 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11f05d61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f05d64 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11f05d65 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05d68 jb 0x11f05d20 */
  if (C.cf) goto L_11f05d20;
  /* 11f05d6a std  */
  C.df=1;
  /* 11f05d6b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f05d6d cld  */
  C.df=0;
  /* 11f05d6e jmp dword ptr [edx*4 + 0x11f05e40] */
  switch (EDX) {
    case 0: goto L_11f05e50;
    case 1: goto L_11f05e58;
    case 2: goto L_11f05e68;
    case 3: goto L_11f05e7c;
    default: x86_unimpl("switch@0x11f05d6e out of table"); return;
  }
  /* 11f05d75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f05d78:;
  /* 11f05d78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f05d7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f05d7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f05d80 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f05d83 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f05d86 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f05d89 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05d8c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05d8f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05d92 jb 0x11f05d20 */
  if (C.cf) goto L_11f05d20;
  /* 11f05d94 std  */
  C.df=1;
  /* 11f05d95 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f05d97 cld  */
  C.df=0;
  /* 11f05d98 jmp dword ptr [edx*4 + 0x11f05e40] */
  switch (EDX) {
    case 0: goto L_11f05e50;
    case 1: goto L_11f05e58;
    case 2: goto L_11f05e68;
    case 3: goto L_11f05e7c;
    default: x86_unimpl("switch@0x11f05d98 out of table"); return;
  }
  /* 11f05d9f nop  */
  /* nop */
L_11f05da0:;
  /* 11f05da0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f05da3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f05da5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f05da8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f05dab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f05dae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f05db1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f05db4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f05db7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05dba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05dbd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05dc0 jb 0x11f05d20 */
  if (C.cf) goto L_11f05d20;
  /* 11f05dc6 std  */
  C.df=1;
  /* 11f05dc7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11f05dc9 cld  */
  C.df=0;
  /* 11f05dca jmp dword ptr [edx*4 + 0x11f05e40] */
  switch (EDX) {
    case 0: goto L_11f05e50;
    case 1: goto L_11f05e58;
    case 2: goto L_11f05e68;
    case 3: goto L_11f05e7c;
    default: x86_unimpl("switch@0x11f05dca out of table"); return;
  }
  /* 11f05dd1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11f05dd4 hlt  */
  x86_unimpl("hlt @ 0x11f05dd4");
  /* 11f05dd5 pop ebp */
  EBP = (pop32());
  /* 11f05dd7 adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05dd9 pop ebp */
  EBP = (pop32());
  /* 11f05dda lock adc dword ptr [esi + ebx*2], eax */
  x86_unimpl("lock adc @ 0x11f05dda");
  /* 11f05dde lock adc dword ptr [esi + ebx*2], ecx */
  x86_unimpl("lock adc @ 0x11f05dde");
  /* 11f05de2 lock adc dword ptr [esi + ebx*2], edx */
  x86_unimpl("lock adc @ 0x11f05de2");
  /* 11f05de6 lock adc dword ptr [esi + ebx*2], ebx */
  x86_unimpl("lock adc @ 0x11f05de6");
  /* 11f05dea lock adc dword ptr [esi + ebx*2], esp */
  x86_unimpl("lock adc @ 0x11f05dea");
  /* 11f05df4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11f05df8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11f05dfc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11f05e00 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11f05e04 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11f05e08 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11f05e0c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11f05e10 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11f05e14 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11f05e18 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11f05e1c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11f05e20 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11f05e24 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11f05e28 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11f05e2c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11f05e33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05e35 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11f05e37:;
  /* 11f05e37 jmp dword ptr [edx*4 + 0x11f05e40] */
  switch (EDX) {
    case 0: goto L_11f05e50;
    case 1: goto L_11f05e58;
    case 2: goto L_11f05e68;
    case 3: goto L_11f05e7c;
    default: x86_unimpl("switch@0x11f05e37 out of table"); return;
  }
  /* 11f05e3e mov edi, edi */
  EDI = (EDI);
L_11f05e50:;
  /* 11f05e50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05e53 pop esi */
  ESI = (pop32());
  /* 11f05e54 pop edi */
  EDI = (pop32());
  /* 11f05e55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f05e56 ret  */
  ESPCHK(0x11f05b60u, _esp0);
  ESP += 4; return;
  /* 11f05e57 nop  */
  /* nop */
L_11f05e58:;
  /* 11f05e58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f05e5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f05e5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05e61 pop esi */
  ESI = (pop32());
  /* 11f05e62 pop edi */
  EDI = (pop32());
  /* 11f05e63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f05e64 ret  */
  ESPCHK(0x11f05b60u, _esp0);
  ESP += 4; return;
  /* 11f05e65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f05e68:;
  /* 11f05e68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f05e6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f05e6e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f05e71 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f05e74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05e77 pop esi */
  ESI = (pop32());
  /* 11f05e78 pop edi */
  EDI = (pop32());
  /* 11f05e79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f05e7a ret  */
  ESPCHK(0x11f05b60u, _esp0);
  ESP += 4; return;
  /* 11f05e7b nop  */
  /* nop */
L_11f05e7c:;
  /* 11f05e7c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11f05e7f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11f05e82 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11f05e85 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11f05e88 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11f05e8b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11f05e8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f05e91 pop esi */
  ESI = (pop32());
  /* 11f05e92 pop edi */
  EDI = (pop32());
  /* 11f05e93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f05e94 ret  */
  ESPCHK(0x11f05b60u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x11f05ea0 (104 bytes, 43 insns) */
void f_11f05ea0(void) {
  FTRACE(0x11f05ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f05ea0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f05ea1 push esi */
  push32((uint32_t)(ESI));
  /* 11f05ea2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11f05ea6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f05ea8 jne 0x11f05ec2 */
  if (!C.zf) goto L_11f05ec2;
  /* 11f05eaa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f05eae mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f05eb2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f05eb4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f05eb6 mov ebx, eax */
  EBX = (EAX);
  /* 11f05eb8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f05ebc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f05ebe mov edx, ebx */
  EDX = (EBX);
  /* 11f05ec0 jmp 0x11f05f03 */
  goto L_11f05f03;
L_11f05ec2:;
  /* 11f05ec2 mov ecx, eax */
  ECX = (EAX);
  /* 11f05ec4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f05ec8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f05ecc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11f05ed0:;
  /* 11f05ed0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f05ed2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11f05ed4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f05ed6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11f05ed8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f05eda jne 0x11f05ed0 */
  if (!C.zf) goto L_11f05ed0;
  /* 11f05edc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f05ede mov esi, eax */
  ESI = (EAX);
  /* 11f05ee0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11f05ee4 mov ecx, eax */
  ECX = (EAX);
  /* 11f05ee6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f05eea mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11f05eec add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05eee jb 0x11f05efe */
  if (C.cf) goto L_11f05efe;
  /* 11f05ef0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05ef4 ja 0x11f05efe */
  if ((!C.cf&&!C.zf)) goto L_11f05efe;
  /* 11f05ef6 jb 0x11f05eff */
  if (C.cf) goto L_11f05eff;
  /* 11f05ef8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05efc jbe 0x11f05eff */
  if ((C.cf||C.zf)) goto L_11f05eff;
L_11f05efe:;
  /* 11f05efe dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11f05eff:;
  /* 11f05eff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f05f01 mov eax, esi */
  EAX = (ESI);
L_11f05f03:;
  /* 11f05f03 pop esi */
  ESI = (pop32());
  /* 11f05f04 pop ebx */
  EBX = (pop32());
  /* 11f05f05 ret 0x10 */
  ESPCHK(0x11f05ea0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11f05f10 (117 bytes, 44 insns) */
void f_11f05f10(void) {
  FTRACE(0x11f05f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f05f10 push ebx */
  push32((uint32_t)(EBX));
  /* 11f05f11 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11f05f15 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f05f17 jne 0x11f05f31 */
  if (!C.zf) goto L_11f05f31;
  /* 11f05f19 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f05f1d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f05f21 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f05f23 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f05f25 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11f05f29 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f05f2b mov eax, edx */
  EAX = (EDX);
  /* 11f05f2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f05f2f jmp 0x11f05f81 */
  goto L_11f05f81;
L_11f05f31:;
  /* 11f05f31 mov ecx, eax */
  ECX = (EAX);
  /* 11f05f33 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11f05f37 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11f05f3b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_11f05f3f:;
  /* 11f05f3f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f05f41 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11f05f43 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f05f45 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11f05f47 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f05f49 jne 0x11f05f3f */
  if (!C.zf) goto L_11f05f3f;
  /* 11f05f4b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11f05f4d mov ecx, eax */
  ECX = (EAX);
  /* 11f05f4f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11f05f53 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11f05f54 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11f05f58 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05f5a jb 0x11f05f6a */
  if (C.cf) goto L_11f05f6a;
  /* 11f05f5c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05f60 ja 0x11f05f6a */
  if ((!C.cf&&!C.zf)) goto L_11f05f6a;
  /* 11f05f62 jb 0x11f05f72 */
  if (C.cf) goto L_11f05f72;
  /* 11f05f64 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05f68 jbe 0x11f05f72 */
  if ((C.cf||C.zf)) goto L_11f05f72;
L_11f05f6a:;
  /* 11f05f6a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05f6e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11f05f72:;
  /* 11f05f72 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05f76 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05f7a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f05f7c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f05f7e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11f05f81:;
  /* 11f05f81 pop ebx */
  EBX = (pop32());
  /* 11f05f82 ret 0x10 */
  ESPCHK(0x11f05f10u, _esp0);
  ESP += 20; return;
}

/* FUN_10015f90 @ 0x11f05f90 (628 bytes, 214 insns) */
void f_11f05f90(void) {
  FTRACE(0x11f05f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f05f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11f05f91 mov ebp, esp */
  EBP = (ESP);
  /* 11f05f93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f05f96 push ebx */
  push32((uint32_t)(EBX));
  /* 11f05f97 push esi */
  push32((uint32_t)(ESI));
  /* 11f05f98 push edi */
  push32((uint32_t)(EDI));
L_11f05f99:;
  /* 11f05f99 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05f9d jne 0x11f05fbd */
  if (!C.zf) goto L_11f05fbd;
  /* 11f05f9f push 0x11f2b2e0 */
  push32((uint32_t)(0x11f2b2e0u));
  /* 11f05fa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f05fa6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11f05fa8 push 0x11f2b2d4 */
  push32((uint32_t)(0x11f2b2d4u));
  /* 11f05fad push 2 */
  push32((uint32_t)(0x2u));
  /* 11f05faf call 0x11efa680 */
  push32(0x11f05fb4u); f_11efa680();
  /* 11f05fb4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f05fb7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f05fba jne 0x11f05fbd */
  if (!C.zf) goto L_11f05fbd;
  /* 11f05fbc int3  */
  x86_unimpl("int3 @ 0x11f05fbc");
L_11f05fbd:;
  /* 11f05fbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f05fbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f05fc1 jne 0x11f05f99 */
  if (!C.zf) goto L_11f05f99;
  /* 11f05fc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f05fc6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f05fc9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f05fcc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11f05fcf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f05fd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f05fd5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f05fd8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 11f05fde test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f05fe0 je 0x11f05fef */
  if (C.zf) goto L_11f05fef;
  /* 11f05fe2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f05fe5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f05fe8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11f05feb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f05fed je 0x11f06005 */
  if (C.zf) goto L_11f06005;
L_11f05fef:;
  /* 11f05fef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f05ff2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11f05ff5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11f05ff7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f05ffa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11f05ffd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f06000 jmp 0x11f061fd */
  goto L_11f061fd;
L_11f06005:;
  /* 11f06005 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f06008 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11f0600b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0600e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f06010 je 0x11f0605c */
  if (C.zf) goto L_11f0605c;
  /* 11f06012 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f06015 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11f0601c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0601f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11f06022 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11f06025 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f06027 je 0x11f06045 */
  if (C.zf) goto L_11f06045;
  /* 11f06029 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0602c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0602f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f06032 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f06034 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f06037 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f0603a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0603d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f06040 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11f06043 jmp 0x11f0605c */
  goto L_11f0605c;
L_11f06045:;
  /* 11f06045 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f06048 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f0604b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0604e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f06051 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11f06054 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f06057 jmp 0x11f061fd */
  goto L_11f061fd;
L_11f0605c:;
  /* 11f0605c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0605f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f06062 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11f06065 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f06068 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11f0606b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0606e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f06071 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11f06074 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f06077 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11f0607a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0607d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11f06084 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0608b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0608e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f06091 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f06094 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f06097 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0609d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0609f jne 0x11f060cf */
  if (!C.zf) goto L_11f060cf;
  /* 11f060a1 cmp dword ptr [ebp - 8], 0x11f2e928 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11f2e928u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f060a8 je 0x11f060b3 */
  if (C.zf) goto L_11f060b3;
  /* 11f060aa cmp dword ptr [ebp - 8], 0x11f2e948 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11f2e948u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f060b1 jne 0x11f060c3 */
  if (!C.zf) goto L_11f060c3;
L_11f060b3:;
  /* 11f060b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f060b6 push edx */
  push32((uint32_t)(EDX));
  /* 11f060b7 call 0x11f0aa60 */
  push32(0x11f060bcu); f_11f0aa60();
  /* 11f060bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f060bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f060c1 jne 0x11f060cf */
  if (!C.zf) goto L_11f060cf;
L_11f060c3:;
  /* 11f060c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f060c6 push eax */
  push32((uint32_t)(EAX));
  /* 11f060c7 call 0x11f0a990 */
  push32(0x11f060ccu); f_11f0a990();
  /* 11f060cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f060cf:;
  /* 11f060cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f060d2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f060d5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 11f060db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f060dd je 0x11f061bb */
  if (C.zf) goto L_11f061bb;
L_11f060e3:;
  /* 11f060e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f060e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f060e9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11f060eb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f060ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f060f0 jge 0x11f06113 */
  if ((C.sf==C.of)) goto L_11f06113;
  /* 11f060f2 push 0x11f2b294 */
  push32((uint32_t)(0x11f2b294u));
  /* 11f060f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f060f9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11f060fe push 0x11f2b2d4 */
  push32((uint32_t)(0x11f2b2d4u));
  /* 11f06103 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f06105 call 0x11efa680 */
  push32(0x11f0610au); f_11efa680();
  /* 11f0610a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0610d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06110 jne 0x11f06113 */
  if (!C.zf) goto L_11f06113;
  /* 11f06112 int3  */
  x86_unimpl("int3 @ 0x11f06112");
L_11f06113:;
  /* 11f06113 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f06115 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f06117 jne 0x11f060e3 */
  if (!C.zf) goto L_11f060e3;
  /* 11f06119 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0611c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0611f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f06121 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f06124 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f06127 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0612a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f0612d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06130 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f06133 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f06135 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f06138 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11f0613b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0613e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f06141 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f06144 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06148 jle 0x11f06166 */
  if ((C.zf||C.sf!=C.of)) goto L_11f06166;
  /* 11f0614a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0614d push ecx */
  push32((uint32_t)(ECX));
  /* 11f0614e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f06151 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f06154 push eax */
  push32((uint32_t)(EAX));
  /* 11f06155 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f06158 push ecx */
  push32((uint32_t)(ECX));
  /* 11f06159 call 0x11f0a680 */
  push32(0x11f0615eu); f_11f0a680();
  /* 11f0615e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06161 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f06164 jmp 0x11f061ae */
  goto L_11f061ae;
L_11f06166:;
  /* 11f06166 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0616a je 0x11f06189 */
  if (C.zf) goto L_11f06189;
  /* 11f0616c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0616f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11f06172 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f06175 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f06178 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0617b mov ecx, dword ptr [edx*4 + 0x11f320a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11f320a0)));
  /* 11f06182 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06184 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f06187 jmp 0x11f06190 */
  goto L_11f06190;
L_11f06189:;
  /* 11f06189 mov dword ptr [ebp - 0x14], 0x11f2df98 */
  w32((uint32_t)(EBP + -0x14), (0x11f2df98u));
L_11f06190:;
  /* 11f06190 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f06193 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11f06197 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0619a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0619c je 0x11f061ae */
  if (C.zf) goto L_11f061ae;
  /* 11f0619e push 2 */
  push32((uint32_t)(0x2u));
  /* 11f061a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f061a2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f061a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f061a6 call 0x11f0a530 */
  push32(0x11f061abu); f_11f0a530();
  /* 11f061ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f061ae:;
  /* 11f061ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f061b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f061b4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11f061b7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11f061b9 jmp 0x11f061d9 */
  goto L_11f061d9;
L_11f061bb:;
  /* 11f061bb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f061c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f061c5 push edx */
  push32((uint32_t)(EDX));
  /* 11f061c6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11f061c9 push eax */
  push32((uint32_t)(EAX));
  /* 11f061ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f061cd push ecx */
  push32((uint32_t)(ECX));
  /* 11f061ce call 0x11f0a680 */
  push32(0x11f061d3u); f_11f0a680();
  /* 11f061d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f061d6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11f061d9:;
  /* 11f061d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f061dc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f061df je 0x11f061f5 */
  if (C.zf) goto L_11f061f5;
  /* 11f061e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f061e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f061e7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11f061ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f061ed mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11f061f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f061f3 jmp 0x11f061fd */
  goto L_11f061fd;
L_11f061f5:;
  /* 11f061f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f061f8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_11f061fd:;
  /* 11f061fd pop edi */
  EDI = (pop32());
  /* 11f061fe pop esi */
  ESI = (pop32());
  /* 11f061ff pop ebx */
  EBX = (pop32());
  /* 11f06200 mov esp, ebp */
  ESP = (EBP);
  /* 11f06202 pop ebp */
  EBP = (pop32());
  /* 11f06203 ret  */
  ESPCHK(0x11f05f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10016210 @ 0x11f06210 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11f06210(void) {
  FTRACE(0x11f06210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f06210 push ebp */
  push32((uint32_t)(EBP));
  /* 11f06211 mov ebp, esp */
  EBP = (ESP);
  /* 11f06213 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f06219 push ebx */
  push32((uint32_t)(EBX));
  /* 11f0621a push esi */
  push32((uint32_t)(ESI));
  /* 11f0621b push edi */
  push32((uint32_t)(EDI));
  /* 11f0621c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11f06223 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 11f0622d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11f06234:;
  /* 11f06234 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f06237 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f06239 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11f0623c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f06240 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f06243 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06246 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f06249 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0624b je 0x11f06e27 */
  if (C.zf) goto L_11f06e27;
  /* 11f06251 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06258 jl 0x11f06e27 */
  if ((C.sf!=C.of)) goto L_11f06e27;
  /* 11f0625e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f06262 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06265 jl 0x11f06286 */
  if ((C.sf!=C.of)) goto L_11f06286;
  /* 11f06267 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f0626b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0626e jg 0x11f06286 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f06286;
  /* 11f06270 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f06274 movsx ecx, byte ptr [eax + 0x11f2b2cc] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11f2b2cc))));
  /* 11f0627b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0627e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11f06284 jmp 0x11f06290 */
  goto L_11f06290;
L_11f06286:;
  /* 11f06286 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11f06290:;
  /* 11f06290 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11f06296 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f06299 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0629c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0629f movsx edx, byte ptr [ecx + eax*8 + 0x11f2b2ec] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11f2b2ec))));
  /* 11f062a7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f062aa mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11f062ad mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f062b0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11f062b6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f062bd ja 0x11f06e22 */
  if ((!C.cf&&!C.zf)) goto L_11f06e22;
  /* 11f062c3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11f062c9 jmp dword ptr [ecx*4 + 0x11f06e34] */
  switch (ECX) {
    case 0: goto L_11f062d0;
    case 1: goto L_11f0636a;
    case 2: goto L_11f063ac;
    case 3: goto L_11f0641b;
    case 4: goto L_11f06473;
    case 5: goto L_11f06482;
    case 6: goto L_11f064ce;
    case 7: goto L_11f06561;
    case 8: goto L_11f063f8;
    case 9: goto L_11f06403;
    case 10: goto L_11f063ee;
    case 11: goto L_11f063e3;
    case 12: goto L_11f0640e;
    case 13: goto L_11f06416;
    default: x86_unimpl("switch@0x11f062c9 out of table"); return;
  }
L_11f062d0:;
  /* 11f062d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11f062d7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f062da and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f062e0 mov eax, dword ptr [0x11f2e05c] */
  EAX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f062e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f062e7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11f062eb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f062f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f062f3 je 0x11f0634d */
  if (C.zf) goto L_11f0634d;
  /* 11f062f5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 11f062fb push edx */
  push32((uint32_t)(EDX));
  /* 11f062fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f062ff push eax */
  push32((uint32_t)(EAX));
  /* 11f06300 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f06304 push ecx */
  push32((uint32_t)(ECX));
  /* 11f06305 call 0x11f06f40 */
  push32(0x11f0630au); f_11f06f40();
  /* 11f0630a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0630d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f06310 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f06312 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11f06315 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f06318 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0631b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11f0631e:;
  /* 11f0631e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f06322 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f06324 jne 0x11f06347 */
  if (!C.zf) goto L_11f06347;
  /* 11f06326 push 0x11f2b36c */
  push32((uint32_t)(0x11f2b36cu));
  /* 11f0632b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0632d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 11f06332 push 0x11f2b360 */
  push32((uint32_t)(0x11f2b360u));
  /* 11f06337 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f06339 call 0x11efa680 */
  push32(0x11f0633eu); f_11efa680();
  /* 11f0633e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06341 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06344 jne 0x11f06347 */
  if (!C.zf) goto L_11f06347;
  /* 11f06346 int3  */
  x86_unimpl("int3 @ 0x11f06346");
L_11f06347:;
  /* 11f06347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f06349 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0634b jne 0x11f0631e */
  if (!C.zf) goto L_11f0631e;
L_11f0634d:;
  /* 11f0634d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11f06353 push ecx */
  push32((uint32_t)(ECX));
  /* 11f06354 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f06357 push edx */
  push32((uint32_t)(EDX));
  /* 11f06358 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f0635c push eax */
  push32((uint32_t)(EAX));
  /* 11f0635d call 0x11f06f40 */
  push32(0x11f06362u); f_11f06f40();
  /* 11f06362 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06365 jmp 0x11f06e22 */
  goto L_11f06e22;
L_11f0636a:;
  /* 11f0636a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f06371 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f06374 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 11f0637a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11f06380 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11f06386 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 11f0638c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f0638f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f06396 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11f063a0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11f063a7 jmp 0x11f06e22 */
  goto L_11f06e22;
L_11f063ac:;
  /* 11f063ac movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f063b0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11f063b6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 11f063bc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f063bf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11f063c5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f063cc ja 0x11f06416 */
  if ((!C.cf&&!C.zf)) goto L_11f06416;
  /* 11f063ce mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11f063d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f063d6 mov al, byte ptr [ecx + 0x11f06e6c] */
  AL = (r8((uint32_t)(ECX + 0x11f06e6c)));
  /* 11f063dc jmp dword ptr [eax*4 + 0x11f06e54] */
  switch (EAX) {
    case 0: goto L_11f063f8;
    case 1: goto L_11f06403;
    case 2: goto L_11f063ee;
    case 3: goto L_11f063e3;
    case 4: goto L_11f0640e;
    case 5: goto L_11f06416;
    default: x86_unimpl("switch@0x11f063dc out of table"); return;
  }
L_11f063e3:;
  /* 11f063e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f063e6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f063e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f063ec jmp 0x11f06416 */
  goto L_11f06416;
L_11f063ee:;
  /* 11f063ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f063f1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11f063f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f063f6 jmp 0x11f06416 */
  goto L_11f06416;
L_11f063f8:;
  /* 11f063f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f063fb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11f063fe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f06401 jmp 0x11f06416 */
  goto L_11f06416;
L_11f06403:;
  /* 11f06403 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06406 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11f06409 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0640c jmp 0x11f06416 */
  goto L_11f06416;
L_11f0640e:;
  /* 11f0640e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06411 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11f06413 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f06416:;
  /* 11f06416 jmp 0x11f06e22 */
  goto L_11f06e22;
L_11f0641b:;
  /* 11f0641b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f0641f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06422 jne 0x11f06457 */
  if (!C.zf) goto L_11f06457;
  /* 11f06424 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11f06427 push edx */
  push32((uint32_t)(EDX));
  /* 11f06428 call 0x11f07050 */
  push32(0x11f0642du); f_11f07050();
  /* 11f0642d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06430 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 11f06436 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0643d jge 0x11f06455 */
  if ((C.sf==C.of)) goto L_11f06455;
  /* 11f0643f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06442 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11f06444 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f06447 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11f0644d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0644f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11f06455:;
  /* 11f06455 jmp 0x11f0646e */
  goto L_11f0646e;
L_11f06457:;
  /* 11f06457 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 11f0645d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f06460 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f06464 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 11f06468 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11f0646e:;
  /* 11f0646e jmp 0x11f06e22 */
  goto L_11f06e22;
L_11f06473:;
  /* 11f06473 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 11f0647d jmp 0x11f06e22 */
  goto L_11f06e22;
L_11f06482:;
  /* 11f06482 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f06486 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06489 jne 0x11f064b2 */
  if (!C.zf) goto L_11f064b2;
  /* 11f0648b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11f0648e push eax */
  push32((uint32_t)(EAX));
  /* 11f0648f call 0x11f07050 */
  push32(0x11f06494u); f_11f07050();
  /* 11f06494 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06497 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11f0649d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f064a4 jge 0x11f064b0 */
  if ((C.sf==C.of)) goto L_11f064b0;
  /* 11f064a6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11f064b0:;
  /* 11f064b0 jmp 0x11f064c9 */
  goto L_11f064c9;
L_11f064b2:;
  /* 11f064b2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11f064b8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f064bb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f064bf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11f064c3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11f064c9:;
  /* 11f064c9 jmp 0x11f06e22 */
  goto L_11f06e22;
L_11f064ce:;
  /* 11f064ce movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f064d2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11f064d8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11f064de sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f064e1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11f064e7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f064ee ja 0x11f0655c */
  if ((!C.cf&&!C.zf)) goto L_11f0655c;
  /* 11f064f0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11f064f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f064f8 mov al, byte ptr [ecx + 0x11f06e91] */
  AL = (r8((uint32_t)(ECX + 0x11f06e91)));
  /* 11f064fe jmp dword ptr [eax*4 + 0x11f06e7d] */
  switch (EAX) {
    case 0: goto L_11f06510;
    case 1: goto L_11f06549;
    case 2: goto L_11f06505;
    case 3: goto L_11f06553;
    case 4: goto L_11f0655c;
    default: x86_unimpl("switch@0x11f064fe out of table"); return;
  }
L_11f06505:;
  /* 11f06505 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06508 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0650b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0650e jmp 0x11f0655c */
  goto L_11f0655c;
L_11f06510:;
  /* 11f06510 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f06513 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f06516 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06519 jne 0x11f0653b */
  if (!C.zf) goto L_11f0653b;
  /* 11f0651b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0651e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11f06522 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06525 jne 0x11f0653b */
  if (!C.zf) goto L_11f0653b;
  /* 11f06527 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0652a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0652d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f06530 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06533 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f06536 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f06539 jmp 0x11f06547 */
  goto L_11f06547;
L_11f0653b:;
  /* 11f0653b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11f06542 jmp 0x11f062d0 */
  goto L_11f062d0;
L_11f06547:;
  /* 11f06547 jmp 0x11f0655c */
  goto L_11f0655c;
L_11f06549:;
  /* 11f06549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0654c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11f0654e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f06551 jmp 0x11f0655c */
  goto L_11f0655c;
L_11f06553:;
  /* 11f06553 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06556 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11f06559 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f0655c:;
  /* 11f0655c jmp 0x11f06e22 */
  goto L_11f06e22;
L_11f06561:;
  /* 11f06561 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f06565 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 11f0656b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11f06571 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f06574 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 11f0657a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06581 ja 0x11f06c47 */
  if ((!C.cf&&!C.zf)) goto L_11f06c47;
  /* 11f06587 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11f0658d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0658f mov cl, byte ptr [edx + 0x11f06efc] */
  CL = (r8((uint32_t)(EDX + 0x11f06efc)));
  /* 11f06595 jmp dword ptr [ecx*4 + 0x11f06ec0] */
  switch (ECX) {
    case 0: goto L_11f0659c;
    case 1: goto L_11f06830;
    case 2: goto L_11f066c0;
    case 3: goto L_11f06969;
    case 4: goto L_11f0662b;
    case 5: goto L_11f065b1;
    case 6: goto L_11f0693b;
    case 7: goto L_11f06840;
    case 8: goto L_11f067e5;
    case 9: goto L_11f069b5;
    case 10: goto L_11f0695f;
    case 11: goto L_11f066d6;
    case 12: goto L_11f06953;
    case 13: goto L_11f06975;
    case 14: goto L_11f06c47;
    default: x86_unimpl("switch@0x11f06595 out of table"); return;
  }
L_11f0659c:;
  /* 11f0659c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0659f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11f065a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f065a6 jne 0x11f065b1 */
  if (!C.zf) goto L_11f065b1;
  /* 11f065a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f065ab or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11f065ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f065b1:;
  /* 11f065b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f065b4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 11f065ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f065bc je 0x11f065f7 */
  if (C.zf) goto L_11f065f7;
  /* 11f065be lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11f065c1 push eax */
  push32((uint32_t)(EAX));
  /* 11f065c2 call 0x11f07090 */
  push32(0x11f065c7u); f_11f07090();
  /* 11f065c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f065ca mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 11f065ce mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11f065d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f065d3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11f065d9 push edx */
  push32((uint32_t)(EDX));
  /* 11f065da call 0x11f0acd0 */
  push32(0x11f065dfu); f_11f0acd0();
  /* 11f065df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f065e2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f065e5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f065e9 jge 0x11f065f5 */
  if ((C.sf==C.of)) goto L_11f065f5;
  /* 11f065eb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11f065f5:;
  /* 11f065f5 jmp 0x11f0661d */
  goto L_11f0661d;
L_11f065f7:;
  /* 11f065f7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11f065fa push eax */
  push32((uint32_t)(EAX));
  /* 11f065fb call 0x11f07050 */
  push32(0x11f06600u); f_11f07050();
  /* 11f06600 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06603 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 11f0660a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11f06610 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11f06616 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_11f0661d:;
  /* 11f0661d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11f06623 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11f06626 jmp 0x11f06c47 */
  goto L_11f06c47;
L_11f0662b:;
  /* 11f0662b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11f0662e push eax */
  push32((uint32_t)(EAX));
  /* 11f0662f call 0x11f07050 */
  push32(0x11f06634u); f_11f07050();
  /* 11f06634 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06637 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 11f0663d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06644 je 0x11f06652 */
  if (C.zf) goto L_11f06652;
  /* 11f06646 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11f0664c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06650 jne 0x11f0666c */
  if (!C.zf) goto L_11f0666c;
L_11f06652:;
  /* 11f06652 mov edx, dword ptr [0x11f2e550] */
  EDX = (r32((uint32_t)(0x11f2e550)));
  /* 11f06658 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11f0665b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0665e push eax */
  push32((uint32_t)(EAX));
  /* 11f0665f call 0x11f00050 */
  push32(0x11f06664u); f_11f00050();
  /* 11f06664 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06667 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f0666a jmp 0x11f066bb */
  goto L_11f066bb;
L_11f0666c:;
  /* 11f0666c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0666f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 11f06675 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f06677 je 0x11f0669c */
  if (C.zf) goto L_11f0669c;
  /* 11f06679 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11f0667f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f06682 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f06685 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11f0668b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 11f0668e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f06690 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f06693 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11f0669a jmp 0x11f066bb */
  goto L_11f066bb;
L_11f0669c:;
  /* 11f0669c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11f066a3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11f066a9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f066ac mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11f066af mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11f066b5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11f066b8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11f066bb:;
  /* 11f066bb jmp 0x11f06c47 */
  goto L_11f06c47;
L_11f066c0:;
  /* 11f066c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f066c3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11f066c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f066cb jne 0x11f066d6 */
  if (!C.zf) goto L_11f066d6;
  /* 11f066cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f066d0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f066d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f066d6:;
  /* 11f066d6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f066dd jne 0x11f066eb */
  if (!C.zf) goto L_11f066eb;
  /* 11f066df mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11f066e9 jmp 0x11f066f7 */
  goto L_11f066f7;
L_11f066eb:;
  /* 11f066eb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11f066f1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11f066f7:;
  /* 11f066f7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 11f066fd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11f06703 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11f06706 push edx */
  push32((uint32_t)(EDX));
  /* 11f06707 call 0x11f07050 */
  push32(0x11f0670cu); f_11f07050();
  /* 11f0670c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0670f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f06712 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06715 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0671a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0671c je 0x11f06786 */
  if (C.zf) goto L_11f06786;
  /* 11f0671e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06722 jne 0x11f0672d */
  if (!C.zf) goto L_11f0672d;
  /* 11f06724 mov ecx, dword ptr [0x11f2e554] */
  ECX = (r32((uint32_t)(0x11f2e554)));
  /* 11f0672a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11f0672d:;
  /* 11f0672d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11f06734 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f06737 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_11f0673d:;
  /* 11f0673d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11f06743 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 11f06749 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0674c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11f06752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f06754 je 0x11f06776 */
  if (C.zf) goto L_11f06776;
  /* 11f06756 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11f0675c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0675e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11f06761 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f06763 je 0x11f06776 */
  if (C.zf) goto L_11f06776;
  /* 11f06765 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 11f0676b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0676e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11f06774 jmp 0x11f0673d */
  goto L_11f0673d;
L_11f06776:;
  /* 11f06776 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11f0677c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0677f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f06781 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11f06784 jmp 0x11f067e0 */
  goto L_11f067e0;
L_11f06786:;
  /* 11f06786 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0678a jne 0x11f06794 */
  if (!C.zf) goto L_11f06794;
  /* 11f0678c mov eax, dword ptr [0x11f2e550] */
  EAX = (r32((uint32_t)(0x11f2e550)));
  /* 11f06791 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11f06794:;
  /* 11f06794 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f06797 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_11f0679d:;
  /* 11f0679d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11f067a3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11f067a9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f067ac mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11f067b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f067b4 je 0x11f067d4 */
  if (C.zf) goto L_11f067d4;
  /* 11f067b6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11f067bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f067bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f067c1 je 0x11f067d4 */
  if (C.zf) goto L_11f067d4;
  /* 11f067c3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11f067c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f067cc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11f067d2 jmp 0x11f0679d */
  goto L_11f0679d;
L_11f067d4:;
  /* 11f067d4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11f067da sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f067dd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11f067e0:;
  /* 11f067e0 jmp 0x11f06c47 */
  goto L_11f06c47;
L_11f067e5:;
  /* 11f067e5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11f067e8 push edx */
  push32((uint32_t)(EDX));
  /* 11f067e9 call 0x11f07050 */
  push32(0x11f067eeu); f_11f07050();
  /* 11f067ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f067f1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11f067f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f067fa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11f067fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f067ff je 0x11f06813 */
  if (C.zf) goto L_11f06813;
  /* 11f06801 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11f06807 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 11f0680e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11f06811 jmp 0x11f06821 */
  goto L_11f06821;
L_11f06813:;
  /* 11f06813 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11f06819 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11f0681f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11f06821:;
  /* 11f06821 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 11f0682b jmp 0x11f06c47 */
  goto L_11f06c47;
L_11f06830:;
  /* 11f06830 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11f06837 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 11f0683a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f0683d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_11f06840:;
  /* 11f06840 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06843 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11f06845 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f06848 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 11f0684e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11f06851 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06858 jge 0x11f06866 */
  if ((C.sf==C.of)) goto L_11f06866;
  /* 11f0685a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 11f06864 jmp 0x11f06882 */
  goto L_11f06882;
L_11f06866:;
  /* 11f06866 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0686d jne 0x11f06882 */
  if (!C.zf) goto L_11f06882;
  /* 11f0686f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f06873 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06876 jne 0x11f06882 */
  if (!C.zf) goto L_11f06882;
  /* 11f06878 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11f06882:;
  /* 11f06882 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f06885 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06888 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11f0688b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0688e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f06891 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f06893 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f06896 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 11f0689c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11f068a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f068a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f068a6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11f068ac push edx */
  push32((uint32_t)(EDX));
  /* 11f068ad movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f068b1 push eax */
  push32((uint32_t)(EAX));
  /* 11f068b2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f068b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f068b6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 11f068bc push edx */
  push32((uint32_t)(EDX));
  /* 11f068bd call dword ptr [0x11f2de90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f2de90))), 0x11f068c3u);
  /* 11f068c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f068c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f068c9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11f068ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f068d0 je 0x11f068e8 */
  if (C.zf) goto L_11f068e8;
  /* 11f068d2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f068d9 jne 0x11f068e8 */
  if (!C.zf) goto L_11f068e8;
  /* 11f068db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f068de push ecx */
  push32((uint32_t)(ECX));
  /* 11f068df call dword ptr [0x11f2de9c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f2de9c))), 0x11f068e5u);
  /* 11f068e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f068e8:;
  /* 11f068e8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f068ec cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f068ef jne 0x11f0690a */
  if (!C.zf) goto L_11f0690a;
  /* 11f068f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f068f4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11f068f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f068fb jne 0x11f0690a */
  if (!C.zf) goto L_11f0690a;
  /* 11f068fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f06900 push ecx */
  push32((uint32_t)(ECX));
  /* 11f06901 call dword ptr [0x11f2de94] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f2de94))), 0x11f06907u);
  /* 11f06907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0690a:;
  /* 11f0690a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0690d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f06910 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06913 jne 0x11f06927 */
  if (!C.zf) goto L_11f06927;
  /* 11f06915 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06918 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11f0691b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0691e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f06921 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06924 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11f06927:;
  /* 11f06927 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0692a push eax */
  push32((uint32_t)(EAX));
  /* 11f0692b call 0x11f00050 */
  push32(0x11f06930u); f_11f00050();
  /* 11f06930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06933 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f06936 jmp 0x11f06c47 */
  goto L_11f06c47;
L_11f0693b:;
  /* 11f0693b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0693e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11f06941 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f06944 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11f0694e jmp 0x11f069d5 */
  goto L_11f069d5;
L_11f06953:;
  /* 11f06953 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11f0695d jmp 0x11f069d5 */
  goto L_11f069d5;
L_11f0695f:;
  /* 11f0695f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_11f06969:;
  /* 11f06969 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11f06973 jmp 0x11f0697f */
  goto L_11f0697f;
L_11f06975:;
  /* 11f06975 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11f0697f:;
  /* 11f0697f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11f06989 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0698c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11f06992 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f06994 je 0x11f069b3 */
  if (C.zf) goto L_11f069b3;
  /* 11f06996 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11f0699d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11f069a3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f069a6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11f069ac mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11f069b3:;
  /* 11f069b3 jmp 0x11f069d5 */
  goto L_11f069d5;
L_11f069b5:;
  /* 11f069b5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11f069bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f069c2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11f069c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f069ca je 0x11f069d5 */
  if (C.zf) goto L_11f069d5;
  /* 11f069cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f069cf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f069d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f069d5:;
  /* 11f069d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f069d8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f069dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f069df je 0x11f069fe */
  if (C.zf) goto L_11f069fe;
  /* 11f069e1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11f069e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f069e5 call 0x11f07070 */
  push32(0x11f069eau); f_11f07070();
  /* 11f069ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f069ed mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11f069f3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11f069f9 jmp 0x11f06a8f */
  goto L_11f06a8f;
L_11f069fe:;
  /* 11f069fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06a01 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11f06a04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f06a06 je 0x11f06a50 */
  if (C.zf) goto L_11f06a50;
  /* 11f06a08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06a0b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11f06a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f06a10 je 0x11f06a30 */
  if (C.zf) goto L_11f06a30;
  /* 11f06a12 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11f06a15 push ecx */
  push32((uint32_t)(ECX));
  /* 11f06a16 call 0x11f07050 */
  push32(0x11f06a1bu); f_11f07050();
  /* 11f06a1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06a1e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11f06a21 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f06a22 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11f06a28 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11f06a2e jmp 0x11f06a4e */
  goto L_11f06a4e;
L_11f06a30:;
  /* 11f06a30 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11f06a33 push edx */
  push32((uint32_t)(EDX));
  /* 11f06a34 call 0x11f07050 */
  push32(0x11f06a39u); f_11f07050();
  /* 11f06a39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06a3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f06a41 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f06a42 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11f06a48 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11f06a4e:;
  /* 11f06a4e jmp 0x11f06a8f */
  goto L_11f06a8f;
L_11f06a50:;
  /* 11f06a50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06a53 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11f06a56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f06a58 je 0x11f06a75 */
  if (C.zf) goto L_11f06a75;
  /* 11f06a5a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11f06a5d push ecx */
  push32((uint32_t)(ECX));
  /* 11f06a5e call 0x11f07050 */
  push32(0x11f06a63u); f_11f07050();
  /* 11f06a63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06a66 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f06a67 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11f06a6d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11f06a73 jmp 0x11f06a8f */
  goto L_11f06a8f;
L_11f06a75:;
  /* 11f06a75 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11f06a78 push edx */
  push32((uint32_t)(EDX));
  /* 11f06a79 call 0x11f07050 */
  push32(0x11f06a7eu); f_11f07050();
  /* 11f06a7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06a81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f06a83 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11f06a89 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11f06a8f:;
  /* 11f06a8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06a92 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11f06a95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f06a97 je 0x11f06ad7 */
  if (C.zf) goto L_11f06ad7;
  /* 11f06a99 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06aa0 jg 0x11f06ad7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f06ad7;
  /* 11f06aa2 jl 0x11f06aad */
  if ((C.sf!=C.of)) goto L_11f06aad;
  /* 11f06aa4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06aab jae 0x11f06ad7 */
  if (!C.cf) goto L_11f06ad7;
L_11f06aad:;
  /* 11f06aad mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11f06ab3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f06ab5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11f06abb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06abe neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f06ac0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11f06ac6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11f06acc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06acf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f06ad2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f06ad5 jmp 0x11f06aef */
  goto L_11f06aef;
L_11f06ad7:;
  /* 11f06ad7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11f06add mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11f06ae3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11f06ae9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11f06aef:;
  /* 11f06aef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06af2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f06af8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f06afa jne 0x11f06b17 */
  if (!C.zf) goto L_11f06b17;
  /* 11f06afc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11f06b02 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11f06b08 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11f06b0b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11f06b11 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11f06b17:;
  /* 11f06b17 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06b1e jge 0x11f06b2c */
  if ((C.sf==C.of)) goto L_11f06b2c;
  /* 11f06b20 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11f06b2a jmp 0x11f06b35 */
  goto L_11f06b35;
L_11f06b2c:;
  /* 11f06b2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06b2f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11f06b32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f06b35:;
  /* 11f06b35 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11f06b3b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11f06b41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f06b43 jne 0x11f06b4c */
  if (!C.zf) goto L_11f06b4c;
  /* 11f06b45 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11f06b4c:;
  /* 11f06b4c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11f06b4f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11f06b52:;
  /* 11f06b52 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11f06b58 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11f06b5e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f06b61 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11f06b67 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f06b69 jg 0x11f06b7f */
  if ((!C.zf&&C.sf==C.of)) goto L_11f06b7f;
  /* 11f06b6b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11f06b71 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11f06b77 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f06b79 je 0x11f06c00 */
  if (C.zf) goto L_11f06c00;
L_11f06b7f:;
  /* 11f06b7f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11f06b85 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f06b86 push edx */
  push32((uint32_t)(EDX));
  /* 11f06b87 push eax */
  push32((uint32_t)(EAX));
  /* 11f06b88 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11f06b8e push edx */
  push32((uint32_t)(EDX));
  /* 11f06b8f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11f06b95 push eax */
  push32((uint32_t)(EAX));
  /* 11f06b96 call 0x11f05f10 */
  push32(0x11f06b9bu); f_11f05f10();
  /* 11f06b9b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06b9e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11f06ba4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11f06baa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f06bab push edx */
  push32((uint32_t)(EDX));
  /* 11f06bac push eax */
  push32((uint32_t)(EAX));
  /* 11f06bad mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11f06bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f06bb4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11f06bba push edx */
  push32((uint32_t)(EDX));
  /* 11f06bbb call 0x11f05ea0 */
  push32(0x11f06bc0u); f_11f05ea0();
  /* 11f06bc0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11f06bc6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11f06bcc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06bd3 jle 0x11f06be7 */
  if ((C.zf||C.sf!=C.of)) goto L_11f06be7;
  /* 11f06bd5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11f06bdb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06be1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11f06be7:;
  /* 11f06be7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f06bea mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11f06bf0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11f06bf2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f06bf5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f06bf8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f06bfb jmp 0x11f06b52 */
  goto L_11f06b52;
L_11f06c00:;
  /* 11f06c00 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11f06c03 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f06c06 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11f06c09 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f06c0c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06c0f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11f06c12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06c15 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11f06c1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f06c1c je 0x11f06c47 */
  if (C.zf) goto L_11f06c47;
  /* 11f06c1e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f06c21 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f06c24 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06c27 jne 0x11f06c2f */
  if (!C.zf) goto L_11f06c2f;
  /* 11f06c29 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06c2d jne 0x11f06c47 */
  if (!C.zf) goto L_11f06c47;
L_11f06c2f:;
  /* 11f06c2f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f06c32 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f06c35 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f06c38 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f06c3b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11f06c3e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f06c41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06c44 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11f06c47:;
  /* 11f06c47 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06c4e jne 0x11f06e22 */
  if (!C.zf) goto L_11f06e22;
  /* 11f06c54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06c57 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11f06c5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f06c5c je 0x11f06cad */
  if (C.zf) goto L_11f06cad;
  /* 11f06c5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06c61 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11f06c67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f06c69 je 0x11f06c7b */
  if (C.zf) goto L_11f06c7b;
  /* 11f06c6b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11f06c72 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11f06c79 jmp 0x11f06cad */
  goto L_11f06cad;
L_11f06c7b:;
  /* 11f06c7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06c7e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f06c81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f06c83 je 0x11f06c95 */
  if (C.zf) goto L_11f06c95;
  /* 11f06c85 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 11f06c8c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11f06c93 jmp 0x11f06cad */
  goto L_11f06cad;
L_11f06c95:;
  /* 11f06c95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06c98 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11f06c9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f06c9d je 0x11f06cad */
  if (C.zf) goto L_11f06cad;
  /* 11f06c9f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11f06ca6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11f06cad:;
  /* 11f06cad mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11f06cb3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f06cb6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f06cb9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11f06cbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06cc2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11f06cc5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f06cc7 jne 0x11f06ce5 */
  if (!C.zf) goto L_11f06ce5;
  /* 11f06cc9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11f06ccf push eax */
  push32((uint32_t)(EAX));
  /* 11f06cd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f06cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f06cd4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11f06cda push edx */
  push32((uint32_t)(EDX));
  /* 11f06cdb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f06cdd call 0x11f06fc0 */
  push32(0x11f06ce2u); f_11f06fc0();
  /* 11f06ce2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f06ce5:;
  /* 11f06ce5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11f06ceb push eax */
  push32((uint32_t)(EAX));
  /* 11f06cec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f06cef push ecx */
  push32((uint32_t)(ECX));
  /* 11f06cf0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f06cf3 push edx */
  push32((uint32_t)(EDX));
  /* 11f06cf4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11f06cfa push eax */
  push32((uint32_t)(EAX));
  /* 11f06cfb call 0x11f07000 */
  push32(0x11f06d00u); f_11f07000();
  /* 11f06d00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06d03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06d06 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11f06d09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f06d0b je 0x11f06d33 */
  if (C.zf) goto L_11f06d33;
  /* 11f06d0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06d10 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f06d13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f06d15 jne 0x11f06d33 */
  if (!C.zf) goto L_11f06d33;
  /* 11f06d17 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11f06d1d push eax */
  push32((uint32_t)(EAX));
  /* 11f06d1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f06d21 push ecx */
  push32((uint32_t)(ECX));
  /* 11f06d22 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11f06d28 push edx */
  push32((uint32_t)(EDX));
  /* 11f06d29 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11f06d2b call 0x11f06fc0 */
  push32(0x11f06d30u); f_11f06fc0();
  /* 11f06d30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f06d33:;
  /* 11f06d33 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06d37 je 0x11f06de1 */
  if (C.zf) goto L_11f06de1;
  /* 11f06d3d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06d41 jle 0x11f06de1 */
  if ((C.zf||C.sf!=C.of)) goto L_11f06de1;
  /* 11f06d47 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f06d4a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11f06d50 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f06d53 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11f06d59:;
  /* 11f06d59 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11f06d5f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11f06d65 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f06d68 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11f06d6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f06d70 je 0x11f06ddf */
  if (C.zf) goto L_11f06ddf;
  /* 11f06d72 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11f06d78 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11f06d7b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11f06d82 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11f06d89 push eax */
  push32((uint32_t)(EAX));
  /* 11f06d8a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11f06d90 push ecx */
  push32((uint32_t)(ECX));
  /* 11f06d91 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11f06d97 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06d9a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11f06da0 call 0x11f0acd0 */
  push32(0x11f06da5u); f_11f0acd0();
  /* 11f06da5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06da8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11f06dae cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06db5 jg 0x11f06db9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f06db9;
  /* 11f06db7 jmp 0x11f06ddf */
  goto L_11f06ddf;
L_11f06db9:;
  /* 11f06db9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11f06dbf push eax */
  push32((uint32_t)(EAX));
  /* 11f06dc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f06dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f06dc4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11f06dca push edx */
  push32((uint32_t)(EDX));
  /* 11f06dcb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11f06dd1 push eax */
  push32((uint32_t)(EAX));
  /* 11f06dd2 call 0x11f07000 */
  push32(0x11f06dd7u); f_11f07000();
  /* 11f06dd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06dda jmp 0x11f06d59 */
  goto L_11f06d59;
L_11f06ddf:;
  /* 11f06ddf jmp 0x11f06dfc */
  goto L_11f06dfc;
L_11f06de1:;
  /* 11f06de1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11f06de7 push ecx */
  push32((uint32_t)(ECX));
  /* 11f06de8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f06deb push edx */
  push32((uint32_t)(EDX));
  /* 11f06dec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f06def push eax */
  push32((uint32_t)(EAX));
  /* 11f06df0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f06df3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f06df4 call 0x11f07000 */
  push32(0x11f06df9u); f_11f07000();
  /* 11f06df9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f06dfc:;
  /* 11f06dfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f06dff and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f06e02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f06e04 je 0x11f06e22 */
  if (C.zf) goto L_11f06e22;
  /* 11f06e06 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11f06e0c push eax */
  push32((uint32_t)(EAX));
  /* 11f06e0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f06e10 push ecx */
  push32((uint32_t)(ECX));
  /* 11f06e11 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11f06e17 push edx */
  push32((uint32_t)(EDX));
  /* 11f06e18 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f06e1a call 0x11f06fc0 */
  push32(0x11f06e1fu); f_11f06fc0();
  /* 11f06e1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f06e22:;
  /* 11f06e22 jmp 0x11f06234 */
  goto L_11f06234;
L_11f06e27:;
  /* 11f06e27 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11f06e2d pop edi */
  EDI = (pop32());
  /* 11f06e2e pop esi */
  ESI = (pop32());
  /* 11f06e2f pop ebx */
  EBX = (pop32());
  /* 11f06e30 mov esp, ebp */
  ESP = (EBP);
  /* 11f06e32 pop ebp */
  EBP = (pop32());
  /* 11f06e33 ret  */
  ESPCHK(0x11f06210u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f40 @ 0x11f06f40 (119 bytes, 44 insns) */
void f_11f06f40(void) {
  FTRACE(0x11f06f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f06f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11f06f41 mov ebp, esp */
  EBP = (ESP);
  /* 11f06f43 push ecx */
  push32((uint32_t)(ECX));
  /* 11f06f44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f06f47 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f06f4a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f06f4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f06f50 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f06f53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f06f56 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06f5a jl 0x11f06f82 */
  if ((C.sf!=C.of)) goto L_11f06f82;
  /* 11f06f5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f06f5f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f06f61 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11f06f64 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11f06f66 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11f06f6a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f06f70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f06f73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f06f76 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f06f78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06f7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f06f7e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f06f80 jmp 0x11f06f95 */
  goto L_11f06f95;
L_11f06f82:;
  /* 11f06f82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f06f85 push edx */
  push32((uint32_t)(EDX));
  /* 11f06f86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f06f89 push eax */
  push32((uint32_t)(EAX));
  /* 11f06f8a call 0x11f05f90 */
  push32(0x11f06f8fu); f_11f05f90();
  /* 11f06f8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06f92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f06f95:;
  /* 11f06f95 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06f99 jne 0x11f06fa6 */
  if (!C.zf) goto L_11f06fa6;
  /* 11f06f9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f06f9e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11f06fa4 jmp 0x11f06fb3 */
  goto L_11f06fb3;
L_11f06fa6:;
  /* 11f06fa6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f06fa9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f06fab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06fae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f06fb1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11f06fb3:;
  /* 11f06fb3 mov esp, ebp */
  ESP = (EBP);
  /* 11f06fb5 pop ebp */
  EBP = (pop32());
  /* 11f06fb6 ret  */
  ESPCHK(0x11f06f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10016fc0 @ 0x11f06fc0 (53 bytes, 23 insns) */
void f_11f06fc0(void) {
  FTRACE(0x11f06fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f06fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f06fc1 mov ebp, esp */
  EBP = (ESP);
L_11f06fc3:;
  /* 11f06fc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f06fc6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f06fc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f06fcc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f06fcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f06fd1 jle 0x11f06ff3 */
  if ((C.zf||C.sf!=C.of)) goto L_11f06ff3;
  /* 11f06fd3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f06fd6 push edx */
  push32((uint32_t)(EDX));
  /* 11f06fd7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f06fda push eax */
  push32((uint32_t)(EAX));
  /* 11f06fdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f06fde push ecx */
  push32((uint32_t)(ECX));
  /* 11f06fdf call 0x11f06f40 */
  push32(0x11f06fe4u); f_11f06f40();
  /* 11f06fe4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f06fe7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f06fea cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f06fed jne 0x11f06ff1 */
  if (!C.zf) goto L_11f06ff1;
  /* 11f06fef jmp 0x11f06ff3 */
  goto L_11f06ff3;
L_11f06ff1:;
  /* 11f06ff1 jmp 0x11f06fc3 */
  goto L_11f06fc3;
L_11f06ff3:;
  /* 11f06ff3 pop ebp */
  EBP = (pop32());
  /* 11f06ff4 ret  */
  ESPCHK(0x11f06fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017000 @ 0x11f07000 (74 bytes, 31 insns) */
void f_11f07000(void) {
  FTRACE(0x11f07000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07000 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07001 mov ebp, esp */
  EBP = (ESP);
  /* 11f07003 push ecx */
  push32((uint32_t)(ECX));
L_11f07004:;
  /* 11f07004 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07007 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0700a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0700d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f07010 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f07012 jle 0x11f07046 */
  if ((C.zf||C.sf!=C.of)) goto L_11f07046;
  /* 11f07014 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f07017 push edx */
  push32((uint32_t)(EDX));
  /* 11f07018 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0701b push eax */
  push32((uint32_t)(EAX));
  /* 11f0701c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0701f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f07022 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f07025 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f07028 push eax */
  push32((uint32_t)(EAX));
  /* 11f07029 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0702c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0702f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11f07032 call 0x11f06f40 */
  push32(0x11f07037u); f_11f06f40();
  /* 11f07037 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0703a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0703d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07040 jne 0x11f07044 */
  if (!C.zf) goto L_11f07044;
  /* 11f07042 jmp 0x11f07046 */
  goto L_11f07046;
L_11f07044:;
  /* 11f07044 jmp 0x11f07004 */
  goto L_11f07004;
L_11f07046:;
  /* 11f07046 mov esp, ebp */
  ESP = (EBP);
  /* 11f07048 pop ebp */
  EBP = (pop32());
  /* 11f07049 ret  */
  ESPCHK(0x11f07000u, _esp0);
  ESP += 4; return;
}

/* FUN_10017050 @ 0x11f07050 (26 bytes, 12 insns) */
void f_11f07050(void) {
  FTRACE(0x11f07050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07050 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07051 mov ebp, esp */
  EBP = (ESP);
  /* 11f07053 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07056 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f07058 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0705b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0705e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f07060 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07063 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f07065 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f07068 pop ebp */
  EBP = (pop32());
  /* 11f07069 ret  */
  ESPCHK(0x11f07050u, _esp0);
  ESP += 4; return;
}

/* FUN_10017070 @ 0x11f07070 (31 bytes, 14 insns) */
void f_11f07070(void) {
  FTRACE(0x11f07070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07070 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07071 mov ebp, esp */
  EBP = (ESP);
  /* 11f07073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07076 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f07078 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0707b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0707e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f07080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07083 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f07085 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f07088 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f0708a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f0708d pop ebp */
  EBP = (pop32());
  /* 11f0708e ret  */
  ESPCHK(0x11f07070u, _esp0);
  ESP += 4; return;
}

/* FUN_10017090 @ 0x11f07090 (27 bytes, 12 insns) */
void f_11f07090(void) {
  FTRACE(0x11f07090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07090 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07091 mov ebp, esp */
  EBP = (ESP);
  /* 11f07093 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07096 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f07098 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0709b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0709e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f070a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f070a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f070a5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11f070a9 pop ebp */
  EBP = (pop32());
  /* 11f070aa ret  */
  ESPCHK(0x11f07090u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11f070b0 (145 bytes, 42 insns) */
void f_11f070b0(void) {
  FTRACE(0x11f070b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f070b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f070b1 mov ebp, esp */
  EBP = (ESP);
  /* 11f070b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f070b4 call 0x11f07160 */
  push32(0x11f070b9u); f_11f07160();
  /* 11f070b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f070bc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f070be mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f070c5 jmp 0x11f070d0 */
  goto L_11f070d0;
L_11f070c7:;
  /* 11f070c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f070ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f070cd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f070d0:;
  /* 11f070d0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f070d4 jae 0x11f070fa */
  if (!C.cf) goto L_11f070fa;
  /* 11f070d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f070d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f070dc cmp ecx, dword ptr [eax*8 + 0x11f2e558] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11f2e558))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f070e3 jne 0x11f070f8 */
  if (!C.zf) goto L_11f070f8;
  /* 11f070e5 call 0x11f07150 */
  push32(0x11f070eau); f_11f07150();
  /* 11f070ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f070ed mov ecx, dword ptr [edx*8 + 0x11f2e55c] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11f2e55c)));
  /* 11f070f4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f070f6 jmp 0x11f0713d */
  goto L_11f0713d;
L_11f070f8:;
  /* 11f070f8 jmp 0x11f070c7 */
  goto L_11f070c7;
L_11f070fa:;
  /* 11f070fa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f070fe jb 0x11f07113 */
  if (C.cf) goto L_11f07113;
  /* 11f07100 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07104 ja 0x11f07113 */
  if ((!C.cf&&!C.zf)) goto L_11f07113;
  /* 11f07106 call 0x11f07150 */
  push32(0x11f0710bu); f_11f07150();
  /* 11f0710b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11f07111 jmp 0x11f0713d */
  goto L_11f0713d;
L_11f07113:;
  /* 11f07113 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0711a jb 0x11f07132 */
  if (C.cf) goto L_11f07132;
  /* 11f0711c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07123 ja 0x11f07132 */
  if ((!C.cf&&!C.zf)) goto L_11f07132;
  /* 11f07125 call 0x11f07150 */
  push32(0x11f0712au); f_11f07150();
  /* 11f0712a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11f07130 jmp 0x11f0713d */
  goto L_11f0713d;
L_11f07132:;
  /* 11f07132 call 0x11f07150 */
  push32(0x11f07137u); f_11f07150();
  /* 11f07137 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11f0713d:;
  /* 11f0713d mov esp, ebp */
  ESP = (EBP);
  /* 11f0713f pop ebp */
  EBP = (pop32());
  /* 11f07140 ret  */
  ESPCHK(0x11f070b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017150 @ 0x11f07150 (13 bytes, 6 insns) */
void f_11f07150(void) {
  FTRACE(0x11f07150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07150 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07151 mov ebp, esp */
  EBP = (ESP);
  /* 11f07153 call 0x11efe7c0 */
  push32(0x11f07158u); f_11efe7c0();
  /* 11f07158 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0715b pop ebp */
  EBP = (pop32());
  /* 11f0715c ret  */
  ESPCHK(0x11f07150u, _esp0);
  ESP += 4; return;
}

/* FUN_10017160 @ 0x11f07160 (13 bytes, 6 insns) */
void f_11f07160(void) {
  FTRACE(0x11f07160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07160 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07161 mov ebp, esp */
  EBP = (ESP);
  /* 11f07163 call 0x11efe7c0 */
  push32(0x11f07168u); f_11efe7c0();
  /* 11f07168 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0716b pop ebp */
  EBP = (pop32());
  /* 11f0716c ret  */
  ESPCHK(0x11f07160u, _esp0);
  ESP += 4; return;
}

/* FUN_10017170 @ 0x11f07170 (85 bytes, 32 insns) */
void f_11f07170(void) {
  FTRACE(0x11f07170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07170 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07171 mov ebp, esp */
  EBP = (ESP);
  /* 11f07173 cmp dword ptr [0x11f2e798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0717a jne 0x11f071a4 */
  if (!C.zf) goto L_11f071a4;
  /* 11f0717c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0717f push eax */
  push32((uint32_t)(EAX));
  /* 11f07180 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f07183 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07184 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07187 push edx */
  push32((uint32_t)(EDX));
  /* 11f07188 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0718a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0718c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0718f push eax */
  push32((uint32_t)(EAX));
  /* 11f07190 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07193 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07194 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07197 push edx */
  push32((uint32_t)(EDX));
  /* 11f07198 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0719a call 0x11f07c20 */
  push32(0x11f0719fu); f_11f07c20();
  /* 11f0719f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f071a2 jmp 0x11f071c3 */
  goto L_11f071c3;
L_11f071a4:;
  /* 11f071a4 call 0x11f07150 */
  push32(0x11f071a9u); f_11f07150();
  /* 11f071a9 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11f071af push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11f071b4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f071b7 push eax */
  push32((uint32_t)(EAX));
  /* 11f071b8 call 0x11f07e10 */
  push32(0x11f071bdu); f_11f07e10();
  /* 11f071bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f071c0 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
L_11f071c3:;
  /* 11f071c3 pop ebp */
  EBP = (pop32());
  /* 11f071c4 ret  */
  ESPCHK(0x11f07170u, _esp0);
  ESP += 4; return;
}

/* FUN_100171d0 @ 0x11f071d0 (103 bytes, 39 insns) */
void f_11f071d0(void) {
  FTRACE(0x11f071d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f071d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f071d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f071d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f071d6 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
  /* 11f071d9 fadd qword ptr [ebp + 0x14] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + 0x14)));
  /* 11f071dc fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11f071df cmp dword ptr [0x11f2e798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f071e6 jne 0x11f07214 */
  if (!C.zf) goto L_11f07214;
  /* 11f071e8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f071eb push eax */
  push32((uint32_t)(EAX));
  /* 11f071ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f071ef push ecx */
  push32((uint32_t)(ECX));
  /* 11f071f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f071f3 push edx */
  push32((uint32_t)(EDX));
  /* 11f071f4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f071f7 push eax */
  push32((uint32_t)(EAX));
  /* 11f071f8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f071fb push ecx */
  push32((uint32_t)(ECX));
  /* 11f071fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f071ff push edx */
  push32((uint32_t)(EDX));
  /* 11f07200 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07203 push eax */
  push32((uint32_t)(EAX));
  /* 11f07204 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07207 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07208 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0720a call 0x11f07c20 */
  push32(0x11f0720fu); f_11f07c20();
  /* 11f0720f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f07212 jmp 0x11f07233 */
  goto L_11f07233;
L_11f07214:;
  /* 11f07214 call 0x11f07150 */
  push32(0x11f07219u); f_11f07150();
  /* 11f07219 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11f0721f push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11f07224 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f07227 push edx */
  push32((uint32_t)(EDX));
  /* 11f07228 call 0x11f07e10 */
  push32(0x11f0722du); f_11f07e10();
  /* 11f0722d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f07230 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
L_11f07233:;
  /* 11f07233 mov esp, ebp */
  ESP = (EBP);
  /* 11f07235 pop ebp */
  EBP = (pop32());
  /* 11f07236 ret  */
  ESPCHK(0x11f071d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017240 @ 0x11f07240 (178 bytes, 71 insns) */
void f_11f07240(void) {
  FTRACE(0x11f07240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07240 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07241 mov ebp, esp */
  EBP = (ESP);
  /* 11f07243 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f07246 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f07249 push eax */
  push32((uint32_t)(EAX));
  /* 11f0724a lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11f0724d push ecx */
  push32((uint32_t)(ECX));
  /* 11f0724e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07251 push edx */
  push32((uint32_t)(EDX));
  /* 11f07252 call 0x11f078a0 */
  push32(0x11f07257u); f_11f078a0();
  /* 11f07257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0725a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0725c jne 0x11f07286 */
  if (!C.zf) goto L_11f07286;
  /* 11f0725e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f07261 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11f07263 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f07266 lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11f07269 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0726a lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11f0726d push edx */
  push32((uint32_t)(EDX));
  /* 11f0726e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07271 push eax */
  push32((uint32_t)(EAX));
  /* 11f07272 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07275 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07276 lea edx, [ebp + 0x20] */
  EDX = ((uint32_t)(EBP + 0x20));
  /* 11f07279 push edx */
  push32((uint32_t)(EDX));
  /* 11f0727a lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11f0727d push eax */
  push32((uint32_t)(EAX));
  /* 11f0727e call 0x11f073d0 */
  push32(0x11f07283u); f_11f073d0();
  /* 11f07283 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f07286:;
  /* 11f07286 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07289 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0728a call 0x11f07d40 */
  push32(0x11f0728fu); f_11f07d40();
  /* 11f0728f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f07292 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f07295 cmp dword ptr [0x11f2e798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0729c jne 0x11f072ce */
  if (!C.zf) goto L_11f072ce;
  /* 11f0729e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f072a2 je 0x11f072ce */
  if (C.zf) goto L_11f072ce;
  /* 11f072a4 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f072a7 push edx */
  push32((uint32_t)(EDX));
  /* 11f072a8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f072ab push eax */
  push32((uint32_t)(EAX));
  /* 11f072ac mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f072af push ecx */
  push32((uint32_t)(ECX));
  /* 11f072b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f072b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f072b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f072b7 push edx */
  push32((uint32_t)(EDX));
  /* 11f072b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f072bb push eax */
  push32((uint32_t)(EAX));
  /* 11f072bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f072bf push ecx */
  push32((uint32_t)(ECX));
  /* 11f072c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f072c3 push edx */
  push32((uint32_t)(EDX));
  /* 11f072c4 call 0x11f07c20 */
  push32(0x11f072c9u); f_11f07c20();
  /* 11f072c9 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f072cc jmp 0x11f072ee */
  goto L_11f072ee;
L_11f072ce:;
  /* 11f072ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f072d1 push eax */
  push32((uint32_t)(EAX));
  /* 11f072d2 call 0x11f07cc0 */
  push32(0x11f072d7u); f_11f07cc0();
  /* 11f072d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f072da push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11f072df mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f072e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f072e3 call 0x11f07e10 */
  push32(0x11f072e8u); f_11f07e10();
  /* 11f072e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f072eb fld qword ptr [ebp + 0x18] */
  fpu_push(rf64((uint32_t)(EBP + 0x18)));
L_11f072ee:;
  /* 11f072ee mov esp, ebp */
  ESP = (EBP);
  /* 11f072f0 pop ebp */
  EBP = (pop32());
  /* 11f072f1 ret  */
  ESPCHK(0x11f07240u, _esp0);
  ESP += 4; return;
}

/* FUN_10017300 @ 0x11f07300 (206 bytes, 81 insns) */
void f_11f07300(void) {
  FTRACE(0x11f07300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07300 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07301 mov ebp, esp */
  EBP = (ESP);
  /* 11f07303 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f07306 mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 11f07309 push eax */
  push32((uint32_t)(EAX));
  /* 11f0730a lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 11f0730d push ecx */
  push32((uint32_t)(ECX));
  /* 11f0730e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07311 push edx */
  push32((uint32_t)(EDX));
  /* 11f07312 call 0x11f078a0 */
  push32(0x11f07317u); f_11f078a0();
  /* 11f07317 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0731a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0731c jne 0x11f0735e */
  if (!C.zf) goto L_11f0735e;
  /* 11f0731e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f07321 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11f07323 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f07326 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f07329 and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0732c or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0732f mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11f07332 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f07335 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11f07338 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0733b mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11f0733e lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 11f07341 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07342 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11f07345 push edx */
  push32((uint32_t)(EDX));
  /* 11f07346 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07349 push eax */
  push32((uint32_t)(EAX));
  /* 11f0734a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0734d push ecx */
  push32((uint32_t)(ECX));
  /* 11f0734e lea edx, [ebp + 0x28] */
  EDX = ((uint32_t)(EBP + 0x28));
  /* 11f07351 push edx */
  push32((uint32_t)(EDX));
  /* 11f07352 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11f07355 push eax */
  push32((uint32_t)(EAX));
  /* 11f07356 call 0x11f073d0 */
  push32(0x11f0735bu); f_11f073d0();
  /* 11f0735b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0735e:;
  /* 11f0735e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07361 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07362 call 0x11f07d40 */
  push32(0x11f07367u); f_11f07d40();
  /* 11f07367 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0736a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0736d cmp dword ptr [0x11f2e798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07374 jne 0x11f073aa */
  if (!C.zf) goto L_11f073aa;
  /* 11f07376 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0737a je 0x11f073aa */
  if (C.zf) goto L_11f073aa;
  /* 11f0737c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11f0737f push edx */
  push32((uint32_t)(EDX));
  /* 11f07380 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11f07383 push eax */
  push32((uint32_t)(EAX));
  /* 11f07384 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f07387 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07388 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0738b push edx */
  push32((uint32_t)(EDX));
  /* 11f0738c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0738f push eax */
  push32((uint32_t)(EAX));
  /* 11f07390 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f07393 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07394 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f07397 push edx */
  push32((uint32_t)(EDX));
  /* 11f07398 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0739b push eax */
  push32((uint32_t)(EAX));
  /* 11f0739c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0739f push ecx */
  push32((uint32_t)(ECX));
  /* 11f073a0 call 0x11f07c20 */
  push32(0x11f073a5u); f_11f07c20();
  /* 11f073a5 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f073a8 jmp 0x11f073ca */
  goto L_11f073ca;
L_11f073aa:;
  /* 11f073aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f073ad push edx */
  push32((uint32_t)(EDX));
  /* 11f073ae call 0x11f07cc0 */
  push32(0x11f073b3u); f_11f07cc0();
  /* 11f073b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f073b6 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11f073bb mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 11f073be push eax */
  push32((uint32_t)(EAX));
  /* 11f073bf call 0x11f07e10 */
  push32(0x11f073c4u); f_11f07e10();
  /* 11f073c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f073c7 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_11f073ca:;
  /* 11f073ca mov esp, ebp */
  ESP = (EBP);
  /* 11f073cc pop ebp */
  EBP = (pop32());
  /* 11f073cd ret  */
  ESPCHK(0x11f07300u, _esp0);
  ESP += 4; return;
}

/* FUN_100173d0 @ 0x11f073d0 (1201 bytes, 425 insns) [1 switch table(s)] */
void f_11f073d0(void) {
  FTRACE(0x11f073d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f073d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f073d1 mov ebp, esp */
  EBP = (ESP);
  /* 11f073d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f073d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f073d9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11f073e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f073e3 mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11f073ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f073ed mov dword ptr [edx + 0xc], 0 */
  w32((uint32_t)(EDX + 0xc), (0x0u));
  /* 11f073f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f073f7 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11f073fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f073fc je 0x11f07414 */
  if (C.zf) goto L_11f07414;
  /* 11f073fe mov dword ptr [ebp - 4], 0xc000008f */
  w32((uint32_t)(EBP + -0x4), (0xc000008fu));
  /* 11f07405 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07408 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f0740b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0740e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07411 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11f07414:;
  /* 11f07414 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f07417 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0741a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0741c je 0x11f07433 */
  if (C.zf) goto L_11f07433;
  /* 11f0741e mov dword ptr [ebp - 4], 0xc0000093 */
  w32((uint32_t)(EBP + -0x4), (0xc0000093u));
  /* 11f07425 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07428 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f0742b or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11f0742d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07430 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11f07433:;
  /* 11f07433 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f07436 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f07439 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0743b je 0x11f07453 */
  if (C.zf) goto L_11f07453;
  /* 11f0743d mov dword ptr [ebp - 4], 0xc0000091 */
  w32((uint32_t)(EBP + -0x4), (0xc0000091u));
  /* 11f07444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07447 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f0744a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0744d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07450 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11f07453:;
  /* 11f07453 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f07456 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11f07459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0745b je 0x11f07473 */
  if (C.zf) goto L_11f07473;
  /* 11f0745d mov dword ptr [ebp - 4], 0xc000008e */
  w32((uint32_t)(EBP + -0x4), (0xc000008eu));
  /* 11f07464 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07467 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f0746a or edx, 8 */
  { uint32_t _r=(EDX)|(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0746d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07470 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11f07473:;
  /* 11f07473 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f07476 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11f07479 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0747b je 0x11f07492 */
  if (C.zf) goto L_11f07492;
  /* 11f0747d mov dword ptr [ebp - 4], 0xc0000090 */
  w32((uint32_t)(EBP + -0x4), (0xc0000090u));
  /* 11f07484 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07487 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f0748a or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 11f0748c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0748f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11f07492:;
  /* 11f07492 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07495 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f07497 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0749a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0749c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0749e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f0749f and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11f074a2 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f074a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f074a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f074ab and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11f074ae or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f074b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f074b3 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11f074b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f074b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f074bb and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f074be neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f074c0 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f074c2 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f074c3 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f074c6 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11f074c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f074cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f074cf and ecx, 0xfffffff7 */
  { uint32_t _r=(ECX)&(0xfffffff7u); ECX = (_r); fl_logic(_r,32); }
  /* 11f074d2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f074d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f074d7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f074da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f074dd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f074df and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11f074e2 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f074e4 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f074e6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f074e7 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f074ea shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11f074ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f074f0 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f074f3 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11f074f5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11f074f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f074fa mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11f074fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07500 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f07502 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11f07505 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f07507 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f07509 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11f0750a and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0750d shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f0750f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07512 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f07515 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 11f07518 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0751a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0751d mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11f07520 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07523 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f07525 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11f07528 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0752a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0752c inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f0752d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f07530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07533 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f07536 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11f07539 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0753b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0753e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f07541 call 0x11f07dd0 */
  push32(0x11f07546u); f_11f07dd0();
  /* 11f07546 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f07549 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0754c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0754f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f07551 je 0x11f07562 */
  if (C.zf) goto L_11f07562;
  /* 11f07553 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07556 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f07559 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0755c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0755f mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_11f07562:;
  /* 11f07562 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f07565 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11f07568 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0756a je 0x11f0757a */
  if (C.zf) goto L_11f0757a;
  /* 11f0756c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0756f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11f07572 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11f07574 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07577 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_11f0757a:;
  /* 11f0757a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0757d and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11f07580 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f07582 je 0x11f07593 */
  if (C.zf) goto L_11f07593;
  /* 11f07584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07587 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f0758a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0758d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07590 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11f07593:;
  /* 11f07593 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f07596 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11f07599 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0759b je 0x11f075ac */
  if (C.zf) goto L_11f075ac;
  /* 11f0759d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f075a0 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f075a3 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11f075a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f075a9 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_11f075ac:;
  /* 11f075ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f075af and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11f075b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f075b4 je 0x11f075c4 */
  if (C.zf) goto L_11f075c4;
  /* 11f075b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f075b9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11f075bc or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11f075be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f075c1 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_11f075c4:;
  /* 11f075c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f075c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f075c9 and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11f075ce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f075d1 cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f075d8 ja 0x11f075f4 */
  if ((!C.cf&&!C.zf)) goto L_11f075f4;
  /* 11f075da cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f075e1 je 0x11f0760e */
  if (C.zf) goto L_11f0760e;
  /* 11f075e3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f075e7 je 0x11f07632 */
  if (C.zf) goto L_11f07632;
  /* 11f075e9 cmp dword ptr [ebp - 0xc], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f075f0 je 0x11f07620 */
  if (C.zf) goto L_11f07620;
  /* 11f075f2 jmp 0x11f0763f */
  goto L_11f0763f;
L_11f075f4:;
  /* 11f075f4 cmp dword ptr [ebp - 0xc], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f075fb je 0x11f075ff */
  if (C.zf) goto L_11f075ff;
  /* 11f075fd jmp 0x11f0763f */
  goto L_11f0763f;
L_11f075ff:;
  /* 11f075ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07602 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f07604 or edx, 3 */
  { uint32_t _r=(EDX)|(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11f07607 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0760a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0760c jmp 0x11f0763f */
  goto L_11f0763f;
L_11f0760e:;
  /* 11f0760e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07611 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f07613 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11f07616 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11f07619 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0761c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0761e jmp 0x11f0763f */
  goto L_11f0763f;
L_11f07620:;
  /* 11f07620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07623 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f07625 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11f07628 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0762b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0762e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f07630 jmp 0x11f0763f */
  goto L_11f0763f;
L_11f07632:;
  /* 11f07632 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07635 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f07637 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0763a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0763d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f0763f:;
  /* 11f0763f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07642 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f07644 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0764a mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11f0764d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07651 je 0x11f07688 */
  if (C.zf) goto L_11f07688;
  /* 11f07653 cmp dword ptr [ebp - 0x10], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0765a je 0x11f07676 */
  if (C.zf) goto L_11f07676;
  /* 11f0765c cmp dword ptr [ebp - 0x10], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07663 je 0x11f07667 */
  if (C.zf) goto L_11f07667;
  /* 11f07665 jmp 0x11f07698 */
  goto L_11f07698;
L_11f07667:;
  /* 11f07667 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0766a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0766c and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0766f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07672 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f07674 jmp 0x11f07698 */
  goto L_11f07698;
L_11f07676:;
  /* 11f07676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07679 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0767b and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0767e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11f07681 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07684 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11f07686 jmp 0x11f07698 */
  goto L_11f07698;
L_11f07688:;
  /* 11f07688 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0768b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0768d and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11f07690 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11f07693 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07696 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f07698:;
  /* 11f07698 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0769b and eax, 0xfff */
  { uint32_t _r=(EAX)&(0xfffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f076a0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f076a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f076a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f076a8 and edx, 0xfffe001f */
  { uint32_t _r=(EDX)&(0xfffe001fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f076ae or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f076b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f076b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f076b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f076b8 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11f076bb or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f076be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f076c1 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11f076c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f076c7 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11f076ca and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f076cd or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11f076d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f076d3 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11f076d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f076d9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f076dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f076de mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11f076e1 mov edx, dword ptr [edx + 4] */
  EDX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f076e4 mov dword ptr [ecx + 0x14], edx */
  w32((uint32_t)(ECX + 0x14), (EDX));
  /* 11f076e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f076ea mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11f076ed or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f076f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f076f3 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11f076f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f076f9 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11f076fc and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f076ff or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11f07702 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07705 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11f07708 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0770b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0770e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f07710 mov dword ptr [eax + 0x40], edx */
  w32((uint32_t)(EAX + 0x40), (EDX));
  /* 11f07713 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f07716 mov dword ptr [eax + 0x44], ecx */
  w32((uint32_t)(EAX + 0x44), (ECX));
  /* 11f07719 call 0x11f07df0 */
  push32(0x11f0771eu); f_11f07df0();
  /* 11f0771e lea edx, [ebp + 8] */
  EDX = ((uint32_t)(EBP + 0x8));
  /* 11f07721 push edx */
  push32((uint32_t)(EDX));
  /* 11f07722 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f07724 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f07726 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f07729 push eax */
  push32((uint32_t)(EAX));
  /* 11f0772a call dword ptr [0x11f3336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3336c))), 0x11f07730u);
  /* 11f07730 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07733 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f07736 shr edx, 4 */
  EDX = (sh_shr((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11f07739 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0773c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0773e je 0x11f0774d */
  if (C.zf) goto L_11f0774d;
  /* 11f07740 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07743 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f07745 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11f07748 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0774b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f0774d:;
  /* 11f0774d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07750 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f07753 shr ecx, 3 */
  ECX = (sh_shr((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11f07756 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f07759 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0775b je 0x11f07769 */
  if (C.zf) goto L_11f07769;
  /* 11f0775d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07760 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f07762 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11f07764 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07767 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11f07769:;
  /* 11f07769 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0776c mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f0776f shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f07772 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11f07775 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f07777 je 0x11f07786 */
  if (C.zf) goto L_11f07786;
  /* 11f07779 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0777c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0777e and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11f07781 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07784 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f07786:;
  /* 11f07786 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07789 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f0778c shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f0778e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f07791 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f07793 je 0x11f077a2 */
  if (C.zf) goto L_11f077a2;
  /* 11f07795 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07798 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0779a and ecx, 0xffffffef */
  { uint32_t _r=(ECX)&(0xffffffefu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0779d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f077a0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11f077a2:;
  /* 11f077a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f077a5 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f077a8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f077ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f077ad je 0x11f077bb */
  if (C.zf) goto L_11f077bb;
  /* 11f077af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f077b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f077b4 and al, 0xdf */
  { uint32_t _r=(AL)&(0xdfu); AL = (_r); fl_logic(_r,8); }
  /* 11f077b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f077b9 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11f077bb:;
  /* 11f077bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f077be mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f077c0 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11f077c3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f077c6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f077ca ja 0x11f07819 */
  if ((!C.cf&&!C.zf)) goto L_11f07819;
  /* 11f077cc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f077cf jmp dword ptr [ecx*4 + 0x11f07881] */
  switch (ECX) {
    case 0: goto L_11f0780c;
    case 1: goto L_11f077fa;
    case 2: goto L_11f077e8;
    case 3: goto L_11f077d6;
    default: x86_unimpl("switch@0x11f077cf out of table"); return;
  }
L_11f077d6:;
  /* 11f077d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f077d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f077db and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11f077de or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11f077e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f077e4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f077e6 jmp 0x11f07819 */
  goto L_11f07819;
L_11f077e8:;
  /* 11f077e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f077eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f077ed and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11f077f0 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11f077f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f077f6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f077f8 jmp 0x11f07819 */
  goto L_11f07819;
L_11f077fa:;
  /* 11f077fa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f077fd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f077ff and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11f07802 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11f07805 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07808 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f0780a jmp 0x11f07819 */
  goto L_11f07819;
L_11f0780c:;
  /* 11f0780c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0780f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f07811 and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11f07814 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07817 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11f07819:;
  /* 11f07819 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0781c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0781e shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11f07821 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11f07824 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f07827 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0782b je 0x11f0783b */
  if (C.zf) goto L_11f0783b;
  /* 11f0782d cmp dword ptr [ebp - 0x18], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07831 je 0x11f0784d */
  if (C.zf) goto L_11f0784d;
  /* 11f07833 cmp dword ptr [ebp - 0x18], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07837 je 0x11f0785f */
  if (C.zf) goto L_11f0785f;
  /* 11f07839 jmp 0x11f0786c */
  goto L_11f0786c;
L_11f0783b:;
  /* 11f0783b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0783e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f07840 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f07843 or dh, 3 */
  { uint32_t _r=(C.d.b.h)|(0x3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f07846 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07849 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0784b jmp 0x11f0786c */
  goto L_11f0786c;
L_11f0784d:;
  /* 11f0784d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07850 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f07852 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f07855 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f07858 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0785b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0785d jmp 0x11f0786c */
  goto L_11f0786c;
L_11f0785f:;
  /* 11f0785f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07862 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f07864 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11f07867 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0786a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11f0786c:;
  /* 11f0786c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0786f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f07872 mov eax, dword ptr [ecx + 0x40] */
  EAX = (r32((uint32_t)(ECX + 0x40)));
  /* 11f07875 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11f07877 mov ecx, dword ptr [ecx + 0x44] */
  ECX = (r32((uint32_t)(ECX + 0x44)));
  /* 11f0787a mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f0787d mov esp, ebp */
  ESP = (EBP);
  /* 11f0787f pop ebp */
  EBP = (pop32());
  /* 11f07880 ret  */
  ESPCHK(0x11f073d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100178a0 @ 0x11f078a0 (882 bytes, 268 insns) */
void f_11f078a0(void) {
  FTRACE(0x11f078a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f078a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f078a1 mov ebp, esp */
  EBP = (ESP);
  /* 11f078a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f078a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f078a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f078ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f078af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f078b2 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11f078b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f078b7 je 0x11f078da */
  if (C.zf) goto L_11f078da;
  /* 11f078b9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f078bc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f078bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f078c1 je 0x11f078da */
  if (C.zf) goto L_11f078da;
  /* 11f078c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f078c5 call 0x11f07e50 */
  push32(0x11f078cau); f_11f07e50();
  /* 11f078ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f078cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f078d0 and al, 0xf7 */
  { uint32_t _r=(AL)&(0xf7u); AL = (_r); fl_logic(_r,8); }
  /* 11f078d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f078d5 jmp 0x11f07bde */
  goto L_11f07bde;
L_11f078da:;
  /* 11f078da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f078dd and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11f078e0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f078e2 je 0x11f07905 */
  if (C.zf) goto L_11f07905;
  /* 11f078e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f078e7 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f078ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f078ec je 0x11f07905 */
  if (C.zf) goto L_11f07905;
  /* 11f078ee push 4 */
  push32((uint32_t)(0x4u));
  /* 11f078f0 call 0x11f07e50 */
  push32(0x11f078f5u); f_11f07e50();
  /* 11f078f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f078f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f078fb and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11f078fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f07900 jmp 0x11f07bde */
  goto L_11f07bde;
L_11f07905:;
  /* 11f07905 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07908 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0790b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0790d je 0x11f07a81 */
  if (C.zf) goto L_11f07a81;
  /* 11f07913 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f07916 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11f07919 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0791b je 0x11f07a81 */
  if (C.zf) goto L_11f07a81;
  /* 11f07921 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f07923 call 0x11f07e50 */
  push32(0x11f07928u); f_11f07e50();
  /* 11f07928 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0792b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0792e and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11f07933 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f07936 cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0793d ja 0x11f07960 */
  if ((!C.cf&&!C.zf)) goto L_11f07960;
  /* 11f0793f cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07946 je 0x11f079b5 */
  if (C.zf) goto L_11f079b5;
  /* 11f07948 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0794c je 0x11f07972 */
  if (C.zf) goto L_11f07972;
  /* 11f0794e cmp dword ptr [ebp - 0x20], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07955 je 0x11f079f5 */
  if (C.zf) goto L_11f079f5;
  /* 11f0795b jmp 0x11f07a73 */
  goto L_11f07a73;
L_11f07960:;
  /* 11f07960 cmp dword ptr [ebp - 0x20], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07967 je 0x11f07a35 */
  if (C.zf) goto L_11f07a35;
  /* 11f0796d jmp 0x11f07a73 */
  goto L_11f07a73;
L_11f07972:;
  /* 11f07972 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07975 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11f07977 fcomp qword ptr [0x11f2a738] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11f2a738)));
  (void)fpu_pop();
  /* 11f0797d fnstsw ax */
  AX = fpu_status();
  /* 11f0797f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11f07982 jne 0x11f07997 */
  if (!C.zf) goto L_11f07997;
  /* 11f07984 mov edx, dword ptr [0x11f2eb88] */
  EDX = (r32((uint32_t)(0x11f2eb88)));
  /* 11f0798a mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11f0798d mov eax, dword ptr [0x11f2eb8c] */
  EAX = (r32((uint32_t)(0x11f2eb8c)));
  /* 11f07992 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f07995 jmp 0x11f079a2 */
  goto L_11f079a2;
L_11f07997:;
  /* 11f07997 fld qword ptr [0x11f2eb88] */
  fpu_push(rf64((uint32_t)(0x11f2eb88)));
  /* 11f0799d fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11f0799f fstp qword ptr [ebp - 0x28] */
  wf64((uint32_t)(EBP + -0x28), FPU_ST(0));
  (void)fpu_pop();
L_11f079a2:;
  /* 11f079a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f079a5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f079a8 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f079aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f079ad mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f079b0 jmp 0x11f07a73 */
  goto L_11f07a73;
L_11f079b5:;
  /* 11f079b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f079b8 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11f079ba fcomp qword ptr [0x11f2a738] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11f2a738)));
  (void)fpu_pop();
  /* 11f079c0 fnstsw ax */
  AX = fpu_status();
  /* 11f079c2 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11f079c5 jne 0x11f079da */
  if (!C.zf) goto L_11f079da;
  /* 11f079c7 mov edx, dword ptr [0x11f2eb88] */
  EDX = (r32((uint32_t)(0x11f2eb88)));
  /* 11f079cd mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11f079d0 mov eax, dword ptr [0x11f2eb8c] */
  EAX = (r32((uint32_t)(0x11f2eb8c)));
  /* 11f079d5 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11f079d8 jmp 0x11f079e5 */
  goto L_11f079e5;
L_11f079da:;
  /* 11f079da fld qword ptr [0x11f2eb98] */
  fpu_push(rf64((uint32_t)(0x11f2eb98)));
  /* 11f079e0 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11f079e2 fstp qword ptr [ebp - 0x30] */
  wf64((uint32_t)(EBP + -0x30), FPU_ST(0));
  (void)fpu_pop();
L_11f079e5:;
  /* 11f079e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f079e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f079eb mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f079ed mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f079f0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f079f3 jmp 0x11f07a73 */
  goto L_11f07a73;
L_11f079f5:;
  /* 11f079f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f079f8 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11f079fa fcomp qword ptr [0x11f2a738] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11f2a738)));
  (void)fpu_pop();
  /* 11f07a00 fnstsw ax */
  AX = fpu_status();
  /* 11f07a02 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11f07a05 jne 0x11f07a1a */
  if (!C.zf) goto L_11f07a1a;
  /* 11f07a07 mov edx, dword ptr [0x11f2eb98] */
  EDX = (r32((uint32_t)(0x11f2eb98)));
  /* 11f07a0d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11f07a10 mov eax, dword ptr [0x11f2eb9c] */
  EAX = (r32((uint32_t)(0x11f2eb9c)));
  /* 11f07a15 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11f07a18 jmp 0x11f07a25 */
  goto L_11f07a25;
L_11f07a1a:;
  /* 11f07a1a fld qword ptr [0x11f2eb88] */
  fpu_push(rf64((uint32_t)(0x11f2eb88)));
  /* 11f07a20 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11f07a22 fstp qword ptr [ebp - 0x38] */
  wf64((uint32_t)(EBP + -0x38), FPU_ST(0));
  (void)fpu_pop();
L_11f07a25:;
  /* 11f07a25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07a28 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f07a2b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f07a2d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f07a30 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11f07a33 jmp 0x11f07a73 */
  goto L_11f07a73;
L_11f07a35:;
  /* 11f07a35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07a38 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11f07a3a fcomp qword ptr [0x11f2a738] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11f2a738)));
  (void)fpu_pop();
  /* 11f07a40 fnstsw ax */
  AX = fpu_status();
  /* 11f07a42 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11f07a45 jne 0x11f07a5a */
  if (!C.zf) goto L_11f07a5a;
  /* 11f07a47 mov edx, dword ptr [0x11f2eb98] */
  EDX = (r32((uint32_t)(0x11f2eb98)));
  /* 11f07a4d mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11f07a50 mov eax, dword ptr [0x11f2eb9c] */
  EAX = (r32((uint32_t)(0x11f2eb9c)));
  /* 11f07a55 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11f07a58 jmp 0x11f07a65 */
  goto L_11f07a65;
L_11f07a5a:;
  /* 11f07a5a fld qword ptr [0x11f2eb98] */
  fpu_push(rf64((uint32_t)(0x11f2eb98)));
  /* 11f07a60 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11f07a62 fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
L_11f07a65:;
  /* 11f07a65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07a68 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11f07a6b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f07a6d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f07a70 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11f07a73:;
  /* 11f07a73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f07a76 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11f07a79 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f07a7c jmp 0x11f07bde */
  goto L_11f07bde;
L_11f07a81:;
  /* 11f07a81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07a84 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11f07a87 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f07a89 je 0x11f07bde */
  if (C.zf) goto L_11f07bde;
  /* 11f07a8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f07a92 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11f07a95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f07a97 je 0x11f07bde */
  if (C.zf) goto L_11f07bde;
  /* 11f07a9d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f07aa4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07aa7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11f07aaa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f07aac je 0x11f07ab5 */
  if (C.zf) goto L_11f07ab5;
  /* 11f07aae mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11f07ab5:;
  /* 11f07ab5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07ab8 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 11f07aba fcomp qword ptr [0x11f2a738] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11f2a738)));
  (void)fpu_pop();
  /* 11f07ac0 fnstsw ax */
  AX = fpu_status();
  /* 11f07ac2 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 11f07ac5 jne 0x11f07bbe */
  if (!C.zf) goto L_11f07bbe;
  /* 11f07acb lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11f07ace push eax */
  push32((uint32_t)(EAX));
  /* 11f07acf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07ad2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f07ad5 push edx */
  push32((uint32_t)(EDX));
  /* 11f07ad6 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11f07ad8 push eax */
  push32((uint32_t)(EAX));
  /* 11f07ad9 call 0x11f0af60 */
  push32(0x11f07adeu); f_11f0af60();
  /* 11f07ade add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f07ae1 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11f07ae4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f07ae7 sub ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f07aed mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11f07af0 cmp dword ptr [ebp - 0x14], 0xfffffbce */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffbceu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07af7 jge 0x11f07b11 */
  if ((C.sf==C.of)) goto L_11f07b11;
  /* 11f07af9 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11f07afc fmul qword ptr [0x11f2a738] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11f2a738)));
  /* 11f07b02 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11f07b05 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11f07b0c jmp 0x11f07bae */
  goto L_11f07bae;
L_11f07b11:;
  /* 11f07b11 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11f07b14 fcomp qword ptr [0x11f2a738] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11f2a738)));
  (void)fpu_pop();
  /* 11f07b1a fnstsw ax */
  AX = fpu_status();
  /* 11f07b1c test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11f07b1f je 0x11f07b2a */
  if (C.zf) goto L_11f07b2a;
  /* 11f07b21 mov dword ptr [ebp - 0x44], 1 */
  w32((uint32_t)(EBP + -0x44), (0x1u));
  /* 11f07b28 jmp 0x11f07b31 */
  goto L_11f07b31;
L_11f07b2a:;
  /* 11f07b2a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
L_11f07b31:;
  /* 11f07b31 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11f07b34 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11f07b37 mov ax, word ptr [ebp - 0xa] */
  AX = (r16((uint32_t)(EBP + -0xa)));
  /* 11f07b3b and ax, 0xf */
  { uint32_t _r=(AX)&(0xfu); AX = (_r); fl_logic(_r,16); }
  /* 11f07b3f mov word ptr [ebp - 0xa], ax */
  w16((uint32_t)(EBP + -0xa), (AX));
  /* 11f07b43 mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11f07b47 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11f07b4a mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
  /* 11f07b4e jmp 0x11f07b59 */
  goto L_11f07b59;
L_11f07b50:;
  /* 11f07b50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f07b53 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f07b56 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11f07b59:;
  /* 11f07b59 cmp dword ptr [ebp - 0x14], 0xfffffc03 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffc03u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07b60 jge 0x11f07ba0 */
  if ((C.sf==C.of)) goto L_11f07ba0;
  /* 11f07b62 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f07b65 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11f07b68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f07b6a je 0x11f07b79 */
  if (C.zf) goto L_11f07b79;
  /* 11f07b6c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07b70 jne 0x11f07b79 */
  if (!C.zf) goto L_11f07b79;
  /* 11f07b72 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11f07b79:;
  /* 11f07b79 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f07b7c shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f07b7e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f07b81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f07b84 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f07b87 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f07b89 je 0x11f07b96 */
  if (C.zf) goto L_11f07b96;
  /* 11f07b8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f07b8e or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f07b93 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11f07b96:;
  /* 11f07b96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f07b99 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f07b9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f07b9e jmp 0x11f07b50 */
  goto L_11f07b50;
L_11f07ba0:;
  /* 11f07ba0 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07ba4 je 0x11f07bae */
  if (C.zf) goto L_11f07bae;
  /* 11f07ba6 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11f07ba9 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11f07bab fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
L_11f07bae:;
  /* 11f07bae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07bb1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f07bb4 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11f07bb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f07bb9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11f07bbc jmp 0x11f07bc5 */
  goto L_11f07bc5;
L_11f07bbe:;
  /* 11f07bbe mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11f07bc5:;
  /* 11f07bc5 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07bc9 je 0x11f07bd5 */
  if (C.zf) goto L_11f07bd5;
  /* 11f07bcb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11f07bcd call 0x11f07e50 */
  push32(0x11f07bd2u); f_11f07e50();
  /* 11f07bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f07bd5:;
  /* 11f07bd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f07bd8 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 11f07bdb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f07bde:;
  /* 11f07bde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07be1 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11f07be4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f07be6 je 0x11f07c05 */
  if (C.zf) goto L_11f07c05;
  /* 11f07be8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f07beb and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11f07bee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f07bf0 je 0x11f07c05 */
  if (C.zf) goto L_11f07c05;
  /* 11f07bf2 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f07bf4 call 0x11f07e50 */
  push32(0x11f07bf9u); f_11f07e50();
  /* 11f07bf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f07bfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f07bff and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11f07c02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f07c05:;
  /* 11f07c05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f07c07 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07c0b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11f07c0e mov esp, ebp */
  ESP = (EBP);
  /* 11f07c10 pop ebp */
  EBP = (pop32());
  /* 11f07c11 ret  */
  ESPCHK(0x11f078a0u, _esp0);
  ESP += 4; return;
}

/* __umatherr @ 0x11f07c20 (155 bytes, 54 insns) */
void f_11f07c20(void) {
  FTRACE(0x11f07c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07c21 mov ebp, esp */
  EBP = (ESP);
  /* 11f07c23 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f07c26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07c29 push eax */
  push32((uint32_t)(EAX));
  /* 11f07c2a call 0x11f07d00 */
  push32(0x11f07c2fu); f_11f07d00();
  /* 11f07c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f07c32 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f07c35 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07c39 je 0x11f07c97 */
  if (C.zf) goto L_11f07c97;
  /* 11f07c3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07c3e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11f07c41 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f07c44 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11f07c47 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f07c4a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f07c4d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f07c50 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f07c53 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f07c56 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f07c59 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f07c5c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f07c5f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11f07c62 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f07c65 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11f07c6a mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11f07c6d push edx */
  push32((uint32_t)(EDX));
  /* 11f07c6e call 0x11f07e10 */
  push32(0x11f07c73u); f_11f07e10();
  /* 11f07c73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f07c76 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11f07c79 push eax */
  push32((uint32_t)(EAX));
  /* 11f07c7a call 0x11f07dc0 */
  push32(0x11f07c7fu); f_11f07dc0();
  /* 11f07c7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f07c82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f07c84 jne 0x11f07c92 */
  if (!C.zf) goto L_11f07c92;
  /* 11f07c86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07c89 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07c8a call 0x11f07cc0 */
  push32(0x11f07c8fu); f_11f07cc0();
  /* 11f07c8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f07c92:;
  /* 11f07c92 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11f07c95 jmp 0x11f07cb7 */
  goto L_11f07cb7;
L_11f07c97:;
  /* 11f07c97 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11f07c9c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11f07c9f push edx */
  push32((uint32_t)(EDX));
  /* 11f07ca0 call 0x11f07e10 */
  push32(0x11f07ca5u); f_11f07e10();
  /* 11f07ca5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f07ca8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07cab push eax */
  push32((uint32_t)(EAX));
  /* 11f07cac call 0x11f07cc0 */
  push32(0x11f07cb1u); f_11f07cc0();
  /* 11f07cb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f07cb4 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_11f07cb7:;
  /* 11f07cb7 mov esp, ebp */
  ESP = (EBP);
  /* 11f07cb9 pop ebp */
  EBP = (pop32());
  /* 11f07cba ret  */
  ESPCHK(0x11f07c20u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__set_errno_from_matherr @ 0x11f07cc0 (58 bytes, 20 insns) */
void f_11f07cc0(void) {
  FTRACE(0x11f07cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11f07cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07cc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07cc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f07cca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07cce je 0x11f07cde */
  if (C.zf) goto L_11f07cde;
  /* 11f07cd0 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07cd4 jle 0x11f07cf6 */
  if ((C.zf||C.sf!=C.of)) goto L_11f07cf6;
  /* 11f07cd6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07cda jle 0x11f07ceb */
  if ((C.zf||C.sf!=C.of)) goto L_11f07ceb;
  /* 11f07cdc jmp 0x11f07cf6 */
  goto L_11f07cf6;
L_11f07cde:;
  /* 11f07cde call 0x11f07150 */
  push32(0x11f07ce3u); f_11f07150();
  /* 11f07ce3 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11f07ce9 jmp 0x11f07cf6 */
  goto L_11f07cf6;
L_11f07ceb:;
  /* 11f07ceb call 0x11f07150 */
  push32(0x11f07cf0u); f_11f07150();
  /* 11f07cf0 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
L_11f07cf6:;
  /* 11f07cf6 mov esp, ebp */
  ESP = (EBP);
  /* 11f07cf8 pop ebp */
  EBP = (pop32());
  /* 11f07cf9 ret  */
  ESPCHK(0x11f07cc0u, _esp0);
  ESP += 4; return;
}

/* __get_fname @ 0x11f07d00 (63 bytes, 22 insns) */
void f_11f07d00(void) {
  FTRACE(0x11f07d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07d01 mov ebp, esp */
  EBP = (ESP);
  /* 11f07d03 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07d04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f07d0b jmp 0x11f07d16 */
  goto L_11f07d16;
L_11f07d0d:;
  /* 11f07d0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f07d10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f07d13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f07d16:;
  /* 11f07d16 cmp dword ptr [ebp - 4], 0x1b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07d1a jge 0x11f07d39 */
  if ((C.sf==C.of)) goto L_11f07d39;
  /* 11f07d1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f07d1f mov edx, dword ptr [ecx*8 + 0x11f2e6c0] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11f2e6c0)));
  /* 11f07d26 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07d29 jne 0x11f07d37 */
  if (!C.zf) goto L_11f07d37;
  /* 11f07d2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f07d2e mov eax, dword ptr [eax*8 + 0x11f2e6c4] */
  EAX = (r32((uint32_t)(EAX*8 + 0x11f2e6c4)));
  /* 11f07d35 jmp 0x11f07d3b */
  goto L_11f07d3b;
L_11f07d37:;
  /* 11f07d37 jmp 0x11f07d0d */
  goto L_11f07d0d;
L_11f07d39:;
  /* 11f07d39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f07d3b:;
  /* 11f07d3b mov esp, ebp */
  ESP = (EBP);
  /* 11f07d3d pop ebp */
  EBP = (pop32());
  /* 11f07d3e ret  */
  ESPCHK(0x11f07d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10017d40 @ 0x11f07d40 (113 bytes, 38 insns) */
void f_11f07d40(void) {
  FTRACE(0x11f07d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07d41 mov ebp, esp */
  EBP = (ESP);
  /* 11f07d43 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07d44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07d47 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11f07d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f07d4c je 0x11f07d57 */
  if (C.zf) goto L_11f07d57;
  /* 11f07d4e mov dword ptr [ebp - 4], 5 */
  w32((uint32_t)(EBP + -0x4), (0x5u));
  /* 11f07d55 jmp 0x11f07daa */
  goto L_11f07daa;
L_11f07d57:;
  /* 11f07d57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07d5a and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11f07d5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f07d5f je 0x11f07d6a */
  if (C.zf) goto L_11f07d6a;
  /* 11f07d61 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f07d68 jmp 0x11f07daa */
  goto L_11f07daa;
L_11f07d6a:;
  /* 11f07d6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07d6d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f07d70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f07d72 je 0x11f07d7d */
  if (C.zf) goto L_11f07d7d;
  /* 11f07d74 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11f07d7b jmp 0x11f07daa */
  goto L_11f07daa;
L_11f07d7d:;
  /* 11f07d7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07d80 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11f07d83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f07d85 je 0x11f07d90 */
  if (C.zf) goto L_11f07d90;
  /* 11f07d87 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 11f07d8e jmp 0x11f07daa */
  goto L_11f07daa;
L_11f07d90:;
  /* 11f07d90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07d93 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11f07d96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f07d98 je 0x11f07da3 */
  if (C.zf) goto L_11f07da3;
  /* 11f07d9a mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 11f07da1 jmp 0x11f07daa */
  goto L_11f07daa;
L_11f07da3:;
  /* 11f07da3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11f07daa:;
  /* 11f07daa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f07dad mov esp, ebp */
  ESP = (EBP);
  /* 11f07daf pop ebp */
  EBP = (pop32());
  /* 11f07db0 ret  */
  ESPCHK(0x11f07d40u, _esp0);
  ESP += 4; return;
}

/* __matherr @ 0x11f07dc0 (7 bytes, 5 insns) */
void f_11f07dc0(void) {
  FTRACE(0x11f07dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11f07dc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f07dc5 pop ebp */
  EBP = (pop32());
  /* 11f07dc6 ret  */
  ESPCHK(0x11f07dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017dd0 @ 0x11f07dd0 (22 bytes, 15 insns) */
void f_11f07dd0(void) {
  FTRACE(0x11f07dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11f07dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07dd4 push ebx */
  push32((uint32_t)(EBX));
  /* 11f07dd5 push esi */
  push32((uint32_t)(ESI));
  /* 11f07dd6 push edi */
  push32((uint32_t)(EDI));
  /* 11f07dd7 wait  */
  /* wait (no observable integer/reg state) */
  /* 11f07dd8 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11f07ddb movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11f07ddf pop edi */
  EDI = (pop32());
  /* 11f07de0 pop esi */
  ESI = (pop32());
  /* 11f07de1 pop ebx */
  EBX = (pop32());
  /* 11f07de2 mov esp, ebp */
  ESP = (EBP);
  /* 11f07de4 pop ebp */
  EBP = (pop32());
  /* 11f07de5 ret  */
  ESPCHK(0x11f07dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017df0 @ 0x11f07df0 (23 bytes, 15 insns) */
void f_11f07df0(void) {
  FTRACE(0x11f07df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07df1 mov ebp, esp */
  EBP = (ESP);
  /* 11f07df3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07df4 push ebx */
  push32((uint32_t)(EBX));
  /* 11f07df5 push esi */
  push32((uint32_t)(ESI));
  /* 11f07df6 push edi */
  push32((uint32_t)(EDI));
  /* 11f07df7 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11f07dfa fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11f07dfc movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11f07e00 pop edi */
  EDI = (pop32());
  /* 11f07e01 pop esi */
  ESI = (pop32());
  /* 11f07e02 pop ebx */
  EBX = (pop32());
  /* 11f07e03 mov esp, ebp */
  ESP = (EBP);
  /* 11f07e05 pop ebp */
  EBP = (pop32());
  /* 11f07e06 ret  */
  ESPCHK(0x11f07df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e10 @ 0x11f07e10 (50 bytes, 24 insns) */
void f_11f07e10(void) {
  FTRACE(0x11f07e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07e11 mov ebp, esp */
  EBP = (ESP);
  /* 11f07e13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f07e16 push ebx */
  push32((uint32_t)(EBX));
  /* 11f07e17 push esi */
  push32((uint32_t)(ESI));
  /* 11f07e18 push edi */
  push32((uint32_t)(EDI));
  /* 11f07e19 wait  */
  /* wait (no observable integer/reg state) */
  /* 11f07e1a fnstcw word ptr [ebp - 8] */
  w16((uint32_t)(EBP + -0x8), C.fcw);
  /* 11f07e1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07e20 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11f07e23 movsx ecx, word ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11f07e27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07e2a not edx */
  EDX = (~(EDX));
  /* 11f07e2c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11f07e2e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11f07e30 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11f07e34 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11f07e37 movsx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11f07e3b pop edi */
  EDI = (pop32());
  /* 11f07e3c pop esi */
  ESI = (pop32());
  /* 11f07e3d pop ebx */
  EBX = (pop32());
  /* 11f07e3e mov esp, ebp */
  ESP = (EBP);
  /* 11f07e40 pop ebp */
  EBP = (pop32());
  /* 11f07e41 ret  */
  ESPCHK(0x11f07e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e50 @ 0x11f07e50 (117 bytes, 53 insns) */
void f_11f07e50(void) {
  FTRACE(0x11f07e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07e51 mov ebp, esp */
  EBP = (ESP);
  /* 11f07e53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f07e56 push ebx */
  push32((uint32_t)(EBX));
  /* 11f07e57 push esi */
  push32((uint32_t)(ESI));
  /* 11f07e58 push edi */
  push32((uint32_t)(EDI));
  /* 11f07e59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07e5c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11f07e5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f07e61 je 0x11f07e6d */
  if (C.zf) goto L_11f07e6d;
  /* 11f07e63 fld xword ptr [0x11f2e79c] */
  fpu_push(rf80((uint32_t)(0x11f2e79c)));
  /* 11f07e69 fistp dword ptr [ebp - 0xc] */
  w32((uint32_t)(EBP + -0xc), (uint32_t)fpu_to_i32(FPU_ST(0)));
  (void)fpu_pop();
  /* 11f07e6c wait  */
  /* wait (no observable integer/reg state) */
L_11f07e6d:;
  /* 11f07e6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07e70 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11f07e73 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f07e75 je 0x11f07e87 */
  if (C.zf) goto L_11f07e87;
  /* 11f07e77 wait  */
  /* wait (no observable integer/reg state) */
  /* 11f07e78 fnstsw ax */
  AX = fpu_status();
  /* 11f07e7a fld xword ptr [0x11f2e79c] */
  fpu_push(rf80((uint32_t)(0x11f2e79c)));
  /* 11f07e80 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11f07e83 wait  */
  /* wait (no observable integer/reg state) */
  /* 11f07e84 wait  */
  /* wait (no observable integer/reg state) */
  /* 11f07e85 fnstsw ax */
  AX = fpu_status();
L_11f07e87:;
  /* 11f07e87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07e8a and edx, 0x10 */
  { uint32_t _r=(EDX)&(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11f07e8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f07e8f je 0x11f07e9b */
  if (C.zf) goto L_11f07e9b;
  /* 11f07e91 fld xword ptr [0x11f2e7a8] */
  fpu_push(rf80((uint32_t)(0x11f2e7a8)));
  /* 11f07e97 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11f07e9a wait  */
  /* wait (no observable integer/reg state) */
L_11f07e9b:;
  /* 11f07e9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07e9e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11f07ea1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f07ea3 je 0x11f07eae */
  if (C.zf) goto L_11f07eae;
  /* 11f07ea5 fldz  */
  fpu_push(0.0);
  /* 11f07ea7 fld1  */
  fpu_push(1.0);
  /* 11f07ea9 fdivrp st(1) */
  FPU_ST(1) = FPU_ST(0) / FPU_ST(1);
  (void)fpu_pop();
  /* 11f07eab fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11f07ead wait  */
  /* wait (no observable integer/reg state) */
L_11f07eae:;
  /* 11f07eae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07eb1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11f07eb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f07eb6 je 0x11f07ebe */
  if (C.zf) goto L_11f07ebe;
  /* 11f07eb8 fldpi  */
  fpu_push(3.14159265358979311599796346854);
  /* 11f07eba fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11f07ebd wait  */
  /* wait (no observable integer/reg state) */
L_11f07ebe:;
  /* 11f07ebe pop edi */
  EDI = (pop32());
  /* 11f07ebf pop esi */
  ESI = (pop32());
  /* 11f07ec0 pop ebx */
  EBX = (pop32());
  /* 11f07ec1 mov esp, ebp */
  ESP = (EBP);
  /* 11f07ec3 pop ebp */
  EBP = (pop32());
  /* 11f07ec4 ret  */
  ESPCHK(0x11f07e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ed0 @ 0x11f07ed0 (421 bytes, 148 insns) */
void f_11f07ed0(void) {
  FTRACE(0x11f07ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f07ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f07ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11f07ed3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f07ed5 push 0x11f2b438 */
  push32((uint32_t)(0x11f2b438u));
  /* 11f07eda push 0x11f046ec */
  push32((uint32_t)(0x11f046ecu));
  /* 11f07edf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f07ee5 push eax */
  push32((uint32_t)(EAX));
  /* 11f07ee6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f07eed add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f07ef0 push ebx */
  push32((uint32_t)(EBX));
  /* 11f07ef1 push esi */
  push32((uint32_t)(ESI));
  /* 11f07ef2 push edi */
  push32((uint32_t)(EDI));
  /* 11f07ef3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f07ef6 cmp dword ptr [0x11f309b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07efd jne 0x11f07f4e */
  if (!C.zf) goto L_11f07f4e;
  /* 11f07eff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11f07f02 push eax */
  push32((uint32_t)(EAX));
  /* 11f07f03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f07f05 push 0x11f2b434 */
  push32((uint32_t)(0x11f2b434u));
  /* 11f07f0a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f07f0c call dword ptr [0x11f33360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33360))), 0x11f07f12u);
  /* 11f07f12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f07f14 je 0x11f07f22 */
  if (C.zf) goto L_11f07f22;
  /* 11f07f16 mov dword ptr [0x11f309b0], 1 */
  w32((uint32_t)(0x11f309b0), (0x1u));
  /* 11f07f20 jmp 0x11f07f4e */
  goto L_11f07f4e;
L_11f07f22:;
  /* 11f07f22 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11f07f25 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07f26 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f07f28 push 0x11f2b430 */
  push32((uint32_t)(0x11f2b430u));
  /* 11f07f2d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f07f2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f07f31 call dword ptr [0x11f33364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33364))), 0x11f07f37u);
  /* 11f07f37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f07f39 je 0x11f07f47 */
  if (C.zf) goto L_11f07f47;
  /* 11f07f3b mov dword ptr [0x11f309b0], 2 */
  w32((uint32_t)(0x11f309b0), (0x2u));
  /* 11f07f45 jmp 0x11f07f4e */
  goto L_11f07f4e;
L_11f07f47:;
  /* 11f07f47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f07f49 jmp 0x11f08078 */
  goto L_11f08078;
L_11f07f4e:;
  /* 11f07f4e cmp dword ptr [0x11f309b0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11f309b0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07f55 jne 0x11f07f85 */
  if (!C.zf) goto L_11f07f85;
  /* 11f07f57 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07f5b jne 0x11f07f66 */
  if (!C.zf) goto L_11f07f66;
  /* 11f07f5d mov edx, dword ptr [0x11f309c8] */
  EDX = (r32((uint32_t)(0x11f309c8)));
  /* 11f07f63 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11f07f66:;
  /* 11f07f66 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f07f69 push eax */
  push32((uint32_t)(EAX));
  /* 11f07f6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f07f6d push ecx */
  push32((uint32_t)(ECX));
  /* 11f07f6e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07f71 push edx */
  push32((uint32_t)(EDX));
  /* 11f07f72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f07f75 push eax */
  push32((uint32_t)(EAX));
  /* 11f07f76 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f07f79 push ecx */
  push32((uint32_t)(ECX));
  /* 11f07f7a call dword ptr [0x11f33364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33364))), 0x11f07f80u);
  /* 11f07f80 jmp 0x11f08078 */
  goto L_11f08078;
L_11f07f85:;
  /* 11f07f85 cmp dword ptr [0x11f309b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f309b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07f8c jne 0x11f08076 */
  if (!C.zf) goto L_11f08076;
  /* 11f07f92 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07f96 jne 0x11f07fa1 */
  if (!C.zf) goto L_11f07fa1;
  /* 11f07f98 mov edx, dword ptr [0x11f309d8] */
  EDX = (r32((uint32_t)(0x11f309d8)));
  /* 11f07f9e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11f07fa1:;
  /* 11f07fa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f07fa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f07fa5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f07fa8 push eax */
  push32((uint32_t)(EAX));
  /* 11f07fa9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f07fac push ecx */
  push32((uint32_t)(ECX));
  /* 11f07fad mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f07fb0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f07fb2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f07fb4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11f07fb7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f07fba push edx */
  push32((uint32_t)(EDX));
  /* 11f07fbb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f07fbe push eax */
  push32((uint32_t)(EAX));
  /* 11f07fbf call dword ptr [0x11f33368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33368))), 0x11f07fc5u);
  /* 11f07fc5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f07fc8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f07fcc jne 0x11f07fd5 */
  if (!C.zf) goto L_11f07fd5;
  /* 11f07fce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f07fd0 jmp 0x11f08078 */
  goto L_11f08078;
L_11f07fd5:;
  /* 11f07fd5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f07fdc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f07fdf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f07fe1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f07fe4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f07fe6 call 0x11f003c0 */
  push32(0x11f07febu); f_11f003c0();
  /* 11f07feb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11f07fee mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f07ff1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f07ff4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11f07ff7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f07ffa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f07ffc push edx */
  push32((uint32_t)(EDX));
  /* 11f07ffd push 0 */
  push32((uint32_t)(0x0u));
  /* 11f07fff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f08002 push eax */
  push32((uint32_t)(EAX));
  /* 11f08003 call 0x11f01ed0 */
  push32(0x11f08008u); f_11f01ed0();
  /* 11f08008 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0800b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11f08012 jmp 0x11f0802b */
  goto L_11f0802b;
  /* 11f08014 mov eax, 1 */
  EAX = (0x1u);
  /* 11f08019 ret  */
  ESPCHK(0x11f07ed0u, _esp0);
  ESP += 4; return;
  /* 11f0801a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0801d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11f08024 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f0802b:;
  /* 11f0802b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0802f jne 0x11f08035 */
  if (!C.zf) goto L_11f08035;
  /* 11f08031 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f08033 jmp 0x11f08078 */
  goto L_11f08078;
L_11f08035:;
  /* 11f08035 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f08038 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08039 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0803c push edx */
  push32((uint32_t)(EDX));
  /* 11f0803d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f08040 push eax */
  push32((uint32_t)(EAX));
  /* 11f08041 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08044 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08045 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f08047 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f0804a push edx */
  push32((uint32_t)(EDX));
  /* 11f0804b call dword ptr [0x11f33368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33368))), 0x11f08051u);
  /* 11f08051 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f08054 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08058 jne 0x11f0805e */
  if (!C.zf) goto L_11f0805e;
  /* 11f0805a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0805c jmp 0x11f08078 */
  goto L_11f08078;
L_11f0805e:;
  /* 11f0805e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f08061 push eax */
  push32((uint32_t)(EAX));
  /* 11f08062 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f08065 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08066 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f08069 push edx */
  push32((uint32_t)(EDX));
  /* 11f0806a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0806d push eax */
  push32((uint32_t)(EAX));
  /* 11f0806e call dword ptr [0x11f33360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33360))), 0x11f08074u);
  /* 11f08074 jmp 0x11f08078 */
  goto L_11f08078;
L_11f08076:;
  /* 11f08076 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f08078:;
  /* 11f08078 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11f0807b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0807e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f08085 pop edi */
  EDI = (pop32());
  /* 11f08086 pop esi */
  ESI = (pop32());
  /* 11f08087 pop ebx */
  EBX = (pop32());
  /* 11f08088 mov esp, ebp */
  ESP = (EBP);
  /* 11f0808a pop ebp */
  EBP = (pop32());
  /* 11f0808b ret  */
  ESPCHK(0x11f07ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018090 @ 0x11f08090 (1007 bytes, 269 insns) */
void f_11f08090(void) {
  FTRACE(0x11f08090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f08090 push ebp */
  push32((uint32_t)(EBP));
  /* 11f08091 mov ebp, esp */
  EBP = (ESP);
  /* 11f08093 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08099 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0809d jl 0x11f080a5 */
  if ((C.sf!=C.of)) goto L_11f080a5;
  /* 11f0809f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f080a3 jle 0x11f080ac */
  if ((C.zf||C.sf!=C.of)) goto L_11f080ac;
L_11f080a5:;
  /* 11f080a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f080a7 jmp 0x11f0847b */
  goto L_11f0847b;
L_11f080ac:;
  /* 11f080ac push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f080ae call 0x11efb9c0 */
  push32(0x11f080b3u); f_11efb9c0();
  /* 11f080b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f080b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f080bd mov eax, dword ptr [0x11f31dc4] */
  EAX = (r32((uint32_t)(0x11f31dc4)));
  /* 11f080c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f080c5 mov dword ptr [0x11f31dc4], eax */
  w32((uint32_t)(0x11f31dc4), (EAX));
L_11f080ca:;
  /* 11f080ca cmp dword ptr [0x11f31dd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f31dd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f080d1 je 0x11f080dd */
  if (C.zf) goto L_11f080dd;
  /* 11f080d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f080d5 call dword ptr [0x11f3335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3335c))), 0x11f080dbu);
  /* 11f080db jmp 0x11f080ca */
  goto L_11f080ca;
L_11f080dd:;
  /* 11f080dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f080e1 je 0x11f08121 */
  if (C.zf) goto L_11f08121;
  /* 11f080e3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f080e7 je 0x11f08101 */
  if (C.zf) goto L_11f08101;
  /* 11f080e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f080ec push ecx */
  push32((uint32_t)(ECX));
  /* 11f080ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f080f0 push edx */
  push32((uint32_t)(EDX));
  /* 11f080f1 call 0x11f08480 */
  push32(0x11f080f6u); f_11f08480();
  /* 11f080f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f080f9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11f080ff jmp 0x11f08113 */
  goto L_11f08113;
L_11f08101:;
  /* 11f08101 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08104 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f08107 mov ecx, dword ptr [eax + 0x11f2e8c4] */
  ECX = (r32((uint32_t)(EAX + 0x11f2e8c4)));
  /* 11f0810d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11f08113:;
  /* 11f08113 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11f08119 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f0811c jmp 0x11f0845b */
  goto L_11f0845b;
L_11f08121:;
  /* 11f08121 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11f08128 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f0812f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08133 je 0x11f08453 */
  if (C.zf) goto L_11f08453;
  /* 11f08139 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0813c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0813f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08142 jne 0x11f08364 */
  if (!C.zf) goto L_11f08364;
  /* 11f08148 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0814b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11f0814f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08152 jne 0x11f08364 */
  if (!C.zf) goto L_11f08364;
  /* 11f08158 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0815b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 11f0815f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08162 jne 0x11f08364 */
  if (!C.zf) goto L_11f08364;
  /* 11f08168 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0816b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11f08171:;
  /* 11f08171 push 0x11f2b488 */
  push32((uint32_t)(0x11f2b488u));
  /* 11f08176 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11f0817c push ecx */
  push32((uint32_t)(ECX));
  /* 11f0817d call 0x11f0c5e0 */
  push32(0x11f08182u); f_11f0c5e0();
  /* 11f08182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08185 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11f0818b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08192 je 0x11f081bd */
  if (C.zf) goto L_11f081bd;
  /* 11f08194 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11f0819a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f081a0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11f081a6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f081ad je 0x11f081bd */
  if (C.zf) goto L_11f081bd;
  /* 11f081af mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11f081b5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f081b8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f081bb jne 0x11f081e3 */
  if (!C.zf) goto L_11f081e3;
L_11f081bd:;
  /* 11f081bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f081c1 je 0x11f081dc */
  if (C.zf) goto L_11f081dc;
  /* 11f081c3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f081c5 call 0x11efba60 */
  push32(0x11f081cau); f_11efba60();
  /* 11f081ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f081cd mov edx, dword ptr [0x11f31dc4] */
  EDX = (r32((uint32_t)(0x11f31dc4)));
  /* 11f081d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f081d6 mov dword ptr [0x11f31dc4], edx */
  w32((uint32_t)(0x11f31dc4), (EDX));
L_11f081dc:;
  /* 11f081dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f081de jmp 0x11f0847b */
  goto L_11f0847b;
L_11f081e3:;
  /* 11f081e3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11f081ea jmp 0x11f081f5 */
  goto L_11f081f5;
L_11f081ec:;
  /* 11f081ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f081ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f081f2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11f081f5:;
  /* 11f081f5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f081f9 jg 0x11f08243 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f08243;
  /* 11f081fb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11f08201 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08202 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11f08208 push edx */
  push32((uint32_t)(EDX));
  /* 11f08209 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0820c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0820f mov ecx, dword ptr [eax + 0x11f2e8c0] */
  ECX = (r32((uint32_t)(EAX + 0x11f2e8c0)));
  /* 11f08215 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08216 call 0x11f0c5a0 */
  push32(0x11f0821bu); f_11f0c5a0();
  /* 11f0821b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0821e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f08220 jne 0x11f08241 */
  if (!C.zf) goto L_11f08241;
  /* 11f08222 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f08225 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f08228 mov eax, dword ptr [edx + 0x11f2e8c0] */
  EAX = (r32((uint32_t)(EDX + 0x11f2e8c0)));
  /* 11f0822e push eax */
  push32((uint32_t)(EAX));
  /* 11f0822f call 0x11f00050 */
  push32(0x11f08234u); f_11f00050();
  /* 11f08234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08237 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0823d jne 0x11f08241 */
  if (!C.zf) goto L_11f08241;
  /* 11f0823f jmp 0x11f08243 */
  goto L_11f08243;
L_11f08241:;
  /* 11f08241 jmp 0x11f081ec */
  goto L_11f081ec;
L_11f08243:;
  /* 11f08243 push 0x11f2b484 */
  push32((uint32_t)(0x11f2b484u));
  /* 11f08248 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11f0824e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08251 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11f08257 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11f0825d push edx */
  push32((uint32_t)(EDX));
  /* 11f0825e call 0x11f0c560 */
  push32(0x11f08263u); f_11f0c560();
  /* 11f08263 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08266 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11f0826c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08273 jne 0x11f082a9 */
  if (!C.zf) goto L_11f082a9;
  /* 11f08275 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11f0827b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0827e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08281 je 0x11f082a9 */
  if (C.zf) goto L_11f082a9;
  /* 11f08283 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08287 je 0x11f082a2 */
  if (C.zf) goto L_11f082a2;
  /* 11f08289 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f0828b call 0x11efba60 */
  push32(0x11f08290u); f_11efba60();
  /* 11f08290 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08293 mov edx, dword ptr [0x11f31dc4] */
  EDX = (r32((uint32_t)(0x11f31dc4)));
  /* 11f08299 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0829c mov dword ptr [0x11f31dc4], edx */
  w32((uint32_t)(0x11f31dc4), (EDX));
L_11f082a2:;
  /* 11f082a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f082a4 jmp 0x11f0847b */
  goto L_11f0847b;
L_11f082a9:;
  /* 11f082a9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f082ad jg 0x11f082fa */
  if ((!C.zf&&C.sf==C.of)) goto L_11f082fa;
  /* 11f082af mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11f082b5 push eax */
  push32((uint32_t)(EAX));
  /* 11f082b6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11f082bc push ecx */
  push32((uint32_t)(ECX));
  /* 11f082bd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11f082c3 push edx */
  push32((uint32_t)(EDX));
  /* 11f082c4 call 0x11f00a40 */
  push32(0x11f082c9u); f_11f00a40();
  /* 11f082c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f082cc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11f082d2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 11f082da lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11f082e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f082e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f082e4 push edx */
  push32((uint32_t)(EDX));
  /* 11f082e5 call 0x11f08480 */
  push32(0x11f082eau); f_11f08480();
  /* 11f082ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f082ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f082ef je 0x11f082fa */
  if (C.zf) goto L_11f082fa;
  /* 11f082f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f082f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f082f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11f082fa:;
  /* 11f082fa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11f08300 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08306 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11f0830c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11f08312 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f08315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f08317 je 0x11f08328 */
  if (C.zf) goto L_11f08328;
  /* 11f08319 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11f0831f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08322 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11f08328:;
  /* 11f08328 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11f0832e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f08331 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f08333 jne 0x11f08171 */
  if (!C.zf) goto L_11f08171;
  /* 11f08339 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0833d je 0x11f0834c */
  if (C.zf) goto L_11f0834c;
  /* 11f0833f call 0x11f08620 */
  push32(0x11f08344u); f_11f08620();
  /* 11f08344 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11f0834a jmp 0x11f08356 */
  goto L_11f08356;
L_11f0834c:;
  /* 11f0834c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11f08356:;
  /* 11f08356 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 11f0835c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0835f jmp 0x11f08451 */
  goto L_11f08451;
L_11f08364:;
  /* 11f08364 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08367 push edx */
  push32((uint32_t)(EDX));
  /* 11f08368 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0836a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0836c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11f08372 push eax */
  push32((uint32_t)(EAX));
  /* 11f08373 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08376 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08377 call 0x11f08720 */
  push32(0x11f0837cu); f_11f08720();
  /* 11f0837c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0837f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f08382 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08386 je 0x11f08451 */
  if (C.zf) goto L_11f08451;
  /* 11f0838c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11f08393 jmp 0x11f0839e */
  goto L_11f0839e;
L_11f08395:;
  /* 11f08395 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f08398 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0839b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11f0839e:;
  /* 11f0839e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f083a2 jg 0x11f08400 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f08400;
  /* 11f083a4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f083a8 je 0x11f083fe */
  if (C.zf) goto L_11f083fe;
  /* 11f083aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f083ad imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f083b0 mov ecx, dword ptr [eax + 0x11f2e8c4] */
  ECX = (r32((uint32_t)(EAX + 0x11f2e8c4)));
  /* 11f083b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f083b7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11f083bd push edx */
  push32((uint32_t)(EDX));
  /* 11f083be call 0x11f04660 */
  push32(0x11f083c3u); f_11f04660();
  /* 11f083c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f083c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f083c8 je 0x11f083f5 */
  if (C.zf) goto L_11f083f5;
  /* 11f083ca lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11f083d0 push eax */
  push32((uint32_t)(EAX));
  /* 11f083d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f083d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f083d5 call 0x11f08480 */
  push32(0x11f083dau); f_11f08480();
  /* 11f083da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f083dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f083df je 0x11f083ec */
  if (C.zf) goto L_11f083ec;
  /* 11f083e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f083e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f083e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11f083ea jmp 0x11f083f3 */
  goto L_11f083f3;
L_11f083ec:;
  /* 11f083ec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11f083f3:;
  /* 11f083f3 jmp 0x11f083fe */
  goto L_11f083fe;
L_11f083f5:;
  /* 11f083f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f083f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f083fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11f083fe:;
  /* 11f083fe jmp 0x11f08395 */
  goto L_11f08395;
L_11f08400:;
  /* 11f08400 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08404 je 0x11f0842b */
  if (C.zf) goto L_11f0842b;
  /* 11f08406 call 0x11f08620 */
  push32(0x11f0840bu); f_11f08620();
  /* 11f0840b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0840e push 2 */
  push32((uint32_t)(0x2u));
  /* 11f08410 mov ecx, dword ptr [0x11f2e8c4] */
  ECX = (r32((uint32_t)(0x11f2e8c4)));
  /* 11f08416 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08417 call 0x11efc550 */
  push32(0x11f0841cu); f_11efc550();
  /* 11f0841c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0841f mov dword ptr [0x11f2e8c4], 0 */
  w32((uint32_t)(0x11f2e8c4), (0x0u));
  /* 11f08429 jmp 0x11f08451 */
  goto L_11f08451;
L_11f0842b:;
  /* 11f0842b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0842f je 0x11f0843e */
  if (C.zf) goto L_11f0843e;
  /* 11f08431 call 0x11f08620 */
  push32(0x11f08436u); f_11f08620();
  /* 11f08436 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11f0843c jmp 0x11f08448 */
  goto L_11f08448;
L_11f0843e:;
  /* 11f0843e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11f08448:;
  /* 11f08448 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 11f0844e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11f08451:;
  /* 11f08451 jmp 0x11f0845b */
  goto L_11f0845b;
L_11f08453:;
  /* 11f08453 call 0x11f08620 */
  push32(0x11f08458u); f_11f08620();
  /* 11f08458 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f0845b:;
  /* 11f0845b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0845f je 0x11f08478 */
  if (C.zf) goto L_11f08478;
  /* 11f08461 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f08463 call 0x11efba60 */
  push32(0x11f08468u); f_11efba60();
  /* 11f08468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0846b mov eax, dword ptr [0x11f31dc4] */
  EAX = (r32((uint32_t)(0x11f31dc4)));
  /* 11f08470 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08473 mov dword ptr [0x11f31dc4], eax */
  w32((uint32_t)(0x11f31dc4), (EAX));
L_11f08478:;
  /* 11f08478 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11f0847b:;
  /* 11f0847b mov esp, ebp */
  ESP = (EBP);
  /* 11f0847d pop ebp */
  EBP = (pop32());
  /* 11f0847e ret  */
  ESPCHK(0x11f08090u, _esp0);
  ESP += 4; return;
}

/* FUN_10018480 @ 0x11f08480 (403 bytes, 117 insns) */
void f_11f08480(void) {
  FTRACE(0x11f08480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f08480 push ebp */
  push32((uint32_t)(EBP));
  /* 11f08481 mov ebp, esp */
  EBP = (ESP);
  /* 11f08483 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08489 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0848c push eax */
  push32((uint32_t)(EAX));
  /* 11f0848d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11f08493 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08494 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11f0849a push edx */
  push32((uint32_t)(EDX));
  /* 11f0849b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11f084a1 push eax */
  push32((uint32_t)(EAX));
  /* 11f084a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f084a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f084a6 call 0x11f08720 */
  push32(0x11f084abu); f_11f08720();
  /* 11f084ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f084ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f084b0 jne 0x11f084b9 */
  if (!C.zf) goto L_11f084b9;
  /* 11f084b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f084b4 jmp 0x11f0860f */
  goto L_11f0860f;
L_11f084b9:;
  /* 11f084b9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11f084be push 0x11f2b48c */
  push32((uint32_t)(0x11f2b48cu));
  /* 11f084c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f084c5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11f084cb push edx */
  push32((uint32_t)(EDX));
  /* 11f084cc call 0x11f00050 */
  push32(0x11f084d1u); f_11f00050();
  /* 11f084d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f084d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f084d7 push eax */
  push32((uint32_t)(EAX));
  /* 11f084d8 call 0x11efbac0 */
  push32(0x11f084ddu); f_11efbac0();
  /* 11f084dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f084e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f084e3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f084e7 jne 0x11f084f0 */
  if (!C.zf) goto L_11f084f0;
  /* 11f084e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f084eb jmp 0x11f0860f */
  goto L_11f0860f;
L_11f084f0:;
  /* 11f084f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f084f3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f084f6 mov ecx, dword ptr [eax + 0x11f2e8c4] */
  ECX = (r32((uint32_t)(EAX + 0x11f2e8c4)));
  /* 11f084fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f084ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08502 mov eax, dword ptr [edx*4 + 0x11f309c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11f309c0)));
  /* 11f08509 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0850c push 6 */
  push32((uint32_t)(0x6u));
  /* 11f0850e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08511 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f08514 add ecx, 0x11f30a04 */
  { uint32_t _a=(ECX),_b=(0x11f30a04u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0851a push ecx */
  push32((uint32_t)(ECX));
  /* 11f0851b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11f0851e push edx */
  push32((uint32_t)(EDX));
  /* 11f0851f call 0x11f05b60 */
  push32(0x11f08524u); f_11f05b60();
  /* 11f08524 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08527 mov eax, dword ptr [0x11f309d8] */
  EAX = (r32((uint32_t)(0x11f309d8)));
  /* 11f0852c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f0852f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11f08535 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08536 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f08539 push edx */
  push32((uint32_t)(EDX));
  /* 11f0853a call 0x11f001d0 */
  push32(0x11f0853fu); f_11f001d0();
  /* 11f0853f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08542 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08545 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f08548 mov dword ptr [ecx + 0x11f2e8c4], eax */
  w32((uint32_t)(ECX + 0x11f2e8c4), (EAX));
  /* 11f0854e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11f08554 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0855a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0855d mov dword ptr [eax*4 + 0x11f309c0], edx */
  w32((uint32_t)(EAX*4 + 0x11f309c0), (EDX));
  /* 11f08564 push 6 */
  push32((uint32_t)(0x6u));
  /* 11f08566 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11f0856c push ecx */
  push32((uint32_t)(ECX));
  /* 11f0856d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08570 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f08573 add edx, 0x11f30a04 */
  { uint32_t _a=(EDX),_b=(0x11f30a04u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08579 push edx */
  push32((uint32_t)(EDX));
  /* 11f0857a call 0x11f05b60 */
  push32(0x11f0857fu); f_11f05b60();
  /* 11f0857f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08582 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08586 jne 0x11f08593 */
  if (!C.zf) goto L_11f08593;
  /* 11f08588 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11f0858e mov dword ptr [0x11f309d8], eax */
  w32((uint32_t)(0x11f309d8), (EAX));
L_11f08593:;
  /* 11f08593 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08597 jne 0x11f085a5 */
  if (!C.zf) goto L_11f085a5;
  /* 11f08599 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11f0859f mov dword ptr [0x11f309dc], ecx */
  w32((uint32_t)(0x11f309dc), (ECX));
L_11f085a5:;
  /* 11f085a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f085a8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f085ab call dword ptr [edx + 0x11f2e8c8] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x11f2e8c8))), 0x11f085b1u);
  /* 11f085b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f085b3 je 0x11f085ec */
  if (C.zf) goto L_11f085ec;
  /* 11f085b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f085b8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f085bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f085be mov dword ptr [eax + 0x11f2e8c4], ecx */
  w32((uint32_t)(EAX + 0x11f2e8c4), (ECX));
  /* 11f085c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f085c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f085c9 push edx */
  push32((uint32_t)(EDX));
  /* 11f085ca call 0x11efc550 */
  push32(0x11f085cfu); f_11efc550();
  /* 11f085cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f085d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f085d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f085d8 mov dword ptr [eax*4 + 0x11f309c0], ecx */
  w32((uint32_t)(EAX*4 + 0x11f309c0), (ECX));
  /* 11f085df mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f085e2 mov dword ptr [0x11f309d8], edx */
  w32((uint32_t)(0x11f309d8), (EDX));
  /* 11f085e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f085ea jmp 0x11f0860f */
  goto L_11f0860f;
L_11f085ec:;
  /* 11f085ec cmp dword ptr [ebp - 0xc], 0x11f2e7b4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x11f2e7b4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f085f3 je 0x11f08603 */
  if (C.zf) goto L_11f08603;
  /* 11f085f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f085f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f085fa push eax */
  push32((uint32_t)(EAX));
  /* 11f085fb call 0x11efc550 */
  push32(0x11f08600u); f_11efc550();
  /* 11f08600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f08603:;
  /* 11f08603 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08606 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f08609 mov eax, dword ptr [ecx + 0x11f2e8c4] */
  EAX = (r32((uint32_t)(ECX + 0x11f2e8c4)));
L_11f0860f:;
  /* 11f0860f mov esp, ebp */
  ESP = (EBP);
  /* 11f08611 pop ebp */
  EBP = (pop32());
  /* 11f08612 ret  */
  ESPCHK(0x11f08480u, _esp0);
  ESP += 4; return;
}

/* FUN_10018620 @ 0x11f08620 (256 bytes, 72 insns) */
void f_11f08620(void) {
  FTRACE(0x11f08620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f08620 push ebp */
  push32((uint32_t)(EBP));
  /* 11f08621 mov ebp, esp */
  EBP = (ESP);
  /* 11f08623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08626 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11f0862d cmp dword ptr [0x11f2e8c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e8c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08634 jne 0x11f08654 */
  if (!C.zf) goto L_11f08654;
  /* 11f08636 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11f0863b push 0x11f2b48c */
  push32((uint32_t)(0x11f2b48cu));
  /* 11f08640 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f08642 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11f08647 call 0x11efbac0 */
  push32(0x11f0864cu); f_11efbac0();
  /* 11f0864c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0864f mov dword ptr [0x11f2e8c4], eax */
  w32((uint32_t)(0x11f2e8c4), (EAX));
L_11f08654:;
  /* 11f08654 mov eax, dword ptr [0x11f2e8c4] */
  EAX = (r32((uint32_t)(0x11f2e8c4)));
  /* 11f08659 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11f0865c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f08663 jmp 0x11f0866e */
  goto L_11f0866e;
L_11f08665:;
  /* 11f08665 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f08668 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0866b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f0866e:;
  /* 11f0866e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f08671 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f08674 mov eax, dword ptr [edx + 0x11f2e8c4] */
  EAX = (r32((uint32_t)(EDX + 0x11f2e8c4)));
  /* 11f0867a push eax */
  push32((uint32_t)(EAX));
  /* 11f0867b push 0x11f2b498 */
  push32((uint32_t)(0x11f2b498u));
  /* 11f08680 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f08683 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f08686 mov edx, dword ptr [ecx + 0x11f2e8c0] */
  EDX = (r32((uint32_t)(ECX + 0x11f2e8c0)));
  /* 11f0868c push edx */
  push32((uint32_t)(EDX));
  /* 11f0868d push 3 */
  push32((uint32_t)(0x3u));
  /* 11f0868f mov eax, dword ptr [0x11f2e8c4] */
  EAX = (r32((uint32_t)(0x11f2e8c4)));
  /* 11f08694 push eax */
  push32((uint32_t)(EAX));
  /* 11f08695 call 0x11f088c0 */
  push32(0x11f0869au); f_11f088c0();
  /* 11f0869a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0869d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f086a1 jge 0x11f086e9 */
  if ((C.sf==C.of)) goto L_11f086e9;
  /* 11f086a3 push 0x11f2b484 */
  push32((uint32_t)(0x11f2b484u));
  /* 11f086a8 mov ecx, dword ptr [0x11f2e8c4] */
  ECX = (r32((uint32_t)(0x11f2e8c4)));
  /* 11f086ae push ecx */
  push32((uint32_t)(ECX));
  /* 11f086af call 0x11f001e0 */
  push32(0x11f086b4u); f_11f001e0();
  /* 11f086b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f086b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f086ba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f086bd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f086c0 mov eax, dword ptr [edx + 0x11f2e8c4] */
  EAX = (r32((uint32_t)(EDX + 0x11f2e8c4)));
  /* 11f086c6 push eax */
  push32((uint32_t)(EAX));
  /* 11f086c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f086ca imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f086cd mov edx, dword ptr [ecx + 0x11f2e8c4] */
  EDX = (r32((uint32_t)(ECX + 0x11f2e8c4)));
  /* 11f086d3 push edx */
  push32((uint32_t)(EDX));
  /* 11f086d4 call 0x11f04660 */
  push32(0x11f086d9u); f_11f04660();
  /* 11f086d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f086dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f086de je 0x11f086e7 */
  if (C.zf) goto L_11f086e7;
  /* 11f086e0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11f086e7:;
  /* 11f086e7 jmp 0x11f08717 */
  goto L_11f08717;
L_11f086e9:;
  /* 11f086e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f086ed jne 0x11f086f6 */
  if (!C.zf) goto L_11f086f6;
  /* 11f086ef mov eax, dword ptr [0x11f2e8c4] */
  EAX = (r32((uint32_t)(0x11f2e8c4)));
  /* 11f086f4 jmp 0x11f0871c */
  goto L_11f0871c;
L_11f086f6:;
  /* 11f086f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f086f8 mov eax, dword ptr [0x11f2e8c4] */
  EAX = (r32((uint32_t)(0x11f2e8c4)));
  /* 11f086fd push eax */
  push32((uint32_t)(EAX));
  /* 11f086fe call 0x11efc550 */
  push32(0x11f08703u); f_11efc550();
  /* 11f08703 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08706 mov dword ptr [0x11f2e8c4], 0 */
  w32((uint32_t)(0x11f2e8c4), (0x0u));
  /* 11f08710 mov eax, dword ptr [0x11f2e8dc] */
  EAX = (r32((uint32_t)(0x11f2e8dc)));
  /* 11f08715 jmp 0x11f0871c */
  goto L_11f0871c;
L_11f08717:;
  /* 11f08717 jmp 0x11f08665 */
  goto L_11f08665;
L_11f0871c:;
  /* 11f0871c mov esp, ebp */
  ESP = (EBP);
  /* 11f0871e pop ebp */
  EBP = (pop32());
  /* 11f0871f ret  */
  ESPCHK(0x11f08620u, _esp0);
  ESP += 4; return;
}

/* FUN_10018720 @ 0x11f08720 (388 bytes, 115 insns) */
void f_11f08720(void) {
  FTRACE(0x11f08720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f08720 push ebp */
  push32((uint32_t)(EBP));
  /* 11f08721 mov ebp, esp */
  EBP = (ESP);
  /* 11f08723 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08729 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0872d jne 0x11f08736 */
  if (!C.zf) goto L_11f08736;
  /* 11f0872f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f08731 jmp 0x11f088a0 */
  goto L_11f088a0;
L_11f08736:;
  /* 11f08736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08739 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0873c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0873f jne 0x11f08790 */
  if (!C.zf) goto L_11f08790;
  /* 11f08741 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08744 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11f08748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0874a jne 0x11f08790 */
  if (!C.zf) goto L_11f08790;
  /* 11f0874c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0874f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11f08752 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08755 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11f08759 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0875d je 0x11f08779 */
  if (C.zf) goto L_11f08779;
  /* 11f0875f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f08762 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11f08767 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0876a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11f08770 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f08773 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11f08779:;
  /* 11f08779 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0877d je 0x11f08788 */
  if (C.zf) goto L_11f08788;
  /* 11f0877f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f08782 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11f08788:;
  /* 11f08788 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0878b jmp 0x11f088a0 */
  goto L_11f088a0;
L_11f08790:;
  /* 11f08790 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08793 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08794 push 0x11f2e83c */
  push32((uint32_t)(0x11f2e83cu));
  /* 11f08799 call 0x11f04660 */
  push32(0x11f0879eu); f_11f04660();
  /* 11f0879e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f087a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f087a3 je 0x11f08858 */
  if (C.zf) goto L_11f08858;
  /* 11f087a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f087ac push edx */
  push32((uint32_t)(EDX));
  /* 11f087ad push 0x11f2e7b8 */
  push32((uint32_t)(0x11f2e7b8u));
  /* 11f087b2 call 0x11f04660 */
  push32(0x11f087b7u); f_11f04660();
  /* 11f087b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f087ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f087bc je 0x11f08858 */
  if (C.zf) goto L_11f08858;
  /* 11f087c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f087c5 push eax */
  push32((uint32_t)(EAX));
  /* 11f087c6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11f087cc push ecx */
  push32((uint32_t)(ECX));
  /* 11f087cd call 0x11f08910 */
  push32(0x11f087d2u); f_11f08910();
  /* 11f087d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f087d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f087d7 je 0x11f087e0 */
  if (C.zf) goto L_11f087e0;
  /* 11f087d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f087db jmp 0x11f088a0 */
  goto L_11f088a0;
L_11f087e0:;
  /* 11f087e0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11f087e6 push edx */
  push32((uint32_t)(EDX));
  /* 11f087e7 push 0x11f309b4 */
  push32((uint32_t)(0x11f309b4u));
  /* 11f087ec lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11f087f2 push eax */
  push32((uint32_t)(EAX));
  /* 11f087f3 call 0x11f0c620 */
  push32(0x11f087f8u); f_11f0c620();
  /* 11f087f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f087fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f087fd jne 0x11f08806 */
  if (!C.zf) goto L_11f08806;
  /* 11f087ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f08801 jmp 0x11f088a0 */
  goto L_11f088a0;
L_11f08806:;
  /* 11f08806 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f08808 mov cx, word ptr [0x11f309b8] */
  CX = (r16((uint32_t)(0x11f309b8)));
  /* 11f0880f mov dword ptr [0x11f309bc], ecx */
  w32((uint32_t)(0x11f309bc), (ECX));
  /* 11f08815 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11f0881b push edx */
  push32((uint32_t)(EDX));
  /* 11f0881c push 0x11f2e83c */
  push32((uint32_t)(0x11f2e83cu));
  /* 11f08821 call 0x11f08a70 */
  push32(0x11f08826u); f_11f08a70();
  /* 11f08826 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08829 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0882c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0882f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f08831 je 0x11f08846 */
  if (C.zf) goto L_11f08846;
  /* 11f08833 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08836 push edx */
  push32((uint32_t)(EDX));
  /* 11f08837 push 0x11f2e7b8 */
  push32((uint32_t)(0x11f2e7b8u));
  /* 11f0883c call 0x11f001d0 */
  push32(0x11f08841u); f_11f001d0();
  /* 11f08841 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08844 jmp 0x11f08858 */
  goto L_11f08858;
L_11f08846:;
  /* 11f08846 push 0x11f2e83c */
  push32((uint32_t)(0x11f2e83cu));
  /* 11f0884b push 0x11f2e7b8 */
  push32((uint32_t)(0x11f2e7b8u));
  /* 11f08850 call 0x11f001d0 */
  push32(0x11f08855u); f_11f001d0();
  /* 11f08855 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f08858:;
  /* 11f08858 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0885c je 0x11f08871 */
  if (C.zf) goto L_11f08871;
  /* 11f0885e push 6 */
  push32((uint32_t)(0x6u));
  /* 11f08860 push 0x11f309b4 */
  push32((uint32_t)(0x11f309b4u));
  /* 11f08865 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f08868 push eax */
  push32((uint32_t)(EAX));
  /* 11f08869 call 0x11f05b60 */
  push32(0x11f0886eu); f_11f05b60();
  /* 11f0886e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f08871:;
  /* 11f08871 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08875 je 0x11f0888a */
  if (C.zf) goto L_11f0888a;
  /* 11f08877 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f08879 push 0x11f309bc */
  push32((uint32_t)(0x11f309bcu));
  /* 11f0887e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f08881 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08882 call 0x11f05b60 */
  push32(0x11f08887u); f_11f05b60();
  /* 11f08887 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0888a:;
  /* 11f0888a push 0x11f2e83c */
  push32((uint32_t)(0x11f2e83cu));
  /* 11f0888f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08892 push edx */
  push32((uint32_t)(EDX));
  /* 11f08893 call 0x11f001d0 */
  push32(0x11f08898u); f_11f001d0();
  /* 11f08898 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0889b mov eax, 0x11f2e83c */
  EAX = (0x11f2e83cu);
L_11f088a0:;
  /* 11f088a0 mov esp, ebp */
  ESP = (EBP);
  /* 11f088a2 pop ebp */
  EBP = (pop32());
  /* 11f088a3 ret  */
  ESPCHK(0x11f08720u, _esp0);
  ESP += 4; return;
}

/* FUN_100188b0 @ 0x11f088b0 (7 bytes, 5 insns) */
void f_11f088b0(void) {
  FTRACE(0x11f088b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f088b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f088b1 mov ebp, esp */
  EBP = (ESP);
  /* 11f088b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f088b5 pop ebp */
  EBP = (pop32());
  /* 11f088b6 ret  */
  ESPCHK(0x11f088b0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11f088c0 (79 bytes, 28 insns) */
void f_11f088c0(void) {
  FTRACE(0x11f088c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f088c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f088c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f088c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f088c6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11f088c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f088cc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f088d3 jmp 0x11f088de */
  goto L_11f088de;
L_11f088d5:;
  /* 11f088d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f088d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f088db mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11f088de:;
  /* 11f088de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f088e1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f088e4 jge 0x11f08904 */
  if ((C.sf==C.of)) goto L_11f08904;
  /* 11f088e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f088e9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f088ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f088ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f088f2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11f088f5 push edx */
  push32((uint32_t)(EDX));
  /* 11f088f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f088f9 push eax */
  push32((uint32_t)(EAX));
  /* 11f088fa call 0x11f001e0 */
  push32(0x11f088ffu); f_11f001e0();
  /* 11f088ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08902 jmp 0x11f088d5 */
  goto L_11f088d5;
L_11f08904:;
  /* 11f08904 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0890b mov esp, ebp */
  ESP = (EBP);
  /* 11f0890d pop ebp */
  EBP = (pop32());
  /* 11f0890e ret  */
  ESPCHK(0x11f088c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018910 @ 0x11f08910 (349 bytes, 122 insns) */
void f_11f08910(void) {
  FTRACE(0x11f08910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f08910 push ebp */
  push32((uint32_t)(EBP));
  /* 11f08911 mov ebp, esp */
  EBP = (ESP);
  /* 11f08913 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08916 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11f0891b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0891d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08920 push eax */
  push32((uint32_t)(EAX));
  /* 11f08921 call 0x11f01ed0 */
  push32(0x11f08926u); f_11f01ed0();
  /* 11f08926 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08929 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0892c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f0892f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f08931 jne 0x11f0893a */
  if (!C.zf) goto L_11f0893a;
  /* 11f08933 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f08935 jmp 0x11f08a69 */
  goto L_11f08a69;
L_11f0893a:;
  /* 11f0893a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0893d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f08940 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08943 jne 0x11f08970 */
  if (!C.zf) goto L_11f08970;
  /* 11f08945 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08948 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11f0894c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0894e je 0x11f08970 */
  if (C.zf) goto L_11f08970;
  /* 11f08950 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08953 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08956 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08957 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0895a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08960 push edx */
  push32((uint32_t)(EDX));
  /* 11f08961 call 0x11f001d0 */
  push32(0x11f08966u); f_11f001d0();
  /* 11f08966 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08969 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0896b jmp 0x11f08a69 */
  goto L_11f08a69;
L_11f08970:;
  /* 11f08970 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f08977 jmp 0x11f08982 */
  goto L_11f08982;
L_11f08979:;
  /* 11f08979 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0897c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0897f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f08982:;
  /* 11f08982 push 0x11f2b49c */
  push32((uint32_t)(0x11f2b49cu));
  /* 11f08987 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0898a push ecx */
  push32((uint32_t)(ECX));
  /* 11f0898b call 0x11f0c560 */
  push32(0x11f08990u); f_11f0c560();
  /* 11f08990 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08993 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f08996 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0899a jne 0x11f089a4 */
  if (!C.zf) goto L_11f089a4;
  /* 11f0899c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0899f jmp 0x11f08a69 */
  goto L_11f08a69;
L_11f089a4:;
  /* 11f089a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f089a7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f089aa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f089ac mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11f089af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f089b3 jne 0x11f089da */
  if (!C.zf) goto L_11f089da;
  /* 11f089b5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f089b9 jge 0x11f089da */
  if ((C.sf==C.of)) goto L_11f089da;
  /* 11f089bb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11f089bf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f089c2 je 0x11f089da */
  if (C.zf) goto L_11f089da;
  /* 11f089c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f089c7 push edx */
  push32((uint32_t)(EDX));
  /* 11f089c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f089cb push eax */
  push32((uint32_t)(EAX));
  /* 11f089cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f089cf push ecx */
  push32((uint32_t)(ECX));
  /* 11f089d0 call 0x11f00a40 */
  push32(0x11f089d5u); f_11f00a40();
  /* 11f089d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f089d8 jmp 0x11f08a40 */
  goto L_11f08a40;
L_11f089da:;
  /* 11f089da cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f089de jne 0x11f08a08 */
  if (!C.zf) goto L_11f08a08;
  /* 11f089e0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f089e4 jge 0x11f08a08 */
  if ((C.sf==C.of)) goto L_11f08a08;
  /* 11f089e6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11f089ea cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f089ed je 0x11f08a08 */
  if (C.zf) goto L_11f08a08;
  /* 11f089ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f089f2 push eax */
  push32((uint32_t)(EAX));
  /* 11f089f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f089f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f089f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f089fa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f089fd push edx */
  push32((uint32_t)(EDX));
  /* 11f089fe call 0x11f00a40 */
  push32(0x11f08a03u); f_11f00a40();
  /* 11f08a03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08a06 jmp 0x11f08a40 */
  goto L_11f08a40;
L_11f08a08:;
  /* 11f08a08 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08a0c jne 0x11f08a3b */
  if (!C.zf) goto L_11f08a3b;
  /* 11f08a0e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11f08a12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f08a14 je 0x11f08a1f */
  if (C.zf) goto L_11f08a1f;
  /* 11f08a16 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11f08a1a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08a1d jne 0x11f08a3b */
  if (!C.zf) goto L_11f08a3b;
L_11f08a1f:;
  /* 11f08a1f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f08a22 push edx */
  push32((uint32_t)(EDX));
  /* 11f08a23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08a26 push eax */
  push32((uint32_t)(EAX));
  /* 11f08a27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08a2a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08a30 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08a31 call 0x11f00a40 */
  push32(0x11f08a36u); f_11f00a40();
  /* 11f08a36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08a39 jmp 0x11f08a40 */
  goto L_11f08a40;
L_11f08a3b:;
  /* 11f08a3b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f08a3e jmp 0x11f08a69 */
  goto L_11f08a69;
L_11f08a40:;
  /* 11f08a40 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11f08a44 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08a47 jne 0x11f08a4b */
  if (!C.zf) goto L_11f08a4b;
  /* 11f08a49 jmp 0x11f08a67 */
  goto L_11f08a67;
L_11f08a4b:;
  /* 11f08a4b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11f08a4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f08a51 jne 0x11f08a55 */
  if (!C.zf) goto L_11f08a55;
  /* 11f08a53 jmp 0x11f08a67 */
  goto L_11f08a67;
L_11f08a55:;
  /* 11f08a55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f08a58 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08a5b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11f08a5f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f08a62 jmp 0x11f08979 */
  goto L_11f08979;
L_11f08a67:;
  /* 11f08a67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f08a69:;
  /* 11f08a69 mov esp, ebp */
  ESP = (EBP);
  /* 11f08a6b pop ebp */
  EBP = (pop32());
  /* 11f08a6c ret  */
  ESPCHK(0x11f08910u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11f08a70 (101 bytes, 36 insns) */
void f_11f08a70(void) {
  FTRACE(0x11f08a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f08a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11f08a71 mov ebp, esp */
  EBP = (ESP);
  /* 11f08a73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08a76 push eax */
  push32((uint32_t)(EAX));
  /* 11f08a77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08a7a push ecx */
  push32((uint32_t)(ECX));
  /* 11f08a7b call 0x11f001d0 */
  push32(0x11f08a80u); f_11f001d0();
  /* 11f08a80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08a83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08a86 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11f08a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f08a8c je 0x11f08aa8 */
  if (C.zf) goto L_11f08aa8;
  /* 11f08a8e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08a91 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08a94 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08a95 push 0x11f2b4a4 */
  push32((uint32_t)(0x11f2b4a4u));
  /* 11f08a9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f08a9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08a9f push edx */
  push32((uint32_t)(EDX));
  /* 11f08aa0 call 0x11f088c0 */
  push32(0x11f08aa5u); f_11f088c0();
  /* 11f08aa5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f08aa8:;
  /* 11f08aa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08aab movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11f08ab2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f08ab4 je 0x11f08ad3 */
  if (C.zf) goto L_11f08ad3;
  /* 11f08ab6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08ab9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08abf push edx */
  push32((uint32_t)(EDX));
  /* 11f08ac0 push 0x11f2b4a0 */
  push32((uint32_t)(0x11f2b4a0u));
  /* 11f08ac5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f08ac7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08aca push eax */
  push32((uint32_t)(EAX));
  /* 11f08acb call 0x11f088c0 */
  push32(0x11f08ad0u); f_11f088c0();
  /* 11f08ad0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f08ad3:;
  /* 11f08ad3 pop ebp */
  EBP = (pop32());
  /* 11f08ad4 ret  */
  ESPCHK(0x11f08a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10018ae0 @ 0x11f08ae0 (727 bytes, 263 insns) */
void f_11f08ae0(void) {
  FTRACE(0x11f08ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f08ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f08ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11f08ae3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11f08ae5 push 0x11f2b4a8 */
  push32((uint32_t)(0x11f2b4a8u));
  /* 11f08aea push 0x11f046ec */
  push32((uint32_t)(0x11f046ecu));
  /* 11f08aef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11f08af5 push eax */
  push32((uint32_t)(EAX));
  /* 11f08af6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11f08afd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08b00 push ebx */
  push32((uint32_t)(EBX));
  /* 11f08b01 push esi */
  push32((uint32_t)(ESI));
  /* 11f08b02 push edi */
  push32((uint32_t)(EDI));
  /* 11f08b03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f08b06 cmp dword ptr [0x11f309e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08b0d jne 0x11f08b66 */
  if (!C.zf) goto L_11f08b66;
  /* 11f08b0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08b13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f08b15 push 0x11f2b434 */
  push32((uint32_t)(0x11f2b434u));
  /* 11f08b1a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f08b1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08b21 call dword ptr [0x11f33354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33354))), 0x11f08b27u);
  /* 11f08b27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f08b29 je 0x11f08b37 */
  if (C.zf) goto L_11f08b37;
  /* 11f08b2b mov dword ptr [0x11f309e0], 1 */
  w32((uint32_t)(0x11f309e0), (0x1u));
  /* 11f08b35 jmp 0x11f08b66 */
  goto L_11f08b66;
L_11f08b37:;
  /* 11f08b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08b3b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f08b3d push 0x11f2b430 */
  push32((uint32_t)(0x11f2b430u));
  /* 11f08b42 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f08b47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08b49 call dword ptr [0x11f33358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33358))), 0x11f08b4fu);
  /* 11f08b4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f08b51 je 0x11f08b5f */
  if (C.zf) goto L_11f08b5f;
  /* 11f08b53 mov dword ptr [0x11f309e0], 2 */
  w32((uint32_t)(0x11f309e0), (0x2u));
  /* 11f08b5d jmp 0x11f08b66 */
  goto L_11f08b66;
L_11f08b5f:;
  /* 11f08b5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f08b61 jmp 0x11f08dd1 */
  goto L_11f08dd1;
L_11f08b66:;
  /* 11f08b66 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08b6a jle 0x11f08b7f */
  if ((C.zf||C.sf!=C.of)) goto L_11f08b7f;
  /* 11f08b6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f08b6f push eax */
  push32((uint32_t)(EAX));
  /* 11f08b70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f08b73 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08b74 call 0x11f08df0 */
  push32(0x11f08b79u); f_11f08df0();
  /* 11f08b79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08b7c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11f08b7f:;
  /* 11f08b7f cmp dword ptr [0x11f309e0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11f309e0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08b86 jne 0x11f08bab */
  if (!C.zf) goto L_11f08bab;
  /* 11f08b88 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f08b8b push edx */
  push32((uint32_t)(EDX));
  /* 11f08b8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f08b8f push eax */
  push32((uint32_t)(EAX));
  /* 11f08b90 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f08b93 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08b94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f08b97 push edx */
  push32((uint32_t)(EDX));
  /* 11f08b98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08b9b push eax */
  push32((uint32_t)(EAX));
  /* 11f08b9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08b9f push ecx */
  push32((uint32_t)(ECX));
  /* 11f08ba0 call dword ptr [0x11f33358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33358))), 0x11f08ba6u);
  /* 11f08ba6 jmp 0x11f08dd1 */
  goto L_11f08dd1;
L_11f08bab:;
  /* 11f08bab cmp dword ptr [0x11f309e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f309e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08bb2 jne 0x11f08dcf */
  if (!C.zf) goto L_11f08dcf;
  /* 11f08bb8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08bbc jne 0x11f08bc7 */
  if (!C.zf) goto L_11f08bc7;
  /* 11f08bbe mov edx, dword ptr [0x11f309d8] */
  EDX = (r32((uint32_t)(0x11f309d8)));
  /* 11f08bc4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11f08bc7:;
  /* 11f08bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08bc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08bcb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f08bce push eax */
  push32((uint32_t)(EAX));
  /* 11f08bcf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f08bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08bd3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11f08bd6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f08bd8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08bda and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11f08bdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08be0 push edx */
  push32((uint32_t)(EDX));
  /* 11f08be1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f08be4 push eax */
  push32((uint32_t)(EAX));
  /* 11f08be5 call dword ptr [0x11f33368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33368))), 0x11f08bebu);
  /* 11f08beb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f08bee cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08bf2 jne 0x11f08bfb */
  if (!C.zf) goto L_11f08bfb;
  /* 11f08bf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f08bf6 jmp 0x11f08dd1 */
  goto L_11f08dd1;
L_11f08bfb:;
  /* 11f08bfb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f08c02 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f08c05 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f08c07 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08c0a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f08c0c call 0x11f003c0 */
  push32(0x11f08c11u); f_11f003c0();
  /* 11f08c11 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11f08c14 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f08c17 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f08c1a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11f08c1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11f08c24 jmp 0x11f08c3d */
  goto L_11f08c3d;
  /* 11f08c26 mov eax, 1 */
  EAX = (0x1u);
  /* 11f08c2b ret  */
  ESPCHK(0x11f08ae0u, _esp0);
  ESP += 4; return;
  /* 11f08c2c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f08c2f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11f08c36 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f08c3d:;
  /* 11f08c3d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08c41 jne 0x11f08c4a */
  if (!C.zf) goto L_11f08c4a;
  /* 11f08c43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f08c45 jmp 0x11f08dd1 */
  goto L_11f08dd1;
L_11f08c4a:;
  /* 11f08c4a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f08c4d push edx */
  push32((uint32_t)(EDX));
  /* 11f08c4e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f08c51 push eax */
  push32((uint32_t)(EAX));
  /* 11f08c52 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f08c55 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08c56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f08c59 push edx */
  push32((uint32_t)(EDX));
  /* 11f08c5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f08c5c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f08c5f push eax */
  push32((uint32_t)(EAX));
  /* 11f08c60 call dword ptr [0x11f33368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33368))), 0x11f08c66u);
  /* 11f08c66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f08c68 jne 0x11f08c71 */
  if (!C.zf) goto L_11f08c71;
  /* 11f08c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f08c6c jmp 0x11f08dd1 */
  goto L_11f08dd1;
L_11f08c71:;
  /* 11f08c71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08c75 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f08c78 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08c79 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f08c7c push edx */
  push32((uint32_t)(EDX));
  /* 11f08c7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08c80 push eax */
  push32((uint32_t)(EAX));
  /* 11f08c81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08c84 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08c85 call dword ptr [0x11f33354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33354))), 0x11f08c8bu);
  /* 11f08c8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f08c8e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08c92 jne 0x11f08c9b */
  if (!C.zf) goto L_11f08c9b;
  /* 11f08c94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f08c96 jmp 0x11f08dd1 */
  goto L_11f08dd1;
L_11f08c9b:;
  /* 11f08c9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08c9e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11f08ca4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f08ca6 je 0x11f08ceb */
  if (C.zf) goto L_11f08ceb;
  /* 11f08ca8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08cac je 0x11f08ce6 */
  if (C.zf) goto L_11f08ce6;
  /* 11f08cae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f08cb1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08cb4 jle 0x11f08cbd */
  if ((C.zf||C.sf!=C.of)) goto L_11f08cbd;
  /* 11f08cb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f08cb8 jmp 0x11f08dd1 */
  goto L_11f08dd1;
L_11f08cbd:;
  /* 11f08cbd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f08cc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08cc1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f08cc4 push edx */
  push32((uint32_t)(EDX));
  /* 11f08cc5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f08cc8 push eax */
  push32((uint32_t)(EAX));
  /* 11f08cc9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f08ccc push ecx */
  push32((uint32_t)(ECX));
  /* 11f08ccd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08cd0 push edx */
  push32((uint32_t)(EDX));
  /* 11f08cd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08cd4 push eax */
  push32((uint32_t)(EAX));
  /* 11f08cd5 call dword ptr [0x11f33354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33354))), 0x11f08cdbu);
  /* 11f08cdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f08cdd jne 0x11f08ce6 */
  if (!C.zf) goto L_11f08ce6;
  /* 11f08cdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f08ce1 jmp 0x11f08dd1 */
  goto L_11f08dd1;
L_11f08ce6:;
  /* 11f08ce6 jmp 0x11f08dca */
  goto L_11f08dca;
L_11f08ceb:;
  /* 11f08ceb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f08cee mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11f08cf1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f08cf8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f08cfb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f08cfd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08d00 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11f08d02 call 0x11f003c0 */
  push32(0x11f08d07u); f_11f003c0();
  /* 11f08d07 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11f08d0a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11f08d0d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f08d10 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11f08d13 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11f08d1a jmp 0x11f08d33 */
  goto L_11f08d33;
  /* 11f08d1c mov eax, 1 */
  EAX = (0x1u);
  /* 11f08d21 ret  */
  ESPCHK(0x11f08ae0u, _esp0);
  ESP += 4; return;
  /* 11f08d22 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11f08d25 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11f08d2c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11f08d33:;
  /* 11f08d33 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08d37 jne 0x11f08d40 */
  if (!C.zf) goto L_11f08d40;
  /* 11f08d39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f08d3b jmp 0x11f08dd1 */
  goto L_11f08dd1;
L_11f08d40:;
  /* 11f08d40 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f08d43 push eax */
  push32((uint32_t)(EAX));
  /* 11f08d44 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f08d47 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08d48 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f08d4b push edx */
  push32((uint32_t)(EDX));
  /* 11f08d4c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f08d4f push eax */
  push32((uint32_t)(EAX));
  /* 11f08d50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08d53 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08d54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08d57 push edx */
  push32((uint32_t)(EDX));
  /* 11f08d58 call dword ptr [0x11f33354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33354))), 0x11f08d5eu);
  /* 11f08d5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f08d60 jne 0x11f08d66 */
  if (!C.zf) goto L_11f08d66;
  /* 11f08d62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f08d64 jmp 0x11f08dd1 */
  goto L_11f08dd1;
L_11f08d66:;
  /* 11f08d66 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08d6a jne 0x11f08d9a */
  if (!C.zf) goto L_11f08d9a;
  /* 11f08d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08d74 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f08d77 push eax */
  push32((uint32_t)(EAX));
  /* 11f08d78 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f08d7b push ecx */
  push32((uint32_t)(ECX));
  /* 11f08d7c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f08d81 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f08d84 push edx */
  push32((uint32_t)(EDX));
  /* 11f08d85 call dword ptr [0x11f333b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b0))), 0x11f08d8bu);
  /* 11f08d8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f08d8e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08d92 jne 0x11f08d98 */
  if (!C.zf) goto L_11f08d98;
  /* 11f08d94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f08d96 jmp 0x11f08dd1 */
  goto L_11f08dd1;
L_11f08d98:;
  /* 11f08d98 jmp 0x11f08dca */
  goto L_11f08dca;
L_11f08d9a:;
  /* 11f08d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08d9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f08d9e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f08da1 push eax */
  push32((uint32_t)(EAX));
  /* 11f08da2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f08da5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08da6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f08da9 push edx */
  push32((uint32_t)(EDX));
  /* 11f08daa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f08dad push eax */
  push32((uint32_t)(EAX));
  /* 11f08dae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f08db3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11f08db6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08db7 call dword ptr [0x11f333b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b0))), 0x11f08dbdu);
  /* 11f08dbd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f08dc0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08dc4 jne 0x11f08dca */
  if (!C.zf) goto L_11f08dca;
  /* 11f08dc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f08dc8 jmp 0x11f08dd1 */
  goto L_11f08dd1;
L_11f08dca:;
  /* 11f08dca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f08dcd jmp 0x11f08dd1 */
  goto L_11f08dd1;
L_11f08dcf:;
  /* 11f08dcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f08dd1:;
  /* 11f08dd1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11f08dd4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f08dd7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11f08dde pop edi */
  EDI = (pop32());
  /* 11f08ddf pop esi */
  ESI = (pop32());
  /* 11f08de0 pop ebx */
  EBX = (pop32());
  /* 11f08de1 mov esp, ebp */
  ESP = (EBP);
  /* 11f08de3 pop ebp */
  EBP = (pop32());
  /* 11f08de4 ret  */
  ESPCHK(0x11f08ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018df0 @ 0x11f08df0 (80 bytes, 32 insns) */
void f_11f08df0(void) {
  FTRACE(0x11f08df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f08df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f08df1 mov ebp, esp */
  EBP = (ESP);
  /* 11f08df3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08df6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08df9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f08dfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08dff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f08e02:;
  /* 11f08e02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f08e05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f08e08 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08e0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f08e0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f08e10 je 0x11f08e27 */
  if (C.zf) goto L_11f08e27;
  /* 11f08e12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f08e15 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f08e18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f08e1a je 0x11f08e27 */
  if (C.zf) goto L_11f08e27;
  /* 11f08e1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f08e1f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08e22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f08e25 jmp 0x11f08e02 */
  goto L_11f08e02;
L_11f08e27:;
  /* 11f08e27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f08e2a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f08e2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f08e2f jne 0x11f08e39 */
  if (!C.zf) goto L_11f08e39;
  /* 11f08e31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f08e34 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08e37 jmp 0x11f08e3c */
  goto L_11f08e3c;
L_11f08e39:;
  /* 11f08e39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11f08e3c:;
  /* 11f08e3c mov esp, ebp */
  ESP = (EBP);
  /* 11f08e3e pop ebp */
  EBP = (pop32());
  /* 11f08e3f ret  */
  ESPCHK(0x11f08df0u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x11f08e40 (62 bytes, 23 insns) */
void f_11f08e40(void) {
  FTRACE(0x11f08e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f08e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11f08e41 mov ebp, esp */
  EBP = (ESP);
  /* 11f08e43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08e46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f08e4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08e50 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08e53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f08e56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f08e59 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08e5c jb 0x11f08e66 */
  if (C.cf) goto L_11f08e66;
  /* 11f08e5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f08e61 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08e64 jae 0x11f08e6f */
  if (!C.cf) goto L_11f08e6f;
L_11f08e66:;
  /* 11f08e66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f08e69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08e6c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f08e6f:;
  /* 11f08e6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f08e72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f08e75 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f08e77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f08e7a mov esp, ebp */
  ESP = (EBP);
  /* 11f08e7c pop ebp */
  EBP = (pop32());
  /* 11f08e7d ret  */
  ESPCHK(0x11f08e40u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11f08e80 (173 bytes, 66 insns) */
void f_11f08e80(void) {
  FTRACE(0x11f08e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f08e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11f08e81 mov ebp, esp */
  EBP = (ESP);
  /* 11f08e83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08e86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08e89 push eax */
  push32((uint32_t)(EAX));
  /* 11f08e8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08e8d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f08e8f push edx */
  push32((uint32_t)(EDX));
  /* 11f08e90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08e93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f08e95 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08e96 call 0x11f08e40 */
  push32(0x11f08e9bu); f_11f08e40();
  /* 11f08e9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08e9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f08ea1 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08ea5 je 0x11f08ed7 */
  if (C.zf) goto L_11f08ed7;
  /* 11f08ea7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08eaa add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08ead push edx */
  push32((uint32_t)(EDX));
  /* 11f08eae push 1 */
  push32((uint32_t)(0x1u));
  /* 11f08eb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08eb3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f08eb6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08eb7 call 0x11f08e40 */
  push32(0x11f08ebcu); f_11f08e40();
  /* 11f08ebc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08ebf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f08ec2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08ec6 je 0x11f08ed7 */
  if (C.zf) goto L_11f08ed7;
  /* 11f08ec8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08ecb mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f08ece add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08ed1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08ed4 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_11f08ed7:;
  /* 11f08ed7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08eda add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08edd push edx */
  push32((uint32_t)(EDX));
  /* 11f08ede mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08ee1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f08ee4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08ee5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08ee8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f08eeb push eax */
  push32((uint32_t)(EAX));
  /* 11f08eec call 0x11f08e40 */
  push32(0x11f08ef1u); f_11f08e40();
  /* 11f08ef1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08ef4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f08ef7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f08efb je 0x11f08f0c */
  if (C.zf) goto L_11f08f0c;
  /* 11f08efd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08f00 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f08f03 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08f06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08f09 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11f08f0c:;
  /* 11f08f0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08f0f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08f12 push ecx */
  push32((uint32_t)(ECX));
  /* 11f08f13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f08f16 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f08f19 push eax */
  push32((uint32_t)(EAX));
  /* 11f08f1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08f1d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f08f20 push edx */
  push32((uint32_t)(EDX));
  /* 11f08f21 call 0x11f08e40 */
  push32(0x11f08f26u); f_11f08e40();
  /* 11f08f26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f08f29 mov esp, ebp */
  ESP = (EBP);
  /* 11f08f2b pop ebp */
  EBP = (pop32());
  /* 11f08f2c ret  */
  ESPCHK(0x11f08e80u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x11f08f30 (96 bytes, 37 insns) */
void f_11f08f30(void) {
  FTRACE(0x11f08f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f08f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11f08f31 mov ebp, esp */
  EBP = (ESP);
  /* 11f08f33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08f36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08f39 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f08f3b and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f08f41 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f08f43 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08f45 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f08f47 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f08f4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08f4d mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f08f50 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f08f55 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f08f57 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08f59 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f08f5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f08f5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08f61 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f08f63 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f08f65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08f68 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f08f6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08f6d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f08f70 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f08f72 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11f08f75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08f78 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f08f7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08f7e mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f08f81 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f08f83 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11f08f86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08f89 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11f08f8c mov esp, ebp */
  ESP = (EBP);
  /* 11f08f8e pop ebp */
  EBP = (pop32());
  /* 11f08f8f ret  */
  ESPCHK(0x11f08f30u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x11f08f90 (99 bytes, 37 insns) */
void f_11f08f90(void) {
  FTRACE(0x11f08f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f08f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11f08f91 mov ebp, esp */
  EBP = (ESP);
  /* 11f08f93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08f96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08f99 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f08f9c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f08f9f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f08fa1 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08fa3 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f08fa9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f08fac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08faf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f08fb2 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11f08fb5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f08fb7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f08fb9 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f08fbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f08fc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08fc4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f08fc7 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f08fc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08fcc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11f08fcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08fd2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f08fd5 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f08fd7 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11f08fda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08fdd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f08fe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08fe3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f08fe5 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11f08fe7 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11f08fea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f08fed mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f08fef mov esp, ebp */
  ESP = (EBP);
  /* 11f08ff1 pop ebp */
  EBP = (pop32());
  /* 11f08ff2 ret  */
  ESPCHK(0x11f08f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10019000 @ 0x11f09000 (315 bytes, 101 insns) */
void f_11f09000(void) {
  FTRACE(0x11f09000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f09000 push ebp */
  push32((uint32_t)(EBP));
  /* 11f09001 mov ebp, esp */
  EBP = (ESP);
  /* 11f09003 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09006 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 11f0900c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0900f mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f09015 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f09018 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11f0901f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f09022 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11f09029 jmp 0x11f0903d */
  goto L_11f0903d;
L_11f0902b:;
  /* 11f0902b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0902e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09031 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11f09034 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f09037 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0903a mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11f0903d:;
  /* 11f0903d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09041 jbe 0x11f090b7 */
  if ((C.cf||C.zf)) goto L_11f090b7;
  /* 11f09043 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f09046 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f09048 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f0904b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11f0904e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f09051 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f09054 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f09057 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0905a push eax */
  push32((uint32_t)(EAX));
  /* 11f0905b call 0x11f08f30 */
  push32(0x11f09060u); f_11f08f30();
  /* 11f09060 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09063 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f09066 push ecx */
  push32((uint32_t)(ECX));
  /* 11f09067 call 0x11f08f30 */
  push32(0x11f0906cu); f_11f08f30();
  /* 11f0906c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0906f lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11f09072 push edx */
  push32((uint32_t)(EDX));
  /* 11f09073 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f09076 push eax */
  push32((uint32_t)(EAX));
  /* 11f09077 call 0x11f08e80 */
  push32(0x11f0907cu); f_11f08e80();
  /* 11f0907c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0907f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f09082 push ecx */
  push32((uint32_t)(ECX));
  /* 11f09083 call 0x11f08f30 */
  push32(0x11f09088u); f_11f08f30();
  /* 11f09088 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0908b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0908e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f09091 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f09094 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f0909b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f090a2 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11f090a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f090a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f090a9 push edx */
  push32((uint32_t)(EDX));
  /* 11f090aa call 0x11f08e80 */
  push32(0x11f090afu); f_11f08e80();
  /* 11f090af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f090b2 jmp 0x11f0902b */
  goto L_11f0902b;
L_11f090b7:;
  /* 11f090b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f090ba cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f090be jne 0x11f09103 */
  if (!C.zf) goto L_11f09103;
  /* 11f090c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f090c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f090c6 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11f090c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f090cc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11f090cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f090d2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f090d5 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11f090d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f090db mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f090dd shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11f090e0 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11f090e2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f090e5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f090e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f090eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f090ed shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11f090f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f090f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f090f5 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11f090f9 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11f090fd mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 11f09101 jmp 0x11f090b7 */
  goto L_11f090b7;
L_11f09103:;
  /* 11f09103 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f09106 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f09109 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0910e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f09110 jne 0x11f0912c */
  if (!C.zf) goto L_11f0912c;
  /* 11f09112 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f09115 push ecx */
  push32((uint32_t)(ECX));
  /* 11f09116 call 0x11f08f30 */
  push32(0x11f0911bu); f_11f08f30();
  /* 11f0911b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0911e mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 11f09122 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11f09126 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 11f0912a jmp 0x11f09103 */
  goto L_11f09103;
L_11f0912c:;
  /* 11f0912c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0912f mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11f09133 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 11f09137 mov esp, ebp */
  ESP = (EBP);
  /* 11f09139 pop ebp */
  EBP = (pop32());
  /* 11f0913a ret  */
  ESPCHK(0x11f09000u, _esp0);
  ESP += 4; return;
}

/* FUN_10019140 @ 0x11f09140 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_11f09140(void) {
  FTRACE(0x11f09140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f09140 push ebp */
  push32((uint32_t)(EBP));
  /* 11f09141 mov ebp, esp */
  EBP = (ESP);
  /* 11f09143 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09149 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11f0914c mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 11f0914f mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11f09155 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 11f0915c mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 11f09163 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 11f0916a mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f09171 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11f09178 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11f0917f mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 11f09186 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11f0918d mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 11f09194 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11f0919b mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11f091a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f091a5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f091a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f091ab mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11f091ae jmp 0x11f091b9 */
  goto L_11f091b9;
L_11f091b0:;
  /* 11f091b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f091b3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f091b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f091b9:;
  /* 11f091b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f091bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f091bf cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f091c2 je 0x11f091e5 */
  if (C.zf) goto L_11f091e5;
  /* 11f091c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f091c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f091ca cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f091cd je 0x11f091e5 */
  if (C.zf) goto L_11f091e5;
  /* 11f091cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f091d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f091d5 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f091d8 je 0x11f091e5 */
  if (C.zf) goto L_11f091e5;
  /* 11f091da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f091dd movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f091e0 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f091e3 jne 0x11f091e7 */
  if (!C.zf) goto L_11f091e7;
L_11f091e5:;
  /* 11f091e5 jmp 0x11f091b0 */
  goto L_11f091b0;
L_11f091e7:;
  /* 11f091e7 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f091eb je 0x11f09948 */
  if (C.zf) goto L_11f09948;
  /* 11f091f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f091f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f091f6 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11f091f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f091fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f091ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f09202 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11f09205 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 11f09208 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0920c ja 0x11f09943 */
  if ((!C.cf&&!C.zf)) goto L_11f09943;
  /* 11f09212 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 11f09215 jmp dword ptr [ecx*4 + 0x11f09b5a] */
  switch (ECX) {
    case 0: goto L_11f0921c;
    case 1: goto L_11f092ba;
    case 2: goto L_11f09370;
    case 3: goto L_11f093db;
    case 4: goto L_11f094f3;
    case 5: goto L_11f09625;
    case 6: goto L_11f0969b;
    case 7: goto L_11f09780;
    case 8: goto L_11f09722;
    case 9: goto L_11f097d3;
    case 10: goto L_11f09943;
    case 11: goto L_11f098df;
    case 12: goto L_11f09349;
    case 13: goto L_11f09337;
    case 14: goto L_11f09340;
    case 15: goto L_11f0935b;
    default: x86_unimpl("switch@0x11f09215 out of table"); return;
  }
L_11f0921c:;
  /* 11f0921c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f09220 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09223 jl 0x11f09240 */
  if ((C.sf!=C.of)) goto L_11f09240;
  /* 11f09225 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f09229 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0922c jg 0x11f09240 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f09240;
  /* 11f0922e mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11f09235 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f09238 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0923b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0923e jmp 0x11f092b5 */
  goto L_11f092b5;
L_11f09240:;
  /* 11f09240 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f09244 movsx eax, byte ptr [0x11f2e054] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11f2e054))));
  /* 11f0924b cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0924d jne 0x11f09258 */
  if (!C.zf) goto L_11f09258;
  /* 11f0924f mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11f09256 jmp 0x11f092b5 */
  goto L_11f092b5;
L_11f09258:;
  /* 11f09258 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11f0925b mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 11f09261 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f09268 je 0x11f09287 */
  if (C.zf) goto L_11f09287;
  /* 11f0926a cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f09271 je 0x11f09296 */
  if (C.zf) goto L_11f09296;
  /* 11f09273 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0927a je 0x11f0927e */
  if (C.zf) goto L_11f0927e;
  /* 11f0927c jmp 0x11f092a5 */
  goto L_11f092a5;
L_11f0927e:;
  /* 11f0927e mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11f09285 jmp 0x11f092b5 */
  goto L_11f092b5;
L_11f09287:;
  /* 11f09287 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11f0928e mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11f09294 jmp 0x11f092b5 */
  goto L_11f092b5;
L_11f09296:;
  /* 11f09296 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11f0929d mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 11f092a3 jmp 0x11f092b5 */
  goto L_11f092b5;
L_11f092a5:;
  /* 11f092a5 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11f092ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f092af sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f092b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f092b5:;
  /* 11f092b5 jmp 0x11f09943 */
  goto L_11f09943;
L_11f092ba:;
  /* 11f092ba mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11f092c1 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f092c5 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f092c8 jl 0x11f092e8 */
  if ((C.sf!=C.of)) goto L_11f092e8;
  /* 11f092ca movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f092ce cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f092d1 jg 0x11f092e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f092e8;
  /* 11f092d3 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11f092da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f092dd sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f092e0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f092e3 jmp 0x11f0936b */
  goto L_11f0936b;
L_11f092e8:;
  /* 11f092e8 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f092ec movsx ecx, byte ptr [0x11f2e054] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11f2e054))));
  /* 11f092f3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f092f5 jne 0x11f09300 */
  if (!C.zf) goto L_11f09300;
  /* 11f092f7 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11f092fe jmp 0x11f0936b */
  goto L_11f0936b;
L_11f09300:;
  /* 11f09300 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f09304 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 11f0930a mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 11f09310 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09313 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 11f09319 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09320 ja 0x11f0935b */
  if ((!C.cf&&!C.zf)) goto L_11f0935b;
  /* 11f09322 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 11f09328 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0932a mov cl, byte ptr [edx + 0x11f09b9a] */
  CL = (r8((uint32_t)(EDX + 0x11f09b9a)));
  /* 11f09330 jmp dword ptr [ecx*4 + 0x11f09b8a] */
  switch (ECX) {
    case 0: goto L_11f09349;
    case 1: goto L_11f09337;
    case 2: goto L_11f09340;
    case 3: goto L_11f0935b;
    default: x86_unimpl("switch@0x11f09330 out of table"); return;
  }
L_11f09337:;
  /* 11f09337 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11f0933e jmp 0x11f0936b */
  goto L_11f0936b;
L_11f09340:;
  /* 11f09340 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11f09347 jmp 0x11f0936b */
  goto L_11f0936b;
L_11f09349:;
  /* 11f09349 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0934c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0934f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f09352 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11f09359 jmp 0x11f0936b */
  goto L_11f0936b;
L_11f0935b:;
  /* 11f0935b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11f09362 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f09365 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09368 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f0936b:;
  /* 11f0936b jmp 0x11f09943 */
  goto L_11f09943;
L_11f09370:;
  /* 11f09370 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f09374 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09377 jl 0x11f09394 */
  if ((C.sf!=C.of)) goto L_11f09394;
  /* 11f09379 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f0937d cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09380 jg 0x11f09394 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f09394;
  /* 11f09382 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11f09389 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0938c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0938f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f09392 jmp 0x11f093d6 */
  goto L_11f093d6;
L_11f09394:;
  /* 11f09394 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f09398 movsx eax, byte ptr [0x11f2e054] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11f2e054))));
  /* 11f0939f cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f093a1 jne 0x11f093ac */
  if (!C.zf) goto L_11f093ac;
  /* 11f093a3 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11f093aa jmp 0x11f093d6 */
  goto L_11f093d6;
L_11f093ac:;
  /* 11f093ac mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11f093af mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 11f093b5 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f093bc je 0x11f093c0 */
  if (C.zf) goto L_11f093c0;
  /* 11f093be jmp 0x11f093c9 */
  goto L_11f093c9;
L_11f093c0:;
  /* 11f093c0 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11f093c7 jmp 0x11f093d6 */
  goto L_11f093d6;
L_11f093c9:;
  /* 11f093c9 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11f093d0 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11f093d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f093d6:;
  /* 11f093d6 jmp 0x11f09943 */
  goto L_11f09943;
L_11f093db:;
  /* 11f093db mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11f093e2 jmp 0x11f093f5 */
  goto L_11f093f5;
L_11f093e4:;
  /* 11f093e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f093e7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f093e9 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11f093ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f093ef add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f093f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f093f5:;
  /* 11f093f5 cmp dword ptr [0x11f2e050], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e050))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f093fc jle 0x11f09419 */
  if ((C.zf||C.sf!=C.of)) goto L_11f09419;
  /* 11f093fe push 4 */
  push32((uint32_t)(0x4u));
  /* 11f09400 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f09403 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f09408 push eax */
  push32((uint32_t)(EAX));
  /* 11f09409 call 0x11f01160 */
  push32(0x11f0940eu); f_11f01160();
  /* 11f0940e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09411 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11f09417 jmp 0x11f09437 */
  goto L_11f09437;
L_11f09419:;
  /* 11f09419 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f0941c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f09422 mov edx, dword ptr [0x11f2e05c] */
  EDX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f09428 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0942a mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11f0942e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11f09431 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_11f09437:;
  /* 11f09437 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0943e je 0x11f09474 */
  if (C.zf) goto L_11f09474;
  /* 11f09440 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09444 jae 0x11f09466 */
  if (!C.cf) goto L_11f09466;
  /* 11f09446 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 11f09449 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0944c mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 11f0944f movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f09453 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09456 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11f09459 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11f0945b mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11f0945e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09461 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11f09464 jmp 0x11f0946f */
  goto L_11f0946f;
L_11f09466:;
  /* 11f09466 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11f09469 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0946c mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11f0946f:;
  /* 11f0946f jmp 0x11f093e4 */
  goto L_11f093e4;
L_11f09474:;
  /* 11f09474 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f09478 movsx ecx, byte ptr [0x11f2e054] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11f2e054))));
  /* 11f0947f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09481 jne 0x11f0948c */
  if (!C.zf) goto L_11f0948c;
  /* 11f09483 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11f0948a jmp 0x11f094ee */
  goto L_11f094ee;
L_11f0948c:;
  /* 11f0948c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f09490 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 11f09496 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11f0949c sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0949f mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11f094a5 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f094ac ja 0x11f094de */
  if ((!C.cf&&!C.zf)) goto L_11f094de;
  /* 11f094ae mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11f094b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f094b6 mov cl, byte ptr [edx + 0x11f09be1] */
  CL = (r8((uint32_t)(EDX + 0x11f09be1)));
  /* 11f094bc jmp dword ptr [ecx*4 + 0x11f09bd5] */
  switch (ECX) {
    case 0: goto L_11f094cc;
    case 1: goto L_11f094c3;
    case 2: goto L_11f094de;
    default: x86_unimpl("switch@0x11f094bc out of table"); return;
  }
L_11f094c3:;
  /* 11f094c3 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11f094ca jmp 0x11f094ee */
  goto L_11f094ee;
L_11f094cc:;
  /* 11f094cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f094cf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f094d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f094d5 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11f094dc jmp 0x11f094ee */
  goto L_11f094ee;
L_11f094de:;
  /* 11f094de mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11f094e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f094e8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f094eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f094ee:;
  /* 11f094ee jmp 0x11f09943 */
  goto L_11f09943;
L_11f094f3:;
  /* 11f094f3 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11f094fa mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11f09501 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09505 jne 0x11f0952e */
  if (!C.zf) goto L_11f0952e;
  /* 11f09507 jmp 0x11f0951a */
  goto L_11f0951a;
L_11f09509:;
  /* 11f09509 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0950c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0950e mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11f09511 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f09514 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09517 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f0951a:;
  /* 11f0951a movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f0951e cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09521 jne 0x11f0952e */
  if (!C.zf) goto L_11f0952e;
  /* 11f09523 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11f09526 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09529 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11f0952c jmp 0x11f09509 */
  goto L_11f09509;
L_11f0952e:;
  /* 11f0952e jmp 0x11f09541 */
  goto L_11f09541;
L_11f09530:;
  /* 11f09530 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f09533 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f09535 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11f09538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0953b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0953e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f09541:;
  /* 11f09541 cmp dword ptr [0x11f2e050], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e050))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09548 jle 0x11f09566 */
  if ((C.zf||C.sf!=C.of)) goto L_11f09566;
  /* 11f0954a push 4 */
  push32((uint32_t)(0x4u));
  /* 11f0954c mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f0954f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f09555 push ecx */
  push32((uint32_t)(ECX));
  /* 11f09556 call 0x11f01160 */
  push32(0x11f0955bu); f_11f01160();
  /* 11f0955b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0955e mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 11f09564 jmp 0x11f09583 */
  goto L_11f09583;
L_11f09566:;
  /* 11f09566 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f09569 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0956f mov eax, dword ptr [0x11f2e05c] */
  EAX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f09574 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f09576 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11f0957a and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0957d mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_11f09583:;
  /* 11f09583 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0958a je 0x11f095be */
  if (C.zf) goto L_11f095be;
  /* 11f0958c cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09590 jae 0x11f095b9 */
  if (!C.cf) goto L_11f095b9;
  /* 11f09592 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11f09595 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09598 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11f0959b movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f0959f sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f095a2 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11f095a5 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11f095a7 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11f095aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f095ad mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11f095b0 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11f095b3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f095b6 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11f095b9:;
  /* 11f095b9 jmp 0x11f09530 */
  goto L_11f09530;
L_11f095be:;
  /* 11f095be movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f095c2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11f095c8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11f095ce sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f095d1 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 11f095d7 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f095de ja 0x11f09610 */
  if ((!C.cf&&!C.zf)) goto L_11f09610;
  /* 11f095e0 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11f095e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f095e8 mov al, byte ptr [ecx + 0x11f09c28] */
  AL = (r8((uint32_t)(ECX + 0x11f09c28)));
  /* 11f095ee jmp dword ptr [eax*4 + 0x11f09c1c] */
  switch (EAX) {
    case 0: goto L_11f095fe;
    case 1: goto L_11f095f5;
    case 2: goto L_11f09610;
    default: x86_unimpl("switch@0x11f095ee out of table"); return;
  }
L_11f095f5:;
  /* 11f095f5 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11f095fc jmp 0x11f09620 */
  goto L_11f09620;
L_11f095fe:;
  /* 11f095fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f09601 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09604 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f09607 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11f0960e jmp 0x11f09620 */
  goto L_11f09620;
L_11f09610:;
  /* 11f09610 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11f09617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0961a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0961d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f09620:;
  /* 11f09620 jmp 0x11f09943 */
  goto L_11f09943;
L_11f09625:;
  /* 11f09625 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11f0962c cmp dword ptr [0x11f2e050], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e050))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09633 jle 0x11f09651 */
  if ((C.zf||C.sf!=C.of)) goto L_11f09651;
  /* 11f09635 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f09637 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f0963a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f09640 push ecx */
  push32((uint32_t)(ECX));
  /* 11f09641 call 0x11f01160 */
  push32(0x11f09646u); f_11f01160();
  /* 11f09646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09649 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11f0964f jmp 0x11f0966e */
  goto L_11f0966e;
L_11f09651:;
  /* 11f09651 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f09654 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0965a mov eax, dword ptr [0x11f2e05c] */
  EAX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f0965f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f09661 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11f09665 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11f09668 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_11f0966e:;
  /* 11f0966e cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09675 je 0x11f09689 */
  if (C.zf) goto L_11f09689;
  /* 11f09677 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11f0967e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f09681 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09684 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f09687 jmp 0x11f09696 */
  goto L_11f09696;
L_11f09689:;
  /* 11f09689 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11f09690 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11f09693 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f09696:;
  /* 11f09696 jmp 0x11f09943 */
  goto L_11f09943;
L_11f0969b:;
  /* 11f0969b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0969e sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f096a1 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11f096a4 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f096a8 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f096ab jl 0x11f096c8 */
  if ((C.sf!=C.of)) goto L_11f096c8;
  /* 11f096ad movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f096b1 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f096b4 jg 0x11f096c8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f096c8;
  /* 11f096b6 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11f096bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f096c0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f096c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f096c6 jmp 0x11f0971d */
  goto L_11f0971d;
L_11f096c8:;
  /* 11f096c8 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11f096cb mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 11f096d1 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f096d8 je 0x11f09707 */
  if (C.zf) goto L_11f09707;
  /* 11f096da cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f096e1 je 0x11f096f7 */
  if (C.zf) goto L_11f096f7;
  /* 11f096e3 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f096ea je 0x11f096ee */
  if (C.zf) goto L_11f096ee;
  /* 11f096ec jmp 0x11f09710 */
  goto L_11f09710;
L_11f096ee:;
  /* 11f096ee mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11f096f5 jmp 0x11f0971d */
  goto L_11f0971d;
L_11f096f7:;
  /* 11f096f7 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11f096fe mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11f09705 jmp 0x11f0971d */
  goto L_11f0971d;
L_11f09707:;
  /* 11f09707 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11f0970e jmp 0x11f0971d */
  goto L_11f0971d;
L_11f09710:;
  /* 11f09710 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11f09717 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11f0971a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f0971d:;
  /* 11f0971d jmp 0x11f09943 */
  goto L_11f09943;
L_11f09722:;
  /* 11f09722 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11f09729 jmp 0x11f0973c */
  goto L_11f0973c;
L_11f0972b:;
  /* 11f0972b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0972e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f09730 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11f09733 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f09736 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f0973c:;
  /* 11f0973c movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f09740 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09743 jne 0x11f09747 */
  if (!C.zf) goto L_11f09747;
  /* 11f09745 jmp 0x11f0972b */
  goto L_11f0972b;
L_11f09747:;
  /* 11f09747 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f0974b cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0974e jl 0x11f0976b */
  if ((C.sf!=C.of)) goto L_11f0976b;
  /* 11f09750 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f09754 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09757 jg 0x11f0976b */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0976b;
  /* 11f09759 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11f09760 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f09763 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09766 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f09769 jmp 0x11f0977b */
  goto L_11f0977b;
L_11f0976b:;
  /* 11f0976b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11f09772 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f09775 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09778 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f0977b:;
  /* 11f0977b jmp 0x11f09943 */
  goto L_11f09943;
L_11f09780:;
  /* 11f09780 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f09784 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09787 jl 0x11f097a4 */
  if ((C.sf!=C.of)) goto L_11f097a4;
  /* 11f09789 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f0978d cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09790 jg 0x11f097a4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f097a4;
  /* 11f09792 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11f09799 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0979c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0979f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f097a2 jmp 0x11f097ce */
  goto L_11f097ce;
L_11f097a4:;
  /* 11f097a4 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11f097a7 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 11f097ad cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f097b4 je 0x11f097b8 */
  if (C.zf) goto L_11f097b8;
  /* 11f097b6 jmp 0x11f097c1 */
  goto L_11f097c1;
L_11f097b8:;
  /* 11f097b8 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11f097bf jmp 0x11f097ce */
  goto L_11f097ce;
L_11f097c1:;
  /* 11f097c1 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11f097c8 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11f097cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f097ce:;
  /* 11f097ce jmp 0x11f09943 */
  goto L_11f09943;
L_11f097d3:;
  /* 11f097d3 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11f097da mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 11f097e1 jmp 0x11f097f4 */
  goto L_11f097f4;
L_11f097e3:;
  /* 11f097e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f097e6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f097e8 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11f097eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f097ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f097f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f097f4:;
  /* 11f097f4 cmp dword ptr [0x11f2e050], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e050))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f097fb jle 0x11f09819 */
  if ((C.zf||C.sf!=C.of)) goto L_11f09819;
  /* 11f097fd push 4 */
  push32((uint32_t)(0x4u));
  /* 11f097ff mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f09802 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f09808 push edx */
  push32((uint32_t)(EDX));
  /* 11f09809 call 0x11f01160 */
  push32(0x11f0980eu); f_11f01160();
  /* 11f0980e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09811 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11f09817 jmp 0x11f09836 */
  goto L_11f09836;
L_11f09819:;
  /* 11f09819 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f0981c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f09821 mov ecx, dword ptr [0x11f2e05c] */
  ECX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f09827 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f09829 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11f0982d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f09830 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_11f09836:;
  /* 11f09836 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0983d je 0x11f09867 */
  if (C.zf) goto L_11f09867;
  /* 11f0983f mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f09842 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f09845 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11f09849 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11f0984d mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 11f09850 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09857 jle 0x11f09862 */
  if ((C.zf||C.sf!=C.of)) goto L_11f09862;
  /* 11f09859 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 11f09860 jmp 0x11f09867 */
  goto L_11f09867;
L_11f09862:;
  /* 11f09862 jmp 0x11f097e3 */
  goto L_11f097e3;
L_11f09867:;
  /* 11f09867 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11f0986a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f0986d jmp 0x11f09880 */
  goto L_11f09880;
L_11f0986f:;
  /* 11f0986f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f09872 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f09874 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11f09877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0987a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0987d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f09880:;
  /* 11f09880 cmp dword ptr [0x11f2e050], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e050))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09887 jle 0x11f098a5 */
  if ((C.zf||C.sf!=C.of)) goto L_11f098a5;
  /* 11f09889 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f0988b mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f0988e and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f09894 push ecx */
  push32((uint32_t)(ECX));
  /* 11f09895 call 0x11f01160 */
  push32(0x11f0989au); f_11f01160();
  /* 11f0989a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0989d mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11f098a3 jmp 0x11f098c2 */
  goto L_11f098c2;
L_11f098a5:;
  /* 11f098a5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f098a8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f098ae mov eax, dword ptr [0x11f2e05c] */
  EAX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f098b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f098b5 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11f098b9 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11f098bc mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_11f098c2:;
  /* 11f098c2 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f098c9 je 0x11f098cd */
  if (C.zf) goto L_11f098cd;
  /* 11f098cb jmp 0x11f0986f */
  goto L_11f0986f;
L_11f098cd:;
  /* 11f098cd mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11f098d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f098d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f098da mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f098dd jmp 0x11f09943 */
  goto L_11f09943;
L_11f098df:;
  /* 11f098df cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f098e3 je 0x11f09933 */
  if (C.zf) goto L_11f09933;
  /* 11f098e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f098e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f098eb mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 11f098ee mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11f098f1 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 11f098f7 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f098fe je 0x11f0991b */
  if (C.zf) goto L_11f0991b;
  /* 11f09900 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f09907 je 0x11f0990b */
  if (C.zf) goto L_11f0990b;
  /* 11f09909 jmp 0x11f09924 */
  goto L_11f09924;
L_11f0990b:;
  /* 11f0990b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11f09912 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11f09919 jmp 0x11f09931 */
  goto L_11f09931;
L_11f0991b:;
  /* 11f0991b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11f09922 jmp 0x11f09931 */
  goto L_11f09931;
L_11f09924:;
  /* 11f09924 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11f0992b mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11f0992e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f09931:;
  /* 11f09931 jmp 0x11f09943 */
  goto L_11f09943;
L_11f09933:;
  /* 11f09933 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11f0993a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0993d sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09940 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f09943:;
  /* 11f09943 jmp 0x11f091e7 */
  goto L_11f091e7;
L_11f09948:;
  /* 11f09948 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0994b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0994e mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f09950 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09954 je 0x11f09a97 */
  if (C.zf) goto L_11f09a97;
  /* 11f0995a cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0995e jne 0x11f09a97 */
  if (!C.zf) goto L_11f09a97;
  /* 11f09964 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09968 jne 0x11f09a97 */
  if (!C.zf) goto L_11f09a97;
  /* 11f0996e cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09972 jbe 0x11f0999f */
  if ((C.cf||C.zf)) goto L_11f0999f;
  /* 11f09974 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 11f09978 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0997b jl 0x11f09986 */
  if ((C.sf!=C.of)) goto L_11f09986;
  /* 11f0997d mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 11f09980 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f09983 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_11f09986:;
  /* 11f09986 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 11f0998d mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11f09990 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09993 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11f09996 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11f09999 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0999c mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11f0999f:;
  /* 11f0999f cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f099a3 jbe 0x11f09a7a */
  if ((C.cf||C.zf)) goto L_11f09a7a;
  /* 11f099a9 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11f099ac sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f099af mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11f099b2 jmp 0x11f099bd */
  goto L_11f099bd;
L_11f099b4:;
  /* 11f099b4 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11f099b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f099ba mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_11f099bd:;
  /* 11f099bd mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11f099c0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f099c3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f099c5 jne 0x11f099db */
  if (!C.zf) goto L_11f099db;
  /* 11f099c7 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11f099ca sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f099cd mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11f099d0 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11f099d3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f099d6 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11f099d9 jmp 0x11f099b4 */
  goto L_11f099b4;
L_11f099db:;
  /* 11f099db lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11f099de push ecx */
  push32((uint32_t)(ECX));
  /* 11f099df mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11f099e2 push edx */
  push32((uint32_t)(EDX));
  /* 11f099e3 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11f099e6 push eax */
  push32((uint32_t)(EAX));
  /* 11f099e7 call 0x11f09000 */
  push32(0x11f099ecu); f_11f09000();
  /* 11f099ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f099ef cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f099f3 jge 0x11f099fd */
  if ((C.sf==C.of)) goto L_11f099fd;
  /* 11f099f5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f099f8 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f099fa mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11f099fd:;
  /* 11f099fd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f09a00 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09a03 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11f09a06 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09a0a jne 0x11f09a15 */
  if (!C.zf) goto L_11f09a15;
  /* 11f09a0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f09a0f add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09a12 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11f09a15:;
  /* 11f09a15 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09a19 jne 0x11f09a24 */
  if (!C.zf) goto L_11f09a24;
  /* 11f09a1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f09a1e sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09a21 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11f09a24:;
  /* 11f09a24 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09a2b jle 0x11f09a36 */
  if ((C.zf||C.sf!=C.of)) goto L_11f09a36;
  /* 11f09a2d mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 11f09a34 jmp 0x11f09a78 */
  goto L_11f09a78;
L_11f09a36:;
  /* 11f09a36 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09a3d jge 0x11f09a48 */
  if ((C.sf==C.of)) goto L_11f09a48;
  /* 11f09a3f mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 11f09a46 jmp 0x11f09a78 */
  goto L_11f09a78;
L_11f09a48:;
  /* 11f09a48 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f09a4b push edx */
  push32((uint32_t)(EDX));
  /* 11f09a4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f09a4f push eax */
  push32((uint32_t)(EAX));
  /* 11f09a50 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11f09a53 push ecx */
  push32((uint32_t)(ECX));
  /* 11f09a54 call 0x11f0d800 */
  push32(0x11f09a59u); f_11f0d800();
  /* 11f09a59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09a5c mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 11f09a60 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 11f09a64 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 11f09a67 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f09a6a mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 11f09a6d mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f09a70 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 11f09a74 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_11f09a78:;
  /* 11f09a78 jmp 0x11f09a97 */
  goto L_11f09a97;
L_11f09a7a:;
  /* 11f09a7a mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11f09a80 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11f09a86 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11f09a89 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f09a8e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f09a91 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f09a94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11f09a97:;
  /* 11f09a97 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09a9b jne 0x11f09ac6 */
  if (!C.zf) goto L_11f09ac6;
  /* 11f09a9d mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11f09aa3 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11f09aa9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11f09aac and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f09ab2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11f09ab5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f09ab8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f09abb mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11f09abe or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11f09ac1 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11f09ac4 jmp 0x11f09b1d */
  goto L_11f09b1d;
L_11f09ac6:;
  /* 11f09ac6 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09aca je 0x11f09af1 */
  if (C.zf) goto L_11f09af1;
  /* 11f09acc mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 11f09ad2 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11f09ad9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f09ae0 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11f09ae6 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11f09ae9 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11f09aec mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 11f09aef jmp 0x11f09b1d */
  goto L_11f09b1d;
L_11f09af1:;
  /* 11f09af1 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09af5 je 0x11f09b1d */
  if (C.zf) goto L_11f09b1d;
  /* 11f09af7 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11f09afd mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11f09b03 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11f09b06 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f09b0b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f09b0e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f09b11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f09b14 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11f09b17 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11f09b1a mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_11f09b1d:;
  /* 11f09b1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f09b20 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 11f09b24 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11f09b27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f09b2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f09b2d mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11f09b30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f09b33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f09b36 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11f09b39 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11f09b3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f09b41 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f09b44 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f09b4a or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11f09b4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f09b4f mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 11f09b53 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11f09b56 mov esp, ebp */
  ESP = (EBP);
  /* 11f09b58 pop ebp */
  EBP = (pop32());
  /* 11f09b59 ret  */
  ESPCHK(0x11f09140u, _esp0);
  ESP += 4; return;
}

/* FUN_10019c70 @ 0x11f09c70 (79 bytes, 33 insns) */
void f_11f09c70(void) {
  FTRACE(0x11f09c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f09c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11f09c71 mov ebp, esp */
  EBP = (ESP);
  /* 11f09c73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f09c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f09c7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f09c7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f09c7f push eax */
  push32((uint32_t)(EAX));
  /* 11f09c80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f09c83 push ecx */
  push32((uint32_t)(ECX));
  /* 11f09c84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f09c87 push edx */
  push32((uint32_t)(EDX));
  /* 11f09c88 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11f09c8b push eax */
  push32((uint32_t)(EAX));
  /* 11f09c8c call 0x11f09140 */
  push32(0x11f09c91u); f_11f09140();
  /* 11f09c91 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09c94 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f09c97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f09c9a push ecx */
  push32((uint32_t)(ECX));
  /* 11f09c9b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11f09c9e push edx */
  push32((uint32_t)(EDX));
  /* 11f09c9f call 0x11f01a60 */
  push32(0x11f09ca4u); f_11f01a60();
  /* 11f09ca4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09ca7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f09caa cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09cae jne 0x11f09cb8 */
  if (!C.zf) goto L_11f09cb8;
  /* 11f09cb0 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f09cb3 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11f09cb5 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11f09cb8:;
  /* 11f09cb8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f09cbb mov esp, ebp */
  ESP = (EBP);
  /* 11f09cbd pop ebp */
  EBP = (pop32());
  /* 11f09cbe ret  */
  ESPCHK(0x11f09c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10019cc0 @ 0x11f09cc0 (1302 bytes, 386 insns) */
void f_11f09cc0(void) {
  FTRACE(0x11f09cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f09cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f09cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11f09cc3 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09cc6 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 11f09ccc mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 11f09cd2 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 11f09cd8 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 11f09cdf mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 11f09ce3 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 11f09ce7 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 11f09ceb mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 11f09cef mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 11f09cf3 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 11f09cf7 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 11f09cfb mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 11f09cff mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 11f09d03 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 11f09d07 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 11f09d0b mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 11f09d0f mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 11f09d16 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 11f09d1a mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 11f09d1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f09d21 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11f09d24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f09d27 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 11f09d2a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11f09d2d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f09d32 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11f09d37 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 11f09d3b mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 11f09d3f and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11f09d44 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 11f09d48 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11f09d4b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f09d51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f09d53 je 0x11f09d5e */
  if (C.zf) goto L_11f09d5e;
  /* 11f09d55 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09d58 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 11f09d5c jmp 0x11f09d65 */
  goto L_11f09d65;
L_11f09d5e:;
  /* 11f09d5e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09d61 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_11f09d65:;
  /* 11f09d65 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11f09d68 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f09d6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f09d70 jne 0x11f09dac */
  if (!C.zf) goto L_11f09dac;
  /* 11f09d72 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09d76 jne 0x11f09dac */
  if (!C.zf) goto L_11f09dac;
  /* 11f09d78 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09d7c jne 0x11f09dac */
  if (!C.zf) goto L_11f09dac;
  /* 11f09d7e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09d81 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11f09d86 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09d89 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 11f09d8d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09d90 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 11f09d94 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09d97 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 11f09d9b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09d9e mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 11f09da2 mov eax, 1 */
  EAX = (0x1u);
  /* 11f09da7 jmp 0x11f0a1d2 */
  goto L_11f0a1d2;
L_11f09dac:;
  /* 11f09dac mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11f09daf and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f09db5 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09dbb jne 0x11f09ea6 */
  if (!C.zf) goto L_11f09ea6;
  /* 11f09dc1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09dc4 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 11f09dc9 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09dd0 jne 0x11f09dd8 */
  if (!C.zf) goto L_11f09dd8;
  /* 11f09dd2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09dd6 je 0x11f09e0c */
  if (C.zf) goto L_11f09e0c;
L_11f09dd8:;
  /* 11f09dd8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f09ddb and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11f09de1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f09de3 jne 0x11f09e0c */
  if (!C.zf) goto L_11f09e0c;
  /* 11f09de5 push 0x11f2b4d8 */
  push32((uint32_t)(0x11f2b4d8u));
  /* 11f09dea mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09ded add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09df0 push edx */
  push32((uint32_t)(EDX));
  /* 11f09df1 call 0x11f001d0 */
  push32(0x11f09df6u); f_11f001d0();
  /* 11f09df6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09df9 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09dfc mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 11f09e00 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11f09e07 jmp 0x11f09ea1 */
  goto L_11f09ea1;
L_11f09e0c:;
  /* 11f09e0c mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11f09e0f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f09e15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f09e17 je 0x11f09e4c */
  if (C.zf) goto L_11f09e4c;
  /* 11f09e19 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09e20 jne 0x11f09e4c */
  if (!C.zf) goto L_11f09e4c;
  /* 11f09e22 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09e26 jne 0x11f09e4c */
  if (!C.zf) goto L_11f09e4c;
  /* 11f09e28 push 0x11f2b4d0 */
  push32((uint32_t)(0x11f2b4d0u));
  /* 11f09e2d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09e30 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09e33 push edx */
  push32((uint32_t)(EDX));
  /* 11f09e34 call 0x11f001d0 */
  push32(0x11f09e39u); f_11f001d0();
  /* 11f09e39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09e3c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09e3f mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 11f09e43 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11f09e4a jmp 0x11f09ea1 */
  goto L_11f09ea1;
L_11f09e4c:;
  /* 11f09e4c cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09e53 jne 0x11f09e7f */
  if (!C.zf) goto L_11f09e7f;
  /* 11f09e55 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09e59 jne 0x11f09e7f */
  if (!C.zf) goto L_11f09e7f;
  /* 11f09e5b push 0x11f2b4c8 */
  push32((uint32_t)(0x11f2b4c8u));
  /* 11f09e60 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09e63 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09e66 push ecx */
  push32((uint32_t)(ECX));
  /* 11f09e67 call 0x11f001d0 */
  push32(0x11f09e6cu); f_11f001d0();
  /* 11f09e6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09e6f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09e72 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 11f09e76 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11f09e7d jmp 0x11f09ea1 */
  goto L_11f09ea1;
L_11f09e7f:;
  /* 11f09e7f push 0x11f2b4c0 */
  push32((uint32_t)(0x11f2b4c0u));
  /* 11f09e84 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09e87 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09e8a push eax */
  push32((uint32_t)(EAX));
  /* 11f09e8b call 0x11f001d0 */
  push32(0x11f09e90u); f_11f001d0();
  /* 11f09e90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09e93 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09e96 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 11f09e9a mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_11f09ea1:;
  /* 11f09ea1 jmp 0x11f0a1cf */
  goto L_11f0a1cf;
L_11f09ea6:;
  /* 11f09ea6 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11f09ea9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f09eaf sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11f09eb2 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 11f09eb6 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11f09eb9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f09ebe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f09ec3 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 11f09ec7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f09eca shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11f09ecd mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 11f09ed1 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11f09ed4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f09eda mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11f09edd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f09ee2 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f09ee5 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11f09ee8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f09eee mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11f09ef1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f09ef6 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f09ef9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09efb mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11f09efe and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f09f04 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11f09f07 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f09f0c imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f09f0f add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09f11 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09f14 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f09f17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f09f1a sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11f09f1d mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 11f09f21 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 11f09f25 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 11f09f29 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f09f2c mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 11f09f2f mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11f09f32 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 11f09f35 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 11f09f3b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f09f3d movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11f09f41 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f09f43 push edx */
  push32((uint32_t)(EDX));
  /* 11f09f44 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11f09f47 push eax */
  push32((uint32_t)(EAX));
  /* 11f09f48 call 0x11f0d800 */
  push32(0x11f09f4du); f_11f0d800();
  /* 11f09f4d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09f50 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11f09f53 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f09f59 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09f5f jl 0x11f09f7d */
  if ((C.sf!=C.of)) goto L_11f09f7d;
  /* 11f09f61 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11f09f65 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11f09f69 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 11f09f6d lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 11f09f70 push eax */
  push32((uint32_t)(EAX));
  /* 11f09f71 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11f09f74 push ecx */
  push32((uint32_t)(ECX));
  /* 11f09f75 call 0x11f0d3c0 */
  push32(0x11f09f7au); f_11f0d3c0();
  /* 11f09f7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f09f7d:;
  /* 11f09f7d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09f80 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11f09f84 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11f09f87 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11f09f8a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f09f8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f09f8f je 0x11f09fd1 */
  if (C.zf) goto L_11f09fd1;
  /* 11f09f91 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11f09f95 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f09f98 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f09f9a mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11f09f9d cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09fa1 jg 0x11f09fd1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f09fd1;
  /* 11f09fa3 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09fa6 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11f09fab mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09fae mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11f09fb2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09fb5 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11f09fb9 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09fbc mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11f09fc0 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f09fc3 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11f09fc7 mov eax, 1 */
  EAX = (0x1u);
  /* 11f09fcc jmp 0x11f0a1d2 */
  goto L_11f0a1d2;
L_11f09fd1:;
  /* 11f09fd1 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f09fd5 jle 0x11f09fde */
  if ((C.zf||C.sf!=C.of)) goto L_11f09fde;
  /* 11f09fd7 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_11f09fde:;
  /* 11f09fde mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11f09fe1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f09fe6 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f09feb mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11f09fee mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 11f09ff4 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11f09ffb jmp 0x11f0a006 */
  goto L_11f0a006;
L_11f09ffd:;
  /* 11f09ffd mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11f0a000 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a003 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_11f0a006:;
  /* 11f0a006 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a00a jge 0x11f0a01a */
  if ((C.sf==C.of)) goto L_11f0a01a;
  /* 11f0a00c lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11f0a00f push edx */
  push32((uint32_t)(EDX));
  /* 11f0a010 call 0x11f08f30 */
  push32(0x11f0a015u); f_11f08f30();
  /* 11f0a015 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a018 jmp 0x11f09ffd */
  goto L_11f09ffd;
L_11f0a01a:;
  /* 11f0a01a cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a01e jge 0x11f0a04c */
  if ((C.sf==C.of)) goto L_11f0a04c;
  /* 11f0a020 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0a023 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0a025 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a02a mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 11f0a02d jmp 0x11f0a038 */
  goto L_11f0a038;
L_11f0a02f:;
  /* 11f0a02f mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 11f0a032 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a035 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_11f0a038:;
  /* 11f0a038 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a03c jle 0x11f0a04c */
  if ((C.zf||C.sf!=C.of)) goto L_11f0a04c;
  /* 11f0a03e lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11f0a041 push edx */
  push32((uint32_t)(EDX));
  /* 11f0a042 call 0x11f08f90 */
  push32(0x11f0a047u); f_11f08f90();
  /* 11f0a047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a04a jmp 0x11f0a02f */
  goto L_11f0a02f;
L_11f0a04c:;
  /* 11f0a04c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a04f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a052 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0a055 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11f0a058 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a05b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f0a05e jmp 0x11f0a069 */
  goto L_11f0a069;
L_11f0a060:;
  /* 11f0a060 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0a063 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a066 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11f0a069:;
  /* 11f0a069 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a06d jle 0x11f0a0d5 */
  if ((C.zf||C.sf!=C.of)) goto L_11f0a0d5;
  /* 11f0a06f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11f0a072 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f0a075 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11f0a078 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11f0a07b mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0a07e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11f0a081 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11f0a084 push eax */
  push32((uint32_t)(EAX));
  /* 11f0a085 call 0x11f08f30 */
  push32(0x11f0a08au); f_11f08f30();
  /* 11f0a08a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a08d lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11f0a090 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a091 call 0x11f08f30 */
  push32(0x11f0a096u); f_11f08f30();
  /* 11f0a096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a099 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 11f0a09c push edx */
  push32((uint32_t)(EDX));
  /* 11f0a09d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11f0a0a0 push eax */
  push32((uint32_t)(EAX));
  /* 11f0a0a1 call 0x11f08e80 */
  push32(0x11f0a0a6u); f_11f08e80();
  /* 11f0a0a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a0a9 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11f0a0ac push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a0ad call 0x11f08f30 */
  push32(0x11f0a0b2u); f_11f08f30();
  /* 11f0a0b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a0b5 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 11f0a0b8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0a0be add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a0c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a0c4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11f0a0c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a0c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a0cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0a0cf mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 11f0a0d3 jmp 0x11f0a060 */
  goto L_11f0a060;
L_11f0a0d5:;
  /* 11f0a0d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a0d8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a0db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0a0de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a0e1 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f0a0e3 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11f0a0e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a0e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a0ec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0a0ef movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11f0a0f3 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a0f6 jl 0x11f0a153 */
  if ((C.sf!=C.of)) goto L_11f0a153;
  /* 11f0a0f8 jmp 0x11f0a103 */
  goto L_11f0a103;
L_11f0a0fa:;
  /* 11f0a0fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a0fd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a100 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f0a103:;
  /* 11f0a103 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a106 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a109 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a10c jb 0x11f0a121 */
  if (C.cf) goto L_11f0a121;
  /* 11f0a10e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a111 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0a114 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a117 jne 0x11f0a121 */
  if (!C.zf) goto L_11f0a121;
  /* 11f0a119 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a11c mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11f0a11f jmp 0x11f0a0fa */
  goto L_11f0a0fa;
L_11f0a121:;
  /* 11f0a121 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a124 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a127 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a12a jae 0x11f0a145 */
  if (!C.cf) goto L_11f0a145;
  /* 11f0a12c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a12f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a132 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0a135 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a138 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11f0a13b add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11f0a13f mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a142 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_11f0a145:;
  /* 11f0a145 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a148 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0a14a add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11f0a14c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a14f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11f0a151 jmp 0x11f0a1ac */
  goto L_11f0a1ac;
L_11f0a153:;
  /* 11f0a153 jmp 0x11f0a15e */
  goto L_11f0a15e;
L_11f0a155:;
  /* 11f0a155 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a158 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a15b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f0a15e:;
  /* 11f0a15e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a161 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a164 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a167 jb 0x11f0a176 */
  if (C.cf) goto L_11f0a176;
  /* 11f0a169 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a16c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f0a16f cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a172 jne 0x11f0a176 */
  if (!C.zf) goto L_11f0a176;
  /* 11f0a174 jmp 0x11f0a155 */
  goto L_11f0a155;
L_11f0a176:;
  /* 11f0a176 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a179 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a17c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a17f jae 0x11f0a1ac */
  if (!C.cf) goto L_11f0a1ac;
  /* 11f0a181 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a184 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11f0a189 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a18c mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11f0a190 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a193 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11f0a197 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a19a mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11f0a19e mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a1a1 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11f0a1a5 mov eax, 1 */
  EAX = (0x1u);
  /* 11f0a1aa jmp 0x11f0a1d2 */
  goto L_11f0a1d2;
L_11f0a1ac:;
  /* 11f0a1ac mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a1af add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a1b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a1b5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a1b7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a1ba mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a1bd mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 11f0a1c0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a1c3 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 11f0a1c7 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11f0a1ca mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_11f0a1cf:;
  /* 11f0a1cf mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_11f0a1d2:;
  /* 11f0a1d2 mov esp, ebp */
  ESP = (EBP);
  /* 11f0a1d4 pop ebp */
  EBP = (pop32());
  /* 11f0a1d5 ret  */
  ESPCHK(0x11f09cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a1e0 @ 0x11f0a1e0 (255 bytes, 88 insns) */
void f_11f0a1e0(void) {
  FTRACE(0x11f0a1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0a1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0a1e1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0a1e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11f0a1e6:;
  /* 11f0a1e6 cmp dword ptr [0x11f2e050], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e050))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a1ed jle 0x11f0a206 */
  if ((C.zf||C.sf!=C.of)) goto L_11f0a206;
  /* 11f0a1ef push 8 */
  push32((uint32_t)(0x8u));
  /* 11f0a1f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a1f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0a1f6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f0a1f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a1f9 call 0x11f01160 */
  push32(0x11f0a1feu); f_11f01160();
  /* 11f0a1fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a201 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11f0a204 jmp 0x11f0a21f */
  goto L_11f0a21f;
L_11f0a206:;
  /* 11f0a206 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a209 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a20b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0a20d mov ecx, dword ptr [0x11f2e05c] */
  ECX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f0a213 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0a215 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11f0a219 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0a21c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11f0a21f:;
  /* 11f0a21f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a223 je 0x11f0a230 */
  if (C.zf) goto L_11f0a230;
  /* 11f0a225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a228 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a22b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0a22e jmp 0x11f0a1e6 */
  goto L_11f0a1e6;
L_11f0a230:;
  /* 11f0a230 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a233 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0a235 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f0a237 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0a23a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a23d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a240 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0a243 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a246 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0a249 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a24d je 0x11f0a255 */
  if (C.zf) goto L_11f0a255;
  /* 11f0a24f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a253 jne 0x11f0a268 */
  if (!C.zf) goto L_11f0a268;
L_11f0a255:;
  /* 11f0a255 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a258 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a25a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0a25c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0a25f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a262 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a265 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11f0a268:;
  /* 11f0a268 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11f0a26f:;
  /* 11f0a26f cmp dword ptr [0x11f2e050], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e050))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a276 jle 0x11f0a28b */
  if ((C.zf||C.sf!=C.of)) goto L_11f0a28b;
  /* 11f0a278 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f0a27a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a27d push edx */
  push32((uint32_t)(EDX));
  /* 11f0a27e call 0x11f01160 */
  push32(0x11f0a283u); f_11f01160();
  /* 11f0a283 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a286 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f0a289 jmp 0x11f0a2a0 */
  goto L_11f0a2a0;
L_11f0a28b:;
  /* 11f0a28b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a28e mov ecx, dword ptr [0x11f2e05c] */
  ECX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f0a294 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0a296 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11f0a29a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0a29d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11f0a2a0:;
  /* 11f0a2a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a2a4 je 0x11f0a2cb */
  if (C.zf) goto L_11f0a2cb;
  /* 11f0a2a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a2a9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0a2ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a2af lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11f0a2b3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f0a2b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a2b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0a2bb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f0a2bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0a2c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a2c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a2c6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11f0a2c9 jmp 0x11f0a26f */
  goto L_11f0a26f;
L_11f0a2cb:;
  /* 11f0a2cb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a2cf jne 0x11f0a2d8 */
  if (!C.zf) goto L_11f0a2d8;
  /* 11f0a2d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a2d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0a2d6 jmp 0x11f0a2db */
  goto L_11f0a2db;
L_11f0a2d8:;
  /* 11f0a2d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11f0a2db:;
  /* 11f0a2db mov esp, ebp */
  ESP = (EBP);
  /* 11f0a2dd pop ebp */
  EBP = (pop32());
  /* 11f0a2de ret  */
  ESPCHK(0x11f0a1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a2e0 @ 0x11f0a2e0 (17 bytes, 8 insns) */
void f_11f0a2e0(void) {
  FTRACE(0x11f0a2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0a2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0a2e1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0a2e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a2e6 push eax */
  push32((uint32_t)(EAX));
  /* 11f0a2e7 call 0x11f0a1e0 */
  push32(0x11f0a2ecu); f_11f0a1e0();
  /* 11f0a2ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a2ef pop ebp */
  EBP = (pop32());
  /* 11f0a2f0 ret  */
  ESPCHK(0x11f0a2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a300 @ 0x11f0a300 (297 bytes, 106 insns) */
void f_11f0a300(void) {
  FTRACE(0x11f0a300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0a300 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0a301 mov ebp, esp */
  EBP = (ESP);
  /* 11f0a303 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a306 push esi */
  push32((uint32_t)(ESI));
L_11f0a307:;
  /* 11f0a307 cmp dword ptr [0x11f2e050], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e050))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a30e jle 0x11f0a327 */
  if ((C.zf||C.sf!=C.of)) goto L_11f0a327;
  /* 11f0a310 push 8 */
  push32((uint32_t)(0x8u));
  /* 11f0a312 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a315 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0a317 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f0a319 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a31a call 0x11f01160 */
  push32(0x11f0a31fu); f_11f01160();
  /* 11f0a31f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a322 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11f0a325 jmp 0x11f0a340 */
  goto L_11f0a340;
L_11f0a327:;
  /* 11f0a327 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a32a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a32c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0a32e mov ecx, dword ptr [0x11f2e05c] */
  ECX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f0a334 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0a336 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11f0a33a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0a33d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11f0a340:;
  /* 11f0a340 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a344 je 0x11f0a351 */
  if (C.zf) goto L_11f0a351;
  /* 11f0a346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a349 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a34c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0a34f jmp 0x11f0a307 */
  goto L_11f0a307;
L_11f0a351:;
  /* 11f0a351 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a354 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0a356 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f0a358 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0a35b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a35e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a361 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0a364 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a367 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f0a36a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a36e je 0x11f0a376 */
  if (C.zf) goto L_11f0a376;
  /* 11f0a370 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a374 jne 0x11f0a389 */
  if (!C.zf) goto L_11f0a389;
L_11f0a376:;
  /* 11f0a376 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a379 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a37b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0a37d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0a380 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a383 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a386 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11f0a389:;
  /* 11f0a389 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f0a390 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11f0a397:;
  /* 11f0a397 cmp dword ptr [0x11f2e050], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e050))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a39e jle 0x11f0a3b3 */
  if ((C.zf||C.sf!=C.of)) goto L_11f0a3b3;
  /* 11f0a3a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f0a3a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a3a5 push edx */
  push32((uint32_t)(EDX));
  /* 11f0a3a6 call 0x11f01160 */
  push32(0x11f0a3abu); f_11f01160();
  /* 11f0a3ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a3ae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f0a3b1 jmp 0x11f0a3c8 */
  goto L_11f0a3c8;
L_11f0a3b3:;
  /* 11f0a3b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a3b6 mov ecx, dword ptr [0x11f2e05c] */
  ECX = (r32((uint32_t)(0x11f2e05c)));
  /* 11f0a3bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0a3be mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11f0a3c2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0a3c5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11f0a3c8:;
  /* 11f0a3c8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a3cc je 0x11f0a409 */
  if (C.zf) goto L_11f0a409;
  /* 11f0a3ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0a3d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11f0a3d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a3d5 push eax */
  push32((uint32_t)(EAX));
  /* 11f0a3d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0a3d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a3da call 0x11f0d8d0 */
  push32(0x11f0a3dfu); f_11f0d8d0();
  /* 11f0a3df mov ecx, eax */
  ECX = (EAX);
  /* 11f0a3e1 mov esi, edx */
  ESI = (EDX);
  /* 11f0a3e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a3e6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a3e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0a3ea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a3ec adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a3ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0a3f1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11f0a3f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a3f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a3f9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0a3fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0a3fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a401 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a404 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11f0a407 jmp 0x11f0a397 */
  goto L_11f0a397;
L_11f0a409:;
  /* 11f0a409 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a40d jne 0x11f0a41e */
  if (!C.zf) goto L_11f0a41e;
  /* 11f0a40f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0a412 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0a414 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a417 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a41a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0a41c jmp 0x11f0a424 */
  goto L_11f0a424;
L_11f0a41e:;
  /* 11f0a41e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0a421 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11f0a424:;
  /* 11f0a424 pop esi */
  ESI = (pop32());
  /* 11f0a425 mov esp, ebp */
  ESP = (EBP);
  /* 11f0a427 pop ebp */
  EBP = (pop32());
  /* 11f0a428 ret  */
  ESPCHK(0x11f0a300u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a430 @ 0x11f0a430 (46 bytes, 18 insns) */
void f_11f0a430(void) {
  FTRACE(0x11f0a430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0a430 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0a431 mov ebp, esp */
  EBP = (ESP);
  /* 11f0a433 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a434 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f0a436 call 0x11efb9c0 */
  push32(0x11f0a43bu); f_11efb9c0();
  /* 11f0a43b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a43e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a441 push eax */
  push32((uint32_t)(EAX));
  /* 11f0a442 call 0x11f0a460 */
  push32(0x11f0a447u); f_11f0a460();
  /* 11f0a447 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a44a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0a44d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11f0a44f call 0x11efba60 */
  push32(0x11f0a454u); f_11efba60();
  /* 11f0a454 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a457 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a45a mov esp, ebp */
  ESP = (EBP);
  /* 11f0a45c pop ebp */
  EBP = (pop32());
  /* 11f0a45d ret  */
  ESPCHK(0x11f0a430u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11f0a460 (198 bytes, 69 insns) */
void f_11f0a460(void) {
  FTRACE(0x11f0a460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0a460 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0a461 mov ebp, esp */
  EBP = (ESP);
  /* 11f0a463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a466 mov eax, dword ptr [0x11f3078c] */
  EAX = (r32((uint32_t)(0x11f3078c)));
  /* 11f0a46b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0a46e cmp dword ptr [0x11f321e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f321e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a475 jne 0x11f0a47e */
  if (!C.zf) goto L_11f0a47e;
  /* 11f0a477 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a479 jmp 0x11f0a522 */
  goto L_11f0a522;
L_11f0a47e:;
  /* 11f0a47e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a482 jne 0x11f0a4a6 */
  if (!C.zf) goto L_11f0a4a6;
  /* 11f0a484 cmp dword ptr [0x11f30794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a48b je 0x11f0a4a6 */
  if (C.zf) goto L_11f0a4a6;
  /* 11f0a48d call 0x11f0d960 */
  push32(0x11f0a492u); f_11f0d960();
  /* 11f0a492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0a494 je 0x11f0a49d */
  if (C.zf) goto L_11f0a49d;
  /* 11f0a496 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a498 jmp 0x11f0a522 */
  goto L_11f0a522;
L_11f0a49d:;
  /* 11f0a49d mov ecx, dword ptr [0x11f3078c] */
  ECX = (r32((uint32_t)(0x11f3078c)));
  /* 11f0a4a3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11f0a4a6:;
  /* 11f0a4a6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a4aa je 0x11f0a520 */
  if (C.zf) goto L_11f0a520;
  /* 11f0a4ac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a4b0 je 0x11f0a520 */
  if (C.zf) goto L_11f0a520;
  /* 11f0a4b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a4b5 push edx */
  push32((uint32_t)(EDX));
  /* 11f0a4b6 call 0x11f00050 */
  push32(0x11f0a4bbu); f_11f00050();
  /* 11f0a4bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a4be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f0a4c1:;
  /* 11f0a4c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a4c4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a4c7 je 0x11f0a520 */
  if (C.zf) goto L_11f0a520;
  /* 11f0a4c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a4cc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0a4ce push edx */
  push32((uint32_t)(EDX));
  /* 11f0a4cf call 0x11f00050 */
  push32(0x11f0a4d4u); f_11f00050();
  /* 11f0a4d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a4d7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a4da jbe 0x11f0a515 */
  if ((C.cf||C.zf)) goto L_11f0a515;
  /* 11f0a4dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a4df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0a4e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a4e4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11f0a4e8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a4eb jne 0x11f0a515 */
  if (!C.zf) goto L_11f0a515;
  /* 11f0a4ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a4f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a4f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a4f4 push edx */
  push32((uint32_t)(EDX));
  /* 11f0a4f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a4f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0a4fa push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a4fb call 0x11f0d910 */
  push32(0x11f0a500u); f_11f0d910();
  /* 11f0a500 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a503 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0a505 jne 0x11f0a515 */
  if (!C.zf) goto L_11f0a515;
  /* 11f0a507 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a50a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0a50c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a50f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11f0a513 jmp 0x11f0a522 */
  goto L_11f0a522;
L_11f0a515:;
  /* 11f0a515 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a518 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a51b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f0a51e jmp 0x11f0a4c1 */
  goto L_11f0a4c1;
L_11f0a520:;
  /* 11f0a520 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f0a522:;
  /* 11f0a522 mov esp, ebp */
  ESP = (EBP);
  /* 11f0a524 pop ebp */
  EBP = (pop32());
  /* 11f0a525 ret  */
  ESPCHK(0x11f0a460u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a530 @ 0x11f0a530 (130 bytes, 43 insns) */
void f_11f0a530(void) {
  FTRACE(0x11f0a530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0a530 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0a531 mov ebp, esp */
  EBP = (ESP);
  /* 11f0a533 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a537 cmp eax, dword ptr [0x11f321dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f321dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a53d jae 0x11f0a561 */
  if (!C.cf) goto L_11f0a561;
  /* 11f0a53f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a542 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f0a545 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a548 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0a54b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0a54e mov eax, dword ptr [ecx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11f320a0)));
  /* 11f0a555 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11f0a55a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0a55d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0a55f jne 0x11f0a57c */
  if (!C.zf) goto L_11f0a57c;
L_11f0a561:;
  /* 11f0a561 call 0x11f07150 */
  push32(0x11f0a566u); f_11f07150();
  /* 11f0a566 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f0a56c call 0x11f07160 */
  push32(0x11f0a571u); f_11f07160();
  /* 11f0a571 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f0a577 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a57a jmp 0x11f0a5ae */
  goto L_11f0a5ae;
L_11f0a57c:;
  /* 11f0a57c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a57f push edx */
  push32((uint32_t)(EDX));
  /* 11f0a580 call 0x11f0df20 */
  push32(0x11f0a585u); f_11f0df20();
  /* 11f0a585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a588 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0a58b push eax */
  push32((uint32_t)(EAX));
  /* 11f0a58c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0a58f push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a590 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a593 push edx */
  push32((uint32_t)(EDX));
  /* 11f0a594 call 0x11f0a5c0 */
  push32(0x11f0a599u); f_11f0a5c0();
  /* 11f0a599 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a59c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0a59f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a5a2 push eax */
  push32((uint32_t)(EAX));
  /* 11f0a5a3 call 0x11f0dfb0 */
  push32(0x11f0a5a8u); f_11f0dfb0();
  /* 11f0a5a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a5ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f0a5ae:;
  /* 11f0a5ae mov esp, ebp */
  ESP = (EBP);
  /* 11f0a5b0 pop ebp */
  EBP = (pop32());
  /* 11f0a5b1 ret  */
  ESPCHK(0x11f0a530u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a5c0 @ 0x11f0a5c0 (178 bytes, 56 insns) */
void f_11f0a5c0(void) {
  FTRACE(0x11f0a5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0a5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0a5c1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0a5c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a5c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a5c9 push eax */
  push32((uint32_t)(EAX));
  /* 11f0a5ca call 0x11f0dda0 */
  push32(0x11f0a5cfu); f_11f0dda0();
  /* 11f0a5cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a5d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f0a5d5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a5d9 jne 0x11f0a5ee */
  if (!C.zf) goto L_11f0a5ee;
  /* 11f0a5db call 0x11f07150 */
  push32(0x11f0a5e0u); f_11f07150();
  /* 11f0a5e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f0a5e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a5e9 jmp 0x11f0a66e */
  goto L_11f0a66e;
L_11f0a5ee:;
  /* 11f0a5ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0a5f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a5f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0a5f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0a5f7 push edx */
  push32((uint32_t)(EDX));
  /* 11f0a5f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0a5fb push eax */
  push32((uint32_t)(EAX));
  /* 11f0a5fc call dword ptr [0x11f33350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33350))), 0x11f0a602u);
  /* 11f0a602 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0a605 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a609 jne 0x11f0a616 */
  if (!C.zf) goto L_11f0a616;
  /* 11f0a60b call dword ptr [0x11f333d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333d4))), 0x11f0a611u);
  /* 11f0a611 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0a614 jmp 0x11f0a61d */
  goto L_11f0a61d;
L_11f0a616:;
  /* 11f0a616 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11f0a61d:;
  /* 11f0a61d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a621 je 0x11f0a634 */
  if (C.zf) goto L_11f0a634;
  /* 11f0a623 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a626 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a627 call 0x11f070b0 */
  push32(0x11f0a62cu); f_11f070b0();
  /* 11f0a62c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a62f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a632 jmp 0x11f0a66e */
  goto L_11f0a66e;
L_11f0a634:;
  /* 11f0a634 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a637 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11f0a63a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a63d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a640 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0a643 mov ecx, dword ptr [edx*4 + 0x11f320a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11f320a0)));
  /* 11f0a64a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11f0a64e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11f0a651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a654 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f0a657 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a65a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0a65d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0a660 mov eax, dword ptr [eax*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11f320a0)));
  /* 11f0a667 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11f0a66b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11f0a66e:;
  /* 11f0a66e mov esp, ebp */
  ESP = (EBP);
  /* 11f0a670 pop ebp */
  EBP = (pop32());
  /* 11f0a671 ret  */
  ESPCHK(0x11f0a5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a680 @ 0x11f0a680 (130 bytes, 43 insns) */
void f_11f0a680(void) {
  FTRACE(0x11f0a680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0a680 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0a681 mov ebp, esp */
  EBP = (ESP);
  /* 11f0a683 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a687 cmp eax, dword ptr [0x11f321dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f321dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a68d jae 0x11f0a6b1 */
  if (!C.cf) goto L_11f0a6b1;
  /* 11f0a68f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a692 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f0a695 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a698 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0a69b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0a69e mov eax, dword ptr [ecx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11f320a0)));
  /* 11f0a6a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11f0a6aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0a6ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0a6af jne 0x11f0a6cc */
  if (!C.zf) goto L_11f0a6cc;
L_11f0a6b1:;
  /* 11f0a6b1 call 0x11f07150 */
  push32(0x11f0a6b6u); f_11f07150();
  /* 11f0a6b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f0a6bc call 0x11f07160 */
  push32(0x11f0a6c1u); f_11f07160();
  /* 11f0a6c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f0a6c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a6ca jmp 0x11f0a6fe */
  goto L_11f0a6fe;
L_11f0a6cc:;
  /* 11f0a6cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a6cf push edx */
  push32((uint32_t)(EDX));
  /* 11f0a6d0 call 0x11f0df20 */
  push32(0x11f0a6d5u); f_11f0df20();
  /* 11f0a6d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a6d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0a6db push eax */
  push32((uint32_t)(EAX));
  /* 11f0a6dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0a6df push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a6e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a6e3 push edx */
  push32((uint32_t)(EDX));
  /* 11f0a6e4 call 0x11f0a710 */
  push32(0x11f0a6e9u); f_11f0a710();
  /* 11f0a6e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a6ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0a6ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a6f2 push eax */
  push32((uint32_t)(EAX));
  /* 11f0a6f3 call 0x11f0dfb0 */
  push32(0x11f0a6f8u); f_11f0dfb0();
  /* 11f0a6f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a6fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f0a6fe:;
  /* 11f0a6fe mov esp, ebp */
  ESP = (EBP);
  /* 11f0a700 pop ebp */
  EBP = (pop32());
  /* 11f0a701 ret  */
  ESPCHK(0x11f0a680u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a710 @ 0x11f0a710 (627 bytes, 182 insns) */
void f_11f0a710(void) {
  FTRACE(0x11f0a710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0a710 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0a711 mov ebp, esp */
  EBP = (ESP);
  /* 11f0a713 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a719 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11f0a720 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0a723 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11f0a729 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a72d jne 0x11f0a736 */
  if (!C.zf) goto L_11f0a736;
  /* 11f0a72f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a731 jmp 0x11f0a97f */
  goto L_11f0a97f;
L_11f0a736:;
  /* 11f0a736 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a739 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f0a73c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a73f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0a742 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0a745 mov eax, dword ptr [ecx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11f320a0)));
  /* 11f0a74c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11f0a751 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0a754 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0a756 je 0x11f0a768 */
  if (C.zf) goto L_11f0a768;
  /* 11f0a758 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0a75a push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0a75c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a75f push edx */
  push32((uint32_t)(EDX));
  /* 11f0a760 call 0x11f0a5c0 */
  push32(0x11f0a765u); f_11f0a5c0();
  /* 11f0a765 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0a768:;
  /* 11f0a768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a76b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f0a76e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a771 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0a774 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0a777 mov edx, dword ptr [eax*4 + 0x11f320a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11f320a0)));
  /* 11f0a77e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11f0a783 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0a78a je 0x11f0a89c */
  if (C.zf) goto L_11f0a89c;
  /* 11f0a790 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0a793 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0a796 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11f0a79d:;
  /* 11f0a79d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a7a0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a7a3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a7a6 jae 0x11f0a89a */
  if (!C.cf) goto L_11f0a89a;
  /* 11f0a7ac lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11f0a7b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11f0a7b5:;
  /* 11f0a7b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a7b8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11f0a7be sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a7c0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a7c6 jge 0x11f0a827 */
  if ((C.sf==C.of)) goto L_11f0a827;
  /* 11f0a7c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a7cb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a7ce cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a7d1 jae 0x11f0a827 */
  if (!C.cf) goto L_11f0a827;
  /* 11f0a7d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a7d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f0a7d8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11f0a7de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a7e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a7e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0a7e7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 11f0a7ee cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a7f1 jne 0x11f0a811 */
  if (!C.zf) goto L_11f0a811;
  /* 11f0a7f3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11f0a7f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a7fc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11f0a802 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a805 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11f0a808 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a80b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a80e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11f0a811:;
  /* 11f0a811 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a814 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 11f0a81a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11f0a81c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a81f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a822 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0a825 jmp 0x11f0a7b5 */
  goto L_11f0a7b5;
L_11f0a827:;
  /* 11f0a827 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0a829 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11f0a82f push edx */
  push32((uint32_t)(EDX));
  /* 11f0a830 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a833 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11f0a839 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a83b push eax */
  push32((uint32_t)(EAX));
  /* 11f0a83c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11f0a842 push edx */
  push32((uint32_t)(EDX));
  /* 11f0a843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a846 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f0a849 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a84c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0a84f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0a852 mov edx, dword ptr [eax*4 + 0x11f320a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11f320a0)));
  /* 11f0a859 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11f0a85c push eax */
  push32((uint32_t)(EAX));
  /* 11f0a85d call dword ptr [0x11f33414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33414))), 0x11f0a863u);
  /* 11f0a863 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0a865 je 0x11f0a88a */
  if (C.zf) goto L_11f0a88a;
  /* 11f0a867 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0a86a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a870 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11f0a873 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0a876 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11f0a87c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0a87e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a884 jge 0x11f0a888 */
  if ((C.sf==C.of)) goto L_11f0a888;
  /* 11f0a886 jmp 0x11f0a89a */
  goto L_11f0a89a;
L_11f0a888:;
  /* 11f0a888 jmp 0x11f0a895 */
  goto L_11f0a895;
L_11f0a88a:;
  /* 11f0a88a call dword ptr [0x11f333d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333d4))), 0x11f0a890u);
  /* 11f0a890 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f0a893 jmp 0x11f0a89a */
  goto L_11f0a89a;
L_11f0a895:;
  /* 11f0a895 jmp 0x11f0a79d */
  goto L_11f0a79d;
L_11f0a89a:;
  /* 11f0a89a jmp 0x11f0a8ec */
  goto L_11f0a8ec;
L_11f0a89c:;
  /* 11f0a89c push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0a89e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11f0a8a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a8a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0a8a8 push edx */
  push32((uint32_t)(EDX));
  /* 11f0a8a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0a8ac push eax */
  push32((uint32_t)(EAX));
  /* 11f0a8ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a8b0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f0a8b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a8b6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0a8b9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0a8bc mov eax, dword ptr [ecx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11f320a0)));
  /* 11f0a8c3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11f0a8c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a8c7 call dword ptr [0x11f33414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33414))), 0x11f0a8cdu);
  /* 11f0a8cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0a8cf je 0x11f0a8e3 */
  if (C.zf) goto L_11f0a8e3;
  /* 11f0a8d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f0a8d8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 11f0a8de mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11f0a8e1 jmp 0x11f0a8ec */
  goto L_11f0a8ec;
L_11f0a8e3:;
  /* 11f0a8e3 call dword ptr [0x11f333d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333d4))), 0x11f0a8e9u);
  /* 11f0a8e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11f0a8ec:;
  /* 11f0a8ec cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a8f0 jne 0x11f0a976 */
  if (!C.zf) goto L_11f0a976;
  /* 11f0a8f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a8fa je 0x11f0a92a */
  if (C.zf) goto L_11f0a92a;
  /* 11f0a8fc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a900 jne 0x11f0a919 */
  if (!C.zf) goto L_11f0a919;
  /* 11f0a902 call 0x11f07150 */
  push32(0x11f0a907u); f_11f07150();
  /* 11f0a907 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11f0a90d call 0x11f07160 */
  push32(0x11f0a912u); f_11f07160();
  /* 11f0a912 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0a915 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11f0a917 jmp 0x11f0a925 */
  goto L_11f0a925;
L_11f0a919:;
  /* 11f0a919 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0a91c push edx */
  push32((uint32_t)(EDX));
  /* 11f0a91d call 0x11f070b0 */
  push32(0x11f0a922u); f_11f070b0();
  /* 11f0a922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0a925:;
  /* 11f0a925 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a928 jmp 0x11f0a97f */
  goto L_11f0a97f;
L_11f0a92a:;
  /* 11f0a92a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a92d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f0a930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a933 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0a936 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0a939 mov edx, dword ptr [eax*4 + 0x11f320a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11f320a0)));
  /* 11f0a940 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11f0a945 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0a94a je 0x11f0a95b */
  if (C.zf) goto L_11f0a95b;
  /* 11f0a94c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0a94f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f0a952 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a955 jne 0x11f0a95b */
  if (!C.zf) goto L_11f0a95b;
  /* 11f0a957 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a959 jmp 0x11f0a97f */
  goto L_11f0a97f;
L_11f0a95b:;
  /* 11f0a95b call 0x11f07150 */
  push32(0x11f0a960u); f_11f07150();
  /* 11f0a960 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11f0a966 call 0x11f07160 */
  push32(0x11f0a96bu); f_11f07160();
  /* 11f0a96b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11f0a971 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a974 jmp 0x11f0a97f */
  goto L_11f0a97f;
L_11f0a976:;
  /* 11f0a976 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11f0a979 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11f0a97f:;
  /* 11f0a97f mov esp, ebp */
  ESP = (EBP);
  /* 11f0a981 pop ebp */
  EBP = (pop32());
  /* 11f0a982 ret  */
  ESPCHK(0x11f0a710u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a990 @ 0x11f0a990 (199 bytes, 68 insns) */
void f_11f0a990(void) {
  FTRACE(0x11f0a990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0a990 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0a991 mov ebp, esp */
  EBP = (ESP);
  /* 11f0a993 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0a994 push ebx */
  push32((uint32_t)(EBX));
  /* 11f0a995 push esi */
  push32((uint32_t)(ESI));
  /* 11f0a996 push edi */
  push32((uint32_t)(EDI));
L_11f0a997:;
  /* 11f0a997 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a99b jne 0x11f0a9bb */
  if (!C.zf) goto L_11f0a9bb;
  /* 11f0a99d push 0x11f2b2e0 */
  push32((uint32_t)(0x11f2b2e0u));
  /* 11f0a9a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0a9a4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11f0a9a6 push 0x11f2b4e0 */
  push32((uint32_t)(0x11f2b4e0u));
  /* 11f0a9ab push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0a9ad call 0x11efa680 */
  push32(0x11f0a9b2u); f_11efa680();
  /* 11f0a9b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a9b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a9b8 jne 0x11f0a9bb */
  if (!C.zf) goto L_11f0a9bb;
  /* 11f0a9ba int3  */
  x86_unimpl("int3 @ 0x11f0a9ba");
L_11f0a9bb:;
  /* 11f0a9bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0a9bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0a9bf jne 0x11f0a997 */
  if (!C.zf) goto L_11f0a997;
  /* 11f0a9c1 mov ecx, dword ptr [0x11f309e4] */
  ECX = (r32((uint32_t)(0x11f309e4)));
  /* 11f0a9c7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a9ca mov dword ptr [0x11f309e4], ecx */
  w32((uint32_t)(0x11f309e4), (ECX));
  /* 11f0a9d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0a9d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0a9d6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11f0a9d8 push 0x11f2b4e0 */
  push32((uint32_t)(0x11f2b4e0u));
  /* 11f0a9dd push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0a9df push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11f0a9e4 call 0x11efbac0 */
  push32(0x11f0a9e9u); f_11efbac0();
  /* 11f0a9e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0a9ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a9ef mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11f0a9f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a9f5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0a9f9 je 0x11f0aa16 */
  if (C.zf) goto L_11f0aa16;
  /* 11f0a9fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0a9fe mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11f0aa01 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0aa04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0aa07 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11f0aa0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0aa0d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11f0aa14 jmp 0x11f0aa3b */
  goto L_11f0aa3b;
L_11f0aa16:;
  /* 11f0aa16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0aa19 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f0aa1c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0aa1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0aa22 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11f0aa25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0aa28 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0aa2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0aa2e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11f0aa31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0aa34 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_11f0aa3b:;
  /* 11f0aa3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0aa3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0aa41 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f0aa44 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f0aa46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0aa49 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11f0aa50 pop edi */
  EDI = (pop32());
  /* 11f0aa51 pop esi */
  ESI = (pop32());
  /* 11f0aa52 pop ebx */
  EBX = (pop32());
  /* 11f0aa53 mov esp, ebp */
  ESP = (EBP);
  /* 11f0aa55 pop ebp */
  EBP = (pop32());
  /* 11f0aa56 ret  */
  ESPCHK(0x11f0a990u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11f0aa60 (50 bytes, 17 insns) */
void f_11f0aa60(void) {
  FTRACE(0x11f0aa60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0aa60 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0aa61 mov ebp, esp */
  EBP = (ESP);
  /* 11f0aa63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0aa66 cmp eax, dword ptr [0x11f321dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11f321dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0aa6c jb 0x11f0aa72 */
  if (C.cf) goto L_11f0aa72;
  /* 11f0aa6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0aa70 jmp 0x11f0aa90 */
  goto L_11f0aa90;
L_11f0aa72:;
  /* 11f0aa72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0aa75 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f0aa78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0aa7b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0aa7e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0aa81 mov eax, dword ptr [ecx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11f320a0)));
  /* 11f0aa88 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11f0aa8d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11f0aa90:;
  /* 11f0aa90 pop ebp */
  EBP = (pop32());
  /* 11f0aa91 ret  */
  ESPCHK(0x11f0aa60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aaa0 @ 0x11f0aaa0 (300 bytes, 80 insns) */
void f_11f0aaa0(void) {
  FTRACE(0x11f0aaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0aaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0aaa1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0aaa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0aaa4 cmp dword ptr [0x11f31dc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f31dc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0aaab jne 0x11f0aab9 */
  if (!C.zf) goto L_11f0aab9;
  /* 11f0aaad mov dword ptr [0x11f31dc0], 0x200 */
  w32((uint32_t)(0x11f31dc0), (0x200u));
  /* 11f0aab7 jmp 0x11f0aacc */
  goto L_11f0aacc;
L_11f0aab9:;
  /* 11f0aab9 cmp dword ptr [0x11f31dc0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11f31dc0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0aac0 jge 0x11f0aacc */
  if ((C.sf==C.of)) goto L_11f0aacc;
  /* 11f0aac2 mov dword ptr [0x11f31dc0], 0x14 */
  w32((uint32_t)(0x11f31dc0), (0x14u));
L_11f0aacc:;
  /* 11f0aacc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11f0aad1 push 0x11f2b4ec */
  push32((uint32_t)(0x11f2b4ecu));
  /* 11f0aad6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0aad8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11f0aada mov eax, dword ptr [0x11f31dc0] */
  EAX = (r32((uint32_t)(0x11f31dc0)));
  /* 11f0aadf push eax */
  push32((uint32_t)(EAX));
  /* 11f0aae0 call 0x11efbed0 */
  push32(0x11f0aae5u); f_11efbed0();
  /* 11f0aae5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0aae8 mov dword ptr [0x11f30a7c], eax */
  w32((uint32_t)(0x11f30a7c), (EAX));
  /* 11f0aaed cmp dword ptr [0x11f30a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0aaf4 jne 0x11f0ab35 */
  if (!C.zf) goto L_11f0ab35;
  /* 11f0aaf6 mov dword ptr [0x11f31dc0], 0x14 */
  w32((uint32_t)(0x11f31dc0), (0x14u));
  /* 11f0ab00 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11f0ab05 push 0x11f2b4ec */
  push32((uint32_t)(0x11f2b4ecu));
  /* 11f0ab0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0ab0c push 4 */
  push32((uint32_t)(0x4u));
  /* 11f0ab0e mov ecx, dword ptr [0x11f31dc0] */
  ECX = (r32((uint32_t)(0x11f31dc0)));
  /* 11f0ab14 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ab15 call 0x11efbed0 */
  push32(0x11f0ab1au); f_11efbed0();
  /* 11f0ab1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ab1d mov dword ptr [0x11f30a7c], eax */
  w32((uint32_t)(0x11f30a7c), (EAX));
  /* 11f0ab22 cmp dword ptr [0x11f30a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ab29 jne 0x11f0ab35 */
  if (!C.zf) goto L_11f0ab35;
  /* 11f0ab2b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11f0ab2d call 0x11efa530 */
  push32(0x11f0ab32u); f_11efa530();
  /* 11f0ab32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0ab35:;
  /* 11f0ab35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0ab3c jmp 0x11f0ab47 */
  goto L_11f0ab47;
L_11f0ab3e:;
  /* 11f0ab3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0ab41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ab44 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11f0ab47:;
  /* 11f0ab47 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ab4b jge 0x11f0ab66 */
  if ((C.sf==C.of)) goto L_11f0ab66;
  /* 11f0ab4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0ab50 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f0ab53 add eax, 0x11f2e908 */
  { uint32_t _a=(EAX),_b=(0x11f2e908u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ab58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0ab5b mov edx, dword ptr [0x11f30a7c] */
  EDX = (r32((uint32_t)(0x11f30a7c)));
  /* 11f0ab61 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11f0ab64 jmp 0x11f0ab3e */
  goto L_11f0ab3e;
L_11f0ab66:;
  /* 11f0ab66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0ab6d jmp 0x11f0ab78 */
  goto L_11f0ab78;
L_11f0ab6f:;
  /* 11f0ab6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0ab72 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ab75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f0ab78:;
  /* 11f0ab78 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ab7c jge 0x11f0abc8 */
  if ((C.sf==C.of)) goto L_11f0abc8;
  /* 11f0ab7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0ab81 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f0ab84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0ab87 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0ab8a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0ab8d mov eax, dword ptr [ecx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11f320a0)));
  /* 11f0ab94 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ab98 je 0x11f0abb6 */
  if (C.zf) goto L_11f0abb6;
  /* 11f0ab9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0ab9d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f0aba0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0aba3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0aba6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11f0aba9 mov eax, dword ptr [ecx*4 + 0x11f320a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11f320a0)));
  /* 11f0abb0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0abb4 jne 0x11f0abc6 */
  if (!C.zf) goto L_11f0abc6;
L_11f0abb6:;
  /* 11f0abb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0abb9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11f0abbc mov dword ptr [ecx + 0x11f2e918], 0xffffffff */
  w32((uint32_t)(ECX + 0x11f2e918), (0xffffffffu));
L_11f0abc6:;
  /* 11f0abc6 jmp 0x11f0ab6f */
  goto L_11f0ab6f;
L_11f0abc8:;
  /* 11f0abc8 mov esp, ebp */
  ESP = (EBP);
  /* 11f0abca pop ebp */
  EBP = (pop32());
  /* 11f0abcb ret  */
  ESPCHK(0x11f0aaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001abd0 @ 0x11f0abd0 (26 bytes, 9 insns) */
void f_11f0abd0(void) {
  FTRACE(0x11f0abd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0abd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0abd1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0abd3 call 0x11f0e220 */
  push32(0x11f0abd8u); f_11f0e220();
  /* 11f0abd8 movsx eax, byte ptr [0x11f307a4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11f307a4))));
  /* 11f0abdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0abe1 je 0x11f0abe8 */
  if (C.zf) goto L_11f0abe8;
  /* 11f0abe3 call 0x11f0dfe0 */
  push32(0x11f0abe8u); f_11f0dfe0();
L_11f0abe8:;
  /* 11f0abe8 pop ebp */
  EBP = (pop32());
  /* 11f0abe9 ret  */
  ESPCHK(0x11f0abd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001abf0 @ 0x11f0abf0 (61 bytes, 20 insns) */
void f_11f0abf0(void) {
  FTRACE(0x11f0abf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0abf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0abf1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0abf3 cmp dword ptr [ebp + 8], 0x11f2e908 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11f2e908u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0abfa jb 0x11f0ac1e */
  if (C.cf) goto L_11f0ac1e;
  /* 11f0abfc cmp dword ptr [ebp + 8], 0x11f2eb68 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11f2eb68u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ac03 ja 0x11f0ac1e */
  if ((!C.cf&&!C.zf)) goto L_11f0ac1e;
  /* 11f0ac05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ac08 sub eax, 0x11f2e908 */
  { uint32_t _a=(EAX),_b=(0x11f2e908u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0ac0d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f0ac10 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ac13 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ac14 call 0x11efb9c0 */
  push32(0x11f0ac19u); f_11efb9c0();
  /* 11f0ac19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ac1c jmp 0x11f0ac2b */
  goto L_11f0ac2b;
L_11f0ac1e:;
  /* 11f0ac1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ac21 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ac24 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ac25 call dword ptr [0x11f33438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33438))), 0x11f0ac2bu);
L_11f0ac2b:;
  /* 11f0ac2b pop ebp */
  EBP = (pop32());
  /* 11f0ac2c ret  */
  ESPCHK(0x11f0abf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ac30 @ 0x11f0ac30 (41 bytes, 16 insns) */
void f_11f0ac30(void) {
  FTRACE(0x11f0ac30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0ac30 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0ac31 mov ebp, esp */
  EBP = (ESP);
  /* 11f0ac33 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ac37 jge 0x11f0ac4a */
  if ((C.sf==C.of)) goto L_11f0ac4a;
  /* 11f0ac39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ac3c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ac3f push eax */
  push32((uint32_t)(EAX));
  /* 11f0ac40 call 0x11efb9c0 */
  push32(0x11f0ac45u); f_11efb9c0();
  /* 11f0ac45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ac48 jmp 0x11f0ac57 */
  goto L_11f0ac57;
L_11f0ac4a:;
  /* 11f0ac4a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ac4d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ac50 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ac51 call dword ptr [0x11f33438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33438))), 0x11f0ac57u);
L_11f0ac57:;
  /* 11f0ac57 pop ebp */
  EBP = (pop32());
  /* 11f0ac58 ret  */
  ESPCHK(0x11f0ac30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ac60 @ 0x11f0ac60 (61 bytes, 20 insns) */
void f_11f0ac60(void) {
  FTRACE(0x11f0ac60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0ac60 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0ac61 mov ebp, esp */
  EBP = (ESP);
  /* 11f0ac63 cmp dword ptr [ebp + 8], 0x11f2e908 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11f2e908u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ac6a jb 0x11f0ac8e */
  if (C.cf) goto L_11f0ac8e;
  /* 11f0ac6c cmp dword ptr [ebp + 8], 0x11f2eb68 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11f2eb68u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ac73 ja 0x11f0ac8e */
  if ((!C.cf&&!C.zf)) goto L_11f0ac8e;
  /* 11f0ac75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ac78 sub eax, 0x11f2e908 */
  { uint32_t _a=(EAX),_b=(0x11f2e908u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0ac7d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11f0ac80 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ac83 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ac84 call 0x11efba60 */
  push32(0x11f0ac89u); f_11efba60();
  /* 11f0ac89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ac8c jmp 0x11f0ac9b */
  goto L_11f0ac9b;
L_11f0ac8e:;
  /* 11f0ac8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ac91 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ac94 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ac95 call dword ptr [0x11f3343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3343c))), 0x11f0ac9bu);
L_11f0ac9b:;
  /* 11f0ac9b pop ebp */
  EBP = (pop32());
  /* 11f0ac9c ret  */
  ESPCHK(0x11f0ac60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aca0 @ 0x11f0aca0 (41 bytes, 16 insns) */
void f_11f0aca0(void) {
  FTRACE(0x11f0aca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0aca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0aca1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0aca3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0aca7 jge 0x11f0acba */
  if ((C.sf==C.of)) goto L_11f0acba;
  /* 11f0aca9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0acac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0acaf push eax */
  push32((uint32_t)(EAX));
  /* 11f0acb0 call 0x11efba60 */
  push32(0x11f0acb5u); f_11efba60();
  /* 11f0acb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0acb8 jmp 0x11f0acc7 */
  goto L_11f0acc7;
L_11f0acba:;
  /* 11f0acba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0acbd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0acc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0acc1 call dword ptr [0x11f3343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3343c))), 0x11f0acc7u);
L_11f0acc7:;
  /* 11f0acc7 pop ebp */
  EBP = (pop32());
  /* 11f0acc8 ret  */
  ESPCHK(0x11f0aca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001acd0 @ 0x11f0acd0 (119 bytes, 34 insns) */
void f_11f0acd0(void) {
  FTRACE(0x11f0acd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0acd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0acd1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0acd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0acd6 push 0x11f31dd4 */
  push32((uint32_t)(0x11f31dd4u));
  /* 11f0acdb call dword ptr [0x11f33428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33428))), 0x11f0ace1u);
  /* 11f0ace1 cmp dword ptr [0x11f31dc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f31dc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ace8 je 0x11f0ad08 */
  if (C.zf) goto L_11f0ad08;
  /* 11f0acea push 0x11f31dd4 */
  push32((uint32_t)(0x11f31dd4u));
  /* 11f0acef call dword ptr [0x11f33418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33418))), 0x11f0acf5u);
  /* 11f0acf5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f0acf7 call 0x11efb9c0 */
  push32(0x11f0acfcu); f_11efb9c0();
  /* 11f0acfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0acff mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11f0ad06 jmp 0x11f0ad0f */
  goto L_11f0ad0f;
L_11f0ad08:;
  /* 11f0ad08 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11f0ad0f:;
  /* 11f0ad0f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11f0ad13 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ad14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ad17 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ad18 call 0x11f0ad50 */
  push32(0x11f0ad1du); f_11f0ad50();
  /* 11f0ad1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ad20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0ad23 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ad27 je 0x11f0ad35 */
  if (C.zf) goto L_11f0ad35;
  /* 11f0ad29 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11f0ad2b call 0x11efba60 */
  push32(0x11f0ad30u); f_11efba60();
  /* 11f0ad30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ad33 jmp 0x11f0ad40 */
  goto L_11f0ad40;
L_11f0ad35:;
  /* 11f0ad35 push 0x11f31dd4 */
  push32((uint32_t)(0x11f31dd4u));
  /* 11f0ad3a call dword ptr [0x11f33418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33418))), 0x11f0ad40u);
L_11f0ad40:;
  /* 11f0ad40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0ad43 mov esp, ebp */
  ESP = (EBP);
  /* 11f0ad45 pop ebp */
  EBP = (pop32());
  /* 11f0ad46 ret  */
  ESPCHK(0x11f0acd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ad50 @ 0x11f0ad50 (160 bytes, 50 insns) */
void f_11f0ad50(void) {
  FTRACE(0x11f0ad50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0ad50 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0ad51 mov ebp, esp */
  EBP = (ESP);
  /* 11f0ad53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0ad56 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ad5a jne 0x11f0ad63 */
  if (!C.zf) goto L_11f0ad63;
  /* 11f0ad5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0ad5e jmp 0x11f0adec */
  goto L_11f0adec;
L_11f0ad63:;
  /* 11f0ad63 cmp dword ptr [0x11f309c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ad6a jne 0x11f0ad9a */
  if (!C.zf) goto L_11f0ad9a;
  /* 11f0ad6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ad6f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0ad74 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ad79 jle 0x11f0ad8b */
  if ((C.zf||C.sf!=C.of)) goto L_11f0ad8b;
  /* 11f0ad7b call 0x11f07150 */
  push32(0x11f0ad80u); f_11f07150();
  /* 11f0ad80 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11f0ad86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0ad89 jmp 0x11f0adec */
  goto L_11f0adec;
L_11f0ad8b:;
  /* 11f0ad8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ad8e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11f0ad91 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11f0ad93 mov eax, 1 */
  EAX = (0x1u);
  /* 11f0ad98 jmp 0x11f0adec */
  goto L_11f0adec;
L_11f0ad9a:;
  /* 11f0ad9a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f0ada1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11f0ada4 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ada5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0ada7 mov ecx, dword ptr [0x11f2e050] */
  ECX = (r32((uint32_t)(0x11f2e050)));
  /* 11f0adad push ecx */
  push32((uint32_t)(ECX));
  /* 11f0adae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0adb1 push edx */
  push32((uint32_t)(EDX));
  /* 11f0adb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0adb4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11f0adb7 push eax */
  push32((uint32_t)(EAX));
  /* 11f0adb8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11f0adbd mov ecx, dword ptr [0x11f309d8] */
  ECX = (r32((uint32_t)(0x11f309d8)));
  /* 11f0adc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0adc4 call dword ptr [0x11f333b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f333b0))), 0x11f0adcau);
  /* 11f0adca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0adcd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0add1 je 0x11f0add9 */
  if (C.zf) goto L_11f0add9;
  /* 11f0add3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0add7 je 0x11f0ade9 */
  if (C.zf) goto L_11f0ade9;
L_11f0add9:;
  /* 11f0add9 call 0x11f07150 */
  push32(0x11f0addeu); f_11f07150();
  /* 11f0adde mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11f0ade4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0ade7 jmp 0x11f0adec */
  goto L_11f0adec;
L_11f0ade9:;
  /* 11f0ade9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11f0adec:;
  /* 11f0adec mov esp, ebp */
  ESP = (EBP);
  /* 11f0adee pop ebp */
  EBP = (pop32());
  /* 11f0adef ret  */
  ESPCHK(0x11f0ad50u, _esp0);
  ESP += 4; return;
}

/* FUN_1001adf0 @ 0x11f0adf0 (62 bytes, 21 insns) */
void f_11f0adf0(void) {
  FTRACE(0x11f0adf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0adf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0adf1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0adf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0adf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0adf9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11f0adfc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0adff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0ae02 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ae05 add edx, 0x3fe */
  { uint32_t _a=(EDX),_b=(0x3feu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ae0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0ae0e mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11f0ae11 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0ae16 and eax, 0x800f */
  { uint32_t _r=(EAX)&(0x800fu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0ae1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0ae1e shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11f0ae21 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0ae23 mov word ptr [ebp - 6], ax */
  w16((uint32_t)(EBP + -0x6), (AX));
  /* 11f0ae27 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 11f0ae2a mov esp, ebp */
  ESP = (EBP);
  /* 11f0ae2c pop ebp */
  EBP = (pop32());
  /* 11f0ae2d ret  */
  ESPCHK(0x11f0adf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ae30 @ 0x11f0ae30 (45 bytes, 15 insns) */
void f_11f0ae30(void) {
  FTRACE(0x11f0ae30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0ae30 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0ae31 mov ebp, esp */
  EBP = (ESP);
  /* 11f0ae33 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ae34 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11f0ae37 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0ae3c and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0ae41 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f0ae44 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11f0ae48 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f0ae4c sub cx, 0x3fe */
  { uint32_t _a=(CX),_b=(0x3feu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11f0ae51 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11f0ae55 movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11f0ae59 mov esp, ebp */
  ESP = (EBP);
  /* 11f0ae5b pop ebp */
  EBP = (pop32());
  /* 11f0ae5c ret  */
  ESPCHK(0x11f0ae30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ae60 @ 0x11f0ae60 (51 bytes, 18 insns) */
void f_11f0ae60(void) {
  FTRACE(0x11f0ae60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0ae60 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0ae61 mov ebp, esp */
  EBP = (ESP);
  /* 11f0ae63 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11f0ae66 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0ae6b and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0ae70 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f0ae73 movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11f0ae76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0ae79 lea eax, [ecx + edx - 0x3fe] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x3fe));
  /* 11f0ae80 push eax */
  push32((uint32_t)(EAX));
  /* 11f0ae81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0ae84 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ae85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ae88 push edx */
  push32((uint32_t)(EDX));
  /* 11f0ae89 call 0x11f0adf0 */
  push32(0x11f0ae8eu); f_11f0adf0();
  /* 11f0ae8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ae91 pop ebp */
  EBP = (pop32());
  /* 11f0ae92 ret  */
  ESPCHK(0x11f0ae60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aea0 @ 0x11f0aea0 (52 bytes, 18 insns) */
void f_11f0aea0(void) {
  FTRACE(0x11f0aea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0aea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0aea1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0aea3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0aea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0aea9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0aeac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0aeaf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0aeb2 mov edx, dword ptr [ebp + 0xe] */
  EDX = (r32((uint32_t)(EBP + 0xe)));
  /* 11f0aeb5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0aebb and edx, 0x800f */
  { uint32_t _r=(EDX)&(0x800fu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0aec1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0aec4 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f0aec7 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0aec9 mov word ptr [ebp - 2], dx */
  w16((uint32_t)(EBP + -0x2), (DX));
  /* 11f0aecd fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11f0aed0 mov esp, ebp */
  ESP = (EBP);
  /* 11f0aed2 pop ebp */
  EBP = (pop32());
  /* 11f0aed3 ret  */
  ESPCHK(0x11f0aea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aee0 @ 0x11f0aee0 (124 bytes, 37 insns) */
void f_11f0aee0(void) {
  FTRACE(0x11f0aee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0aee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0aee1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0aee3 cmp dword ptr [ebp + 0xc], 0x7ff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0aeea jne 0x11f0aef9 */
  if (!C.zf) goto L_11f0aef9;
  /* 11f0aeec cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0aef0 jne 0x11f0aef9 */
  if (!C.zf) goto L_11f0aef9;
  /* 11f0aef2 mov eax, 1 */
  EAX = (0x1u);
  /* 11f0aef7 jmp 0x11f0af5a */
  goto L_11f0af5a;
L_11f0aef9:;
  /* 11f0aef9 cmp dword ptr [ebp + 0xc], 0xfff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0af00 jne 0x11f0af0f */
  if (!C.zf) goto L_11f0af0f;
  /* 11f0af02 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0af06 jne 0x11f0af0f */
  if (!C.zf) goto L_11f0af0f;
  /* 11f0af08 mov eax, 2 */
  EAX = (0x2u);
  /* 11f0af0d jmp 0x11f0af5a */
  goto L_11f0af5a;
L_11f0af0f:;
  /* 11f0af0f mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11f0af12 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0af17 and eax, 0x7ff8 */
  { uint32_t _r=(EAX)&(0x7ff8u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0af1c cmp eax, 0x7ff8 */
  { uint32_t _a=(EAX),_b=(0x7ff8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0af21 jne 0x11f0af2a */
  if (!C.zf) goto L_11f0af2a;
  /* 11f0af23 mov eax, 3 */
  EAX = (0x3u);
  /* 11f0af28 jmp 0x11f0af5a */
  goto L_11f0af5a;
L_11f0af2a:;
  /* 11f0af2a mov ecx, dword ptr [ebp + 0xe] */
  ECX = (r32((uint32_t)(EBP + 0xe)));
  /* 11f0af2d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0af33 and ecx, 0x7ff8 */
  { uint32_t _r=(ECX)&(0x7ff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11f0af39 cmp ecx, 0x7ff0 */
  { uint32_t _a=(ECX),_b=(0x7ff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0af3f jne 0x11f0af58 */
  if (!C.zf) goto L_11f0af58;
  /* 11f0af41 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0af44 shl edx, 0xd */
  EDX = (sh_shl((uint32_t)(EDX), (0xdu)&0x1f, 32));
  /* 11f0af47 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0af49 jne 0x11f0af51 */
  if (!C.zf) goto L_11f0af51;
  /* 11f0af4b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0af4f je 0x11f0af58 */
  if (C.zf) goto L_11f0af58;
L_11f0af51:;
  /* 11f0af51 mov eax, 4 */
  EAX = (0x4u);
  /* 11f0af56 jmp 0x11f0af5a */
  goto L_11f0af5a;
L_11f0af58:;
  /* 11f0af58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f0af5a:;
  /* 11f0af5a pop ebp */
  EBP = (pop32());
  /* 11f0af5b ret  */
  ESPCHK(0x11f0aee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001af60 @ 0x11f0af60 (313 bytes, 95 insns) */
void f_11f0af60(void) {
  FTRACE(0x11f0af60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0af60 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0af61 mov ebp, esp */
  EBP = (ESP);
  /* 11f0af63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0af66 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 11f0af69 fcomp qword ptr [0x11f2a738] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11f2a738)));
  (void)fpu_pop();
  /* 11f0af6f fnstsw ax */
  AX = fpu_status();
  /* 11f0af71 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 11f0af74 je 0x11f0af90 */
  if (C.zf) goto L_11f0af90;
  /* 11f0af76 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f0af7d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f0af84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11f0af8b jmp 0x11f0b08a */
  goto L_11f0b08a;
L_11f0af90:;
  /* 11f0af90 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11f0af93 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0af98 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0af9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0af9f jne 0x11f0b059 */
  if (!C.zf) goto L_11f0b059;
  /* 11f0afa5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0afa8 shl ecx, 0xc */
  ECX = (sh_shl((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11f0afab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0afad jne 0x11f0afb9 */
  if (!C.zf) goto L_11f0afb9;
  /* 11f0afaf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0afb3 je 0x11f0b059 */
  if (C.zf) goto L_11f0b059;
L_11f0afb9:;
  /* 11f0afb9 mov dword ptr [ebp - 4], 0xfffffc03 */
  w32((uint32_t)(EBP + -0x4), (0xfffffc03u));
  /* 11f0afc0 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 11f0afc3 fcomp qword ptr [0x11f2a738] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11f2a738)));
  (void)fpu_pop();
  /* 11f0afc9 fnstsw ax */
  AX = fpu_status();
  /* 11f0afcb test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11f0afce je 0x11f0afd9 */
  if (C.zf) goto L_11f0afd9;
  /* 11f0afd0 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11f0afd7 jmp 0x11f0afe0 */
  goto L_11f0afe0;
L_11f0afd9:;
  /* 11f0afd9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11f0afe0:;
  /* 11f0afe0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0afe3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11f0afe6:;
  /* 11f0afe6 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11f0afe9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0afee and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0aff1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0aff3 jne 0x11f0b025 */
  if (!C.zf) goto L_11f0b025;
  /* 11f0aff5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0aff8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f0affa mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f0affd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b000 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11f0b006 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0b008 je 0x11f0b012 */
  if (C.zf) goto L_11f0b012;
  /* 11f0b00a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0b00d or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11f0b00f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11f0b012:;
  /* 11f0b012 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b015 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11f0b017 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11f0b01a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b01d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0b020 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11f0b023 jmp 0x11f0afe6 */
  goto L_11f0afe6;
L_11f0b025:;
  /* 11f0b025 mov ax, word ptr [ebp + 0xe] */
  AX = (r16((uint32_t)(EBP + 0xe)));
  /* 11f0b029 and ax, 0xffef */
  { uint32_t _r=(AX)&(0xffefu); AX = (_r); fl_logic(_r,16); }
  /* 11f0b02d mov word ptr [ebp + 0xe], ax */
  w16((uint32_t)(EBP + 0xe), (AX));
  /* 11f0b031 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0b035 je 0x11f0b042 */
  if (C.zf) goto L_11f0b042;
  /* 11f0b037 mov cx, word ptr [ebp + 0xe] */
  CX = (r16((uint32_t)(EBP + 0xe)));
  /* 11f0b03b or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11f0b03e mov word ptr [ebp + 0xe], cx */
  w16((uint32_t)(EBP + 0xe), (CX));
L_11f0b042:;
  /* 11f0b042 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0b044 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0b047 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b048 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b04b push eax */
  push32((uint32_t)(EAX));
  /* 11f0b04c call 0x11f0adf0 */
  push32(0x11f0b051u); f_11f0adf0();
  /* 11f0b051 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b054 fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 11f0b057 jmp 0x11f0b08a */
  goto L_11f0b08a;
L_11f0b059:;
  /* 11f0b059 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0b05b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0b05e push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b05f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b062 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b063 call 0x11f0adf0 */
  push32(0x11f0b068u); f_11f0adf0();
  /* 11f0b068 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b06b fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 11f0b06e mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11f0b071 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0b076 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11f0b07b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11f0b07e movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11f0b081 sub ecx, 0x3fe */
  { uint32_t _a=(ECX),_b=(0x3feu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0b087 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11f0b08a:;
  /* 11f0b08a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0b08d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b090 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11f0b092 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 11f0b095 mov esp, ebp */
  ESP = (EBP);
  /* 11f0b097 pop ebp */
  EBP = (pop32());
  /* 11f0b098 ret  */
  ESPCHK(0x11f0af60u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11f0b0a0 (219 bytes, 64 insns) */
void f_11f0b0a0(void) {
  FTRACE(0x11f0b0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0b0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0b0a1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0b0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b0a4 cmp dword ptr [0x11f309d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0b0ab je 0x11f0b141 */
  if (C.zf) goto L_11f0b141;
  /* 11f0b0b1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11f0b0b3 push 0x11f2b4f4 */
  push32((uint32_t)(0x11f2b4f4u));
  /* 11f0b0b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b0ba push 0xac */
  push32((uint32_t)(0xacu));
  /* 11f0b0bf push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b0c1 call 0x11efbed0 */
  push32(0x11f0b0c6u); f_11efbed0();
  /* 11f0b0c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b0c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0b0cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0b0d0 jne 0x11f0b0dc */
  if (!C.zf) goto L_11f0b0dc;
  /* 11f0b0d2 mov eax, 1 */
  EAX = (0x1u);
  /* 11f0b0d7 jmp 0x11f0b177 */
  goto L_11f0b177;
L_11f0b0dc:;
  /* 11f0b0dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b0df push eax */
  push32((uint32_t)(EAX));
  /* 11f0b0e0 call 0x11f0b180 */
  push32(0x11f0b0e5u); f_11f0b180();
  /* 11f0b0e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b0e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0b0ea je 0x11f0b10d */
  if (C.zf) goto L_11f0b10d;
  /* 11f0b0ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b0ef push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b0f0 call 0x11f0b710 */
  push32(0x11f0b0f5u); f_11f0b710();
  /* 11f0b0f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b0f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b0fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b0fd push edx */
  push32((uint32_t)(EDX));
  /* 11f0b0fe call 0x11efc550 */
  push32(0x11f0b103u); f_11efc550();
  /* 11f0b103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b106 mov eax, 1 */
  EAX = (0x1u);
  /* 11f0b10b jmp 0x11f0b177 */
  goto L_11f0b177;
L_11f0b10d:;
  /* 11f0b10d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b110 mov dword ptr [0x11f2f330], eax */
  w32((uint32_t)(0x11f2f330), (EAX));
  /* 11f0b115 mov ecx, dword ptr [0x11f309e8] */
  ECX = (r32((uint32_t)(0x11f309e8)));
  /* 11f0b11b push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b11c call 0x11f0b710 */
  push32(0x11f0b121u); f_11f0b710();
  /* 11f0b121 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b124 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b126 mov edx, dword ptr [0x11f309e8] */
  EDX = (r32((uint32_t)(0x11f309e8)));
  /* 11f0b12c push edx */
  push32((uint32_t)(EDX));
  /* 11f0b12d call 0x11efc550 */
  push32(0x11f0b132u); f_11efc550();
  /* 11f0b132 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b138 mov dword ptr [0x11f309e8], eax */
  w32((uint32_t)(0x11f309e8), (EAX));
  /* 11f0b13d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0b13f jmp 0x11f0b177 */
  goto L_11f0b177;
L_11f0b141:;
  /* 11f0b141 mov dword ptr [0x11f2f330], 0x11f2f338 */
  w32((uint32_t)(0x11f2f330), (0x11f2f338u));
  /* 11f0b14b mov ecx, dword ptr [0x11f309e8] */
  ECX = (r32((uint32_t)(0x11f309e8)));
  /* 11f0b151 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b152 call 0x11f0b710 */
  push32(0x11f0b157u); f_11f0b710();
  /* 11f0b157 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b15a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b15c mov edx, dword ptr [0x11f309e8] */
  EDX = (r32((uint32_t)(0x11f309e8)));
  /* 11f0b162 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b163 call 0x11efc550 */
  push32(0x11f0b168u); f_11efc550();
  /* 11f0b168 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b16b mov dword ptr [0x11f309e8], 0 */
  w32((uint32_t)(0x11f309e8), (0x0u));
  /* 11f0b175 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f0b177:;
  /* 11f0b177 mov esp, ebp */
  ESP = (EBP);
  /* 11f0b179 pop ebp */
  EBP = (pop32());
  /* 11f0b17a ret  */
  ESPCHK(0x11f0b0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b180 @ 0x11f0b180 (1423 bytes, 533 insns) */
void f_11f0b180(void) {
  FTRACE(0x11f0b180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0b180 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0b181 mov ebp, esp */
  EBP = (ESP);
  /* 11f0b183 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0b186 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11f0b18d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0b18f mov ax, word ptr [0x11f30a22] */
  AX = (r16((uint32_t)(0x11f30a22)));
  /* 11f0b195 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0b198 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b19a mov cx, word ptr [0x11f30a24] */
  CX = (r16((uint32_t)(0x11f30a24)));
  /* 11f0b1a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0b1a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0b1a8 jne 0x11f0b1b2 */
  if (!C.zf) goto L_11f0b1b2;
  /* 11f0b1aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0b1ad jmp 0x11f0b70b */
  goto L_11f0b70b;
L_11f0b1b2:;
  /* 11f0b1b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b1b5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b1b8 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b1b9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11f0b1bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b1be push eax */
  push32((uint32_t)(EAX));
  /* 11f0b1bf push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b1c1 call 0x11f0f7e0 */
  push32(0x11f0b1c6u); f_11f0f7e0();
  /* 11f0b1c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b1c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b1cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b1ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b1d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b1d4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b1d7 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b1d8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11f0b1da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b1dd push eax */
  push32((uint32_t)(EAX));
  /* 11f0b1de push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b1e0 call 0x11f0f7e0 */
  push32(0x11f0b1e5u); f_11f0f7e0();
  /* 11f0b1e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b1e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b1eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b1ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b1f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b1f3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b1f6 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b1f7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11f0b1f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b1fc push eax */
  push32((uint32_t)(EAX));
  /* 11f0b1fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b1ff call 0x11f0f7e0 */
  push32(0x11f0b204u); f_11f0f7e0();
  /* 11f0b204 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b207 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b20a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b20c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b20f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b212 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b215 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b216 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11f0b218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b21b push eax */
  push32((uint32_t)(EAX));
  /* 11f0b21c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b21e call 0x11f0f7e0 */
  push32(0x11f0b223u); f_11f0f7e0();
  /* 11f0b223 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b226 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b229 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b22b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b22e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b231 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b234 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b235 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11f0b237 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b23a push eax */
  push32((uint32_t)(EAX));
  /* 11f0b23b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b23d call 0x11f0f7e0 */
  push32(0x11f0b242u); f_11f0f7e0();
  /* 11f0b242 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b245 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b248 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b24a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b24d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b250 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b253 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b254 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11f0b256 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b259 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b25a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b25c call 0x11f0f7e0 */
  push32(0x11f0b261u); f_11f0f7e0();
  /* 11f0b261 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b264 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b267 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b269 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b26c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b26f push edx */
  push32((uint32_t)(EDX));
  /* 11f0b270 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11f0b272 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b275 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b276 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b278 call 0x11f0f7e0 */
  push32(0x11f0b27du); f_11f0f7e0();
  /* 11f0b27d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b280 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b283 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b285 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b288 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b28b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b28e push edx */
  push32((uint32_t)(EDX));
  /* 11f0b28f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11f0b291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b294 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b295 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b297 call 0x11f0f7e0 */
  push32(0x11f0b29cu); f_11f0f7e0();
  /* 11f0b29c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b29f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b2a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b2a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b2a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b2aa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b2ad push edx */
  push32((uint32_t)(EDX));
  /* 11f0b2ae push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11f0b2b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b2b3 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b2b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b2b6 call 0x11f0f7e0 */
  push32(0x11f0b2bbu); f_11f0f7e0();
  /* 11f0b2bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b2be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b2c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b2c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b2c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b2c9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b2cc push edx */
  push32((uint32_t)(EDX));
  /* 11f0b2cd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11f0b2cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b2d2 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b2d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b2d5 call 0x11f0f7e0 */
  push32(0x11f0b2dau); f_11f0f7e0();
  /* 11f0b2da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b2dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b2e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b2e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b2e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b2e8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b2eb push edx */
  push32((uint32_t)(EDX));
  /* 11f0b2ec push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11f0b2ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b2f1 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b2f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b2f4 call 0x11f0f7e0 */
  push32(0x11f0b2f9u); f_11f0f7e0();
  /* 11f0b2f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b2fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b2ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b301 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b304 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b307 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b30a push edx */
  push32((uint32_t)(EDX));
  /* 11f0b30b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11f0b30d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b310 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b311 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b313 call 0x11f0f7e0 */
  push32(0x11f0b318u); f_11f0f7e0();
  /* 11f0b318 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b31b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b31e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b320 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b323 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b326 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b329 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b32a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11f0b32c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b32f push eax */
  push32((uint32_t)(EAX));
  /* 11f0b330 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b332 call 0x11f0f7e0 */
  push32(0x11f0b337u); f_11f0f7e0();
  /* 11f0b337 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b33a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b33d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b33f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b342 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b345 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b348 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b349 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11f0b34b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b34e push eax */
  push32((uint32_t)(EAX));
  /* 11f0b34f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b351 call 0x11f0f7e0 */
  push32(0x11f0b356u); f_11f0f7e0();
  /* 11f0b356 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b359 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b35c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b35e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b361 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b364 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b367 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b368 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11f0b36a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b36d push eax */
  push32((uint32_t)(EAX));
  /* 11f0b36e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b370 call 0x11f0f7e0 */
  push32(0x11f0b375u); f_11f0f7e0();
  /* 11f0b375 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b378 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b37b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b37d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b380 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b383 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b386 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b387 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11f0b389 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b38c push eax */
  push32((uint32_t)(EAX));
  /* 11f0b38d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b38f call 0x11f0f7e0 */
  push32(0x11f0b394u); f_11f0f7e0();
  /* 11f0b394 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b397 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b39a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b39c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b39f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b3a2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b3a5 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b3a6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11f0b3a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b3ab push eax */
  push32((uint32_t)(EAX));
  /* 11f0b3ac push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b3ae call 0x11f0f7e0 */
  push32(0x11f0b3b3u); f_11f0f7e0();
  /* 11f0b3b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b3b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b3b9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b3bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b3be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b3c1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b3c4 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b3c5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11f0b3c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b3ca push eax */
  push32((uint32_t)(EAX));
  /* 11f0b3cb push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b3cd call 0x11f0f7e0 */
  push32(0x11f0b3d2u); f_11f0f7e0();
  /* 11f0b3d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b3d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b3d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b3da mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b3dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b3e0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b3e3 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b3e4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11f0b3e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b3e9 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b3ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b3ec call 0x11f0f7e0 */
  push32(0x11f0b3f1u); f_11f0f7e0();
  /* 11f0b3f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b3f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b3f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b3f9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b3fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b3ff add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b402 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b403 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11f0b405 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b408 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b409 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b40b call 0x11f0f7e0 */
  push32(0x11f0b410u); f_11f0f7e0();
  /* 11f0b410 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b413 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b416 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b418 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b41b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b41e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b421 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b422 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11f0b424 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b427 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b428 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b42a call 0x11f0f7e0 */
  push32(0x11f0b42fu); f_11f0f7e0();
  /* 11f0b42f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b432 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b435 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b437 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b43a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b43d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b440 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b441 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11f0b443 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b446 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b447 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b449 call 0x11f0f7e0 */
  push32(0x11f0b44eu); f_11f0f7e0();
  /* 11f0b44e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b451 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b454 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b456 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b459 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b45c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b45f push edx */
  push32((uint32_t)(EDX));
  /* 11f0b460 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11f0b462 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b465 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b466 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b468 call 0x11f0f7e0 */
  push32(0x11f0b46du); f_11f0f7e0();
  /* 11f0b46d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b470 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b473 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b475 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b478 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b47b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b47e push edx */
  push32((uint32_t)(EDX));
  /* 11f0b47f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11f0b481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b484 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b485 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b487 call 0x11f0f7e0 */
  push32(0x11f0b48cu); f_11f0f7e0();
  /* 11f0b48c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b48f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b492 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b494 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b497 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b49a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b49d push edx */
  push32((uint32_t)(EDX));
  /* 11f0b49e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11f0b4a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b4a3 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b4a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b4a6 call 0x11f0f7e0 */
  push32(0x11f0b4abu); f_11f0f7e0();
  /* 11f0b4ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b4ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b4b1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b4b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b4b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b4b9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b4bc push edx */
  push32((uint32_t)(EDX));
  /* 11f0b4bd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11f0b4bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b4c2 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b4c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b4c5 call 0x11f0f7e0 */
  push32(0x11f0b4cau); f_11f0f7e0();
  /* 11f0b4ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b4cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b4d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b4d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b4d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b4d8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b4db push edx */
  push32((uint32_t)(EDX));
  /* 11f0b4dc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11f0b4de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b4e1 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b4e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b4e4 call 0x11f0f7e0 */
  push32(0x11f0b4e9u); f_11f0f7e0();
  /* 11f0b4e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b4ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b4ef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b4f1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b4f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b4f7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b4fa push edx */
  push32((uint32_t)(EDX));
  /* 11f0b4fb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11f0b4fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b500 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b501 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b503 call 0x11f0f7e0 */
  push32(0x11f0b508u); f_11f0f7e0();
  /* 11f0b508 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b50b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b50e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b510 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b513 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b516 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b519 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b51a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11f0b51c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b51f push eax */
  push32((uint32_t)(EAX));
  /* 11f0b520 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b522 call 0x11f0f7e0 */
  push32(0x11f0b527u); f_11f0f7e0();
  /* 11f0b527 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b52a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b52d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b52f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b532 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b535 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b538 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b539 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11f0b53b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b53e push eax */
  push32((uint32_t)(EAX));
  /* 11f0b53f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b541 call 0x11f0f7e0 */
  push32(0x11f0b546u); f_11f0f7e0();
  /* 11f0b546 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b549 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b54c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b54e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b551 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b554 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b557 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b558 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11f0b55a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b55d push eax */
  push32((uint32_t)(EAX));
  /* 11f0b55e push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b560 call 0x11f0f7e0 */
  push32(0x11f0b565u); f_11f0f7e0();
  /* 11f0b565 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b568 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b56b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b56d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b570 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b573 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b576 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b577 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11f0b579 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b57c push eax */
  push32((uint32_t)(EAX));
  /* 11f0b57d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b57f call 0x11f0f7e0 */
  push32(0x11f0b584u); f_11f0f7e0();
  /* 11f0b584 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b587 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b58a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b58c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b58f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b592 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b598 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b599 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11f0b59b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b59e push eax */
  push32((uint32_t)(EAX));
  /* 11f0b59f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b5a1 call 0x11f0f7e0 */
  push32(0x11f0b5a6u); f_11f0f7e0();
  /* 11f0b5a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b5a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b5ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b5ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b5b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b5b4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b5ba push edx */
  push32((uint32_t)(EDX));
  /* 11f0b5bb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11f0b5bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b5c0 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b5c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b5c3 call 0x11f0f7e0 */
  push32(0x11f0b5c8u); f_11f0f7e0();
  /* 11f0b5c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b5cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b5ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b5d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b5d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b5d6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b5dc push edx */
  push32((uint32_t)(EDX));
  /* 11f0b5dd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f0b5df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b5e2 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b5e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b5e5 call 0x11f0f7e0 */
  push32(0x11f0b5eau); f_11f0f7e0();
  /* 11f0b5ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b5ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b5f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b5f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b5f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b5f8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b5fe push edx */
  push32((uint32_t)(EDX));
  /* 11f0b5ff push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11f0b601 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b604 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b605 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b607 call 0x11f0f7e0 */
  push32(0x11f0b60cu); f_11f0f7e0();
  /* 11f0b60c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b60f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b612 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b614 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b617 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b61a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b620 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b621 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11f0b623 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b626 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b627 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b629 call 0x11f0f7e0 */
  push32(0x11f0b62eu); f_11f0f7e0();
  /* 11f0b62e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b631 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b634 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b636 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b639 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b63c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b642 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b643 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11f0b645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b648 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b649 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b64b call 0x11f0f7e0 */
  push32(0x11f0b650u); f_11f0f7e0();
  /* 11f0b650 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b653 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b656 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b658 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b65b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b65e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b664 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b665 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11f0b667 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b66a push eax */
  push32((uint32_t)(EAX));
  /* 11f0b66b push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b66d call 0x11f0f7e0 */
  push32(0x11f0b672u); f_11f0f7e0();
  /* 11f0b672 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b675 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b678 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b67a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b67d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b680 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b686 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b687 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11f0b689 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0b68c push eax */
  push32((uint32_t)(EAX));
  /* 11f0b68d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b68f call 0x11f0f7e0 */
  push32(0x11f0b694u); f_11f0f7e0();
  /* 11f0b694 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b697 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b69a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b69c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b69f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b6a2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b6a8 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b6a9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11f0b6ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0b6ae push eax */
  push32((uint32_t)(EAX));
  /* 11f0b6af push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b6b1 call 0x11f0f7e0 */
  push32(0x11f0b6b6u); f_11f0f7e0();
  /* 11f0b6b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b6b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b6bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b6be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b6c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b6c4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b6ca push edx */
  push32((uint32_t)(EDX));
  /* 11f0b6cb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11f0b6cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0b6d0 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b6d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b6d3 call 0x11f0f7e0 */
  push32(0x11f0b6d8u); f_11f0f7e0();
  /* 11f0b6d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b6db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b6de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b6e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b6e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b6e6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b6ec push edx */
  push32((uint32_t)(EDX));
  /* 11f0b6ed push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11f0b6f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0b6f5 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b6f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0b6f8 call 0x11f0f7e0 */
  push32(0x11f0b6fdu); f_11f0f7e0();
  /* 11f0b6fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b700 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0b703 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0b705 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11f0b708 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11f0b70b:;
  /* 11f0b70b mov esp, ebp */
  ESP = (EBP);
  /* 11f0b70d pop ebp */
  EBP = (pop32());
  /* 11f0b70e ret  */
  ESPCHK(0x11f0b180u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11f0b710 (779 bytes, 265 insns) */
void f_11f0b710(void) {
  FTRACE(0x11f0b710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0b710 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0b711 mov ebp, esp */
  EBP = (ESP);
  /* 11f0b713 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0b717 jne 0x11f0b71e */
  if (!C.zf) goto L_11f0b71e;
  /* 11f0b719 jmp 0x11f0ba19 */
  goto L_11f0ba19;
L_11f0b71e:;
  /* 11f0b71e push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b723 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f0b726 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b727 call 0x11efc550 */
  push32(0x11f0b72cu); f_11efc550();
  /* 11f0b72c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b72f push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b731 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b734 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f0b737 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b738 call 0x11efc550 */
  push32(0x11f0b73du); f_11efc550();
  /* 11f0b73d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b740 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b742 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b745 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f0b748 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b749 call 0x11efc550 */
  push32(0x11f0b74eu); f_11efc550();
  /* 11f0b74e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b751 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b753 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b756 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f0b759 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b75a call 0x11efc550 */
  push32(0x11f0b75fu); f_11efc550();
  /* 11f0b75f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b762 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b764 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b767 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11f0b76a push eax */
  push32((uint32_t)(EAX));
  /* 11f0b76b call 0x11efc550 */
  push32(0x11f0b770u); f_11efc550();
  /* 11f0b770 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b773 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b775 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b778 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11f0b77b push edx */
  push32((uint32_t)(EDX));
  /* 11f0b77c call 0x11efc550 */
  push32(0x11f0b781u); f_11efc550();
  /* 11f0b781 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b784 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b789 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0b78b push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b78c call 0x11efc550 */
  push32(0x11f0b791u); f_11efc550();
  /* 11f0b791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b794 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b796 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b799 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11f0b79c push eax */
  push32((uint32_t)(EAX));
  /* 11f0b79d call 0x11efc550 */
  push32(0x11f0b7a2u); f_11efc550();
  /* 11f0b7a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b7a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b7a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b7aa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11f0b7ad push edx */
  push32((uint32_t)(EDX));
  /* 11f0b7ae call 0x11efc550 */
  push32(0x11f0b7b3u); f_11efc550();
  /* 11f0b7b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b7b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b7b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b7bb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11f0b7be push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b7bf call 0x11efc550 */
  push32(0x11f0b7c4u); f_11efc550();
  /* 11f0b7c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b7c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b7c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b7cc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11f0b7cf push eax */
  push32((uint32_t)(EAX));
  /* 11f0b7d0 call 0x11efc550 */
  push32(0x11f0b7d5u); f_11efc550();
  /* 11f0b7d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b7d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b7da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b7dd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11f0b7e0 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b7e1 call 0x11efc550 */
  push32(0x11f0b7e6u); f_11efc550();
  /* 11f0b7e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b7e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b7eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b7ee mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11f0b7f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b7f2 call 0x11efc550 */
  push32(0x11f0b7f7u); f_11efc550();
  /* 11f0b7f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b7fa push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b7fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b7ff mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11f0b802 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b803 call 0x11efc550 */
  push32(0x11f0b808u); f_11efc550();
  /* 11f0b808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b80b push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b80d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b810 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11f0b813 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b814 call 0x11efc550 */
  push32(0x11f0b819u); f_11efc550();
  /* 11f0b819 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b81c push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b81e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b821 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11f0b824 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b825 call 0x11efc550 */
  push32(0x11f0b82au); f_11efc550();
  /* 11f0b82a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b82d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b82f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b832 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11f0b835 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b836 call 0x11efc550 */
  push32(0x11f0b83bu); f_11efc550();
  /* 11f0b83b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b83e push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b840 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b843 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11f0b846 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b847 call 0x11efc550 */
  push32(0x11f0b84cu); f_11efc550();
  /* 11f0b84c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b84f push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b851 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b854 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11f0b857 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b858 call 0x11efc550 */
  push32(0x11f0b85du); f_11efc550();
  /* 11f0b85d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b860 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b862 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b865 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11f0b868 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b869 call 0x11efc550 */
  push32(0x11f0b86eu); f_11efc550();
  /* 11f0b86e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b871 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b873 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b876 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11f0b879 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b87a call 0x11efc550 */
  push32(0x11f0b87fu); f_11efc550();
  /* 11f0b87f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b882 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b887 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11f0b88a push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b88b call 0x11efc550 */
  push32(0x11f0b890u); f_11efc550();
  /* 11f0b890 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b893 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b895 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b898 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11f0b89b push eax */
  push32((uint32_t)(EAX));
  /* 11f0b89c call 0x11efc550 */
  push32(0x11f0b8a1u); f_11efc550();
  /* 11f0b8a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b8a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b8a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b8a9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11f0b8ac push edx */
  push32((uint32_t)(EDX));
  /* 11f0b8ad call 0x11efc550 */
  push32(0x11f0b8b2u); f_11efc550();
  /* 11f0b8b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b8b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b8b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b8ba mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11f0b8bd push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b8be call 0x11efc550 */
  push32(0x11f0b8c3u); f_11efc550();
  /* 11f0b8c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b8c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b8c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b8cb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11f0b8ce push eax */
  push32((uint32_t)(EAX));
  /* 11f0b8cf call 0x11efc550 */
  push32(0x11f0b8d4u); f_11efc550();
  /* 11f0b8d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b8d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b8d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b8dc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11f0b8df push edx */
  push32((uint32_t)(EDX));
  /* 11f0b8e0 call 0x11efc550 */
  push32(0x11f0b8e5u); f_11efc550();
  /* 11f0b8e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b8e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b8ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b8ed mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11f0b8f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b8f1 call 0x11efc550 */
  push32(0x11f0b8f6u); f_11efc550();
  /* 11f0b8f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b8f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b8fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b8fe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11f0b901 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b902 call 0x11efc550 */
  push32(0x11f0b907u); f_11efc550();
  /* 11f0b907 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b90a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b90c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b90f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11f0b912 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b913 call 0x11efc550 */
  push32(0x11f0b918u); f_11efc550();
  /* 11f0b918 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b91b push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b91d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b920 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11f0b923 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b924 call 0x11efc550 */
  push32(0x11f0b929u); f_11efc550();
  /* 11f0b929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b92c push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b92e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b931 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11f0b934 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b935 call 0x11efc550 */
  push32(0x11f0b93au); f_11efc550();
  /* 11f0b93a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b93d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b93f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b942 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11f0b948 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b949 call 0x11efc550 */
  push32(0x11f0b94eu); f_11efc550();
  /* 11f0b94e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b951 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b953 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b956 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11f0b95c push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b95d call 0x11efc550 */
  push32(0x11f0b962u); f_11efc550();
  /* 11f0b962 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b965 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b967 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b96a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11f0b970 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b971 call 0x11efc550 */
  push32(0x11f0b976u); f_11efc550();
  /* 11f0b976 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b979 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b97b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b97e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11f0b984 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b985 call 0x11efc550 */
  push32(0x11f0b98au); f_11efc550();
  /* 11f0b98a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b98d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b98f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b992 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11f0b998 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b999 call 0x11efc550 */
  push32(0x11f0b99eu); f_11efc550();
  /* 11f0b99e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b9a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b9a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b9a6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11f0b9ac push eax */
  push32((uint32_t)(EAX));
  /* 11f0b9ad call 0x11efc550 */
  push32(0x11f0b9b2u); f_11efc550();
  /* 11f0b9b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b9b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b9b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b9ba mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11f0b9c0 push edx */
  push32((uint32_t)(EDX));
  /* 11f0b9c1 call 0x11efc550 */
  push32(0x11f0b9c6u); f_11efc550();
  /* 11f0b9c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b9c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b9cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b9ce mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11f0b9d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0b9d5 call 0x11efc550 */
  push32(0x11f0b9dau); f_11efc550();
  /* 11f0b9da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b9dd push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b9df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b9e2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11f0b9e8 push eax */
  push32((uint32_t)(EAX));
  /* 11f0b9e9 call 0x11efc550 */
  push32(0x11f0b9eeu); f_11efc550();
  /* 11f0b9ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0b9f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0b9f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0b9f6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11f0b9fc push edx */
  push32((uint32_t)(EDX));
  /* 11f0b9fd call 0x11efc550 */
  push32(0x11f0ba02u); f_11efc550();
  /* 11f0ba02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ba05 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0ba07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0ba0a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11f0ba10 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ba11 call 0x11efc550 */
  push32(0x11f0ba16u); f_11efc550();
  /* 11f0ba16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0ba19:;
  /* 11f0ba19 pop ebp */
  EBP = (pop32());
  /* 11f0ba1a ret  */
  ESPCHK(0x11f0b710u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ba20 @ 0x11f0ba20 (678 bytes, 180 insns) */
void f_11f0ba20(void) {
  FTRACE(0x11f0ba20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0ba20 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0ba21 mov ebp, esp */
  EBP = (ESP);
  /* 11f0ba23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0ba26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f0ba2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0ba2f mov ax, word ptr [0x11f30a1e] */
  AX = (r16((uint32_t)(0x11f30a1e)));
  /* 11f0ba35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0ba38 cmp dword ptr [0x11f309d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0ba3f je 0x11f0bb9a */
  if (C.zf) goto L_11f0bb9a;
  /* 11f0ba45 push 0x11f309ec */
  push32((uint32_t)(0x11f309ecu));
  /* 11f0ba4a push 0xe */
  push32((uint32_t)(0xeu));
  /* 11f0ba4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0ba4f push ecx */
  push32((uint32_t)(ECX));
  /* 11f0ba50 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0ba52 call 0x11f0f7e0 */
  push32(0x11f0ba57u); f_11f0f7e0();
  /* 11f0ba57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ba5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0ba5d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0ba5f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11f0ba62 push 0x11f309f0 */
  push32((uint32_t)(0x11f309f0u));
  /* 11f0ba67 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11f0ba69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0ba6c push eax */
  push32((uint32_t)(EAX));
  /* 11f0ba6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0ba6f call 0x11f0f7e0 */
  push32(0x11f0ba74u); f_11f0f7e0();
  /* 11f0ba74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ba77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0ba7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0ba7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0ba7f push 0x11f309f4 */
  push32((uint32_t)(0x11f309f4u));
  /* 11f0ba84 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11f0ba86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0ba89 push edx */
  push32((uint32_t)(EDX));
  /* 11f0ba8a push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0ba8c call 0x11f0f7e0 */
  push32(0x11f0ba91u); f_11f0f7e0();
  /* 11f0ba91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0ba94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0ba97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0ba99 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0ba9c mov edx, dword ptr [0x11f309f4] */
  EDX = (r32((uint32_t)(0x11f309f4)));
  /* 11f0baa2 push edx */
  push32((uint32_t)(EDX));
  /* 11f0baa3 call 0x11f0bcd0 */
  push32(0x11f0baa8u); f_11f0bcd0();
  /* 11f0baa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0baab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0baaf je 0x11f0bb09 */
  if (C.zf) goto L_11f0bb09;
  /* 11f0bab1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bab3 mov eax, dword ptr [0x11f309ec] */
  EAX = (r32((uint32_t)(0x11f309ec)));
  /* 11f0bab8 push eax */
  push32((uint32_t)(EAX));
  /* 11f0bab9 call 0x11efc550 */
  push32(0x11f0babeu); f_11efc550();
  /* 11f0babe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bac1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bac3 mov ecx, dword ptr [0x11f309f0] */
  ECX = (r32((uint32_t)(0x11f309f0)));
  /* 11f0bac9 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0baca call 0x11efc550 */
  push32(0x11f0bacfu); f_11efc550();
  /* 11f0bacf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bad2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bad4 mov edx, dword ptr [0x11f309f4] */
  EDX = (r32((uint32_t)(0x11f309f4)));
  /* 11f0bada push edx */
  push32((uint32_t)(EDX));
  /* 11f0badb call 0x11efc550 */
  push32(0x11f0bae0u); f_11efc550();
  /* 11f0bae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bae3 mov dword ptr [0x11f309ec], 0 */
  w32((uint32_t)(0x11f309ec), (0x0u));
  /* 11f0baed mov dword ptr [0x11f309f0], 0 */
  w32((uint32_t)(0x11f309f0), (0x0u));
  /* 11f0baf7 mov dword ptr [0x11f309f4], 0 */
  w32((uint32_t)(0x11f309f4), (0x0u));
  /* 11f0bb01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0bb04 jmp 0x11f0bcc2 */
  goto L_11f0bcc2;
L_11f0bb09:;
  /* 11f0bb09 mov eax, dword ptr [0x11f2f420] */
  EAX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bb0e cmp dword ptr [eax], 0x11f2f3e8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11f2f3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0bb14 je 0x11f0bb50 */
  if (C.zf) goto L_11f0bb50;
  /* 11f0bb16 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bb18 mov ecx, dword ptr [0x11f2f420] */
  ECX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bb1e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0bb20 push edx */
  push32((uint32_t)(EDX));
  /* 11f0bb21 call 0x11efc550 */
  push32(0x11f0bb26u); f_11efc550();
  /* 11f0bb26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bb29 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bb2b mov eax, dword ptr [0x11f2f420] */
  EAX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bb30 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f0bb33 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0bb34 call 0x11efc550 */
  push32(0x11f0bb39u); f_11efc550();
  /* 11f0bb39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bb3c push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bb3e mov edx, dword ptr [0x11f2f420] */
  EDX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bb44 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f0bb47 push eax */
  push32((uint32_t)(EAX));
  /* 11f0bb48 call 0x11efc550 */
  push32(0x11f0bb4du); f_11efc550();
  /* 11f0bb4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0bb50:;
  /* 11f0bb50 mov ecx, dword ptr [0x11f2f420] */
  ECX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bb56 mov edx, dword ptr [0x11f309ec] */
  EDX = (r32((uint32_t)(0x11f309ec)));
  /* 11f0bb5c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11f0bb5e mov eax, dword ptr [0x11f2f420] */
  EAX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bb63 mov ecx, dword ptr [0x11f309f0] */
  ECX = (r32((uint32_t)(0x11f309f0)));
  /* 11f0bb69 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11f0bb6c mov edx, dword ptr [0x11f2f420] */
  EDX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bb72 mov eax, dword ptr [0x11f309f4] */
  EAX = (r32((uint32_t)(0x11f309f4)));
  /* 11f0bb77 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11f0bb7a mov ecx, dword ptr [0x11f2f420] */
  ECX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bb80 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0bb82 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0bb84 mov byte ptr [0x11f2e054], al */
  w8((uint32_t)(0x11f2e054), (AL));
  /* 11f0bb89 mov dword ptr [0x11f2e058], 1 */
  w32((uint32_t)(0x11f2e058), (0x1u));
  /* 11f0bb93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0bb95 jmp 0x11f0bcc2 */
  goto L_11f0bcc2;
L_11f0bb9a:;
  /* 11f0bb9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bb9c mov ecx, dword ptr [0x11f309ec] */
  ECX = (r32((uint32_t)(0x11f309ec)));
  /* 11f0bba2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0bba3 call 0x11efc550 */
  push32(0x11f0bba8u); f_11efc550();
  /* 11f0bba8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bbab push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bbad mov edx, dword ptr [0x11f309f0] */
  EDX = (r32((uint32_t)(0x11f309f0)));
  /* 11f0bbb3 push edx */
  push32((uint32_t)(EDX));
  /* 11f0bbb4 call 0x11efc550 */
  push32(0x11f0bbb9u); f_11efc550();
  /* 11f0bbb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bbbc push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bbbe mov eax, dword ptr [0x11f309f4] */
  EAX = (r32((uint32_t)(0x11f309f4)));
  /* 11f0bbc3 push eax */
  push32((uint32_t)(EAX));
  /* 11f0bbc4 call 0x11efc550 */
  push32(0x11f0bbc9u); f_11efc550();
  /* 11f0bbc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bbcc mov dword ptr [0x11f309ec], 0 */
  w32((uint32_t)(0x11f309ec), (0x0u));
  /* 11f0bbd6 mov dword ptr [0x11f309f0], 0 */
  w32((uint32_t)(0x11f309f0), (0x0u));
  /* 11f0bbe0 mov dword ptr [0x11f309f4], 0 */
  w32((uint32_t)(0x11f309f4), (0x0u));
  /* 11f0bbea push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11f0bbef push 0x11f2b500 */
  push32((uint32_t)(0x11f2b500u));
  /* 11f0bbf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bbf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bbf8 call 0x11efbac0 */
  push32(0x11f0bbfdu); f_11efbac0();
  /* 11f0bbfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bc00 mov ecx, dword ptr [0x11f2f420] */
  ECX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bc06 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11f0bc08 mov edx, dword ptr [0x11f2f420] */
  EDX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bc0e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0bc11 jne 0x11f0bc1b */
  if (!C.zf) goto L_11f0bc1b;
  /* 11f0bc13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0bc16 jmp 0x11f0bcc2 */
  goto L_11f0bcc2;
L_11f0bc1b:;
  /* 11f0bc1b push 0x11f2b4a0 */
  push32((uint32_t)(0x11f2b4a0u));
  /* 11f0bc20 mov eax, dword ptr [0x11f2f420] */
  EAX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bc25 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11f0bc27 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0bc28 call 0x11f001d0 */
  push32(0x11f0bc2du); f_11f001d0();
  /* 11f0bc2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bc30 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11f0bc35 push 0x11f2b500 */
  push32((uint32_t)(0x11f2b500u));
  /* 11f0bc3a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bc3c push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bc3e call 0x11efbac0 */
  push32(0x11f0bc43u); f_11efbac0();
  /* 11f0bc43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bc46 mov edx, dword ptr [0x11f2f420] */
  EDX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bc4c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11f0bc4f mov eax, dword ptr [0x11f2f420] */
  EAX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bc54 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0bc58 jne 0x11f0bc5f */
  if (!C.zf) goto L_11f0bc5f;
  /* 11f0bc5a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0bc5d jmp 0x11f0bcc2 */
  goto L_11f0bcc2;
L_11f0bc5f:;
  /* 11f0bc5f mov ecx, dword ptr [0x11f2f420] */
  ECX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bc65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f0bc68 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11f0bc6b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11f0bc70 push 0x11f2b500 */
  push32((uint32_t)(0x11f2b500u));
  /* 11f0bc75 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bc77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bc79 call 0x11efbac0 */
  push32(0x11f0bc7eu); f_11efbac0();
  /* 11f0bc7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bc81 mov ecx, dword ptr [0x11f2f420] */
  ECX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bc87 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11f0bc8a mov edx, dword ptr [0x11f2f420] */
  EDX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bc90 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0bc94 jne 0x11f0bc9b */
  if (!C.zf) goto L_11f0bc9b;
  /* 11f0bc96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0bc99 jmp 0x11f0bcc2 */
  goto L_11f0bcc2;
L_11f0bc9b:;
  /* 11f0bc9b mov eax, dword ptr [0x11f2f420] */
  EAX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bca0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11f0bca3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11f0bca6 mov edx, dword ptr [0x11f2f420] */
  EDX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bcac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11f0bcae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f0bcb0 mov byte ptr [0x11f2e054], cl */
  w8((uint32_t)(0x11f2e054), (CL));
  /* 11f0bcb6 mov dword ptr [0x11f2e058], 1 */
  w32((uint32_t)(0x11f2e058), (0x1u));
  /* 11f0bcc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f0bcc2:;
  /* 11f0bcc2 mov esp, ebp */
  ESP = (EBP);
  /* 11f0bcc4 pop ebp */
  EBP = (pop32());
  /* 11f0bcc5 ret  */
  ESPCHK(0x11f0ba20u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11f0bcd0 (125 bytes, 49 insns) */
void f_11f0bcd0(void) {
  FTRACE(0x11f0bcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0bcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0bcd1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0bcd3 push ecx */
  push32((uint32_t)(ECX));
L_11f0bcd4:;
  /* 11f0bcd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bcd7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0bcda test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0bcdc je 0x11f0bd49 */
  if (C.zf) goto L_11f0bd49;
  /* 11f0bcde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bce1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f0bce4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0bce7 jl 0x11f0bd0d */
  if ((C.sf!=C.of)) goto L_11f0bd0d;
  /* 11f0bce9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bcec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f0bcef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0bcf2 jg 0x11f0bd0d */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0bd0d;
  /* 11f0bcf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bcf7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0bcfa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0bcfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bd00 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11f0bd02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bd05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bd08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0bd0b jmp 0x11f0bd47 */
  goto L_11f0bd47;
L_11f0bd0d:;
  /* 11f0bd0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bd10 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f0bd13 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0bd16 jne 0x11f0bd3e */
  if (!C.zf) goto L_11f0bd3e;
  /* 11f0bd18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bd1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f0bd1e:;
  /* 11f0bd1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bd21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bd24 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11f0bd27 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11f0bd29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bd2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bd2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0bd32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bd35 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f0bd38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0bd3a jne 0x11f0bd1e */
  if (!C.zf) goto L_11f0bd1e;
  /* 11f0bd3c jmp 0x11f0bd47 */
  goto L_11f0bd47;
L_11f0bd3e:;
  /* 11f0bd3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bd41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bd44 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11f0bd47:;
  /* 11f0bd47 jmp 0x11f0bcd4 */
  goto L_11f0bcd4;
L_11f0bd49:;
  /* 11f0bd49 mov esp, ebp */
  ESP = (EBP);
  /* 11f0bd4b pop ebp */
  EBP = (pop32());
  /* 11f0bd4c ret  */
  ESPCHK(0x11f0bcd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bd50 @ 0x11f0bd50 (304 bytes, 85 insns) */
void f_11f0bd50(void) {
  FTRACE(0x11f0bd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0bd50 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0bd51 mov ebp, esp */
  EBP = (ESP);
  /* 11f0bd53 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0bd54 cmp dword ptr [0x11f309cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0bd5b je 0x11f0be1c */
  if (C.zf) goto L_11f0be1c;
  /* 11f0bd61 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11f0bd63 push 0x11f2b50c */
  push32((uint32_t)(0x11f2b50cu));
  /* 11f0bd68 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bd6a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11f0bd6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0bd6e call 0x11efbed0 */
  push32(0x11f0bd73u); f_11efbed0();
  /* 11f0bd73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bd76 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0bd79 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0bd7d jne 0x11f0bd89 */
  if (!C.zf) goto L_11f0bd89;
  /* 11f0bd7f mov eax, 1 */
  EAX = (0x1u);
  /* 11f0bd84 jmp 0x11f0be7c */
  goto L_11f0be7c;
L_11f0bd89:;
  /* 11f0bd89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bd8c push eax */
  push32((uint32_t)(EAX));
  /* 11f0bd8d call 0x11f0be80 */
  push32(0x11f0bd92u); f_11f0be80();
  /* 11f0bd92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bd95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0bd97 je 0x11f0bdbd */
  if (C.zf) goto L_11f0bdbd;
  /* 11f0bd99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bd9c push ecx */
  push32((uint32_t)(ECX));
  /* 11f0bd9d call 0x11f0c110 */
  push32(0x11f0bda2u); f_11f0c110();
  /* 11f0bda2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bda5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0bda7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bdaa push edx */
  push32((uint32_t)(EDX));
  /* 11f0bdab call 0x11efc550 */
  push32(0x11f0bdb0u); f_11efc550();
  /* 11f0bdb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bdb3 mov eax, 1 */
  EAX = (0x1u);
  /* 11f0bdb8 jmp 0x11f0be7c */
  goto L_11f0be7c;
L_11f0bdbd:;
  /* 11f0bdbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bdc0 mov ecx, dword ptr [0x11f2f420] */
  ECX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bdc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0bdc8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0bdca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bdcd mov ecx, dword ptr [0x11f2f420] */
  ECX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bdd3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11f0bdd6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11f0bdd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bddc mov ecx, dword ptr [0x11f2f420] */
  ECX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0bde2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11f0bde5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11f0bde8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bdeb mov dword ptr [0x11f2f420], eax */
  w32((uint32_t)(0x11f2f420), (EAX));
  /* 11f0bdf0 mov ecx, dword ptr [0x11f309f8] */
  ECX = (r32((uint32_t)(0x11f309f8)));
  /* 11f0bdf6 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0bdf7 call 0x11f0c110 */
  push32(0x11f0bdfcu); f_11f0c110();
  /* 11f0bdfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bdff push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0be01 mov edx, dword ptr [0x11f309f8] */
  EDX = (r32((uint32_t)(0x11f309f8)));
  /* 11f0be07 push edx */
  push32((uint32_t)(EDX));
  /* 11f0be08 call 0x11efc550 */
  push32(0x11f0be0du); f_11efc550();
  /* 11f0be0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0be10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0be13 mov dword ptr [0x11f309f8], eax */
  w32((uint32_t)(0x11f309f8), (EAX));
  /* 11f0be18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0be1a jmp 0x11f0be7c */
  goto L_11f0be7c;
L_11f0be1c:;
  /* 11f0be1c mov ecx, dword ptr [0x11f2f420] */
  ECX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0be22 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0be24 mov dword ptr [0x11f2f3f0], edx */
  w32((uint32_t)(0x11f2f3f0), (EDX));
  /* 11f0be2a mov eax, dword ptr [0x11f2f420] */
  EAX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0be2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11f0be32 mov dword ptr [0x11f2f3f4], ecx */
  w32((uint32_t)(0x11f2f3f4), (ECX));
  /* 11f0be38 mov edx, dword ptr [0x11f2f420] */
  EDX = (r32((uint32_t)(0x11f2f420)));
  /* 11f0be3e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11f0be41 mov dword ptr [0x11f2f3f8], eax */
  w32((uint32_t)(0x11f2f3f8), (EAX));
  /* 11f0be46 mov dword ptr [0x11f2f420], 0x11f2f3f0 */
  w32((uint32_t)(0x11f2f420), (0x11f2f3f0u));
  /* 11f0be50 mov ecx, dword ptr [0x11f309f8] */
  ECX = (r32((uint32_t)(0x11f309f8)));
  /* 11f0be56 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0be57 call 0x11f0c110 */
  push32(0x11f0be5cu); f_11f0c110();
  /* 11f0be5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0be5f push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0be61 mov edx, dword ptr [0x11f309f8] */
  EDX = (r32((uint32_t)(0x11f309f8)));
  /* 11f0be67 push edx */
  push32((uint32_t)(EDX));
  /* 11f0be68 call 0x11efc550 */
  push32(0x11f0be6du); f_11efc550();
  /* 11f0be6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0be70 mov dword ptr [0x11f309f8], 0 */
  w32((uint32_t)(0x11f309f8), (0x0u));
  /* 11f0be7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f0be7c:;
  /* 11f0be7c mov esp, ebp */
  ESP = (EBP);
  /* 11f0be7e pop ebp */
  EBP = (pop32());
  /* 11f0be7f ret  */
  ESPCHK(0x11f0bd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1001be80 @ 0x11f0be80 (525 bytes, 200 insns) */
void f_11f0be80(void) {
  FTRACE(0x11f0be80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0be80 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0be81 mov ebp, esp */
  EBP = (ESP);
  /* 11f0be83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0be86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11f0be8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0be8f mov ax, word ptr [0x11f30a18] */
  AX = (r16((uint32_t)(0x11f30a18)));
  /* 11f0be95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0be98 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0be9c jne 0x11f0bea6 */
  if (!C.zf) goto L_11f0bea6;
  /* 11f0be9e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0bea1 jmp 0x11f0c089 */
  goto L_11f0c089;
L_11f0bea6:;
  /* 11f0bea6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bea9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0beac push ecx */
  push32((uint32_t)(ECX));
  /* 11f0bead push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11f0beaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0beb2 push edx */
  push32((uint32_t)(EDX));
  /* 11f0beb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0beb5 call 0x11f0f7e0 */
  push32(0x11f0bebau); f_11f0f7e0();
  /* 11f0beba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bebd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0bec0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0bec2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0bec5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bec8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0becb push edx */
  push32((uint32_t)(EDX));
  /* 11f0becc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11f0bece mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bed1 push eax */
  push32((uint32_t)(EAX));
  /* 11f0bed2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0bed4 call 0x11f0f7e0 */
  push32(0x11f0bed9u); f_11f0f7e0();
  /* 11f0bed9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bedc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0bedf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0bee1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0bee4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bee7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0beea push edx */
  push32((uint32_t)(EDX));
  /* 11f0beeb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11f0beed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bef0 push eax */
  push32((uint32_t)(EAX));
  /* 11f0bef1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0bef3 call 0x11f0f7e0 */
  push32(0x11f0bef8u); f_11f0f7e0();
  /* 11f0bef8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0befb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0befe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0bf00 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0bf03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bf06 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bf09 push edx */
  push32((uint32_t)(EDX));
  /* 11f0bf0a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11f0bf0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bf0f push eax */
  push32((uint32_t)(EAX));
  /* 11f0bf10 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0bf12 call 0x11f0f7e0 */
  push32(0x11f0bf17u); f_11f0f7e0();
  /* 11f0bf17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bf1a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0bf1d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0bf1f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0bf22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bf25 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bf28 push edx */
  push32((uint32_t)(EDX));
  /* 11f0bf29 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11f0bf2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bf2e push eax */
  push32((uint32_t)(EAX));
  /* 11f0bf2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0bf31 call 0x11f0f7e0 */
  push32(0x11f0bf36u); f_11f0f7e0();
  /* 11f0bf36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bf39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0bf3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0bf3e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0bf41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bf44 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11f0bf47 push eax */
  push32((uint32_t)(EAX));
  /* 11f0bf48 call 0x11f0c090 */
  push32(0x11f0bf4du); f_11f0c090();
  /* 11f0bf4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bf50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bf53 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bf56 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0bf57 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11f0bf59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bf5c push edx */
  push32((uint32_t)(EDX));
  /* 11f0bf5d push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0bf5f call 0x11f0f7e0 */
  push32(0x11f0bf64u); f_11f0f7e0();
  /* 11f0bf64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bf67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0bf6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0bf6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0bf6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bf72 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bf75 push edx */
  push32((uint32_t)(EDX));
  /* 11f0bf76 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11f0bf78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bf7b push eax */
  push32((uint32_t)(EAX));
  /* 11f0bf7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0bf7e call 0x11f0f7e0 */
  push32(0x11f0bf83u); f_11f0f7e0();
  /* 11f0bf83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bf86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0bf89 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0bf8b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0bf8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bf91 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bf94 push edx */
  push32((uint32_t)(EDX));
  /* 11f0bf95 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11f0bf97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bf9a push eax */
  push32((uint32_t)(EAX));
  /* 11f0bf9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0bf9d call 0x11f0f7e0 */
  push32(0x11f0bfa2u); f_11f0f7e0();
  /* 11f0bfa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bfa5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0bfa8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0bfaa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0bfad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bfb0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bfb3 push edx */
  push32((uint32_t)(EDX));
  /* 11f0bfb4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11f0bfb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bfb9 push eax */
  push32((uint32_t)(EAX));
  /* 11f0bfba push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0bfbc call 0x11f0f7e0 */
  push32(0x11f0bfc1u); f_11f0f7e0();
  /* 11f0bfc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bfc4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0bfc7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0bfc9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0bfcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bfcf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bfd2 push edx */
  push32((uint32_t)(EDX));
  /* 11f0bfd3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11f0bfd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bfd8 push eax */
  push32((uint32_t)(EAX));
  /* 11f0bfd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0bfdb call 0x11f0f7e0 */
  push32(0x11f0bfe0u); f_11f0f7e0();
  /* 11f0bfe0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bfe3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0bfe6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0bfe8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0bfeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0bfee add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0bff1 push edx */
  push32((uint32_t)(EDX));
  /* 11f0bff2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11f0bff4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0bff7 push eax */
  push32((uint32_t)(EAX));
  /* 11f0bff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0bffa call 0x11f0f7e0 */
  push32(0x11f0bfffu); f_11f0f7e0();
  /* 11f0bfff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c002 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0c005 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0c007 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0c00a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c00d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c010 push edx */
  push32((uint32_t)(EDX));
  /* 11f0c011 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11f0c013 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0c016 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c017 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0c019 call 0x11f0f7e0 */
  push32(0x11f0c01eu); f_11f0f7e0();
  /* 11f0c01e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c021 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0c024 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0c026 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0c029 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c02c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c02f push edx */
  push32((uint32_t)(EDX));
  /* 11f0c030 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11f0c032 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0c035 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c036 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0c038 call 0x11f0f7e0 */
  push32(0x11f0c03du); f_11f0f7e0();
  /* 11f0c03d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c040 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0c043 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0c045 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0c048 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c04b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c04e push edx */
  push32((uint32_t)(EDX));
  /* 11f0c04f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11f0c051 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0c054 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c055 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0c057 call 0x11f0f7e0 */
  push32(0x11f0c05cu); f_11f0f7e0();
  /* 11f0c05c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c05f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0c062 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0c064 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0c067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c06a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c06d push edx */
  push32((uint32_t)(EDX));
  /* 11f0c06e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11f0c070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0c073 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c074 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0c076 call 0x11f0f7e0 */
  push32(0x11f0c07bu); f_11f0f7e0();
  /* 11f0c07b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c07e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0c081 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0c083 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11f0c086 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11f0c089:;
  /* 11f0c089 mov esp, ebp */
  ESP = (EBP);
  /* 11f0c08b pop ebp */
  EBP = (pop32());
  /* 11f0c08c ret  */
  ESPCHK(0x11f0be80u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11f0c090 (125 bytes, 49 insns) */
void f_11f0c090(void) {
  FTRACE(0x11f0c090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0c090 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0c091 mov ebp, esp */
  EBP = (ESP);
  /* 11f0c093 push ecx */
  push32((uint32_t)(ECX));
L_11f0c094:;
  /* 11f0c094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c097 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0c09a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0c09c je 0x11f0c109 */
  if (C.zf) goto L_11f0c109;
  /* 11f0c09e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c0a1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f0c0a4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c0a7 jl 0x11f0c0cd */
  if ((C.sf!=C.of)) goto L_11f0c0cd;
  /* 11f0c0a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c0ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f0c0af cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c0b2 jg 0x11f0c0cd */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0c0cd;
  /* 11f0c0b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c0b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0c0ba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0c0bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c0c0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11f0c0c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c0c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c0c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11f0c0cb jmp 0x11f0c107 */
  goto L_11f0c107;
L_11f0c0cd:;
  /* 11f0c0cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c0d0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f0c0d3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c0d6 jne 0x11f0c0fe */
  if (!C.zf) goto L_11f0c0fe;
  /* 11f0c0d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c0db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11f0c0de:;
  /* 11f0c0de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0c0e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0c0e4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11f0c0e7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11f0c0e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0c0ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c0ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11f0c0f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0c0f5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f0c0f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0c0fa jne 0x11f0c0de */
  if (!C.zf) goto L_11f0c0de;
  /* 11f0c0fc jmp 0x11f0c107 */
  goto L_11f0c107;
L_11f0c0fe:;
  /* 11f0c0fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c101 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c104 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11f0c107:;
  /* 11f0c107 jmp 0x11f0c094 */
  goto L_11f0c094;
L_11f0c109:;
  /* 11f0c109 mov esp, ebp */
  ESP = (EBP);
  /* 11f0c10b pop ebp */
  EBP = (pop32());
  /* 11f0c10c ret  */
  ESPCHK(0x11f0c090u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c110 @ 0x11f0c110 (147 bytes, 52 insns) */
void f_11f0c110(void) {
  FTRACE(0x11f0c110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0c110 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0c111 mov ebp, esp */
  EBP = (ESP);
  /* 11f0c113 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c117 jne 0x11f0c11e */
  if (!C.zf) goto L_11f0c11e;
  /* 11f0c119 jmp 0x11f0c1a1 */
  goto L_11f0c1a1;
L_11f0c11e:;
  /* 11f0c11e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c121 cmp dword ptr [eax + 0xc], 0x11f30a54 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11f30a54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c128 je 0x11f0c1a1 */
  if (C.zf) goto L_11f0c1a1;
  /* 11f0c12a push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c12c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c12f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11f0c132 push edx */
  push32((uint32_t)(EDX));
  /* 11f0c133 call 0x11efc550 */
  push32(0x11f0c138u); f_11efc550();
  /* 11f0c138 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c13b push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c13d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c140 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11f0c143 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0c144 call 0x11efc550 */
  push32(0x11f0c149u); f_11efc550();
  /* 11f0c149 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c14c push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c14e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c151 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11f0c154 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c155 call 0x11efc550 */
  push32(0x11f0c15au); f_11efc550();
  /* 11f0c15a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c15d push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c15f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c162 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11f0c165 push edx */
  push32((uint32_t)(EDX));
  /* 11f0c166 call 0x11efc550 */
  push32(0x11f0c16bu); f_11efc550();
  /* 11f0c16b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c16e push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c173 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11f0c176 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0c177 call 0x11efc550 */
  push32(0x11f0c17cu); f_11efc550();
  /* 11f0c17c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c17f push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c184 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11f0c187 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c188 call 0x11efc550 */
  push32(0x11f0c18du); f_11efc550();
  /* 11f0c18d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c190 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c192 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c195 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11f0c198 push edx */
  push32((uint32_t)(EDX));
  /* 11f0c199 call 0x11efc550 */
  push32(0x11f0c19eu); f_11efc550();
  /* 11f0c19e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0c1a1:;
  /* 11f0c1a1 pop ebp */
  EBP = (pop32());
  /* 11f0c1a2 ret  */
  ESPCHK(0x11f0c110u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c1b0 @ 0x11f0c1b0 (928 bytes, 284 insns) */
void f_11f0c1b0(void) {
  FTRACE(0x11f0c1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0c1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0c1b1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0c1b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0c1b6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11f0c1bd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11f0c1c4 cmp dword ptr [0x11f309c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c1cb je 0x11f0c501 */
  if (C.zf) goto L_11f0c501;
  /* 11f0c1d1 cmp dword ptr [0x11f309d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c1d8 jne 0x11f0c200 */
  if (!C.zf) goto L_11f0c200;
  /* 11f0c1da push 0x11f309d8 */
  push32((uint32_t)(0x11f309d8u));
  /* 11f0c1df push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11f0c1e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c1e6 mov ax, word ptr [0x11f30a10] */
  AX = (r16((uint32_t)(0x11f30a10)));
  /* 11f0c1ec push eax */
  push32((uint32_t)(EAX));
  /* 11f0c1ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0c1ef call 0x11f0f7e0 */
  push32(0x11f0c1f4u); f_11f0f7e0();
  /* 11f0c1f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c1f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0c1f9 je 0x11f0c200 */
  if (C.zf) goto L_11f0c200;
  /* 11f0c1fb jmp 0x11f0c4c2 */
  goto L_11f0c4c2;
L_11f0c200:;
  /* 11f0c200 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11f0c202 push 0x11f2b518 */
  push32((uint32_t)(0x11f2b518u));
  /* 11f0c207 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c209 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11f0c20e call 0x11efbac0 */
  push32(0x11f0c213u); f_11efbac0();
  /* 11f0c213 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c216 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11f0c219 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11f0c21b push 0x11f2b518 */
  push32((uint32_t)(0x11f2b518u));
  /* 11f0c220 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c222 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11f0c227 call 0x11efbac0 */
  push32(0x11f0c22cu); f_11efbac0();
  /* 11f0c22c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c22f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11f0c232 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11f0c234 push 0x11f2b518 */
  push32((uint32_t)(0x11f2b518u));
  /* 11f0c239 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c23b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11f0c240 call 0x11efbac0 */
  push32(0x11f0c245u); f_11efbac0();
  /* 11f0c245 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c248 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11f0c24b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11f0c24d push 0x11f2b518 */
  push32((uint32_t)(0x11f2b518u));
  /* 11f0c252 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c254 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11f0c259 call 0x11efbac0 */
  push32(0x11f0c25eu); f_11efbac0();
  /* 11f0c25e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c261 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11f0c264 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c268 je 0x11f0c27c */
  if (C.zf) goto L_11f0c27c;
  /* 11f0c26a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c26e je 0x11f0c27c */
  if (C.zf) goto L_11f0c27c;
  /* 11f0c270 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c274 je 0x11f0c27c */
  if (C.zf) goto L_11f0c27c;
  /* 11f0c276 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c27a jne 0x11f0c281 */
  if (!C.zf) goto L_11f0c281;
L_11f0c27c:;
  /* 11f0c27c jmp 0x11f0c4c2 */
  goto L_11f0c4c2;
L_11f0c281:;
  /* 11f0c281 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0c284 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11f0c287 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11f0c28e jmp 0x11f0c299 */
  goto L_11f0c299;
L_11f0c290:;
  /* 11f0c290 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0c293 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c296 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11f0c299:;
  /* 11f0c299 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c2a0 jge 0x11f0c2b5 */
  if ((C.sf==C.of)) goto L_11f0c2b5;
  /* 11f0c2a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0c2a5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11f0c2a8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11f0c2aa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0c2ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c2b0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11f0c2b3 jmp 0x11f0c290 */
  goto L_11f0c290;
L_11f0c2b5:;
  /* 11f0c2b5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11f0c2b8 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c2b9 mov ecx, dword ptr [0x11f309d8] */
  ECX = (r32((uint32_t)(0x11f309d8)));
  /* 11f0c2bf push ecx */
  push32((uint32_t)(ECX));
  /* 11f0c2c0 call dword ptr [0x11f33378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33378))), 0x11f0c2c6u);
  /* 11f0c2c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0c2c8 jne 0x11f0c2cf */
  if (!C.zf) goto L_11f0c2cf;
  /* 11f0c2ca jmp 0x11f0c4c2 */
  goto L_11f0c4c2;
L_11f0c2cf:;
  /* 11f0c2cf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c2d3 jbe 0x11f0c2da */
  if ((C.cf||C.zf)) goto L_11f0c2da;
  /* 11f0c2d5 jmp 0x11f0c4c2 */
  goto L_11f0c4c2;
L_11f0c2da:;
  /* 11f0c2da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11f0c2dd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11f0c2e3 mov dword ptr [0x11f2e050], edx */
  w32((uint32_t)(0x11f2e050), (EDX));
  /* 11f0c2e9 cmp dword ptr [0x11f2e050], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e050))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c2f0 jle 0x11f0c349 */
  if ((C.zf||C.sf!=C.of)) goto L_11f0c349;
  /* 11f0c2f2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11f0c2f5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11f0c2f8 jmp 0x11f0c303 */
  goto L_11f0c303;
L_11f0c2fa:;
  /* 11f0c2fa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0c2fd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c300 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11f0c303:;
  /* 11f0c303 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0c306 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c308 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0c30a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0c30c je 0x11f0c349 */
  if (C.zf) goto L_11f0c349;
  /* 11f0c30e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0c311 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0c313 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11f0c316 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0c318 je 0x11f0c349 */
  if (C.zf) goto L_11f0c349;
  /* 11f0c31a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0c31d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0c31f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11f0c321 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11f0c324 jmp 0x11f0c32f */
  goto L_11f0c32f;
L_11f0c326:;
  /* 11f0c326 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0c329 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c32c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11f0c32f:;
  /* 11f0c32f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0c332 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0c334 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11f0c337 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c33a jg 0x11f0c347 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0c347;
  /* 11f0c33c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0c33f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c342 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11f0c345 jmp 0x11f0c326 */
  goto L_11f0c326;
L_11f0c347:;
  /* 11f0c347 jmp 0x11f0c2fa */
  goto L_11f0c2fa;
L_11f0c349:;
  /* 11f0c349 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0c34b push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0c34d push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0c34f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0c352 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c355 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c356 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f0c35b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0c35e push ecx */
  push32((uint32_t)(ECX));
  /* 11f0c35f push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0c361 call 0x11f07ed0 */
  push32(0x11f0c366u); f_11f07ed0();
  /* 11f0c366 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c369 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0c36b jne 0x11f0c372 */
  if (!C.zf) goto L_11f0c372;
  /* 11f0c36d jmp 0x11f0c4c2 */
  goto L_11f0c4c2;
L_11f0c372:;
  /* 11f0c372 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0c375 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11f0c37a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0c37d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11f0c380 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11f0c387 jmp 0x11f0c392 */
  goto L_11f0c392;
L_11f0c389:;
  /* 11f0c389 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0c38c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c38f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11f0c392:;
  /* 11f0c392 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c399 jge 0x11f0c3b0 */
  if ((C.sf==C.of)) goto L_11f0c3b0;
  /* 11f0c39b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0c39e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11f0c3a2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11f0c3a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11f0c3a8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c3ab mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11f0c3ae jmp 0x11f0c389 */
  goto L_11f0c389;
L_11f0c3b0:;
  /* 11f0c3b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0c3b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11f0c3b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f0c3b7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c3ba push edx */
  push32((uint32_t)(EDX));
  /* 11f0c3bb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11f0c3c0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0c3c3 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c3c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0c3c6 call 0x11f0fa80 */
  push32(0x11f0c3cbu); f_11f0fa80();
  /* 11f0c3cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c3ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0c3d0 jne 0x11f0c3d7 */
  if (!C.zf) goto L_11f0c3d7;
  /* 11f0c3d2 jmp 0x11f0c4c2 */
  goto L_11f0c4c2;
L_11f0c3d7:;
  /* 11f0c3d7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f0c3da mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11f0c3df cmp dword ptr [0x11f2e050], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2e050))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c3e6 jle 0x11f0c443 */
  if ((C.zf||C.sf!=C.of)) goto L_11f0c443;
  /* 11f0c3e8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11f0c3eb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11f0c3ee jmp 0x11f0c3f9 */
  goto L_11f0c3f9;
L_11f0c3f0:;
  /* 11f0c3f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0c3f3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c3f6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11f0c3f9:;
  /* 11f0c3f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0c3fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11f0c3fe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11f0c400 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0c402 je 0x11f0c443 */
  if (C.zf) goto L_11f0c443;
  /* 11f0c404 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0c407 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0c409 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11f0c40c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0c40e je 0x11f0c443 */
  if (C.zf) goto L_11f0c443;
  /* 11f0c410 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0c413 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c415 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0c417 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11f0c41a jmp 0x11f0c425 */
  goto L_11f0c425;
L_11f0c41c:;
  /* 11f0c41c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0c41f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c422 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11f0c425:;
  /* 11f0c425 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11f0c428 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c42a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11f0c42d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c430 jg 0x11f0c441 */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0c441;
  /* 11f0c432 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11f0c435 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0c438 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11f0c43f jmp 0x11f0c41c */
  goto L_11f0c41c;
L_11f0c441:;
  /* 11f0c441 jmp 0x11f0c3f0 */
  goto L_11f0c3f0;
L_11f0c443:;
  /* 11f0c443 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0c446 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c449 mov dword ptr [0x11f2e05c], eax */
  w32((uint32_t)(0x11f2e05c), (EAX));
  /* 11f0c44e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f0c451 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c454 mov dword ptr [0x11f2e060], ecx */
  w32((uint32_t)(0x11f2e060), (ECX));
  /* 11f0c45a cmp dword ptr [0x11f309fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f309fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c461 je 0x11f0c474 */
  if (C.zf) goto L_11f0c474;
  /* 11f0c463 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c465 mov edx, dword ptr [0x11f309fc] */
  EDX = (r32((uint32_t)(0x11f309fc)));
  /* 11f0c46b push edx */
  push32((uint32_t)(EDX));
  /* 11f0c46c call 0x11efc550 */
  push32(0x11f0c471u); f_11efc550();
  /* 11f0c471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0c474:;
  /* 11f0c474 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0c477 mov dword ptr [0x11f309fc], eax */
  w32((uint32_t)(0x11f309fc), (EAX));
  /* 11f0c47c cmp dword ptr [0x11f30a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c483 je 0x11f0c496 */
  if (C.zf) goto L_11f0c496;
  /* 11f0c485 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c487 mov ecx, dword ptr [0x11f30a00] */
  ECX = (r32((uint32_t)(0x11f30a00)));
  /* 11f0c48d push ecx */
  push32((uint32_t)(ECX));
  /* 11f0c48e call 0x11efc550 */
  push32(0x11f0c493u); f_11efc550();
  /* 11f0c493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0c496:;
  /* 11f0c496 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f0c499 mov dword ptr [0x11f30a00], edx */
  w32((uint32_t)(0x11f30a00), (EDX));
  /* 11f0c49f push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c4a1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0c4a4 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c4a5 call 0x11efc550 */
  push32(0x11f0c4aau); f_11efc550();
  /* 11f0c4aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c4ad push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c4af mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0c4b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0c4b3 call 0x11efc550 */
  push32(0x11f0c4b8u); f_11efc550();
  /* 11f0c4b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c4bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c4bd jmp 0x11f0c54c */
  goto L_11f0c54c;
L_11f0c4c2:;
  /* 11f0c4c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c4c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11f0c4c7 push edx */
  push32((uint32_t)(EDX));
  /* 11f0c4c8 call 0x11efc550 */
  push32(0x11f0c4cdu); f_11efc550();
  /* 11f0c4cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c4d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c4d2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11f0c4d5 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c4d6 call 0x11efc550 */
  push32(0x11f0c4dbu); f_11efc550();
  /* 11f0c4db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c4de push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c4e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11f0c4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0c4e4 call 0x11efc550 */
  push32(0x11f0c4e9u); f_11efc550();
  /* 11f0c4e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c4ec push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c4ee mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11f0c4f1 push edx */
  push32((uint32_t)(EDX));
  /* 11f0c4f2 call 0x11efc550 */
  push32(0x11f0c4f7u); f_11efc550();
  /* 11f0c4f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c4fa mov eax, 1 */
  EAX = (0x1u);
  /* 11f0c4ff jmp 0x11f0c54c */
  goto L_11f0c54c;
L_11f0c501:;
  /* 11f0c501 mov dword ptr [0x11f2e05c], 0x11f2e066 */
  w32((uint32_t)(0x11f2e05c), (0x11f2e066u));
  /* 11f0c50b mov dword ptr [0x11f2e060], 0x11f2e066 */
  w32((uint32_t)(0x11f2e060), (0x11f2e066u));
  /* 11f0c515 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c517 mov eax, dword ptr [0x11f309fc] */
  EAX = (r32((uint32_t)(0x11f309fc)));
  /* 11f0c51c push eax */
  push32((uint32_t)(EAX));
  /* 11f0c51d call 0x11efc550 */
  push32(0x11f0c522u); f_11efc550();
  /* 11f0c522 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c525 push 2 */
  push32((uint32_t)(0x2u));
  /* 11f0c527 mov ecx, dword ptr [0x11f30a00] */
  ECX = (r32((uint32_t)(0x11f30a00)));
  /* 11f0c52d push ecx */
  push32((uint32_t)(ECX));
  /* 11f0c52e call 0x11efc550 */
  push32(0x11f0c533u); f_11efc550();
  /* 11f0c533 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c536 mov dword ptr [0x11f309fc], 0 */
  w32((uint32_t)(0x11f309fc), (0x0u));
  /* 11f0c540 mov dword ptr [0x11f30a00], 0 */
  w32((uint32_t)(0x11f30a00), (0x0u));
  /* 11f0c54a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11f0c54c:;
  /* 11f0c54c mov esp, ebp */
  ESP = (EBP);
  /* 11f0c54e pop ebp */
  EBP = (pop32());
  /* 11f0c54f ret  */
  ESPCHK(0x11f0c1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c550 @ 0x11f0c550 (7 bytes, 5 insns) */
void f_11f0c550(void) {
  FTRACE(0x11f0c550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0c550 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0c551 mov ebp, esp */
  EBP = (ESP);
  /* 11f0c553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c555 pop ebp */
  EBP = (pop32());
  /* 11f0c556 ret  */
  ESPCHK(0x11f0c550u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c560 @ 0x11f0c560 (62 bytes, 35 insns) */
void f_11f0c560(void) {
  FTRACE(0x11f0c560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0c560 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0c561 mov ebp, esp */
  EBP = (ESP);
  /* 11f0c563 push esi */
  push32((uint32_t)(ESI));
  /* 11f0c564 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c566 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c567 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c568 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c569 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c56a push eax */
  push32((uint32_t)(EAX));
  /* 11f0c56b push eax */
  push32((uint32_t)(EAX));
  /* 11f0c56c push eax */
  push32((uint32_t)(EAX));
  /* 11f0c56d push eax */
  push32((uint32_t)(EAX));
  /* 11f0c56e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0c571 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f0c574:;
  /* 11f0c574 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0c576 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f0c578 je 0x11f0c581 */
  if (C.zf) goto L_11f0c581;
  /* 11f0c57a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f0c57b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11f0c57b");
  /* 11f0c57f jmp 0x11f0c574 */
  goto L_11f0c574;
L_11f0c581:;
  /* 11f0c581 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c584 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11f0c587 nop  */
  /* nop */
L_11f0c588:;
  /* 11f0c588 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11f0c589 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f0c58b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f0c58d je 0x11f0c596 */
  if (C.zf) goto L_11f0c596;
  /* 11f0c58f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f0c590 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11f0c590");
  /* 11f0c594 jae 0x11f0c588 */
  if (!C.cf) goto L_11f0c588;
L_11f0c596:;
  /* 11f0c596 mov eax, ecx */
  EAX = (ECX);
  /* 11f0c598 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c59b pop esi */
  ESI = (pop32());
  /* 11f0c59c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f0c59d ret  */
  ESPCHK(0x11f0c560u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11f0c5a0 (56 bytes, 31 insns) */
void f_11f0c5a0(void) {
  FTRACE(0x11f0c5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0c5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0c5a1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0c5a3 push edi */
  push32((uint32_t)(EDI));
  /* 11f0c5a4 push esi */
  push32((uint32_t)(ESI));
  /* 11f0c5a5 push ebx */
  push32((uint32_t)(EBX));
  /* 11f0c5a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0c5a9 jecxz 0x11f0c5d1 */
  x86_unimpl("jecxz @ 0x11f0c5a9");
  /* 11f0c5ab mov ebx, ecx */
  EBX = (ECX);
  /* 11f0c5ad mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c5b0 mov esi, edi */
  ESI = (EDI);
  /* 11f0c5b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c5b4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11f0c5b6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11f0c5b8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c5ba mov edi, esi */
  EDI = (ESI);
  /* 11f0c5bc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0c5bf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11f0c5c1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11f0c5c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11f0c5c6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11f0c5c9 ja 0x11f0c5cf */
  if ((!C.cf&&!C.zf)) goto L_11f0c5cf;
  /* 11f0c5cb je 0x11f0c5d1 */
  if (C.zf) goto L_11f0c5d1;
  /* 11f0c5cd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11f0c5ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11f0c5cf:;
  /* 11f0c5cf not ecx */
  ECX = (~(ECX));
L_11f0c5d1:;
  /* 11f0c5d1 mov eax, ecx */
  EAX = (ECX);
  /* 11f0c5d3 pop ebx */
  EBX = (pop32());
  /* 11f0c5d4 pop esi */
  ESI = (pop32());
  /* 11f0c5d5 pop edi */
  EDI = (pop32());
  /* 11f0c5d6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f0c5d7 ret  */
  ESPCHK(0x11f0c5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c5e0 @ 0x11f0c5e0 (58 bytes, 32 insns) */
void f_11f0c5e0(void) {
  FTRACE(0x11f0c5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0c5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0c5e1 mov ebp, esp */
  EBP = (ESP);
  /* 11f0c5e3 push esi */
  push32((uint32_t)(ESI));
  /* 11f0c5e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c5e6 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c5e7 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c5e8 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c5e9 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c5ea push eax */
  push32((uint32_t)(EAX));
  /* 11f0c5eb push eax */
  push32((uint32_t)(EAX));
  /* 11f0c5ec push eax */
  push32((uint32_t)(EAX));
  /* 11f0c5ed push eax */
  push32((uint32_t)(EAX));
  /* 11f0c5ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0c5f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11f0c5f4:;
  /* 11f0c5f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11f0c5f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f0c5f8 je 0x11f0c601 */
  if (C.zf) goto L_11f0c601;
  /* 11f0c5fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11f0c5fb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11f0c5fb");
  /* 11f0c5ff jmp 0x11f0c5f4 */
  goto L_11f0c5f4;
L_11f0c601:;
  /* 11f0c601 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11f0c604:;
  /* 11f0c604 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11f0c606 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11f0c608 je 0x11f0c614 */
  if (C.zf) goto L_11f0c614;
  /* 11f0c60a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11f0c60b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11f0c60b");
  /* 11f0c60f jae 0x11f0c604 */
  if (!C.cf) goto L_11f0c604;
  /* 11f0c611 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11f0c614:;
  /* 11f0c614 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c617 pop esi */
  ESI = (pop32());
  /* 11f0c618 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11f0c619 ret  */
  ESPCHK(0x11f0c5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c620 @ 0x11f0c620 (512 bytes, 147 insns) */
void f_11f0c620(void) {
  FTRACE(0x11f0c620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0c620 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0c621 mov ebp, esp */
  EBP = (ESP);
  /* 11f0c623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0c626 cmp dword ptr [0x11f30a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c62d jne 0x11f0c652 */
  if (!C.zf) goto L_11f0c652;
  /* 11f0c62f call 0x11f0d0f0 */
  push32(0x11f0c634u); f_11f0d0f0();
  /* 11f0c634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0c636 je 0x11f0c642 */
  if (C.zf) goto L_11f0c642;
  /* 11f0c638 mov eax, dword ptr [0x11f33344] */
  EAX = (r32((uint32_t)(0x11f33344)));
  /* 11f0c63d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0c640 jmp 0x11f0c649 */
  goto L_11f0c649;
L_11f0c642:;
  /* 11f0c642 mov dword ptr [ebp - 8], 0x11f0d140 */
  w32((uint32_t)(EBP + -0x8), (0x11f0d140u));
L_11f0c649:;
  /* 11f0c649 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11f0c64c mov dword ptr [0x11f30a48], ecx */
  w32((uint32_t)(0x11f30a48), (ECX));
L_11f0c652:;
  /* 11f0c652 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c656 jne 0x11f0c662 */
  if (!C.zf) goto L_11f0c662;
  /* 11f0c658 call 0x11f0cf40 */
  push32(0x11f0c65du); f_11f0cf40();
  /* 11f0c65d jmp 0x11f0c72e */
  goto L_11f0c72e;
L_11f0c662:;
  /* 11f0c662 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c665 mov dword ptr [0x11f30a38], edx */
  w32((uint32_t)(0x11f30a38), (EDX));
  /* 11f0c66b cmp dword ptr [0x11f30a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c672 je 0x11f0c694 */
  if (C.zf) goto L_11f0c694;
  /* 11f0c674 mov eax, dword ptr [0x11f30a38] */
  EAX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0c679 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0c67c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0c67e je 0x11f0c694 */
  if (C.zf) goto L_11f0c694;
  /* 11f0c680 push 0x11f30a38 */
  push32((uint32_t)(0x11f30a38u));
  /* 11f0c685 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f0c687 push 0x11f2f120 */
  push32((uint32_t)(0x11f2f120u));
  /* 11f0c68c call 0x11f0c820 */
  push32(0x11f0c691u); f_11f0c820();
  /* 11f0c691 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0c694:;
  /* 11f0c694 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c697 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c69a mov dword ptr [0x11f30a3c], edx */
  w32((uint32_t)(0x11f30a3c), (EDX));
  /* 11f0c6a0 cmp dword ptr [0x11f30a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c6a7 je 0x11f0c6c9 */
  if (C.zf) goto L_11f0c6c9;
  /* 11f0c6a9 mov eax, dword ptr [0x11f30a3c] */
  EAX = (r32((uint32_t)(0x11f30a3c)));
  /* 11f0c6ae movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0c6b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0c6b3 je 0x11f0c6c9 */
  if (C.zf) goto L_11f0c6c9;
  /* 11f0c6b5 push 0x11f30a3c */
  push32((uint32_t)(0x11f30a3cu));
  /* 11f0c6ba push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11f0c6bc push 0x11f2f068 */
  push32((uint32_t)(0x11f2f068u));
  /* 11f0c6c1 call 0x11f0c820 */
  push32(0x11f0c6c6u); f_11f0c820();
  /* 11f0c6c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0c6c9:;
  /* 11f0c6c9 mov dword ptr [0x11f30a40], 0 */
  w32((uint32_t)(0x11f30a40), (0x0u));
  /* 11f0c6d3 cmp dword ptr [0x11f30a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c6da je 0x11f0c70d */
  if (C.zf) goto L_11f0c70d;
  /* 11f0c6dc mov edx, dword ptr [0x11f30a38] */
  EDX = (r32((uint32_t)(0x11f30a38)));
  /* 11f0c6e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11f0c6e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0c6e7 je 0x11f0c70d */
  if (C.zf) goto L_11f0c70d;
  /* 11f0c6e9 cmp dword ptr [0x11f30a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c6f0 je 0x11f0c706 */
  if (C.zf) goto L_11f0c706;
  /* 11f0c6f2 mov ecx, dword ptr [0x11f30a3c] */
  ECX = (r32((uint32_t)(0x11f30a3c)));
  /* 11f0c6f8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11f0c6fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11f0c6fd je 0x11f0c706 */
  if (C.zf) goto L_11f0c706;
  /* 11f0c6ff call 0x11f0c8b0 */
  push32(0x11f0c704u); f_11f0c8b0();
  /* 11f0c704 jmp 0x11f0c70b */
  goto L_11f0c70b;
L_11f0c706:;
  /* 11f0c706 call 0x11f0cca0 */
  push32(0x11f0c70bu); f_11f0cca0();
L_11f0c70b:;
  /* 11f0c70b jmp 0x11f0c72e */
  goto L_11f0c72e;
L_11f0c70d:;
  /* 11f0c70d cmp dword ptr [0x11f30a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c714 je 0x11f0c729 */
  if (C.zf) goto L_11f0c729;
  /* 11f0c716 mov eax, dword ptr [0x11f30a3c] */
  EAX = (r32((uint32_t)(0x11f30a3c)));
  /* 11f0c71b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11f0c71e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11f0c720 je 0x11f0c729 */
  if (C.zf) goto L_11f0c729;
  /* 11f0c722 call 0x11f0ce40 */
  push32(0x11f0c727u); f_11f0ce40();
  /* 11f0c727 jmp 0x11f0c72e */
  goto L_11f0c72e;
L_11f0c729:;
  /* 11f0c729 call 0x11f0cf40 */
  push32(0x11f0c72eu); f_11f0cf40();
L_11f0c72e:;
  /* 11f0c72e cmp dword ptr [0x11f30a40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30a40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c735 jne 0x11f0c73e */
  if (!C.zf) goto L_11f0c73e;
  /* 11f0c737 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c739 jmp 0x11f0c81c */
  goto L_11f0c81c;
L_11f0c73e:;
  /* 11f0c73e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c741 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c747 push edx */
  push32((uint32_t)(EDX));
  /* 11f0c748 call 0x11f0cf70 */
  push32(0x11f0c74du); f_11f0cf70();
  /* 11f0c74d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c750 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0c753 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c757 je 0x11f0c76c */
  if (C.zf) goto L_11f0c76c;
  /* 11f0c759 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0c75c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c761 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c762 call dword ptr [0x11f33348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33348))), 0x11f0c768u);
  /* 11f0c768 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0c76a jne 0x11f0c773 */
  if (!C.zf) goto L_11f0c773;
L_11f0c76c:;
  /* 11f0c76c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c76e jmp 0x11f0c81c */
  goto L_11f0c81c;
L_11f0c773:;
  /* 11f0c773 push 1 */
  push32((uint32_t)(0x1u));
  /* 11f0c775 mov ecx, dword ptr [0x11f30a28] */
  ECX = (r32((uint32_t)(0x11f30a28)));
  /* 11f0c77b push ecx */
  push32((uint32_t)(ECX));
  /* 11f0c77c call dword ptr [0x11f3334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3334c))), 0x11f0c782u);
  /* 11f0c782 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0c784 jne 0x11f0c78d */
  if (!C.zf) goto L_11f0c78d;
  /* 11f0c786 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c788 jmp 0x11f0c81c */
  goto L_11f0c81c;
L_11f0c78d:;
  /* 11f0c78d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c791 je 0x11f0c7b8 */
  if (C.zf) goto L_11f0c7b8;
  /* 11f0c793 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0c796 mov ax, word ptr [0x11f30a28] */
  AX = (r16((uint32_t)(0x11f30a28)));
  /* 11f0c79c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11f0c79f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0c7a2 mov dx, word ptr [0x11f30a44] */
  DX = (r16((uint32_t)(0x11f30a44)));
  /* 11f0c7a9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11f0c7ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11f0c7b0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11f0c7b4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11f0c7b8:;
  /* 11f0c7b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c7bc je 0x11f0c817 */
  if (C.zf) goto L_11f0c817;
  /* 11f0c7be push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f0c7c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0c7c3 push edx */
  push32((uint32_t)(EDX));
  /* 11f0c7c4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11f0c7c9 mov eax, dword ptr [0x11f30a28] */
  EAX = (r32((uint32_t)(0x11f30a28)));
  /* 11f0c7ce push eax */
  push32((uint32_t)(EAX));
  /* 11f0c7cf call dword ptr [0x11f30a48] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f30a48))), 0x11f0c7d5u);
  /* 11f0c7d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0c7d7 jne 0x11f0c7dd */
  if (!C.zf) goto L_11f0c7dd;
  /* 11f0c7d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c7db jmp 0x11f0c81c */
  goto L_11f0c81c;
L_11f0c7dd:;
  /* 11f0c7dd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11f0c7df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0c7e2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c7e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11f0c7e6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11f0c7eb mov edx, dword ptr [0x11f30a44] */
  EDX = (r32((uint32_t)(0x11f30a44)));
  /* 11f0c7f1 push edx */
  push32((uint32_t)(EDX));
  /* 11f0c7f2 call dword ptr [0x11f30a48] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f30a48))), 0x11f0c7f8u);
  /* 11f0c7f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11f0c7fa jne 0x11f0c800 */
  if (!C.zf) goto L_11f0c800;
  /* 11f0c7fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11f0c7fe jmp 0x11f0c81c */
  goto L_11f0c81c;
L_11f0c800:;
  /* 11f0c800 push 0xa */
  push32((uint32_t)(0xau));
  /* 11f0c802 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0c805 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c80a push eax */
  push32((uint32_t)(EAX));
  /* 11f0c80b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0c80e push ecx */
  push32((uint32_t)(ECX));
  /* 11f0c80f call 0x11effd60 */
  push32(0x11f0c814u); f_11effd60();
  /* 11f0c814 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11f0c817:;
  /* 11f0c817 mov eax, 1 */
  EAX = (0x1u);
L_11f0c81c:;
  /* 11f0c81c mov esp, ebp */
  ESP = (EBP);
  /* 11f0c81e pop ebp */
  EBP = (pop32());
  /* 11f0c81f ret  */
  ESPCHK(0x11f0c620u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c820 @ 0x11f0c820 (130 bytes, 47 insns) */
void f_11f0c820(void) {
  FTRACE(0x11f0c820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11f0c820 push ebp */
  push32((uint32_t)(EBP));
  /* 11f0c821 mov ebp, esp */
  EBP = (ESP);
  /* 11f0c823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0c826 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11f0c82d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11f0c834:;
  /* 11f0c834 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0c837 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c83a jg 0x11f0c89e */
  if ((!C.zf&&C.sf==C.of)) goto L_11f0c89e;
  /* 11f0c83c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c840 je 0x11f0c89e */
  if (C.zf) goto L_11f0c89e;
  /* 11f0c842 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11f0c845 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c848 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11f0c849 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0c84b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11f0c84d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11f0c850 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0c853 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c856 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11f0c859 push eax */
  push32((uint32_t)(EAX));
  /* 11f0c85a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0c85d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11f0c85f push edx */
  push32((uint32_t)(EDX));
  /* 11f0c860 call 0x11f0fcf0 */
  push32(0x11f0c865u); f_11f0fcf0();
  /* 11f0c865 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c868 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11f0c86b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c86f jne 0x11f0c882 */
  if (!C.zf) goto L_11f0c882;
  /* 11f0c871 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0c874 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11f0c877 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11f0c87b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11f0c87e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11f0c880 jmp 0x11f0c89c */
  goto L_11f0c89c;
L_11f0c882:;
  /* 11f0c882 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11f0c886 jge 0x11f0c893 */
  if ((C.sf==C.of)) goto L_11f0c893;
  /* 11f0c888 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0c88b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11f0c88e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11f0c891 jmp 0x11f0c89c */
  goto L_11f0c89c;
L_11f0c893:;
  /* 11f0c893 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11f0c896 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11f0c899 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11f0c89c:;
  /* 11f0c89c jmp 0x11f0c834 */
  goto L_11f0c834;
L_11f0c89e:;
  /* 11f0c89e mov esp, ebp */
  ESP = (EBP);
  /* 11f0c8a0 pop ebp */
  EBP = (pop32());
  /* 11f0c8a1 ret  */
  ESPCHK(0x11f0c820u, _esp0);
  ESP += 4; return;
}

