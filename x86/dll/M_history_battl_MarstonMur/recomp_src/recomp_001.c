#include "recomp.h"

/* FUN_10006640 @ 0x12d96640 (151 bytes, 46 insns) */
void f_12d96640(void) {
  FTRACE(0x12d96640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96640 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96641 mov ebp, esp */
  EBP = (ESP);
  /* 12d96643 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96647 cmp dword ptr [eax*4 + 0x12dabc00], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12dabc00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9664f jne 0x12d966c2 */
  if (!C.zf) goto L_12d966c2;
  /* 12d96651 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12d96656 push 0x12da9dcc */
  push32((uint32_t)(0x12da9dccu));
  /* 12d9665b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9665d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12d9665f call 0x12d92c40 */
  push32(0x12d96664u); f_12d92c40();
  /* 12d96664 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96667 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9666a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9666e jne 0x12d9667a */
  if (!C.zf) goto L_12d9667a;
  /* 12d96670 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d96672 call 0x12d91bb0 */
  push32(0x12d96677u); f_12d91bb0();
  /* 12d96677 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9667a:;
  /* 12d9667a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d9667c call 0x12d96640 */
  push32(0x12d96681u); f_12d96640();
  /* 12d96681 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96684 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96687 cmp dword ptr [ecx*4 + 0x12dabc00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12dabc00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9668f jne 0x12d966aa */
  if (!C.zf) goto L_12d966aa;
  /* 12d96691 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96694 push edx */
  push32((uint32_t)(EDX));
  /* 12d96695 call dword ptr [0x12db0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0324))), 0x12d9669bu);
  /* 12d9669b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9669e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d966a1 mov dword ptr [eax*4 + 0x12dabc00], ecx */
  w32((uint32_t)(EAX*4 + 0x12dabc00), (ECX));
  /* 12d966a8 jmp 0x12d966b8 */
  goto L_12d966b8;
L_12d966aa:;
  /* 12d966aa push 2 */
  push32((uint32_t)(0x2u));
  /* 12d966ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d966af push edx */
  push32((uint32_t)(EDX));
  /* 12d966b0 call 0x12d936d0 */
  push32(0x12d966b5u); f_12d936d0();
  /* 12d966b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d966b8:;
  /* 12d966b8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d966ba call 0x12d966e0 */
  push32(0x12d966bfu); f_12d966e0();
  /* 12d966bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d966c2:;
  /* 12d966c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d966c5 mov ecx, dword ptr [eax*4 + 0x12dabc00] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12dabc00)));
  /* 12d966cc push ecx */
  push32((uint32_t)(ECX));
  /* 12d966cd call dword ptr [0x12db0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0328))), 0x12d966d3u);
  /* 12d966d3 mov esp, ebp */
  ESP = (EBP);
  /* 12d966d5 pop ebp */
  EBP = (pop32());
  /* 12d966d6 ret  */
  ESPCHK(0x12d96640u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x12d966e0 (22 bytes, 8 insns) */
void f_12d966e0(void) {
  FTRACE(0x12d966e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d966e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d966e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d966e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d966e6 mov ecx, dword ptr [eax*4 + 0x12dabc00] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12dabc00)));
  /* 12d966ed push ecx */
  push32((uint32_t)(ECX));
  /* 12d966ee call dword ptr [0x12db02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02f4))), 0x12d966f4u);
  /* 12d966f4 pop ebp */
  EBP = (pop32());
  /* 12d966f5 ret  */
  ESPCHK(0x12d966e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006700 @ 0x12d96700 (26 bytes, 10 insns) */
void f_12d96700(void) {
  FTRACE(0x12d96700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96700 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96701 mov ebp, esp */
  EBP = (ESP);
  /* 12d96703 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96706 push eax */
  push32((uint32_t)(EAX));
  /* 12d96707 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d96709 call dword ptr [0x12db0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0330))), 0x12d9670fu);
  /* 12d9670f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12d96714 call dword ptr [0x12db02b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02b4))), 0x12d9671au);
  /* 12d9671a pop ebp */
  EBP = (pop32());
  /* 12d9671b ret  */
  ESPCHK(0x12d96700u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12d96720 (446 bytes, 130 insns) */
void f_12d96720(void) {
  FTRACE(0x12d96720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96720 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96721 mov ebp, esp */
  EBP = (ESP);
  /* 12d96723 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d96726 call 0x12d92680 */
  push32(0x12d9672bu); f_12d92680();
  /* 12d9672b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9672e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96731 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12d96734 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96735 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96738 push edx */
  push32((uint32_t)(EDX));
  /* 12d96739 call 0x12d968e0 */
  push32(0x12d9673eu); f_12d968e0();
  /* 12d9673e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96741 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d96744 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96748 je 0x12d96753 */
  if (C.zf) goto L_12d96753;
  /* 12d9674a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9674d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96751 jne 0x12d96762 */
  if (!C.zf) goto L_12d96762;
L_12d96753:;
  /* 12d96753 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96756 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96757 call dword ptr [0x12db0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0334))), 0x12d9675du);
  /* 12d9675d jmp 0x12d968da */
  goto L_12d968da;
L_12d96762:;
  /* 12d96762 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d96765 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96769 jne 0x12d9677f */
  if (!C.zf) goto L_12d9677f;
  /* 12d9676b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9676e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12d96775 mov eax, 1 */
  EAX = (0x1u);
  /* 12d9677a jmp 0x12d968da */
  goto L_12d968da;
L_12d9677f:;
  /* 12d9677f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d96782 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96786 jne 0x12d96790 */
  if (!C.zf) goto L_12d96790;
  /* 12d96788 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9678b jmp 0x12d968da */
  goto L_12d968da;
L_12d96790:;
  /* 12d96790 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d96793 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d96796 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d96799 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9679c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12d9679f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d967a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d967a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d967a8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12d967ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d967ae cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d967b2 jne 0x12d968b7 */
  if (!C.zf) goto L_12d968b7;
  /* 12d967b8 mov eax, dword ptr [0x12dabd38] */
  EAX = (r32((uint32_t)(0x12dabd38)));
  /* 12d967bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d967c0 jmp 0x12d967cb */
  goto L_12d967cb;
L_12d967c2:;
  /* 12d967c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d967c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d967c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12d967cb:;
  /* 12d967cb mov edx, dword ptr [0x12dabd38] */
  EDX = (r32((uint32_t)(0x12dabd38)));
  /* 12d967d1 add edx, dword ptr [0x12dabd3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12dabd3c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d967d7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d967da jge 0x12d967f2 */
  if ((C.sf==C.of)) goto L_12d967f2;
  /* 12d967dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d967df imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d967e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d967e5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12d967e8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12d967f0 jmp 0x12d967c2 */
  goto L_12d967c2;
L_12d967f2:;
  /* 12d967f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d967f5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12d967f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d967fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d967fe cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96804 jne 0x12d96815 */
  if (!C.zf) goto L_12d96815;
  /* 12d96806 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96809 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12d96810 jmp 0x12d9689d */
  goto L_12d9689d;
L_12d96815:;
  /* 12d96815 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d96818 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9681e jne 0x12d9682c */
  if (!C.zf) goto L_12d9682c;
  /* 12d96820 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96823 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12d9682a jmp 0x12d9689d */
  goto L_12d9689d;
L_12d9682c:;
  /* 12d9682c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9682f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96835 jne 0x12d96843 */
  if (!C.zf) goto L_12d96843;
  /* 12d96837 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9683a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12d96841 jmp 0x12d9689d */
  goto L_12d9689d;
L_12d96843:;
  /* 12d96843 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d96846 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9684c jne 0x12d9685a */
  if (!C.zf) goto L_12d9685a;
  /* 12d9684e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96851 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12d96858 jmp 0x12d9689d */
  goto L_12d9689d;
L_12d9685a:;
  /* 12d9685a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9685d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96863 jne 0x12d96871 */
  if (!C.zf) goto L_12d96871;
  /* 12d96865 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96868 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12d9686f jmp 0x12d9689d */
  goto L_12d9689d;
L_12d96871:;
  /* 12d96871 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d96874 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9687a jne 0x12d96888 */
  if (!C.zf) goto L_12d96888;
  /* 12d9687c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9687f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12d96886 jmp 0x12d9689d */
  goto L_12d9689d;
L_12d96888:;
  /* 12d96888 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9688b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96891 jne 0x12d9689d */
  if (!C.zf) goto L_12d9689d;
  /* 12d96893 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96896 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12d9689d:;
  /* 12d9689d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d968a0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12d968a3 push edx */
  push32((uint32_t)(EDX));
  /* 12d968a4 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d968a6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12d968a9u);
  /* 12d968a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d968ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d968af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d968b2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12d968b5 jmp 0x12d968ce */
  goto L_12d968ce;
L_12d968b7:;
  /* 12d968b7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d968ba mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12d968c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d968c4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d968c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d968c8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12d968cbu);
  /* 12d968cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d968ce:;
  /* 12d968ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d968d1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d968d4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12d968d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d968da:;
  /* 12d968da mov esp, ebp */
  ESP = (EBP);
  /* 12d968dc pop ebp */
  EBP = (pop32());
  /* 12d968dd ret  */
  ESPCHK(0x12d96720u, _esp0);
  ESP += 4; return;
}

/* FUN_100068e0 @ 0x12d968e0 (89 bytes, 35 insns) */
void f_12d968e0(void) {
  FTRACE(0x12d968e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d968e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d968e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d968e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d968e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d968e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d968ea:;
  /* 12d968ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d968ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d968ef cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d968f2 je 0x12d96912 */
  if (C.zf) goto L_12d96912;
  /* 12d968f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d968f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d968fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d968fd mov ecx, dword ptr [0x12dabd44] */
  ECX = (r32((uint32_t)(0x12dabd44)));
  /* 12d96903 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d96906 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96909 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9690b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9690e jae 0x12d96912 */
  if (!C.cf) goto L_12d96912;
  /* 12d96910 jmp 0x12d968ea */
  goto L_12d968ea;
L_12d96912:;
  /* 12d96912 mov eax, dword ptr [0x12dabd44] */
  EAX = (r32((uint32_t)(0x12dabd44)));
  /* 12d96917 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9691a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9691d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9691f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96922 jae 0x12d9692e */
  if (!C.cf) goto L_12d9692e;
  /* 12d96924 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96927 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d96929 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9692c je 0x12d96932 */
  if (C.zf) goto L_12d96932;
L_12d9692e:;
  /* 12d9692e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d96930 jmp 0x12d96935 */
  goto L_12d96935;
L_12d96932:;
  /* 12d96932 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d96935:;
  /* 12d96935 mov esp, ebp */
  ESP = (EBP);
  /* 12d96937 pop ebp */
  EBP = (pop32());
  /* 12d96938 ret  */
  ESPCHK(0x12d968e0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12d96940 (48 bytes, 17 insns) */
void f_12d96940(void) {
  FTRACE(0x12d96940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96940 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96941 mov ebp, esp */
  EBP = (ESP);
  /* 12d96943 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96944 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d96946 call 0x12d96640 */
  push32(0x12d9694bu); f_12d96640();
  /* 12d9694b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9694e mov eax, dword ptr [0x12dad70c] */
  EAX = (r32((uint32_t)(0x12dad70c)));
  /* 12d96953 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d96956 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96959 mov dword ptr [0x12dad70c], ecx */
  w32((uint32_t)(0x12dad70c), (ECX));
  /* 12d9695f push 9 */
  push32((uint32_t)(0x9u));
  /* 12d96961 call 0x12d966e0 */
  push32(0x12d96966u); f_12d966e0();
  /* 12d96966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96969 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9696c mov esp, ebp */
  ESP = (EBP);
  /* 12d9696e pop ebp */
  EBP = (pop32());
  /* 12d9696f ret  */
  ESPCHK(0x12d96940u, _esp0);
  ESP += 4; return;
}

/* FUN_10006970 @ 0x12d96970 (10 bytes, 5 insns) */
void f_12d96970(void) {
  FTRACE(0x12d96970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96970 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96971 mov ebp, esp */
  EBP = (ESP);
  /* 12d96973 mov eax, dword ptr [0x12dad70c] */
  EAX = (r32((uint32_t)(0x12dad70c)));
  /* 12d96978 pop ebp */
  EBP = (pop32());
  /* 12d96979 ret  */
  ESPCHK(0x12d96970u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12d96980 (45 bytes, 19 insns) */
void f_12d96980(void) {
  FTRACE(0x12d96980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96980 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96981 mov ebp, esp */
  EBP = (ESP);
  /* 12d96983 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96984 mov eax, dword ptr [0x12dad70c] */
  EAX = (r32((uint32_t)(0x12dad70c)));
  /* 12d96989 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9698c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96990 je 0x12d969a0 */
  if (C.zf) goto L_12d969a0;
  /* 12d96992 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96995 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96996 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12d96999u);
  /* 12d96999 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9699c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9699e jne 0x12d969a4 */
  if (!C.zf) goto L_12d969a4;
L_12d969a0:;
  /* 12d969a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d969a2 jmp 0x12d969a9 */
  goto L_12d969a9;
L_12d969a4:;
  /* 12d969a4 mov eax, 1 */
  EAX = (0x1u);
L_12d969a9:;
  /* 12d969a9 mov esp, ebp */
  ESP = (EBP);
  /* 12d969ab pop ebp */
  EBP = (pop32());
  /* 12d969ac ret  */
  ESPCHK(0x12d96980u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12d969b0 (88 bytes, 40 insns) */
void f_12d969b0(void) {
  FTRACE(0x12d969b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d969b0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d969b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d969b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d969ba je 0x12d96a03 */
  if (C.zf) goto L_12d96a03;
  /* 12d969bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d969be mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12d969c2 push edi */
  push32((uint32_t)(EDI));
  /* 12d969c3 mov edi, ecx */
  EDI = (ECX);
  /* 12d969c5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d969c8 jb 0x12d969f7 */
  if (C.cf) goto L_12d969f7;
  /* 12d969ca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d969cc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12d969cf je 0x12d969d9 */
  if (C.zf) goto L_12d969d9;
  /* 12d969d1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12d969d3:;
  /* 12d969d3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d969d5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d969d6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d969d7 jne 0x12d969d3 */
  if (!C.zf) goto L_12d969d3;
L_12d969d9:;
  /* 12d969d9 mov ecx, eax */
  ECX = (EAX);
  /* 12d969db shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12d969de add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d969e0 mov ecx, eax */
  ECX = (EAX);
  /* 12d969e2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d969e5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d969e7 mov ecx, edx */
  ECX = (EDX);
  /* 12d969e9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d969ec shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d969ef je 0x12d969f7 */
  if (C.zf) goto L_12d969f7;
  /* 12d969f1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d969f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d969f5 je 0x12d969fd */
  if (C.zf) goto L_12d969fd;
L_12d969f7:;
  /* 12d969f7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d969f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d969fa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12d969fb jne 0x12d969f7 */
  if (!C.zf) goto L_12d969f7;
L_12d969fd:;
  /* 12d969fd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d96a01 pop edi */
  EDI = (pop32());
  /* 12d96a02 ret  */
  ESPCHK(0x12d969b0u, _esp0);
  ESP += 4; return;
L_12d96a03:;
  /* 12d96a03 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d96a07 ret  */
  ESPCHK(0x12d969b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a10 @ 0x12d96a10 (23 bytes, 10 insns) */
void f_12d96a10(void) {
  FTRACE(0x12d96a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96a11 mov ebp, esp */
  EBP = (ESP);
  /* 12d96a13 mov eax, dword ptr [0x12dad708] */
  EAX = (r32((uint32_t)(0x12dad708)));
  /* 12d96a18 push eax */
  push32((uint32_t)(EAX));
  /* 12d96a19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96a1c push ecx */
  push32((uint32_t)(ECX));
  /* 12d96a1d call 0x12d96a30 */
  push32(0x12d96a22u); f_12d96a30();
  /* 12d96a22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96a25 pop ebp */
  EBP = (pop32());
  /* 12d96a26 ret  */
  ESPCHK(0x12d96a10u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12d96a30 (87 bytes, 34 insns) */
void f_12d96a30(void) {
  FTRACE(0x12d96a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96a31 mov ebp, esp */
  EBP = (ESP);
  /* 12d96a33 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96a34 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96a38 jbe 0x12d96a3e */
  if ((C.cf||C.zf)) goto L_12d96a3e;
  /* 12d96a3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d96a3c jmp 0x12d96a83 */
  goto L_12d96a83;
L_12d96a3e:;
  /* 12d96a3e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96a42 ja 0x12d96a55 */
  if ((!C.cf&&!C.zf)) goto L_12d96a55;
  /* 12d96a44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96a47 push eax */
  push32((uint32_t)(EAX));
  /* 12d96a48 call 0x12d96a90 */
  push32(0x12d96a4du); f_12d96a90();
  /* 12d96a4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96a50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d96a53 jmp 0x12d96a5c */
  goto L_12d96a5c;
L_12d96a55:;
  /* 12d96a55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d96a5c:;
  /* 12d96a5c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96a60 jne 0x12d96a68 */
  if (!C.zf) goto L_12d96a68;
  /* 12d96a62 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96a66 jne 0x12d96a6d */
  if (!C.zf) goto L_12d96a6d;
L_12d96a68:;
  /* 12d96a68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96a6b jmp 0x12d96a83 */
  goto L_12d96a83;
L_12d96a6d:;
  /* 12d96a6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96a70 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96a71 call 0x12d96980 */
  push32(0x12d96a76u); f_12d96980();
  /* 12d96a76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96a79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d96a7b jne 0x12d96a81 */
  if (!C.zf) goto L_12d96a81;
  /* 12d96a7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d96a7f jmp 0x12d96a83 */
  goto L_12d96a83;
L_12d96a81:;
  /* 12d96a81 jmp 0x12d96a3e */
  goto L_12d96a3e;
L_12d96a83:;
  /* 12d96a83 mov esp, ebp */
  ESP = (EBP);
  /* 12d96a85 pop ebp */
  EBP = (pop32());
  /* 12d96a86 ret  */
  ESPCHK(0x12d96a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a90 @ 0x12d96a90 (109 bytes, 37 insns) */
void f_12d96a90(void) {
  FTRACE(0x12d96a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96a91 mov ebp, esp */
  EBP = (ESP);
  /* 12d96a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96a94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96a97 cmp eax, dword ptr [0x12dabd54] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12dabd54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96a9d ja 0x12d96acd */
  if ((!C.cf&&!C.zf)) goto L_12d96acd;
  /* 12d96a9f push 9 */
  push32((uint32_t)(0x9u));
  /* 12d96aa1 call 0x12d96640 */
  push32(0x12d96aa6u); f_12d96640();
  /* 12d96aa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96aa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96aac push ecx */
  push32((uint32_t)(ECX));
  /* 12d96aad call 0x12d975d0 */
  push32(0x12d96ab2u); f_12d975d0();
  /* 12d96ab2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96ab5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d96ab8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d96aba call 0x12d966e0 */
  push32(0x12d96abfu); f_12d966e0();
  /* 12d96abf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96ac2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96ac6 je 0x12d96acd */
  if (C.zf) goto L_12d96acd;
  /* 12d96ac8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96acb jmp 0x12d96af9 */
  goto L_12d96af9;
L_12d96acd:;
  /* 12d96acd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96ad1 jne 0x12d96ada */
  if (!C.zf) goto L_12d96ada;
  /* 12d96ad3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12d96ada:;
  /* 12d96ada mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96add add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96ae0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12d96ae3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d96ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96ae9 push eax */
  push32((uint32_t)(EAX));
  /* 12d96aea push 0 */
  push32((uint32_t)(0x0u));
  /* 12d96aec mov ecx, dword ptr [0x12daeecc] */
  ECX = (r32((uint32_t)(0x12daeecc)));
  /* 12d96af2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96af3 call dword ptr [0x12db0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0338))), 0x12d96af9u);
L_12d96af9:;
  /* 12d96af9 mov esp, ebp */
  ESP = (EBP);
  /* 12d96afb pop ebp */
  EBP = (pop32());
  /* 12d96afc ret  */
  ESPCHK(0x12d96a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b00 @ 0x12d96b00 (10 bytes, 5 insns) */
void f_12d96b00(void) {
  FTRACE(0x12d96b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96b01 mov ebp, esp */
  EBP = (ESP);
  /* 12d96b03 mov eax, 1 */
  EAX = (0x1u);
  /* 12d96b08 pop ebp */
  EBP = (pop32());
  /* 12d96b09 ret  */
  ESPCHK(0x12d96b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b10 @ 0x12d96b10 (173 bytes, 59 insns) */
void f_12d96b10(void) {
  FTRACE(0x12d96b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96b11 mov ebp, esp */
  EBP = (ESP);
  /* 12d96b13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d96b16 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96b1a jbe 0x12d96b23 */
  if ((C.cf||C.zf)) goto L_12d96b23;
  /* 12d96b1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d96b1e jmp 0x12d96bb9 */
  goto L_12d96bb9;
L_12d96b23:;
  /* 12d96b23 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d96b25 call 0x12d96640 */
  push32(0x12d96b2au); f_12d96640();
  /* 12d96b2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96b2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96b30 push eax */
  push32((uint32_t)(EAX));
  /* 12d96b31 call 0x12d96f40 */
  push32(0x12d96b36u); f_12d96f40();
  /* 12d96b36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96b39 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d96b3c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96b40 je 0x12d96b81 */
  if (C.zf) goto L_12d96b81;
  /* 12d96b42 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d96b49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96b4c cmp ecx, dword ptr [0x12dabd54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12dabd54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96b52 ja 0x12d96b72 */
  if ((!C.cf&&!C.zf)) goto L_12d96b72;
  /* 12d96b54 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96b57 push edx */
  push32((uint32_t)(EDX));
  /* 12d96b58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96b5b push eax */
  push32((uint32_t)(EAX));
  /* 12d96b5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96b5f push ecx */
  push32((uint32_t)(ECX));
  /* 12d96b60 call 0x12d97e10 */
  push32(0x12d96b65u); f_12d97e10();
  /* 12d96b65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96b68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d96b6a je 0x12d96b72 */
  if (C.zf) goto L_12d96b72;
  /* 12d96b6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96b6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d96b72:;
  /* 12d96b72 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d96b74 call 0x12d966e0 */
  push32(0x12d96b79u); f_12d966e0();
  /* 12d96b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96b7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96b7f jmp 0x12d96bb9 */
  goto L_12d96bb9;
L_12d96b81:;
  /* 12d96b81 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d96b83 call 0x12d966e0 */
  push32(0x12d96b88u); f_12d966e0();
  /* 12d96b88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96b8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96b8f jne 0x12d96b98 */
  if (!C.zf) goto L_12d96b98;
  /* 12d96b91 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12d96b98:;
  /* 12d96b98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96b9b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96b9e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12d96ba0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12d96ba3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96ba6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96ba7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96baa push edx */
  push32((uint32_t)(EDX));
  /* 12d96bab push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12d96bad mov eax, dword ptr [0x12daeecc] */
  EAX = (r32((uint32_t)(0x12daeecc)));
  /* 12d96bb2 push eax */
  push32((uint32_t)(EAX));
  /* 12d96bb3 call dword ptr [0x12db033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db033c))), 0x12d96bb9u);
L_12d96bb9:;
  /* 12d96bb9 mov esp, ebp */
  ESP = (EBP);
  /* 12d96bbb pop ebp */
  EBP = (pop32());
  /* 12d96bbc ret  */
  ESPCHK(0x12d96b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bc0 @ 0x12d96bc0 (490 bytes, 165 insns) */
void f_12d96bc0(void) {
  FTRACE(0x12d96bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12d96bc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d96bc6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96bca jne 0x12d96bdd */
  if (!C.zf) goto L_12d96bdd;
  /* 12d96bcc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96bcf push eax */
  push32((uint32_t)(EAX));
  /* 12d96bd0 call 0x12d96a10 */
  push32(0x12d96bd5u); f_12d96a10();
  /* 12d96bd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96bd8 jmp 0x12d96da6 */
  goto L_12d96da6;
L_12d96bdd:;
  /* 12d96bdd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96be1 jne 0x12d96bf6 */
  if (!C.zf) goto L_12d96bf6;
  /* 12d96be3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96be6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96be7 call 0x12d96db0 */
  push32(0x12d96becu); f_12d96db0();
  /* 12d96bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96bef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d96bf1 jmp 0x12d96da6 */
  goto L_12d96da6;
L_12d96bf6:;
  /* 12d96bf6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d96bfd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96c01 ja 0x12d96d79 */
  if ((!C.cf&&!C.zf)) goto L_12d96d79;
  /* 12d96c07 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d96c09 call 0x12d96640 */
  push32(0x12d96c0eu); f_12d96640();
  /* 12d96c0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96c11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96c14 push edx */
  push32((uint32_t)(EDX));
  /* 12d96c15 call 0x12d96f40 */
  push32(0x12d96c1au); f_12d96f40();
  /* 12d96c1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96c1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d96c20 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96c24 je 0x12d96d3c */
  if (C.zf) goto L_12d96d3c;
  /* 12d96c2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96c2d cmp eax, dword ptr [0x12dabd54] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12dabd54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96c33 ja 0x12d96cb0 */
  if ((!C.cf&&!C.zf)) goto L_12d96cb0;
  /* 12d96c35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96c38 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96c39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96c3c push edx */
  push32((uint32_t)(EDX));
  /* 12d96c3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d96c40 push eax */
  push32((uint32_t)(EAX));
  /* 12d96c41 call 0x12d97e10 */
  push32(0x12d96c46u); f_12d97e10();
  /* 12d96c46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96c49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d96c4b je 0x12d96c55 */
  if (C.zf) goto L_12d96c55;
  /* 12d96c4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96c50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d96c53 jmp 0x12d96cb0 */
  goto L_12d96cb0;
L_12d96c55:;
  /* 12d96c55 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96c58 push edx */
  push32((uint32_t)(EDX));
  /* 12d96c59 call 0x12d975d0 */
  push32(0x12d96c5eu); f_12d975d0();
  /* 12d96c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96c61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d96c64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96c68 je 0x12d96cb0 */
  if (C.zf) goto L_12d96cb0;
  /* 12d96c6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96c6d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12d96c70 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d96c73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d96c76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96c79 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96c7c jae 0x12d96c86 */
  if (!C.cf) goto L_12d96c86;
  /* 12d96c7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96c81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d96c84 jmp 0x12d96c8c */
  goto L_12d96c8c;
L_12d96c86:;
  /* 12d96c86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96c89 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d96c8c:;
  /* 12d96c8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d96c8f push edx */
  push32((uint32_t)(EDX));
  /* 12d96c90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96c93 push eax */
  push32((uint32_t)(EAX));
  /* 12d96c94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96c97 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96c98 call 0x12d99520 */
  push32(0x12d96c9du); f_12d99520();
  /* 12d96c9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96ca0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96ca3 push edx */
  push32((uint32_t)(EDX));
  /* 12d96ca4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d96ca7 push eax */
  push32((uint32_t)(EAX));
  /* 12d96ca8 call 0x12d97000 */
  push32(0x12d96cadu); f_12d97000();
  /* 12d96cad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d96cb0:;
  /* 12d96cb0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96cb4 jne 0x12d96d30 */
  if (!C.zf) goto L_12d96d30;
  /* 12d96cb6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96cba jne 0x12d96cc3 */
  if (!C.zf) goto L_12d96cc3;
  /* 12d96cbc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12d96cc3:;
  /* 12d96cc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96cc6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96cc9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12d96ccc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d96ccf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96cd2 push edx */
  push32((uint32_t)(EDX));
  /* 12d96cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d96cd5 mov eax, dword ptr [0x12daeecc] */
  EAX = (r32((uint32_t)(0x12daeecc)));
  /* 12d96cda push eax */
  push32((uint32_t)(EAX));
  /* 12d96cdb call dword ptr [0x12db0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0338))), 0x12d96ce1u);
  /* 12d96ce1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d96ce4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96ce8 je 0x12d96d30 */
  if (C.zf) goto L_12d96d30;
  /* 12d96cea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96ced mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d96cf0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d96cf3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d96cf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96cf9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96cfc jae 0x12d96d06 */
  if (!C.cf) goto L_12d96d06;
  /* 12d96cfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96d01 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d96d04 jmp 0x12d96d0c */
  goto L_12d96d0c;
L_12d96d06:;
  /* 12d96d06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96d09 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12d96d0c:;
  /* 12d96d0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d96d0f push eax */
  push32((uint32_t)(EAX));
  /* 12d96d10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96d13 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96d14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96d17 push edx */
  push32((uint32_t)(EDX));
  /* 12d96d18 call 0x12d99520 */
  push32(0x12d96d1du); f_12d99520();
  /* 12d96d1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96d23 push eax */
  push32((uint32_t)(EAX));
  /* 12d96d24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d96d27 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96d28 call 0x12d97000 */
  push32(0x12d96d2du); f_12d97000();
  /* 12d96d2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d96d30:;
  /* 12d96d30 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d96d32 call 0x12d966e0 */
  push32(0x12d96d37u); f_12d966e0();
  /* 12d96d37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96d3a jmp 0x12d96d79 */
  goto L_12d96d79;
L_12d96d3c:;
  /* 12d96d3c push 9 */
  push32((uint32_t)(0x9u));
  /* 12d96d3e call 0x12d966e0 */
  push32(0x12d96d43u); f_12d966e0();
  /* 12d96d43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96d46 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96d4a jne 0x12d96d53 */
  if (!C.zf) goto L_12d96d53;
  /* 12d96d4c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12d96d53:;
  /* 12d96d53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96d56 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96d59 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12d96d5c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12d96d5f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96d62 push eax */
  push32((uint32_t)(EAX));
  /* 12d96d63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96d66 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d96d69 mov edx, dword ptr [0x12daeecc] */
  EDX = (r32((uint32_t)(0x12daeecc)));
  /* 12d96d6f push edx */
  push32((uint32_t)(EDX));
  /* 12d96d70 call dword ptr [0x12db033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db033c))), 0x12d96d76u);
  /* 12d96d76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d96d79:;
  /* 12d96d79 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96d7d jne 0x12d96d88 */
  if (!C.zf) goto L_12d96d88;
  /* 12d96d7f cmp dword ptr [0x12dad708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96d86 jne 0x12d96d8d */
  if (!C.zf) goto L_12d96d8d;
L_12d96d88:;
  /* 12d96d88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96d8b jmp 0x12d96da6 */
  goto L_12d96da6;
L_12d96d8d:;
  /* 12d96d8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96d90 push eax */
  push32((uint32_t)(EAX));
  /* 12d96d91 call 0x12d96980 */
  push32(0x12d96d96u); f_12d96980();
  /* 12d96d96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96d99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d96d9b jne 0x12d96da1 */
  if (!C.zf) goto L_12d96da1;
  /* 12d96d9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d96d9f jmp 0x12d96da6 */
  goto L_12d96da6;
L_12d96da1:;
  /* 12d96da1 jmp 0x12d96bf6 */
  goto L_12d96bf6;
L_12d96da6:;
  /* 12d96da6 mov esp, ebp */
  ESP = (EBP);
  /* 12d96da8 pop ebp */
  EBP = (pop32());
  /* 12d96da9 ret  */
  ESPCHK(0x12d96bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006db0 @ 0x12d96db0 (104 bytes, 38 insns) */
void f_12d96db0(void) {
  FTRACE(0x12d96db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96db1 mov ebp, esp */
  EBP = (ESP);
  /* 12d96db3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96db4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96db8 jne 0x12d96dbc */
  if (!C.zf) goto L_12d96dbc;
  /* 12d96dba jmp 0x12d96e14 */
  goto L_12d96e14;
L_12d96dbc:;
  /* 12d96dbc push 9 */
  push32((uint32_t)(0x9u));
  /* 12d96dbe call 0x12d96640 */
  push32(0x12d96dc3u); f_12d96640();
  /* 12d96dc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96dc9 push eax */
  push32((uint32_t)(EAX));
  /* 12d96dca call 0x12d96f40 */
  push32(0x12d96dcfu); f_12d96f40();
  /* 12d96dcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96dd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d96dd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96dd9 je 0x12d96df7 */
  if (C.zf) goto L_12d96df7;
  /* 12d96ddb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96dde push ecx */
  push32((uint32_t)(ECX));
  /* 12d96ddf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96de2 push edx */
  push32((uint32_t)(EDX));
  /* 12d96de3 call 0x12d97000 */
  push32(0x12d96de8u); f_12d97000();
  /* 12d96de8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96deb push 9 */
  push32((uint32_t)(0x9u));
  /* 12d96ded call 0x12d966e0 */
  push32(0x12d96df2u); f_12d966e0();
  /* 12d96df2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96df5 jmp 0x12d96e14 */
  goto L_12d96e14;
L_12d96df7:;
  /* 12d96df7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d96df9 call 0x12d966e0 */
  push32(0x12d96dfeu); f_12d966e0();
  /* 12d96dfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96e01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96e04 push eax */
  push32((uint32_t)(EAX));
  /* 12d96e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d96e07 mov ecx, dword ptr [0x12daeecc] */
  ECX = (r32((uint32_t)(0x12daeecc)));
  /* 12d96e0d push ecx */
  push32((uint32_t)(ECX));
  /* 12d96e0e call dword ptr [0x12db0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0318))), 0x12d96e14u);
L_12d96e14:;
  /* 12d96e14 mov esp, ebp */
  ESP = (EBP);
  /* 12d96e16 pop ebp */
  EBP = (pop32());
  /* 12d96e17 ret  */
  ESPCHK(0x12d96db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e20 @ 0x12d96e20 (116 bytes, 34 insns) */
void f_12d96e20(void) {
  FTRACE(0x12d96e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96e21 mov ebp, esp */
  EBP = (ESP);
  /* 12d96e23 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96e24 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12d96e2b push 9 */
  push32((uint32_t)(0x9u));
  /* 12d96e2d call 0x12d96640 */
  push32(0x12d96e32u); f_12d96640();
  /* 12d96e32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96e35 call 0x12d98530 */
  push32(0x12d96e3au); f_12d98530();
  /* 12d96e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d96e3c jge 0x12d96e45 */
  if ((C.sf==C.of)) goto L_12d96e45;
  /* 12d96e3e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12d96e45:;
  /* 12d96e45 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d96e47 call 0x12d966e0 */
  push32(0x12d96e4cu); f_12d966e0();
  /* 12d96e4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d96e51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d96e53 mov eax, dword ptr [0x12daeecc] */
  EAX = (r32((uint32_t)(0x12daeecc)));
  /* 12d96e58 push eax */
  push32((uint32_t)(EAX));
  /* 12d96e59 call dword ptr [0x12db02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02f8))), 0x12d96e5fu);
  /* 12d96e5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d96e61 jne 0x12d96e8d */
  if (!C.zf) goto L_12d96e8d;
  /* 12d96e63 call dword ptr [0x12db02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02d8))), 0x12d96e69u);
  /* 12d96e69 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96e6c jne 0x12d96e86 */
  if (!C.zf) goto L_12d96e86;
  /* 12d96e6e call 0x12d9ab20 */
  push32(0x12d96e73u); f_12d9ab20();
  /* 12d96e73 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12d96e79 call 0x12d9ab10 */
  push32(0x12d96e7eu); f_12d9ab10();
  /* 12d96e7e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12d96e84 jmp 0x12d96e8d */
  goto L_12d96e8d;
L_12d96e86:;
  /* 12d96e86 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12d96e8d:;
  /* 12d96e8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96e90 mov esp, ebp */
  ESP = (EBP);
  /* 12d96e92 pop ebp */
  EBP = (pop32());
  /* 12d96e93 ret  */
  ESPCHK(0x12d96e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ea0 @ 0x12d96ea0 (10 bytes, 5 insns) */
void f_12d96ea0(void) {
  FTRACE(0x12d96ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12d96ea3 call 0x12d96e20 */
  push32(0x12d96ea8u); f_12d96e20();
  /* 12d96ea8 pop ebp */
  EBP = (pop32());
  /* 12d96ea9 ret  */
  ESPCHK(0x12d96ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eb0 @ 0x12d96eb0 (10 bytes, 5 insns) */
void f_12d96eb0(void) {
  FTRACE(0x12d96eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d96eb3 mov eax, dword ptr [0x12dabd54] */
  EAX = (r32((uint32_t)(0x12dabd54)));
  /* 12d96eb8 pop ebp */
  EBP = (pop32());
  /* 12d96eb9 ret  */
  ESPCHK(0x12d96eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec0 @ 0x12d96ec0 (31 bytes, 11 insns) */
void f_12d96ec0(void) {
  FTRACE(0x12d96ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12d96ec3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96eca jbe 0x12d96ed0 */
  if ((C.cf||C.zf)) goto L_12d96ed0;
  /* 12d96ecc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d96ece jmp 0x12d96edd */
  goto L_12d96edd;
L_12d96ed0:;
  /* 12d96ed0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96ed3 mov dword ptr [0x12dabd54], eax */
  w32((uint32_t)(0x12dabd54), (EAX));
  /* 12d96ed8 mov eax, 1 */
  EAX = (0x1u);
L_12d96edd:;
  /* 12d96edd pop ebp */
  EBP = (pop32());
  /* 12d96ede ret  */
  ESPCHK(0x12d96ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ee0 @ 0x12d96ee0 (89 bytes, 20 insns) */
void f_12d96ee0(void) {
  FTRACE(0x12d96ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12d96ee3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12d96ee8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d96eea mov eax, dword ptr [0x12daeecc] */
  EAX = (r32((uint32_t)(0x12daeecc)));
  /* 12d96eef push eax */
  push32((uint32_t)(EAX));
  /* 12d96ef0 call dword ptr [0x12db0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0338))), 0x12d96ef6u);
  /* 12d96ef6 mov dword ptr [0x12daeec8], eax */
  w32((uint32_t)(0x12daeec8), (EAX));
  /* 12d96efb cmp dword ptr [0x12daeec8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daeec8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96f02 jne 0x12d96f08 */
  if (!C.zf) goto L_12d96f08;
  /* 12d96f04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d96f06 jmp 0x12d96f37 */
  goto L_12d96f37;
L_12d96f08:;
  /* 12d96f08 mov ecx, dword ptr [0x12daeec8] */
  ECX = (r32((uint32_t)(0x12daeec8)));
  /* 12d96f0e mov dword ptr [0x12daeebc], ecx */
  w32((uint32_t)(0x12daeebc), (ECX));
  /* 12d96f14 mov dword ptr [0x12daeec0], 0 */
  w32((uint32_t)(0x12daeec0), (0x0u));
  /* 12d96f1e mov dword ptr [0x12daeec4], 0 */
  w32((uint32_t)(0x12daeec4), (0x0u));
  /* 12d96f28 mov dword ptr [0x12daeea8], 0x10 */
  w32((uint32_t)(0x12daeea8), (0x10u));
  /* 12d96f32 mov eax, 1 */
  EAX = (0x1u);
L_12d96f37:;
  /* 12d96f37 pop ebp */
  EBP = (pop32());
  /* 12d96f38 ret  */
  ESPCHK(0x12d96ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f40 @ 0x12d96f40 (85 bytes, 29 insns) */
void f_12d96f40(void) {
  FTRACE(0x12d96f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96f41 mov ebp, esp */
  EBP = (ESP);
  /* 12d96f43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d96f46 mov eax, dword ptr [0x12daeec4] */
  EAX = (r32((uint32_t)(0x12daeec4)));
  /* 12d96f4b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d96f4e mov ecx, dword ptr [0x12daeec8] */
  ECX = (r32((uint32_t)(0x12daeec8)));
  /* 12d96f54 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96f56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d96f59 mov edx, dword ptr [0x12daeec8] */
  EDX = (r32((uint32_t)(0x12daeec8)));
  /* 12d96f5f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d96f62:;
  /* 12d96f62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96f65 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96f68 jae 0x12d96f8f */
  if (!C.cf) goto L_12d96f8f;
  /* 12d96f6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96f6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96f70 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d96f73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d96f76 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96f7d jae 0x12d96f84 */
  if (!C.cf) goto L_12d96f84;
  /* 12d96f7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96f82 jmp 0x12d96f91 */
  goto L_12d96f91;
L_12d96f84:;
  /* 12d96f84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96f87 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96f8a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d96f8d jmp 0x12d96f62 */
  goto L_12d96f62;
L_12d96f8f:;
  /* 12d96f8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d96f91:;
  /* 12d96f91 mov esp, ebp */
  ESP = (EBP);
  /* 12d96f93 pop ebp */
  EBP = (pop32());
  /* 12d96f94 ret  */
  ESPCHK(0x12d96f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fa0 @ 0x12d96fa0 (95 bytes, 33 insns) */
void f_12d96fa0(void) {
  FTRACE(0x12d96fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12d96fa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d96fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96fa9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96fac sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d96faf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d96fb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96fb5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12d96fb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d96fbb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d96fc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96fc3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d96fc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96fc8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d96fcb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d96fcd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d96fcf jne 0x12d96ff1 */
  if (!C.zf) goto L_12d96ff1;
  /* 12d96fd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96fd4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12d96fd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d96fd9 jne 0x12d96ff1 */
  if (!C.zf) goto L_12d96ff1;
  /* 12d96fdb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96fde and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d96fe4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d96fe6 je 0x12d96ff1 */
  if (C.zf) goto L_12d96ff1;
  /* 12d96fe8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12d96fef jmp 0x12d96ff8 */
  goto L_12d96ff8;
L_12d96ff1:;
  /* 12d96ff1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12d96ff8:;
  /* 12d96ff8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d96ffb mov esp, ebp */
  ESP = (EBP);
  /* 12d96ffd pop ebp */
  EBP = (pop32());
  /* 12d96ffe ret  */
  ESPCHK(0x12d96fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007000 @ 0x12d97000 (1485 bytes, 453 insns) */
void f_12d97000(void) {
  FTRACE(0x12d97000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d97000 push ebp */
  push32((uint32_t)(EBP));
  /* 12d97001 mov ebp, esp */
  EBP = (ESP);
  /* 12d97003 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97006 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97009 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d9700c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12d9700f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97012 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d97015 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97018 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d9701b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9701e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12d97021 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d97024 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97027 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9702d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d97030 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12d97037 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9703a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9703d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97040 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d97043 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d97046 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d97048 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9704b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12d9704e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d97051 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97054 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12d97057 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d9705a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d9705c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d9705f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d97062 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12d97065 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d97068 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9706b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9706e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d97070 jne 0x12d97198 */
  if (!C.zf) goto L_12d97198;
  /* 12d97076 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d97079 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d9707c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9707f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d97082 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97086 jbe 0x12d9708f */
  if ((C.cf||C.zf)) goto L_12d9708f;
  /* 12d97088 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12d9708f:;
  /* 12d9708f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97092 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97095 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d97098 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9709b jne 0x12d97171 */
  if (!C.zf) goto L_12d97171;
  /* 12d970a1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d970a5 jae 0x12d97106 */
  if (!C.cf) goto L_12d97106;
  /* 12d970a7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d970ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d970af shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d970b1 not eax */
  EAX = (~(EAX));
  /* 12d970b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d970b6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d970b9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12d970bd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d970bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d970c2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d970c5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12d970c9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d970cc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d970cf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12d970d2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d970d5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d970d8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d970db mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12d970de mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d970e1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d970e4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d970e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d970ea jne 0x12d97104 */
  if (!C.zf) goto L_12d97104;
  /* 12d970ec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d970f1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d970f4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d970f6 not eax */
  EAX = (~(EAX));
  /* 12d970f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d970fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d970fd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d970ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97102 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d97104:;
  /* 12d97104 jmp 0x12d97171 */
  goto L_12d97171;
L_12d97106:;
  /* 12d97106 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d97109 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9710c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d97111 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d97113 not edx */
  EDX = (~(EDX));
  /* 12d97115 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97118 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d9711b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12d97122 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d97124 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97127 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d9712a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12d97131 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d97134 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97137 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d9713a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d9713d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d97140 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97143 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12d97146 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d97149 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9714c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d97150 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d97152 jne 0x12d97171 */
  if (!C.zf) goto L_12d97171;
  /* 12d97154 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d97157 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9715a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d9715f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d97161 not edx */
  EDX = (~(EDX));
  /* 12d97163 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97166 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d97169 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9716b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9716e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12d97171:;
  /* 12d97171 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97174 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d97177 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d9717a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d9717d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12d97180 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97183 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d97186 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97189 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d9718c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d9718f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97192 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97195 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12d97198:;
  /* 12d97198 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9719b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12d9719e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d971a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d971a4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d971a8 jbe 0x12d971b1 */
  if ((C.cf||C.zf)) goto L_12d971b1;
  /* 12d971aa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12d971b1:;
  /* 12d971b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d971b4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d971b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d971b9 jne 0x12d97315 */
  if (!C.zf) goto L_12d97315;
  /* 12d971bf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d971c2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d971c5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12d971c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d971cb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12d971ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d971d1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12d971d4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d971d8 jbe 0x12d971e1 */
  if ((C.cf||C.zf)) goto L_12d971e1;
  /* 12d971da mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12d971e1:;
  /* 12d971e1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d971e4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d971e7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12d971ea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d971ed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d971f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d971f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12d971f6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d971fa jbe 0x12d97203 */
  if ((C.cf||C.zf)) goto L_12d97203;
  /* 12d971fc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12d97203:;
  /* 12d97203 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97206 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97209 je 0x12d9730f */
  if (C.zf) goto L_12d9730f;
  /* 12d9720f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d97212 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d97215 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d97218 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9721b jne 0x12d972f1 */
  if (!C.zf) goto L_12d972f1;
  /* 12d97221 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97225 jae 0x12d97286 */
  if (!C.cf) goto L_12d97286;
  /* 12d97227 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d9722c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9722f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d97231 not edx */
  EDX = (~(EDX));
  /* 12d97233 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97236 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d97239 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12d9723d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9723f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97242 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d97245 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12d97249 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d9724c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9724f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d97252 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d97255 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d97258 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9725b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12d9725e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d97261 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97264 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d97268 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9726a jne 0x12d97284 */
  if (!C.zf) goto L_12d97284;
  /* 12d9726c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d97271 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97274 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d97276 not edx */
  EDX = (~(EDX));
  /* 12d97278 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9727b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d9727d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9727f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97282 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d97284:;
  /* 12d97284 jmp 0x12d972f1 */
  goto L_12d972f1;
L_12d97286:;
  /* 12d97286 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97289 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9728c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d97291 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d97293 not eax */
  EAX = (~(EAX));
  /* 12d97295 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97298 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d9729b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12d972a2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d972a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d972a7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d972aa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12d972b1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d972b4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d972b7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12d972ba sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d972bd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d972c0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d972c3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12d972c6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d972c9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d972cc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d972d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d972d2 jne 0x12d972f1 */
  if (!C.zf) goto L_12d972f1;
  /* 12d972d4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d972d7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d972da mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d972df shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d972e1 not eax */
  EAX = (~(EAX));
  /* 12d972e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d972e6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d972e9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d972eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d972ee mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d972f1:;
  /* 12d972f1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d972f4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d972f7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d972fa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d972fd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d97300 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d97303 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d97306 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d97309 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d9730c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12d9730f:;
  /* 12d9730f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d97312 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12d97315:;
  /* 12d97315 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d97318 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9731b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9731d jne 0x12d9732b */
  if (!C.zf) goto L_12d9732b;
  /* 12d9731f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97322 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97325 je 0x12d9743b */
  if (C.zf) goto L_12d9743b;
L_12d9732b:;
  /* 12d9732b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d9732e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d97331 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12d97334 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d97337 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d9733a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9733d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d97340 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d97343 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d97346 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d97349 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12d9734c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9734f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d97352 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12d97355 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d97358 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d9735b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d9735e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d97361 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d97364 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d97367 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d9736a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9736d jne 0x12d9743b */
  if (!C.zf) goto L_12d9743b;
  /* 12d97373 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97377 jae 0x12d973d4 */
  if (!C.cf) goto L_12d973d4;
  /* 12d97379 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d9737c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9737f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d97383 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d97386 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97389 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d9738c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d9738f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d97392 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97395 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12d97398 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9739a jne 0x12d973b2 */
  if (!C.zf) goto L_12d973b2;
  /* 12d9739c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d973a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d973a4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d973a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d973a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d973ab or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d973ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d973b0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d973b2:;
  /* 12d973b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d973b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d973ba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d973bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d973bf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d973c2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12d973c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d973c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d973cb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d973ce mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12d973d2 jmp 0x12d9743b */
  goto L_12d9743b;
L_12d973d4:;
  /* 12d973d4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d973d7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d973da movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d973de mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d973e1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d973e4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d973e7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d973ea mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d973ed add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d973f0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12d973f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d973f5 jne 0x12d97412 */
  if (!C.zf) goto L_12d97412;
  /* 12d973f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d973fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d973fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d97402 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d97404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97407 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d9740a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9740c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9740f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12d97412:;
  /* 12d97412 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d97415 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97418 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d9741d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d9741f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97422 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d97425 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12d9742c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9742e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97431 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d97434 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12d9743b:;
  /* 12d9743b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d9743e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97441 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d97443 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d97446 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97449 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9744c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12d9744f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d97452 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d97454 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97457 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9745a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d9745c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9745f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97462 jne 0x12d975c9 */
  if (!C.zf) goto L_12d975c9;
  /* 12d97468 cmp dword ptr [0x12daeec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daeec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9746f je 0x12d975b8 */
  if (C.zf) goto L_12d975b8;
  /* 12d97475 mov eax, dword ptr [0x12daeeb8] */
  EAX = (r32((uint32_t)(0x12daeeb8)));
  /* 12d9747a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12d9747d mov ecx, dword ptr [0x12daeec0] */
  ECX = (r32((uint32_t)(0x12daeec0)));
  /* 12d97483 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d97486 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97488 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d9748b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12d97490 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d97495 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97498 push eax */
  push32((uint32_t)(EAX));
  /* 12d97499 call dword ptr [0x12db031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db031c))), 0x12d9749fu);
  /* 12d9749f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d974a4 mov ecx, dword ptr [0x12daeeb8] */
  ECX = (r32((uint32_t)(0x12daeeb8)));
  /* 12d974aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d974ac mov eax, dword ptr [0x12daeec0] */
  EAX = (r32((uint32_t)(0x12daeec0)));
  /* 12d974b1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d974b4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d974b6 mov edx, dword ptr [0x12daeec0] */
  EDX = (r32((uint32_t)(0x12daeec0)));
  /* 12d974bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d974bf mov eax, dword ptr [0x12daeec0] */
  EAX = (r32((uint32_t)(0x12daeec0)));
  /* 12d974c4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d974c7 mov edx, dword ptr [0x12daeeb8] */
  EDX = (r32((uint32_t)(0x12daeeb8)));
  /* 12d974cd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12d974d8 mov eax, dword ptr [0x12daeec0] */
  EAX = (r32((uint32_t)(0x12daeec0)));
  /* 12d974dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d974e0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12d974e3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d974e6 mov eax, dword ptr [0x12daeec0] */
  EAX = (r32((uint32_t)(0x12daeec0)));
  /* 12d974eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d974ee mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12d974f1 mov edx, dword ptr [0x12daeec0] */
  EDX = (r32((uint32_t)(0x12daeec0)));
  /* 12d974f7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d974fa movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12d974fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d97500 jne 0x12d97516 */
  if (!C.zf) goto L_12d97516;
  /* 12d97502 mov edx, dword ptr [0x12daeec0] */
  EDX = (r32((uint32_t)(0x12daeec0)));
  /* 12d97508 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d9750b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12d9750d mov ecx, dword ptr [0x12daeec0] */
  ECX = (r32((uint32_t)(0x12daeec0)));
  /* 12d97513 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12d97516:;
  /* 12d97516 mov edx, dword ptr [0x12daeec0] */
  EDX = (r32((uint32_t)(0x12daeec0)));
  /* 12d9751c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97520 jne 0x12d975b8 */
  if (!C.zf) goto L_12d975b8;
  /* 12d97526 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d9752b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9752d mov eax, dword ptr [0x12daeec0] */
  EAX = (r32((uint32_t)(0x12daeec0)));
  /* 12d97532 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d97535 push ecx */
  push32((uint32_t)(ECX));
  /* 12d97536 call dword ptr [0x12db031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db031c))), 0x12d9753cu);
  /* 12d9753c mov edx, dword ptr [0x12daeec0] */
  EDX = (r32((uint32_t)(0x12daeec0)));
  /* 12d97542 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d97545 push eax */
  push32((uint32_t)(EAX));
  /* 12d97546 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d97548 mov ecx, dword ptr [0x12daeecc] */
  ECX = (r32((uint32_t)(0x12daeecc)));
  /* 12d9754e push ecx */
  push32((uint32_t)(ECX));
  /* 12d9754f call dword ptr [0x12db0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0318))), 0x12d97555u);
  /* 12d97555 mov edx, dword ptr [0x12daeec4] */
  EDX = (r32((uint32_t)(0x12daeec4)));
  /* 12d9755b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9755e mov eax, dword ptr [0x12daeec8] */
  EAX = (r32((uint32_t)(0x12daeec8)));
  /* 12d97563 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97565 mov ecx, dword ptr [0x12daeec0] */
  ECX = (r32((uint32_t)(0x12daeec0)));
  /* 12d9756b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9756e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97570 push eax */
  push32((uint32_t)(EAX));
  /* 12d97571 mov edx, dword ptr [0x12daeec0] */
  EDX = (r32((uint32_t)(0x12daeec0)));
  /* 12d97577 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9757a push edx */
  push32((uint32_t)(EDX));
  /* 12d9757b mov eax, dword ptr [0x12daeec0] */
  EAX = (r32((uint32_t)(0x12daeec0)));
  /* 12d97580 push eax */
  push32((uint32_t)(EAX));
  /* 12d97581 call 0x12d9ab30 */
  push32(0x12d97586u); f_12d9ab30();
  /* 12d97586 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97589 mov ecx, dword ptr [0x12daeec4] */
  ECX = (r32((uint32_t)(0x12daeec4)));
  /* 12d9758f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97592 mov dword ptr [0x12daeec4], ecx */
  w32((uint32_t)(0x12daeec4), (ECX));
  /* 12d97598 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9759b cmp edx, dword ptr [0x12daeec0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12daeec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d975a1 jbe 0x12d975ac */
  if ((C.cf||C.zf)) goto L_12d975ac;
  /* 12d975a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d975a6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d975a9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d975ac:;
  /* 12d975ac mov ecx, dword ptr [0x12daeec8] */
  ECX = (r32((uint32_t)(0x12daeec8)));
  /* 12d975b2 mov dword ptr [0x12daeebc], ecx */
  w32((uint32_t)(0x12daeebc), (ECX));
L_12d975b8:;
  /* 12d975b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d975bb mov dword ptr [0x12daeec0], edx */
  w32((uint32_t)(0x12daeec0), (EDX));
  /* 12d975c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d975c4 mov dword ptr [0x12daeeb8], eax */
  w32((uint32_t)(0x12daeeb8), (EAX));
L_12d975c9:;
  /* 12d975c9 mov esp, ebp */
  ESP = (EBP);
  /* 12d975cb pop ebp */
  EBP = (pop32());
  /* 12d975cc ret  */
  ESPCHK(0x12d97000u, _esp0);
  ESP += 4; return;
}

/* FUN_100075d0 @ 0x12d975d0 (1334 bytes, 427 insns) */
void f_12d975d0(void) {
  FTRACE(0x12d975d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d975d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d975d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d975d3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d975d6 push esi */
  push32((uint32_t)(ESI));
  /* 12d975d7 mov eax, dword ptr [0x12daeec4] */
  EAX = (r32((uint32_t)(0x12daeec4)));
  /* 12d975dc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d975df mov ecx, dword ptr [0x12daeec8] */
  ECX = (r32((uint32_t)(0x12daeec8)));
  /* 12d975e5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d975e7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d975ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d975ed add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d975f0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12d975f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12d975f6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d975f9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12d975fc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d975ff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d97602 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97606 jge 0x12d9761c */
  if ((C.sf==C.of)) goto L_12d9761c;
  /* 12d97608 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9760b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9760e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d97610 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d97613 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12d9761a jmp 0x12d97631 */
  goto L_12d97631;
L_12d9761c:;
  /* 12d9761c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d97623 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d97626 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97629 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9762c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d9762e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12d97631:;
  /* 12d97631 mov ecx, dword ptr [0x12daeebc] */
  ECX = (r32((uint32_t)(0x12daeebc)));
  /* 12d97637 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12d9763a:;
  /* 12d9763a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9763d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97640 jae 0x12d97666 */
  if (!C.cf) goto L_12d97666;
  /* 12d97642 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97645 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d97648 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12d9764a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9764d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d97650 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12d97653 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d97655 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d97657 je 0x12d9765b */
  if (C.zf) goto L_12d9765b;
  /* 12d97659 jmp 0x12d97666 */
  goto L_12d97666;
L_12d9765b:;
  /* 12d9765b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9765e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97661 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d97664 jmp 0x12d9763a */
  goto L_12d9763a;
L_12d97666:;
  /* 12d97666 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97669 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9766c jne 0x12d9774d */
  if (!C.zf) goto L_12d9774d;
  /* 12d97672 mov eax, dword ptr [0x12daeec8] */
  EAX = (r32((uint32_t)(0x12daeec8)));
  /* 12d97677 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12d9767a:;
  /* 12d9767a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9767d cmp ecx, dword ptr [0x12daeebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12daeebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97683 jae 0x12d976a9 */
  if (!C.cf) goto L_12d976a9;
  /* 12d97685 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97688 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d9768b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12d9768d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97690 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d97693 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12d97696 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d97698 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9769a je 0x12d9769e */
  if (C.zf) goto L_12d9769e;
  /* 12d9769c jmp 0x12d976a9 */
  goto L_12d976a9;
L_12d9769e:;
  /* 12d9769e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d976a1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d976a4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d976a7 jmp 0x12d9767a */
  goto L_12d9767a;
L_12d976a9:;
  /* 12d976a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d976ac cmp ecx, dword ptr [0x12daeebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12daeebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d976b2 jne 0x12d9774d */
  if (!C.zf) goto L_12d9774d;
L_12d976b8:;
  /* 12d976b8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d976bb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d976be jae 0x12d976d6 */
  if (!C.cf) goto L_12d976d6;
  /* 12d976c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d976c3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d976c7 je 0x12d976cb */
  if (C.zf) goto L_12d976cb;
  /* 12d976c9 jmp 0x12d976d6 */
  goto L_12d976d6;
L_12d976cb:;
  /* 12d976cb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d976ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d976d1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d976d4 jmp 0x12d976b8 */
  goto L_12d976b8;
L_12d976d6:;
  /* 12d976d6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d976d9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d976dc jne 0x12d97727 */
  if (!C.zf) goto L_12d97727;
  /* 12d976de mov eax, dword ptr [0x12daeec8] */
  EAX = (r32((uint32_t)(0x12daeec8)));
  /* 12d976e3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12d976e6:;
  /* 12d976e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d976e9 cmp ecx, dword ptr [0x12daeebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12daeebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d976ef jae 0x12d97707 */
  if (!C.cf) goto L_12d97707;
  /* 12d976f1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d976f4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d976f8 je 0x12d976fc */
  if (C.zf) goto L_12d976fc;
  /* 12d976fa jmp 0x12d97707 */
  goto L_12d97707;
L_12d976fc:;
  /* 12d976fc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d976ff add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97702 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d97705 jmp 0x12d976e6 */
  goto L_12d976e6;
L_12d97707:;
  /* 12d97707 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9770a cmp ecx, dword ptr [0x12daeebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12daeebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97710 jne 0x12d97727 */
  if (!C.zf) goto L_12d97727;
  /* 12d97712 call 0x12d97b10 */
  push32(0x12d97717u); f_12d97b10();
  /* 12d97717 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d9771a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9771e jne 0x12d97727 */
  if (!C.zf) goto L_12d97727;
  /* 12d97720 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d97722 jmp 0x12d97b01 */
  goto L_12d97b01;
L_12d97727:;
  /* 12d97727 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9772a push edx */
  push32((uint32_t)(EDX));
  /* 12d9772b call 0x12d97c20 */
  push32(0x12d97730u); f_12d97c20();
  /* 12d97730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97733 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97736 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d97739 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d9773b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9773e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d97741 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97744 jne 0x12d9774d */
  if (!C.zf) goto L_12d9774d;
  /* 12d97746 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d97748 jmp 0x12d97b01 */
  goto L_12d97b01;
L_12d9774d:;
  /* 12d9774d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97750 mov dword ptr [0x12daeebc], edx */
  w32((uint32_t)(0x12daeebc), (EDX));
  /* 12d97756 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97759 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d9775c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12d9775f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97762 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d97764 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12d97767 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9776b je 0x12d97790 */
  if (C.zf) goto L_12d97790;
  /* 12d9776d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97770 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97773 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d97776 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12d9777a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9777d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97780 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12d97783 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12d9778a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12d9778c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9778e jne 0x12d977c5 */
  if (!C.zf) goto L_12d977c5;
L_12d97790:;
  /* 12d97790 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12d97797:;
  /* 12d97797 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9779a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d9779d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d977a0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12d977a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d977a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d977aa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12d977ad and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12d977b4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12d977b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d977b8 jne 0x12d977c5 */
  if (!C.zf) goto L_12d977c5;
  /* 12d977ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d977bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d977c0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12d977c3 jmp 0x12d97797 */
  goto L_12d97797;
L_12d977c5:;
  /* 12d977c5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d977c8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d977ce mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d977d1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12d977d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d977db mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d977e2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d977e5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d977e8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d977eb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12d977ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d977f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d977f6 jne 0x12d97812 */
  if (!C.zf) goto L_12d97812;
  /* 12d977f8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12d977ff mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97802 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97805 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d97808 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12d9780f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12d97812:;
  /* 12d97812 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97816 jl 0x12d9782b */
  if ((C.sf!=C.of)) goto L_12d9782b;
  /* 12d97818 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d9781b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d9781d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d97820 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d97823 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97826 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d97829 jmp 0x12d97812 */
  goto L_12d97812;
L_12d9782b:;
  /* 12d9782b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9782e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97831 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12d97835 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d97838 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9783b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d9783d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97840 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d97843 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d97846 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12d97849 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9784c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d9784f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97853 jle 0x12d9785c */
  if ((C.zf||C.sf!=C.of)) goto L_12d9785c;
  /* 12d97855 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12d9785c:;
  /* 12d9785c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9785f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97862 je 0x12d97a80 */
  if (C.zf) goto L_12d97a80;
  /* 12d97868 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9786b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9786e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d97871 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97874 jne 0x12d9794a */
  if (!C.zf) goto L_12d9794a;
  /* 12d9787a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9787e jge 0x12d978df */
  if ((C.sf==C.of)) goto L_12d978df;
  /* 12d97880 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d97885 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d97888 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d9788a not eax */
  EAX = (~(EAX));
  /* 12d9788c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9788f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97892 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12d97896 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d97898 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9789b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d9789e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12d978a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d978a5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d978a8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12d978ab sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d978ae mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d978b1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d978b4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12d978b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d978ba add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d978bd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d978c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d978c3 jne 0x12d978dd */
  if (!C.zf) goto L_12d978dd;
  /* 12d978c5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d978ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d978cd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d978cf not eax */
  EAX = (~(EAX));
  /* 12d978d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d978d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d978d6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d978d8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d978db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d978dd:;
  /* 12d978dd jmp 0x12d9794a */
  goto L_12d9794a;
L_12d978df:;
  /* 12d978df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d978e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d978e5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d978ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d978ec not edx */
  EDX = (~(EDX));
  /* 12d978ee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d978f1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d978f4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12d978fb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d978fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97900 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97903 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12d9790a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d9790d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97910 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d97913 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d97916 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97919 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9791c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12d9791f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97922 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97925 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d97929 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9792b jne 0x12d9794a */
  if (!C.zf) goto L_12d9794a;
  /* 12d9792d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d97930 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97933 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d97938 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d9793a not edx */
  EDX = (~(EDX));
  /* 12d9793c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9793f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d97942 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d97944 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97947 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12d9794a:;
  /* 12d9794a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9794d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d97950 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97953 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d97956 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12d97959 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9795c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d9795f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97962 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d97965 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d97968 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9796c je 0x12d97a80 */
  if (C.zf) goto L_12d97a80;
  /* 12d97972 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d97975 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97978 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12d9797b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9797e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97981 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d97984 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d97987 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d9798a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9798d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d97990 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d97993 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d97996 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97999 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12d9799c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9799f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d979a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d979a5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12d979a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d979ab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d979ae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d979b1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d979b4 jne 0x12d97a80 */
  if (!C.zf) goto L_12d97a80;
  /* 12d979ba cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d979be jge 0x12d97a1a */
  if ((C.sf==C.of)) goto L_12d97a1a;
  /* 12d979c0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d979c3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d979c6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d979ca mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d979cd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d979d0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12d979d3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d979d5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d979d8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d979db mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12d979de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d979e0 jne 0x12d979f8 */
  if (!C.zf) goto L_12d979f8;
  /* 12d979e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d979e7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d979ea shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d979ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d979ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d979f1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d979f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d979f6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d979f8:;
  /* 12d979f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d979fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d97a00 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d97a02 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97a05 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97a08 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12d97a0c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d97a0e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97a11 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97a14 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12d97a18 jmp 0x12d97a80 */
  goto L_12d97a80;
L_12d97a1a:;
  /* 12d97a1a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97a1d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97a20 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d97a24 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97a27 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97a2a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12d97a2d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d97a2f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97a32 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97a35 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12d97a38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d97a3a jne 0x12d97a57 */
  if (!C.zf) goto L_12d97a57;
  /* 12d97a3c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d97a3f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97a42 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d97a47 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d97a49 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97a4c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d97a4f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d97a51 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97a54 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d97a57:;
  /* 12d97a57 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d97a5a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97a5d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d97a62 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d97a64 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97a67 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97a6a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12d97a71 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d97a73 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97a76 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97a79 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12d97a80:;
  /* 12d97a80 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97a84 je 0x12d97a9a */
  if (C.zf) goto L_12d97a9a;
  /* 12d97a86 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97a89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d97a8c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d97a8e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97a91 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97a94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d97a97 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12d97a9a:;
  /* 12d97a9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97a9d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97aa0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d97aa3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d97aa6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97aa9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97aac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d97aae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d97ab1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97ab4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97ab7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97aba mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12d97abd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97ac0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d97ac2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97ac5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d97ac7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97aca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97acd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d97acf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d97ad1 jne 0x12d97af3 */
  if (!C.zf) goto L_12d97af3;
  /* 12d97ad3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97ad6 cmp eax, dword ptr [0x12daeec0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12daeec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97adc jne 0x12d97af3 */
  if (!C.zf) goto L_12d97af3;
  /* 12d97ade mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97ae1 cmp ecx, dword ptr [0x12daeeb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12daeeb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97ae7 jne 0x12d97af3 */
  if (!C.zf) goto L_12d97af3;
  /* 12d97ae9 mov dword ptr [0x12daeec0], 0 */
  w32((uint32_t)(0x12daeec0), (0x0u));
L_12d97af3:;
  /* 12d97af3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d97af6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97af9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d97afb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97afe add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12d97b01:;
  /* 12d97b01 pop esi */
  ESI = (pop32());
  /* 12d97b02 mov esp, ebp */
  ESP = (EBP);
  /* 12d97b04 pop ebp */
  EBP = (pop32());
  /* 12d97b05 ret  */
  ESPCHK(0x12d975d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b10 @ 0x12d97b10 (271 bytes, 78 insns) */
void f_12d97b10(void) {
  FTRACE(0x12d97b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d97b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d97b11 mov ebp, esp */
  EBP = (ESP);
  /* 12d97b13 push ecx */
  push32((uint32_t)(ECX));
  /* 12d97b14 mov eax, dword ptr [0x12daeec4] */
  EAX = (r32((uint32_t)(0x12daeec4)));
  /* 12d97b19 cmp eax, dword ptr [0x12daeea8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12daeea8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97b1f jne 0x12d97b6b */
  if (!C.zf) goto L_12d97b6b;
  /* 12d97b21 mov ecx, dword ptr [0x12daeea8] */
  ECX = (r32((uint32_t)(0x12daeea8)));
  /* 12d97b27 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97b2a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d97b2d push ecx */
  push32((uint32_t)(ECX));
  /* 12d97b2e mov edx, dword ptr [0x12daeec8] */
  EDX = (r32((uint32_t)(0x12daeec8)));
  /* 12d97b34 push edx */
  push32((uint32_t)(EDX));
  /* 12d97b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d97b37 mov eax, dword ptr [0x12daeecc] */
  EAX = (r32((uint32_t)(0x12daeecc)));
  /* 12d97b3c push eax */
  push32((uint32_t)(EAX));
  /* 12d97b3d call dword ptr [0x12db033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db033c))), 0x12d97b43u);
  /* 12d97b43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d97b46 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97b4a jne 0x12d97b53 */
  if (!C.zf) goto L_12d97b53;
  /* 12d97b4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d97b4e jmp 0x12d97c1b */
  goto L_12d97c1b;
L_12d97b53:;
  /* 12d97b53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97b56 mov dword ptr [0x12daeec8], ecx */
  w32((uint32_t)(0x12daeec8), (ECX));
  /* 12d97b5c mov edx, dword ptr [0x12daeea8] */
  EDX = (r32((uint32_t)(0x12daeea8)));
  /* 12d97b62 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97b65 mov dword ptr [0x12daeea8], edx */
  w32((uint32_t)(0x12daeea8), (EDX));
L_12d97b6b:;
  /* 12d97b6b mov eax, dword ptr [0x12daeec4] */
  EAX = (r32((uint32_t)(0x12daeec4)));
  /* 12d97b70 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d97b73 mov ecx, dword ptr [0x12daeec8] */
  ECX = (r32((uint32_t)(0x12daeec8)));
  /* 12d97b79 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97b7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d97b7e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12d97b83 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d97b85 mov edx, dword ptr [0x12daeecc] */
  EDX = (r32((uint32_t)(0x12daeecc)));
  /* 12d97b8b push edx */
  push32((uint32_t)(EDX));
  /* 12d97b8c call dword ptr [0x12db0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0338))), 0x12d97b92u);
  /* 12d97b92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97b95 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12d97b98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97b9b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97b9f jne 0x12d97ba5 */
  if (!C.zf) goto L_12d97ba5;
  /* 12d97ba1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d97ba3 jmp 0x12d97c1b */
  goto L_12d97c1b;
L_12d97ba5:;
  /* 12d97ba5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d97ba7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12d97bac push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12d97bb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d97bb3 call dword ptr [0x12db0340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0340))), 0x12d97bb9u);
  /* 12d97bb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97bbc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12d97bbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97bc2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97bc6 jne 0x12d97be2 */
  if (!C.zf) goto L_12d97be2;
  /* 12d97bc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97bcb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d97bce push ecx */
  push32((uint32_t)(ECX));
  /* 12d97bcf push 0 */
  push32((uint32_t)(0x0u));
  /* 12d97bd1 mov edx, dword ptr [0x12daeecc] */
  EDX = (r32((uint32_t)(0x12daeecc)));
  /* 12d97bd7 push edx */
  push32((uint32_t)(EDX));
  /* 12d97bd8 call dword ptr [0x12db0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0318))), 0x12d97bdeu);
  /* 12d97bde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d97be0 jmp 0x12d97c1b */
  goto L_12d97c1b;
L_12d97be2:;
  /* 12d97be2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97be5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d97beb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97bee mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12d97bf5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97bf8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12d97bff mov eax, dword ptr [0x12daeec4] */
  EAX = (r32((uint32_t)(0x12daeec4)));
  /* 12d97c04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97c07 mov dword ptr [0x12daeec4], eax */
  w32((uint32_t)(0x12daeec4), (EAX));
  /* 12d97c0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97c0f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d97c12 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12d97c18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d97c1b:;
  /* 12d97c1b mov esp, ebp */
  ESP = (EBP);
  /* 12d97c1d pop ebp */
  EBP = (pop32());
  /* 12d97c1e ret  */
  ESPCHK(0x12d97b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c20 @ 0x12d97c20 (494 bytes, 149 insns) */
void f_12d97c20(void) {
  FTRACE(0x12d97c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d97c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d97c21 mov ebp, esp */
  EBP = (ESP);
  /* 12d97c23 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97c26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97c29 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d97c2c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d97c2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97c32 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d97c35 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d97c38 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12d97c3f:;
  /* 12d97c3f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97c43 jl 0x12d97c58 */
  if ((C.sf!=C.of)) goto L_12d97c58;
  /* 12d97c45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d97c48 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12d97c4a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d97c4d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d97c50 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97c53 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12d97c56 jmp 0x12d97c3f */
  goto L_12d97c3f;
L_12d97c58:;
  /* 12d97c58 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d97c5b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d97c61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97c64 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12d97c6b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d97c6e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d97c75 jmp 0x12d97c80 */
  goto L_12d97c80;
L_12d97c77:;
  /* 12d97c77 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d97c7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97c7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12d97c80:;
  /* 12d97c80 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97c84 jge 0x12d97ca6 */
  if ((C.sf==C.of)) goto L_12d97ca6;
  /* 12d97c86 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d97c89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d97c8c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12d97c8f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d97c92 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97c95 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97c98 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12d97c9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97c9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97ca1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12d97ca4 jmp 0x12d97c77 */
  goto L_12d97c77;
L_12d97ca6:;
  /* 12d97ca6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d97ca9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12d97cac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97caf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d97cb2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97cb4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d97cb7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d97cb9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12d97cbe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d97cc3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97cc6 push edx */
  push32((uint32_t)(EDX));
  /* 12d97cc7 call dword ptr [0x12db0340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0340))), 0x12d97ccdu);
  /* 12d97ccd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d97ccf jne 0x12d97cd9 */
  if (!C.zf) goto L_12d97cd9;
  /* 12d97cd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d97cd4 jmp 0x12d97e0a */
  goto L_12d97e0a;
L_12d97cd9:;
  /* 12d97cd9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97cdc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97ce1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d97ce4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97ce7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d97cea jmp 0x12d97cf8 */
  goto L_12d97cf8;
L_12d97cec:;
  /* 12d97cec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97cef add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97cf5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d97cf8:;
  /* 12d97cf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97cfb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97cfe ja 0x12d97d5d */
  if ((!C.cf&&!C.zf)) goto L_12d97d5d;
  /* 12d97d00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97d03 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12d97d0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97d0d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12d97d17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97d1a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97d1d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d97d20 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97d23 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12d97d29 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97d2c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97d32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97d35 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d97d38 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97d3b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97d41 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97d44 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d97d47 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97d4a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97d4f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d97d52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d97d55 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12d97d5b jmp 0x12d97cec */
  goto L_12d97cec;
L_12d97d5d:;
  /* 12d97d5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d97d60 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97d66 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d97d69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97d6c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97d6f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d97d72 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12d97d75 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d97d78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d97d7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d97d7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97d81 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d97d84 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12d97d87 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d97d8a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97d8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d97d90 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12d97d93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d97d96 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d97d99 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d97d9c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d97d9f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d97da2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12d97da5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d97da8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97dab mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12d97db3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d97db6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97db9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12d97dc4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97dc7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12d97dcb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97dce mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12d97dd1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d97dd4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97dd7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12d97dda test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d97ddc jne 0x12d97ded */
  if (!C.zf) goto L_12d97ded;
  /* 12d97dde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97de1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d97de4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d97de7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97dea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d97ded:;
  /* 12d97ded mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d97df2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d97df5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d97df7 not edx */
  EDX = (~(EDX));
  /* 12d97df9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97dfc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d97dff and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d97e01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97e04 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d97e07 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12d97e0a:;
  /* 12d97e0a mov esp, ebp */
  ESP = (EBP);
  /* 12d97e0c pop ebp */
  EBP = (pop32());
  /* 12d97e0d ret  */
  ESPCHK(0x12d97c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e10 @ 0x12d97e10 (1515 bytes, 489 insns) */
void f_12d97e10(void) {
  FTRACE(0x12d97e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d97e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d97e11 mov ebp, esp */
  EBP = (ESP);
  /* 12d97e13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97e16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d97e19 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97e1c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12d97e1e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d97e21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97e24 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d97e27 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12d97e2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97e2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d97e30 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97e33 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d97e36 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d97e39 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12d97e3c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d97e3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97e42 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d97e48 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97e4b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12d97e52 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d97e55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d97e58 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97e5b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d97e5e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d97e61 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d97e63 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97e66 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12d97e69 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d97e6c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97e6f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12d97e72 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97e75 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d97e77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d97e7a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d97e7d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97e80 jle 0x12d98136 */
  if ((C.zf||C.sf!=C.of)) goto L_12d98136;
  /* 12d97e86 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97e89 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d97e8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d97e8e jne 0x12d97e9b */
  if (!C.zf) goto L_12d97e9b;
  /* 12d97e90 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d97e93 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97e96 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97e99 jle 0x12d97ea2 */
  if ((C.zf||C.sf!=C.of)) goto L_12d97ea2;
L_12d97e9b:;
  /* 12d97e9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d97e9d jmp 0x12d983f7 */
  goto L_12d983f7;
L_12d97ea2:;
  /* 12d97ea2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97ea5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12d97ea8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97eab mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d97eae cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97eb2 jbe 0x12d97ebb */
  if ((C.cf||C.zf)) goto L_12d97ebb;
  /* 12d97eb4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12d97ebb:;
  /* 12d97ebb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97ebe mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97ec1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d97ec4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97ec7 jne 0x12d97f9d */
  if (!C.zf) goto L_12d97f9d;
  /* 12d97ecd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97ed1 jae 0x12d97f32 */
  if (!C.cf) goto L_12d97f32;
  /* 12d97ed3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d97ed8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d97edb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d97edd not edx */
  EDX = (~(EDX));
  /* 12d97edf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97ee2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97ee5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12d97ee9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d97eeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97eee mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97ef1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12d97ef5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97ef8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97efb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d97efe sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d97f01 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97f04 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97f07 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12d97f0a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97f0d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97f10 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d97f14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d97f16 jne 0x12d97f30 */
  if (!C.zf) goto L_12d97f30;
  /* 12d97f18 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d97f1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d97f20 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d97f22 not edx */
  EDX = (~(EDX));
  /* 12d97f24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97f27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d97f29 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d97f2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97f2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d97f30:;
  /* 12d97f30 jmp 0x12d97f9d */
  goto L_12d97f9d;
L_12d97f32:;
  /* 12d97f32 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d97f35 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97f38 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d97f3d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d97f3f not eax */
  EAX = (~(EAX));
  /* 12d97f41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97f44 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97f47 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12d97f4e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d97f50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d97f53 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97f56 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12d97f5d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97f60 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97f63 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12d97f66 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d97f69 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97f6c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97f6f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12d97f72 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d97f75 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97f78 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d97f7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d97f7e jne 0x12d97f9d */
  if (!C.zf) goto L_12d97f9d;
  /* 12d97f80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d97f83 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97f86 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d97f8b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d97f8d not eax */
  EAX = (~(EAX));
  /* 12d97f8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97f92 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d97f95 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d97f97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d97f9a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d97f9d:;
  /* 12d97f9d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97fa0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d97fa3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97fa6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d97fa9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d97fac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97faf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d97fb2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d97fb5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d97fb8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12d97fbb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d97fbe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97fc1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97fc4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d97fc7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97fcb jle 0x12d98117 */
  if ((C.zf||C.sf!=C.of)) goto L_12d98117;
  /* 12d97fd1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d97fd4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d97fd7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d97fda mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d97fdd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d97fe0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d97fe3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d97fe6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d97fea jbe 0x12d97ff3 */
  if ((C.cf||C.zf)) goto L_12d97ff3;
  /* 12d97fec mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12d97ff3:;
  /* 12d97ff3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d97ff6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d97ff9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12d97ffc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d97fff mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d98002 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d98005 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d98008 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d9800b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9800e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d98011 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12d98014 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d98017 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9801a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12d9801d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d98020 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d98023 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d98026 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d98029 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9802c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9802f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d98032 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98035 jne 0x12d98103 */
  if (!C.zf) goto L_12d98103;
  /* 12d9803b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9803f jae 0x12d9809c */
  if (!C.cf) goto L_12d9809c;
  /* 12d98041 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d98044 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98047 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d9804b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9804e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98051 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d98054 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d98057 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9805a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9805d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12d98060 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d98062 jne 0x12d9807a */
  if (!C.zf) goto L_12d9807a;
  /* 12d98064 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d98069 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9806c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d9806e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98071 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d98073 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d98075 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98078 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d9807a:;
  /* 12d9807a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d9807f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d98082 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d98084 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d98087 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9808a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12d9808e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d98090 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d98093 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d98096 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12d9809a jmp 0x12d98103 */
  goto L_12d98103;
L_12d9809c:;
  /* 12d9809c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9809f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d980a2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d980a6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d980a9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d980ac mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d980af add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d980b2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d980b5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d980b8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12d980bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d980bd jne 0x12d980da */
  if (!C.zf) goto L_12d980da;
  /* 12d980bf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d980c2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d980c5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d980ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d980cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d980cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d980d2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d980d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d980d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12d980da:;
  /* 12d980da mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d980dd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d980e0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d980e5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d980e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d980ea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d980ed mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12d980f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d980f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d980f9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d980fc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12d98103:;
  /* 12d98103 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d98106 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d98109 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d9810b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9810e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98111 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d98114 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12d98117:;
  /* 12d98117 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d9811a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9811d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d98120 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d98122 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d98125 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98128 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9812b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9812e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12d98131 jmp 0x12d983f2 */
  goto L_12d983f2;
L_12d98136:;
  /* 12d98136 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d98139 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9813c jge 0x12d983f2 */
  if ((C.sf==C.of)) goto L_12d983f2;
  /* 12d98142 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d98145 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98148 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9814b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d9814d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d98150 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98153 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d98156 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98159 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12d9815c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9815f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98162 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d98165 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d98168 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9816b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d9816e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d98171 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12d98174 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d98177 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d9817a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9817e jbe 0x12d98187 */
  if ((C.cf||C.zf)) goto L_12d98187;
  /* 12d98180 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12d98187:;
  /* 12d98187 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9818a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9818d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9818f jne 0x12d982d0 */
  if (!C.zf) goto L_12d982d0;
  /* 12d98195 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d98198 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12d9819b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9819e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d981a1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d981a5 jbe 0x12d981ae */
  if ((C.cf||C.zf)) goto L_12d981ae;
  /* 12d981a7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12d981ae:;
  /* 12d981ae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d981b1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d981b4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d981b7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d981ba jne 0x12d98290 */
  if (!C.zf) goto L_12d98290;
  /* 12d981c0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d981c4 jae 0x12d98225 */
  if (!C.cf) goto L_12d98225;
  /* 12d981c6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d981cb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d981ce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d981d0 not edx */
  EDX = (~(EDX));
  /* 12d981d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d981d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d981d8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12d981dc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d981de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d981e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d981e4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12d981e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d981eb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d981ee mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d981f1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d981f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d981f7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d981fa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12d981fd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d98200 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98203 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d98207 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d98209 jne 0x12d98223 */
  if (!C.zf) goto L_12d98223;
  /* 12d9820b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d98210 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d98213 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d98215 not edx */
  EDX = (~(EDX));
  /* 12d98217 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9821a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d9821c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9821e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98221 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d98223:;
  /* 12d98223 jmp 0x12d98290 */
  goto L_12d98290;
L_12d98225:;
  /* 12d98225 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d98228 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9822b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d98230 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d98232 not eax */
  EAX = (~(EAX));
  /* 12d98234 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d98237 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9823a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12d98241 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d98243 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d98246 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d98249 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12d98250 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d98253 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98256 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12d98259 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d9825c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9825f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98262 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12d98265 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d98268 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9826b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d9826f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d98271 jne 0x12d98290 */
  if (!C.zf) goto L_12d98290;
  /* 12d98273 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d98276 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d98279 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d9827e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d98280 not eax */
  EAX = (~(EAX));
  /* 12d98282 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98285 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d98288 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9828a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9828d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d98290:;
  /* 12d98290 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d98293 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d98296 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d98299 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d9829c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d9829f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d982a2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d982a5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d982a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d982ab mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12d982ae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d982b1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d982b4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d982b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d982ba sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12d982bd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d982c0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d982c3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d982c7 jbe 0x12d982d0 */
  if ((C.cf||C.zf)) goto L_12d982d0;
  /* 12d982c9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12d982d0:;
  /* 12d982d0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d982d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d982d6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12d982d9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d982dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d982df mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d982e2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d982e5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d982e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d982eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d982ee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d982f1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d982f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d982f7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12d982fa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d982fd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d98300 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d98303 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12d98306 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d98309 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9830c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d9830f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98312 jne 0x12d983de */
  if (!C.zf) goto L_12d983de;
  /* 12d98318 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9831c jae 0x12d98378 */
  if (!C.cf) goto L_12d98378;
  /* 12d9831e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d98321 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98324 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d98328 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9832b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9832e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12d98331 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d98333 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d98336 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98339 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12d9833c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9833e jne 0x12d98356 */
  if (!C.zf) goto L_12d98356;
  /* 12d98340 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d98345 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98348 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d9834a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9834d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d9834f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d98351 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98354 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d98356:;
  /* 12d98356 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d9835b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d9835e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d98360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d98363 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d98366 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12d9836a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9836c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9836f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d98372 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12d98376 jmp 0x12d983de */
  goto L_12d983de;
L_12d98378:;
  /* 12d98378 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9837b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9837e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d98382 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d98385 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98388 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12d9838b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d9838d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d98390 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98393 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12d98396 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d98398 jne 0x12d983b5 */
  if (!C.zf) goto L_12d983b5;
  /* 12d9839a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d9839d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d983a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d983a5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d983a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d983aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d983ad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d983af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d983b2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d983b5:;
  /* 12d983b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d983b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d983bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d983c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d983c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d983c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d983c8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12d983cf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d983d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d983d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d983d7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12d983de:;
  /* 12d983de mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d983e1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d983e4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d983e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d983e9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d983ec mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d983ef mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12d983f2:;
  /* 12d983f2 mov eax, 1 */
  EAX = (0x1u);
L_12d983f7:;
  /* 12d983f7 mov esp, ebp */
  ESP = (EBP);
  /* 12d983f9 pop ebp */
  EBP = (pop32());
  /* 12d983fa ret  */
  ESPCHK(0x12d97e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008400 @ 0x12d98400 (304 bytes, 79 insns) */
void f_12d98400(void) {
  FTRACE(0x12d98400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d98400 push ebp */
  push32((uint32_t)(EBP));
  /* 12d98401 mov ebp, esp */
  EBP = (ESP);
  /* 12d98403 push ecx */
  push32((uint32_t)(ECX));
  /* 12d98404 cmp dword ptr [0x12daeec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daeec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9840b je 0x12d9852c */
  if (C.zf) goto L_12d9852c;
  /* 12d98411 mov eax, dword ptr [0x12daeeb8] */
  EAX = (r32((uint32_t)(0x12daeeb8)));
  /* 12d98416 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12d98419 mov ecx, dword ptr [0x12daeec0] */
  ECX = (r32((uint32_t)(0x12daeec0)));
  /* 12d9841f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d98422 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98424 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d98427 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12d9842c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d98431 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d98434 push eax */
  push32((uint32_t)(EAX));
  /* 12d98435 call dword ptr [0x12db031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db031c))), 0x12d9843bu);
  /* 12d9843b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d98440 mov ecx, dword ptr [0x12daeeb8] */
  ECX = (r32((uint32_t)(0x12daeeb8)));
  /* 12d98446 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d98448 mov eax, dword ptr [0x12daeec0] */
  EAX = (r32((uint32_t)(0x12daeec0)));
  /* 12d9844d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d98450 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d98452 mov edx, dword ptr [0x12daeec0] */
  EDX = (r32((uint32_t)(0x12daeec0)));
  /* 12d98458 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d9845b mov eax, dword ptr [0x12daeec0] */
  EAX = (r32((uint32_t)(0x12daeec0)));
  /* 12d98460 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d98463 mov edx, dword ptr [0x12daeeb8] */
  EDX = (r32((uint32_t)(0x12daeeb8)));
  /* 12d98469 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12d98474 mov eax, dword ptr [0x12daeec0] */
  EAX = (r32((uint32_t)(0x12daeec0)));
  /* 12d98479 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d9847c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12d9847f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d98482 mov eax, dword ptr [0x12daeec0] */
  EAX = (r32((uint32_t)(0x12daeec0)));
  /* 12d98487 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d9848a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12d9848d mov edx, dword ptr [0x12daeec0] */
  EDX = (r32((uint32_t)(0x12daeec0)));
  /* 12d98493 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d98496 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12d9849a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9849c jne 0x12d984b2 */
  if (!C.zf) goto L_12d984b2;
  /* 12d9849e mov edx, dword ptr [0x12daeec0] */
  EDX = (r32((uint32_t)(0x12daeec0)));
  /* 12d984a4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d984a7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12d984a9 mov ecx, dword ptr [0x12daeec0] */
  ECX = (r32((uint32_t)(0x12daeec0)));
  /* 12d984af mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12d984b2:;
  /* 12d984b2 mov edx, dword ptr [0x12daeec0] */
  EDX = (r32((uint32_t)(0x12daeec0)));
  /* 12d984b8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d984bc jne 0x12d98522 */
  if (!C.zf) goto L_12d98522;
  /* 12d984be cmp dword ptr [0x12daeec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12daeec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d984c5 jle 0x12d98522 */
  if ((C.zf||C.sf!=C.of)) goto L_12d98522;
  /* 12d984c7 mov eax, dword ptr [0x12daeec0] */
  EAX = (r32((uint32_t)(0x12daeec0)));
  /* 12d984cc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d984cf push ecx */
  push32((uint32_t)(ECX));
  /* 12d984d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d984d2 mov edx, dword ptr [0x12daeecc] */
  EDX = (r32((uint32_t)(0x12daeecc)));
  /* 12d984d8 push edx */
  push32((uint32_t)(EDX));
  /* 12d984d9 call dword ptr [0x12db0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0318))), 0x12d984dfu);
  /* 12d984df mov eax, dword ptr [0x12daeec4] */
  EAX = (r32((uint32_t)(0x12daeec4)));
  /* 12d984e4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d984e7 mov ecx, dword ptr [0x12daeec8] */
  ECX = (r32((uint32_t)(0x12daeec8)));
  /* 12d984ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d984ef mov edx, dword ptr [0x12daeec0] */
  EDX = (r32((uint32_t)(0x12daeec0)));
  /* 12d984f5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d984f8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d984fa push ecx */
  push32((uint32_t)(ECX));
  /* 12d984fb mov eax, dword ptr [0x12daeec0] */
  EAX = (r32((uint32_t)(0x12daeec0)));
  /* 12d98500 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98503 push eax */
  push32((uint32_t)(EAX));
  /* 12d98504 mov ecx, dword ptr [0x12daeec0] */
  ECX = (r32((uint32_t)(0x12daeec0)));
  /* 12d9850a push ecx */
  push32((uint32_t)(ECX));
  /* 12d9850b call 0x12d9ab30 */
  push32(0x12d98510u); f_12d9ab30();
  /* 12d98510 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98513 mov edx, dword ptr [0x12daeec4] */
  EDX = (r32((uint32_t)(0x12daeec4)));
  /* 12d98519 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9851c mov dword ptr [0x12daeec4], edx */
  w32((uint32_t)(0x12daeec4), (EDX));
L_12d98522:;
  /* 12d98522 mov dword ptr [0x12daeec0], 0 */
  w32((uint32_t)(0x12daeec0), (0x0u));
L_12d9852c:;
  /* 12d9852c mov esp, ebp */
  ESP = (EBP);
  /* 12d9852e pop ebp */
  EBP = (pop32());
  /* 12d9852f ret  */
  ESPCHK(0x12d98400u, _esp0);
  ESP += 4; return;
}

/* FUN_10008530 @ 0x12d98530 (1565 bytes, 343 insns) */
void f_12d98530(void) {
  FTRACE(0x12d98530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d98530 push ebp */
  push32((uint32_t)(EBP));
  /* 12d98531 mov ebp, esp */
  EBP = (ESP);
  /* 12d98533 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d98539 mov eax, dword ptr [0x12daeec4] */
  EAX = (r32((uint32_t)(0x12daeec4)));
  /* 12d9853e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d98541 push eax */
  push32((uint32_t)(EAX));
  /* 12d98542 mov ecx, dword ptr [0x12daeec8] */
  ECX = (r32((uint32_t)(0x12daeec8)));
  /* 12d98548 push ecx */
  push32((uint32_t)(ECX));
  /* 12d98549 call dword ptr [0x12db0244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0244))), 0x12d9854fu);
  /* 12d9854f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d98551 je 0x12d9855b */
  if (C.zf) goto L_12d9855b;
  /* 12d98553 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d98556 jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d9855b:;
  /* 12d9855b mov edx, dword ptr [0x12daeec8] */
  EDX = (r32((uint32_t)(0x12daeec8)));
  /* 12d98561 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12d98567 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12d98571 jmp 0x12d98582 */
  goto L_12d98582;
L_12d98573:;
  /* 12d98573 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12d98579 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9857c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12d98582:;
  /* 12d98582 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12d98588 cmp ecx, dword ptr [0x12daeec4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12daeec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9858e jge 0x12d98b47 */
  if ((C.sf==C.of)) goto L_12d98b47;
  /* 12d98594 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d9859a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d9859d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12d985a3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12d985a8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12d985ae push ecx */
  push32((uint32_t)(ECX));
  /* 12d985af call dword ptr [0x12db0244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0244))), 0x12d985b5u);
  /* 12d985b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d985b7 je 0x12d985c3 */
  if (C.zf) goto L_12d985c3;
  /* 12d985b9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12d985be jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d985c3:;
  /* 12d985c3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d985c9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d985cc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12d985d2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12d985d8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d985de mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d985e1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d985e7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d985ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d985ed mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12d985f7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12d98601 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d98608 jmp 0x12d98613 */
  goto L_12d98613;
L_12d9860a:;
  /* 12d9860a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9860d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98610 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12d98613:;
  /* 12d98613 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98617 jge 0x12d98b0b */
  if ((C.sf==C.of)) goto L_12d98b0b;
  /* 12d9861d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12d98627 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12d98631 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12d9863b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12d98645 jmp 0x12d98656 */
  goto L_12d98656;
L_12d98647:;
  /* 12d98647 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12d9864d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98650 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12d98656:;
  /* 12d98656 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9865d jge 0x12d98672 */
  if ((C.sf==C.of)) goto L_12d98672;
  /* 12d9865f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12d98665 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12d98670 jmp 0x12d98647 */
  goto L_12d98647;
L_12d98672:;
  /* 12d98672 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98676 jl 0x12d98aad */
  if ((C.sf!=C.of)) goto L_12d98aad;
  /* 12d9867c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d98681 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12d98687 push ecx */
  push32((uint32_t)(ECX));
  /* 12d98688 call dword ptr [0x12db0244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0244))), 0x12d9868eu);
  /* 12d9868e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d98690 je 0x12d9869c */
  if (C.zf) goto L_12d9869c;
  /* 12d98692 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12d98697 jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d9869c:;
  /* 12d9869c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12d986a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d986a5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12d986af jmp 0x12d986c0 */
  goto L_12d986c0;
L_12d986b1:;
  /* 12d986b1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12d986b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d986ba mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12d986c0:;
  /* 12d986c0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d986c7 jge 0x12d98844 */
  if ((C.sf==C.of)) goto L_12d98844;
  /* 12d986cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d986d0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d986d3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12d986d9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d986df add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d986e5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12d986eb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d986f1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d986f5 jne 0x12d98702 */
  if (!C.zf) goto L_12d98702;
  /* 12d986f7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12d986fd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98700 je 0x12d9870c */
  if (C.zf) goto L_12d9870c;
L_12d98702:;
  /* 12d98702 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12d98707 jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d9870c:;
  /* 12d9870c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d98712 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d98714 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12d9871a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12d98720 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12d98726 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12d9872c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9872f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d98731 je 0x12d98769 */
  if (C.zf) goto L_12d98769;
  /* 12d98733 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12d98739 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9873c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12d98742 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9874c jle 0x12d98758 */
  if ((C.zf||C.sf!=C.of)) goto L_12d98758;
  /* 12d9874e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12d98753 jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d98758:;
  /* 12d98758 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12d9875e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98761 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12d98767 jmp 0x12d987ab */
  goto L_12d987ab;
L_12d98769:;
  /* 12d98769 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12d9876f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d98772 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d98775 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12d9877b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98782 jle 0x12d9878e */
  if ((C.zf||C.sf!=C.of)) goto L_12d9878e;
  /* 12d98784 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12d9878e:;
  /* 12d9878e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12d98794 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12d9879b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9879e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12d987a4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12d987ab:;
  /* 12d987ab cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d987b2 jl 0x12d987cd */
  if ((C.sf!=C.of)) goto L_12d987cd;
  /* 12d987b4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12d987ba and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12d987bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d987bf jne 0x12d987cd */
  if (!C.zf) goto L_12d987cd;
  /* 12d987c1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d987cb jle 0x12d987d7 */
  if ((C.zf||C.sf!=C.of)) goto L_12d987d7;
L_12d987cd:;
  /* 12d987cd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12d987d2 jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d987d7:;
  /* 12d987d7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d987dd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d987e3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d987e6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d987ec je 0x12d987f8 */
  if (C.zf) goto L_12d987f8;
  /* 12d987ee mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12d987f3 jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d987f8:;
  /* 12d987f8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d987fe add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98804 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12d9880a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d98810 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98816 jb 0x12d9870c */
  if (C.cf) goto L_12d9870c;
  /* 12d9881c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d98822 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98828 je 0x12d98834 */
  if (C.zf) goto L_12d98834;
  /* 12d9882a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12d9882f jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d98834:;
  /* 12d98834 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d98837 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9883c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9883f jmp 0x12d986b1 */
  goto L_12d986b1;
L_12d98844:;
  /* 12d98844 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d98847 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d98849 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9884f je 0x12d9885b */
  if (C.zf) goto L_12d9885b;
  /* 12d98851 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12d98856 jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d9885b:;
  /* 12d9885b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9885e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12d98864 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12d9886b jmp 0x12d98876 */
  goto L_12d98876;
L_12d9886d:;
  /* 12d9886d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d98870 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98873 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12d98876:;
  /* 12d98876 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9887a jge 0x12d98aad */
  if ((C.sf==C.of)) goto L_12d98aad;
  /* 12d98880 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12d9888a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12d98890 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12d98896:;
  /* 12d98896 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d9889c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d9889f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12d988a5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d988ab cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d988b1 je 0x12d989da */
  if (C.zf) goto L_12d989da;
  /* 12d988b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d988ba mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12d988c0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d988c7 je 0x12d989da */
  if (C.zf) goto L_12d989da;
  /* 12d988cd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d988d3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d988d9 jb 0x12d988ee */
  if (C.cf) goto L_12d988ee;
  /* 12d988db mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12d988e1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d988e6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d988ec jb 0x12d988f8 */
  if (C.cf) goto L_12d988f8;
L_12d988ee:;
  /* 12d988ee mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12d988f3 jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d988f8:;
  /* 12d988f8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d988fe and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12d98904 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 12d9890a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12d98910 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98913 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d98916 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d98919 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9891e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12d98924:;
  /* 12d98924 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d98927 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9892d je 0x12d9894e */
  if (C.zf) goto L_12d9894e;
  /* 12d9892f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d98932 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98938 jne 0x12d9893c */
  if (!C.zf) goto L_12d9893c;
  /* 12d9893a jmp 0x12d9894e */
  goto L_12d9894e;
L_12d9893c:;
  /* 12d9893c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9893f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d98941 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12d98944 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d98947 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98949 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d9894c jmp 0x12d98924 */
  goto L_12d98924;
L_12d9894e:;
  /* 12d9894e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d98951 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98957 jne 0x12d98963 */
  if (!C.zf) goto L_12d98963;
  /* 12d98959 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 12d9895e jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d98963:;
  /* 12d98963 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d98969 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d9896b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d9896e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d98971 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12d98977 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9897e jle 0x12d9898a */
  if ((C.zf||C.sf!=C.of)) goto L_12d9898a;
  /* 12d98980 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12d9898a:;
  /* 12d9898a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12d98990 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98993 je 0x12d9899f */
  if (C.zf) goto L_12d9899f;
  /* 12d98995 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 12d9899a jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d9899f:;
  /* 12d9899f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d989a5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d989a8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d989ae je 0x12d989ba */
  if (C.zf) goto L_12d989ba;
  /* 12d989b0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12d989b5 jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d989ba:;
  /* 12d989ba mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d989c0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12d989c6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12d989cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d989cf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12d989d5 jmp 0x12d98896 */
  goto L_12d98896;
L_12d989da:;
  /* 12d989da cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d989e1 je 0x12d98a51 */
  if (C.zf) goto L_12d98a51;
  /* 12d989e3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d989e7 jge 0x12d98a1b */
  if ((C.sf==C.of)) goto L_12d98a1b;
  /* 12d989e9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d989ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d989f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d989f3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12d989f9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d989fb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12d98a01 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d98a06 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d98a09 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d98a0b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12d98a11 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d98a13 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12d98a19 jmp 0x12d98a51 */
  goto L_12d98a51;
L_12d98a1b:;
  /* 12d98a1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d98a1e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d98a21 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d98a26 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d98a28 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 12d98a2e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d98a30 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12d98a36 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d98a39 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d98a3c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d98a41 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d98a43 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12d98a49 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d98a4b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12d98a51:;
  /* 12d98a51 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d98a57 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d98a5a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98a60 jne 0x12d98a74 */
  if (!C.zf) goto L_12d98a74;
  /* 12d98a62 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d98a65 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12d98a6b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98a72 je 0x12d98a7e */
  if (C.zf) goto L_12d98a7e;
L_12d98a74:;
  /* 12d98a74 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12d98a79 jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d98a7e:;
  /* 12d98a7e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12d98a84 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d98a87 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98a8d je 0x12d98a99 */
  if (C.zf) goto L_12d98a99;
  /* 12d98a8f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12d98a94 jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d98a99:;
  /* 12d98a99 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 12d98a9f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98aa2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12d98aa8 jmp 0x12d9886d */
  goto L_12d9886d;
L_12d98aad:;
  /* 12d98aad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d98ab0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12d98ab6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12d98abc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98ac0 jne 0x12d98ada */
  if (!C.zf) goto L_12d98ada;
  /* 12d98ac2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d98ac5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12d98acb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12d98ad1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98ad8 je 0x12d98ae1 */
  if (C.zf) goto L_12d98ae1;
L_12d98ada:;
  /* 12d98ada mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 12d98adf jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d98ae1:;
  /* 12d98ae1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12d98ae7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98aed mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12d98af3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d98af6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98afb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d98afe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d98b01 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12d98b03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d98b06 jmp 0x12d9860a */
  goto L_12d9860a;
L_12d98b0b:;
  /* 12d98b0b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d98b11 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12d98b17 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98b19 jne 0x12d98b2c */
  if (!C.zf) goto L_12d98b2c;
  /* 12d98b1b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d98b21 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12d98b27 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98b2a je 0x12d98b33 */
  if (C.zf) goto L_12d98b33;
L_12d98b2c:;
  /* 12d98b2c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12d98b31 jmp 0x12d98b49 */
  goto L_12d98b49;
L_12d98b33:;
  /* 12d98b33 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d98b39 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98b3c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12d98b42 jmp 0x12d98573 */
  goto L_12d98573;
L_12d98b47:;
  /* 12d98b47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d98b49:;
  /* 12d98b49 mov esp, ebp */
  ESP = (EBP);
  /* 12d98b4b pop ebp */
  EBP = (pop32());
  /* 12d98b4c ret  */
  ESPCHK(0x12d98530u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b50 @ 0x12d98b50 (250 bytes, 92 insns) */
void f_12d98b50(void) {
  FTRACE(0x12d98b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d98b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d98b51 mov ebp, esp */
  EBP = (ESP);
  /* 12d98b53 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d98b56 push ebx */
  push32((uint32_t)(EBX));
  /* 12d98b57 push esi */
  push32((uint32_t)(ESI));
  /* 12d98b58 push edi */
  push32((uint32_t)(EDI));
  /* 12d98b59 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12d98b5c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d98b5f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12d98b62 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12d98b65:;
  /* 12d98b65 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98b69 jne 0x12d98b89 */
  if (!C.zf) goto L_12d98b89;
  /* 12d98b6b push 0x12da9d74 */
  push32((uint32_t)(0x12da9d74u));
  /* 12d98b70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d98b72 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12d98b74 push 0x12da9d68 */
  push32((uint32_t)(0x12da9d68u));
  /* 12d98b79 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d98b7b call 0x12d91d00 */
  push32(0x12d98b80u); f_12d91d00();
  /* 12d98b80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98b83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98b86 jne 0x12d98b89 */
  if (!C.zf) goto L_12d98b89;
  /* 12d98b88 int3  */
  x86_unimpl("int3 @ 0x12d98b88");
L_12d98b89:;
  /* 12d98b89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d98b8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d98b8d jne 0x12d98b65 */
  if (!C.zf) goto L_12d98b65;
L_12d98b8f:;
  /* 12d98b8f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98b93 jne 0x12d98bb3 */
  if (!C.zf) goto L_12d98bb3;
  /* 12d98b95 push 0x12da9d58 */
  push32((uint32_t)(0x12da9d58u));
  /* 12d98b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d98b9c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12d98b9e push 0x12da9d68 */
  push32((uint32_t)(0x12da9d68u));
  /* 12d98ba3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d98ba5 call 0x12d91d00 */
  push32(0x12d98baau); f_12d91d00();
  /* 12d98baa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98bad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98bb0 jne 0x12d98bb3 */
  if (!C.zf) goto L_12d98bb3;
  /* 12d98bb2 int3  */
  x86_unimpl("int3 @ 0x12d98bb2");
L_12d98bb3:;
  /* 12d98bb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d98bb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d98bb7 jne 0x12d98b8f */
  if (!C.zf) goto L_12d98b8f;
  /* 12d98bb9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98bbc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12d98bc3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98bc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98bc9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d98bcc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98bcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98bd2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d98bd4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98bd7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12d98bde mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d98be1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d98be2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d98be5 push edx */
  push32((uint32_t)(EDX));
  /* 12d98be6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98be9 push eax */
  push32((uint32_t)(EAX));
  /* 12d98bea call 0x12d99bd0 */
  push32(0x12d98befu); f_12d99bd0();
  /* 12d98bef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98bf2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d98bf5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98bf8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d98bfb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d98bfe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98c01 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d98c04 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98c07 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98c0b jl 0x12d98c2f */
  if ((C.sf!=C.of)) goto L_12d98c2f;
  /* 12d98c0d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98c10 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d98c12 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d98c15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d98c17 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d98c1d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12d98c20 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98c23 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d98c25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98c28 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98c2b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d98c2d jmp 0x12d98c40 */
  goto L_12d98c40;
L_12d98c2f:;
  /* 12d98c2f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98c32 push edx */
  push32((uint32_t)(EDX));
  /* 12d98c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d98c35 call 0x12d99950 */
  push32(0x12d98c3au); f_12d99950();
  /* 12d98c3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98c3d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12d98c40:;
  /* 12d98c40 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d98c43 pop edi */
  EDI = (pop32());
  /* 12d98c44 pop esi */
  ESI = (pop32());
  /* 12d98c45 pop ebx */
  EBX = (pop32());
  /* 12d98c46 mov esp, ebp */
  ESP = (EBP);
  /* 12d98c48 pop ebp */
  EBP = (pop32());
  /* 12d98c49 ret  */
  ESPCHK(0x12d98b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c50 @ 0x12d98c50 (183 bytes, 58 insns) */
void f_12d98c50(void) {
  FTRACE(0x12d98c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d98c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d98c51 mov ebp, esp */
  EBP = (ESP);
  /* 12d98c53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d98c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98c59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98c5c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98c61 ja 0x12d98c7a */
  if ((!C.cf&&!C.zf)) goto L_12d98c7a;
  /* 12d98c63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98c66 mov edx, dword ptr [0x12dabd58] */
  EDX = (r32((uint32_t)(0x12dabd58)));
  /* 12d98c6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d98c6e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12d98c72 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12d98c75 jmp 0x12d98d03 */
  goto L_12d98d03;
L_12d98c7a:;
  /* 12d98c7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98c7d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12d98c80 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d98c86 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d98c8c mov edx, dword ptr [0x12dabd58] */
  EDX = (r32((uint32_t)(0x12dabd58)));
  /* 12d98c92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d98c94 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12d98c98 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12d98c9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d98c9f je 0x12d98cc3 */
  if (C.zf) goto L_12d98cc3;
  /* 12d98ca1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98ca4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12d98ca7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d98cad mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12d98cb0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d98cb3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12d98cb6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12d98cba mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12d98cc1 jmp 0x12d98cd4 */
  goto L_12d98cd4;
L_12d98cc3:;
  /* 12d98cc3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d98cc6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12d98cc9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12d98ccd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12d98cd4:;
  /* 12d98cd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d98cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d98cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d98cda lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12d98cdd push ecx */
  push32((uint32_t)(ECX));
  /* 12d98cde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d98ce1 push edx */
  push32((uint32_t)(EDX));
  /* 12d98ce2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12d98ce5 push eax */
  push32((uint32_t)(EAX));
  /* 12d98ce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d98ce8 call 0x12d9ae70 */
  push32(0x12d98cedu); f_12d9ae70();
  /* 12d98ced add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98cf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d98cf2 jne 0x12d98cf8 */
  if (!C.zf) goto L_12d98cf8;
  /* 12d98cf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d98cf6 jmp 0x12d98d03 */
  goto L_12d98d03;
L_12d98cf8:;
  /* 12d98cf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d98cfb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d98d00 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12d98d03:;
  /* 12d98d03 mov esp, ebp */
  ESP = (EBP);
  /* 12d98d05 pop ebp */
  EBP = (pop32());
  /* 12d98d06 ret  */
  ESPCHK(0x12d98c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d10 @ 0x12d98d10 (836 bytes, 238 insns) */
void f_12d98d10(void) {
  FTRACE(0x12d98d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d98d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d98d11 mov ebp, esp */
  EBP = (ESP);
  /* 12d98d13 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d98d16 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d98d18 call 0x12d96640 */
  push32(0x12d98d1du); f_12d96640();
  /* 12d98d1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98d23 push eax */
  push32((uint32_t)(EAX));
  /* 12d98d24 call 0x12d99060 */
  push32(0x12d98d29u); f_12d99060();
  /* 12d98d29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98d2c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d98d2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98d32 cmp ecx, dword ptr [0x12daec04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12daec04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98d38 jne 0x12d98d4b */
  if (!C.zf) goto L_12d98d4b;
  /* 12d98d3a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d98d3c call 0x12d966e0 */
  push32(0x12d98d41u); f_12d966e0();
  /* 12d98d41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98d44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d98d46 jmp 0x12d99050 */
  goto L_12d99050;
L_12d98d4b:;
  /* 12d98d4b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98d4f jne 0x12d98d6c */
  if (!C.zf) goto L_12d98d6c;
  /* 12d98d51 call 0x12d99140 */
  push32(0x12d98d56u); f_12d99140();
  /* 12d98d56 call 0x12d991c0 */
  push32(0x12d98d5bu); f_12d991c0();
  /* 12d98d5b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d98d5d call 0x12d966e0 */
  push32(0x12d98d62u); f_12d966e0();
  /* 12d98d62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98d65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d98d67 jmp 0x12d99050 */
  goto L_12d99050;
L_12d98d6c:;
  /* 12d98d6c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d98d73 jmp 0x12d98d7e */
  goto L_12d98d7e;
L_12d98d75:;
  /* 12d98d75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d98d78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98d7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d98d7e:;
  /* 12d98d7e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98d82 jae 0x12d98ecf */
  if (!C.cf) goto L_12d98ecf;
  /* 12d98d88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d98d8b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d98d8e mov ecx, dword ptr [eax + 0x12dabf78] */
  ECX = (r32((uint32_t)(EAX + 0x12dabf78)));
  /* 12d98d94 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98d97 jne 0x12d98eca */
  if (!C.zf) goto L_12d98eca;
  /* 12d98d9d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d98da4 jmp 0x12d98daf */
  goto L_12d98daf;
L_12d98da6:;
  /* 12d98da6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98da9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98dac mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12d98daf:;
  /* 12d98daf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98db6 jae 0x12d98dc4 */
  if (!C.cf) goto L_12d98dc4;
  /* 12d98db8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98dbb mov byte ptr [eax + 0x12daeda0], 0 */
  w8((uint32_t)(EAX + 0x12daeda0), (0x0u));
  /* 12d98dc2 jmp 0x12d98da6 */
  goto L_12d98da6;
L_12d98dc4:;
  /* 12d98dc4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d98dcb jmp 0x12d98dd6 */
  goto L_12d98dd6;
L_12d98dcd:;
  /* 12d98dcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d98dd0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98dd3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12d98dd6:;
  /* 12d98dd6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98dda jae 0x12d98e57 */
  if (!C.cf) goto L_12d98e57;
  /* 12d98ddc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d98ddf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d98de2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d98de5 lea ecx, [edx + eax*8 + 0x12dabf88] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12dabf88));
  /* 12d98dec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d98def jmp 0x12d98dfa */
  goto L_12d98dfa;
L_12d98df1:;
  /* 12d98df1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d98df4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98df7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d98dfa:;
  /* 12d98dfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d98dfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d98dff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d98e01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d98e03 je 0x12d98e52 */
  if (C.zf) goto L_12d98e52;
  /* 12d98e05 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d98e08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d98e0a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d98e0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d98e0f je 0x12d98e52 */
  if (C.zf) goto L_12d98e52;
  /* 12d98e11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d98e14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d98e16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d98e18 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d98e1b jmp 0x12d98e26 */
  goto L_12d98e26;
L_12d98e1d:;
  /* 12d98e1d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98e20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98e23 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d98e26:;
  /* 12d98e26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d98e29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d98e2b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12d98e2e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98e31 ja 0x12d98e50 */
  if ((!C.cf&&!C.zf)) goto L_12d98e50;
  /* 12d98e33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98e36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d98e39 mov dl, byte ptr [eax + 0x12daeda1] */
  DL = (r8((uint32_t)(EAX + 0x12daeda1)));
  /* 12d98e3f or dl, byte ptr [ecx + 0x12dabf70] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12dabf70))); DL = (_r); fl_logic(_r,8); }
  /* 12d98e45 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98e48 mov byte ptr [eax + 0x12daeda1], dl */
  w8((uint32_t)(EAX + 0x12daeda1), (DL));
  /* 12d98e4e jmp 0x12d98e1d */
  goto L_12d98e1d;
L_12d98e50:;
  /* 12d98e50 jmp 0x12d98df1 */
  goto L_12d98df1;
L_12d98e52:;
  /* 12d98e52 jmp 0x12d98dcd */
  goto L_12d98dcd;
L_12d98e57:;
  /* 12d98e57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98e5a mov dword ptr [0x12daec04], ecx */
  w32((uint32_t)(0x12daec04), (ECX));
  /* 12d98e60 mov dword ptr [0x12daec8c], 1 */
  w32((uint32_t)(0x12daec8c), (0x1u));
  /* 12d98e6a mov edx, dword ptr [0x12daec04] */
  EDX = (r32((uint32_t)(0x12daec04)));
  /* 12d98e70 push edx */
  push32((uint32_t)(EDX));
  /* 12d98e71 call 0x12d990c0 */
  push32(0x12d98e76u); f_12d990c0();
  /* 12d98e76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98e79 mov dword ptr [0x12daeea4], eax */
  w32((uint32_t)(0x12daeea4), (EAX));
  /* 12d98e7e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d98e85 jmp 0x12d98e90 */
  goto L_12d98e90;
L_12d98e87:;
  /* 12d98e87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d98e8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98e8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d98e90:;
  /* 12d98e90 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98e94 jae 0x12d98eb4 */
  if (!C.cf) goto L_12d98eb4;
  /* 12d98e96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d98e99 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d98e9c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d98e9f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d98ea2 mov cx, word ptr [ecx + eax*2 + 0x12dabf7c] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12dabf7c)));
  /* 12d98eaa mov word ptr [edx*2 + 0x12daec80], cx */
  w16((uint32_t)(EDX*2 + 0x12daec80), (CX));
  /* 12d98eb2 jmp 0x12d98e87 */
  goto L_12d98e87;
L_12d98eb4:;
  /* 12d98eb4 call 0x12d991c0 */
  push32(0x12d98eb9u); f_12d991c0();
  /* 12d98eb9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d98ebb call 0x12d966e0 */
  push32(0x12d98ec0u); f_12d966e0();
  /* 12d98ec0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98ec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d98ec5 jmp 0x12d99050 */
  goto L_12d99050;
L_12d98eca:;
  /* 12d98eca jmp 0x12d98d75 */
  goto L_12d98d75;
L_12d98ecf:;
  /* 12d98ecf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12d98ed2 push edx */
  push32((uint32_t)(EDX));
  /* 12d98ed3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98ed6 push eax */
  push32((uint32_t)(EAX));
  /* 12d98ed7 call dword ptr [0x12db0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0344))), 0x12d98eddu);
  /* 12d98edd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98ee0 jne 0x12d99022 */
  if (!C.zf) goto L_12d99022;
  /* 12d98ee6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d98eed jmp 0x12d98ef8 */
  goto L_12d98ef8;
L_12d98eef:;
  /* 12d98eef mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98ef2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98ef5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12d98ef8:;
  /* 12d98ef8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98eff jae 0x12d98f0d */
  if (!C.cf) goto L_12d98f0d;
  /* 12d98f01 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98f04 mov byte ptr [edx + 0x12daeda0], 0 */
  w8((uint32_t)(EDX + 0x12daeda0), (0x0u));
  /* 12d98f0b jmp 0x12d98eef */
  goto L_12d98eef;
L_12d98f0d:;
  /* 12d98f0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d98f10 mov dword ptr [0x12daec04], eax */
  w32((uint32_t)(0x12daec04), (EAX));
  /* 12d98f15 mov dword ptr [0x12daeea4], 0 */
  w32((uint32_t)(0x12daeea4), (0x0u));
  /* 12d98f1f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98f23 jbe 0x12d98fde */
  if ((C.cf||C.zf)) goto L_12d98fde;
  /* 12d98f29 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12d98f2c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12d98f2f jmp 0x12d98f3a */
  goto L_12d98f3a;
L_12d98f31:;
  /* 12d98f31 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d98f34 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98f37 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12d98f3a:;
  /* 12d98f3a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d98f3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d98f3f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d98f41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d98f43 je 0x12d98f8c */
  if (C.zf) goto L_12d98f8c;
  /* 12d98f45 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d98f48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d98f4a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d98f4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d98f4f je 0x12d98f8c */
  if (C.zf) goto L_12d98f8c;
  /* 12d98f51 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d98f54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d98f56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d98f58 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d98f5b jmp 0x12d98f66 */
  goto L_12d98f66;
L_12d98f5d:;
  /* 12d98f5d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98f60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98f63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d98f66:;
  /* 12d98f66 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d98f69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d98f6b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12d98f6e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98f71 ja 0x12d98f8a */
  if ((!C.cf&&!C.zf)) goto L_12d98f8a;
  /* 12d98f73 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98f76 mov cl, byte ptr [eax + 0x12daeda1] */
  CL = (r8((uint32_t)(EAX + 0x12daeda1)));
  /* 12d98f7c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12d98f7f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98f82 mov byte ptr [edx + 0x12daeda1], cl */
  w8((uint32_t)(EDX + 0x12daeda1), (CL));
  /* 12d98f88 jmp 0x12d98f5d */
  goto L_12d98f5d;
L_12d98f8a:;
  /* 12d98f8a jmp 0x12d98f31 */
  goto L_12d98f31;
L_12d98f8c:;
  /* 12d98f8c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12d98f93 jmp 0x12d98f9e */
  goto L_12d98f9e;
L_12d98f95:;
  /* 12d98f95 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98f98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98f9b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d98f9e:;
  /* 12d98f9e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98fa5 jae 0x12d98fbe */
  if (!C.cf) goto L_12d98fbe;
  /* 12d98fa7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98faa mov dl, byte ptr [ecx + 0x12daeda1] */
  DL = (r8((uint32_t)(ECX + 0x12daeda1)));
  /* 12d98fb0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12d98fb3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d98fb6 mov byte ptr [eax + 0x12daeda1], dl */
  w8((uint32_t)(EAX + 0x12daeda1), (DL));
  /* 12d98fbc jmp 0x12d98f95 */
  goto L_12d98f95;
L_12d98fbe:;
  /* 12d98fbe mov ecx, dword ptr [0x12daec04] */
  ECX = (r32((uint32_t)(0x12daec04)));
  /* 12d98fc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d98fc5 call 0x12d990c0 */
  push32(0x12d98fcau); f_12d990c0();
  /* 12d98fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98fcd mov dword ptr [0x12daeea4], eax */
  w32((uint32_t)(0x12daeea4), (EAX));
  /* 12d98fd2 mov dword ptr [0x12daec8c], 1 */
  w32((uint32_t)(0x12daec8c), (0x1u));
  /* 12d98fdc jmp 0x12d98fe8 */
  goto L_12d98fe8;
L_12d98fde:;
  /* 12d98fde mov dword ptr [0x12daec8c], 0 */
  w32((uint32_t)(0x12daec8c), (0x0u));
L_12d98fe8:;
  /* 12d98fe8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d98fef jmp 0x12d98ffa */
  goto L_12d98ffa;
L_12d98ff1:;
  /* 12d98ff1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d98ff4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d98ff7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d98ffa:;
  /* 12d98ffa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d98ffe jae 0x12d9900f */
  if (!C.cf) goto L_12d9900f;
  /* 12d99000 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d99003 mov word ptr [eax*2 + 0x12daec80], 0 */
  w16((uint32_t)(EAX*2 + 0x12daec80), (0x0u));
  /* 12d9900d jmp 0x12d98ff1 */
  goto L_12d98ff1;
L_12d9900f:;
  /* 12d9900f call 0x12d991c0 */
  push32(0x12d99014u); f_12d991c0();
  /* 12d99014 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d99016 call 0x12d966e0 */
  push32(0x12d9901bu); f_12d966e0();
  /* 12d9901b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9901e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d99020 jmp 0x12d99050 */
  goto L_12d99050;
L_12d99022:;
  /* 12d99022 cmp dword ptr [0x12dad710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99029 je 0x12d99043 */
  if (C.zf) goto L_12d99043;
  /* 12d9902b call 0x12d99140 */
  push32(0x12d99030u); f_12d99140();
  /* 12d99030 call 0x12d991c0 */
  push32(0x12d99035u); f_12d991c0();
  /* 12d99035 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d99037 call 0x12d966e0 */
  push32(0x12d9903cu); f_12d966e0();
  /* 12d9903c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9903f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d99041 jmp 0x12d99050 */
  goto L_12d99050;
L_12d99043:;
  /* 12d99043 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d99045 call 0x12d966e0 */
  push32(0x12d9904au); f_12d966e0();
  /* 12d9904a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9904d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d99050:;
  /* 12d99050 mov esp, ebp */
  ESP = (EBP);
  /* 12d99052 pop ebp */
  EBP = (pop32());
  /* 12d99053 ret  */
  ESPCHK(0x12d98d10u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12d99060 (89 bytes, 21 insns) */
void f_12d99060(void) {
  FTRACE(0x12d99060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d99060 push ebp */
  push32((uint32_t)(EBP));
  /* 12d99061 mov ebp, esp */
  EBP = (ESP);
  /* 12d99063 mov dword ptr [0x12dad710], 0 */
  w32((uint32_t)(0x12dad710), (0x0u));
  /* 12d9906d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99071 jne 0x12d99085 */
  if (!C.zf) goto L_12d99085;
  /* 12d99073 mov dword ptr [0x12dad710], 1 */
  w32((uint32_t)(0x12dad710), (0x1u));
  /* 12d9907d call dword ptr [0x12db0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0348))), 0x12d99083u);
  /* 12d99083 jmp 0x12d990b7 */
  goto L_12d990b7;
L_12d99085:;
  /* 12d99085 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99089 jne 0x12d9909d */
  if (!C.zf) goto L_12d9909d;
  /* 12d9908b mov dword ptr [0x12dad710], 1 */
  w32((uint32_t)(0x12dad710), (0x1u));
  /* 12d99095 call dword ptr [0x12db032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db032c))), 0x12d9909bu);
  /* 12d9909b jmp 0x12d990b7 */
  goto L_12d990b7;
L_12d9909d:;
  /* 12d9909d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d990a1 jne 0x12d990b4 */
  if (!C.zf) goto L_12d990b4;
  /* 12d990a3 mov dword ptr [0x12dad710], 1 */
  w32((uint32_t)(0x12dad710), (0x1u));
  /* 12d990ad mov eax, dword ptr [0x12dad730] */
  EAX = (r32((uint32_t)(0x12dad730)));
  /* 12d990b2 jmp 0x12d990b7 */
  goto L_12d990b7;
L_12d990b4:;
  /* 12d990b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12d990b7:;
  /* 12d990b7 pop ebp */
  EBP = (pop32());
  /* 12d990b8 ret  */
  ESPCHK(0x12d99060u, _esp0);
  ESP += 4; return;
}

/* FUN_100090c0 @ 0x12d990c0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12d990c0(void) {
  FTRACE(0x12d990c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d990c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d990c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d990c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d990c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d990c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d990ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d990cd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d990d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d990d6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d990da ja 0x12d9910a */
  if ((!C.cf&&!C.zf)) goto L_12d9910a;
  /* 12d990dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d990df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d990e1 mov dl, byte ptr [eax + 0x12d99124] */
  DL = (r8((uint32_t)(EAX + 0x12d99124)));
  /* 12d990e7 jmp dword ptr [edx*4 + 0x12d99110] */
  switch (EDX) {
    case 0: goto L_12d990ee;
    case 1: goto L_12d990f5;
    case 2: goto L_12d990fc;
    case 3: goto L_12d99103;
    case 4: goto L_12d9910a;
    default: x86_unimpl("switch@0x12d990e7 out of table"); return;
  }
L_12d990ee:;
  /* 12d990ee mov eax, 0x411 */
  EAX = (0x411u);
  /* 12d990f3 jmp 0x12d9910c */
  goto L_12d9910c;
L_12d990f5:;
  /* 12d990f5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12d990fa jmp 0x12d9910c */
  goto L_12d9910c;
L_12d990fc:;
  /* 12d990fc mov eax, 0x412 */
  EAX = (0x412u);
  /* 12d99101 jmp 0x12d9910c */
  goto L_12d9910c;
L_12d99103:;
  /* 12d99103 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12d99108 jmp 0x12d9910c */
  goto L_12d9910c;
L_12d9910a:;
  /* 12d9910a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d9910c:;
  /* 12d9910c mov esp, ebp */
  ESP = (EBP);
  /* 12d9910e pop ebp */
  EBP = (pop32());
  /* 12d9910f ret  */
  ESPCHK(0x12d990c0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12d99140 (116 bytes, 29 insns) */
void f_12d99140(void) {
  FTRACE(0x12d99140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d99140 push ebp */
  push32((uint32_t)(EBP));
  /* 12d99141 mov ebp, esp */
  EBP = (ESP);
  /* 12d99143 push ecx */
  push32((uint32_t)(ECX));
  /* 12d99144 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d9914b jmp 0x12d99156 */
  goto L_12d99156;
L_12d9914d:;
  /* 12d9914d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99150 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99153 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d99156:;
  /* 12d99156 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9915d jge 0x12d9916b */
  if ((C.sf==C.of)) goto L_12d9916b;
  /* 12d9915f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99162 mov byte ptr [ecx + 0x12daeda0], 0 */
  w8((uint32_t)(ECX + 0x12daeda0), (0x0u));
  /* 12d99169 jmp 0x12d9914d */
  goto L_12d9914d;
L_12d9916b:;
  /* 12d9916b mov dword ptr [0x12daec04], 0 */
  w32((uint32_t)(0x12daec04), (0x0u));
  /* 12d99175 mov dword ptr [0x12daec8c], 0 */
  w32((uint32_t)(0x12daec8c), (0x0u));
  /* 12d9917f mov dword ptr [0x12daeea4], 0 */
  w32((uint32_t)(0x12daeea4), (0x0u));
  /* 12d99189 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d99190 jmp 0x12d9919b */
  goto L_12d9919b;
L_12d99192:;
  /* 12d99192 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99195 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99198 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d9919b:;
  /* 12d9919b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9919f jge 0x12d991b0 */
  if ((C.sf==C.of)) goto L_12d991b0;
  /* 12d991a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d991a4 mov word ptr [eax*2 + 0x12daec80], 0 */
  w16((uint32_t)(EAX*2 + 0x12daec80), (0x0u));
  /* 12d991ae jmp 0x12d99192 */
  goto L_12d99192;
L_12d991b0:;
  /* 12d991b0 mov esp, ebp */
  ESP = (EBP);
  /* 12d991b2 pop ebp */
  EBP = (pop32());
  /* 12d991b3 ret  */
  ESPCHK(0x12d99140u, _esp0);
  ESP += 4; return;
}

/* FUN_100091c0 @ 0x12d991c0 (770 bytes, 175 insns) */
void f_12d991c0(void) {
  FTRACE(0x12d991c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d991c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d991c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d991c3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d991c9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12d991cf push eax */
  push32((uint32_t)(EAX));
  /* 12d991d0 mov ecx, dword ptr [0x12daec04] */
  ECX = (r32((uint32_t)(0x12daec04)));
  /* 12d991d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d991d7 call dword ptr [0x12db0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0344))), 0x12d991ddu);
  /* 12d991dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d991e0 jne 0x12d993f9 */
  if (!C.zf) goto L_12d993f9;
  /* 12d991e6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12d991f0 jmp 0x12d99201 */
  goto L_12d99201;
L_12d991f2:;
  /* 12d991f2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d991f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d991fb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12d99201:;
  /* 12d99201 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9920b jae 0x12d99222 */
  if (!C.cf) goto L_12d99222;
  /* 12d9920d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d99213 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12d99219 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12d99220 jmp 0x12d991f2 */
  goto L_12d991f2;
L_12d99222:;
  /* 12d99222 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12d99229 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12d9922f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d99232 jmp 0x12d9923d */
  goto L_12d9923d;
L_12d99234:;
  /* 12d99234 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99237 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9923a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d9923d:;
  /* 12d9923d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99240 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d99242 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d99244 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d99246 je 0x12d99288 */
  if (C.zf) goto L_12d99288;
  /* 12d99248 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9924b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9924d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d9924f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12d99255 jmp 0x12d99266 */
  goto L_12d99266;
L_12d99257:;
  /* 12d99257 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d9925d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99260 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12d99266:;
  /* 12d99266 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99269 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9926b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12d9926e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99274 ja 0x12d99286 */
  if ((!C.cf&&!C.zf)) goto L_12d99286;
  /* 12d99276 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d9927c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12d99284 jmp 0x12d99257 */
  goto L_12d99257;
L_12d99286:;
  /* 12d99286 jmp 0x12d99234 */
  goto L_12d99234;
L_12d99288:;
  /* 12d99288 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9928a mov eax, dword ptr [0x12daeea4] */
  EAX = (r32((uint32_t)(0x12daeea4)));
  /* 12d9928f push eax */
  push32((uint32_t)(EAX));
  /* 12d99290 mov ecx, dword ptr [0x12daec04] */
  ECX = (r32((uint32_t)(0x12daec04)));
  /* 12d99296 push ecx */
  push32((uint32_t)(ECX));
  /* 12d99297 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12d9929d push edx */
  push32((uint32_t)(EDX));
  /* 12d9929e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d992a3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12d992a9 push eax */
  push32((uint32_t)(EAX));
  /* 12d992aa push 1 */
  push32((uint32_t)(0x1u));
  /* 12d992ac call 0x12d9ae70 */
  push32(0x12d992b1u); f_12d9ae70();
  /* 12d992b1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d992b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d992b6 mov ecx, dword ptr [0x12daec04] */
  ECX = (r32((uint32_t)(0x12daec04)));
  /* 12d992bc push ecx */
  push32((uint32_t)(ECX));
  /* 12d992bd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d992c2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12d992c8 push edx */
  push32((uint32_t)(EDX));
  /* 12d992c9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d992ce lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12d992d4 push eax */
  push32((uint32_t)(EAX));
  /* 12d992d5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d992da mov ecx, dword ptr [0x12daeea4] */
  ECX = (r32((uint32_t)(0x12daeea4)));
  /* 12d992e0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d992e1 call 0x12d9b030 */
  push32(0x12d992e6u); f_12d9b030();
  /* 12d992e6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d992e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d992eb mov edx, dword ptr [0x12daec04] */
  EDX = (r32((uint32_t)(0x12daec04)));
  /* 12d992f1 push edx */
  push32((uint32_t)(EDX));
  /* 12d992f2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d992f7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12d992fd push eax */
  push32((uint32_t)(EAX));
  /* 12d992fe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d99303 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12d99309 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9930a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12d9930f mov edx, dword ptr [0x12daeea4] */
  EDX = (r32((uint32_t)(0x12daeea4)));
  /* 12d99315 push edx */
  push32((uint32_t)(EDX));
  /* 12d99316 call 0x12d9b030 */
  push32(0x12d9931bu); f_12d9b030();
  /* 12d9931b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9931e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12d99328 jmp 0x12d99339 */
  goto L_12d99339;
L_12d9932a:;
  /* 12d9932a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d99330 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99333 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12d99339:;
  /* 12d99339 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99343 jae 0x12d993f4 */
  if (!C.cf) goto L_12d993f4;
  /* 12d99349 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d9934f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d99351 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12d99359 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9935c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9935e je 0x12d99396 */
  if (C.zf) goto L_12d99396;
  /* 12d99360 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d99366 mov cl, byte ptr [eax + 0x12daeda1] */
  CL = (r8((uint32_t)(EAX + 0x12daeda1)));
  /* 12d9936c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12d9936f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d99375 mov byte ptr [edx + 0x12daeda1], cl */
  w8((uint32_t)(EDX + 0x12daeda1), (CL));
  /* 12d9937b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d99381 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d99387 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12d9938e mov byte ptr [eax + 0x12daeca0], dl */
  w8((uint32_t)(EAX + 0x12daeca0), (DL));
  /* 12d99394 jmp 0x12d993ef */
  goto L_12d993ef;
L_12d99396:;
  /* 12d99396 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d9939c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9939e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12d993a6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12d993a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d993ab je 0x12d993e2 */
  if (C.zf) goto L_12d993e2;
  /* 12d993ad mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d993b3 mov al, byte ptr [edx + 0x12daeda1] */
  AL = (r8((uint32_t)(EDX + 0x12daeda1)));
  /* 12d993b9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12d993bb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d993c1 mov byte ptr [ecx + 0x12daeda1], al */
  w8((uint32_t)(ECX + 0x12daeda1), (AL));
  /* 12d993c7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d993cd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d993d3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12d993da mov byte ptr [edx + 0x12daeca0], cl */
  w8((uint32_t)(EDX + 0x12daeca0), (CL));
  /* 12d993e0 jmp 0x12d993ef */
  goto L_12d993ef;
L_12d993e2:;
  /* 12d993e2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d993e8 mov byte ptr [edx + 0x12daeca0], 0 */
  w8((uint32_t)(EDX + 0x12daeca0), (0x0u));
L_12d993ef:;
  /* 12d993ef jmp 0x12d9932a */
  goto L_12d9932a;
L_12d993f4:;
  /* 12d993f4 jmp 0x12d994be */
  goto L_12d994be;
L_12d993f9:;
  /* 12d993f9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12d99403 jmp 0x12d99414 */
  goto L_12d99414;
L_12d99405:;
  /* 12d99405 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d9940b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9940e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12d99414:;
  /* 12d99414 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9941e jae 0x12d994be */
  if (!C.cf) goto L_12d994be;
  /* 12d99424 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9942b jb 0x12d99468 */
  if (C.cf) goto L_12d99468;
  /* 12d9942d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99434 ja 0x12d99468 */
  if ((!C.cf&&!C.zf)) goto L_12d99468;
  /* 12d99436 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d9943c mov dl, byte ptr [ecx + 0x12daeda1] */
  DL = (r8((uint32_t)(ECX + 0x12daeda1)));
  /* 12d99442 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12d99445 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d9944b mov byte ptr [eax + 0x12daeda1], dl */
  w8((uint32_t)(EAX + 0x12daeda1), (DL));
  /* 12d99451 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d99457 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9945a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d99460 mov byte ptr [edx + 0x12daeca0], cl */
  w8((uint32_t)(EDX + 0x12daeca0), (CL));
  /* 12d99466 jmp 0x12d994b9 */
  goto L_12d994b9;
L_12d99468:;
  /* 12d99468 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9946f jb 0x12d994ac */
  if (C.cf) goto L_12d994ac;
  /* 12d99471 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99478 ja 0x12d994ac */
  if ((!C.cf&&!C.zf)) goto L_12d994ac;
  /* 12d9947a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d99480 mov cl, byte ptr [eax + 0x12daeda1] */
  CL = (r8((uint32_t)(EAX + 0x12daeda1)));
  /* 12d99486 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12d99489 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d9948f mov byte ptr [edx + 0x12daeda1], cl */
  w8((uint32_t)(EDX + 0x12daeda1), (CL));
  /* 12d99495 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d9949b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9949e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d994a4 mov byte ptr [ecx + 0x12daeca0], al */
  w8((uint32_t)(ECX + 0x12daeca0), (AL));
  /* 12d994aa jmp 0x12d994b9 */
  goto L_12d994b9;
L_12d994ac:;
  /* 12d994ac mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d994b2 mov byte ptr [edx + 0x12daeca0], 0 */
  w8((uint32_t)(EDX + 0x12daeca0), (0x0u));
L_12d994b9:;
  /* 12d994b9 jmp 0x12d99405 */
  goto L_12d99405;
L_12d994be:;
  /* 12d994be mov esp, ebp */
  ESP = (EBP);
  /* 12d994c0 pop ebp */
  EBP = (pop32());
  /* 12d994c1 ret  */
  ESPCHK(0x12d991c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094d0 @ 0x12d994d0 (23 bytes, 9 insns) */
void f_12d994d0(void) {
  FTRACE(0x12d994d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d994d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d994d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d994d3 cmp dword ptr [0x12daec8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daec8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d994da je 0x12d994e3 */
  if (C.zf) goto L_12d994e3;
  /* 12d994dc mov eax, dword ptr [0x12daec04] */
  EAX = (r32((uint32_t)(0x12daec04)));
  /* 12d994e1 jmp 0x12d994e5 */
  goto L_12d994e5;
L_12d994e3:;
  /* 12d994e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d994e5:;
  /* 12d994e5 pop ebp */
  EBP = (pop32());
  /* 12d994e6 ret  */
  ESPCHK(0x12d994d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094f0 @ 0x12d994f0 (34 bytes, 10 insns) */
void f_12d994f0(void) {
  FTRACE(0x12d994f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d994f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d994f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d994f3 cmp dword ptr [0x12daf050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daf050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d994fa jne 0x12d99510 */
  if (!C.zf) goto L_12d99510;
  /* 12d994fc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12d994fe call 0x12d98d10 */
  push32(0x12d99503u); f_12d98d10();
  /* 12d99503 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99506 mov dword ptr [0x12daf050], 1 */
  w32((uint32_t)(0x12daf050), (0x1u));
L_12d99510:;
  /* 12d99510 pop ebp */
  EBP = (pop32());
  /* 12d99511 ret  */
  ESPCHK(0x12d994f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009520 @ 0x12d99520 (664 bytes, 263 insns) [15 switch table(s)] */
void f_12d99520(void) {
  FTRACE(0x12d99520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d99520 push ebp */
  push32((uint32_t)(EBP));
  /* 12d99521 mov ebp, esp */
  EBP = (ESP);
  /* 12d99523 push edi */
  push32((uint32_t)(EDI));
  /* 12d99524 push esi */
  push32((uint32_t)(ESI));
  /* 12d99525 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d99528 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9952b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9952e mov eax, ecx */
  EAX = (ECX);
  /* 12d99530 mov edx, ecx */
  EDX = (ECX);
  /* 12d99532 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99534 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99536 jbe 0x12d99540 */
  if ((C.cf||C.zf)) goto L_12d99540;
  /* 12d99538 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9953a jb 0x12d996b8 */
  if (C.cf) goto L_12d996b8;
L_12d99540:;
  /* 12d99540 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d99546 jne 0x12d9955c */
  if (!C.zf) goto L_12d9955c;
  /* 12d99548 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d9954b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9954e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99551 jb 0x12d9957c */
  if (C.cf) goto L_12d9957c;
  /* 12d99553 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d99555 jmp dword ptr [edx*4 + 0x12d99668] */
  switch (EDX) {
    case 0: goto L_12d99678;
    case 1: goto L_12d99680;
    case 2: goto L_12d9968c;
    case 3: goto L_12d996a0;
    default: x86_unimpl("switch@0x12d99555 out of table"); return;
  }
L_12d9955c:;
  /* 12d9955c mov eax, edi */
  EAX = (EDI);
  /* 12d9955e mov edx, 3 */
  EDX = (0x3u);
  /* 12d99563 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d99566 jb 0x12d99574 */
  if (C.cf) goto L_12d99574;
  /* 12d99568 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9956b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9956d jmp dword ptr [eax*4 + 0x12d99580] */
  switch (EAX) {
    case 1: goto L_12d99590;
    case 2: goto L_12d995bc;
    case 3: goto L_12d995e0;
    default: x86_unimpl("switch@0x12d9956d out of table"); return;
  }
L_12d99574:;
  /* 12d99574 jmp dword ptr [ecx*4 + 0x12d99678] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12d99678)))); return;
  /* 12d9957b nop  */
  /* nop */
L_12d9957c:;
  /* 12d9957c jmp dword ptr [ecx*4 + 0x12d995fc] */
  switch (ECX) {
    case 0: goto L_12d9965f;
    case 1: goto L_12d9964c;
    case 2: goto L_12d99644;
    case 3: goto L_12d9963c;
    case 4: goto L_12d99634;
    case 5: goto L_12d9962c;
    case 6: goto L_12d99624;
    case 7: goto L_12d9961c;
    default: x86_unimpl("switch@0x12d9957c out of table"); return;
  }
  /* 12d99583 nop  */
  /* nop */
L_12d99590:;
  /* 12d99590 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d99592 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d99594 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d99596 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d99599 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d9959c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d9959f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d995a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d995a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d995a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d995ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d995ae jb 0x12d9957c */
  if (C.cf) goto L_12d9957c;
  /* 12d995b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d995b2 jmp dword ptr [edx*4 + 0x12d99668] */
  switch (EDX) {
    case 0: goto L_12d99678;
    case 1: goto L_12d99680;
    case 2: goto L_12d9968c;
    case 3: goto L_12d996a0;
    default: x86_unimpl("switch@0x12d995b2 out of table"); return;
  }
  /* 12d995b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d995bc:;
  /* 12d995bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d995be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d995c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d995c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d995c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d995c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d995cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d995ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d995d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d995d4 jb 0x12d9957c */
  if (C.cf) goto L_12d9957c;
  /* 12d995d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d995d8 jmp dword ptr [edx*4 + 0x12d99668] */
  switch (EDX) {
    case 0: goto L_12d99678;
    case 1: goto L_12d99680;
    case 2: goto L_12d9968c;
    case 3: goto L_12d996a0;
    default: x86_unimpl("switch@0x12d995d8 out of table"); return;
  }
  /* 12d995df nop  */
  /* nop */
L_12d995e0:;
  /* 12d995e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d995e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d995e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d995e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d995e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d995ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d995eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d995ee jb 0x12d9957c */
  if (C.cf) goto L_12d9957c;
  /* 12d995f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d995f2 jmp dword ptr [edx*4 + 0x12d99668] */
  switch (EDX) {
    case 0: goto L_12d99678;
    case 1: goto L_12d99680;
    case 2: goto L_12d9968c;
    case 3: goto L_12d996a0;
    default: x86_unimpl("switch@0x12d995f2 out of table"); return;
  }
  /* 12d995f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d9961c:;
  /* 12d9961c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12d99620 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12d99624:;
  /* 12d99624 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12d99628 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12d9962c:;
  /* 12d9962c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12d99630 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12d99634:;
  /* 12d99634 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12d99638 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12d9963c:;
  /* 12d9963c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12d99640 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12d99644:;
  /* 12d99644 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12d99648 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12d9964c:;
  /* 12d9964c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12d99650 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12d99654 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12d9965b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9965d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12d9965f:;
  /* 12d9965f jmp dword ptr [edx*4 + 0x12d99668] */
  switch (EDX) {
    case 0: goto L_12d99678;
    case 1: goto L_12d99680;
    case 2: goto L_12d9968c;
    case 3: goto L_12d996a0;
    default: x86_unimpl("switch@0x12d9965f out of table"); return;
  }
  /* 12d99666 mov edi, edi */
  EDI = (EDI);
L_12d99678:;
  /* 12d99678 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9967b pop esi */
  ESI = (pop32());
  /* 12d9967c pop edi */
  EDI = (pop32());
  /* 12d9967d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d9967e ret  */
  ESPCHK(0x12d99520u, _esp0);
  ESP += 4; return;
  /* 12d9967f nop  */
  /* nop */
L_12d99680:;
  /* 12d99680 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d99682 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d99684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d99687 pop esi */
  ESI = (pop32());
  /* 12d99688 pop edi */
  EDI = (pop32());
  /* 12d99689 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d9968a ret  */
  ESPCHK(0x12d99520u, _esp0);
  ESP += 4; return;
  /* 12d9968b nop  */
  /* nop */
L_12d9968c:;
  /* 12d9968c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d9968e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d99690 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d99693 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d99696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d99699 pop esi */
  ESI = (pop32());
  /* 12d9969a pop edi */
  EDI = (pop32());
  /* 12d9969b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d9969c ret  */
  ESPCHK(0x12d99520u, _esp0);
  ESP += 4; return;
  /* 12d9969d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d996a0:;
  /* 12d996a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d996a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d996a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d996a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d996aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d996ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d996b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d996b3 pop esi */
  ESI = (pop32());
  /* 12d996b4 pop edi */
  EDI = (pop32());
  /* 12d996b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d996b6 ret  */
  ESPCHK(0x12d99520u, _esp0);
  ESP += 4; return;
  /* 12d996b7 nop  */
  /* nop */
L_12d996b8:;
  /* 12d996b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12d996bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12d996c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d996c6 jne 0x12d996ec */
  if (!C.zf) goto L_12d996ec;
  /* 12d996c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d996cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d996ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d996d1 jb 0x12d996e0 */
  if (C.cf) goto L_12d996e0;
  /* 12d996d3 std  */
  C.df=1;
  /* 12d996d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d996d6 cld  */
  C.df=0;
  /* 12d996d7 jmp dword ptr [edx*4 + 0x12d99800] */
  switch (EDX) {
    case 0: goto L_12d99810;
    case 1: goto L_12d99818;
    case 2: goto L_12d99828;
    case 3: goto L_12d9983c;
    default: x86_unimpl("switch@0x12d996d7 out of table"); return;
  }
  /* 12d996de mov edi, edi */
  EDI = (EDI);
L_12d996e0:;
  /* 12d996e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d996e2 jmp dword ptr [ecx*4 + 0x12d997b0] */
  switch (ECX) {
    case 0: goto L_12d997f7;
    default: x86_unimpl("switch@0x12d996e2 out of table"); return;
  }
  /* 12d996e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d996ec:;
  /* 12d996ec mov eax, edi */
  EAX = (EDI);
  /* 12d996ee mov edx, 3 */
  EDX = (0x3u);
  /* 12d996f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d996f6 jb 0x12d99704 */
  if (C.cf) goto L_12d99704;
  /* 12d996f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12d996fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d996fd jmp dword ptr [eax*4 + 0x12d99708] */
  switch (EAX) {
    case 1: goto L_12d99718;
    case 2: goto L_12d99738;
    case 3: goto L_12d99760;
    default: x86_unimpl("switch@0x12d996fd out of table"); return;
  }
L_12d99704:;
  /* 12d99704 jmp dword ptr [ecx*4 + 0x12d99800] */
  switch (ECX) {
    case 0: goto L_12d99810;
    case 1: goto L_12d99818;
    case 2: goto L_12d99828;
    case 3: goto L_12d9983c;
    default: x86_unimpl("switch@0x12d99704 out of table"); return;
  }
  /* 12d9970b nop  */
  /* nop */
L_12d99718:;
  /* 12d99718 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d9971b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9971d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d99720 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12d99721 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d99724 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12d99725 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99728 jb 0x12d996e0 */
  if (C.cf) goto L_12d996e0;
  /* 12d9972a std  */
  C.df=1;
  /* 12d9972b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d9972d cld  */
  C.df=0;
  /* 12d9972e jmp dword ptr [edx*4 + 0x12d99800] */
  switch (EDX) {
    case 0: goto L_12d99810;
    case 1: goto L_12d99818;
    case 2: goto L_12d99828;
    case 3: goto L_12d9983c;
    default: x86_unimpl("switch@0x12d9972e out of table"); return;
  }
  /* 12d99735 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d99738:;
  /* 12d99738 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d9973b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9973d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d99740 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d99743 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d99746 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d99749 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9974c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9974f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99752 jb 0x12d996e0 */
  if (C.cf) goto L_12d996e0;
  /* 12d99754 std  */
  C.df=1;
  /* 12d99755 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d99757 cld  */
  C.df=0;
  /* 12d99758 jmp dword ptr [edx*4 + 0x12d99800] */
  switch (EDX) {
    case 0: goto L_12d99810;
    case 1: goto L_12d99818;
    case 2: goto L_12d99828;
    case 3: goto L_12d9983c;
    default: x86_unimpl("switch@0x12d99758 out of table"); return;
  }
  /* 12d9975f nop  */
  /* nop */
L_12d99760:;
  /* 12d99760 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d99763 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d99765 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d99768 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d9976b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d9976e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d99771 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d99774 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d99777 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9977a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9977d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99780 jb 0x12d996e0 */
  if (C.cf) goto L_12d996e0;
  /* 12d99786 std  */
  C.df=1;
  /* 12d99787 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d99789 cld  */
  C.df=0;
  /* 12d9978a jmp dword ptr [edx*4 + 0x12d99800] */
  switch (EDX) {
    case 0: goto L_12d99810;
    case 1: goto L_12d99818;
    case 2: goto L_12d99828;
    case 3: goto L_12d9983c;
    default: x86_unimpl("switch@0x12d9978a out of table"); return;
  }
  /* 12d99791 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12d99794 mov ah, 0x97 */
  AH = (0x97u);
  /* 12d99796 fst dword ptr [edx] */
  wf32((uint32_t)(EDX), (float)FPU_ST(0));
  /* 12d99798 mov esp, 0xc412d997 */
  ESP = (0xc412d997u);
  /* 12d9979d xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 12d9979e fst dword ptr [edx] */
  wf32((uint32_t)(EDX), (float)FPU_ST(0));
  /* 12d997a0 int3  */
  x86_unimpl("int3 @ 0x12d997a0");
  /* 12d997a1 xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 12d997a2 fst dword ptr [edx] */
  wf32((uint32_t)(EDX), (float)FPU_ST(0));
  /* 12d997a4 aam 0x97 */
  x86_unimpl("aam @ 0x12d997a4");
  /* 12d997a6 fst dword ptr [edx] */
  wf32((uint32_t)(EDX), (float)FPU_ST(0));
  /* 12d997a8 fcom qword ptr [edi - 0x681bed27] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(EDI + -0x681bed27)));
  /* 12d997ae fst dword ptr [edx] */
  wf32((uint32_t)(EDX), (float)FPU_ST(0));
  /* 12d997b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12d997b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12d997bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12d997c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12d997c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12d997c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12d997cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12d997d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12d997d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12d997d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12d997dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12d997e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12d997e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12d997e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12d997ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12d997f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d997f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12d997f7:;
  /* 12d997f7 jmp dword ptr [edx*4 + 0x12d99800] */
  switch (EDX) {
    case 0: goto L_12d99810;
    case 1: goto L_12d99818;
    case 2: goto L_12d99828;
    case 3: goto L_12d9983c;
    default: x86_unimpl("switch@0x12d997f7 out of table"); return;
  }
  /* 12d997fe mov edi, edi */
  EDI = (EDI);
L_12d99810:;
  /* 12d99810 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d99813 pop esi */
  ESI = (pop32());
  /* 12d99814 pop edi */
  EDI = (pop32());
  /* 12d99815 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d99816 ret  */
  ESPCHK(0x12d99520u, _esp0);
  ESP += 4; return;
  /* 12d99817 nop  */
  /* nop */
L_12d99818:;
  /* 12d99818 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d9981b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d9981e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d99821 pop esi */
  ESI = (pop32());
  /* 12d99822 pop edi */
  EDI = (pop32());
  /* 12d99823 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d99824 ret  */
  ESPCHK(0x12d99520u, _esp0);
  ESP += 4; return;
  /* 12d99825 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d99828:;
  /* 12d99828 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d9982b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d9982e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d99831 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d99834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d99837 pop esi */
  ESI = (pop32());
  /* 12d99838 pop edi */
  EDI = (pop32());
  /* 12d99839 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d9983a ret  */
  ESPCHK(0x12d99520u, _esp0);
  ESP += 4; return;
  /* 12d9983b nop  */
  /* nop */
L_12d9983c:;
  /* 12d9983c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d9983f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d99842 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d99845 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d99848 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d9984b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d9984e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d99851 pop esi */
  ESI = (pop32());
  /* 12d99852 pop edi */
  EDI = (pop32());
  /* 12d99853 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d99854 ret  */
  ESPCHK(0x12d99520u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12d99860 (104 bytes, 43 insns) */
void f_12d99860(void) {
  FTRACE(0x12d99860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d99860 push ebx */
  push32((uint32_t)(EBX));
  /* 12d99861 push esi */
  push32((uint32_t)(ESI));
  /* 12d99862 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12d99866 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d99868 jne 0x12d99882 */
  if (!C.zf) goto L_12d99882;
  /* 12d9986a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12d9986e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d99872 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d99874 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d99876 mov ebx, eax */
  EBX = (EAX);
  /* 12d99878 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d9987c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d9987e mov edx, ebx */
  EDX = (EBX);
  /* 12d99880 jmp 0x12d998c3 */
  goto L_12d998c3;
L_12d99882:;
  /* 12d99882 mov ecx, eax */
  ECX = (EAX);
  /* 12d99884 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12d99888 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d9988c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12d99890:;
  /* 12d99890 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12d99892 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12d99894 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12d99896 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12d99898 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9989a jne 0x12d99890 */
  if (!C.zf) goto L_12d99890;
  /* 12d9989c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d9989e mov esi, eax */
  ESI = (EAX);
  /* 12d998a0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d998a4 mov ecx, eax */
  ECX = (EAX);
  /* 12d998a6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12d998aa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d998ac add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d998ae jb 0x12d998be */
  if (C.cf) goto L_12d998be;
  /* 12d998b0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d998b4 ja 0x12d998be */
  if ((!C.cf&&!C.zf)) goto L_12d998be;
  /* 12d998b6 jb 0x12d998bf */
  if (C.cf) goto L_12d998bf;
  /* 12d998b8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d998bc jbe 0x12d998bf */
  if ((C.cf||C.zf)) goto L_12d998bf;
L_12d998be:;
  /* 12d998be dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12d998bf:;
  /* 12d998bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d998c1 mov eax, esi */
  EAX = (ESI);
L_12d998c3:;
  /* 12d998c3 pop esi */
  ESI = (pop32());
  /* 12d998c4 pop ebx */
  EBX = (pop32());
  /* 12d998c5 ret 0x10 */
  ESPCHK(0x12d99860u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12d998d0 (117 bytes, 44 insns) */
void f_12d998d0(void) {
  FTRACE(0x12d998d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d998d0 push ebx */
  push32((uint32_t)(EBX));
  /* 12d998d1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12d998d5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d998d7 jne 0x12d998f1 */
  if (!C.zf) goto L_12d998f1;
  /* 12d998d9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d998dd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d998e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d998e3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d998e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d998e9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d998eb mov eax, edx */
  EAX = (EDX);
  /* 12d998ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d998ef jmp 0x12d99941 */
  goto L_12d99941;
L_12d998f1:;
  /* 12d998f1 mov ecx, eax */
  ECX = (EAX);
  /* 12d998f3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d998f7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d998fb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12d998ff:;
  /* 12d998ff shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12d99901 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12d99903 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12d99905 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12d99907 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d99909 jne 0x12d998ff */
  if (!C.zf) goto L_12d998ff;
  /* 12d9990b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d9990d mov ecx, eax */
  ECX = (EAX);
  /* 12d9990f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d99913 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12d99914 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d99918 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9991a jb 0x12d9992a */
  if (C.cf) goto L_12d9992a;
  /* 12d9991c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99920 ja 0x12d9992a */
  if ((!C.cf&&!C.zf)) goto L_12d9992a;
  /* 12d99922 jb 0x12d99932 */
  if (C.cf) goto L_12d99932;
  /* 12d99924 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99928 jbe 0x12d99932 */
  if ((C.cf||C.zf)) goto L_12d99932;
L_12d9992a:;
  /* 12d9992a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9992e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12d99932:;
  /* 12d99932 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d99936 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9993a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9993c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9993e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12d99941:;
  /* 12d99941 pop ebx */
  EBX = (pop32());
  /* 12d99942 ret 0x10 */
  ESPCHK(0x12d998d0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009950 @ 0x12d99950 (628 bytes, 214 insns) */
void f_12d99950(void) {
  FTRACE(0x12d99950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d99950 push ebp */
  push32((uint32_t)(EBP));
  /* 12d99951 mov ebp, esp */
  EBP = (ESP);
  /* 12d99953 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d99956 push ebx */
  push32((uint32_t)(EBX));
  /* 12d99957 push esi */
  push32((uint32_t)(ESI));
  /* 12d99958 push edi */
  push32((uint32_t)(EDI));
L_12d99959:;
  /* 12d99959 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9995d jne 0x12d9997d */
  if (!C.zf) goto L_12d9997d;
  /* 12d9995f push 0x12da9e20 */
  push32((uint32_t)(0x12da9e20u));
  /* 12d99964 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d99966 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12d99968 push 0x12da9e14 */
  push32((uint32_t)(0x12da9e14u));
  /* 12d9996d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9996f call 0x12d91d00 */
  push32(0x12d99974u); f_12d91d00();
  /* 12d99974 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99977 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9997a jne 0x12d9997d */
  if (!C.zf) goto L_12d9997d;
  /* 12d9997c int3  */
  x86_unimpl("int3 @ 0x12d9997c");
L_12d9997d:;
  /* 12d9997d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9997f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d99981 jne 0x12d99959 */
  if (!C.zf) goto L_12d99959;
  /* 12d99983 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d99986 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d99989 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9998c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d9998f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d99992 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99995 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d99998 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9999e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d999a0 je 0x12d999af */
  if (C.zf) goto L_12d999af;
  /* 12d999a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d999a5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d999a8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12d999ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d999ad je 0x12d999c5 */
  if (C.zf) goto L_12d999c5;
L_12d999af:;
  /* 12d999af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d999b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d999b5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12d999b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d999ba mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12d999bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d999c0 jmp 0x12d99bbd */
  goto L_12d99bbd;
L_12d999c5:;
  /* 12d999c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d999c8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d999cb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12d999ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d999d0 je 0x12d99a1c */
  if (C.zf) goto L_12d99a1c;
  /* 12d999d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d999d5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12d999dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d999df mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d999e2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12d999e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d999e7 je 0x12d99a05 */
  if (C.zf) goto L_12d99a05;
  /* 12d999e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d999ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d999ef mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d999f2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d999f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d999f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d999fa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 12d999fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99a00 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d99a03 jmp 0x12d99a1c */
  goto L_12d99a1c;
L_12d99a05:;
  /* 12d99a05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99a08 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d99a0b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12d99a0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99a11 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d99a14 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d99a17 jmp 0x12d99bbd */
  goto L_12d99bbd;
L_12d99a1c:;
  /* 12d99a1c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99a1f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d99a22 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12d99a25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99a28 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d99a2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99a2e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d99a31 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12d99a34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99a37 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d99a3a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99a3d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12d99a44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d99a4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99a4e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d99a51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99a54 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d99a57 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 12d99a5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d99a5f jne 0x12d99a8f */
  if (!C.zf) goto L_12d99a8f;
  /* 12d99a61 cmp dword ptr [ebp - 8], 0x12dac200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12dac200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99a68 je 0x12d99a73 */
  if (C.zf) goto L_12d99a73;
  /* 12d99a6a cmp dword ptr [ebp - 8], 0x12dac220 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12dac220u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99a71 jne 0x12d99a83 */
  if (!C.zf) goto L_12d99a83;
L_12d99a73:;
  /* 12d99a73 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d99a76 push edx */
  push32((uint32_t)(EDX));
  /* 12d99a77 call 0x12d9b8c0 */
  push32(0x12d99a7cu); f_12d9b8c0();
  /* 12d99a7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99a7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d99a81 jne 0x12d99a8f */
  if (!C.zf) goto L_12d99a8f;
L_12d99a83:;
  /* 12d99a83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99a86 push eax */
  push32((uint32_t)(EAX));
  /* 12d99a87 call 0x12d9b7f0 */
  push32(0x12d99a8cu); f_12d9b7f0();
  /* 12d99a8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d99a8f:;
  /* 12d99a8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99a92 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d99a95 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 12d99a9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d99a9d je 0x12d99b7b */
  if (C.zf) goto L_12d99b7b;
L_12d99aa3:;
  /* 12d99aa3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99aa6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99aa9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 12d99aab sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d99aae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d99ab0 jge 0x12d99ad3 */
  if ((C.sf==C.of)) goto L_12d99ad3;
  /* 12d99ab2 push 0x12da9dd4 */
  push32((uint32_t)(0x12da9dd4u));
  /* 12d99ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d99ab9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 12d99abe push 0x12da9e14 */
  push32((uint32_t)(0x12da9e14u));
  /* 12d99ac3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d99ac5 call 0x12d91d00 */
  push32(0x12d99acau); f_12d91d00();
  /* 12d99aca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99acd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99ad0 jne 0x12d99ad3 */
  if (!C.zf) goto L_12d99ad3;
  /* 12d99ad2 int3  */
  x86_unimpl("int3 @ 0x12d99ad2");
L_12d99ad3:;
  /* 12d99ad3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d99ad5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d99ad7 jne 0x12d99aa3 */
  if (!C.zf) goto L_12d99aa3;
  /* 12d99ad9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99adc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99adf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12d99ae1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d99ae4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d99ae7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99aea mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d99aed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99af0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99af3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d99af5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99af8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d99afb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d99afe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99b01 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d99b04 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99b08 jle 0x12d99b26 */
  if ((C.zf||C.sf!=C.of)) goto L_12d99b26;
  /* 12d99b0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99b0d push ecx */
  push32((uint32_t)(ECX));
  /* 12d99b0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99b11 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d99b14 push eax */
  push32((uint32_t)(EAX));
  /* 12d99b15 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d99b18 push ecx */
  push32((uint32_t)(ECX));
  /* 12d99b19 call 0x12d9b4e0 */
  push32(0x12d99b1eu); f_12d9b4e0();
  /* 12d99b1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99b21 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d99b24 jmp 0x12d99b6e */
  goto L_12d99b6e;
L_12d99b26:;
  /* 12d99b26 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99b2a je 0x12d99b49 */
  if (C.zf) goto L_12d99b49;
  /* 12d99b2c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d99b2f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12d99b32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d99b35 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12d99b38 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d99b3b mov ecx, dword ptr [edx*4 + 0x12daef00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12daef00)));
  /* 12d99b42 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99b44 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d99b47 jmp 0x12d99b50 */
  goto L_12d99b50;
L_12d99b49:;
  /* 12d99b49 mov dword ptr [ebp - 0x14], 0x12dabb20 */
  w32((uint32_t)(EBP + -0x14), (0x12dabb20u));
L_12d99b50:;
  /* 12d99b50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d99b53 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12d99b57 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12d99b5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d99b5c je 0x12d99b6e */
  if (C.zf) goto L_12d99b6e;
  /* 12d99b5e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d99b60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d99b62 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d99b65 push ecx */
  push32((uint32_t)(ECX));
  /* 12d99b66 call 0x12d9b390 */
  push32(0x12d99b6bu); f_12d9b390();
  /* 12d99b6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d99b6e:;
  /* 12d99b6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99b71 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d99b74 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d99b77 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12d99b79 jmp 0x12d99b99 */
  goto L_12d99b99;
L_12d99b7b:;
  /* 12d99b7b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d99b82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99b85 push edx */
  push32((uint32_t)(EDX));
  /* 12d99b86 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12d99b89 push eax */
  push32((uint32_t)(EAX));
  /* 12d99b8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d99b8d push ecx */
  push32((uint32_t)(ECX));
  /* 12d99b8e call 0x12d9b4e0 */
  push32(0x12d99b93u); f_12d9b4e0();
  /* 12d99b93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99b96 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d99b99:;
  /* 12d99b99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d99b9c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99b9f je 0x12d99bb5 */
  if (C.zf) goto L_12d99bb5;
  /* 12d99ba1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99ba4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d99ba7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12d99baa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99bad mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12d99bb0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d99bb3 jmp 0x12d99bbd */
  goto L_12d99bbd;
L_12d99bb5:;
  /* 12d99bb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d99bb8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12d99bbd:;
  /* 12d99bbd pop edi */
  EDI = (pop32());
  /* 12d99bbe pop esi */
  ESI = (pop32());
  /* 12d99bbf pop ebx */
  EBX = (pop32());
  /* 12d99bc0 mov esp, ebp */
  ESP = (EBP);
  /* 12d99bc2 pop ebp */
  EBP = (pop32());
  /* 12d99bc3 ret  */
  ESPCHK(0x12d99950u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bd0 @ 0x12d99bd0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12d99bd0(void) {
  FTRACE(0x12d99bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d99bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d99bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12d99bd3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d99bd9 push ebx */
  push32((uint32_t)(EBX));
  /* 12d99bda push esi */
  push32((uint32_t)(ESI));
  /* 12d99bdb push edi */
  push32((uint32_t)(EDI));
  /* 12d99bdc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d99be3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12d99bed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12d99bf4:;
  /* 12d99bf4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d99bf7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d99bf9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12d99bfc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d99c00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d99c03 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99c06 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12d99c09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d99c0b je 0x12d9a7e7 */
  if (C.zf) goto L_12d9a7e7;
  /* 12d99c11 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99c18 jl 0x12d9a7e7 */
  if ((C.sf!=C.of)) goto L_12d9a7e7;
  /* 12d99c1e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d99c22 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99c25 jl 0x12d99c46 */
  if ((C.sf!=C.of)) goto L_12d99c46;
  /* 12d99c27 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d99c2b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99c2e jg 0x12d99c46 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d99c46;
  /* 12d99c30 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d99c34 movsx ecx, byte ptr [eax + 0x12da9e0c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12da9e0c))));
  /* 12d99c3b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12d99c3e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12d99c44 jmp 0x12d99c50 */
  goto L_12d99c50;
L_12d99c46:;
  /* 12d99c46 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12d99c50:;
  /* 12d99c50 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12d99c56 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d99c59 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d99c5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d99c5f movsx edx, byte ptr [ecx + eax*8 + 0x12da9e2c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12da9e2c))));
  /* 12d99c67 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d99c6a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d99c6d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d99c70 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12d99c76 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99c7d ja 0x12d9a7e2 */
  if ((!C.cf&&!C.zf)) goto L_12d9a7e2;
  /* 12d99c83 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12d99c89 jmp dword ptr [ecx*4 + 0x12d9a7f4] */
  switch (ECX) {
    case 0: goto L_12d99c90;
    case 1: goto L_12d99d2a;
    case 2: goto L_12d99d6c;
    case 3: goto L_12d99ddb;
    case 4: goto L_12d99e33;
    case 5: goto L_12d99e42;
    case 6: goto L_12d99e8e;
    case 7: goto L_12d99f21;
    case 8: goto L_12d99db8;
    case 9: goto L_12d99dc3;
    case 10: goto L_12d99dae;
    case 11: goto L_12d99da3;
    case 12: goto L_12d99dce;
    case 13: goto L_12d99dd6;
    default: x86_unimpl("switch@0x12d99c89 out of table"); return;
  }
L_12d99c90:;
  /* 12d99c90 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12d99c97 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d99c9a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d99ca0 mov eax, dword ptr [0x12dabd58] */
  EAX = (r32((uint32_t)(0x12dabd58)));
  /* 12d99ca5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d99ca7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12d99cab and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12d99cb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d99cb3 je 0x12d99d0d */
  if (C.zf) goto L_12d99d0d;
  /* 12d99cb5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12d99cbb push edx */
  push32((uint32_t)(EDX));
  /* 12d99cbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d99cbf push eax */
  push32((uint32_t)(EAX));
  /* 12d99cc0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d99cc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d99cc5 call 0x12d9a900 */
  push32(0x12d99ccau); f_12d9a900();
  /* 12d99cca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99ccd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d99cd0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d99cd2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12d99cd5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d99cd8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99cdb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12d99cde:;
  /* 12d99cde movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d99ce2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d99ce4 jne 0x12d99d07 */
  if (!C.zf) goto L_12d99d07;
  /* 12d99ce6 push 0x12da9eac */
  push32((uint32_t)(0x12da9eacu));
  /* 12d99ceb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d99ced push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12d99cf2 push 0x12da9ea0 */
  push32((uint32_t)(0x12da9ea0u));
  /* 12d99cf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d99cf9 call 0x12d91d00 */
  push32(0x12d99cfeu); f_12d91d00();
  /* 12d99cfe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99d01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99d04 jne 0x12d99d07 */
  if (!C.zf) goto L_12d99d07;
  /* 12d99d06 int3  */
  x86_unimpl("int3 @ 0x12d99d06");
L_12d99d07:;
  /* 12d99d07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d99d09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d99d0b jne 0x12d99cde */
  if (!C.zf) goto L_12d99cde;
L_12d99d0d:;
  /* 12d99d0d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12d99d13 push ecx */
  push32((uint32_t)(ECX));
  /* 12d99d14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d99d17 push edx */
  push32((uint32_t)(EDX));
  /* 12d99d18 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d99d1c push eax */
  push32((uint32_t)(EAX));
  /* 12d99d1d call 0x12d9a900 */
  push32(0x12d99d22u); f_12d9a900();
  /* 12d99d22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99d25 jmp 0x12d9a7e2 */
  goto L_12d9a7e2;
L_12d99d2a:;
  /* 12d99d2a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d99d31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d99d34 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12d99d3a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12d99d40 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12d99d46 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12d99d4c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d99d4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d99d56 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12d99d60 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12d99d67 jmp 0x12d9a7e2 */
  goto L_12d9a7e2;
L_12d99d6c:;
  /* 12d99d6c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d99d70 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12d99d76 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12d99d7c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d99d7f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12d99d85 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99d8c ja 0x12d99dd6 */
  if ((!C.cf&&!C.zf)) goto L_12d99dd6;
  /* 12d99d8e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12d99d94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d99d96 mov al, byte ptr [ecx + 0x12d9a82c] */
  AL = (r8((uint32_t)(ECX + 0x12d9a82c)));
  /* 12d99d9c jmp dword ptr [eax*4 + 0x12d9a814] */
  switch (EAX) {
    case 0: goto L_12d99db8;
    case 1: goto L_12d99dc3;
    case 2: goto L_12d99dae;
    case 3: goto L_12d99da3;
    case 4: goto L_12d99dce;
    case 5: goto L_12d99dd6;
    default: x86_unimpl("switch@0x12d99d9c out of table"); return;
  }
L_12d99da3:;
  /* 12d99da3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99da6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d99da9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d99dac jmp 0x12d99dd6 */
  goto L_12d99dd6;
L_12d99dae:;
  /* 12d99dae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99db1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12d99db3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d99db6 jmp 0x12d99dd6 */
  goto L_12d99dd6;
L_12d99db8:;
  /* 12d99db8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99dbb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12d99dbe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d99dc1 jmp 0x12d99dd6 */
  goto L_12d99dd6;
L_12d99dc3:;
  /* 12d99dc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99dc6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12d99dc9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d99dcc jmp 0x12d99dd6 */
  goto L_12d99dd6;
L_12d99dce:;
  /* 12d99dce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99dd1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12d99dd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d99dd6:;
  /* 12d99dd6 jmp 0x12d9a7e2 */
  goto L_12d9a7e2;
L_12d99ddb:;
  /* 12d99ddb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d99ddf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99de2 jne 0x12d99e17 */
  if (!C.zf) goto L_12d99e17;
  /* 12d99de4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12d99de7 push edx */
  push32((uint32_t)(EDX));
  /* 12d99de8 call 0x12d9aa10 */
  push32(0x12d99dedu); f_12d9aa10();
  /* 12d99ded add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99df0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12d99df6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99dfd jge 0x12d99e15 */
  if ((C.sf==C.of)) goto L_12d99e15;
  /* 12d99dff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99e02 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12d99e04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d99e07 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12d99e0d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d99e0f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12d99e15:;
  /* 12d99e15 jmp 0x12d99e2e */
  goto L_12d99e2e;
L_12d99e17:;
  /* 12d99e17 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12d99e1d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d99e20 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d99e24 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12d99e28 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12d99e2e:;
  /* 12d99e2e jmp 0x12d9a7e2 */
  goto L_12d9a7e2;
L_12d99e33:;
  /* 12d99e33 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12d99e3d jmp 0x12d9a7e2 */
  goto L_12d9a7e2;
L_12d99e42:;
  /* 12d99e42 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d99e46 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99e49 jne 0x12d99e72 */
  if (!C.zf) goto L_12d99e72;
  /* 12d99e4b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12d99e4e push eax */
  push32((uint32_t)(EAX));
  /* 12d99e4f call 0x12d9aa10 */
  push32(0x12d99e54u); f_12d9aa10();
  /* 12d99e54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99e57 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12d99e5d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99e64 jge 0x12d99e70 */
  if ((C.sf==C.of)) goto L_12d99e70;
  /* 12d99e66 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12d99e70:;
  /* 12d99e70 jmp 0x12d99e89 */
  goto L_12d99e89;
L_12d99e72:;
  /* 12d99e72 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12d99e78 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d99e7b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d99e7f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12d99e83 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12d99e89:;
  /* 12d99e89 jmp 0x12d9a7e2 */
  goto L_12d9a7e2;
L_12d99e8e:;
  /* 12d99e8e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d99e92 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12d99e98 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12d99e9e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d99ea1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12d99ea7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99eae ja 0x12d99f1c */
  if ((!C.cf&&!C.zf)) goto L_12d99f1c;
  /* 12d99eb0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12d99eb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d99eb8 mov al, byte ptr [ecx + 0x12d9a851] */
  AL = (r8((uint32_t)(ECX + 0x12d9a851)));
  /* 12d99ebe jmp dword ptr [eax*4 + 0x12d9a83d] */
  switch (EAX) {
    case 0: goto L_12d99ed0;
    case 1: goto L_12d99f09;
    case 2: goto L_12d99ec5;
    case 3: goto L_12d99f13;
    case 4: goto L_12d99f1c;
    default: x86_unimpl("switch@0x12d99ebe out of table"); return;
  }
L_12d99ec5:;
  /* 12d99ec5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99ec8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12d99ecb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d99ece jmp 0x12d99f1c */
  goto L_12d99f1c;
L_12d99ed0:;
  /* 12d99ed0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d99ed3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d99ed6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99ed9 jne 0x12d99efb */
  if (!C.zf) goto L_12d99efb;
  /* 12d99edb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d99ede movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d99ee2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99ee5 jne 0x12d99efb */
  if (!C.zf) goto L_12d99efb;
  /* 12d99ee7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d99eea add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99eed mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d99ef0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99ef3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d99ef6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d99ef9 jmp 0x12d99f07 */
  goto L_12d99f07;
L_12d99efb:;
  /* 12d99efb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12d99f02 jmp 0x12d99c90 */
  goto L_12d99c90;
L_12d99f07:;
  /* 12d99f07 jmp 0x12d99f1c */
  goto L_12d99f1c;
L_12d99f09:;
  /* 12d99f09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99f0c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12d99f0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d99f11 jmp 0x12d99f1c */
  goto L_12d99f1c;
L_12d99f13:;
  /* 12d99f13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99f16 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12d99f19 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d99f1c:;
  /* 12d99f1c jmp 0x12d9a7e2 */
  goto L_12d9a7e2;
L_12d99f21:;
  /* 12d99f21 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d99f25 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12d99f2b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12d99f31 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d99f34 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12d99f3a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99f41 ja 0x12d9a607 */
  if ((!C.cf&&!C.zf)) goto L_12d9a607;
  /* 12d99f47 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12d99f4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d99f4f mov cl, byte ptr [edx + 0x12d9a8bc] */
  CL = (r8((uint32_t)(EDX + 0x12d9a8bc)));
  /* 12d99f55 jmp dword ptr [ecx*4 + 0x12d9a880] */
  switch (ECX) {
    case 0: goto L_12d99f5c;
    case 1: goto L_12d9a1f0;
    case 2: goto L_12d9a080;
    case 3: goto L_12d9a329;
    case 4: goto L_12d99feb;
    case 5: goto L_12d99f71;
    case 6: goto L_12d9a2fb;
    case 7: goto L_12d9a200;
    case 8: goto L_12d9a1a5;
    case 9: goto L_12d9a375;
    case 10: goto L_12d9a31f;
    case 11: goto L_12d9a096;
    case 12: goto L_12d9a313;
    case 13: goto L_12d9a335;
    case 14: goto L_12d9a607;
    default: x86_unimpl("switch@0x12d99f55 out of table"); return;
  }
L_12d99f5c:;
  /* 12d99f5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99f5f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12d99f64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d99f66 jne 0x12d99f71 */
  if (!C.zf) goto L_12d99f71;
  /* 12d99f68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99f6b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12d99f6e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d99f71:;
  /* 12d99f71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d99f74 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12d99f7a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d99f7c je 0x12d99fb7 */
  if (C.zf) goto L_12d99fb7;
  /* 12d99f7e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12d99f81 push eax */
  push32((uint32_t)(EAX));
  /* 12d99f82 call 0x12d9aa50 */
  push32(0x12d99f87u); f_12d9aa50();
  /* 12d99f87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99f8a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12d99f8e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12d99f92 push ecx */
  push32((uint32_t)(ECX));
  /* 12d99f93 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12d99f99 push edx */
  push32((uint32_t)(EDX));
  /* 12d99f9a call 0x12d9bb30 */
  push32(0x12d99f9fu); f_12d9bb30();
  /* 12d99f9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99fa2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d99fa5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d99fa9 jge 0x12d99fb5 */
  if ((C.sf==C.of)) goto L_12d99fb5;
  /* 12d99fab mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12d99fb5:;
  /* 12d99fb5 jmp 0x12d99fdd */
  goto L_12d99fdd;
L_12d99fb7:;
  /* 12d99fb7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12d99fba push eax */
  push32((uint32_t)(EAX));
  /* 12d99fbb call 0x12d9aa10 */
  push32(0x12d99fc0u); f_12d9aa10();
  /* 12d99fc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99fc3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12d99fca mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12d99fd0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12d99fd6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12d99fdd:;
  /* 12d99fdd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12d99fe3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d99fe6 jmp 0x12d9a607 */
  goto L_12d9a607;
L_12d99feb:;
  /* 12d99feb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12d99fee push eax */
  push32((uint32_t)(EAX));
  /* 12d99fef call 0x12d9aa10 */
  push32(0x12d99ff4u); f_12d9aa10();
  /* 12d99ff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d99ff7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12d99ffd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a004 je 0x12d9a012 */
  if (C.zf) goto L_12d9a012;
  /* 12d9a006 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12d9a00c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a010 jne 0x12d9a02c */
  if (!C.zf) goto L_12d9a02c;
L_12d9a012:;
  /* 12d9a012 mov edx, dword ptr [0x12dac070] */
  EDX = (r32((uint32_t)(0x12dac070)));
  /* 12d9a018 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d9a01b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a01e push eax */
  push32((uint32_t)(EAX));
  /* 12d9a01f call 0x12d95a70 */
  push32(0x12d9a024u); f_12d95a70();
  /* 12d9a024 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a027 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d9a02a jmp 0x12d9a07b */
  goto L_12d9a07b;
L_12d9a02c:;
  /* 12d9a02c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a02f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9a035 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9a037 je 0x12d9a05c */
  if (C.zf) goto L_12d9a05c;
  /* 12d9a039 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12d9a03f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d9a042 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d9a045 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12d9a04b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12d9a04e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12d9a050 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d9a053 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12d9a05a jmp 0x12d9a07b */
  goto L_12d9a07b;
L_12d9a05c:;
  /* 12d9a05c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12d9a063 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12d9a069 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d9a06c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d9a06f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12d9a075 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12d9a078 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d9a07b:;
  /* 12d9a07b jmp 0x12d9a607 */
  goto L_12d9a607;
L_12d9a080:;
  /* 12d9a080 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a083 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9a089 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9a08b jne 0x12d9a096 */
  if (!C.zf) goto L_12d9a096;
  /* 12d9a08d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a090 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d9a093 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d9a096:;
  /* 12d9a096 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a09d jne 0x12d9a0ab */
  if (!C.zf) goto L_12d9a0ab;
  /* 12d9a09f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12d9a0a9 jmp 0x12d9a0b7 */
  goto L_12d9a0b7;
L_12d9a0ab:;
  /* 12d9a0ab mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12d9a0b1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12d9a0b7:;
  /* 12d9a0b7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12d9a0bd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12d9a0c3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12d9a0c6 push edx */
  push32((uint32_t)(EDX));
  /* 12d9a0c7 call 0x12d9aa10 */
  push32(0x12d9a0ccu); f_12d9aa10();
  /* 12d9a0cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a0cf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d9a0d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a0d5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9a0da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9a0dc je 0x12d9a146 */
  if (C.zf) goto L_12d9a146;
  /* 12d9a0de cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a0e2 jne 0x12d9a0ed */
  if (!C.zf) goto L_12d9a0ed;
  /* 12d9a0e4 mov ecx, dword ptr [0x12dac074] */
  ECX = (r32((uint32_t)(0x12dac074)));
  /* 12d9a0ea mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12d9a0ed:;
  /* 12d9a0ed mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12d9a0f4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a0f7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12d9a0fd:;
  /* 12d9a0fd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12d9a103 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12d9a109 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9a10c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12d9a112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9a114 je 0x12d9a136 */
  if (C.zf) goto L_12d9a136;
  /* 12d9a116 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12d9a11c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9a11e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12d9a121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9a123 je 0x12d9a136 */
  if (C.zf) goto L_12d9a136;
  /* 12d9a125 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12d9a12b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a12e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12d9a134 jmp 0x12d9a0fd */
  goto L_12d9a0fd;
L_12d9a136:;
  /* 12d9a136 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12d9a13c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9a13f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12d9a141 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d9a144 jmp 0x12d9a1a0 */
  goto L_12d9a1a0;
L_12d9a146:;
  /* 12d9a146 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a14a jne 0x12d9a154 */
  if (!C.zf) goto L_12d9a154;
  /* 12d9a14c mov eax, dword ptr [0x12dac070] */
  EAX = (r32((uint32_t)(0x12dac070)));
  /* 12d9a151 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12d9a154:;
  /* 12d9a154 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a157 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12d9a15d:;
  /* 12d9a15d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12d9a163 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12d9a169 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9a16c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12d9a172 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9a174 je 0x12d9a194 */
  if (C.zf) goto L_12d9a194;
  /* 12d9a176 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12d9a17c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d9a17f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9a181 je 0x12d9a194 */
  if (C.zf) goto L_12d9a194;
  /* 12d9a183 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12d9a189 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a18c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12d9a192 jmp 0x12d9a15d */
  goto L_12d9a15d;
L_12d9a194:;
  /* 12d9a194 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12d9a19a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9a19d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12d9a1a0:;
  /* 12d9a1a0 jmp 0x12d9a607 */
  goto L_12d9a607;
L_12d9a1a5:;
  /* 12d9a1a5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12d9a1a8 push edx */
  push32((uint32_t)(EDX));
  /* 12d9a1a9 call 0x12d9aa10 */
  push32(0x12d9a1aeu); f_12d9aa10();
  /* 12d9a1ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a1b1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12d9a1b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a1ba and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9a1bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9a1bf je 0x12d9a1d3 */
  if (C.zf) goto L_12d9a1d3;
  /* 12d9a1c1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12d9a1c7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12d9a1ce mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12d9a1d1 jmp 0x12d9a1e1 */
  goto L_12d9a1e1;
L_12d9a1d3:;
  /* 12d9a1d3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12d9a1d9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12d9a1df mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12d9a1e1:;
  /* 12d9a1e1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12d9a1eb jmp 0x12d9a607 */
  goto L_12d9a607;
L_12d9a1f0:;
  /* 12d9a1f0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d9a1f7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12d9a1fa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d9a1fd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12d9a200:;
  /* 12d9a200 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a203 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12d9a205 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9a208 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12d9a20e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d9a211 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a218 jge 0x12d9a226 */
  if ((C.sf==C.of)) goto L_12d9a226;
  /* 12d9a21a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12d9a224 jmp 0x12d9a242 */
  goto L_12d9a242;
L_12d9a226:;
  /* 12d9a226 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a22d jne 0x12d9a242 */
  if (!C.zf) goto L_12d9a242;
  /* 12d9a22f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d9a233 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a236 jne 0x12d9a242 */
  if (!C.zf) goto L_12d9a242;
  /* 12d9a238 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12d9a242:;
  /* 12d9a242 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9a245 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a248 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12d9a24b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9a24e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9a251 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d9a253 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d9a256 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12d9a25c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12d9a262 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9a265 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a266 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12d9a26c push edx */
  push32((uint32_t)(EDX));
  /* 12d9a26d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d9a271 push eax */
  push32((uint32_t)(EAX));
  /* 12d9a272 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a275 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a276 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12d9a27c push edx */
  push32((uint32_t)(EDX));
  /* 12d9a27d call dword ptr [0x12dac460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dac460))), 0x12d9a283u);
  /* 12d9a283 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a286 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a289 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9a28e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9a290 je 0x12d9a2a8 */
  if (C.zf) goto L_12d9a2a8;
  /* 12d9a292 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a299 jne 0x12d9a2a8 */
  if (!C.zf) goto L_12d9a2a8;
  /* 12d9a29b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a29e push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a29f call dword ptr [0x12dac46c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dac46c))), 0x12d9a2a5u);
  /* 12d9a2a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9a2a8:;
  /* 12d9a2a8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d9a2ac cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a2af jne 0x12d9a2ca */
  if (!C.zf) goto L_12d9a2ca;
  /* 12d9a2b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a2b4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9a2b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9a2bb jne 0x12d9a2ca */
  if (!C.zf) goto L_12d9a2ca;
  /* 12d9a2bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a2c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a2c1 call dword ptr [0x12dac464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dac464))), 0x12d9a2c7u);
  /* 12d9a2c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9a2ca:;
  /* 12d9a2ca mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a2cd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d9a2d0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a2d3 jne 0x12d9a2e7 */
  if (!C.zf) goto L_12d9a2e7;
  /* 12d9a2d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a2d8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12d9a2db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d9a2de mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a2e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a2e4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12d9a2e7:;
  /* 12d9a2e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a2ea push eax */
  push32((uint32_t)(EAX));
  /* 12d9a2eb call 0x12d95a70 */
  push32(0x12d9a2f0u); f_12d95a70();
  /* 12d9a2f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a2f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d9a2f6 jmp 0x12d9a607 */
  goto L_12d9a607;
L_12d9a2fb:;
  /* 12d9a2fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a2fe or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9a301 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d9a304 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12d9a30e jmp 0x12d9a395 */
  goto L_12d9a395;
L_12d9a313:;
  /* 12d9a313 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12d9a31d jmp 0x12d9a395 */
  goto L_12d9a395;
L_12d9a31f:;
  /* 12d9a31f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12d9a329:;
  /* 12d9a329 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12d9a333 jmp 0x12d9a33f */
  goto L_12d9a33f;
L_12d9a335:;
  /* 12d9a335 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12d9a33f:;
  /* 12d9a33f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12d9a349 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a34c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9a352 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9a354 je 0x12d9a373 */
  if (C.zf) goto L_12d9a373;
  /* 12d9a356 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12d9a35d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12d9a363 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a366 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12d9a36c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12d9a373:;
  /* 12d9a373 jmp 0x12d9a395 */
  goto L_12d9a395;
L_12d9a375:;
  /* 12d9a375 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12d9a37f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a382 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9a388 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9a38a je 0x12d9a395 */
  if (C.zf) goto L_12d9a395;
  /* 12d9a38c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a38f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d9a392 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d9a395:;
  /* 12d9a395 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a398 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9a39d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9a39f je 0x12d9a3be */
  if (C.zf) goto L_12d9a3be;
  /* 12d9a3a1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12d9a3a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a3a5 call 0x12d9aa30 */
  push32(0x12d9a3aau); f_12d9aa30();
  /* 12d9a3aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a3ad mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12d9a3b3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12d9a3b9 jmp 0x12d9a44f */
  goto L_12d9a44f;
L_12d9a3be:;
  /* 12d9a3be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a3c1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9a3c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9a3c6 je 0x12d9a410 */
  if (C.zf) goto L_12d9a410;
  /* 12d9a3c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a3cb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9a3ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9a3d0 je 0x12d9a3f0 */
  if (C.zf) goto L_12d9a3f0;
  /* 12d9a3d2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12d9a3d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a3d6 call 0x12d9aa10 */
  push32(0x12d9a3dbu); f_12d9aa10();
  /* 12d9a3db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a3de movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12d9a3e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d9a3e2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12d9a3e8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12d9a3ee jmp 0x12d9a40e */
  goto L_12d9a40e;
L_12d9a3f0:;
  /* 12d9a3f0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12d9a3f3 push edx */
  push32((uint32_t)(EDX));
  /* 12d9a3f4 call 0x12d9aa10 */
  push32(0x12d9a3f9u); f_12d9aa10();
  /* 12d9a3f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a3fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9a401 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d9a402 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12d9a408 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12d9a40e:;
  /* 12d9a40e jmp 0x12d9a44f */
  goto L_12d9a44f;
L_12d9a410:;
  /* 12d9a410 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a413 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9a416 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9a418 je 0x12d9a435 */
  if (C.zf) goto L_12d9a435;
  /* 12d9a41a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12d9a41d push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a41e call 0x12d9aa10 */
  push32(0x12d9a423u); f_12d9aa10();
  /* 12d9a423 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a426 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d9a427 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12d9a42d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12d9a433 jmp 0x12d9a44f */
  goto L_12d9a44f;
L_12d9a435:;
  /* 12d9a435 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12d9a438 push edx */
  push32((uint32_t)(EDX));
  /* 12d9a439 call 0x12d9aa10 */
  push32(0x12d9a43eu); f_12d9aa10();
  /* 12d9a43e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a441 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9a443 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12d9a449 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12d9a44f:;
  /* 12d9a44f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a452 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9a455 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9a457 je 0x12d9a497 */
  if (C.zf) goto L_12d9a497;
  /* 12d9a459 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a460 jg 0x12d9a497 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d9a497;
  /* 12d9a462 jl 0x12d9a46d */
  if ((C.sf!=C.of)) goto L_12d9a46d;
  /* 12d9a464 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a46b jae 0x12d9a497 */
  if (!C.cf) goto L_12d9a497;
L_12d9a46d:;
  /* 12d9a46d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12d9a473 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9a475 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12d9a47b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a47e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9a480 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12d9a486 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12d9a48c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a48f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d9a492 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d9a495 jmp 0x12d9a4af */
  goto L_12d9a4af;
L_12d9a497:;
  /* 12d9a497 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12d9a49d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12d9a4a3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12d9a4a9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12d9a4af:;
  /* 12d9a4af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a4b2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9a4b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9a4ba jne 0x12d9a4d7 */
  if (!C.zf) goto L_12d9a4d7;
  /* 12d9a4bc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12d9a4c2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12d9a4c8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9a4cb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12d9a4d1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12d9a4d7:;
  /* 12d9a4d7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a4de jge 0x12d9a4ec */
  if ((C.sf==C.of)) goto L_12d9a4ec;
  /* 12d9a4e0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12d9a4ea jmp 0x12d9a4f5 */
  goto L_12d9a4f5;
L_12d9a4ec:;
  /* 12d9a4ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a4ef and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9a4f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d9a4f5:;
  /* 12d9a4f5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12d9a4fb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12d9a501 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9a503 jne 0x12d9a50c */
  if (!C.zf) goto L_12d9a50c;
  /* 12d9a505 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12d9a50c:;
  /* 12d9a50c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12d9a50f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12d9a512:;
  /* 12d9a512 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12d9a518 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12d9a51e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9a521 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12d9a527 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9a529 jg 0x12d9a53f */
  if ((!C.zf&&C.sf==C.of)) goto L_12d9a53f;
  /* 12d9a52b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12d9a531 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12d9a537 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9a539 je 0x12d9a5c0 */
  if (C.zf) goto L_12d9a5c0;
L_12d9a53f:;
  /* 12d9a53f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12d9a545 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d9a546 push edx */
  push32((uint32_t)(EDX));
  /* 12d9a547 push eax */
  push32((uint32_t)(EAX));
  /* 12d9a548 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12d9a54e push edx */
  push32((uint32_t)(EDX));
  /* 12d9a54f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12d9a555 push eax */
  push32((uint32_t)(EAX));
  /* 12d9a556 call 0x12d998d0 */
  push32(0x12d9a55bu); f_12d998d0();
  /* 12d9a55b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a55e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12d9a564 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12d9a56a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d9a56b push edx */
  push32((uint32_t)(EDX));
  /* 12d9a56c push eax */
  push32((uint32_t)(EAX));
  /* 12d9a56d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12d9a573 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a574 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12d9a57a push edx */
  push32((uint32_t)(EDX));
  /* 12d9a57b call 0x12d99860 */
  push32(0x12d9a580u); f_12d99860();
  /* 12d9a580 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12d9a586 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12d9a58c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a593 jle 0x12d9a5a7 */
  if ((C.zf||C.sf!=C.of)) goto L_12d9a5a7;
  /* 12d9a595 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12d9a59b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a5a1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12d9a5a7:;
  /* 12d9a5a7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a5aa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12d9a5b0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12d9a5b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a5b5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9a5b8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d9a5bb jmp 0x12d9a512 */
  goto L_12d9a512;
L_12d9a5c0:;
  /* 12d9a5c0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12d9a5c3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9a5c6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d9a5c9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a5cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a5cf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d9a5d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a5d5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9a5da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9a5dc je 0x12d9a607 */
  if (C.zf) goto L_12d9a607;
  /* 12d9a5de mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a5e1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d9a5e4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a5e7 jne 0x12d9a5ef */
  if (!C.zf) goto L_12d9a5ef;
  /* 12d9a5e9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a5ed jne 0x12d9a607 */
  if (!C.zf) goto L_12d9a607;
L_12d9a5ef:;
  /* 12d9a5ef mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a5f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9a5f5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d9a5f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a5fb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12d9a5fe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d9a601 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a604 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12d9a607:;
  /* 12d9a607 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a60e jne 0x12d9a7e2 */
  if (!C.zf) goto L_12d9a7e2;
  /* 12d9a614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a617 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9a61a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9a61c je 0x12d9a66d */
  if (C.zf) goto L_12d9a66d;
  /* 12d9a61e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a621 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9a627 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9a629 je 0x12d9a63b */
  if (C.zf) goto L_12d9a63b;
  /* 12d9a62b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12d9a632 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12d9a639 jmp 0x12d9a66d */
  goto L_12d9a66d;
L_12d9a63b:;
  /* 12d9a63b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a63e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9a641 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9a643 je 0x12d9a655 */
  if (C.zf) goto L_12d9a655;
  /* 12d9a645 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 12d9a64c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12d9a653 jmp 0x12d9a66d */
  goto L_12d9a66d;
L_12d9a655:;
  /* 12d9a655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a658 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9a65b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9a65d je 0x12d9a66d */
  if (C.zf) goto L_12d9a66d;
  /* 12d9a65f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12d9a666 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12d9a66d:;
  /* 12d9a66d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12d9a673 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9a676 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9a679 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 12d9a67f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a682 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9a685 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9a687 jne 0x12d9a6a5 */
  if (!C.zf) goto L_12d9a6a5;
  /* 12d9a689 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12d9a68f push eax */
  push32((uint32_t)(EAX));
  /* 12d9a690 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9a693 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a694 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12d9a69a push edx */
  push32((uint32_t)(EDX));
  /* 12d9a69b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12d9a69d call 0x12d9a980 */
  push32(0x12d9a6a2u); f_12d9a980();
  /* 12d9a6a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9a6a5:;
  /* 12d9a6a5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12d9a6ab push eax */
  push32((uint32_t)(EAX));
  /* 12d9a6ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9a6af push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a6b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9a6b3 push edx */
  push32((uint32_t)(EDX));
  /* 12d9a6b4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 12d9a6ba push eax */
  push32((uint32_t)(EAX));
  /* 12d9a6bb call 0x12d9a9c0 */
  push32(0x12d9a6c0u); f_12d9a9c0();
  /* 12d9a6c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a6c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a6c6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9a6c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9a6cb je 0x12d9a6f3 */
  if (C.zf) goto L_12d9a6f3;
  /* 12d9a6cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a6d0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9a6d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9a6d5 jne 0x12d9a6f3 */
  if (!C.zf) goto L_12d9a6f3;
  /* 12d9a6d7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12d9a6dd push eax */
  push32((uint32_t)(EAX));
  /* 12d9a6de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9a6e1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a6e2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12d9a6e8 push edx */
  push32((uint32_t)(EDX));
  /* 12d9a6e9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12d9a6eb call 0x12d9a980 */
  push32(0x12d9a6f0u); f_12d9a980();
  /* 12d9a6f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9a6f3:;
  /* 12d9a6f3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a6f7 je 0x12d9a7a1 */
  if (C.zf) goto L_12d9a7a1;
  /* 12d9a6fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a701 jle 0x12d9a7a1 */
  if ((C.zf||C.sf!=C.of)) goto L_12d9a7a1;
  /* 12d9a707 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a70a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12d9a710 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d9a713 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12d9a719:;
  /* 12d9a719 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 12d9a71f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12d9a725 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9a728 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 12d9a72e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9a730 je 0x12d9a79f */
  if (C.zf) goto L_12d9a79f;
  /* 12d9a732 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12d9a738 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12d9a73b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12d9a742 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12d9a749 push eax */
  push32((uint32_t)(EAX));
  /* 12d9a74a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12d9a750 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a751 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12d9a757 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a75a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12d9a760 call 0x12d9bb30 */
  push32(0x12d9a765u); f_12d9bb30();
  /* 12d9a765 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a768 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 12d9a76e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a775 jg 0x12d9a779 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d9a779;
  /* 12d9a777 jmp 0x12d9a79f */
  goto L_12d9a79f;
L_12d9a779:;
  /* 12d9a779 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12d9a77f push eax */
  push32((uint32_t)(EAX));
  /* 12d9a780 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9a783 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a784 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 12d9a78a push edx */
  push32((uint32_t)(EDX));
  /* 12d9a78b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12d9a791 push eax */
  push32((uint32_t)(EAX));
  /* 12d9a792 call 0x12d9a9c0 */
  push32(0x12d9a797u); f_12d9a9c0();
  /* 12d9a797 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a79a jmp 0x12d9a719 */
  goto L_12d9a719;
L_12d9a79f:;
  /* 12d9a79f jmp 0x12d9a7bc */
  goto L_12d9a7bc;
L_12d9a7a1:;
  /* 12d9a7a1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12d9a7a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a7a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9a7ab push edx */
  push32((uint32_t)(EDX));
  /* 12d9a7ac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d9a7af push eax */
  push32((uint32_t)(EAX));
  /* 12d9a7b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9a7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a7b4 call 0x12d9a9c0 */
  push32(0x12d9a7b9u); f_12d9a9c0();
  /* 12d9a7b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9a7bc:;
  /* 12d9a7bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a7bf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9a7c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9a7c4 je 0x12d9a7e2 */
  if (C.zf) goto L_12d9a7e2;
  /* 12d9a7c6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12d9a7cc push eax */
  push32((uint32_t)(EAX));
  /* 12d9a7cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9a7d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a7d1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12d9a7d7 push edx */
  push32((uint32_t)(EDX));
  /* 12d9a7d8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12d9a7da call 0x12d9a980 */
  push32(0x12d9a7dfu); f_12d9a980();
  /* 12d9a7df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9a7e2:;
  /* 12d9a7e2 jmp 0x12d99bf4 */
  goto L_12d99bf4;
L_12d9a7e7:;
  /* 12d9a7e7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12d9a7ed pop edi */
  EDI = (pop32());
  /* 12d9a7ee pop esi */
  ESI = (pop32());
  /* 12d9a7ef pop ebx */
  EBX = (pop32());
  /* 12d9a7f0 mov esp, ebp */
  ESP = (EBP);
  /* 12d9a7f2 pop ebp */
  EBP = (pop32());
  /* 12d9a7f3 ret  */
  ESPCHK(0x12d99bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a900 @ 0x12d9a900 (119 bytes, 44 insns) */
void f_12d9a900(void) {
  FTRACE(0x12d9a900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9a900 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9a901 mov ebp, esp */
  EBP = (ESP);
  /* 12d9a903 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a904 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9a907 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d9a90a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9a90d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9a910 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d9a913 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9a916 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a91a jl 0x12d9a942 */
  if ((C.sf!=C.of)) goto L_12d9a942;
  /* 12d9a91c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9a91f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d9a921 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d9a924 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12d9a926 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12d9a92a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d9a930 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d9a933 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9a936 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d9a938 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a93b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9a93e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d9a940 jmp 0x12d9a955 */
  goto L_12d9a955;
L_12d9a942:;
  /* 12d9a942 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9a945 push edx */
  push32((uint32_t)(EDX));
  /* 12d9a946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9a949 push eax */
  push32((uint32_t)(EAX));
  /* 12d9a94a call 0x12d99950 */
  push32(0x12d9a94fu); f_12d99950();
  /* 12d9a94f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a952 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d9a955:;
  /* 12d9a955 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a959 jne 0x12d9a966 */
  if (!C.zf) goto L_12d9a966;
  /* 12d9a95b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9a95e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12d9a964 jmp 0x12d9a973 */
  goto L_12d9a973;
L_12d9a966:;
  /* 12d9a966 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9a969 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d9a96b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a96e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9a971 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12d9a973:;
  /* 12d9a973 mov esp, ebp */
  ESP = (EBP);
  /* 12d9a975 pop ebp */
  EBP = (pop32());
  /* 12d9a976 ret  */
  ESPCHK(0x12d9a900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a980 @ 0x12d9a980 (53 bytes, 23 insns) */
void f_12d9a980(void) {
  FTRACE(0x12d9a980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9a980 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9a981 mov ebp, esp */
  EBP = (ESP);
L_12d9a983:;
  /* 12d9a983 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9a986 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9a989 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9a98c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d9a98f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9a991 jle 0x12d9a9b3 */
  if ((C.zf||C.sf!=C.of)) goto L_12d9a9b3;
  /* 12d9a993 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9a996 push edx */
  push32((uint32_t)(EDX));
  /* 12d9a997 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9a99a push eax */
  push32((uint32_t)(EAX));
  /* 12d9a99b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9a99e push ecx */
  push32((uint32_t)(ECX));
  /* 12d9a99f call 0x12d9a900 */
  push32(0x12d9a9a4u); f_12d9a900();
  /* 12d9a9a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a9a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9a9aa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9a9ad jne 0x12d9a9b1 */
  if (!C.zf) goto L_12d9a9b1;
  /* 12d9a9af jmp 0x12d9a9b3 */
  goto L_12d9a9b3;
L_12d9a9b1:;
  /* 12d9a9b1 jmp 0x12d9a983 */
  goto L_12d9a983;
L_12d9a9b3:;
  /* 12d9a9b3 pop ebp */
  EBP = (pop32());
  /* 12d9a9b4 ret  */
  ESPCHK(0x12d9a980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9c0 @ 0x12d9a9c0 (74 bytes, 31 insns) */
void f_12d9a9c0(void) {
  FTRACE(0x12d9a9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9a9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9a9c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9a9c3 push ecx */
  push32((uint32_t)(ECX));
L_12d9a9c4:;
  /* 12d9a9c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9a9c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9a9ca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9a9cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d9a9d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9a9d2 jle 0x12d9aa06 */
  if ((C.zf||C.sf!=C.of)) goto L_12d9aa06;
  /* 12d9a9d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9a9d7 push edx */
  push32((uint32_t)(EDX));
  /* 12d9a9d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9a9db push eax */
  push32((uint32_t)(EAX));
  /* 12d9a9dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9a9df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d9a9e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d9a9e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9a9e8 push eax */
  push32((uint32_t)(EAX));
  /* 12d9a9e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9a9ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a9ef mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d9a9f2 call 0x12d9a900 */
  push32(0x12d9a9f7u); f_12d9a900();
  /* 12d9a9f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9a9fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9a9fd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9aa00 jne 0x12d9aa04 */
  if (!C.zf) goto L_12d9aa04;
  /* 12d9aa02 jmp 0x12d9aa06 */
  goto L_12d9aa06;
L_12d9aa04:;
  /* 12d9aa04 jmp 0x12d9a9c4 */
  goto L_12d9a9c4;
L_12d9aa06:;
  /* 12d9aa06 mov esp, ebp */
  ESP = (EBP);
  /* 12d9aa08 pop ebp */
  EBP = (pop32());
  /* 12d9aa09 ret  */
  ESPCHK(0x12d9a9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa10 @ 0x12d9aa10 (26 bytes, 12 insns) */
void f_12d9aa10(void) {
  FTRACE(0x12d9aa10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9aa10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9aa11 mov ebp, esp */
  EBP = (ESP);
  /* 12d9aa13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9aa16 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d9aa18 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9aa1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9aa1e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d9aa20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9aa23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d9aa25 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d9aa28 pop ebp */
  EBP = (pop32());
  /* 12d9aa29 ret  */
  ESPCHK(0x12d9aa10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa30 @ 0x12d9aa30 (31 bytes, 14 insns) */
void f_12d9aa30(void) {
  FTRACE(0x12d9aa30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9aa30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9aa31 mov ebp, esp */
  EBP = (ESP);
  /* 12d9aa33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9aa36 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d9aa38 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9aa3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9aa3e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d9aa40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9aa43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d9aa45 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9aa48 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12d9aa4a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d9aa4d pop ebp */
  EBP = (pop32());
  /* 12d9aa4e ret  */
  ESPCHK(0x12d9aa30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa50 @ 0x12d9aa50 (27 bytes, 12 insns) */
void f_12d9aa50(void) {
  FTRACE(0x12d9aa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9aa50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9aa51 mov ebp, esp */
  EBP = (ESP);
  /* 12d9aa53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9aa56 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d9aa58 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9aa5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9aa5e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d9aa60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9aa63 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d9aa65 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 12d9aa69 pop ebp */
  EBP = (pop32());
  /* 12d9aa6a ret  */
  ESPCHK(0x12d9aa50u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12d9aa70 (145 bytes, 42 insns) */
void f_12d9aa70(void) {
  FTRACE(0x12d9aa70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9aa70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9aa71 mov ebp, esp */
  EBP = (ESP);
  /* 12d9aa73 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9aa74 call 0x12d9ab20 */
  push32(0x12d9aa79u); f_12d9ab20();
  /* 12d9aa79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9aa7c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d9aa7e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d9aa85 jmp 0x12d9aa90 */
  goto L_12d9aa90;
L_12d9aa87:;
  /* 12d9aa87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9aa8a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9aa8d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d9aa90:;
  /* 12d9aa90 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9aa94 jae 0x12d9aaba */
  if (!C.cf) goto L_12d9aaba;
  /* 12d9aa96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9aa99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9aa9c cmp ecx, dword ptr [eax*8 + 0x12dac078] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12dac078))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9aaa3 jne 0x12d9aab8 */
  if (!C.zf) goto L_12d9aab8;
  /* 12d9aaa5 call 0x12d9ab10 */
  push32(0x12d9aaaau); f_12d9ab10();
  /* 12d9aaaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9aaad mov ecx, dword ptr [edx*8 + 0x12dac07c] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12dac07c)));
  /* 12d9aab4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d9aab6 jmp 0x12d9aafd */
  goto L_12d9aafd;
L_12d9aab8:;
  /* 12d9aab8 jmp 0x12d9aa87 */
  goto L_12d9aa87;
L_12d9aaba:;
  /* 12d9aaba cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9aabe jb 0x12d9aad3 */
  if (C.cf) goto L_12d9aad3;
  /* 12d9aac0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9aac4 ja 0x12d9aad3 */
  if ((!C.cf&&!C.zf)) goto L_12d9aad3;
  /* 12d9aac6 call 0x12d9ab10 */
  push32(0x12d9aacbu); f_12d9ab10();
  /* 12d9aacb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12d9aad1 jmp 0x12d9aafd */
  goto L_12d9aafd;
L_12d9aad3:;
  /* 12d9aad3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9aada jb 0x12d9aaf2 */
  if (C.cf) goto L_12d9aaf2;
  /* 12d9aadc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9aae3 ja 0x12d9aaf2 */
  if ((!C.cf&&!C.zf)) goto L_12d9aaf2;
  /* 12d9aae5 call 0x12d9ab10 */
  push32(0x12d9aaeau); f_12d9ab10();
  /* 12d9aaea mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12d9aaf0 jmp 0x12d9aafd */
  goto L_12d9aafd;
L_12d9aaf2:;
  /* 12d9aaf2 call 0x12d9ab10 */
  push32(0x12d9aaf7u); f_12d9ab10();
  /* 12d9aaf7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12d9aafd:;
  /* 12d9aafd mov esp, ebp */
  ESP = (EBP);
  /* 12d9aaff pop ebp */
  EBP = (pop32());
  /* 12d9ab00 ret  */
  ESPCHK(0x12d9aa70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab10 @ 0x12d9ab10 (13 bytes, 6 insns) */
void f_12d9ab10(void) {
  FTRACE(0x12d9ab10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9ab10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9ab11 mov ebp, esp */
  EBP = (ESP);
  /* 12d9ab13 call 0x12d92680 */
  push32(0x12d9ab18u); f_12d92680();
  /* 12d9ab18 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ab1b pop ebp */
  EBP = (pop32());
  /* 12d9ab1c ret  */
  ESPCHK(0x12d9ab10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab20 @ 0x12d9ab20 (13 bytes, 6 insns) */
void f_12d9ab20(void) {
  FTRACE(0x12d9ab20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9ab20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9ab21 mov ebp, esp */
  EBP = (ESP);
  /* 12d9ab23 call 0x12d92680 */
  push32(0x12d9ab28u); f_12d92680();
  /* 12d9ab28 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ab2b pop ebp */
  EBP = (pop32());
  /* 12d9ab2c ret  */
  ESPCHK(0x12d9ab20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab30 @ 0x12d9ab30 (664 bytes, 263 insns) [15 switch table(s)] */
void f_12d9ab30(void) {
  FTRACE(0x12d9ab30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9ab30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9ab31 mov ebp, esp */
  EBP = (ESP);
  /* 12d9ab33 push edi */
  push32((uint32_t)(EDI));
  /* 12d9ab34 push esi */
  push32((uint32_t)(ESI));
  /* 12d9ab35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9ab38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9ab3b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ab3e mov eax, ecx */
  EAX = (ECX);
  /* 12d9ab40 mov edx, ecx */
  EDX = (ECX);
  /* 12d9ab42 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ab44 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ab46 jbe 0x12d9ab50 */
  if ((C.cf||C.zf)) goto L_12d9ab50;
  /* 12d9ab48 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ab4a jb 0x12d9acc8 */
  if (C.cf) goto L_12d9acc8;
L_12d9ab50:;
  /* 12d9ab50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d9ab56 jne 0x12d9ab6c */
  if (!C.zf) goto L_12d9ab6c;
  /* 12d9ab58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d9ab5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9ab5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ab61 jb 0x12d9ab8c */
  if (C.cf) goto L_12d9ab8c;
  /* 12d9ab63 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d9ab65 jmp dword ptr [edx*4 + 0x12d9ac78] */
  switch (EDX) {
    case 0: goto L_12d9ac88;
    case 1: goto L_12d9ac90;
    case 2: goto L_12d9ac9c;
    case 3: goto L_12d9acb0;
    default: x86_unimpl("switch@0x12d9ab65 out of table"); return;
  }
L_12d9ab6c:;
  /* 12d9ab6c mov eax, edi */
  EAX = (EDI);
  /* 12d9ab6e mov edx, 3 */
  EDX = (0x3u);
  /* 12d9ab73 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ab76 jb 0x12d9ab84 */
  if (C.cf) goto L_12d9ab84;
  /* 12d9ab78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9ab7b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ab7d jmp dword ptr [eax*4 + 0x12d9ab90] */
  switch (EAX) {
    case 1: goto L_12d9aba0;
    case 2: goto L_12d9abcc;
    case 3: goto L_12d9abf0;
    default: x86_unimpl("switch@0x12d9ab7d out of table"); return;
  }
L_12d9ab84:;
  /* 12d9ab84 jmp dword ptr [ecx*4 + 0x12d9ac88] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12d9ac88)))); return;
  /* 12d9ab8b nop  */
  /* nop */
L_12d9ab8c:;
  /* 12d9ab8c jmp dword ptr [ecx*4 + 0x12d9ac0c] */
  switch (ECX) {
    case 0: goto L_12d9ac6f;
    case 1: goto L_12d9ac5c;
    case 2: goto L_12d9ac54;
    case 3: goto L_12d9ac4c;
    case 4: goto L_12d9ac44;
    case 5: goto L_12d9ac3c;
    case 6: goto L_12d9ac34;
    case 7: goto L_12d9ac2c;
    default: x86_unimpl("switch@0x12d9ab8c out of table"); return;
  }
  /* 12d9ab93 nop  */
  /* nop */
L_12d9aba0:;
  /* 12d9aba0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9aba2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d9aba4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d9aba6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d9aba9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d9abac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d9abaf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d9abb2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d9abb5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9abb8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9abbb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9abbe jb 0x12d9ab8c */
  if (C.cf) goto L_12d9ab8c;
  /* 12d9abc0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d9abc2 jmp dword ptr [edx*4 + 0x12d9ac78] */
  switch (EDX) {
    case 0: goto L_12d9ac88;
    case 1: goto L_12d9ac90;
    case 2: goto L_12d9ac9c;
    case 3: goto L_12d9acb0;
    default: x86_unimpl("switch@0x12d9abc2 out of table"); return;
  }
  /* 12d9abc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d9abcc:;
  /* 12d9abcc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9abce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d9abd0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d9abd2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d9abd5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d9abd8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d9abdb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9abde add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9abe1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9abe4 jb 0x12d9ab8c */
  if (C.cf) goto L_12d9ab8c;
  /* 12d9abe6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d9abe8 jmp dword ptr [edx*4 + 0x12d9ac78] */
  switch (EDX) {
    case 0: goto L_12d9ac88;
    case 1: goto L_12d9ac90;
    case 2: goto L_12d9ac9c;
    case 3: goto L_12d9acb0;
    default: x86_unimpl("switch@0x12d9abe8 out of table"); return;
  }
  /* 12d9abef nop  */
  /* nop */
L_12d9abf0:;
  /* 12d9abf0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9abf2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d9abf4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d9abf6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d9abf7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d9abfa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d9abfb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9abfe jb 0x12d9ab8c */
  if (C.cf) goto L_12d9ab8c;
  /* 12d9ac00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d9ac02 jmp dword ptr [edx*4 + 0x12d9ac78] */
  switch (EDX) {
    case 0: goto L_12d9ac88;
    case 1: goto L_12d9ac90;
    case 2: goto L_12d9ac9c;
    case 3: goto L_12d9acb0;
    default: x86_unimpl("switch@0x12d9ac02 out of table"); return;
  }
  /* 12d9ac09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d9ac2c:;
  /* 12d9ac2c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12d9ac30 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12d9ac34:;
  /* 12d9ac34 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12d9ac38 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12d9ac3c:;
  /* 12d9ac3c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12d9ac40 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12d9ac44:;
  /* 12d9ac44 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12d9ac48 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12d9ac4c:;
  /* 12d9ac4c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12d9ac50 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12d9ac54:;
  /* 12d9ac54 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12d9ac58 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12d9ac5c:;
  /* 12d9ac5c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12d9ac60 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12d9ac64 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12d9ac6b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ac6d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12d9ac6f:;
  /* 12d9ac6f jmp dword ptr [edx*4 + 0x12d9ac78] */
  switch (EDX) {
    case 0: goto L_12d9ac88;
    case 1: goto L_12d9ac90;
    case 2: goto L_12d9ac9c;
    case 3: goto L_12d9acb0;
    default: x86_unimpl("switch@0x12d9ac6f out of table"); return;
  }
  /* 12d9ac76 mov edi, edi */
  EDI = (EDI);
L_12d9ac88:;
  /* 12d9ac88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ac8b pop esi */
  ESI = (pop32());
  /* 12d9ac8c pop edi */
  EDI = (pop32());
  /* 12d9ac8d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d9ac8e ret  */
  ESPCHK(0x12d9ab30u, _esp0);
  ESP += 4; return;
  /* 12d9ac8f nop  */
  /* nop */
L_12d9ac90:;
  /* 12d9ac90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d9ac92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d9ac94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ac97 pop esi */
  ESI = (pop32());
  /* 12d9ac98 pop edi */
  EDI = (pop32());
  /* 12d9ac99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d9ac9a ret  */
  ESPCHK(0x12d9ab30u, _esp0);
  ESP += 4; return;
  /* 12d9ac9b nop  */
  /* nop */
L_12d9ac9c:;
  /* 12d9ac9c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d9ac9e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d9aca0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d9aca3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d9aca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9aca9 pop esi */
  ESI = (pop32());
  /* 12d9acaa pop edi */
  EDI = (pop32());
  /* 12d9acab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d9acac ret  */
  ESPCHK(0x12d9ab30u, _esp0);
  ESP += 4; return;
  /* 12d9acad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d9acb0:;
  /* 12d9acb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d9acb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d9acb4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d9acb7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d9acba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d9acbd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d9acc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9acc3 pop esi */
  ESI = (pop32());
  /* 12d9acc4 pop edi */
  EDI = (pop32());
  /* 12d9acc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d9acc6 ret  */
  ESPCHK(0x12d9ab30u, _esp0);
  ESP += 4; return;
  /* 12d9acc7 nop  */
  /* nop */
L_12d9acc8:;
  /* 12d9acc8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12d9accc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12d9acd0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d9acd6 jne 0x12d9acfc */
  if (!C.zf) goto L_12d9acfc;
  /* 12d9acd8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d9acdb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9acde cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ace1 jb 0x12d9acf0 */
  if (C.cf) goto L_12d9acf0;
  /* 12d9ace3 std  */
  C.df=1;
  /* 12d9ace4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d9ace6 cld  */
  C.df=0;
  /* 12d9ace7 jmp dword ptr [edx*4 + 0x12d9ae10] */
  switch (EDX) {
    case 0: goto L_12d9ae20;
    case 1: goto L_12d9ae28;
    case 2: goto L_12d9ae38;
    case 3: goto L_12d9ae4c;
    default: x86_unimpl("switch@0x12d9ace7 out of table"); return;
  }
  /* 12d9acee mov edi, edi */
  EDI = (EDI);
L_12d9acf0:;
  /* 12d9acf0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9acf2 jmp dword ptr [ecx*4 + 0x12d9adc0] */
  switch (ECX) {
    case 0: goto L_12d9ae07;
    default: x86_unimpl("switch@0x12d9acf2 out of table"); return;
  }
  /* 12d9acf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d9acfc:;
  /* 12d9acfc mov eax, edi */
  EAX = (EDI);
  /* 12d9acfe mov edx, 3 */
  EDX = (0x3u);
  /* 12d9ad03 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ad06 jb 0x12d9ad14 */
  if (C.cf) goto L_12d9ad14;
  /* 12d9ad08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9ad0b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ad0d jmp dword ptr [eax*4 + 0x12d9ad18] */
  switch (EAX) {
    case 1: goto L_12d9ad28;
    case 2: goto L_12d9ad48;
    case 3: goto L_12d9ad70;
    default: x86_unimpl("switch@0x12d9ad0d out of table"); return;
  }
L_12d9ad14:;
  /* 12d9ad14 jmp dword ptr [ecx*4 + 0x12d9ae10] */
  switch (ECX) {
    case 0: goto L_12d9ae20;
    case 1: goto L_12d9ae28;
    case 2: goto L_12d9ae38;
    case 3: goto L_12d9ae4c;
    default: x86_unimpl("switch@0x12d9ad14 out of table"); return;
  }
  /* 12d9ad1b nop  */
  /* nop */
L_12d9ad28:;
  /* 12d9ad28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d9ad2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9ad2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d9ad30 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12d9ad31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d9ad34 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12d9ad35 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ad38 jb 0x12d9acf0 */
  if (C.cf) goto L_12d9acf0;
  /* 12d9ad3a std  */
  C.df=1;
  /* 12d9ad3b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d9ad3d cld  */
  C.df=0;
  /* 12d9ad3e jmp dword ptr [edx*4 + 0x12d9ae10] */
  switch (EDX) {
    case 0: goto L_12d9ae20;
    case 1: goto L_12d9ae28;
    case 2: goto L_12d9ae38;
    case 3: goto L_12d9ae4c;
    default: x86_unimpl("switch@0x12d9ad3e out of table"); return;
  }
  /* 12d9ad45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d9ad48:;
  /* 12d9ad48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d9ad4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9ad4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d9ad50 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d9ad53 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d9ad56 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d9ad59 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ad5c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ad5f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ad62 jb 0x12d9acf0 */
  if (C.cf) goto L_12d9acf0;
  /* 12d9ad64 std  */
  C.df=1;
  /* 12d9ad65 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d9ad67 cld  */
  C.df=0;
  /* 12d9ad68 jmp dword ptr [edx*4 + 0x12d9ae10] */
  switch (EDX) {
    case 0: goto L_12d9ae20;
    case 1: goto L_12d9ae28;
    case 2: goto L_12d9ae38;
    case 3: goto L_12d9ae4c;
    default: x86_unimpl("switch@0x12d9ad68 out of table"); return;
  }
  /* 12d9ad6f nop  */
  /* nop */
L_12d9ad70:;
  /* 12d9ad70 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d9ad73 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9ad75 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d9ad78 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d9ad7b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d9ad7e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d9ad81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d9ad84 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d9ad87 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ad8a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ad8d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ad90 jb 0x12d9acf0 */
  if (C.cf) goto L_12d9acf0;
  /* 12d9ad96 std  */
  C.df=1;
  /* 12d9ad97 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d9ad99 cld  */
  C.df=0;
  /* 12d9ad9a jmp dword ptr [edx*4 + 0x12d9ae10] */
  switch (EDX) {
    case 0: goto L_12d9ae20;
    case 1: goto L_12d9ae28;
    case 2: goto L_12d9ae38;
    case 3: goto L_12d9ae4c;
    default: x86_unimpl("switch@0x12d9ad9a out of table"); return;
  }
  /* 12d9ada1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12d9ada4 les ebp, ptr [ebp - 0x5233ed27] */
  x86_unimpl("les @ 0x12d9ada4");
  /* 12d9adaa fst dword ptr [edx] */
  wf32((uint32_t)(EDX), (float)FPU_ST(0));
  /* 12d9adac aam 0xad */
  x86_unimpl("aam @ 0x12d9adac");
  /* 12d9adae fst dword ptr [edx] */
  wf32((uint32_t)(EDX), (float)FPU_ST(0));
  /* 12d9adb0 fsubr qword ptr [ebp - 0x521bed27] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x521bed27))) - FPU_ST(0);
  /* 12d9adb6 fst dword ptr [edx] */
  wf32((uint32_t)(EDX), (float)FPU_ST(0));
  /* 12d9adb8 in al, dx */
  x86_unimpl("in @ 0x12d9adb8");
  /* 12d9adb9 lodsd eax, dword ptr [esi] */
  EAX = r32(ESI); ESI+=(C.df?-4:4);
  /* 12d9adba fst dword ptr [edx] */
  wf32((uint32_t)(EDX), (float)FPU_ST(0));
  /* 12d9adbc hlt  */
  x86_unimpl("hlt @ 0x12d9adbc");
  /* 12d9adbd lodsd eax, dword ptr [esi] */
  EAX = r32(ESI); ESI+=(C.df?-4:4);
  /* 12d9adbe fst dword ptr [edx] */
  wf32((uint32_t)(EDX), (float)FPU_ST(0));
  /* 12d9adc4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12d9adc8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12d9adcc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12d9add0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12d9add4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12d9add8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12d9addc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12d9ade0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12d9ade4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12d9ade8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12d9adec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12d9adf0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12d9adf4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12d9adf8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12d9adfc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12d9ae03 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ae05 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12d9ae07:;
  /* 12d9ae07 jmp dword ptr [edx*4 + 0x12d9ae10] */
  switch (EDX) {
    case 0: goto L_12d9ae20;
    case 1: goto L_12d9ae28;
    case 2: goto L_12d9ae38;
    case 3: goto L_12d9ae4c;
    default: x86_unimpl("switch@0x12d9ae07 out of table"); return;
  }
  /* 12d9ae0e mov edi, edi */
  EDI = (EDI);
L_12d9ae20:;
  /* 12d9ae20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ae23 pop esi */
  ESI = (pop32());
  /* 12d9ae24 pop edi */
  EDI = (pop32());
  /* 12d9ae25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d9ae26 ret  */
  ESPCHK(0x12d9ab30u, _esp0);
  ESP += 4; return;
  /* 12d9ae27 nop  */
  /* nop */
L_12d9ae28:;
  /* 12d9ae28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d9ae2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d9ae2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ae31 pop esi */
  ESI = (pop32());
  /* 12d9ae32 pop edi */
  EDI = (pop32());
  /* 12d9ae33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d9ae34 ret  */
  ESPCHK(0x12d9ab30u, _esp0);
  ESP += 4; return;
  /* 12d9ae35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d9ae38:;
  /* 12d9ae38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d9ae3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d9ae3e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d9ae41 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d9ae44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ae47 pop esi */
  ESI = (pop32());
  /* 12d9ae48 pop edi */
  EDI = (pop32());
  /* 12d9ae49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d9ae4a ret  */
  ESPCHK(0x12d9ab30u, _esp0);
  ESP += 4; return;
  /* 12d9ae4b nop  */
  /* nop */
L_12d9ae4c:;
  /* 12d9ae4c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d9ae4f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d9ae52 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d9ae55 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d9ae58 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d9ae5b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d9ae5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ae61 pop esi */
  ESI = (pop32());
  /* 12d9ae62 pop edi */
  EDI = (pop32());
  /* 12d9ae63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d9ae64 ret  */
  ESPCHK(0x12d9ab30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae70 @ 0x12d9ae70 (421 bytes, 148 insns) */
void f_12d9ae70(void) {
  FTRACE(0x12d9ae70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9ae70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9ae71 mov ebp, esp */
  EBP = (ESP);
  /* 12d9ae73 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d9ae75 push 0x12da9ec8 */
  push32((uint32_t)(0x12da9ec8u));
  /* 12d9ae7a push 0x12d9bd48 */
  push32((uint32_t)(0x12d9bd48u));
  /* 12d9ae7f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d9ae85 push eax */
  push32((uint32_t)(EAX));
  /* 12d9ae86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d9ae8d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ae90 push ebx */
  push32((uint32_t)(EBX));
  /* 12d9ae91 push esi */
  push32((uint32_t)(ESI));
  /* 12d9ae92 push edi */
  push32((uint32_t)(EDI));
  /* 12d9ae93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d9ae96 cmp dword ptr [0x12dad714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ae9d jne 0x12d9aeee */
  if (!C.zf) goto L_12d9aeee;
  /* 12d9ae9f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12d9aea2 push eax */
  push32((uint32_t)(EAX));
  /* 12d9aea3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9aea5 push 0x12da9ec0 */
  push32((uint32_t)(0x12da9ec0u));
  /* 12d9aeaa push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9aeac call dword ptr [0x12db0354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0354))), 0x12d9aeb2u);
  /* 12d9aeb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9aeb4 je 0x12d9aec2 */
  if (C.zf) goto L_12d9aec2;
  /* 12d9aeb6 mov dword ptr [0x12dad714], 1 */
  w32((uint32_t)(0x12dad714), (0x1u));
  /* 12d9aec0 jmp 0x12d9aeee */
  goto L_12d9aeee;
L_12d9aec2:;
  /* 12d9aec2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12d9aec5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9aec6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9aec8 push 0x12da9ebc */
  push32((uint32_t)(0x12da9ebcu));
  /* 12d9aecd push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9aecf push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9aed1 call dword ptr [0x12db0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0350))), 0x12d9aed7u);
  /* 12d9aed7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9aed9 je 0x12d9aee7 */
  if (C.zf) goto L_12d9aee7;
  /* 12d9aedb mov dword ptr [0x12dad714], 2 */
  w32((uint32_t)(0x12dad714), (0x2u));
  /* 12d9aee5 jmp 0x12d9aeee */
  goto L_12d9aeee;
L_12d9aee7:;
  /* 12d9aee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9aee9 jmp 0x12d9b018 */
  goto L_12d9b018;
L_12d9aeee:;
  /* 12d9aeee cmp dword ptr [0x12dad714], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12dad714))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9aef5 jne 0x12d9af25 */
  if (!C.zf) goto L_12d9af25;
  /* 12d9aef7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9aefb jne 0x12d9af06 */
  if (!C.zf) goto L_12d9af06;
  /* 12d9aefd mov edx, dword ptr [0x12dad720] */
  EDX = (r32((uint32_t)(0x12dad720)));
  /* 12d9af03 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12d9af06:;
  /* 12d9af06 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9af09 push eax */
  push32((uint32_t)(EAX));
  /* 12d9af0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9af0d push ecx */
  push32((uint32_t)(ECX));
  /* 12d9af0e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9af11 push edx */
  push32((uint32_t)(EDX));
  /* 12d9af12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9af15 push eax */
  push32((uint32_t)(EAX));
  /* 12d9af16 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d9af19 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9af1a call dword ptr [0x12db0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0350))), 0x12d9af20u);
  /* 12d9af20 jmp 0x12d9b018 */
  goto L_12d9b018;
L_12d9af25:;
  /* 12d9af25 cmp dword ptr [0x12dad714], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad714))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9af2c jne 0x12d9b016 */
  if (!C.zf) goto L_12d9b016;
  /* 12d9af32 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9af36 jne 0x12d9af41 */
  if (!C.zf) goto L_12d9af41;
  /* 12d9af38 mov edx, dword ptr [0x12dad730] */
  EDX = (r32((uint32_t)(0x12dad730)));
  /* 12d9af3e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12d9af41:;
  /* 12d9af41 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9af43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9af45 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9af48 push eax */
  push32((uint32_t)(EAX));
  /* 12d9af49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9af4c push ecx */
  push32((uint32_t)(ECX));
  /* 12d9af4d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d9af50 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9af52 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9af54 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9af57 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9af5a push edx */
  push32((uint32_t)(EDX));
  /* 12d9af5b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d9af5e push eax */
  push32((uint32_t)(EAX));
  /* 12d9af5f call dword ptr [0x12db034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db034c))), 0x12d9af65u);
  /* 12d9af65 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d9af68 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9af6c jne 0x12d9af75 */
  if (!C.zf) goto L_12d9af75;
  /* 12d9af6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9af70 jmp 0x12d9b018 */
  goto L_12d9b018;
L_12d9af75:;
  /* 12d9af75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d9af7c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9af7f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d9af81 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9af84 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d9af86 call 0x12d95de0 */
  push32(0x12d9af8bu); f_12d95de0();
  /* 12d9af8b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 12d9af8e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d9af91 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9af94 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d9af97 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9af9a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12d9af9c push edx */
  push32((uint32_t)(EDX));
  /* 12d9af9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9af9f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d9afa2 push eax */
  push32((uint32_t)(EAX));
  /* 12d9afa3 call 0x12d969b0 */
  push32(0x12d9afa8u); f_12d969b0();
  /* 12d9afa8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9afab mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d9afb2 jmp 0x12d9afcb */
  goto L_12d9afcb;
  /* 12d9afb4 mov eax, 1 */
  EAX = (0x1u);
  /* 12d9afb9 ret  */
  ESPCHK(0x12d9ae70u, _esp0);
  ESP += 4; return;
  /* 12d9afba mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9afbd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d9afc4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d9afcb:;
  /* 12d9afcb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9afcf jne 0x12d9afd5 */
  if (!C.zf) goto L_12d9afd5;
  /* 12d9afd1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9afd3 jmp 0x12d9b018 */
  goto L_12d9b018;
L_12d9afd5:;
  /* 12d9afd5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9afd8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9afd9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d9afdc push edx */
  push32((uint32_t)(EDX));
  /* 12d9afdd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9afe0 push eax */
  push32((uint32_t)(EAX));
  /* 12d9afe1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9afe4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9afe5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9afe7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d9afea push edx */
  push32((uint32_t)(EDX));
  /* 12d9afeb call dword ptr [0x12db034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db034c))), 0x12d9aff1u);
  /* 12d9aff1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d9aff4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9aff8 jne 0x12d9affe */
  if (!C.zf) goto L_12d9affe;
  /* 12d9affa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9affc jmp 0x12d9b018 */
  goto L_12d9b018;
L_12d9affe:;
  /* 12d9affe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9b001 push eax */
  push32((uint32_t)(EAX));
  /* 12d9b002 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d9b005 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b006 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d9b009 push edx */
  push32((uint32_t)(EDX));
  /* 12d9b00a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b00d push eax */
  push32((uint32_t)(EAX));
  /* 12d9b00e call dword ptr [0x12db0354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0354))), 0x12d9b014u);
  /* 12d9b014 jmp 0x12d9b018 */
  goto L_12d9b018;
L_12d9b016:;
  /* 12d9b016 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d9b018:;
  /* 12d9b018 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12d9b01b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9b01e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d9b025 pop edi */
  EDI = (pop32());
  /* 12d9b026 pop esi */
  ESI = (pop32());
  /* 12d9b027 pop ebx */
  EBX = (pop32());
  /* 12d9b028 mov esp, ebp */
  ESP = (EBP);
  /* 12d9b02a pop ebp */
  EBP = (pop32());
  /* 12d9b02b ret  */
  ESPCHK(0x12d9ae70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b030 @ 0x12d9b030 (727 bytes, 263 insns) */
void f_12d9b030(void) {
  FTRACE(0x12d9b030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9b030 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9b031 mov ebp, esp */
  EBP = (ESP);
  /* 12d9b033 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d9b035 push 0x12da9ed8 */
  push32((uint32_t)(0x12da9ed8u));
  /* 12d9b03a push 0x12d9bd48 */
  push32((uint32_t)(0x12d9bd48u));
  /* 12d9b03f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d9b045 push eax */
  push32((uint32_t)(EAX));
  /* 12d9b046 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d9b04d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b050 push ebx */
  push32((uint32_t)(EBX));
  /* 12d9b051 push esi */
  push32((uint32_t)(ESI));
  /* 12d9b052 push edi */
  push32((uint32_t)(EDI));
  /* 12d9b053 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d9b056 cmp dword ptr [0x12dad738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b05d jne 0x12d9b0b6 */
  if (!C.zf) goto L_12d9b0b6;
  /* 12d9b05f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b061 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b063 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9b065 push 0x12da9ec0 */
  push32((uint32_t)(0x12da9ec0u));
  /* 12d9b06a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d9b06f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b071 call dword ptr [0x12db035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db035c))), 0x12d9b077u);
  /* 12d9b077 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9b079 je 0x12d9b087 */
  if (C.zf) goto L_12d9b087;
  /* 12d9b07b mov dword ptr [0x12dad738], 1 */
  w32((uint32_t)(0x12dad738), (0x1u));
  /* 12d9b085 jmp 0x12d9b0b6 */
  goto L_12d9b0b6;
L_12d9b087:;
  /* 12d9b087 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b089 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b08b push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9b08d push 0x12da9ebc */
  push32((uint32_t)(0x12da9ebcu));
  /* 12d9b092 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d9b097 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b099 call dword ptr [0x12db0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0358))), 0x12d9b09fu);
  /* 12d9b09f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9b0a1 je 0x12d9b0af */
  if (C.zf) goto L_12d9b0af;
  /* 12d9b0a3 mov dword ptr [0x12dad738], 2 */
  w32((uint32_t)(0x12dad738), (0x2u));
  /* 12d9b0ad jmp 0x12d9b0b6 */
  goto L_12d9b0b6;
L_12d9b0af:;
  /* 12d9b0af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b0b1 jmp 0x12d9b321 */
  goto L_12d9b321;
L_12d9b0b6:;
  /* 12d9b0b6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b0ba jle 0x12d9b0cf */
  if ((C.zf||C.sf!=C.of)) goto L_12d9b0cf;
  /* 12d9b0bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9b0bf push eax */
  push32((uint32_t)(EAX));
  /* 12d9b0c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9b0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b0c4 call 0x12d9b340 */
  push32(0x12d9b0c9u); f_12d9b340();
  /* 12d9b0c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b0cc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12d9b0cf:;
  /* 12d9b0cf cmp dword ptr [0x12dad738], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12dad738))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b0d6 jne 0x12d9b0fb */
  if (!C.zf) goto L_12d9b0fb;
  /* 12d9b0d8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d9b0db push edx */
  push32((uint32_t)(EDX));
  /* 12d9b0dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d9b0df push eax */
  push32((uint32_t)(EAX));
  /* 12d9b0e0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9b0e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b0e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9b0e7 push edx */
  push32((uint32_t)(EDX));
  /* 12d9b0e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9b0eb push eax */
  push32((uint32_t)(EAX));
  /* 12d9b0ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b0ef push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b0f0 call dword ptr [0x12db0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0358))), 0x12d9b0f6u);
  /* 12d9b0f6 jmp 0x12d9b321 */
  goto L_12d9b321;
L_12d9b0fb:;
  /* 12d9b0fb cmp dword ptr [0x12dad738], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad738))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b102 jne 0x12d9b31f */
  if (!C.zf) goto L_12d9b31f;
  /* 12d9b108 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b10c jne 0x12d9b117 */
  if (!C.zf) goto L_12d9b117;
  /* 12d9b10e mov edx, dword ptr [0x12dad730] */
  EDX = (r32((uint32_t)(0x12dad730)));
  /* 12d9b114 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12d9b117:;
  /* 12d9b117 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b119 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b11b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9b11e push eax */
  push32((uint32_t)(EAX));
  /* 12d9b11f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9b122 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b123 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12d9b126 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9b128 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9b12a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9b12d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b130 push edx */
  push32((uint32_t)(EDX));
  /* 12d9b131 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d9b134 push eax */
  push32((uint32_t)(EAX));
  /* 12d9b135 call dword ptr [0x12db034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db034c))), 0x12d9b13bu);
  /* 12d9b13b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d9b13e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b142 jne 0x12d9b14b */
  if (!C.zf) goto L_12d9b14b;
  /* 12d9b144 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b146 jmp 0x12d9b321 */
  goto L_12d9b321;
L_12d9b14b:;
  /* 12d9b14b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d9b152 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d9b155 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d9b157 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b15a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d9b15c call 0x12d95de0 */
  push32(0x12d9b161u); f_12d95de0();
  /* 12d9b161 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12d9b164 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d9b167 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9b16a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d9b16d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d9b174 jmp 0x12d9b18d */
  goto L_12d9b18d;
  /* 12d9b176 mov eax, 1 */
  EAX = (0x1u);
  /* 12d9b17b ret  */
  ESPCHK(0x12d9b030u, _esp0);
  ESP += 4; return;
  /* 12d9b17c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9b17f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d9b186 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d9b18d:;
  /* 12d9b18d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b191 jne 0x12d9b19a */
  if (!C.zf) goto L_12d9b19a;
  /* 12d9b193 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b195 jmp 0x12d9b321 */
  goto L_12d9b321;
L_12d9b19a:;
  /* 12d9b19a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d9b19d push edx */
  push32((uint32_t)(EDX));
  /* 12d9b19e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d9b1a1 push eax */
  push32((uint32_t)(EAX));
  /* 12d9b1a2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9b1a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b1a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9b1a9 push edx */
  push32((uint32_t)(EDX));
  /* 12d9b1aa push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9b1ac mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d9b1af push eax */
  push32((uint32_t)(EAX));
  /* 12d9b1b0 call dword ptr [0x12db034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db034c))), 0x12d9b1b6u);
  /* 12d9b1b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9b1b8 jne 0x12d9b1c1 */
  if (!C.zf) goto L_12d9b1c1;
  /* 12d9b1ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b1bc jmp 0x12d9b321 */
  goto L_12d9b321;
L_12d9b1c1:;
  /* 12d9b1c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b1c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b1c5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d9b1c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b1c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d9b1cc push edx */
  push32((uint32_t)(EDX));
  /* 12d9b1cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9b1d0 push eax */
  push32((uint32_t)(EAX));
  /* 12d9b1d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b1d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b1d5 call dword ptr [0x12db035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db035c))), 0x12d9b1dbu);
  /* 12d9b1db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d9b1de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b1e2 jne 0x12d9b1eb */
  if (!C.zf) goto L_12d9b1eb;
  /* 12d9b1e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b1e6 jmp 0x12d9b321 */
  goto L_12d9b321;
L_12d9b1eb:;
  /* 12d9b1eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9b1ee and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9b1f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9b1f6 je 0x12d9b23b */
  if (C.zf) goto L_12d9b23b;
  /* 12d9b1f8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b1fc je 0x12d9b236 */
  if (C.zf) goto L_12d9b236;
  /* 12d9b1fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d9b201 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b204 jle 0x12d9b20d */
  if ((C.zf||C.sf!=C.of)) goto L_12d9b20d;
  /* 12d9b206 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b208 jmp 0x12d9b321 */
  goto L_12d9b321;
L_12d9b20d:;
  /* 12d9b20d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d9b210 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b211 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d9b214 push edx */
  push32((uint32_t)(EDX));
  /* 12d9b215 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d9b218 push eax */
  push32((uint32_t)(EAX));
  /* 12d9b219 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d9b21c push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b21d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9b220 push edx */
  push32((uint32_t)(EDX));
  /* 12d9b221 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b224 push eax */
  push32((uint32_t)(EAX));
  /* 12d9b225 call dword ptr [0x12db035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db035c))), 0x12d9b22bu);
  /* 12d9b22b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9b22d jne 0x12d9b236 */
  if (!C.zf) goto L_12d9b236;
  /* 12d9b22f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b231 jmp 0x12d9b321 */
  goto L_12d9b321;
L_12d9b236:;
  /* 12d9b236 jmp 0x12d9b31a */
  goto L_12d9b31a;
L_12d9b23b:;
  /* 12d9b23b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d9b23e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d9b241 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d9b248 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9b24b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d9b24d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b250 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d9b252 call 0x12d95de0 */
  push32(0x12d9b257u); f_12d95de0();
  /* 12d9b257 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12d9b25a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d9b25d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d9b260 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d9b263 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d9b26a jmp 0x12d9b283 */
  goto L_12d9b283;
  /* 12d9b26c mov eax, 1 */
  EAX = (0x1u);
  /* 12d9b271 ret  */
  ESPCHK(0x12d9b030u, _esp0);
  ESP += 4; return;
  /* 12d9b272 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9b275 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d9b27c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d9b283:;
  /* 12d9b283 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b287 jne 0x12d9b290 */
  if (!C.zf) goto L_12d9b290;
  /* 12d9b289 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b28b jmp 0x12d9b321 */
  goto L_12d9b321;
L_12d9b290:;
  /* 12d9b290 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9b293 push eax */
  push32((uint32_t)(EAX));
  /* 12d9b294 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9b297 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b298 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d9b29b push edx */
  push32((uint32_t)(EDX));
  /* 12d9b29c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d9b29f push eax */
  push32((uint32_t)(EAX));
  /* 12d9b2a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9b2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b2a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b2a7 push edx */
  push32((uint32_t)(EDX));
  /* 12d9b2a8 call dword ptr [0x12db035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db035c))), 0x12d9b2aeu);
  /* 12d9b2ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9b2b0 jne 0x12d9b2b6 */
  if (!C.zf) goto L_12d9b2b6;
  /* 12d9b2b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b2b4 jmp 0x12d9b321 */
  goto L_12d9b321;
L_12d9b2b6:;
  /* 12d9b2b6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b2ba jne 0x12d9b2ea */
  if (!C.zf) goto L_12d9b2ea;
  /* 12d9b2bc push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b2be push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b2c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b2c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b2c4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9b2c7 push eax */
  push32((uint32_t)(EAX));
  /* 12d9b2c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9b2cb push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b2cc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d9b2d1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d9b2d4 push edx */
  push32((uint32_t)(EDX));
  /* 12d9b2d5 call dword ptr [0x12db0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0304))), 0x12d9b2dbu);
  /* 12d9b2db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d9b2de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b2e2 jne 0x12d9b2e8 */
  if (!C.zf) goto L_12d9b2e8;
  /* 12d9b2e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b2e6 jmp 0x12d9b321 */
  goto L_12d9b321;
L_12d9b2e8:;
  /* 12d9b2e8 jmp 0x12d9b31a */
  goto L_12d9b31a;
L_12d9b2ea:;
  /* 12d9b2ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b2ec push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b2ee mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d9b2f1 push eax */
  push32((uint32_t)(EAX));
  /* 12d9b2f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d9b2f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b2f6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9b2f9 push edx */
  push32((uint32_t)(EDX));
  /* 12d9b2fa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9b2fd push eax */
  push32((uint32_t)(EAX));
  /* 12d9b2fe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d9b303 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d9b306 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b307 call dword ptr [0x12db0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0304))), 0x12d9b30du);
  /* 12d9b30d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d9b310 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b314 jne 0x12d9b31a */
  if (!C.zf) goto L_12d9b31a;
  /* 12d9b316 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b318 jmp 0x12d9b321 */
  goto L_12d9b321;
L_12d9b31a:;
  /* 12d9b31a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d9b31d jmp 0x12d9b321 */
  goto L_12d9b321;
L_12d9b31f:;
  /* 12d9b31f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d9b321:;
  /* 12d9b321 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12d9b324 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9b327 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d9b32e pop edi */
  EDI = (pop32());
  /* 12d9b32f pop esi */
  ESI = (pop32());
  /* 12d9b330 pop ebx */
  EBX = (pop32());
  /* 12d9b331 mov esp, ebp */
  ESP = (EBP);
  /* 12d9b333 pop ebp */
  EBP = (pop32());
  /* 12d9b334 ret  */
  ESPCHK(0x12d9b030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b340 @ 0x12d9b340 (80 bytes, 32 insns) */
void f_12d9b340(void) {
  FTRACE(0x12d9b340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9b340 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9b341 mov ebp, esp */
  EBP = (ESP);
  /* 12d9b343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9b346 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9b349 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9b34c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b34f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d9b352:;
  /* 12d9b352 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9b355 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9b358 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9b35b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9b35e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9b360 je 0x12d9b377 */
  if (C.zf) goto L_12d9b377;
  /* 12d9b362 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b365 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d9b368 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9b36a je 0x12d9b377 */
  if (C.zf) goto L_12d9b377;
  /* 12d9b36c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b36f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b372 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9b375 jmp 0x12d9b352 */
  goto L_12d9b352;
L_12d9b377:;
  /* 12d9b377 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b37a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d9b37d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9b37f jne 0x12d9b389 */
  if (!C.zf) goto L_12d9b389;
  /* 12d9b381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b384 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9b387 jmp 0x12d9b38c */
  goto L_12d9b38c;
L_12d9b389:;
  /* 12d9b389 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12d9b38c:;
  /* 12d9b38c mov esp, ebp */
  ESP = (EBP);
  /* 12d9b38e pop ebp */
  EBP = (pop32());
  /* 12d9b38f ret  */
  ESPCHK(0x12d9b340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b390 @ 0x12d9b390 (130 bytes, 43 insns) */
void f_12d9b390(void) {
  FTRACE(0x12d9b390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9b390 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9b391 mov ebp, esp */
  EBP = (ESP);
  /* 12d9b393 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b394 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b397 cmp eax, dword ptr [0x12daf03c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12daf03c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b39d jae 0x12d9b3c1 */
  if (!C.cf) goto L_12d9b3c1;
  /* 12d9b39f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b3a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d9b3a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b3a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9b3ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9b3ae mov eax, dword ptr [ecx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12daef00)));
  /* 12d9b3b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d9b3ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9b3bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9b3bf jne 0x12d9b3dc */
  if (!C.zf) goto L_12d9b3dc;
L_12d9b3c1:;
  /* 12d9b3c1 call 0x12d9ab10 */
  push32(0x12d9b3c6u); f_12d9ab10();
  /* 12d9b3c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d9b3cc call 0x12d9ab20 */
  push32(0x12d9b3d1u); f_12d9ab20();
  /* 12d9b3d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d9b3d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b3da jmp 0x12d9b40e */
  goto L_12d9b40e;
L_12d9b3dc:;
  /* 12d9b3dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b3df push edx */
  push32((uint32_t)(EDX));
  /* 12d9b3e0 call 0x12d9c330 */
  push32(0x12d9b3e5u); f_12d9c330();
  /* 12d9b3e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b3e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9b3eb push eax */
  push32((uint32_t)(EAX));
  /* 12d9b3ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9b3ef push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b3f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b3f3 push edx */
  push32((uint32_t)(EDX));
  /* 12d9b3f4 call 0x12d9b420 */
  push32(0x12d9b3f9u); f_12d9b420();
  /* 12d9b3f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b3fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9b3ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b402 push eax */
  push32((uint32_t)(EAX));
  /* 12d9b403 call 0x12d9c3c0 */
  push32(0x12d9b408u); f_12d9c3c0();
  /* 12d9b408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b40b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d9b40e:;
  /* 12d9b40e mov esp, ebp */
  ESP = (EBP);
  /* 12d9b410 pop ebp */
  EBP = (pop32());
  /* 12d9b411 ret  */
  ESPCHK(0x12d9b390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b420 @ 0x12d9b420 (178 bytes, 56 insns) */
void f_12d9b420(void) {
  FTRACE(0x12d9b420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9b420 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9b421 mov ebp, esp */
  EBP = (ESP);
  /* 12d9b423 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9b426 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b429 push eax */
  push32((uint32_t)(EAX));
  /* 12d9b42a call 0x12d9c1b0 */
  push32(0x12d9b42fu); f_12d9c1b0();
  /* 12d9b42f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b432 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d9b435 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b439 jne 0x12d9b44e */
  if (!C.zf) goto L_12d9b44e;
  /* 12d9b43b call 0x12d9ab10 */
  push32(0x12d9b440u); f_12d9ab10();
  /* 12d9b440 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d9b446 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b449 jmp 0x12d9b4ce */
  goto L_12d9b4ce;
L_12d9b44e:;
  /* 12d9b44e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9b451 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b452 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b454 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9b457 push edx */
  push32((uint32_t)(EDX));
  /* 12d9b458 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9b45b push eax */
  push32((uint32_t)(EAX));
  /* 12d9b45c call dword ptr [0x12db02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02f0))), 0x12d9b462u);
  /* 12d9b462 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9b465 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b469 jne 0x12d9b476 */
  if (!C.zf) goto L_12d9b476;
  /* 12d9b46b call dword ptr [0x12db02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02d8))), 0x12d9b471u);
  /* 12d9b471 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9b474 jmp 0x12d9b47d */
  goto L_12d9b47d;
L_12d9b476:;
  /* 12d9b476 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d9b47d:;
  /* 12d9b47d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b481 je 0x12d9b494 */
  if (C.zf) goto L_12d9b494;
  /* 12d9b483 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b486 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b487 call 0x12d9aa70 */
  push32(0x12d9b48cu); f_12d9aa70();
  /* 12d9b48c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b48f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b492 jmp 0x12d9b4ce */
  goto L_12d9b4ce;
L_12d9b494:;
  /* 12d9b494 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b497 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12d9b49a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b49d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b4a0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9b4a3 mov ecx, dword ptr [edx*4 + 0x12daef00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12daef00)));
  /* 12d9b4aa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12d9b4ae and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12d9b4b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b4b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d9b4b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b4ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d9b4bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9b4c0 mov eax, dword ptr [eax*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12daef00)));
  /* 12d9b4c7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12d9b4cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d9b4ce:;
  /* 12d9b4ce mov esp, ebp */
  ESP = (EBP);
  /* 12d9b4d0 pop ebp */
  EBP = (pop32());
  /* 12d9b4d1 ret  */
  ESPCHK(0x12d9b420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4e0 @ 0x12d9b4e0 (130 bytes, 43 insns) */
void f_12d9b4e0(void) {
  FTRACE(0x12d9b4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9b4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9b4e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9b4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b4e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b4e7 cmp eax, dword ptr [0x12daf03c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12daf03c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b4ed jae 0x12d9b511 */
  if (!C.cf) goto L_12d9b511;
  /* 12d9b4ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b4f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d9b4f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b4f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9b4fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9b4fe mov eax, dword ptr [ecx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12daef00)));
  /* 12d9b505 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d9b50a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9b50d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9b50f jne 0x12d9b52c */
  if (!C.zf) goto L_12d9b52c;
L_12d9b511:;
  /* 12d9b511 call 0x12d9ab10 */
  push32(0x12d9b516u); f_12d9ab10();
  /* 12d9b516 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d9b51c call 0x12d9ab20 */
  push32(0x12d9b521u); f_12d9ab20();
  /* 12d9b521 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d9b527 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b52a jmp 0x12d9b55e */
  goto L_12d9b55e;
L_12d9b52c:;
  /* 12d9b52c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b52f push edx */
  push32((uint32_t)(EDX));
  /* 12d9b530 call 0x12d9c330 */
  push32(0x12d9b535u); f_12d9c330();
  /* 12d9b535 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b538 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9b53b push eax */
  push32((uint32_t)(EAX));
  /* 12d9b53c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9b53f push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b540 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b543 push edx */
  push32((uint32_t)(EDX));
  /* 12d9b544 call 0x12d9b570 */
  push32(0x12d9b549u); f_12d9b570();
  /* 12d9b549 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b54c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9b54f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b552 push eax */
  push32((uint32_t)(EAX));
  /* 12d9b553 call 0x12d9c3c0 */
  push32(0x12d9b558u); f_12d9c3c0();
  /* 12d9b558 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b55b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d9b55e:;
  /* 12d9b55e mov esp, ebp */
  ESP = (EBP);
  /* 12d9b560 pop ebp */
  EBP = (pop32());
  /* 12d9b561 ret  */
  ESPCHK(0x12d9b4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b570 @ 0x12d9b570 (627 bytes, 182 insns) */
void f_12d9b570(void) {
  FTRACE(0x12d9b570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9b570 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9b571 mov ebp, esp */
  EBP = (ESP);
  /* 12d9b573 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9b579 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d9b580 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9b583 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12d9b589 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b58d jne 0x12d9b596 */
  if (!C.zf) goto L_12d9b596;
  /* 12d9b58f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b591 jmp 0x12d9b7df */
  goto L_12d9b7df;
L_12d9b596:;
  /* 12d9b596 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b599 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d9b59c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b59f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9b5a2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9b5a5 mov eax, dword ptr [ecx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12daef00)));
  /* 12d9b5ac movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d9b5b1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9b5b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9b5b6 je 0x12d9b5c8 */
  if (C.zf) goto L_12d9b5c8;
  /* 12d9b5b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9b5ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b5bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b5bf push edx */
  push32((uint32_t)(EDX));
  /* 12d9b5c0 call 0x12d9b420 */
  push32(0x12d9b5c5u); f_12d9b420();
  /* 12d9b5c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9b5c8:;
  /* 12d9b5c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b5cb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d9b5ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b5d1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d9b5d4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9b5d7 mov edx, dword ptr [eax*4 + 0x12daef00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12daef00)));
  /* 12d9b5de movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12d9b5e3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b5e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9b5ea je 0x12d9b6fc */
  if (C.zf) goto L_12d9b6fc;
  /* 12d9b5f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9b5f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d9b5f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12d9b5fd:;
  /* 12d9b5fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b600 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9b603 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b606 jae 0x12d9b6fa */
  if (!C.cf) goto L_12d9b6fa;
  /* 12d9b60c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12d9b612 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d9b615:;
  /* 12d9b615 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9b618 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12d9b61e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9b620 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b626 jge 0x12d9b687 */
  if ((C.sf==C.of)) goto L_12d9b687;
  /* 12d9b628 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b62b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9b62e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b631 jae 0x12d9b687 */
  if (!C.cf) goto L_12d9b687;
  /* 12d9b633 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b636 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d9b638 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12d9b63e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b641 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b644 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9b647 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12d9b64e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b651 jne 0x12d9b671 */
  if (!C.zf) goto L_12d9b671;
  /* 12d9b653 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12d9b659 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b65c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12d9b662 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9b665 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12d9b668 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9b66b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b66e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d9b671:;
  /* 12d9b671 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9b674 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12d9b67a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12d9b67c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9b67f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b682 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9b685 jmp 0x12d9b615 */
  goto L_12d9b615;
L_12d9b687:;
  /* 12d9b687 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b689 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12d9b68f push edx */
  push32((uint32_t)(EDX));
  /* 12d9b690 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9b693 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12d9b699 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9b69b push eax */
  push32((uint32_t)(EAX));
  /* 12d9b69c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12d9b6a2 push edx */
  push32((uint32_t)(EDX));
  /* 12d9b6a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b6a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d9b6a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b6ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d9b6af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9b6b2 mov edx, dword ptr [eax*4 + 0x12daef00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12daef00)));
  /* 12d9b6b9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12d9b6bc push eax */
  push32((uint32_t)(EAX));
  /* 12d9b6bd call dword ptr [0x12db0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0298))), 0x12d9b6c3u);
  /* 12d9b6c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9b6c5 je 0x12d9b6ea */
  if (C.zf) goto L_12d9b6ea;
  /* 12d9b6c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9b6ca add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b6d0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d9b6d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9b6d6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12d9b6dc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9b6de cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b6e4 jge 0x12d9b6e8 */
  if ((C.sf==C.of)) goto L_12d9b6e8;
  /* 12d9b6e6 jmp 0x12d9b6fa */
  goto L_12d9b6fa;
L_12d9b6e8:;
  /* 12d9b6e8 jmp 0x12d9b6f5 */
  goto L_12d9b6f5;
L_12d9b6ea:;
  /* 12d9b6ea call dword ptr [0x12db02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02d8))), 0x12d9b6f0u);
  /* 12d9b6f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d9b6f3 jmp 0x12d9b6fa */
  goto L_12d9b6fa;
L_12d9b6f5:;
  /* 12d9b6f5 jmp 0x12d9b5fd */
  goto L_12d9b5fd;
L_12d9b6fa:;
  /* 12d9b6fa jmp 0x12d9b74c */
  goto L_12d9b74c;
L_12d9b6fc:;
  /* 12d9b6fc push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b6fe lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12d9b704 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b705 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9b708 push edx */
  push32((uint32_t)(EDX));
  /* 12d9b709 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9b70c push eax */
  push32((uint32_t)(EAX));
  /* 12d9b70d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b710 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d9b713 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b716 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9b719 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9b71c mov eax, dword ptr [ecx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12daef00)));
  /* 12d9b723 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12d9b726 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b727 call dword ptr [0x12db0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0298))), 0x12d9b72du);
  /* 12d9b72d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9b72f je 0x12d9b743 */
  if (C.zf) goto L_12d9b743;
  /* 12d9b731 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d9b738 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12d9b73e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d9b741 jmp 0x12d9b74c */
  goto L_12d9b74c;
L_12d9b743:;
  /* 12d9b743 call dword ptr [0x12db02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02d8))), 0x12d9b749u);
  /* 12d9b749 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d9b74c:;
  /* 12d9b74c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b750 jne 0x12d9b7d6 */
  if (!C.zf) goto L_12d9b7d6;
  /* 12d9b756 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b75a je 0x12d9b78a */
  if (C.zf) goto L_12d9b78a;
  /* 12d9b75c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b760 jne 0x12d9b779 */
  if (!C.zf) goto L_12d9b779;
  /* 12d9b762 call 0x12d9ab10 */
  push32(0x12d9b767u); f_12d9ab10();
  /* 12d9b767 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d9b76d call 0x12d9ab20 */
  push32(0x12d9b772u); f_12d9ab20();
  /* 12d9b772 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9b775 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d9b777 jmp 0x12d9b785 */
  goto L_12d9b785;
L_12d9b779:;
  /* 12d9b779 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9b77c push edx */
  push32((uint32_t)(EDX));
  /* 12d9b77d call 0x12d9aa70 */
  push32(0x12d9b782u); f_12d9aa70();
  /* 12d9b782 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9b785:;
  /* 12d9b785 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b788 jmp 0x12d9b7df */
  goto L_12d9b7df;
L_12d9b78a:;
  /* 12d9b78a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b78d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d9b790 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b793 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d9b796 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9b799 mov edx, dword ptr [eax*4 + 0x12daef00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12daef00)));
  /* 12d9b7a0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12d9b7a5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b7a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9b7aa je 0x12d9b7bb */
  if (C.zf) goto L_12d9b7bb;
  /* 12d9b7ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9b7af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d9b7b2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b7b5 jne 0x12d9b7bb */
  if (!C.zf) goto L_12d9b7bb;
  /* 12d9b7b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b7b9 jmp 0x12d9b7df */
  goto L_12d9b7df;
L_12d9b7bb:;
  /* 12d9b7bb call 0x12d9ab10 */
  push32(0x12d9b7c0u); f_12d9ab10();
  /* 12d9b7c0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12d9b7c6 call 0x12d9ab20 */
  push32(0x12d9b7cbu); f_12d9ab20();
  /* 12d9b7cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d9b7d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b7d4 jmp 0x12d9b7df */
  goto L_12d9b7df;
L_12d9b7d6:;
  /* 12d9b7d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9b7d9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12d9b7df:;
  /* 12d9b7df mov esp, ebp */
  ESP = (EBP);
  /* 12d9b7e1 pop ebp */
  EBP = (pop32());
  /* 12d9b7e2 ret  */
  ESPCHK(0x12d9b570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7f0 @ 0x12d9b7f0 (199 bytes, 68 insns) */
void f_12d9b7f0(void) {
  FTRACE(0x12d9b7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9b7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9b7f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9b7f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b7f4 push ebx */
  push32((uint32_t)(EBX));
  /* 12d9b7f5 push esi */
  push32((uint32_t)(ESI));
  /* 12d9b7f6 push edi */
  push32((uint32_t)(EDI));
L_12d9b7f7:;
  /* 12d9b7f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b7fb jne 0x12d9b81b */
  if (!C.zf) goto L_12d9b81b;
  /* 12d9b7fd push 0x12da9e20 */
  push32((uint32_t)(0x12da9e20u));
  /* 12d9b802 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9b804 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12d9b806 push 0x12da9ef0 */
  push32((uint32_t)(0x12da9ef0u));
  /* 12d9b80b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9b80d call 0x12d91d00 */
  push32(0x12d9b812u); f_12d91d00();
  /* 12d9b812 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b815 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b818 jne 0x12d9b81b */
  if (!C.zf) goto L_12d9b81b;
  /* 12d9b81a int3  */
  x86_unimpl("int3 @ 0x12d9b81a");
L_12d9b81b:;
  /* 12d9b81b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b81d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9b81f jne 0x12d9b7f7 */
  if (!C.zf) goto L_12d9b7f7;
  /* 12d9b821 mov ecx, dword ptr [0x12dad73c] */
  ECX = (r32((uint32_t)(0x12dad73c)));
  /* 12d9b827 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b82a mov dword ptr [0x12dad73c], ecx */
  w32((uint32_t)(0x12dad73c), (ECX));
  /* 12d9b830 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b833 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d9b836 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12d9b838 push 0x12da9ef0 */
  push32((uint32_t)(0x12da9ef0u));
  /* 12d9b83d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9b83f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12d9b844 call 0x12d92c40 */
  push32(0x12d9b849u); f_12d92c40();
  /* 12d9b849 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b84c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b84f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12d9b852 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b855 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b859 je 0x12d9b876 */
  if (C.zf) goto L_12d9b876;
  /* 12d9b85b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b85e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d9b861 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9b864 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b867 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12d9b86a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b86d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12d9b874 jmp 0x12d9b89b */
  goto L_12d9b89b;
L_12d9b876:;
  /* 12d9b876 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b879 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d9b87c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9b87f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b882 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d9b885 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b888 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b88b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b88e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d9b891 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b894 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12d9b89b:;
  /* 12d9b89b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b89e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b8a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d9b8a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d9b8a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b8a9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12d9b8b0 pop edi */
  EDI = (pop32());
  /* 12d9b8b1 pop esi */
  ESI = (pop32());
  /* 12d9b8b2 pop ebx */
  EBX = (pop32());
  /* 12d9b8b3 mov esp, ebp */
  ESP = (EBP);
  /* 12d9b8b5 pop ebp */
  EBP = (pop32());
  /* 12d9b8b6 ret  */
  ESPCHK(0x12d9b7f0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12d9b8c0 (50 bytes, 17 insns) */
void f_12d9b8c0(void) {
  FTRACE(0x12d9b8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9b8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9b8c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9b8c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b8c6 cmp eax, dword ptr [0x12daf03c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12daf03c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b8cc jb 0x12d9b8d2 */
  if (C.cf) goto L_12d9b8d2;
  /* 12d9b8ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9b8d0 jmp 0x12d9b8f0 */
  goto L_12d9b8f0;
L_12d9b8d2:;
  /* 12d9b8d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b8d5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d9b8d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9b8db and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9b8de imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9b8e1 mov eax, dword ptr [ecx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12daef00)));
  /* 12d9b8e8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d9b8ed and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12d9b8f0:;
  /* 12d9b8f0 pop ebp */
  EBP = (pop32());
  /* 12d9b8f1 ret  */
  ESPCHK(0x12d9b8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b900 @ 0x12d9b900 (300 bytes, 80 insns) */
void f_12d9b900(void) {
  FTRACE(0x12d9b900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9b900 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9b901 mov ebp, esp */
  EBP = (ESP);
  /* 12d9b903 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b904 cmp dword ptr [0x12daec00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daec00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b90b jne 0x12d9b919 */
  if (!C.zf) goto L_12d9b919;
  /* 12d9b90d mov dword ptr [0x12daec00], 0x200 */
  w32((uint32_t)(0x12daec00), (0x200u));
  /* 12d9b917 jmp 0x12d9b92c */
  goto L_12d9b92c;
L_12d9b919:;
  /* 12d9b919 cmp dword ptr [0x12daec00], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12daec00))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b920 jge 0x12d9b92c */
  if ((C.sf==C.of)) goto L_12d9b92c;
  /* 12d9b922 mov dword ptr [0x12daec00], 0x14 */
  w32((uint32_t)(0x12daec00), (0x14u));
L_12d9b92c:;
  /* 12d9b92c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12d9b931 push 0x12da9efc */
  push32((uint32_t)(0x12da9efcu));
  /* 12d9b936 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9b938 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d9b93a mov eax, dword ptr [0x12daec00] */
  EAX = (r32((uint32_t)(0x12daec00)));
  /* 12d9b93f push eax */
  push32((uint32_t)(EAX));
  /* 12d9b940 call 0x12d93050 */
  push32(0x12d9b945u); f_12d93050();
  /* 12d9b945 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b948 mov dword ptr [0x12dad8b0], eax */
  w32((uint32_t)(0x12dad8b0), (EAX));
  /* 12d9b94d cmp dword ptr [0x12dad8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b954 jne 0x12d9b995 */
  if (!C.zf) goto L_12d9b995;
  /* 12d9b956 mov dword ptr [0x12daec00], 0x14 */
  w32((uint32_t)(0x12daec00), (0x14u));
  /* 12d9b960 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12d9b965 push 0x12da9efc */
  push32((uint32_t)(0x12da9efcu));
  /* 12d9b96a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9b96c push 4 */
  push32((uint32_t)(0x4u));
  /* 12d9b96e mov ecx, dword ptr [0x12daec00] */
  ECX = (r32((uint32_t)(0x12daec00)));
  /* 12d9b974 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9b975 call 0x12d93050 */
  push32(0x12d9b97au); f_12d93050();
  /* 12d9b97a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b97d mov dword ptr [0x12dad8b0], eax */
  w32((uint32_t)(0x12dad8b0), (EAX));
  /* 12d9b982 cmp dword ptr [0x12dad8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b989 jne 0x12d9b995 */
  if (!C.zf) goto L_12d9b995;
  /* 12d9b98b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12d9b98d call 0x12d91bb0 */
  push32(0x12d9b992u); f_12d91bb0();
  /* 12d9b992 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9b995:;
  /* 12d9b995 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d9b99c jmp 0x12d9b9a7 */
  goto L_12d9b9a7;
L_12d9b99e:;
  /* 12d9b99e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b9a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b9a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d9b9a7:;
  /* 12d9b9a7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b9ab jge 0x12d9b9c6 */
  if ((C.sf==C.of)) goto L_12d9b9c6;
  /* 12d9b9ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b9b0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d9b9b3 add eax, 0x12dac1e0 */
  { uint32_t _a=(EAX),_b=(0x12dac1e0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b9b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b9bb mov edx, dword ptr [0x12dad8b0] */
  EDX = (r32((uint32_t)(0x12dad8b0)));
  /* 12d9b9c1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12d9b9c4 jmp 0x12d9b99e */
  goto L_12d9b99e;
L_12d9b9c6:;
  /* 12d9b9c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d9b9cd jmp 0x12d9b9d8 */
  goto L_12d9b9d8;
L_12d9b9cf:;
  /* 12d9b9cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b9d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9b9d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d9b9d8:;
  /* 12d9b9d8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b9dc jge 0x12d9ba28 */
  if ((C.sf==C.of)) goto L_12d9ba28;
  /* 12d9b9de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b9e1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d9b9e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b9e7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9b9ea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9b9ed mov eax, dword ptr [ecx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12daef00)));
  /* 12d9b9f4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9b9f8 je 0x12d9ba16 */
  if (C.zf) goto L_12d9ba16;
  /* 12d9b9fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9b9fd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d9ba00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9ba03 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9ba06 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9ba09 mov eax, dword ptr [ecx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12daef00)));
  /* 12d9ba10 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ba14 jne 0x12d9ba26 */
  if (!C.zf) goto L_12d9ba26;
L_12d9ba16:;
  /* 12d9ba16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9ba19 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d9ba1c mov dword ptr [ecx + 0x12dac1f0], 0xffffffff */
  w32((uint32_t)(ECX + 0x12dac1f0), (0xffffffffu));
L_12d9ba26:;
  /* 12d9ba26 jmp 0x12d9b9cf */
  goto L_12d9b9cf;
L_12d9ba28:;
  /* 12d9ba28 mov esp, ebp */
  ESP = (EBP);
  /* 12d9ba2a pop ebp */
  EBP = (pop32());
  /* 12d9ba2b ret  */
  ESPCHK(0x12d9b900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba30 @ 0x12d9ba30 (26 bytes, 9 insns) */
void f_12d9ba30(void) {
  FTRACE(0x12d9ba30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9ba30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9ba31 mov ebp, esp */
  EBP = (ESP);
  /* 12d9ba33 call 0x12d9c630 */
  push32(0x12d9ba38u); f_12d9c630();
  /* 12d9ba38 movsx eax, byte ptr [0x12dad554] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12dad554))));
  /* 12d9ba3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9ba41 je 0x12d9ba48 */
  if (C.zf) goto L_12d9ba48;
  /* 12d9ba43 call 0x12d9c3f0 */
  push32(0x12d9ba48u); f_12d9c3f0();
L_12d9ba48:;
  /* 12d9ba48 pop ebp */
  EBP = (pop32());
  /* 12d9ba49 ret  */
  ESPCHK(0x12d9ba30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba50 @ 0x12d9ba50 (61 bytes, 20 insns) */
void f_12d9ba50(void) {
  FTRACE(0x12d9ba50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9ba50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9ba51 mov ebp, esp */
  EBP = (ESP);
  /* 12d9ba53 cmp dword ptr [ebp + 8], 0x12dac1e0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12dac1e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ba5a jb 0x12d9ba7e */
  if (C.cf) goto L_12d9ba7e;
  /* 12d9ba5c cmp dword ptr [ebp + 8], 0x12dac440 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12dac440u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ba63 ja 0x12d9ba7e */
  if ((!C.cf&&!C.zf)) goto L_12d9ba7e;
  /* 12d9ba65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ba68 sub eax, 0x12dac1e0 */
  { uint32_t _a=(EAX),_b=(0x12dac1e0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ba6d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d9ba70 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ba73 push eax */
  push32((uint32_t)(EAX));
  /* 12d9ba74 call 0x12d96640 */
  push32(0x12d9ba79u); f_12d96640();
  /* 12d9ba79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ba7c jmp 0x12d9ba8b */
  goto L_12d9ba8b;
L_12d9ba7e:;
  /* 12d9ba7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ba81 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ba84 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9ba85 call dword ptr [0x12db0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0328))), 0x12d9ba8bu);
L_12d9ba8b:;
  /* 12d9ba8b pop ebp */
  EBP = (pop32());
  /* 12d9ba8c ret  */
  ESPCHK(0x12d9ba50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba90 @ 0x12d9ba90 (41 bytes, 16 insns) */
void f_12d9ba90(void) {
  FTRACE(0x12d9ba90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9ba90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9ba91 mov ebp, esp */
  EBP = (ESP);
  /* 12d9ba93 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ba97 jge 0x12d9baaa */
  if ((C.sf==C.of)) goto L_12d9baaa;
  /* 12d9ba99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ba9c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ba9f push eax */
  push32((uint32_t)(EAX));
  /* 12d9baa0 call 0x12d96640 */
  push32(0x12d9baa5u); f_12d96640();
  /* 12d9baa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9baa8 jmp 0x12d9bab7 */
  goto L_12d9bab7;
L_12d9baaa:;
  /* 12d9baaa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9baad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bab0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9bab1 call dword ptr [0x12db0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0328))), 0x12d9bab7u);
L_12d9bab7:;
  /* 12d9bab7 pop ebp */
  EBP = (pop32());
  /* 12d9bab8 ret  */
  ESPCHK(0x12d9ba90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bac0 @ 0x12d9bac0 (61 bytes, 20 insns) */
void f_12d9bac0(void) {
  FTRACE(0x12d9bac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9bac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9bac1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9bac3 cmp dword ptr [ebp + 8], 0x12dac1e0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12dac1e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9baca jb 0x12d9baee */
  if (C.cf) goto L_12d9baee;
  /* 12d9bacc cmp dword ptr [ebp + 8], 0x12dac440 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12dac440u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bad3 ja 0x12d9baee */
  if ((!C.cf&&!C.zf)) goto L_12d9baee;
  /* 12d9bad5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9bad8 sub eax, 0x12dac1e0 */
  { uint32_t _a=(EAX),_b=(0x12dac1e0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9badd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d9bae0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bae3 push eax */
  push32((uint32_t)(EAX));
  /* 12d9bae4 call 0x12d966e0 */
  push32(0x12d9bae9u); f_12d966e0();
  /* 12d9bae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9baec jmp 0x12d9bafb */
  goto L_12d9bafb;
L_12d9baee:;
  /* 12d9baee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9baf1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9baf4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9baf5 call dword ptr [0x12db02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02f4))), 0x12d9bafbu);
L_12d9bafb:;
  /* 12d9bafb pop ebp */
  EBP = (pop32());
  /* 12d9bafc ret  */
  ESPCHK(0x12d9bac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb00 @ 0x12d9bb00 (41 bytes, 16 insns) */
void f_12d9bb00(void) {
  FTRACE(0x12d9bb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9bb00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9bb01 mov ebp, esp */
  EBP = (ESP);
  /* 12d9bb03 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bb07 jge 0x12d9bb1a */
  if ((C.sf==C.of)) goto L_12d9bb1a;
  /* 12d9bb09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9bb0c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bb0f push eax */
  push32((uint32_t)(EAX));
  /* 12d9bb10 call 0x12d966e0 */
  push32(0x12d9bb15u); f_12d966e0();
  /* 12d9bb15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bb18 jmp 0x12d9bb27 */
  goto L_12d9bb27;
L_12d9bb1a:;
  /* 12d9bb1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9bb1d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bb20 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9bb21 call dword ptr [0x12db02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02f4))), 0x12d9bb27u);
L_12d9bb27:;
  /* 12d9bb27 pop ebp */
  EBP = (pop32());
  /* 12d9bb28 ret  */
  ESPCHK(0x12d9bb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb30 @ 0x12d9bb30 (119 bytes, 34 insns) */
void f_12d9bb30(void) {
  FTRACE(0x12d9bb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9bb30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9bb31 mov ebp, esp */
  EBP = (ESP);
  /* 12d9bb33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9bb36 push 0x12dad8ac */
  push32((uint32_t)(0x12dad8acu));
  /* 12d9bb3b call dword ptr [0x12db02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02ac))), 0x12d9bb41u);
  /* 12d9bb41 cmp dword ptr [0x12dad89c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad89c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bb48 je 0x12d9bb68 */
  if (C.zf) goto L_12d9bb68;
  /* 12d9bb4a push 0x12dad8ac */
  push32((uint32_t)(0x12dad8acu));
  /* 12d9bb4f call dword ptr [0x12db029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db029c))), 0x12d9bb55u);
  /* 12d9bb55 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d9bb57 call 0x12d96640 */
  push32(0x12d9bb5cu); f_12d96640();
  /* 12d9bb5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bb5f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d9bb66 jmp 0x12d9bb6f */
  goto L_12d9bb6f;
L_12d9bb68:;
  /* 12d9bb68 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d9bb6f:;
  /* 12d9bb6f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12d9bb73 push eax */
  push32((uint32_t)(EAX));
  /* 12d9bb74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9bb77 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9bb78 call 0x12d9bbb0 */
  push32(0x12d9bb7du); f_12d9bbb0();
  /* 12d9bb7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bb80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9bb83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bb87 je 0x12d9bb95 */
  if (C.zf) goto L_12d9bb95;
  /* 12d9bb89 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d9bb8b call 0x12d966e0 */
  push32(0x12d9bb90u); f_12d966e0();
  /* 12d9bb90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bb93 jmp 0x12d9bba0 */
  goto L_12d9bba0;
L_12d9bb95:;
  /* 12d9bb95 push 0x12dad8ac */
  push32((uint32_t)(0x12dad8acu));
  /* 12d9bb9a call dword ptr [0x12db029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db029c))), 0x12d9bba0u);
L_12d9bba0:;
  /* 12d9bba0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9bba3 mov esp, ebp */
  ESP = (EBP);
  /* 12d9bba5 pop ebp */
  EBP = (pop32());
  /* 12d9bba6 ret  */
  ESPCHK(0x12d9bb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbb0 @ 0x12d9bbb0 (160 bytes, 50 insns) */
void f_12d9bbb0(void) {
  FTRACE(0x12d9bbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9bbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9bbb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9bbb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9bbb6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bbba jne 0x12d9bbc3 */
  if (!C.zf) goto L_12d9bbc3;
  /* 12d9bbbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9bbbe jmp 0x12d9bc4c */
  goto L_12d9bc4c;
L_12d9bbc3:;
  /* 12d9bbc3 cmp dword ptr [0x12dad720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bbca jne 0x12d9bbfa */
  if (!C.zf) goto L_12d9bbfa;
  /* 12d9bbcc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9bbcf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9bbd4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bbd9 jle 0x12d9bbeb */
  if ((C.zf||C.sf!=C.of)) goto L_12d9bbeb;
  /* 12d9bbdb call 0x12d9ab10 */
  push32(0x12d9bbe0u); f_12d9ab10();
  /* 12d9bbe0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12d9bbe6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9bbe9 jmp 0x12d9bc4c */
  goto L_12d9bc4c;
L_12d9bbeb:;
  /* 12d9bbeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9bbee mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12d9bbf1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12d9bbf3 mov eax, 1 */
  EAX = (0x1u);
  /* 12d9bbf8 jmp 0x12d9bc4c */
  goto L_12d9bc4c;
L_12d9bbfa:;
  /* 12d9bbfa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d9bc01 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12d9bc04 push eax */
  push32((uint32_t)(EAX));
  /* 12d9bc05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9bc07 mov ecx, dword ptr [0x12dabf64] */
  ECX = (r32((uint32_t)(0x12dabf64)));
  /* 12d9bc0d push ecx */
  push32((uint32_t)(ECX));
  /* 12d9bc0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9bc11 push edx */
  push32((uint32_t)(EDX));
  /* 12d9bc12 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9bc14 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12d9bc17 push eax */
  push32((uint32_t)(EAX));
  /* 12d9bc18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d9bc1d mov ecx, dword ptr [0x12dad730] */
  ECX = (r32((uint32_t)(0x12dad730)));
  /* 12d9bc23 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9bc24 call dword ptr [0x12db0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0304))), 0x12d9bc2au);
  /* 12d9bc2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9bc2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bc31 je 0x12d9bc39 */
  if (C.zf) goto L_12d9bc39;
  /* 12d9bc33 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bc37 je 0x12d9bc49 */
  if (C.zf) goto L_12d9bc49;
L_12d9bc39:;
  /* 12d9bc39 call 0x12d9ab10 */
  push32(0x12d9bc3eu); f_12d9ab10();
  /* 12d9bc3e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12d9bc44 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9bc47 jmp 0x12d9bc4c */
  goto L_12d9bc4c;
L_12d9bc49:;
  /* 12d9bc49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d9bc4c:;
  /* 12d9bc4c mov esp, ebp */
  ESP = (EBP);
  /* 12d9bc4e pop ebp */
  EBP = (pop32());
  /* 12d9bc4f ret  */
  ESPCHK(0x12d9bbb0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12d9bc50 (32 bytes, 18 insns) */
void f_12d9bc50(void) {
  FTRACE(0x12d9bc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9bc50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9bc51 mov ebp, esp */
  EBP = (ESP);
  /* 12d9bc53 push ebx */
  push32((uint32_t)(EBX));
  /* 12d9bc54 push esi */
  push32((uint32_t)(ESI));
  /* 12d9bc55 push edi */
  push32((uint32_t)(EDI));
  /* 12d9bc56 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9bc57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9bc59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9bc5b push 0x12d9bc68 */
  push32((uint32_t)(0x12d9bc68u));
  /* 12d9bc60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12d9bc63 call 0x12da339c */
  push32(0x12d9bc68u); f_12da339c();
  /* 12d9bc68 pop ebp */
  EBP = (pop32());
  /* 12d9bc69 pop edi */
  EDI = (pop32());
  /* 12d9bc6a pop esi */
  ESI = (pop32());
  /* 12d9bc6b pop ebx */
  EBX = (pop32());
  /* 12d9bc6c mov esp, ebp */
  ESP = (EBP);
  /* 12d9bc6e pop ebp */
  EBP = (pop32());
  /* 12d9bc6f ret  */
  ESPCHK(0x12d9bc50u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12d9bc92 (104 bytes, 33 insns) */
void f_12d9bc92(void) {
  FTRACE(0x12d9bc92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9bc92 push ebx */
  push32((uint32_t)(EBX));
  /* 12d9bc93 push esi */
  push32((uint32_t)(ESI));
  /* 12d9bc94 push edi */
  push32((uint32_t)(EDI));
  /* 12d9bc95 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d9bc99 push eax */
  push32((uint32_t)(EAX));
  /* 12d9bc9a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12d9bc9c push 0x12d9bc70 */
  push32((uint32_t)(0x12d9bc70u));
  /* 12d9bca1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12d9bca8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12d9bcaf:;
  /* 12d9bcaf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12d9bcb3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d9bcb6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12d9bcb9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bcbc je 0x12d9bcec */
  if (C.zf) goto L_12d9bcec;
  /* 12d9bcbe cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bcc2 je 0x12d9bcec */
  if (C.zf) goto L_12d9bcec;
  /* 12d9bcc4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12d9bcc7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12d9bcca mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12d9bcce mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12d9bcd1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bcd6 jne 0x12d9bcea */
  if (!C.zf) goto L_12d9bcea;
  /* 12d9bcd8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12d9bcdd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12d9bce1 call 0x12d9bd26 */
  push32(0x12d9bce6u); f_12d9bd26();
  /* 12d9bce6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12d9bceau);
L_12d9bcea:;
  /* 12d9bcea jmp 0x12d9bcaf */
  goto L_12d9bcaf;
L_12d9bcec:;
  /* 12d9bcec pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12d9bcf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bcf6 pop edi */
  EDI = (pop32());
  /* 12d9bcf7 pop esi */
  ESI = (pop32());
  /* 12d9bcf8 pop ebx */
  EBX = (pop32());
  /* 12d9bcf9 ret  */
  ESPCHK(0x12d9bc92u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd26 @ 0x12d9bd26 (24 bytes, 10 insns) */
void f_12d9bd26(void) {
  FTRACE(0x12d9bd26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9bd26 push ebx */
  push32((uint32_t)(EBX));
  /* 12d9bd27 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9bd28 mov ebx, 0x12dac478 */
  EBX = (0x12dac478u);
  /* 12d9bd2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9bd30 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12d9bd33 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12d9bd36 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12d9bd39 pop ecx */
  ECX = (pop32());
  /* 12d9bd3a pop ebx */
  EBX = (pop32());
  /* 12d9bd3b ret 4 */
  ESPCHK(0x12d9bd26u, _esp0);
  ESP += 8; return;
}

/* FUN_1000be05 @ 0x12d9be05 (27 bytes, 11 insns) */
void f_12d9be05(void) {
  FTRACE(0x12d9be05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9be05 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9be06 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d9be0a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12d9be0c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12d9be0f push eax */
  push32((uint32_t)(EAX));
  /* 12d9be10 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d9be13 push eax */
  push32((uint32_t)(EAX));
  /* 12d9be14 call 0x12d9bc92 */
  push32(0x12d9be19u); f_12d9bc92();
  /* 12d9be19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9be1c pop ebp */
  EBP = (pop32());
  /* 12d9be1d ret 4 */
  ESPCHK(0x12d9be05u, _esp0);
  ESP += 8; return;
}

/* FUN_1000be20 @ 0x12d9be20 (482 bytes, 138 insns) */
void f_12d9be20(void) {
  FTRACE(0x12d9be20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9be20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9be21 mov ebp, esp */
  EBP = (ESP);
  /* 12d9be23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9be26 push esi */
  push32((uint32_t)(ESI));
  /* 12d9be27 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12d9be2e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12d9be30 call 0x12d96640 */
  push32(0x12d9be35u); f_12d96640();
  /* 12d9be35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9be38 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d9be3f jmp 0x12d9be4a */
  goto L_12d9be4a;
L_12d9be41:;
  /* 12d9be41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9be44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9be47 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d9be4a:;
  /* 12d9be4a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9be4e jge 0x12d9bff0 */
  if ((C.sf==C.of)) goto L_12d9bff0;
  /* 12d9be54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9be57 cmp dword ptr [ecx*4 + 0x12daef00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12daef00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9be5f je 0x12d9bf56 */
  if (C.zf) goto L_12d9bf56;
  /* 12d9be65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9be68 mov eax, dword ptr [edx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12daef00)));
  /* 12d9be6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9be72 jmp 0x12d9be7d */
  goto L_12d9be7d;
L_12d9be74:;
  /* 12d9be74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9be77 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9be7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d9be7d:;
  /* 12d9be7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9be80 mov eax, dword ptr [edx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12daef00)));
  /* 12d9be87 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9be8c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9be8f jae 0x12d9bf46 */
  if (!C.cf) goto L_12d9bf46;
  /* 12d9be95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9be98 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d9be9c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9be9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9bea1 jne 0x12d9bf41 */
  if (!C.zf) goto L_12d9bf41;
  /* 12d9bea7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9beaa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9beae jne 0x12d9bee9 */
  if (!C.zf) goto L_12d9bee9;
  /* 12d9beb0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d9beb2 call 0x12d96640 */
  push32(0x12d9beb7u); f_12d96640();
  /* 12d9beb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9beba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9bebd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bec1 jne 0x12d9bedf */
  if (!C.zf) goto L_12d9bedf;
  /* 12d9bec3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9bec6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bec9 push edx */
  push32((uint32_t)(EDX));
  /* 12d9beca call dword ptr [0x12db0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0324))), 0x12d9bed0u);
  /* 12d9bed0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9bed3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d9bed6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bed9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9bedc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12d9bedf:;
  /* 12d9bedf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d9bee1 call 0x12d966e0 */
  push32(0x12d9bee6u); f_12d966e0();
  /* 12d9bee6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9bee9:;
  /* 12d9bee9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9beec add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9beef push eax */
  push32((uint32_t)(EAX));
  /* 12d9bef0 call dword ptr [0x12db0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0328))), 0x12d9bef6u);
  /* 12d9bef6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9bef9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d9befd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9bf00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9bf02 je 0x12d9bf16 */
  if (C.zf) goto L_12d9bf16;
  /* 12d9bf04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9bf07 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bf0a push eax */
  push32((uint32_t)(EAX));
  /* 12d9bf0b call dword ptr [0x12db02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02f4))), 0x12d9bf11u);
  /* 12d9bf11 jmp 0x12d9be74 */
  goto L_12d9be74;
L_12d9bf16:;
  /* 12d9bf16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9bf19 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12d9bf1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9bf22 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d9bf25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9bf28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9bf2b sub eax, dword ptr [edx*4 + 0x12daef00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12daef00))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9bf32 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d9bf33 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12d9bf38 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d9bf3a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bf3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9bf3f jmp 0x12d9bf46 */
  goto L_12d9bf46;
L_12d9bf41:;
  /* 12d9bf41 jmp 0x12d9be74 */
  goto L_12d9be74;
L_12d9bf46:;
  /* 12d9bf46 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bf4a je 0x12d9bf51 */
  if (C.zf) goto L_12d9bf51;
  /* 12d9bf4c jmp 0x12d9bff0 */
  goto L_12d9bff0;
L_12d9bf51:;
  /* 12d9bf51 jmp 0x12d9bfeb */
  goto L_12d9bfeb;
L_12d9bf56:;
  /* 12d9bf56 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12d9bf58 push 0x12da9f04 */
  push32((uint32_t)(0x12da9f04u));
  /* 12d9bf5d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9bf5f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12d9bf64 call 0x12d92c40 */
  push32(0x12d9bf69u); f_12d92c40();
  /* 12d9bf69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bf6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9bf6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bf73 je 0x12d9bfe9 */
  if (C.zf) goto L_12d9bfe9;
  /* 12d9bf75 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9bf78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9bf7b mov dword ptr [eax*4 + 0x12daef00], ecx */
  w32((uint32_t)(EAX*4 + 0x12daef00), (ECX));
  /* 12d9bf82 mov edx, dword ptr [0x12daf03c] */
  EDX = (r32((uint32_t)(0x12daf03c)));
  /* 12d9bf88 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bf8b mov dword ptr [0x12daf03c], edx */
  w32((uint32_t)(0x12daf03c), (EDX));
  /* 12d9bf91 jmp 0x12d9bf9c */
  goto L_12d9bf9c;
L_12d9bf93:;
  /* 12d9bf93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9bf96 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bf99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d9bf9c:;
  /* 12d9bf9c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9bf9f mov edx, dword ptr [ecx*4 + 0x12daef00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12daef00)));
  /* 12d9bfa6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bfac cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9bfaf jae 0x12d9bfd4 */
  if (!C.cf) goto L_12d9bfd4;
  /* 12d9bfb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9bfb4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12d9bfb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9bfbb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12d9bfc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9bfc4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12d9bfc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9bfcb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12d9bfd2 jmp 0x12d9bf93 */
  goto L_12d9bf93;
L_12d9bfd4:;
  /* 12d9bfd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9bfd7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d9bfda mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9bfdd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9bfe0 push edx */
  push32((uint32_t)(EDX));
  /* 12d9bfe1 call 0x12d9c330 */
  push32(0x12d9bfe6u); f_12d9c330();
  /* 12d9bfe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9bfe9:;
  /* 12d9bfe9 jmp 0x12d9bff0 */
  goto L_12d9bff0;
L_12d9bfeb:;
  /* 12d9bfeb jmp 0x12d9be41 */
  goto L_12d9be41;
L_12d9bff0:;
  /* 12d9bff0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12d9bff2 call 0x12d966e0 */
  push32(0x12d9bff7u); f_12d966e0();
  /* 12d9bff7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9bffa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9bffd pop esi */
  ESI = (pop32());
  /* 12d9bffe mov esp, ebp */
  ESP = (EBP);
  /* 12d9c000 pop ebp */
  EBP = (pop32());
  /* 12d9c001 ret  */
  ESPCHK(0x12d9be20u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12d9c010 (183 bytes, 57 insns) */
void f_12d9c010(void) {
  FTRACE(0x12d9c010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9c010 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9c011 mov ebp, esp */
  EBP = (ESP);
  /* 12d9c013 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c017 cmp eax, dword ptr [0x12daf03c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12daf03c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c01d jae 0x12d9c0aa */
  if (!C.cf) goto L_12d9c0aa;
  /* 12d9c023 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c026 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d9c029 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c02c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9c02f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9c032 mov eax, dword ptr [ecx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12daef00)));
  /* 12d9c039 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c03d jne 0x12d9c0aa */
  if (!C.zf) goto L_12d9c0aa;
  /* 12d9c03f cmp dword ptr [0x12dad514], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad514))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c046 jne 0x12d9c08a */
  if (!C.zf) goto L_12d9c08a;
  /* 12d9c048 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c04b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d9c04e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c052 je 0x12d9c062 */
  if (C.zf) goto L_12d9c062;
  /* 12d9c054 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c058 je 0x12d9c070 */
  if (C.zf) goto L_12d9c070;
  /* 12d9c05a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c05e je 0x12d9c07e */
  if (C.zf) goto L_12d9c07e;
  /* 12d9c060 jmp 0x12d9c08a */
  goto L_12d9c08a;
L_12d9c062:;
  /* 12d9c062 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9c065 push edx */
  push32((uint32_t)(EDX));
  /* 12d9c066 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12d9c068 call dword ptr [0x12db0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0280))), 0x12d9c06eu);
  /* 12d9c06e jmp 0x12d9c08a */
  goto L_12d9c08a;
L_12d9c070:;
  /* 12d9c070 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9c073 push eax */
  push32((uint32_t)(EAX));
  /* 12d9c074 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12d9c076 call dword ptr [0x12db0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0280))), 0x12d9c07cu);
  /* 12d9c07c jmp 0x12d9c08a */
  goto L_12d9c08a;
L_12d9c07e:;
  /* 12d9c07e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9c081 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c082 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12d9c084 call dword ptr [0x12db0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0280))), 0x12d9c08au);
L_12d9c08a:;
  /* 12d9c08a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c08d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12d9c090 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c093 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9c096 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9c099 mov ecx, dword ptr [edx*4 + 0x12daef00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12daef00)));
  /* 12d9c0a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9c0a3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12d9c0a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9c0a8 jmp 0x12d9c0c3 */
  goto L_12d9c0c3;
L_12d9c0aa:;
  /* 12d9c0aa call 0x12d9ab10 */
  push32(0x12d9c0afu); f_12d9ab10();
  /* 12d9c0af mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d9c0b5 call 0x12d9ab20 */
  push32(0x12d9c0bau); f_12d9ab20();
  /* 12d9c0ba mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d9c0c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d9c0c3:;
  /* 12d9c0c3 mov esp, ebp */
  ESP = (EBP);
  /* 12d9c0c5 pop ebp */
  EBP = (pop32());
  /* 12d9c0c6 ret  */
  ESPCHK(0x12d9c010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0d0 @ 0x12d9c0d0 (216 bytes, 63 insns) */
void f_12d9c0d0(void) {
  FTRACE(0x12d9c0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9c0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9c0d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9c0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c0d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c0d7 cmp eax, dword ptr [0x12daf03c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12daf03c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c0dd jae 0x12d9c18b */
  if (!C.cf) goto L_12d9c18b;
  /* 12d9c0e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c0e6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d9c0e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c0ec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9c0ef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9c0f2 mov eax, dword ptr [ecx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12daef00)));
  /* 12d9c0f9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d9c0fe and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9c101 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9c103 je 0x12d9c18b */
  if (C.zf) goto L_12d9c18b;
  /* 12d9c109 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c10c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12d9c10f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c112 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9c115 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9c118 mov ecx, dword ptr [edx*4 + 0x12daef00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12daef00)));
  /* 12d9c11f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c123 je 0x12d9c18b */
  if (C.zf) goto L_12d9c18b;
  /* 12d9c125 cmp dword ptr [0x12dad514], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad514))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c12c jne 0x12d9c16a */
  if (!C.zf) goto L_12d9c16a;
  /* 12d9c12e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c131 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d9c134 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c138 je 0x12d9c148 */
  if (C.zf) goto L_12d9c148;
  /* 12d9c13a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c13e je 0x12d9c154 */
  if (C.zf) goto L_12d9c154;
  /* 12d9c140 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c144 je 0x12d9c160 */
  if (C.zf) goto L_12d9c160;
  /* 12d9c146 jmp 0x12d9c16a */
  goto L_12d9c16a;
L_12d9c148:;
  /* 12d9c148 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9c14a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12d9c14c call dword ptr [0x12db0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0280))), 0x12d9c152u);
  /* 12d9c152 jmp 0x12d9c16a */
  goto L_12d9c16a;
L_12d9c154:;
  /* 12d9c154 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9c156 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12d9c158 call dword ptr [0x12db0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0280))), 0x12d9c15eu);
  /* 12d9c15e jmp 0x12d9c16a */
  goto L_12d9c16a;
L_12d9c160:;
  /* 12d9c160 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9c162 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12d9c164 call dword ptr [0x12db0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0280))), 0x12d9c16au);
L_12d9c16a:;
  /* 12d9c16a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c16d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d9c170 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c173 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d9c176 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9c179 mov edx, dword ptr [eax*4 + 0x12daef00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12daef00)));
  /* 12d9c180 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12d9c187 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9c189 jmp 0x12d9c1a4 */
  goto L_12d9c1a4;
L_12d9c18b:;
  /* 12d9c18b call 0x12d9ab10 */
  push32(0x12d9c190u); f_12d9ab10();
  /* 12d9c190 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d9c196 call 0x12d9ab20 */
  push32(0x12d9c19bu); f_12d9ab20();
  /* 12d9c19b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d9c1a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d9c1a4:;
  /* 12d9c1a4 mov esp, ebp */
  ESP = (EBP);
  /* 12d9c1a6 pop ebp */
  EBP = (pop32());
  /* 12d9c1a7 ret  */
  ESPCHK(0x12d9c0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1b0 @ 0x12d9c1b0 (102 bytes, 30 insns) */
void f_12d9c1b0(void) {
  FTRACE(0x12d9c1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9c1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9c1b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9c1b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c1b6 cmp eax, dword ptr [0x12daf03c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12daf03c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c1bc jae 0x12d9c1fb */
  if (!C.cf) goto L_12d9c1fb;
  /* 12d9c1be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c1c1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d9c1c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c1c7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9c1ca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9c1cd mov eax, dword ptr [ecx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12daef00)));
  /* 12d9c1d4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d9c1d9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9c1dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9c1de je 0x12d9c1fb */
  if (C.zf) goto L_12d9c1fb;
  /* 12d9c1e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c1e3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12d9c1e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c1e9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9c1ec imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9c1ef mov ecx, dword ptr [edx*4 + 0x12daef00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12daef00)));
  /* 12d9c1f6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12d9c1f9 jmp 0x12d9c214 */
  goto L_12d9c214;
L_12d9c1fb:;
  /* 12d9c1fb call 0x12d9ab10 */
  push32(0x12d9c200u); f_12d9ab10();
  /* 12d9c200 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d9c206 call 0x12d9ab20 */
  push32(0x12d9c20bu); f_12d9ab20();
  /* 12d9c20b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d9c211 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d9c214:;
  /* 12d9c214 pop ebp */
  EBP = (pop32());
  /* 12d9c215 ret  */
  ESPCHK(0x12d9c1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c220 @ 0x12d9c220 (260 bytes, 83 insns) */
void f_12d9c220(void) {
  FTRACE(0x12d9c220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9c220 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9c221 mov ebp, esp */
  EBP = (ESP);
  /* 12d9c223 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9c226 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d9c22a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9c22d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9c230 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9c232 je 0x12d9c23d */
  if (C.zf) goto L_12d9c23d;
  /* 12d9c234 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d9c237 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12d9c23a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12d9c23d:;
  /* 12d9c23d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9c240 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9c246 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9c248 je 0x12d9c252 */
  if (C.zf) goto L_12d9c252;
  /* 12d9c24a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d9c24d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12d9c24f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12d9c252:;
  /* 12d9c252 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9c255 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9c25b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9c25d je 0x12d9c268 */
  if (C.zf) goto L_12d9c268;
  /* 12d9c25f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d9c262 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12d9c265 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12d9c268:;
  /* 12d9c268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c26b push eax */
  push32((uint32_t)(EAX));
  /* 12d9c26c call dword ptr [0x12db02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02e4))), 0x12d9c272u);
  /* 12d9c272 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9c275 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c279 jne 0x12d9c292 */
  if (!C.zf) goto L_12d9c292;
  /* 12d9c27b call dword ptr [0x12db02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02d8))), 0x12d9c281u);
  /* 12d9c281 push eax */
  push32((uint32_t)(EAX));
  /* 12d9c282 call 0x12d9aa70 */
  push32(0x12d9c287u); f_12d9aa70();
  /* 12d9c287 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c28a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9c28d jmp 0x12d9c320 */
  goto L_12d9c320;
L_12d9c292:;
  /* 12d9c292 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c296 jne 0x12d9c2a3 */
  if (!C.zf) goto L_12d9c2a3;
  /* 12d9c298 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d9c29b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12d9c29e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12d9c2a1 jmp 0x12d9c2b2 */
  goto L_12d9c2b2;
L_12d9c2a3:;
  /* 12d9c2a3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c2a7 jne 0x12d9c2b2 */
  if (!C.zf) goto L_12d9c2b2;
  /* 12d9c2a9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d9c2ac or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12d9c2af mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12d9c2b2:;
  /* 12d9c2b2 call 0x12d9be20 */
  push32(0x12d9c2b7u); f_12d9be20();
  /* 12d9c2b7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9c2ba cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c2be jne 0x12d9c2db */
  if (!C.zf) goto L_12d9c2db;
  /* 12d9c2c0 call 0x12d9ab10 */
  push32(0x12d9c2c5u); f_12d9ab10();
  /* 12d9c2c5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12d9c2cb call 0x12d9ab20 */
  push32(0x12d9c2d0u); f_12d9ab20();
  /* 12d9c2d0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d9c2d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9c2d9 jmp 0x12d9c320 */
  goto L_12d9c320;
L_12d9c2db:;
  /* 12d9c2db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c2de push eax */
  push32((uint32_t)(EAX));
  /* 12d9c2df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c2e2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c2e3 call 0x12d9c010 */
  push32(0x12d9c2e8u); f_12d9c010();
  /* 12d9c2e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c2eb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d9c2ee or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12d9c2f1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12d9c2f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c2f7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d9c2fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c2fd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d9c300 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9c303 mov edx, dword ptr [eax*4 + 0x12daef00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12daef00)));
  /* 12d9c30a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d9c30d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12d9c311 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c314 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c315 call 0x12d9c3c0 */
  push32(0x12d9c31au); f_12d9c3c0();
  /* 12d9c31a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c31d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d9c320:;
  /* 12d9c320 mov esp, ebp */
  ESP = (EBP);
  /* 12d9c322 pop ebp */
  EBP = (pop32());
  /* 12d9c323 ret  */
  ESPCHK(0x12d9c220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c330 @ 0x12d9c330 (134 bytes, 44 insns) */
void f_12d9c330(void) {
  FTRACE(0x12d9c330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9c330 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9c331 mov ebp, esp */
  EBP = (ESP);
  /* 12d9c333 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c337 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d9c33a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c33d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d9c340 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9c343 mov edx, dword ptr [eax*4 + 0x12daef00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12daef00)));
  /* 12d9c34a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c34c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d9c34f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9c352 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c356 jne 0x12d9c391 */
  if (!C.zf) goto L_12d9c391;
  /* 12d9c358 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d9c35a call 0x12d96640 */
  push32(0x12d9c35fu); f_12d96640();
  /* 12d9c35f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c362 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9c365 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c369 jne 0x12d9c387 */
  if (!C.zf) goto L_12d9c387;
  /* 12d9c36b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9c36e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c371 push edx */
  push32((uint32_t)(EDX));
  /* 12d9c372 call dword ptr [0x12db0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0324))), 0x12d9c378u);
  /* 12d9c378 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9c37b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d9c37e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c381 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9c384 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12d9c387:;
  /* 12d9c387 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d9c389 call 0x12d966e0 */
  push32(0x12d9c38eu); f_12d966e0();
  /* 12d9c38e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9c391:;
  /* 12d9c391 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c394 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d9c397 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c39a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d9c39d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9c3a0 mov edx, dword ptr [eax*4 + 0x12daef00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12daef00)));
  /* 12d9c3a7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12d9c3ab push eax */
  push32((uint32_t)(EAX));
  /* 12d9c3ac call dword ptr [0x12db0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0328))), 0x12d9c3b2u);
  /* 12d9c3b2 mov esp, ebp */
  ESP = (EBP);
  /* 12d9c3b4 pop ebp */
  EBP = (pop32());
  /* 12d9c3b5 ret  */
  ESPCHK(0x12d9c330u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12d9c3c0 (38 bytes, 13 insns) */
void f_12d9c3c0(void) {
  FTRACE(0x12d9c3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9c3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9c3c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9c3c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c3c6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d9c3c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c3cc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d9c3cf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9c3d2 mov edx, dword ptr [eax*4 + 0x12daef00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12daef00)));
  /* 12d9c3d9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12d9c3dd push eax */
  push32((uint32_t)(EAX));
  /* 12d9c3de call dword ptr [0x12db02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02f4))), 0x12d9c3e4u);
  /* 12d9c3e4 pop ebp */
  EBP = (pop32());
  /* 12d9c3e5 ret  */
  ESPCHK(0x12d9c3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3f0 @ 0x12d9c3f0 (218 bytes, 63 insns) */
void f_12d9c3f0(void) {
  FTRACE(0x12d9c3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9c3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9c3f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9c3f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9c3f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d9c3fd push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9c3ff call 0x12d96640 */
  push32(0x12d9c404u); f_12d96640();
  /* 12d9c404 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c407 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12d9c40e jmp 0x12d9c419 */
  goto L_12d9c419;
L_12d9c410:;
  /* 12d9c410 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c413 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c416 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d9c419:;
  /* 12d9c419 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c41c cmp ecx, dword ptr [0x12daec00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12daec00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c422 jge 0x12d9c4b9 */
  if ((C.sf==C.of)) goto L_12d9c4b9;
  /* 12d9c428 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c42b mov eax, dword ptr [0x12dad8b0] */
  EAX = (r32((uint32_t)(0x12dad8b0)));
  /* 12d9c430 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c434 je 0x12d9c4b4 */
  if (C.zf) goto L_12d9c4b4;
  /* 12d9c436 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c439 mov edx, dword ptr [0x12dad8b0] */
  EDX = (r32((uint32_t)(0x12dad8b0)));
  /* 12d9c43f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12d9c442 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d9c445 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9c44b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9c44d je 0x12d9c471 */
  if (C.zf) goto L_12d9c471;
  /* 12d9c44f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c452 mov eax, dword ptr [0x12dad8b0] */
  EAX = (r32((uint32_t)(0x12dad8b0)));
  /* 12d9c457 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d9c45a push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c45b call 0x12d9d1e0 */
  push32(0x12d9c460u); f_12d9d1e0();
  /* 12d9c460 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c463 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c466 je 0x12d9c471 */
  if (C.zf) goto L_12d9c471;
  /* 12d9c468 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9c46b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c46e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d9c471:;
  /* 12d9c471 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c475 jl 0x12d9c4b4 */
  if ((C.sf!=C.of)) goto L_12d9c4b4;
  /* 12d9c477 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c47a mov ecx, dword ptr [0x12dad8b0] */
  ECX = (r32((uint32_t)(0x12dad8b0)));
  /* 12d9c480 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d9c483 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c486 push edx */
  push32((uint32_t)(EDX));
  /* 12d9c487 call dword ptr [0x12db02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02ec))), 0x12d9c48du);
  /* 12d9c48d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9c48f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c492 mov ecx, dword ptr [0x12dad8b0] */
  ECX = (r32((uint32_t)(0x12dad8b0)));
  /* 12d9c498 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d9c49b push edx */
  push32((uint32_t)(EDX));
  /* 12d9c49c call 0x12d936d0 */
  push32(0x12d9c4a1u); f_12d936d0();
  /* 12d9c4a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c4a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c4a7 mov ecx, dword ptr [0x12dad8b0] */
  ECX = (r32((uint32_t)(0x12dad8b0)));
  /* 12d9c4ad mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12d9c4b4:;
  /* 12d9c4b4 jmp 0x12d9c410 */
  goto L_12d9c410;
L_12d9c4b9:;
  /* 12d9c4b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9c4bb call 0x12d966e0 */
  push32(0x12d9c4c0u); f_12d966e0();
  /* 12d9c4c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c4c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9c4c6 mov esp, ebp */
  ESP = (EBP);
  /* 12d9c4c8 pop ebp */
  EBP = (pop32());
  /* 12d9c4c9 ret  */
  ESPCHK(0x12d9c3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4d0 @ 0x12d9c4d0 (68 bytes, 26 insns) */
void f_12d9c4d0(void) {
  FTRACE(0x12d9c4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9c4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9c4d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9c4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c4d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c4d8 jne 0x12d9c4e6 */
  if (!C.zf) goto L_12d9c4e6;
  /* 12d9c4da push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9c4dc call 0x12d9c640 */
  push32(0x12d9c4e1u); f_12d9c640();
  /* 12d9c4e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c4e4 jmp 0x12d9c510 */
  goto L_12d9c510;
L_12d9c4e6:;
  /* 12d9c4e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c4e9 push eax */
  push32((uint32_t)(EAX));
  /* 12d9c4ea call 0x12d9ba50 */
  push32(0x12d9c4efu); f_12d9ba50();
  /* 12d9c4ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c4f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c4f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c4f6 call 0x12d9c520 */
  push32(0x12d9c4fbu); f_12d9c520();
  /* 12d9c4fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c4fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9c501 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c504 push edx */
  push32((uint32_t)(EDX));
  /* 12d9c505 call 0x12d9bac0 */
  push32(0x12d9c50au); f_12d9bac0();
  /* 12d9c50a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c50d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d9c510:;
  /* 12d9c510 mov esp, ebp */
  ESP = (EBP);
  /* 12d9c512 pop ebp */
  EBP = (pop32());
  /* 12d9c513 ret  */
  ESPCHK(0x12d9c4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c520 @ 0x12d9c520 (65 bytes, 26 insns) */
void f_12d9c520(void) {
  FTRACE(0x12d9c520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9c520 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9c521 mov ebp, esp */
  EBP = (ESP);
  /* 12d9c523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c526 push eax */
  push32((uint32_t)(EAX));
  /* 12d9c527 call 0x12d9c570 */
  push32(0x12d9c52cu); f_12d9c570();
  /* 12d9c52c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c52f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9c531 je 0x12d9c538 */
  if (C.zf) goto L_12d9c538;
  /* 12d9c533 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9c536 jmp 0x12d9c55f */
  goto L_12d9c55f;
L_12d9c538:;
  /* 12d9c538 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c53b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d9c53e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9c544 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9c546 je 0x12d9c55d */
  if (C.zf) goto L_12d9c55d;
  /* 12d9c548 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c54b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d9c54e push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c54f call 0x12d9d330 */
  push32(0x12d9c554u); f_12d9d330();
  /* 12d9c554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c557 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9c559 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9c55b jmp 0x12d9c55f */
  goto L_12d9c55f;
L_12d9c55d:;
  /* 12d9c55d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d9c55f:;
  /* 12d9c55f pop ebp */
  EBP = (pop32());
  /* 12d9c560 ret  */
  ESPCHK(0x12d9c520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c570 @ 0x12d9c570 (183 bytes, 62 insns) */
void f_12d9c570(void) {
  FTRACE(0x12d9c570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9c570 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9c571 mov ebp, esp */
  EBP = (ESP);
  /* 12d9c573 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9c576 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d9c57d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c580 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9c583 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c586 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d9c589 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9c58c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c58f jne 0x12d9c60b */
  if (!C.zf) goto L_12d9c60b;
  /* 12d9c591 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c594 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d9c597 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9c59d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9c59f je 0x12d9c60b */
  if (C.zf) goto L_12d9c60b;
  /* 12d9c5a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c5a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c5a7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12d9c5a9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9c5ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9c5af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c5b3 jle 0x12d9c60b */
  if ((C.zf||C.sf!=C.of)) goto L_12d9c60b;
  /* 12d9c5b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9c5b8 push edx */
  push32((uint32_t)(EDX));
  /* 12d9c5b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c5bc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d9c5bf push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c5c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c5c3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d9c5c6 push eax */
  push32((uint32_t)(EAX));
  /* 12d9c5c7 call 0x12d9b4e0 */
  push32(0x12d9c5ccu); f_12d9b4e0();
  /* 12d9c5cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c5cf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c5d2 jne 0x12d9c5f5 */
  if (!C.zf) goto L_12d9c5f5;
  /* 12d9c5d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c5d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d9c5da and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9c5e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9c5e2 je 0x12d9c5f3 */
  if (C.zf) goto L_12d9c5f3;
  /* 12d9c5e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c5e7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d9c5ea and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12d9c5ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c5f0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12d9c5f3:;
  /* 12d9c5f3 jmp 0x12d9c60b */
  goto L_12d9c60b;
L_12d9c5f5:;
  /* 12d9c5f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c5f8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d9c5fb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9c5fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c601 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12d9c604 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d9c60b:;
  /* 12d9c60b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c60e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c611 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d9c614 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d9c616 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9c619 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12d9c620 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9c623 mov esp, ebp */
  ESP = (EBP);
  /* 12d9c625 pop ebp */
  EBP = (pop32());
  /* 12d9c626 ret  */
  ESPCHK(0x12d9c570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c630 @ 0x12d9c630 (15 bytes, 7 insns) */
void f_12d9c630(void) {
  FTRACE(0x12d9c630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9c630 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9c631 mov ebp, esp */
  EBP = (ESP);
  /* 12d9c633 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9c635 call 0x12d9c640 */
  push32(0x12d9c63au); f_12d9c640();
  /* 12d9c63a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c63d pop ebp */
  EBP = (pop32());
  /* 12d9c63e ret  */
  ESPCHK(0x12d9c630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c640 @ 0x12d9c640 (319 bytes, 94 insns) */
void f_12d9c640(void) {
  FTRACE(0x12d9c640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9c640 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9c641 mov ebp, esp */
  EBP = (ESP);
  /* 12d9c643 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9c646 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d9c64d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d9c654 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9c656 call 0x12d96640 */
  push32(0x12d9c65bu); f_12d96640();
  /* 12d9c65b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c65e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d9c665 jmp 0x12d9c670 */
  goto L_12d9c670;
L_12d9c667:;
  /* 12d9c667 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9c66a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c66d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d9c670:;
  /* 12d9c670 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9c673 cmp ecx, dword ptr [0x12daec00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12daec00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c679 jge 0x12d9c763 */
  if ((C.sf==C.of)) goto L_12d9c763;
  /* 12d9c67f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9c682 mov eax, dword ptr [0x12dad8b0] */
  EAX = (r32((uint32_t)(0x12dad8b0)));
  /* 12d9c687 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c68b je 0x12d9c75e */
  if (C.zf) goto L_12d9c75e;
  /* 12d9c691 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9c694 mov edx, dword ptr [0x12dad8b0] */
  EDX = (r32((uint32_t)(0x12dad8b0)));
  /* 12d9c69a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12d9c69d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d9c6a0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9c6a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9c6a8 je 0x12d9c75e */
  if (C.zf) goto L_12d9c75e;
  /* 12d9c6ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9c6b1 mov eax, dword ptr [0x12dad8b0] */
  EAX = (r32((uint32_t)(0x12dad8b0)));
  /* 12d9c6b6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d9c6b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c6ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9c6bd push edx */
  push32((uint32_t)(EDX));
  /* 12d9c6be call 0x12d9ba90 */
  push32(0x12d9c6c3u); f_12d9ba90();
  /* 12d9c6c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c6c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9c6c9 mov ecx, dword ptr [0x12dad8b0] */
  ECX = (r32((uint32_t)(0x12dad8b0)));
  /* 12d9c6cf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d9c6d2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d9c6d5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9c6da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9c6dc je 0x12d9c745 */
  if (C.zf) goto L_12d9c745;
  /* 12d9c6de cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c6e2 jne 0x12d9c709 */
  if (!C.zf) goto L_12d9c709;
  /* 12d9c6e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9c6e7 mov edx, dword ptr [0x12dad8b0] */
  EDX = (r32((uint32_t)(0x12dad8b0)));
  /* 12d9c6ed mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12d9c6f0 push eax */
  push32((uint32_t)(EAX));
  /* 12d9c6f1 call 0x12d9c520 */
  push32(0x12d9c6f6u); f_12d9c520();
  /* 12d9c6f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c6f9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c6fc je 0x12d9c707 */
  if (C.zf) goto L_12d9c707;
  /* 12d9c6fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9c701 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c704 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d9c707:;
  /* 12d9c707 jmp 0x12d9c745 */
  goto L_12d9c745;
L_12d9c709:;
  /* 12d9c709 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c70d jne 0x12d9c745 */
  if (!C.zf) goto L_12d9c745;
  /* 12d9c70f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9c712 mov eax, dword ptr [0x12dad8b0] */
  EAX = (r32((uint32_t)(0x12dad8b0)));
  /* 12d9c717 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d9c71a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d9c71d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9c720 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9c722 je 0x12d9c745 */
  if (C.zf) goto L_12d9c745;
  /* 12d9c724 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9c727 mov ecx, dword ptr [0x12dad8b0] */
  ECX = (r32((uint32_t)(0x12dad8b0)));
  /* 12d9c72d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d9c730 push edx */
  push32((uint32_t)(EDX));
  /* 12d9c731 call 0x12d9c520 */
  push32(0x12d9c736u); f_12d9c520();
  /* 12d9c736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c739 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c73c jne 0x12d9c745 */
  if (!C.zf) goto L_12d9c745;
  /* 12d9c73e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12d9c745:;
  /* 12d9c745 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9c748 mov ecx, dword ptr [0x12dad8b0] */
  ECX = (r32((uint32_t)(0x12dad8b0)));
  /* 12d9c74e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d9c751 push edx */
  push32((uint32_t)(EDX));
  /* 12d9c752 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9c755 push eax */
  push32((uint32_t)(EAX));
  /* 12d9c756 call 0x12d9bb00 */
  push32(0x12d9c75bu); f_12d9bb00();
  /* 12d9c75b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9c75e:;
  /* 12d9c75e jmp 0x12d9c667 */
  goto L_12d9c667;
L_12d9c763:;
  /* 12d9c763 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9c765 call 0x12d966e0 */
  push32(0x12d9c76au); f_12d966e0();
  /* 12d9c76a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c76d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c771 jne 0x12d9c778 */
  if (!C.zf) goto L_12d9c778;
  /* 12d9c773 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9c776 jmp 0x12d9c77b */
  goto L_12d9c77b;
L_12d9c778:;
  /* 12d9c778 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d9c77b:;
  /* 12d9c77b mov esp, ebp */
  ESP = (EBP);
  /* 12d9c77d pop ebp */
  EBP = (pop32());
  /* 12d9c77e ret  */
  ESPCHK(0x12d9c640u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12d9c780 (15 bytes, 7 insns) */
void f_12d9c780(void) {
  FTRACE(0x12d9c780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9c780 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9c781 mov ebp, esp */
  EBP = (ESP);
  /* 12d9c783 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9c785 call 0x12d91bb0 */
  push32(0x12d9c78au); f_12d91bb0();
  /* 12d9c78a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c78d pop ebp */
  EBP = (pop32());
  /* 12d9c78e ret  */
  ESPCHK(0x12d9c780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c790 @ 0x12d9c790 (1007 bytes, 269 insns) */
void f_12d9c790(void) {
  FTRACE(0x12d9c790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9c790 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9c791 mov ebp, esp */
  EBP = (ESP);
  /* 12d9c793 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9c799 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c79d jl 0x12d9c7a5 */
  if ((C.sf!=C.of)) goto L_12d9c7a5;
  /* 12d9c79f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c7a3 jle 0x12d9c7ac */
  if ((C.zf||C.sf!=C.of)) goto L_12d9c7ac;
L_12d9c7a5:;
  /* 12d9c7a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9c7a7 jmp 0x12d9cb7b */
  goto L_12d9cb7b;
L_12d9c7ac:;
  /* 12d9c7ac push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d9c7ae call 0x12d96640 */
  push32(0x12d9c7b3u); f_12d96640();
  /* 12d9c7b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c7b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d9c7bd mov eax, dword ptr [0x12dad89c] */
  EAX = (r32((uint32_t)(0x12dad89c)));
  /* 12d9c7c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c7c5 mov dword ptr [0x12dad89c], eax */
  w32((uint32_t)(0x12dad89c), (EAX));
L_12d9c7ca:;
  /* 12d9c7ca cmp dword ptr [0x12dad8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c7d1 je 0x12d9c7dd */
  if (C.zf) goto L_12d9c7dd;
  /* 12d9c7d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9c7d5 call dword ptr [0x12db027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db027c))), 0x12d9c7dbu);
  /* 12d9c7db jmp 0x12d9c7ca */
  goto L_12d9c7ca;
L_12d9c7dd:;
  /* 12d9c7dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c7e1 je 0x12d9c821 */
  if (C.zf) goto L_12d9c821;
  /* 12d9c7e3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c7e7 je 0x12d9c801 */
  if (C.zf) goto L_12d9c801;
  /* 12d9c7e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9c7ec push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c7ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c7f0 push edx */
  push32((uint32_t)(EDX));
  /* 12d9c7f1 call 0x12d9cb80 */
  push32(0x12d9c7f6u); f_12d9cb80();
  /* 12d9c7f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c7f9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12d9c7ff jmp 0x12d9c813 */
  goto L_12d9c813;
L_12d9c801:;
  /* 12d9c801 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9c804 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9c807 mov ecx, dword ptr [eax + 0x12dac59c] */
  ECX = (r32((uint32_t)(EAX + 0x12dac59c)));
  /* 12d9c80d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12d9c813:;
  /* 12d9c813 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12d9c819 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d9c81c jmp 0x12d9cb5b */
  goto L_12d9cb5b;
L_12d9c821:;
  /* 12d9c821 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12d9c828 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d9c82f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c833 je 0x12d9cb53 */
  if (C.zf) goto L_12d9cb53;
  /* 12d9c839 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9c83c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d9c83f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c842 jne 0x12d9ca64 */
  if (!C.zf) goto L_12d9ca64;
  /* 12d9c848 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9c84b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d9c84f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c852 jne 0x12d9ca64 */
  if (!C.zf) goto L_12d9ca64;
  /* 12d9c858 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9c85b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12d9c85f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c862 jne 0x12d9ca64 */
  if (!C.zf) goto L_12d9ca64;
  /* 12d9c868 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9c86b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12d9c871:;
  /* 12d9c871 push 0x12da9f54 */
  push32((uint32_t)(0x12da9f54u));
  /* 12d9c876 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d9c87c push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c87d call 0x12d9e9e0 */
  push32(0x12d9c882u); f_12d9e9e0();
  /* 12d9c882 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c885 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12d9c88b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c892 je 0x12d9c8bd */
  if (C.zf) goto L_12d9c8bd;
  /* 12d9c894 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d9c89a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9c8a0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12d9c8a6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c8ad je 0x12d9c8bd */
  if (C.zf) goto L_12d9c8bd;
  /* 12d9c8af mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d9c8b5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d9c8b8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c8bb jne 0x12d9c8e3 */
  if (!C.zf) goto L_12d9c8e3;
L_12d9c8bd:;
  /* 12d9c8bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c8c1 je 0x12d9c8dc */
  if (C.zf) goto L_12d9c8dc;
  /* 12d9c8c3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d9c8c5 call 0x12d966e0 */
  push32(0x12d9c8cau); f_12d966e0();
  /* 12d9c8ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c8cd mov edx, dword ptr [0x12dad89c] */
  EDX = (r32((uint32_t)(0x12dad89c)));
  /* 12d9c8d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9c8d6 mov dword ptr [0x12dad89c], edx */
  w32((uint32_t)(0x12dad89c), (EDX));
L_12d9c8dc:;
  /* 12d9c8dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9c8de jmp 0x12d9cb7b */
  goto L_12d9cb7b;
L_12d9c8e3:;
  /* 12d9c8e3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12d9c8ea jmp 0x12d9c8f5 */
  goto L_12d9c8f5;
L_12d9c8ec:;
  /* 12d9c8ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9c8ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c8f2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d9c8f5:;
  /* 12d9c8f5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c8f9 jg 0x12d9c943 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d9c943;
  /* 12d9c8fb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12d9c901 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c902 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d9c908 push edx */
  push32((uint32_t)(EDX));
  /* 12d9c909 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9c90c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9c90f mov ecx, dword ptr [eax + 0x12dac598] */
  ECX = (r32((uint32_t)(EAX + 0x12dac598)));
  /* 12d9c915 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c916 call 0x12d9e9a0 */
  push32(0x12d9c91bu); f_12d9e9a0();
  /* 12d9c91b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c91e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9c920 jne 0x12d9c941 */
  if (!C.zf) goto L_12d9c941;
  /* 12d9c922 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9c925 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9c928 mov eax, dword ptr [edx + 0x12dac598] */
  EAX = (r32((uint32_t)(EDX + 0x12dac598)));
  /* 12d9c92e push eax */
  push32((uint32_t)(EAX));
  /* 12d9c92f call 0x12d95a70 */
  push32(0x12d9c934u); f_12d95a70();
  /* 12d9c934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c937 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c93d jne 0x12d9c941 */
  if (!C.zf) goto L_12d9c941;
  /* 12d9c93f jmp 0x12d9c943 */
  goto L_12d9c943;
L_12d9c941:;
  /* 12d9c941 jmp 0x12d9c8ec */
  goto L_12d9c8ec;
L_12d9c943:;
  /* 12d9c943 push 0x12da9f50 */
  push32((uint32_t)(0x12da9f50u));
  /* 12d9c948 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d9c94e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c951 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12d9c957 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d9c95d push edx */
  push32((uint32_t)(EDX));
  /* 12d9c95e call 0x12d9e960 */
  push32(0x12d9c963u); f_12d9e960();
  /* 12d9c963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c966 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12d9c96c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c973 jne 0x12d9c9a9 */
  if (!C.zf) goto L_12d9c9a9;
  /* 12d9c975 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d9c97b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d9c97e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c981 je 0x12d9c9a9 */
  if (C.zf) goto L_12d9c9a9;
  /* 12d9c983 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c987 je 0x12d9c9a2 */
  if (C.zf) goto L_12d9c9a2;
  /* 12d9c989 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d9c98b call 0x12d966e0 */
  push32(0x12d9c990u); f_12d966e0();
  /* 12d9c990 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c993 mov edx, dword ptr [0x12dad89c] */
  EDX = (r32((uint32_t)(0x12dad89c)));
  /* 12d9c999 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9c99c mov dword ptr [0x12dad89c], edx */
  w32((uint32_t)(0x12dad89c), (EDX));
L_12d9c9a2:;
  /* 12d9c9a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9c9a4 jmp 0x12d9cb7b */
  goto L_12d9cb7b;
L_12d9c9a9:;
  /* 12d9c9a9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9c9ad jg 0x12d9c9fa */
  if ((!C.zf&&C.sf==C.of)) goto L_12d9c9fa;
  /* 12d9c9af mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12d9c9b5 push eax */
  push32((uint32_t)(EAX));
  /* 12d9c9b6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d9c9bc push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c9bd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12d9c9c3 push edx */
  push32((uint32_t)(EDX));
  /* 12d9c9c4 call 0x12d96460 */
  push32(0x12d9c9c9u); f_12d96460();
  /* 12d9c9c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c9cc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12d9c9d2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12d9c9da lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12d9c9e0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9c9e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9c9e4 push edx */
  push32((uint32_t)(EDX));
  /* 12d9c9e5 call 0x12d9cb80 */
  push32(0x12d9c9eau); f_12d9cb80();
  /* 12d9c9ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c9ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9c9ef je 0x12d9c9fa */
  if (C.zf) goto L_12d9c9fa;
  /* 12d9c9f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9c9f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9c9f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d9c9fa:;
  /* 12d9c9fa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d9ca00 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ca06 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12d9ca0c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d9ca12 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d9ca15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9ca17 je 0x12d9ca28 */
  if (C.zf) goto L_12d9ca28;
  /* 12d9ca19 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d9ca1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ca22 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12d9ca28:;
  /* 12d9ca28 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d9ca2e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d9ca31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9ca33 jne 0x12d9c871 */
  if (!C.zf) goto L_12d9c871;
  /* 12d9ca39 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ca3d je 0x12d9ca4c */
  if (C.zf) goto L_12d9ca4c;
  /* 12d9ca3f call 0x12d9cd20 */
  push32(0x12d9ca44u); f_12d9cd20();
  /* 12d9ca44 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12d9ca4a jmp 0x12d9ca56 */
  goto L_12d9ca56;
L_12d9ca4c:;
  /* 12d9ca4c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12d9ca56:;
  /* 12d9ca56 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12d9ca5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9ca5f jmp 0x12d9cb51 */
  goto L_12d9cb51;
L_12d9ca64:;
  /* 12d9ca64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ca67 push edx */
  push32((uint32_t)(EDX));
  /* 12d9ca68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9ca6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9ca6c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12d9ca72 push eax */
  push32((uint32_t)(EAX));
  /* 12d9ca73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9ca76 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9ca77 call 0x12d9ce20 */
  push32(0x12d9ca7cu); f_12d9ce20();
  /* 12d9ca7c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ca7f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9ca82 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ca86 je 0x12d9cb51 */
  if (C.zf) goto L_12d9cb51;
  /* 12d9ca8c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d9ca93 jmp 0x12d9ca9e */
  goto L_12d9ca9e;
L_12d9ca95:;
  /* 12d9ca95 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9ca98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ca9b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d9ca9e:;
  /* 12d9ca9e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9caa2 jg 0x12d9cb00 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d9cb00;
  /* 12d9caa4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9caa8 je 0x12d9cafe */
  if (C.zf) goto L_12d9cafe;
  /* 12d9caaa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9caad imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9cab0 mov ecx, dword ptr [eax + 0x12dac59c] */
  ECX = (r32((uint32_t)(EAX + 0x12dac59c)));
  /* 12d9cab6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9cab7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12d9cabd push edx */
  push32((uint32_t)(EDX));
  /* 12d9cabe call 0x12d9e8d0 */
  push32(0x12d9cac3u); f_12d9e8d0();
  /* 12d9cac3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cac6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9cac8 je 0x12d9caf5 */
  if (C.zf) goto L_12d9caf5;
  /* 12d9caca lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12d9cad0 push eax */
  push32((uint32_t)(EAX));
  /* 12d9cad1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9cad4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9cad5 call 0x12d9cb80 */
  push32(0x12d9cadau); f_12d9cb80();
  /* 12d9cada add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cadd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9cadf je 0x12d9caec */
  if (C.zf) goto L_12d9caec;
  /* 12d9cae1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9cae4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cae7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d9caea jmp 0x12d9caf3 */
  goto L_12d9caf3;
L_12d9caec:;
  /* 12d9caec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12d9caf3:;
  /* 12d9caf3 jmp 0x12d9cafe */
  goto L_12d9cafe;
L_12d9caf5:;
  /* 12d9caf5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9caf8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cafb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d9cafe:;
  /* 12d9cafe jmp 0x12d9ca95 */
  goto L_12d9ca95;
L_12d9cb00:;
  /* 12d9cb00 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9cb04 je 0x12d9cb2b */
  if (C.zf) goto L_12d9cb2b;
  /* 12d9cb06 call 0x12d9cd20 */
  push32(0x12d9cb0bu); f_12d9cd20();
  /* 12d9cb0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9cb0e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9cb10 mov ecx, dword ptr [0x12dac59c] */
  ECX = (r32((uint32_t)(0x12dac59c)));
  /* 12d9cb16 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9cb17 call 0x12d936d0 */
  push32(0x12d9cb1cu); f_12d936d0();
  /* 12d9cb1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cb1f mov dword ptr [0x12dac59c], 0 */
  w32((uint32_t)(0x12dac59c), (0x0u));
  /* 12d9cb29 jmp 0x12d9cb51 */
  goto L_12d9cb51;
L_12d9cb2b:;
  /* 12d9cb2b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9cb2f je 0x12d9cb3e */
  if (C.zf) goto L_12d9cb3e;
  /* 12d9cb31 call 0x12d9cd20 */
  push32(0x12d9cb36u); f_12d9cd20();
  /* 12d9cb36 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12d9cb3c jmp 0x12d9cb48 */
  goto L_12d9cb48;
L_12d9cb3e:;
  /* 12d9cb3e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12d9cb48:;
  /* 12d9cb48 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12d9cb4e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d9cb51:;
  /* 12d9cb51 jmp 0x12d9cb5b */
  goto L_12d9cb5b;
L_12d9cb53:;
  /* 12d9cb53 call 0x12d9cd20 */
  push32(0x12d9cb58u); f_12d9cd20();
  /* 12d9cb58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d9cb5b:;
  /* 12d9cb5b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9cb5f je 0x12d9cb78 */
  if (C.zf) goto L_12d9cb78;
  /* 12d9cb61 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d9cb63 call 0x12d966e0 */
  push32(0x12d9cb68u); f_12d966e0();
  /* 12d9cb68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cb6b mov eax, dword ptr [0x12dad89c] */
  EAX = (r32((uint32_t)(0x12dad89c)));
  /* 12d9cb70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9cb73 mov dword ptr [0x12dad89c], eax */
  w32((uint32_t)(0x12dad89c), (EAX));
L_12d9cb78:;
  /* 12d9cb78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d9cb7b:;
  /* 12d9cb7b mov esp, ebp */
  ESP = (EBP);
  /* 12d9cb7d pop ebp */
  EBP = (pop32());
  /* 12d9cb7e ret  */
  ESPCHK(0x12d9c790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb80 @ 0x12d9cb80 (403 bytes, 117 insns) */
void f_12d9cb80(void) {
  FTRACE(0x12d9cb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9cb80 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9cb81 mov ebp, esp */
  EBP = (ESP);
  /* 12d9cb83 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9cb89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9cb8c push eax */
  push32((uint32_t)(EAX));
  /* 12d9cb8d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12d9cb93 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9cb94 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12d9cb9a push edx */
  push32((uint32_t)(EDX));
  /* 12d9cb9b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12d9cba1 push eax */
  push32((uint32_t)(EAX));
  /* 12d9cba2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9cba5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9cba6 call 0x12d9ce20 */
  push32(0x12d9cbabu); f_12d9ce20();
  /* 12d9cbab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cbae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9cbb0 jne 0x12d9cbb9 */
  if (!C.zf) goto L_12d9cbb9;
  /* 12d9cbb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9cbb4 jmp 0x12d9cd0f */
  goto L_12d9cd0f;
L_12d9cbb9:;
  /* 12d9cbb9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12d9cbbe push 0x12da9f58 */
  push32((uint32_t)(0x12da9f58u));
  /* 12d9cbc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9cbc5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12d9cbcb push edx */
  push32((uint32_t)(EDX));
  /* 12d9cbcc call 0x12d95a70 */
  push32(0x12d9cbd1u); f_12d95a70();
  /* 12d9cbd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cbd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cbd7 push eax */
  push32((uint32_t)(EAX));
  /* 12d9cbd8 call 0x12d92c40 */
  push32(0x12d9cbddu); f_12d92c40();
  /* 12d9cbdd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cbe0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9cbe3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9cbe7 jne 0x12d9cbf0 */
  if (!C.zf) goto L_12d9cbf0;
  /* 12d9cbe9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9cbeb jmp 0x12d9cd0f */
  goto L_12d9cd0f;
L_12d9cbf0:;
  /* 12d9cbf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9cbf3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9cbf6 mov ecx, dword ptr [eax + 0x12dac59c] */
  ECX = (r32((uint32_t)(EAX + 0x12dac59c)));
  /* 12d9cbfc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9cbff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9cc02 mov eax, dword ptr [edx*4 + 0x12dad718] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12dad718)));
  /* 12d9cc09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9cc0c push 6 */
  push32((uint32_t)(0x6u));
  /* 12d9cc0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9cc11 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9cc14 add ecx, 0x12dad768 */
  { uint32_t _a=(ECX),_b=(0x12dad768u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cc1a push ecx */
  push32((uint32_t)(ECX));
  /* 12d9cc1b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12d9cc1e push edx */
  push32((uint32_t)(EDX));
  /* 12d9cc1f call 0x12d99520 */
  push32(0x12d9cc24u); f_12d99520();
  /* 12d9cc24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cc27 mov eax, dword ptr [0x12dad730] */
  EAX = (r32((uint32_t)(0x12dad730)));
  /* 12d9cc2c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d9cc2f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12d9cc35 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9cc36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9cc39 push edx */
  push32((uint32_t)(EDX));
  /* 12d9cc3a call 0x12d95bf0 */
  push32(0x12d9cc3fu); f_12d95bf0();
  /* 12d9cc3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cc42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9cc45 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9cc48 mov dword ptr [ecx + 0x12dac59c], eax */
  w32((uint32_t)(ECX + 0x12dac59c), (EAX));
  /* 12d9cc4e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12d9cc54 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9cc5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9cc5d mov dword ptr [eax*4 + 0x12dad718], edx */
  w32((uint32_t)(EAX*4 + 0x12dad718), (EDX));
  /* 12d9cc64 push 6 */
  push32((uint32_t)(0x6u));
  /* 12d9cc66 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12d9cc6c push ecx */
  push32((uint32_t)(ECX));
  /* 12d9cc6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9cc70 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9cc73 add edx, 0x12dad768 */
  { uint32_t _a=(EDX),_b=(0x12dad768u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cc79 push edx */
  push32((uint32_t)(EDX));
  /* 12d9cc7a call 0x12d99520 */
  push32(0x12d9cc7fu); f_12d99520();
  /* 12d9cc7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cc82 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9cc86 jne 0x12d9cc93 */
  if (!C.zf) goto L_12d9cc93;
  /* 12d9cc88 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d9cc8e mov dword ptr [0x12dad730], eax */
  w32((uint32_t)(0x12dad730), (EAX));
L_12d9cc93:;
  /* 12d9cc93 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9cc97 jne 0x12d9cca5 */
  if (!C.zf) goto L_12d9cca5;
  /* 12d9cc99 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d9cc9f mov dword ptr [0x12dad734], ecx */
  w32((uint32_t)(0x12dad734), (ECX));
L_12d9cca5:;
  /* 12d9cca5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9cca8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9ccab call dword ptr [edx + 0x12dac5a0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x12dac5a0))), 0x12d9ccb1u);
  /* 12d9ccb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9ccb3 je 0x12d9ccec */
  if (C.zf) goto L_12d9ccec;
  /* 12d9ccb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ccb8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9ccbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9ccbe mov dword ptr [eax + 0x12dac59c], ecx */
  w32((uint32_t)(EAX + 0x12dac59c), (ECX));
  /* 12d9ccc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9ccc6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9ccc9 push edx */
  push32((uint32_t)(EDX));
  /* 12d9ccca call 0x12d936d0 */
  push32(0x12d9cccfu); f_12d936d0();
  /* 12d9cccf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ccd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ccd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9ccd8 mov dword ptr [eax*4 + 0x12dad718], ecx */
  w32((uint32_t)(EAX*4 + 0x12dad718), (ECX));
  /* 12d9ccdf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9cce2 mov dword ptr [0x12dad730], edx */
  w32((uint32_t)(0x12dad730), (EDX));
  /* 12d9cce8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9ccea jmp 0x12d9cd0f */
  goto L_12d9cd0f;
L_12d9ccec:;
  /* 12d9ccec cmp dword ptr [ebp - 0xc], 0x12dac488 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x12dac488u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ccf3 je 0x12d9cd03 */
  if (C.zf) goto L_12d9cd03;
  /* 12d9ccf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9ccf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9ccfa push eax */
  push32((uint32_t)(EAX));
  /* 12d9ccfb call 0x12d936d0 */
  push32(0x12d9cd00u); f_12d936d0();
  /* 12d9cd00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9cd03:;
  /* 12d9cd03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9cd06 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9cd09 mov eax, dword ptr [ecx + 0x12dac59c] */
  EAX = (r32((uint32_t)(ECX + 0x12dac59c)));
L_12d9cd0f:;
  /* 12d9cd0f mov esp, ebp */
  ESP = (EBP);
  /* 12d9cd11 pop ebp */
  EBP = (pop32());
  /* 12d9cd12 ret  */
  ESPCHK(0x12d9cb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd20 @ 0x12d9cd20 (256 bytes, 72 insns) */
void f_12d9cd20(void) {
  FTRACE(0x12d9cd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9cd20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9cd21 mov ebp, esp */
  EBP = (ESP);
  /* 12d9cd23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9cd26 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d9cd2d cmp dword ptr [0x12dac59c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dac59c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9cd34 jne 0x12d9cd54 */
  if (!C.zf) goto L_12d9cd54;
  /* 12d9cd36 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12d9cd3b push 0x12da9f58 */
  push32((uint32_t)(0x12da9f58u));
  /* 12d9cd40 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9cd42 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12d9cd47 call 0x12d92c40 */
  push32(0x12d9cd4cu); f_12d92c40();
  /* 12d9cd4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cd4f mov dword ptr [0x12dac59c], eax */
  w32((uint32_t)(0x12dac59c), (EAX));
L_12d9cd54:;
  /* 12d9cd54 mov eax, dword ptr [0x12dac59c] */
  EAX = (r32((uint32_t)(0x12dac59c)));
  /* 12d9cd59 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d9cd5c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d9cd63 jmp 0x12d9cd6e */
  goto L_12d9cd6e;
L_12d9cd65:;
  /* 12d9cd65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9cd68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cd6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d9cd6e:;
  /* 12d9cd6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9cd71 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9cd74 mov eax, dword ptr [edx + 0x12dac59c] */
  EAX = (r32((uint32_t)(EDX + 0x12dac59c)));
  /* 12d9cd7a push eax */
  push32((uint32_t)(EAX));
  /* 12d9cd7b push 0x12da9f64 */
  push32((uint32_t)(0x12da9f64u));
  /* 12d9cd80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9cd83 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9cd86 mov edx, dword ptr [ecx + 0x12dac598] */
  EDX = (r32((uint32_t)(ECX + 0x12dac598)));
  /* 12d9cd8c push edx */
  push32((uint32_t)(EDX));
  /* 12d9cd8d push 3 */
  push32((uint32_t)(0x3u));
  /* 12d9cd8f mov eax, dword ptr [0x12dac59c] */
  EAX = (r32((uint32_t)(0x12dac59c)));
  /* 12d9cd94 push eax */
  push32((uint32_t)(EAX));
  /* 12d9cd95 call 0x12d9cfc0 */
  push32(0x12d9cd9au); f_12d9cfc0();
  /* 12d9cd9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cd9d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9cda1 jge 0x12d9cde9 */
  if ((C.sf==C.of)) goto L_12d9cde9;
  /* 12d9cda3 push 0x12da9f50 */
  push32((uint32_t)(0x12da9f50u));
  /* 12d9cda8 mov ecx, dword ptr [0x12dac59c] */
  ECX = (r32((uint32_t)(0x12dac59c)));
  /* 12d9cdae push ecx */
  push32((uint32_t)(ECX));
  /* 12d9cdaf call 0x12d95c00 */
  push32(0x12d9cdb4u); f_12d95c00();
  /* 12d9cdb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cdb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9cdba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cdbd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9cdc0 mov eax, dword ptr [edx + 0x12dac59c] */
  EAX = (r32((uint32_t)(EDX + 0x12dac59c)));
  /* 12d9cdc6 push eax */
  push32((uint32_t)(EAX));
  /* 12d9cdc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9cdca imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9cdcd mov edx, dword ptr [ecx + 0x12dac59c] */
  EDX = (r32((uint32_t)(ECX + 0x12dac59c)));
  /* 12d9cdd3 push edx */
  push32((uint32_t)(EDX));
  /* 12d9cdd4 call 0x12d9e8d0 */
  push32(0x12d9cdd9u); f_12d9e8d0();
  /* 12d9cdd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cddc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9cdde je 0x12d9cde7 */
  if (C.zf) goto L_12d9cde7;
  /* 12d9cde0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d9cde7:;
  /* 12d9cde7 jmp 0x12d9ce17 */
  goto L_12d9ce17;
L_12d9cde9:;
  /* 12d9cde9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9cded jne 0x12d9cdf6 */
  if (!C.zf) goto L_12d9cdf6;
  /* 12d9cdef mov eax, dword ptr [0x12dac59c] */
  EAX = (r32((uint32_t)(0x12dac59c)));
  /* 12d9cdf4 jmp 0x12d9ce1c */
  goto L_12d9ce1c;
L_12d9cdf6:;
  /* 12d9cdf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9cdf8 mov eax, dword ptr [0x12dac59c] */
  EAX = (r32((uint32_t)(0x12dac59c)));
  /* 12d9cdfd push eax */
  push32((uint32_t)(EAX));
  /* 12d9cdfe call 0x12d936d0 */
  push32(0x12d9ce03u); f_12d936d0();
  /* 12d9ce03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ce06 mov dword ptr [0x12dac59c], 0 */
  w32((uint32_t)(0x12dac59c), (0x0u));
  /* 12d9ce10 mov eax, dword ptr [0x12dac5b4] */
  EAX = (r32((uint32_t)(0x12dac5b4)));
  /* 12d9ce15 jmp 0x12d9ce1c */
  goto L_12d9ce1c;
L_12d9ce17:;
  /* 12d9ce17 jmp 0x12d9cd65 */
  goto L_12d9cd65;
L_12d9ce1c:;
  /* 12d9ce1c mov esp, ebp */
  ESP = (EBP);
  /* 12d9ce1e pop ebp */
  EBP = (pop32());
  /* 12d9ce1f ret  */
  ESPCHK(0x12d9cd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce20 @ 0x12d9ce20 (388 bytes, 115 insns) */
void f_12d9ce20(void) {
  FTRACE(0x12d9ce20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9ce20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9ce21 mov ebp, esp */
  EBP = (ESP);
  /* 12d9ce23 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ce29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ce2d jne 0x12d9ce36 */
  if (!C.zf) goto L_12d9ce36;
  /* 12d9ce2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9ce31 jmp 0x12d9cfa0 */
  goto L_12d9cfa0;
L_12d9ce36:;
  /* 12d9ce36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ce39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d9ce3c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ce3f jne 0x12d9ce90 */
  if (!C.zf) goto L_12d9ce90;
  /* 12d9ce41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ce44 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d9ce48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9ce4a jne 0x12d9ce90 */
  if (!C.zf) goto L_12d9ce90;
  /* 12d9ce4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9ce4f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12d9ce52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9ce55 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12d9ce59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ce5d je 0x12d9ce79 */
  if (C.zf) goto L_12d9ce79;
  /* 12d9ce5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9ce62 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12d9ce67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9ce6a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12d9ce70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9ce73 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12d9ce79:;
  /* 12d9ce79 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ce7d je 0x12d9ce88 */
  if (C.zf) goto L_12d9ce88;
  /* 12d9ce7f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9ce82 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12d9ce88:;
  /* 12d9ce88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9ce8b jmp 0x12d9cfa0 */
  goto L_12d9cfa0;
L_12d9ce90:;
  /* 12d9ce90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ce93 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9ce94 push 0x12dac510 */
  push32((uint32_t)(0x12dac510u));
  /* 12d9ce99 call 0x12d9e8d0 */
  push32(0x12d9ce9eu); f_12d9e8d0();
  /* 12d9ce9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cea1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9cea3 je 0x12d9cf58 */
  if (C.zf) goto L_12d9cf58;
  /* 12d9cea9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ceac push edx */
  push32((uint32_t)(EDX));
  /* 12d9cead push 0x12dac48c */
  push32((uint32_t)(0x12dac48cu));
  /* 12d9ceb2 call 0x12d9e8d0 */
  push32(0x12d9ceb7u); f_12d9e8d0();
  /* 12d9ceb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ceba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9cebc je 0x12d9cf58 */
  if (C.zf) goto L_12d9cf58;
  /* 12d9cec2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9cec5 push eax */
  push32((uint32_t)(EAX));
  /* 12d9cec6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12d9cecc push ecx */
  push32((uint32_t)(ECX));
  /* 12d9cecd call 0x12d9d010 */
  push32(0x12d9ced2u); f_12d9d010();
  /* 12d9ced2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ced5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9ced7 je 0x12d9cee0 */
  if (C.zf) goto L_12d9cee0;
  /* 12d9ced9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9cedb jmp 0x12d9cfa0 */
  goto L_12d9cfa0;
L_12d9cee0:;
  /* 12d9cee0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12d9cee6 push edx */
  push32((uint32_t)(EDX));
  /* 12d9cee7 push 0x12dad740 */
  push32((uint32_t)(0x12dad740u));
  /* 12d9ceec lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12d9cef2 push eax */
  push32((uint32_t)(EAX));
  /* 12d9cef3 call 0x12d9ea20 */
  push32(0x12d9cef8u); f_12d9ea20();
  /* 12d9cef8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cefb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9cefd jne 0x12d9cf06 */
  if (!C.zf) goto L_12d9cf06;
  /* 12d9ceff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9cf01 jmp 0x12d9cfa0 */
  goto L_12d9cfa0;
L_12d9cf06:;
  /* 12d9cf06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9cf08 mov cx, word ptr [0x12dad744] */
  CX = (r16((uint32_t)(0x12dad744)));
  /* 12d9cf0f mov dword ptr [0x12dad748], ecx */
  w32((uint32_t)(0x12dad748), (ECX));
  /* 12d9cf15 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12d9cf1b push edx */
  push32((uint32_t)(EDX));
  /* 12d9cf1c push 0x12dac510 */
  push32((uint32_t)(0x12dac510u));
  /* 12d9cf21 call 0x12d9d170 */
  push32(0x12d9cf26u); f_12d9d170();
  /* 12d9cf26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cf29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9cf2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d9cf2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9cf31 je 0x12d9cf46 */
  if (C.zf) goto L_12d9cf46;
  /* 12d9cf33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9cf36 push edx */
  push32((uint32_t)(EDX));
  /* 12d9cf37 push 0x12dac48c */
  push32((uint32_t)(0x12dac48cu));
  /* 12d9cf3c call 0x12d95bf0 */
  push32(0x12d9cf41u); f_12d95bf0();
  /* 12d9cf41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cf44 jmp 0x12d9cf58 */
  goto L_12d9cf58;
L_12d9cf46:;
  /* 12d9cf46 push 0x12dac510 */
  push32((uint32_t)(0x12dac510u));
  /* 12d9cf4b push 0x12dac48c */
  push32((uint32_t)(0x12dac48cu));
  /* 12d9cf50 call 0x12d95bf0 */
  push32(0x12d9cf55u); f_12d95bf0();
  /* 12d9cf55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9cf58:;
  /* 12d9cf58 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9cf5c je 0x12d9cf71 */
  if (C.zf) goto L_12d9cf71;
  /* 12d9cf5e push 6 */
  push32((uint32_t)(0x6u));
  /* 12d9cf60 push 0x12dad740 */
  push32((uint32_t)(0x12dad740u));
  /* 12d9cf65 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9cf68 push eax */
  push32((uint32_t)(EAX));
  /* 12d9cf69 call 0x12d99520 */
  push32(0x12d9cf6eu); f_12d99520();
  /* 12d9cf6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9cf71:;
  /* 12d9cf71 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9cf75 je 0x12d9cf8a */
  if (C.zf) goto L_12d9cf8a;
  /* 12d9cf77 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d9cf79 push 0x12dad748 */
  push32((uint32_t)(0x12dad748u));
  /* 12d9cf7e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9cf81 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9cf82 call 0x12d99520 */
  push32(0x12d9cf87u); f_12d99520();
  /* 12d9cf87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9cf8a:;
  /* 12d9cf8a push 0x12dac510 */
  push32((uint32_t)(0x12dac510u));
  /* 12d9cf8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9cf92 push edx */
  push32((uint32_t)(EDX));
  /* 12d9cf93 call 0x12d95bf0 */
  push32(0x12d9cf98u); f_12d95bf0();
  /* 12d9cf98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cf9b mov eax, 0x12dac510 */
  EAX = (0x12dac510u);
L_12d9cfa0:;
  /* 12d9cfa0 mov esp, ebp */
  ESP = (EBP);
  /* 12d9cfa2 pop ebp */
  EBP = (pop32());
  /* 12d9cfa3 ret  */
  ESPCHK(0x12d9ce20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfb0 @ 0x12d9cfb0 (7 bytes, 5 insns) */
void f_12d9cfb0(void) {
  FTRACE(0x12d9cfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9cfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9cfb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9cfb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9cfb5 pop ebp */
  EBP = (pop32());
  /* 12d9cfb6 ret  */
  ESPCHK(0x12d9cfb0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12d9cfc0 (79 bytes, 28 insns) */
void f_12d9cfc0(void) {
  FTRACE(0x12d9cfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9cfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9cfc1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9cfc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9cfc6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12d9cfc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9cfcc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d9cfd3 jmp 0x12d9cfde */
  goto L_12d9cfde;
L_12d9cfd5:;
  /* 12d9cfd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9cfd8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cfdb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d9cfde:;
  /* 12d9cfde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9cfe1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9cfe4 jge 0x12d9d004 */
  if ((C.sf==C.of)) goto L_12d9d004;
  /* 12d9cfe6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9cfe9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9cfec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9cfef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9cff2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d9cff5 push edx */
  push32((uint32_t)(EDX));
  /* 12d9cff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9cff9 push eax */
  push32((uint32_t)(EAX));
  /* 12d9cffa call 0x12d95c00 */
  push32(0x12d9cfffu); f_12d95c00();
  /* 12d9cfff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d002 jmp 0x12d9cfd5 */
  goto L_12d9cfd5;
L_12d9d004:;
  /* 12d9d004 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d9d00b mov esp, ebp */
  ESP = (EBP);
  /* 12d9d00d pop ebp */
  EBP = (pop32());
  /* 12d9d00e ret  */
  ESPCHK(0x12d9cfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d010 @ 0x12d9d010 (349 bytes, 122 insns) */
void f_12d9d010(void) {
  FTRACE(0x12d9d010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9d010 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9d011 mov ebp, esp */
  EBP = (ESP);
  /* 12d9d013 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9d016 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12d9d01b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9d01d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d020 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d021 call 0x12d969b0 */
  push32(0x12d9d026u); f_12d969b0();
  /* 12d9d026 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d029 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9d02c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d9d02f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9d031 jne 0x12d9d03a */
  if (!C.zf) goto L_12d9d03a;
  /* 12d9d033 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9d035 jmp 0x12d9d169 */
  goto L_12d9d169;
L_12d9d03a:;
  /* 12d9d03a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9d03d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d9d040 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d043 jne 0x12d9d070 */
  if (!C.zf) goto L_12d9d070;
  /* 12d9d045 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9d048 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d9d04c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9d04e je 0x12d9d070 */
  if (C.zf) goto L_12d9d070;
  /* 12d9d050 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9d053 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d056 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d057 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d05a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d060 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d061 call 0x12d95bf0 */
  push32(0x12d9d066u); f_12d95bf0();
  /* 12d9d066 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d069 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9d06b jmp 0x12d9d169 */
  goto L_12d9d169;
L_12d9d070:;
  /* 12d9d070 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d9d077 jmp 0x12d9d082 */
  goto L_12d9d082;
L_12d9d079:;
  /* 12d9d079 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d07c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d07f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d9d082:;
  /* 12d9d082 push 0x12da9f68 */
  push32((uint32_t)(0x12da9f68u));
  /* 12d9d087 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9d08a push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d08b call 0x12d9e960 */
  push32(0x12d9d090u); f_12d9e960();
  /* 12d9d090 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d093 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d9d096 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d09a jne 0x12d9d0a4 */
  if (!C.zf) goto L_12d9d0a4;
  /* 12d9d09c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9d09f jmp 0x12d9d169 */
  goto L_12d9d169;
L_12d9d0a4:;
  /* 12d9d0a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9d0a7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d0aa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d9d0ac mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12d9d0af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d0b3 jne 0x12d9d0da */
  if (!C.zf) goto L_12d9d0da;
  /* 12d9d0b5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d0b9 jge 0x12d9d0da */
  if ((C.sf==C.of)) goto L_12d9d0da;
  /* 12d9d0bb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d9d0bf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d0c2 je 0x12d9d0da */
  if (C.zf) goto L_12d9d0da;
  /* 12d9d0c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d0c7 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d0c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9d0cb push eax */
  push32((uint32_t)(EAX));
  /* 12d9d0cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d0cf push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d0d0 call 0x12d96460 */
  push32(0x12d9d0d5u); f_12d96460();
  /* 12d9d0d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d0d8 jmp 0x12d9d140 */
  goto L_12d9d140;
L_12d9d0da:;
  /* 12d9d0da cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d0de jne 0x12d9d108 */
  if (!C.zf) goto L_12d9d108;
  /* 12d9d0e0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d0e4 jge 0x12d9d108 */
  if ((C.sf==C.of)) goto L_12d9d108;
  /* 12d9d0e6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d9d0ea cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d0ed je 0x12d9d108 */
  if (C.zf) goto L_12d9d108;
  /* 12d9d0ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d0f2 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d0f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9d0f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d0f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d0fa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d0fd push edx */
  push32((uint32_t)(EDX));
  /* 12d9d0fe call 0x12d96460 */
  push32(0x12d9d103u); f_12d96460();
  /* 12d9d103 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d106 jmp 0x12d9d140 */
  goto L_12d9d140;
L_12d9d108:;
  /* 12d9d108 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d10c jne 0x12d9d13b */
  if (!C.zf) goto L_12d9d13b;
  /* 12d9d10e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d9d112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9d114 je 0x12d9d11f */
  if (C.zf) goto L_12d9d11f;
  /* 12d9d116 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d9d11a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d11d jne 0x12d9d13b */
  if (!C.zf) goto L_12d9d13b;
L_12d9d11f:;
  /* 12d9d11f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d122 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d123 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9d126 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d127 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d12a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d130 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d131 call 0x12d96460 */
  push32(0x12d9d136u); f_12d96460();
  /* 12d9d136 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d139 jmp 0x12d9d140 */
  goto L_12d9d140;
L_12d9d13b:;
  /* 12d9d13b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9d13e jmp 0x12d9d169 */
  goto L_12d9d169;
L_12d9d140:;
  /* 12d9d140 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d9d144 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d147 jne 0x12d9d14b */
  if (!C.zf) goto L_12d9d14b;
  /* 12d9d149 jmp 0x12d9d167 */
  goto L_12d9d167;
L_12d9d14b:;
  /* 12d9d14b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d9d14f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9d151 jne 0x12d9d155 */
  if (!C.zf) goto L_12d9d155;
  /* 12d9d153 jmp 0x12d9d167 */
  goto L_12d9d167;
L_12d9d155:;
  /* 12d9d155 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d158 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9d15b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12d9d15f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12d9d162 jmp 0x12d9d079 */
  goto L_12d9d079;
L_12d9d167:;
  /* 12d9d167 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d9d169:;
  /* 12d9d169 mov esp, ebp */
  ESP = (EBP);
  /* 12d9d16b pop ebp */
  EBP = (pop32());
  /* 12d9d16c ret  */
  ESPCHK(0x12d9d010u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12d9d170 (101 bytes, 36 insns) */
void f_12d9d170(void) {
  FTRACE(0x12d9d170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9d170 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9d171 mov ebp, esp */
  EBP = (ESP);
  /* 12d9d173 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9d176 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d177 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d17a push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d17b call 0x12d95bf0 */
  push32(0x12d9d180u); f_12d95bf0();
  /* 12d9d180 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d183 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9d186 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12d9d18a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9d18c je 0x12d9d1a8 */
  if (C.zf) goto L_12d9d1a8;
  /* 12d9d18e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9d191 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d194 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d195 push 0x12da9f70 */
  push32((uint32_t)(0x12da9f70u));
  /* 12d9d19a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9d19c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d19f push edx */
  push32((uint32_t)(EDX));
  /* 12d9d1a0 call 0x12d9cfc0 */
  push32(0x12d9d1a5u); f_12d9cfc0();
  /* 12d9d1a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9d1a8:;
  /* 12d9d1a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9d1ab movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12d9d1b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9d1b4 je 0x12d9d1d3 */
  if (C.zf) goto L_12d9d1d3;
  /* 12d9d1b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9d1b9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d1bf push edx */
  push32((uint32_t)(EDX));
  /* 12d9d1c0 push 0x12da9f6c */
  push32((uint32_t)(0x12da9f6cu));
  /* 12d9d1c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9d1c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d1ca push eax */
  push32((uint32_t)(EAX));
  /* 12d9d1cb call 0x12d9cfc0 */
  push32(0x12d9d1d0u); f_12d9cfc0();
  /* 12d9d1d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9d1d3:;
  /* 12d9d1d3 pop ebp */
  EBP = (pop32());
  /* 12d9d1d4 ret  */
  ESPCHK(0x12d9d170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1e0 @ 0x12d9d1e0 (130 bytes, 50 insns) */
void f_12d9d1e0(void) {
  FTRACE(0x12d9d1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9d1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9d1e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9d1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d1e4 push ebx */
  push32((uint32_t)(EBX));
  /* 12d9d1e5 push esi */
  push32((uint32_t)(ESI));
  /* 12d9d1e6 push edi */
  push32((uint32_t)(EDI));
  /* 12d9d1e7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d9d1ee:;
  /* 12d9d1ee cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d1f2 jne 0x12d9d212 */
  if (!C.zf) goto L_12d9d212;
  /* 12d9d1f4 push 0x12da9f80 */
  push32((uint32_t)(0x12da9f80u));
  /* 12d9d1f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9d1fb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12d9d1fd push 0x12da9f74 */
  push32((uint32_t)(0x12da9f74u));
  /* 12d9d202 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9d204 call 0x12d91d00 */
  push32(0x12d9d209u); f_12d91d00();
  /* 12d9d209 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d20c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d20f jne 0x12d9d212 */
  if (!C.zf) goto L_12d9d212;
  /* 12d9d211 int3  */
  x86_unimpl("int3 @ 0x12d9d211");
L_12d9d212:;
  /* 12d9d212 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9d214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9d216 jne 0x12d9d1ee */
  if (!C.zf) goto L_12d9d1ee;
  /* 12d9d218 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d21b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d9d21e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9d221 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9d223 je 0x12d9d231 */
  if (C.zf) goto L_12d9d231;
  /* 12d9d225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d228 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12d9d22f jmp 0x12d9d258 */
  goto L_12d9d258;
L_12d9d231:;
  /* 12d9d231 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d234 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d235 call 0x12d9ba50 */
  push32(0x12d9d23au); f_12d9ba50();
  /* 12d9d23a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d23d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d240 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d241 call 0x12d9d270 */
  push32(0x12d9d246u); f_12d9d270();
  /* 12d9d246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d249 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9d24c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d24f push eax */
  push32((uint32_t)(EAX));
  /* 12d9d250 call 0x12d9bac0 */
  push32(0x12d9d255u); f_12d9bac0();
  /* 12d9d255 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9d258:;
  /* 12d9d258 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d25b pop edi */
  EDI = (pop32());
  /* 12d9d25c pop esi */
  ESI = (pop32());
  /* 12d9d25d pop ebx */
  EBX = (pop32());
  /* 12d9d25e mov esp, ebp */
  ESP = (EBP);
  /* 12d9d260 pop ebp */
  EBP = (pop32());
  /* 12d9d261 ret  */
  ESPCHK(0x12d9d1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d270 @ 0x12d9d270 (190 bytes, 67 insns) */
void f_12d9d270(void) {
  FTRACE(0x12d9d270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9d270 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9d271 mov ebp, esp */
  EBP = (ESP);
  /* 12d9d273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9d276 push ebx */
  push32((uint32_t)(EBX));
  /* 12d9d277 push esi */
  push32((uint32_t)(ESI));
  /* 12d9d278 push edi */
  push32((uint32_t)(EDI));
  /* 12d9d279 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d9d280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d283 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d9d286:;
  /* 12d9d286 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d28a jne 0x12d9d2aa */
  if (!C.zf) goto L_12d9d2aa;
  /* 12d9d28c push 0x12da9e20 */
  push32((uint32_t)(0x12da9e20u));
  /* 12d9d291 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9d293 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12d9d295 push 0x12da9f74 */
  push32((uint32_t)(0x12da9f74u));
  /* 12d9d29a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9d29c call 0x12d91d00 */
  push32(0x12d9d2a1u); f_12d91d00();
  /* 12d9d2a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d2a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d2a7 jne 0x12d9d2aa */
  if (!C.zf) goto L_12d9d2aa;
  /* 12d9d2a9 int3  */
  x86_unimpl("int3 @ 0x12d9d2a9");
L_12d9d2aa:;
  /* 12d9d2aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d2ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9d2ae jne 0x12d9d286 */
  if (!C.zf) goto L_12d9d286;
  /* 12d9d2b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9d2b3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d9d2b6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9d2bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9d2bd je 0x12d9d31a */
  if (C.zf) goto L_12d9d31a;
  /* 12d9d2bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9d2c2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d2c3 call 0x12d9c570 */
  push32(0x12d9d2c8u); f_12d9c570();
  /* 12d9d2c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d2cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9d2ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9d2d1 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d2d2 call 0x12d9f8f0 */
  push32(0x12d9d2d7u); f_12d9f8f0();
  /* 12d9d2d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d2da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9d2dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d9d2e0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d2e1 call 0x12d9f7c0 */
  push32(0x12d9d2e6u); f_12d9f7c0();
  /* 12d9d2e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d2e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9d2eb jge 0x12d9d2f6 */
  if ((C.sf==C.of)) goto L_12d9d2f6;
  /* 12d9d2ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d9d2f4 jmp 0x12d9d31a */
  goto L_12d9d31a;
L_12d9d2f6:;
  /* 12d9d2f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9d2f9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d2fd je 0x12d9d31a */
  if (C.zf) goto L_12d9d31a;
  /* 12d9d2ff push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9d301 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9d304 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d9d307 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d308 call 0x12d936d0 */
  push32(0x12d9d30du); f_12d936d0();
  /* 12d9d30d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d310 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9d313 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12d9d31a:;
  /* 12d9d31a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9d31d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12d9d324 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d327 pop edi */
  EDI = (pop32());
  /* 12d9d328 pop esi */
  ESI = (pop32());
  /* 12d9d329 pop ebx */
  EBX = (pop32());
  /* 12d9d32a mov esp, ebp */
  ESP = (EBP);
  /* 12d9d32c pop ebp */
  EBP = (pop32());
  /* 12d9d32d ret  */
  ESPCHK(0x12d9d270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d330 @ 0x12d9d330 (210 bytes, 63 insns) */
void f_12d9d330(void) {
  FTRACE(0x12d9d330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9d330 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9d331 mov ebp, esp */
  EBP = (ESP);
  /* 12d9d333 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d337 cmp eax, dword ptr [0x12daf03c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12daf03c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d33d jae 0x12d9d361 */
  if (!C.cf) goto L_12d9d361;
  /* 12d9d33f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d342 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d9d345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d348 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9d34b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9d34e mov eax, dword ptr [ecx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12daef00)));
  /* 12d9d355 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d9d35a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d35d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9d35f jne 0x12d9d374 */
  if (!C.zf) goto L_12d9d374;
L_12d9d361:;
  /* 12d9d361 call 0x12d9ab10 */
  push32(0x12d9d366u); f_12d9ab10();
  /* 12d9d366 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d9d36c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9d36f jmp 0x12d9d3fe */
  goto L_12d9d3fe;
L_12d9d374:;
  /* 12d9d374 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d377 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d378 call 0x12d9c330 */
  push32(0x12d9d37du); f_12d9c330();
  /* 12d9d37d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d380 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d383 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d9d386 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d389 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d38c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9d38f mov edx, dword ptr [eax*4 + 0x12daef00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12daef00)));
  /* 12d9d396 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12d9d39b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9d39e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9d3a0 je 0x12d9d3dd */
  if (C.zf) goto L_12d9d3dd;
  /* 12d9d3a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d3a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d3a6 call 0x12d9c1b0 */
  push32(0x12d9d3abu); f_12d9c1b0();
  /* 12d9d3ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d3ae push eax */
  push32((uint32_t)(EAX));
  /* 12d9d3af call dword ptr [0x12db0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0278))), 0x12d9d3b5u);
  /* 12d9d3b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9d3b7 jne 0x12d9d3c4 */
  if (!C.zf) goto L_12d9d3c4;
  /* 12d9d3b9 call dword ptr [0x12db02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02d8))), 0x12d9d3bfu);
  /* 12d9d3bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9d3c2 jmp 0x12d9d3cb */
  goto L_12d9d3cb;
L_12d9d3c4:;
  /* 12d9d3c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d9d3cb:;
  /* 12d9d3cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d3cf jne 0x12d9d3d3 */
  if (!C.zf) goto L_12d9d3d3;
  /* 12d9d3d1 jmp 0x12d9d3ef */
  goto L_12d9d3ef;
L_12d9d3d3:;
  /* 12d9d3d3 call 0x12d9ab20 */
  push32(0x12d9d3d8u); f_12d9ab20();
  /* 12d9d3d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d3db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d9d3dd:;
  /* 12d9d3dd call 0x12d9ab10 */
  push32(0x12d9d3e2u); f_12d9ab10();
  /* 12d9d3e2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d9d3e8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d9d3ef:;
  /* 12d9d3ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d3f2 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d3f3 call 0x12d9c3c0 */
  push32(0x12d9d3f8u); f_12d9c3c0();
  /* 12d9d3f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d3fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d9d3fe:;
  /* 12d9d3fe mov esp, ebp */
  ESP = (EBP);
  /* 12d9d400 pop ebp */
  EBP = (pop32());
  /* 12d9d401 ret  */
  ESPCHK(0x12d9d330u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12d9d410 (219 bytes, 64 insns) */
void f_12d9d410(void) {
  FTRACE(0x12d9d410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9d410 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9d411 mov ebp, esp */
  EBP = (ESP);
  /* 12d9d413 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d414 cmp dword ptr [0x12dad72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d41b je 0x12d9d4b1 */
  if (C.zf) goto L_12d9d4b1;
  /* 12d9d421 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12d9d423 push 0x12da9f90 */
  push32((uint32_t)(0x12da9f90u));
  /* 12d9d428 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9d42a push 0xac */
  push32((uint32_t)(0xacu));
  /* 12d9d42f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d431 call 0x12d93050 */
  push32(0x12d9d436u); f_12d93050();
  /* 12d9d436 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d439 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9d43c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d440 jne 0x12d9d44c */
  if (!C.zf) goto L_12d9d44c;
  /* 12d9d442 mov eax, 1 */
  EAX = (0x1u);
  /* 12d9d447 jmp 0x12d9d4e7 */
  goto L_12d9d4e7;
L_12d9d44c:;
  /* 12d9d44c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d44f push eax */
  push32((uint32_t)(EAX));
  /* 12d9d450 call 0x12d9d4f0 */
  push32(0x12d9d455u); f_12d9d4f0();
  /* 12d9d455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9d45a je 0x12d9d47d */
  if (C.zf) goto L_12d9d47d;
  /* 12d9d45c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d45f push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d460 call 0x12d9da80 */
  push32(0x12d9d465u); f_12d9da80();
  /* 12d9d465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d468 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9d46a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d46d push edx */
  push32((uint32_t)(EDX));
  /* 12d9d46e call 0x12d936d0 */
  push32(0x12d9d473u); f_12d936d0();
  /* 12d9d473 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d476 mov eax, 1 */
  EAX = (0x1u);
  /* 12d9d47b jmp 0x12d9d4e7 */
  goto L_12d9d4e7;
L_12d9d47d:;
  /* 12d9d47d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d480 mov dword ptr [0x12dacd58], eax */
  w32((uint32_t)(0x12dacd58), (EAX));
  /* 12d9d485 mov ecx, dword ptr [0x12dad74c] */
  ECX = (r32((uint32_t)(0x12dad74c)));
  /* 12d9d48b push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d48c call 0x12d9da80 */
  push32(0x12d9d491u); f_12d9da80();
  /* 12d9d491 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d494 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9d496 mov edx, dword ptr [0x12dad74c] */
  EDX = (r32((uint32_t)(0x12dad74c)));
  /* 12d9d49c push edx */
  push32((uint32_t)(EDX));
  /* 12d9d49d call 0x12d936d0 */
  push32(0x12d9d4a2u); f_12d936d0();
  /* 12d9d4a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d4a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d4a8 mov dword ptr [0x12dad74c], eax */
  w32((uint32_t)(0x12dad74c), (EAX));
  /* 12d9d4ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9d4af jmp 0x12d9d4e7 */
  goto L_12d9d4e7;
L_12d9d4b1:;
  /* 12d9d4b1 mov dword ptr [0x12dacd58], 0x12dacd60 */
  w32((uint32_t)(0x12dacd58), (0x12dacd60u));
  /* 12d9d4bb mov ecx, dword ptr [0x12dad74c] */
  ECX = (r32((uint32_t)(0x12dad74c)));
  /* 12d9d4c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9d4c2 call 0x12d9da80 */
  push32(0x12d9d4c7u); f_12d9da80();
  /* 12d9d4c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d4ca push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9d4cc mov edx, dword ptr [0x12dad74c] */
  EDX = (r32((uint32_t)(0x12dad74c)));
  /* 12d9d4d2 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d4d3 call 0x12d936d0 */
  push32(0x12d9d4d8u); f_12d936d0();
  /* 12d9d4d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d4db mov dword ptr [0x12dad74c], 0 */
  w32((uint32_t)(0x12dad74c), (0x0u));
  /* 12d9d4e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d9d4e7:;
  /* 12d9d4e7 mov esp, ebp */
  ESP = (EBP);
  /* 12d9d4e9 pop ebp */
  EBP = (pop32());
  /* 12d9d4ea ret  */
  ESPCHK(0x12d9d410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4f0 @ 0x12d9d4f0 (1423 bytes, 533 insns) */
void f_12d9d4f0(void) {
  FTRACE(0x12d9d4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9d4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9d4f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9d4f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9d4f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d9d4fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9d4ff mov ax, word ptr [0x12dad786] */
  AX = (r16((uint32_t)(0x12dad786)));
  /* 12d9d505 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9d508 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d50a mov cx, word ptr [0x12dad788] */
  CX = (r16((uint32_t)(0x12dad788)));
  /* 12d9d511 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9d514 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9d518 jne 0x12d9d522 */
  if (!C.zf) goto L_12d9d522;
  /* 12d9d51a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9d51d jmp 0x12d9da7b */
  goto L_12d9da7b;
L_12d9d522:;
  /* 12d9d522 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d525 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d528 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d529 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12d9d52b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d52e push eax */
  push32((uint32_t)(EAX));
  /* 12d9d52f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d531 call 0x12da0e00 */
  push32(0x12d9d536u); f_12da0e00();
  /* 12d9d536 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d539 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d53c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d53e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d541 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d544 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d547 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d548 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12d9d54a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d54d push eax */
  push32((uint32_t)(EAX));
  /* 12d9d54e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d550 call 0x12da0e00 */
  push32(0x12d9d555u); f_12da0e00();
  /* 12d9d555 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d558 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d55b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d55d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d560 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d563 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d566 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d567 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12d9d569 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d56c push eax */
  push32((uint32_t)(EAX));
  /* 12d9d56d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d56f call 0x12da0e00 */
  push32(0x12d9d574u); f_12da0e00();
  /* 12d9d574 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d577 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d57a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d57c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d57f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d582 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d585 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d586 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12d9d588 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d58b push eax */
  push32((uint32_t)(EAX));
  /* 12d9d58c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d58e call 0x12da0e00 */
  push32(0x12d9d593u); f_12da0e00();
  /* 12d9d593 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d596 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d599 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d59b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d59e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d5a1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d5a4 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d5a5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12d9d5a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d5aa push eax */
  push32((uint32_t)(EAX));
  /* 12d9d5ab push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d5ad call 0x12da0e00 */
  push32(0x12d9d5b2u); f_12da0e00();
  /* 12d9d5b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d5b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d5b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d5ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d5bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d5c0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d5c3 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d5c4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12d9d5c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d5c9 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d5ca push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d5cc call 0x12da0e00 */
  push32(0x12d9d5d1u); f_12da0e00();
  /* 12d9d5d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d5d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d5d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d5d9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d5dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d5df push edx */
  push32((uint32_t)(EDX));
  /* 12d9d5e0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12d9d5e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d5e5 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d5e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d5e8 call 0x12da0e00 */
  push32(0x12d9d5edu); f_12da0e00();
  /* 12d9d5ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d5f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d5f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d5f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d5f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d5fb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d5fe push edx */
  push32((uint32_t)(EDX));
  /* 12d9d5ff push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12d9d601 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d604 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d605 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d607 call 0x12da0e00 */
  push32(0x12d9d60cu); f_12da0e00();
  /* 12d9d60c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d60f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d612 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d614 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d617 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d61a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d61d push edx */
  push32((uint32_t)(EDX));
  /* 12d9d61e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12d9d620 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d623 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d624 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d626 call 0x12da0e00 */
  push32(0x12d9d62bu); f_12da0e00();
  /* 12d9d62b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d62e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d631 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d633 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d636 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d639 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d63c push edx */
  push32((uint32_t)(EDX));
  /* 12d9d63d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12d9d63f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d642 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d643 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d645 call 0x12da0e00 */
  push32(0x12d9d64au); f_12da0e00();
  /* 12d9d64a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d64d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d650 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d652 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d655 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d658 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d65b push edx */
  push32((uint32_t)(EDX));
  /* 12d9d65c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12d9d65e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d661 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d662 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d664 call 0x12da0e00 */
  push32(0x12d9d669u); f_12da0e00();
  /* 12d9d669 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d66c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d66f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d671 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d677 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d67a push edx */
  push32((uint32_t)(EDX));
  /* 12d9d67b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12d9d67d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d680 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d681 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d683 call 0x12da0e00 */
  push32(0x12d9d688u); f_12da0e00();
  /* 12d9d688 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d68b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d68e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d690 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d693 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d696 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d699 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d69a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12d9d69c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d69f push eax */
  push32((uint32_t)(EAX));
  /* 12d9d6a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d6a2 call 0x12da0e00 */
  push32(0x12d9d6a7u); f_12da0e00();
  /* 12d9d6a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d6aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d6ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d6af mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d6b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d6b5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d6b8 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d6b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12d9d6bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d6be push eax */
  push32((uint32_t)(EAX));
  /* 12d9d6bf push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d6c1 call 0x12da0e00 */
  push32(0x12d9d6c6u); f_12da0e00();
  /* 12d9d6c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d6c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d6cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d6ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d6d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d6d4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d6d7 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d6d8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12d9d6da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d6dd push eax */
  push32((uint32_t)(EAX));
  /* 12d9d6de push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d6e0 call 0x12da0e00 */
  push32(0x12d9d6e5u); f_12da0e00();
  /* 12d9d6e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d6e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d6eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d6ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d6f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d6f3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d6f6 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d6f7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12d9d6f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d6fc push eax */
  push32((uint32_t)(EAX));
  /* 12d9d6fd push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d6ff call 0x12da0e00 */
  push32(0x12d9d704u); f_12da0e00();
  /* 12d9d704 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d707 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d70a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d70c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d70f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d712 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d715 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d716 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12d9d718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d71b push eax */
  push32((uint32_t)(EAX));
  /* 12d9d71c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d71e call 0x12da0e00 */
  push32(0x12d9d723u); f_12da0e00();
  /* 12d9d723 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d726 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d729 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d72b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d72e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d731 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d734 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d735 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12d9d737 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d73a push eax */
  push32((uint32_t)(EAX));
  /* 12d9d73b push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d73d call 0x12da0e00 */
  push32(0x12d9d742u); f_12da0e00();
  /* 12d9d742 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d745 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d748 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d74a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d74d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d750 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d753 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d754 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12d9d756 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d759 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d75a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d75c call 0x12da0e00 */
  push32(0x12d9d761u); f_12da0e00();
  /* 12d9d761 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d764 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d767 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d769 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d76c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d76f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d772 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d773 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12d9d775 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d778 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d779 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d77b call 0x12da0e00 */
  push32(0x12d9d780u); f_12da0e00();
  /* 12d9d780 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d783 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d786 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d788 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d78b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d78e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d791 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d792 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12d9d794 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d797 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d798 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d79a call 0x12da0e00 */
  push32(0x12d9d79fu); f_12da0e00();
  /* 12d9d79f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d7a2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d7a5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d7a7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d7aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d7ad add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d7b0 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d7b1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12d9d7b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d7b6 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d7b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d7b9 call 0x12da0e00 */
  push32(0x12d9d7beu); f_12da0e00();
  /* 12d9d7be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d7c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d7c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d7c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d7c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d7cc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d7cf push edx */
  push32((uint32_t)(EDX));
  /* 12d9d7d0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12d9d7d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d7d5 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d7d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d7d8 call 0x12da0e00 */
  push32(0x12d9d7ddu); f_12da0e00();
  /* 12d9d7dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d7e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d7e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d7e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d7e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d7eb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d7ee push edx */
  push32((uint32_t)(EDX));
  /* 12d9d7ef push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12d9d7f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d7f4 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d7f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d7f7 call 0x12da0e00 */
  push32(0x12d9d7fcu); f_12da0e00();
  /* 12d9d7fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d7ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d802 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d804 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d807 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d80a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d80d push edx */
  push32((uint32_t)(EDX));
  /* 12d9d80e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12d9d810 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d813 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d814 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d816 call 0x12da0e00 */
  push32(0x12d9d81bu); f_12da0e00();
  /* 12d9d81b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d81e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d821 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d823 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d826 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d829 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d82c push edx */
  push32((uint32_t)(EDX));
  /* 12d9d82d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12d9d82f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d832 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d833 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d835 call 0x12da0e00 */
  push32(0x12d9d83au); f_12da0e00();
  /* 12d9d83a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d83d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d840 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d842 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d845 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d848 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d84b push edx */
  push32((uint32_t)(EDX));
  /* 12d9d84c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12d9d84e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d851 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d852 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d854 call 0x12da0e00 */
  push32(0x12d9d859u); f_12da0e00();
  /* 12d9d859 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d85c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d85f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d861 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d864 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d867 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d86a push edx */
  push32((uint32_t)(EDX));
  /* 12d9d86b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12d9d86d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d870 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d871 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d873 call 0x12da0e00 */
  push32(0x12d9d878u); f_12da0e00();
  /* 12d9d878 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d87b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d87e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d880 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d883 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d886 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d889 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d88a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12d9d88c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d88f push eax */
  push32((uint32_t)(EAX));
  /* 12d9d890 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d892 call 0x12da0e00 */
  push32(0x12d9d897u); f_12da0e00();
  /* 12d9d897 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d89a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d89d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d89f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d8a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d8a5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d8a8 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d8a9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12d9d8ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d8ae push eax */
  push32((uint32_t)(EAX));
  /* 12d9d8af push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d8b1 call 0x12da0e00 */
  push32(0x12d9d8b6u); f_12da0e00();
  /* 12d9d8b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d8b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d8bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d8be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d8c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d8c4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d8c7 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d8c8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12d9d8ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d8cd push eax */
  push32((uint32_t)(EAX));
  /* 12d9d8ce push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d8d0 call 0x12da0e00 */
  push32(0x12d9d8d5u); f_12da0e00();
  /* 12d9d8d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d8d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d8db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d8dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d8e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d8e3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d8e6 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d8e7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12d9d8e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d8ec push eax */
  push32((uint32_t)(EAX));
  /* 12d9d8ed push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d8ef call 0x12da0e00 */
  push32(0x12d9d8f4u); f_12da0e00();
  /* 12d9d8f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d8f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d8fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d8fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d8ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d902 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d908 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d909 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12d9d90b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d90e push eax */
  push32((uint32_t)(EAX));
  /* 12d9d90f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d911 call 0x12da0e00 */
  push32(0x12d9d916u); f_12da0e00();
  /* 12d9d916 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d919 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d91c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d91e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d921 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d924 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d92a push edx */
  push32((uint32_t)(EDX));
  /* 12d9d92b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12d9d92d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d930 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d931 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d933 call 0x12da0e00 */
  push32(0x12d9d938u); f_12da0e00();
  /* 12d9d938 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d93b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d93e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d940 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d943 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d946 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d94c push edx */
  push32((uint32_t)(EDX));
  /* 12d9d94d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12d9d94f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d952 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d953 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d955 call 0x12da0e00 */
  push32(0x12d9d95au); f_12da0e00();
  /* 12d9d95a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d95d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d960 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d962 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d965 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d968 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d96e push edx */
  push32((uint32_t)(EDX));
  /* 12d9d96f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12d9d971 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d974 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d975 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d977 call 0x12da0e00 */
  push32(0x12d9d97cu); f_12da0e00();
  /* 12d9d97c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d97f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d982 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d984 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d987 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d98a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d990 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d991 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12d9d993 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d996 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d997 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d999 call 0x12da0e00 */
  push32(0x12d9d99eu); f_12da0e00();
  /* 12d9d99e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d9a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d9a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d9a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d9a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d9ac add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d9b2 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d9b3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12d9d9b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d9b8 push eax */
  push32((uint32_t)(EAX));
  /* 12d9d9b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d9bb call 0x12da0e00 */
  push32(0x12d9d9c0u); f_12da0e00();
  /* 12d9d9c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d9c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d9c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d9c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d9cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d9ce add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d9d4 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d9d5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12d9d9d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d9da push eax */
  push32((uint32_t)(EAX));
  /* 12d9d9db push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d9dd call 0x12da0e00 */
  push32(0x12d9d9e2u); f_12da0e00();
  /* 12d9d9e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d9e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9d9e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9d9ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9d9ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9d9f0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9d9f6 push edx */
  push32((uint32_t)(EDX));
  /* 12d9d9f7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12d9d9f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9d9fc push eax */
  push32((uint32_t)(EAX));
  /* 12d9d9fd push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9d9ff call 0x12da0e00 */
  push32(0x12d9da04u); f_12da0e00();
  /* 12d9da04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9da07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9da0a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9da0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9da0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9da12 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9da18 push edx */
  push32((uint32_t)(EDX));
  /* 12d9da19 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12d9da1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9da1e push eax */
  push32((uint32_t)(EAX));
  /* 12d9da1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9da21 call 0x12da0e00 */
  push32(0x12d9da26u); f_12da0e00();
  /* 12d9da26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9da29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9da2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9da2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9da31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9da34 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9da3a push edx */
  push32((uint32_t)(EDX));
  /* 12d9da3b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12d9da3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9da40 push eax */
  push32((uint32_t)(EAX));
  /* 12d9da41 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9da43 call 0x12da0e00 */
  push32(0x12d9da48u); f_12da0e00();
  /* 12d9da48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9da4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9da4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9da50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9da53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9da56 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9da5c push edx */
  push32((uint32_t)(EDX));
  /* 12d9da5d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12d9da62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9da65 push eax */
  push32((uint32_t)(EAX));
  /* 12d9da66 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9da68 call 0x12da0e00 */
  push32(0x12d9da6du); f_12da0e00();
  /* 12d9da6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9da70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9da73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9da75 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d9da78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12d9da7b:;
  /* 12d9da7b mov esp, ebp */
  ESP = (EBP);
  /* 12d9da7d pop ebp */
  EBP = (pop32());
  /* 12d9da7e ret  */
  ESPCHK(0x12d9d4f0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12d9da80 (779 bytes, 265 insns) */
void f_12d9da80(void) {
  FTRACE(0x12d9da80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9da80 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9da81 mov ebp, esp */
  EBP = (ESP);
  /* 12d9da83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9da87 jne 0x12d9da8e */
  if (!C.zf) goto L_12d9da8e;
  /* 12d9da89 jmp 0x12d9dd89 */
  goto L_12d9dd89;
L_12d9da8e:;
  /* 12d9da8e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9da90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9da93 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d9da96 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9da97 call 0x12d936d0 */
  push32(0x12d9da9cu); f_12d936d0();
  /* 12d9da9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9da9f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9daa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9daa4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d9daa7 push eax */
  push32((uint32_t)(EAX));
  /* 12d9daa8 call 0x12d936d0 */
  push32(0x12d9daadu); f_12d936d0();
  /* 12d9daad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dab0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dab2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dab5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d9dab8 push edx */
  push32((uint32_t)(EDX));
  /* 12d9dab9 call 0x12d936d0 */
  push32(0x12d9dabeu); f_12d936d0();
  /* 12d9dabe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dac1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dac3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dac6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d9dac9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9daca call 0x12d936d0 */
  push32(0x12d9dacfu); f_12d936d0();
  /* 12d9dacf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dad2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dad4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dad7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d9dada push eax */
  push32((uint32_t)(EAX));
  /* 12d9dadb call 0x12d936d0 */
  push32(0x12d9dae0u); f_12d936d0();
  /* 12d9dae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dae3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dae5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dae8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d9daeb push edx */
  push32((uint32_t)(EDX));
  /* 12d9daec call 0x12d936d0 */
  push32(0x12d9daf1u); f_12d936d0();
  /* 12d9daf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9daf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9daf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9daf9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d9dafb push ecx */
  push32((uint32_t)(ECX));
  /* 12d9dafc call 0x12d936d0 */
  push32(0x12d9db01u); f_12d936d0();
  /* 12d9db01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9db04 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9db06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9db09 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12d9db0c push eax */
  push32((uint32_t)(EAX));
  /* 12d9db0d call 0x12d936d0 */
  push32(0x12d9db12u); f_12d936d0();
  /* 12d9db12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9db15 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9db17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9db1a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12d9db1d push edx */
  push32((uint32_t)(EDX));
  /* 12d9db1e call 0x12d936d0 */
  push32(0x12d9db23u); f_12d936d0();
  /* 12d9db23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9db26 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9db28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9db2b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12d9db2e push ecx */
  push32((uint32_t)(ECX));
  /* 12d9db2f call 0x12d936d0 */
  push32(0x12d9db34u); f_12d936d0();
  /* 12d9db34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9db37 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9db39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9db3c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12d9db3f push eax */
  push32((uint32_t)(EAX));
  /* 12d9db40 call 0x12d936d0 */
  push32(0x12d9db45u); f_12d936d0();
  /* 12d9db45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9db48 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9db4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9db4d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12d9db50 push edx */
  push32((uint32_t)(EDX));
  /* 12d9db51 call 0x12d936d0 */
  push32(0x12d9db56u); f_12d936d0();
  /* 12d9db56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9db59 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9db5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9db5e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12d9db61 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9db62 call 0x12d936d0 */
  push32(0x12d9db67u); f_12d936d0();
  /* 12d9db67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9db6a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9db6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9db6f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d9db72 push eax */
  push32((uint32_t)(EAX));
  /* 12d9db73 call 0x12d936d0 */
  push32(0x12d9db78u); f_12d936d0();
  /* 12d9db78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9db7b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9db7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9db80 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12d9db83 push edx */
  push32((uint32_t)(EDX));
  /* 12d9db84 call 0x12d936d0 */
  push32(0x12d9db89u); f_12d936d0();
  /* 12d9db89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9db8c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9db8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9db91 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12d9db94 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9db95 call 0x12d936d0 */
  push32(0x12d9db9au); f_12d936d0();
  /* 12d9db9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9db9d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9db9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dba2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12d9dba5 push eax */
  push32((uint32_t)(EAX));
  /* 12d9dba6 call 0x12d936d0 */
  push32(0x12d9dbabu); f_12d936d0();
  /* 12d9dbab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dbae push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dbb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dbb3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12d9dbb6 push edx */
  push32((uint32_t)(EDX));
  /* 12d9dbb7 call 0x12d936d0 */
  push32(0x12d9dbbcu); f_12d936d0();
  /* 12d9dbbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dbbf push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dbc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dbc4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12d9dbc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9dbc8 call 0x12d936d0 */
  push32(0x12d9dbcdu); f_12d936d0();
  /* 12d9dbcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dbd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dbd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dbd5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12d9dbd8 push eax */
  push32((uint32_t)(EAX));
  /* 12d9dbd9 call 0x12d936d0 */
  push32(0x12d9dbdeu); f_12d936d0();
  /* 12d9dbde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dbe1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dbe3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dbe6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12d9dbe9 push edx */
  push32((uint32_t)(EDX));
  /* 12d9dbea call 0x12d936d0 */
  push32(0x12d9dbefu); f_12d936d0();
  /* 12d9dbef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dbf2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dbf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dbf7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12d9dbfa push ecx */
  push32((uint32_t)(ECX));
  /* 12d9dbfb call 0x12d936d0 */
  push32(0x12d9dc00u); f_12d936d0();
  /* 12d9dc00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dc03 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dc05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dc08 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12d9dc0b push eax */
  push32((uint32_t)(EAX));
  /* 12d9dc0c call 0x12d936d0 */
  push32(0x12d9dc11u); f_12d936d0();
  /* 12d9dc11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dc14 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dc16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dc19 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12d9dc1c push edx */
  push32((uint32_t)(EDX));
  /* 12d9dc1d call 0x12d936d0 */
  push32(0x12d9dc22u); f_12d936d0();
  /* 12d9dc22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dc25 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dc27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dc2a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12d9dc2d push ecx */
  push32((uint32_t)(ECX));
  /* 12d9dc2e call 0x12d936d0 */
  push32(0x12d9dc33u); f_12d936d0();
  /* 12d9dc33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dc36 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dc38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dc3b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12d9dc3e push eax */
  push32((uint32_t)(EAX));
  /* 12d9dc3f call 0x12d936d0 */
  push32(0x12d9dc44u); f_12d936d0();
  /* 12d9dc44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dc47 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dc49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dc4c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12d9dc4f push edx */
  push32((uint32_t)(EDX));
  /* 12d9dc50 call 0x12d936d0 */
  push32(0x12d9dc55u); f_12d936d0();
  /* 12d9dc55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dc58 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dc5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dc5d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12d9dc60 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9dc61 call 0x12d936d0 */
  push32(0x12d9dc66u); f_12d936d0();
  /* 12d9dc66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dc69 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dc6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dc6e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12d9dc71 push eax */
  push32((uint32_t)(EAX));
  /* 12d9dc72 call 0x12d936d0 */
  push32(0x12d9dc77u); f_12d936d0();
  /* 12d9dc77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dc7a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dc7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dc7f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12d9dc82 push edx */
  push32((uint32_t)(EDX));
  /* 12d9dc83 call 0x12d936d0 */
  push32(0x12d9dc88u); f_12d936d0();
  /* 12d9dc88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dc8b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dc8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dc90 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12d9dc93 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9dc94 call 0x12d936d0 */
  push32(0x12d9dc99u); f_12d936d0();
  /* 12d9dc99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dc9c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dc9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dca1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12d9dca4 push eax */
  push32((uint32_t)(EAX));
  /* 12d9dca5 call 0x12d936d0 */
  push32(0x12d9dcaau); f_12d936d0();
  /* 12d9dcaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dcad push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dcaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dcb2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12d9dcb8 push edx */
  push32((uint32_t)(EDX));
  /* 12d9dcb9 call 0x12d936d0 */
  push32(0x12d9dcbeu); f_12d936d0();
  /* 12d9dcbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dcc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dcc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dcc6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12d9dccc push ecx */
  push32((uint32_t)(ECX));
  /* 12d9dccd call 0x12d936d0 */
  push32(0x12d9dcd2u); f_12d936d0();
  /* 12d9dcd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dcd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dcd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dcda mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12d9dce0 push eax */
  push32((uint32_t)(EAX));
  /* 12d9dce1 call 0x12d936d0 */
  push32(0x12d9dce6u); f_12d936d0();
  /* 12d9dce6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dce9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dceb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dcee mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12d9dcf4 push edx */
  push32((uint32_t)(EDX));
  /* 12d9dcf5 call 0x12d936d0 */
  push32(0x12d9dcfau); f_12d936d0();
  /* 12d9dcfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dcfd push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dcff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dd02 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12d9dd08 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9dd09 call 0x12d936d0 */
  push32(0x12d9dd0eu); f_12d936d0();
  /* 12d9dd0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dd11 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dd13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dd16 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12d9dd1c push eax */
  push32((uint32_t)(EAX));
  /* 12d9dd1d call 0x12d936d0 */
  push32(0x12d9dd22u); f_12d936d0();
  /* 12d9dd22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dd25 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dd27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dd2a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12d9dd30 push edx */
  push32((uint32_t)(EDX));
  /* 12d9dd31 call 0x12d936d0 */
  push32(0x12d9dd36u); f_12d936d0();
  /* 12d9dd36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dd39 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dd3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dd3e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12d9dd44 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9dd45 call 0x12d936d0 */
  push32(0x12d9dd4au); f_12d936d0();
  /* 12d9dd4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dd4d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dd4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dd52 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12d9dd58 push eax */
  push32((uint32_t)(EAX));
  /* 12d9dd59 call 0x12d936d0 */
  push32(0x12d9dd5eu); f_12d936d0();
  /* 12d9dd5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dd61 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dd63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dd66 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12d9dd6c push edx */
  push32((uint32_t)(EDX));
  /* 12d9dd6d call 0x12d936d0 */
  push32(0x12d9dd72u); f_12d936d0();
  /* 12d9dd72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dd75 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dd77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9dd7a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12d9dd80 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9dd81 call 0x12d936d0 */
  push32(0x12d9dd86u); f_12d936d0();
  /* 12d9dd86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9dd89:;
  /* 12d9dd89 pop ebp */
  EBP = (pop32());
  /* 12d9dd8a ret  */
  ESPCHK(0x12d9da80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd90 @ 0x12d9dd90 (678 bytes, 180 insns) */
void f_12d9dd90(void) {
  FTRACE(0x12d9dd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9dd90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9dd91 mov ebp, esp */
  EBP = (ESP);
  /* 12d9dd93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9dd96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d9dd9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9dd9f mov ax, word ptr [0x12dad782] */
  AX = (r16((uint32_t)(0x12dad782)));
  /* 12d9dda5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9dda8 cmp dword ptr [0x12dad728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ddaf je 0x12d9df0a */
  if (C.zf) goto L_12d9df0a;
  /* 12d9ddb5 push 0x12dad750 */
  push32((uint32_t)(0x12dad750u));
  /* 12d9ddba push 0xe */
  push32((uint32_t)(0xeu));
  /* 12d9ddbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9ddbf push ecx */
  push32((uint32_t)(ECX));
  /* 12d9ddc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9ddc2 call 0x12da0e00 */
  push32(0x12d9ddc7u); f_12da0e00();
  /* 12d9ddc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ddca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9ddcd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9ddcf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d9ddd2 push 0x12dad754 */
  push32((uint32_t)(0x12dad754u));
  /* 12d9ddd7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12d9ddd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9dddc push eax */
  push32((uint32_t)(EAX));
  /* 12d9dddd push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9dddf call 0x12da0e00 */
  push32(0x12d9dde4u); f_12da0e00();
  /* 12d9dde4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dde7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9ddea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9ddec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9ddef push 0x12dad758 */
  push32((uint32_t)(0x12dad758u));
  /* 12d9ddf4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12d9ddf6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9ddf9 push edx */
  push32((uint32_t)(EDX));
  /* 12d9ddfa push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9ddfc call 0x12da0e00 */
  push32(0x12d9de01u); f_12da0e00();
  /* 12d9de01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9de04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9de07 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9de09 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9de0c mov edx, dword ptr [0x12dad758] */
  EDX = (r32((uint32_t)(0x12dad758)));
  /* 12d9de12 push edx */
  push32((uint32_t)(EDX));
  /* 12d9de13 call 0x12d9e040 */
  push32(0x12d9de18u); f_12d9e040();
  /* 12d9de18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9de1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9de1f je 0x12d9de79 */
  if (C.zf) goto L_12d9de79;
  /* 12d9de21 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9de23 mov eax, dword ptr [0x12dad750] */
  EAX = (r32((uint32_t)(0x12dad750)));
  /* 12d9de28 push eax */
  push32((uint32_t)(EAX));
  /* 12d9de29 call 0x12d936d0 */
  push32(0x12d9de2eu); f_12d936d0();
  /* 12d9de2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9de31 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9de33 mov ecx, dword ptr [0x12dad754] */
  ECX = (r32((uint32_t)(0x12dad754)));
  /* 12d9de39 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9de3a call 0x12d936d0 */
  push32(0x12d9de3fu); f_12d936d0();
  /* 12d9de3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9de42 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9de44 mov edx, dword ptr [0x12dad758] */
  EDX = (r32((uint32_t)(0x12dad758)));
  /* 12d9de4a push edx */
  push32((uint32_t)(EDX));
  /* 12d9de4b call 0x12d936d0 */
  push32(0x12d9de50u); f_12d936d0();
  /* 12d9de50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9de53 mov dword ptr [0x12dad750], 0 */
  w32((uint32_t)(0x12dad750), (0x0u));
  /* 12d9de5d mov dword ptr [0x12dad754], 0 */
  w32((uint32_t)(0x12dad754), (0x0u));
  /* 12d9de67 mov dword ptr [0x12dad758], 0 */
  w32((uint32_t)(0x12dad758), (0x0u));
  /* 12d9de71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9de74 jmp 0x12d9e032 */
  goto L_12d9e032;
L_12d9de79:;
  /* 12d9de79 mov eax, dword ptr [0x12dace48] */
  EAX = (r32((uint32_t)(0x12dace48)));
  /* 12d9de7e cmp dword ptr [eax], 0x12dace10 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12dace10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9de84 je 0x12d9dec0 */
  if (C.zf) goto L_12d9dec0;
  /* 12d9de86 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9de88 mov ecx, dword ptr [0x12dace48] */
  ECX = (r32((uint32_t)(0x12dace48)));
  /* 12d9de8e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d9de90 push edx */
  push32((uint32_t)(EDX));
  /* 12d9de91 call 0x12d936d0 */
  push32(0x12d9de96u); f_12d936d0();
  /* 12d9de96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9de99 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9de9b mov eax, dword ptr [0x12dace48] */
  EAX = (r32((uint32_t)(0x12dace48)));
  /* 12d9dea0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d9dea3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9dea4 call 0x12d936d0 */
  push32(0x12d9dea9u); f_12d936d0();
  /* 12d9dea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9deac push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9deae mov edx, dword ptr [0x12dace48] */
  EDX = (r32((uint32_t)(0x12dace48)));
  /* 12d9deb4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d9deb7 push eax */
  push32((uint32_t)(EAX));
  /* 12d9deb8 call 0x12d936d0 */
  push32(0x12d9debdu); f_12d936d0();
  /* 12d9debd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9dec0:;
  /* 12d9dec0 mov ecx, dword ptr [0x12dace48] */
  ECX = (r32((uint32_t)(0x12dace48)));
  /* 12d9dec6 mov edx, dword ptr [0x12dad750] */
  EDX = (r32((uint32_t)(0x12dad750)));
  /* 12d9decc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d9dece mov eax, dword ptr [0x12dace48] */
  EAX = (r32((uint32_t)(0x12dace48)));
  /* 12d9ded3 mov ecx, dword ptr [0x12dad754] */
  ECX = (r32((uint32_t)(0x12dad754)));
  /* 12d9ded9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12d9dedc mov edx, dword ptr [0x12dace48] */
  EDX = (r32((uint32_t)(0x12dace48)));
  /* 12d9dee2 mov eax, dword ptr [0x12dad758] */
  EAX = (r32((uint32_t)(0x12dad758)));
  /* 12d9dee7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d9deea mov ecx, dword ptr [0x12dace48] */
  ECX = (r32((uint32_t)(0x12dace48)));
  /* 12d9def0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d9def2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d9def4 mov byte ptr [0x12dabf68], al */
  w8((uint32_t)(0x12dabf68), (AL));
  /* 12d9def9 mov dword ptr [0x12dabf6c], 1 */
  w32((uint32_t)(0x12dabf6c), (0x1u));
  /* 12d9df03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9df05 jmp 0x12d9e032 */
  goto L_12d9e032;
L_12d9df0a:;
  /* 12d9df0a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9df0c mov ecx, dword ptr [0x12dad750] */
  ECX = (r32((uint32_t)(0x12dad750)));
  /* 12d9df12 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9df13 call 0x12d936d0 */
  push32(0x12d9df18u); f_12d936d0();
  /* 12d9df18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9df1b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9df1d mov edx, dword ptr [0x12dad754] */
  EDX = (r32((uint32_t)(0x12dad754)));
  /* 12d9df23 push edx */
  push32((uint32_t)(EDX));
  /* 12d9df24 call 0x12d936d0 */
  push32(0x12d9df29u); f_12d936d0();
  /* 12d9df29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9df2c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9df2e mov eax, dword ptr [0x12dad758] */
  EAX = (r32((uint32_t)(0x12dad758)));
  /* 12d9df33 push eax */
  push32((uint32_t)(EAX));
  /* 12d9df34 call 0x12d936d0 */
  push32(0x12d9df39u); f_12d936d0();
  /* 12d9df39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9df3c mov dword ptr [0x12dad750], 0 */
  w32((uint32_t)(0x12dad750), (0x0u));
  /* 12d9df46 mov dword ptr [0x12dad754], 0 */
  w32((uint32_t)(0x12dad754), (0x0u));
  /* 12d9df50 mov dword ptr [0x12dad758], 0 */
  w32((uint32_t)(0x12dad758), (0x0u));
  /* 12d9df5a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12d9df5f push 0x12da9f9c */
  push32((uint32_t)(0x12da9f9cu));
  /* 12d9df64 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9df66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9df68 call 0x12d92c40 */
  push32(0x12d9df6du); f_12d92c40();
  /* 12d9df6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9df70 mov ecx, dword ptr [0x12dace48] */
  ECX = (r32((uint32_t)(0x12dace48)));
  /* 12d9df76 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d9df78 mov edx, dword ptr [0x12dace48] */
  EDX = (r32((uint32_t)(0x12dace48)));
  /* 12d9df7e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9df81 jne 0x12d9df8b */
  if (!C.zf) goto L_12d9df8b;
  /* 12d9df83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9df86 jmp 0x12d9e032 */
  goto L_12d9e032;
L_12d9df8b:;
  /* 12d9df8b push 0x12da9f6c */
  push32((uint32_t)(0x12da9f6cu));
  /* 12d9df90 mov eax, dword ptr [0x12dace48] */
  EAX = (r32((uint32_t)(0x12dace48)));
  /* 12d9df95 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d9df97 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9df98 call 0x12d95bf0 */
  push32(0x12d9df9du); f_12d95bf0();
  /* 12d9df9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dfa0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12d9dfa5 push 0x12da9f9c */
  push32((uint32_t)(0x12da9f9cu));
  /* 12d9dfaa push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dfac push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dfae call 0x12d92c40 */
  push32(0x12d9dfb3u); f_12d92c40();
  /* 12d9dfb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dfb6 mov edx, dword ptr [0x12dace48] */
  EDX = (r32((uint32_t)(0x12dace48)));
  /* 12d9dfbc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12d9dfbf mov eax, dword ptr [0x12dace48] */
  EAX = (r32((uint32_t)(0x12dace48)));
  /* 12d9dfc4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9dfc8 jne 0x12d9dfcf */
  if (!C.zf) goto L_12d9dfcf;
  /* 12d9dfca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9dfcd jmp 0x12d9e032 */
  goto L_12d9e032;
L_12d9dfcf:;
  /* 12d9dfcf mov ecx, dword ptr [0x12dace48] */
  ECX = (r32((uint32_t)(0x12dace48)));
  /* 12d9dfd5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d9dfd8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d9dfdb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12d9dfe0 push 0x12da9f9c */
  push32((uint32_t)(0x12da9f9cu));
  /* 12d9dfe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dfe7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9dfe9 call 0x12d92c40 */
  push32(0x12d9dfeeu); f_12d92c40();
  /* 12d9dfee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9dff1 mov ecx, dword ptr [0x12dace48] */
  ECX = (r32((uint32_t)(0x12dace48)));
  /* 12d9dff7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12d9dffa mov edx, dword ptr [0x12dace48] */
  EDX = (r32((uint32_t)(0x12dace48)));
  /* 12d9e000 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e004 jne 0x12d9e00b */
  if (!C.zf) goto L_12d9e00b;
  /* 12d9e006 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9e009 jmp 0x12d9e032 */
  goto L_12d9e032;
L_12d9e00b:;
  /* 12d9e00b mov eax, dword ptr [0x12dace48] */
  EAX = (r32((uint32_t)(0x12dace48)));
  /* 12d9e010 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d9e013 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12d9e016 mov edx, dword ptr [0x12dace48] */
  EDX = (r32((uint32_t)(0x12dace48)));
  /* 12d9e01c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d9e01e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d9e020 mov byte ptr [0x12dabf68], cl */
  w8((uint32_t)(0x12dabf68), (CL));
  /* 12d9e026 mov dword ptr [0x12dabf6c], 1 */
  w32((uint32_t)(0x12dabf6c), (0x1u));
  /* 12d9e030 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d9e032:;
  /* 12d9e032 mov esp, ebp */
  ESP = (EBP);
  /* 12d9e034 pop ebp */
  EBP = (pop32());
  /* 12d9e035 ret  */
  ESPCHK(0x12d9dd90u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12d9e040 (125 bytes, 49 insns) */
void f_12d9e040(void) {
  FTRACE(0x12d9e040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9e040 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9e041 mov ebp, esp */
  EBP = (ESP);
  /* 12d9e043 push ecx */
  push32((uint32_t)(ECX));
L_12d9e044:;
  /* 12d9e044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e047 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d9e04a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9e04c je 0x12d9e0b9 */
  if (C.zf) goto L_12d9e0b9;
  /* 12d9e04e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e051 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d9e054 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e057 jl 0x12d9e07d */
  if ((C.sf!=C.of)) goto L_12d9e07d;
  /* 12d9e059 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e05c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d9e05f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e062 jg 0x12d9e07d */
  if ((!C.zf&&C.sf==C.of)) goto L_12d9e07d;
  /* 12d9e064 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e067 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d9e06a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9e06d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e070 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12d9e072 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e075 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e078 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d9e07b jmp 0x12d9e0b7 */
  goto L_12d9e0b7;
L_12d9e07d:;
  /* 12d9e07d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e080 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d9e083 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e086 jne 0x12d9e0ae */
  if (!C.zf) goto L_12d9e0ae;
  /* 12d9e088 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e08b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d9e08e:;
  /* 12d9e08e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e091 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e094 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d9e097 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d9e099 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e09c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e09f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d9e0a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e0a5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d9e0a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9e0aa jne 0x12d9e08e */
  if (!C.zf) goto L_12d9e08e;
  /* 12d9e0ac jmp 0x12d9e0b7 */
  goto L_12d9e0b7;
L_12d9e0ae:;
  /* 12d9e0ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e0b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e0b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12d9e0b7:;
  /* 12d9e0b7 jmp 0x12d9e044 */
  goto L_12d9e044;
L_12d9e0b9:;
  /* 12d9e0b9 mov esp, ebp */
  ESP = (EBP);
  /* 12d9e0bb pop ebp */
  EBP = (pop32());
  /* 12d9e0bc ret  */
  ESPCHK(0x12d9e040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0c0 @ 0x12d9e0c0 (304 bytes, 85 insns) */
void f_12d9e0c0(void) {
  FTRACE(0x12d9e0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9e0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9e0c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9e0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9e0c4 cmp dword ptr [0x12dad724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e0cb je 0x12d9e18c */
  if (C.zf) goto L_12d9e18c;
  /* 12d9e0d1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12d9e0d3 push 0x12da9fa8 */
  push32((uint32_t)(0x12da9fa8u));
  /* 12d9e0d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e0da push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12d9e0dc push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9e0de call 0x12d93050 */
  push32(0x12d9e0e3u); f_12d93050();
  /* 12d9e0e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e0e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9e0e9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e0ed jne 0x12d9e0f9 */
  if (!C.zf) goto L_12d9e0f9;
  /* 12d9e0ef mov eax, 1 */
  EAX = (0x1u);
  /* 12d9e0f4 jmp 0x12d9e1ec */
  goto L_12d9e1ec;
L_12d9e0f9:;
  /* 12d9e0f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e0fc push eax */
  push32((uint32_t)(EAX));
  /* 12d9e0fd call 0x12d9e1f0 */
  push32(0x12d9e102u); f_12d9e1f0();
  /* 12d9e102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e105 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9e107 je 0x12d9e12d */
  if (C.zf) goto L_12d9e12d;
  /* 12d9e109 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e10c push ecx */
  push32((uint32_t)(ECX));
  /* 12d9e10d call 0x12d9e480 */
  push32(0x12d9e112u); f_12d9e480();
  /* 12d9e112 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e115 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e117 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e11a push edx */
  push32((uint32_t)(EDX));
  /* 12d9e11b call 0x12d936d0 */
  push32(0x12d9e120u); f_12d936d0();
  /* 12d9e120 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e123 mov eax, 1 */
  EAX = (0x1u);
  /* 12d9e128 jmp 0x12d9e1ec */
  goto L_12d9e1ec;
L_12d9e12d:;
  /* 12d9e12d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e130 mov ecx, dword ptr [0x12dace48] */
  ECX = (r32((uint32_t)(0x12dace48)));
  /* 12d9e136 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d9e138 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d9e13a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e13d mov ecx, dword ptr [0x12dace48] */
  ECX = (r32((uint32_t)(0x12dace48)));
  /* 12d9e143 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d9e146 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d9e149 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e14c mov ecx, dword ptr [0x12dace48] */
  ECX = (r32((uint32_t)(0x12dace48)));
  /* 12d9e152 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d9e155 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12d9e158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e15b mov dword ptr [0x12dace48], eax */
  w32((uint32_t)(0x12dace48), (EAX));
  /* 12d9e160 mov ecx, dword ptr [0x12dad75c] */
  ECX = (r32((uint32_t)(0x12dad75c)));
  /* 12d9e166 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9e167 call 0x12d9e480 */
  push32(0x12d9e16cu); f_12d9e480();
  /* 12d9e16c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e16f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e171 mov edx, dword ptr [0x12dad75c] */
  EDX = (r32((uint32_t)(0x12dad75c)));
  /* 12d9e177 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e178 call 0x12d936d0 */
  push32(0x12d9e17du); f_12d936d0();
  /* 12d9e17d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e180 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e183 mov dword ptr [0x12dad75c], eax */
  w32((uint32_t)(0x12dad75c), (EAX));
  /* 12d9e188 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9e18a jmp 0x12d9e1ec */
  goto L_12d9e1ec;
L_12d9e18c:;
  /* 12d9e18c mov ecx, dword ptr [0x12dace48] */
  ECX = (r32((uint32_t)(0x12dace48)));
  /* 12d9e192 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d9e194 mov dword ptr [0x12dace18], edx */
  w32((uint32_t)(0x12dace18), (EDX));
  /* 12d9e19a mov eax, dword ptr [0x12dace48] */
  EAX = (r32((uint32_t)(0x12dace48)));
  /* 12d9e19f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d9e1a2 mov dword ptr [0x12dace1c], ecx */
  w32((uint32_t)(0x12dace1c), (ECX));
  /* 12d9e1a8 mov edx, dword ptr [0x12dace48] */
  EDX = (r32((uint32_t)(0x12dace48)));
  /* 12d9e1ae mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d9e1b1 mov dword ptr [0x12dace20], eax */
  w32((uint32_t)(0x12dace20), (EAX));
  /* 12d9e1b6 mov dword ptr [0x12dace48], 0x12dace18 */
  w32((uint32_t)(0x12dace48), (0x12dace18u));
  /* 12d9e1c0 mov ecx, dword ptr [0x12dad75c] */
  ECX = (r32((uint32_t)(0x12dad75c)));
  /* 12d9e1c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9e1c7 call 0x12d9e480 */
  push32(0x12d9e1ccu); f_12d9e480();
  /* 12d9e1cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e1cf push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e1d1 mov edx, dword ptr [0x12dad75c] */
  EDX = (r32((uint32_t)(0x12dad75c)));
  /* 12d9e1d7 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e1d8 call 0x12d936d0 */
  push32(0x12d9e1ddu); f_12d936d0();
  /* 12d9e1dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e1e0 mov dword ptr [0x12dad75c], 0 */
  w32((uint32_t)(0x12dad75c), (0x0u));
  /* 12d9e1ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d9e1ec:;
  /* 12d9e1ec mov esp, ebp */
  ESP = (EBP);
  /* 12d9e1ee pop ebp */
  EBP = (pop32());
  /* 12d9e1ef ret  */
  ESPCHK(0x12d9e0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1f0 @ 0x12d9e1f0 (525 bytes, 200 insns) */
void f_12d9e1f0(void) {
  FTRACE(0x12d9e1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9e1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9e1f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9e1f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9e1f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d9e1fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9e1ff mov ax, word ptr [0x12dad77c] */
  AX = (r16((uint32_t)(0x12dad77c)));
  /* 12d9e205 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9e208 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e20c jne 0x12d9e216 */
  if (!C.zf) goto L_12d9e216;
  /* 12d9e20e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9e211 jmp 0x12d9e3f9 */
  goto L_12d9e3f9;
L_12d9e216:;
  /* 12d9e216 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e219 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e21c push ecx */
  push32((uint32_t)(ECX));
  /* 12d9e21d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12d9e21f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e222 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e223 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9e225 call 0x12da0e00 */
  push32(0x12d9e22au); f_12da0e00();
  /* 12d9e22a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e22d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9e230 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e232 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9e235 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e238 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e23b push edx */
  push32((uint32_t)(EDX));
  /* 12d9e23c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12d9e23e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e241 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e242 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9e244 call 0x12da0e00 */
  push32(0x12d9e249u); f_12da0e00();
  /* 12d9e249 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e24c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9e24f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e251 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9e254 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e257 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e25a push edx */
  push32((uint32_t)(EDX));
  /* 12d9e25b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12d9e25d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e260 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e261 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9e263 call 0x12da0e00 */
  push32(0x12d9e268u); f_12da0e00();
  /* 12d9e268 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e26b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9e26e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e270 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9e273 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e276 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e279 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e27a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12d9e27c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e27f push eax */
  push32((uint32_t)(EAX));
  /* 12d9e280 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9e282 call 0x12da0e00 */
  push32(0x12d9e287u); f_12da0e00();
  /* 12d9e287 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e28a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9e28d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e28f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9e292 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e295 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e298 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e299 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12d9e29b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e29e push eax */
  push32((uint32_t)(EAX));
  /* 12d9e29f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9e2a1 call 0x12da0e00 */
  push32(0x12d9e2a6u); f_12da0e00();
  /* 12d9e2a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e2a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9e2ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e2ae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9e2b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e2b4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d9e2b7 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e2b8 call 0x12d9e400 */
  push32(0x12d9e2bdu); f_12d9e400();
  /* 12d9e2bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e2c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e2c3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e2c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9e2c7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12d9e2c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e2cc push edx */
  push32((uint32_t)(EDX));
  /* 12d9e2cd push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9e2cf call 0x12da0e00 */
  push32(0x12d9e2d4u); f_12da0e00();
  /* 12d9e2d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e2d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9e2da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e2dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9e2df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e2e2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e2e5 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e2e6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12d9e2e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e2eb push eax */
  push32((uint32_t)(EAX));
  /* 12d9e2ec push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9e2ee call 0x12da0e00 */
  push32(0x12d9e2f3u); f_12da0e00();
  /* 12d9e2f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e2f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9e2f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e2fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9e2fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e301 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e304 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e305 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12d9e307 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e30a push eax */
  push32((uint32_t)(EAX));
  /* 12d9e30b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9e30d call 0x12da0e00 */
  push32(0x12d9e312u); f_12da0e00();
  /* 12d9e312 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e315 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9e318 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e31a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9e31d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e320 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e323 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e324 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d9e326 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e329 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e32a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9e32c call 0x12da0e00 */
  push32(0x12d9e331u); f_12da0e00();
  /* 12d9e331 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e334 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9e337 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e339 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9e33c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e33f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e342 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e343 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12d9e345 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e348 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e349 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9e34b call 0x12da0e00 */
  push32(0x12d9e350u); f_12da0e00();
  /* 12d9e350 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e353 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9e356 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e358 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9e35b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e35e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e361 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e362 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12d9e364 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e367 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e368 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9e36a call 0x12da0e00 */
  push32(0x12d9e36fu); f_12da0e00();
  /* 12d9e36f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e372 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9e375 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e377 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9e37a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e37d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e380 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e381 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12d9e383 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e386 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e387 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9e389 call 0x12da0e00 */
  push32(0x12d9e38eu); f_12da0e00();
  /* 12d9e38e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e391 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9e394 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e396 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9e399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e39c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e39f push edx */
  push32((uint32_t)(EDX));
  /* 12d9e3a0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12d9e3a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e3a5 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e3a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9e3a8 call 0x12da0e00 */
  push32(0x12d9e3adu); f_12da0e00();
  /* 12d9e3ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e3b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9e3b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e3b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9e3b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e3bb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e3be push edx */
  push32((uint32_t)(EDX));
  /* 12d9e3bf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12d9e3c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e3c4 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e3c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9e3c7 call 0x12da0e00 */
  push32(0x12d9e3ccu); f_12da0e00();
  /* 12d9e3cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e3cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9e3d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e3d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9e3d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e3da add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e3dd push edx */
  push32((uint32_t)(EDX));
  /* 12d9e3de push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12d9e3e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e3e3 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e3e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9e3e6 call 0x12da0e00 */
  push32(0x12d9e3ebu); f_12da0e00();
  /* 12d9e3eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e3ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9e3f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e3f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d9e3f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d9e3f9:;
  /* 12d9e3f9 mov esp, ebp */
  ESP = (EBP);
  /* 12d9e3fb pop ebp */
  EBP = (pop32());
  /* 12d9e3fc ret  */
  ESPCHK(0x12d9e1f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12d9e400 (125 bytes, 49 insns) */
void f_12d9e400(void) {
  FTRACE(0x12d9e400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9e400 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9e401 mov ebp, esp */
  EBP = (ESP);
  /* 12d9e403 push ecx */
  push32((uint32_t)(ECX));
L_12d9e404:;
  /* 12d9e404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e407 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d9e40a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9e40c je 0x12d9e479 */
  if (C.zf) goto L_12d9e479;
  /* 12d9e40e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e411 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d9e414 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e417 jl 0x12d9e43d */
  if ((C.sf!=C.of)) goto L_12d9e43d;
  /* 12d9e419 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e41c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d9e41f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e422 jg 0x12d9e43d */
  if ((!C.zf&&C.sf==C.of)) goto L_12d9e43d;
  /* 12d9e424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e427 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d9e42a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9e42d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e430 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12d9e432 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e435 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e438 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d9e43b jmp 0x12d9e477 */
  goto L_12d9e477;
L_12d9e43d:;
  /* 12d9e43d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e440 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d9e443 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e446 jne 0x12d9e46e */
  if (!C.zf) goto L_12d9e46e;
  /* 12d9e448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e44b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d9e44e:;
  /* 12d9e44e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e451 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e454 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d9e457 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d9e459 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e45c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e45f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d9e462 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9e465 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d9e468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9e46a jne 0x12d9e44e */
  if (!C.zf) goto L_12d9e44e;
  /* 12d9e46c jmp 0x12d9e477 */
  goto L_12d9e477;
L_12d9e46e:;
  /* 12d9e46e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e471 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e474 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12d9e477:;
  /* 12d9e477 jmp 0x12d9e404 */
  goto L_12d9e404;
L_12d9e479:;
  /* 12d9e479 mov esp, ebp */
  ESP = (EBP);
  /* 12d9e47b pop ebp */
  EBP = (pop32());
  /* 12d9e47c ret  */
  ESPCHK(0x12d9e400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e480 @ 0x12d9e480 (147 bytes, 52 insns) */
void f_12d9e480(void) {
  FTRACE(0x12d9e480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9e480 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9e481 mov ebp, esp */
  EBP = (ESP);
  /* 12d9e483 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e487 jne 0x12d9e48e */
  if (!C.zf) goto L_12d9e48e;
  /* 12d9e489 jmp 0x12d9e511 */
  goto L_12d9e511;
L_12d9e48e:;
  /* 12d9e48e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e491 cmp dword ptr [eax + 0xc], 0x12dad7b8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12dad7b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e498 je 0x12d9e511 */
  if (C.zf) goto L_12d9e511;
  /* 12d9e49a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e49c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e49f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d9e4a2 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e4a3 call 0x12d936d0 */
  push32(0x12d9e4a8u); f_12d936d0();
  /* 12d9e4a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e4ab push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e4ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e4b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d9e4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9e4b4 call 0x12d936d0 */
  push32(0x12d9e4b9u); f_12d936d0();
  /* 12d9e4b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e4bc push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e4be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e4c1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d9e4c4 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e4c5 call 0x12d936d0 */
  push32(0x12d9e4cau); f_12d936d0();
  /* 12d9e4ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e4cd push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e4cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e4d2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d9e4d5 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e4d6 call 0x12d936d0 */
  push32(0x12d9e4dbu); f_12d936d0();
  /* 12d9e4db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e4de push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e4e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e4e3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d9e4e6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9e4e7 call 0x12d936d0 */
  push32(0x12d9e4ecu); f_12d936d0();
  /* 12d9e4ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e4ef push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e4f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e4f4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12d9e4f7 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e4f8 call 0x12d936d0 */
  push32(0x12d9e4fdu); f_12d936d0();
  /* 12d9e4fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e500 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e502 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e505 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12d9e508 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e509 call 0x12d936d0 */
  push32(0x12d9e50eu); f_12d936d0();
  /* 12d9e50e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9e511:;
  /* 12d9e511 pop ebp */
  EBP = (pop32());
  /* 12d9e512 ret  */
  ESPCHK(0x12d9e480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e520 @ 0x12d9e520 (928 bytes, 284 insns) */
void f_12d9e520(void) {
  FTRACE(0x12d9e520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9e520 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9e521 mov ebp, esp */
  EBP = (ESP);
  /* 12d9e523 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9e526 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12d9e52d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12d9e534 cmp dword ptr [0x12dad720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e53b je 0x12d9e871 */
  if (C.zf) goto L_12d9e871;
  /* 12d9e541 cmp dword ptr [0x12dad730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e548 jne 0x12d9e570 */
  if (!C.zf) goto L_12d9e570;
  /* 12d9e54a push 0x12dad730 */
  push32((uint32_t)(0x12dad730u));
  /* 12d9e54f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12d9e554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9e556 mov ax, word ptr [0x12dad774] */
  AX = (r16((uint32_t)(0x12dad774)));
  /* 12d9e55c push eax */
  push32((uint32_t)(EAX));
  /* 12d9e55d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9e55f call 0x12da0e00 */
  push32(0x12d9e564u); f_12da0e00();
  /* 12d9e564 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9e569 je 0x12d9e570 */
  if (C.zf) goto L_12d9e570;
  /* 12d9e56b jmp 0x12d9e832 */
  goto L_12d9e832;
L_12d9e570:;
  /* 12d9e570 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12d9e572 push 0x12da9fb4 */
  push32((uint32_t)(0x12da9fb4u));
  /* 12d9e577 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e579 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12d9e57e call 0x12d92c40 */
  push32(0x12d9e583u); f_12d92c40();
  /* 12d9e583 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e586 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12d9e589 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12d9e58b push 0x12da9fb4 */
  push32((uint32_t)(0x12da9fb4u));
  /* 12d9e590 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e592 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12d9e597 call 0x12d92c40 */
  push32(0x12d9e59cu); f_12d92c40();
  /* 12d9e59c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e59f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d9e5a2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12d9e5a4 push 0x12da9fb4 */
  push32((uint32_t)(0x12da9fb4u));
  /* 12d9e5a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e5ab push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12d9e5b0 call 0x12d92c40 */
  push32(0x12d9e5b5u); f_12d92c40();
  /* 12d9e5b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e5b8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12d9e5bb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12d9e5bd push 0x12da9fb4 */
  push32((uint32_t)(0x12da9fb4u));
  /* 12d9e5c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e5c4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12d9e5c9 call 0x12d92c40 */
  push32(0x12d9e5ceu); f_12d92c40();
  /* 12d9e5ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e5d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d9e5d4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e5d8 je 0x12d9e5ec */
  if (C.zf) goto L_12d9e5ec;
  /* 12d9e5da cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e5de je 0x12d9e5ec */
  if (C.zf) goto L_12d9e5ec;
  /* 12d9e5e0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e5e4 je 0x12d9e5ec */
  if (C.zf) goto L_12d9e5ec;
  /* 12d9e5e6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e5ea jne 0x12d9e5f1 */
  if (!C.zf) goto L_12d9e5f1;
L_12d9e5ec:;
  /* 12d9e5ec jmp 0x12d9e832 */
  goto L_12d9e832;
L_12d9e5f1:;
  /* 12d9e5f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9e5f4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d9e5f7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d9e5fe jmp 0x12d9e609 */
  goto L_12d9e609;
L_12d9e600:;
  /* 12d9e600 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9e603 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e606 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12d9e609:;
  /* 12d9e609 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e610 jge 0x12d9e625 */
  if ((C.sf==C.of)) goto L_12d9e625;
  /* 12d9e612 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9e615 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12d9e618 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12d9e61a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9e61d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e620 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d9e623 jmp 0x12d9e600 */
  goto L_12d9e600;
L_12d9e625:;
  /* 12d9e625 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12d9e628 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e629 mov ecx, dword ptr [0x12dad730] */
  ECX = (r32((uint32_t)(0x12dad730)));
  /* 12d9e62f push ecx */
  push32((uint32_t)(ECX));
  /* 12d9e630 call dword ptr [0x12db0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0344))), 0x12d9e636u);
  /* 12d9e636 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9e638 jne 0x12d9e63f */
  if (!C.zf) goto L_12d9e63f;
  /* 12d9e63a jmp 0x12d9e832 */
  goto L_12d9e832;
L_12d9e63f:;
  /* 12d9e63f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e643 jbe 0x12d9e64a */
  if ((C.cf||C.zf)) goto L_12d9e64a;
  /* 12d9e645 jmp 0x12d9e832 */
  goto L_12d9e832;
L_12d9e64a:;
  /* 12d9e64a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9e64d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9e653 mov dword ptr [0x12dabf64], edx */
  w32((uint32_t)(0x12dabf64), (EDX));
  /* 12d9e659 cmp dword ptr [0x12dabf64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dabf64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e660 jle 0x12d9e6b9 */
  if ((C.zf||C.sf!=C.of)) goto L_12d9e6b9;
  /* 12d9e662 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12d9e665 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d9e668 jmp 0x12d9e673 */
  goto L_12d9e673;
L_12d9e66a:;
  /* 12d9e66a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9e66d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e670 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12d9e673:;
  /* 12d9e673 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9e676 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9e678 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d9e67a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9e67c je 0x12d9e6b9 */
  if (C.zf) goto L_12d9e6b9;
  /* 12d9e67e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9e681 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9e683 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12d9e686 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9e688 je 0x12d9e6b9 */
  if (C.zf) goto L_12d9e6b9;
  /* 12d9e68a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9e68d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e68f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d9e691 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d9e694 jmp 0x12d9e69f */
  goto L_12d9e69f;
L_12d9e696:;
  /* 12d9e696 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9e699 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e69c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12d9e69f:;
  /* 12d9e69f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9e6a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e6a4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12d9e6a7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e6aa jg 0x12d9e6b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d9e6b7;
  /* 12d9e6ac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9e6af add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e6b2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d9e6b5 jmp 0x12d9e696 */
  goto L_12d9e696;
L_12d9e6b7:;
  /* 12d9e6b7 jmp 0x12d9e66a */
  goto L_12d9e66a;
L_12d9e6b9:;
  /* 12d9e6b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9e6bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9e6bd push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9e6bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9e6c2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e6c5 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e6c6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d9e6cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9e6ce push ecx */
  push32((uint32_t)(ECX));
  /* 12d9e6cf push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9e6d1 call 0x12d9ae70 */
  push32(0x12d9e6d6u); f_12d9ae70();
  /* 12d9e6d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e6d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9e6db jne 0x12d9e6e2 */
  if (!C.zf) goto L_12d9e6e2;
  /* 12d9e6dd jmp 0x12d9e832 */
  goto L_12d9e832;
L_12d9e6e2:;
  /* 12d9e6e2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9e6e5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12d9e6ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d9e6ed mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d9e6f0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d9e6f7 jmp 0x12d9e702 */
  goto L_12d9e702;
L_12d9e6f9:;
  /* 12d9e6f9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9e6fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e6ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12d9e702:;
  /* 12d9e702 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e709 jge 0x12d9e720 */
  if ((C.sf==C.of)) goto L_12d9e720;
  /* 12d9e70b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d9e70e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12d9e712 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12d9e715 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d9e718 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e71b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d9e71e jmp 0x12d9e6f9 */
  goto L_12d9e6f9;
L_12d9e720:;
  /* 12d9e720 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9e722 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9e724 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d9e727 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e72a push edx */
  push32((uint32_t)(EDX));
  /* 12d9e72b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d9e730 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d9e733 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e734 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9e736 call 0x12da10a0 */
  push32(0x12d9e73bu); f_12da10a0();
  /* 12d9e73b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e73e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9e740 jne 0x12d9e747 */
  if (!C.zf) goto L_12d9e747;
  /* 12d9e742 jmp 0x12d9e832 */
  goto L_12d9e832;
L_12d9e747:;
  /* 12d9e747 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d9e74a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12d9e74f cmp dword ptr [0x12dabf64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dabf64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e756 jle 0x12d9e7b3 */
  if ((C.zf||C.sf!=C.of)) goto L_12d9e7b3;
  /* 12d9e758 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12d9e75b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d9e75e jmp 0x12d9e769 */
  goto L_12d9e769;
L_12d9e760:;
  /* 12d9e760 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9e763 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e766 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12d9e769:;
  /* 12d9e769 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9e76c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9e76e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d9e770 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9e772 je 0x12d9e7b3 */
  if (C.zf) goto L_12d9e7b3;
  /* 12d9e774 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9e777 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e779 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12d9e77c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9e77e je 0x12d9e7b3 */
  if (C.zf) goto L_12d9e7b3;
  /* 12d9e780 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9e783 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9e785 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d9e787 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d9e78a jmp 0x12d9e795 */
  goto L_12d9e795;
L_12d9e78c:;
  /* 12d9e78c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9e78f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e792 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12d9e795:;
  /* 12d9e795 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9e798 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9e79a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d9e79d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e7a0 jg 0x12d9e7b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d9e7b1;
  /* 12d9e7a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d9e7a5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9e7a8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12d9e7af jmp 0x12d9e78c */
  goto L_12d9e78c;
L_12d9e7b1:;
  /* 12d9e7b1 jmp 0x12d9e760 */
  goto L_12d9e760;
L_12d9e7b3:;
  /* 12d9e7b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9e7b6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e7b9 mov dword ptr [0x12dabd58], eax */
  w32((uint32_t)(0x12dabd58), (EAX));
  /* 12d9e7be mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d9e7c1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e7c4 mov dword ptr [0x12dabd5c], ecx */
  w32((uint32_t)(0x12dabd5c), (ECX));
  /* 12d9e7ca cmp dword ptr [0x12dad760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e7d1 je 0x12d9e7e4 */
  if (C.zf) goto L_12d9e7e4;
  /* 12d9e7d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e7d5 mov edx, dword ptr [0x12dad760] */
  EDX = (r32((uint32_t)(0x12dad760)));
  /* 12d9e7db push edx */
  push32((uint32_t)(EDX));
  /* 12d9e7dc call 0x12d936d0 */
  push32(0x12d9e7e1u); f_12d936d0();
  /* 12d9e7e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9e7e4:;
  /* 12d9e7e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9e7e7 mov dword ptr [0x12dad760], eax */
  w32((uint32_t)(0x12dad760), (EAX));
  /* 12d9e7ec cmp dword ptr [0x12dad764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9e7f3 je 0x12d9e806 */
  if (C.zf) goto L_12d9e806;
  /* 12d9e7f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e7f7 mov ecx, dword ptr [0x12dad764] */
  ECX = (r32((uint32_t)(0x12dad764)));
  /* 12d9e7fd push ecx */
  push32((uint32_t)(ECX));
  /* 12d9e7fe call 0x12d936d0 */
  push32(0x12d9e803u); f_12d936d0();
  /* 12d9e803 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9e806:;
  /* 12d9e806 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d9e809 mov dword ptr [0x12dad764], edx */
  w32((uint32_t)(0x12dad764), (EDX));
  /* 12d9e80f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e811 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9e814 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e815 call 0x12d936d0 */
  push32(0x12d9e81au); f_12d936d0();
  /* 12d9e81a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e81d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e81f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d9e822 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9e823 call 0x12d936d0 */
  push32(0x12d9e828u); f_12d936d0();
  /* 12d9e828 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e82b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9e82d jmp 0x12d9e8bc */
  goto L_12d9e8bc;
L_12d9e832:;
  /* 12d9e832 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e834 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9e837 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e838 call 0x12d936d0 */
  push32(0x12d9e83du); f_12d936d0();
  /* 12d9e83d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e840 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e842 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d9e845 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e846 call 0x12d936d0 */
  push32(0x12d9e84bu); f_12d936d0();
  /* 12d9e84b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e84e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e850 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d9e853 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9e854 call 0x12d936d0 */
  push32(0x12d9e859u); f_12d936d0();
  /* 12d9e859 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e85c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e85e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d9e861 push edx */
  push32((uint32_t)(EDX));
  /* 12d9e862 call 0x12d936d0 */
  push32(0x12d9e867u); f_12d936d0();
  /* 12d9e867 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e86a mov eax, 1 */
  EAX = (0x1u);
  /* 12d9e86f jmp 0x12d9e8bc */
  goto L_12d9e8bc;
L_12d9e871:;
  /* 12d9e871 mov dword ptr [0x12dabd58], 0x12dabd62 */
  w32((uint32_t)(0x12dabd58), (0x12dabd62u));
  /* 12d9e87b mov dword ptr [0x12dabd5c], 0x12dabd62 */
  w32((uint32_t)(0x12dabd5c), (0x12dabd62u));
  /* 12d9e885 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e887 mov eax, dword ptr [0x12dad760] */
  EAX = (r32((uint32_t)(0x12dad760)));
  /* 12d9e88c push eax */
  push32((uint32_t)(EAX));
  /* 12d9e88d call 0x12d936d0 */
  push32(0x12d9e892u); f_12d936d0();
  /* 12d9e892 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e895 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9e897 mov ecx, dword ptr [0x12dad764] */
  ECX = (r32((uint32_t)(0x12dad764)));
  /* 12d9e89d push ecx */
  push32((uint32_t)(ECX));
  /* 12d9e89e call 0x12d936d0 */
  push32(0x12d9e8a3u); f_12d936d0();
  /* 12d9e8a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e8a6 mov dword ptr [0x12dad760], 0 */
  w32((uint32_t)(0x12dad760), (0x0u));
  /* 12d9e8b0 mov dword ptr [0x12dad764], 0 */
  w32((uint32_t)(0x12dad764), (0x0u));
  /* 12d9e8ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d9e8bc:;
  /* 12d9e8bc mov esp, ebp */
  ESP = (EBP);
  /* 12d9e8be pop ebp */
  EBP = (pop32());
  /* 12d9e8bf ret  */
  ESPCHK(0x12d9e520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8c0 @ 0x12d9e8c0 (7 bytes, 5 insns) */
void f_12d9e8c0(void) {
  FTRACE(0x12d9e8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9e8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9e8c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9e8c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9e8c5 pop ebp */
  EBP = (pop32());
  /* 12d9e8c6 ret  */
  ESPCHK(0x12d9e8c0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12d9e8d0 (129 bytes, 56 insns) */
void f_12d9e8d0(void) {
  FTRACE(0x12d9e8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9e8d0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d9e8d4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d9e8d8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12d9e8de jne 0x12d9e91c */
  if (!C.zf) goto L_12d9e91c;
L_12d9e8e0:;
  /* 12d9e8e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d9e8e2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d9e8e4 jne 0x12d9e914 */
  if (!C.zf) goto L_12d9e914;
  /* 12d9e8e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d9e8e8 je 0x12d9e910 */
  if (C.zf) goto L_12d9e910;
  /* 12d9e8ea cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d9e8ed jne 0x12d9e914 */
  if (!C.zf) goto L_12d9e914;
  /* 12d9e8ef or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12d9e8f1 je 0x12d9e910 */
  if (C.zf) goto L_12d9e910;
  /* 12d9e8f3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d9e8f6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d9e8f9 jne 0x12d9e914 */
  if (!C.zf) goto L_12d9e914;
  /* 12d9e8fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d9e8fd je 0x12d9e910 */
  if (C.zf) goto L_12d9e910;
  /* 12d9e8ff cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d9e902 jne 0x12d9e914 */
  if (!C.zf) goto L_12d9e914;
  /* 12d9e904 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e907 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e90a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12d9e90c jne 0x12d9e8e0 */
  if (!C.zf) goto L_12d9e8e0;
  /* 12d9e90e mov edi, edi */
  EDI = (EDI);
L_12d9e910:;
  /* 12d9e910 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9e912 ret  */
  ESPCHK(0x12d9e8d0u, _esp0);
  ESP += 4; return;
  /* 12d9e913 nop  */
  /* nop */
L_12d9e914:;
  /* 12d9e914 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9e916 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d9e918 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12d9e919 ret  */
  ESPCHK(0x12d9e8d0u, _esp0);
  ESP += 4; return;
  /* 12d9e91a mov edi, edi */
  EDI = (EDI);
L_12d9e91c:;
  /* 12d9e91c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12d9e922 je 0x12d9e938 */
  if (C.zf) goto L_12d9e938;
  /* 12d9e924 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d9e926 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12d9e927 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d9e929 jne 0x12d9e914 */
  if (!C.zf) goto L_12d9e914;
  /* 12d9e92b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12d9e92c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d9e92e je 0x12d9e910 */
  if (C.zf) goto L_12d9e910;
  /* 12d9e930 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12d9e936 je 0x12d9e8e0 */
  if (C.zf) goto L_12d9e8e0;
L_12d9e938:;
  /* 12d9e938 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12d9e93b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e93e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d9e940 jne 0x12d9e914 */
  if (!C.zf) goto L_12d9e914;
  /* 12d9e942 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d9e944 je 0x12d9e910 */
  if (C.zf) goto L_12d9e910;
  /* 12d9e946 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d9e949 jne 0x12d9e914 */
  if (!C.zf) goto L_12d9e914;
  /* 12d9e94b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12d9e94d je 0x12d9e910 */
  if (C.zf) goto L_12d9e910;
  /* 12d9e94f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e952 jmp 0x12d9e8e0 */
  goto L_12d9e8e0;
}

/* FUN_1000e960 @ 0x12d9e960 (62 bytes, 35 insns) */
void f_12d9e960(void) {
  FTRACE(0x12d9e960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9e960 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9e961 mov ebp, esp */
  EBP = (ESP);
  /* 12d9e963 push esi */
  push32((uint32_t)(ESI));
  /* 12d9e964 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9e966 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e967 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e968 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e969 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e96a push eax */
  push32((uint32_t)(EAX));
  /* 12d9e96b push eax */
  push32((uint32_t)(EAX));
  /* 12d9e96c push eax */
  push32((uint32_t)(EAX));
  /* 12d9e96d push eax */
  push32((uint32_t)(EAX));
  /* 12d9e96e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9e971 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d9e974:;
  /* 12d9e974 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d9e976 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d9e978 je 0x12d9e981 */
  if (C.zf) goto L_12d9e981;
  /* 12d9e97a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12d9e97b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12d9e97b");
  /* 12d9e97f jmp 0x12d9e974 */
  goto L_12d9e974;
L_12d9e981:;
  /* 12d9e981 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e984 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e987 nop  */
  /* nop */
L_12d9e988:;
  /* 12d9e988 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12d9e989 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d9e98b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d9e98d je 0x12d9e996 */
  if (C.zf) goto L_12d9e996;
  /* 12d9e98f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d9e990 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12d9e990");
  /* 12d9e994 jae 0x12d9e988 */
  if (!C.cf) goto L_12d9e988;
L_12d9e996:;
  /* 12d9e996 mov eax, ecx */
  EAX = (ECX);
  /* 12d9e998 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e99b pop esi */
  ESI = (pop32());
  /* 12d9e99c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d9e99d ret  */
  ESPCHK(0x12d9e960u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12d9e9a0 (56 bytes, 31 insns) */
void f_12d9e9a0(void) {
  FTRACE(0x12d9e9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9e9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9e9a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9e9a3 push edi */
  push32((uint32_t)(EDI));
  /* 12d9e9a4 push esi */
  push32((uint32_t)(ESI));
  /* 12d9e9a5 push ebx */
  push32((uint32_t)(EBX));
  /* 12d9e9a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9e9a9 jecxz 0x12d9e9d1 */
  x86_unimpl("jecxz @ 0x12d9e9a9");
  /* 12d9e9ab mov ebx, ecx */
  EBX = (ECX);
  /* 12d9e9ad mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9e9b0 mov esi, edi */
  ESI = (EDI);
  /* 12d9e9b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9e9b4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12d9e9b6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9e9b8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9e9ba mov edi, esi */
  EDI = (ESI);
  /* 12d9e9bc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9e9bf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12d9e9c1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12d9e9c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9e9c6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d9e9c9 ja 0x12d9e9cf */
  if ((!C.cf&&!C.zf)) goto L_12d9e9cf;
  /* 12d9e9cb je 0x12d9e9d1 */
  if (C.zf) goto L_12d9e9d1;
  /* 12d9e9cd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d9e9ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12d9e9cf:;
  /* 12d9e9cf not ecx */
  ECX = (~(ECX));
L_12d9e9d1:;
  /* 12d9e9d1 mov eax, ecx */
  EAX = (ECX);
  /* 12d9e9d3 pop ebx */
  EBX = (pop32());
  /* 12d9e9d4 pop esi */
  ESI = (pop32());
  /* 12d9e9d5 pop edi */
  EDI = (pop32());
  /* 12d9e9d6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d9e9d7 ret  */
  ESPCHK(0x12d9e9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9e0 @ 0x12d9e9e0 (58 bytes, 32 insns) */
void f_12d9e9e0(void) {
  FTRACE(0x12d9e9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9e9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9e9e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9e9e3 push esi */
  push32((uint32_t)(ESI));
  /* 12d9e9e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9e9e6 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e9e7 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e9e8 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e9e9 push eax */
  push32((uint32_t)(EAX));
  /* 12d9e9ea push eax */
  push32((uint32_t)(EAX));
  /* 12d9e9eb push eax */
  push32((uint32_t)(EAX));
  /* 12d9e9ec push eax */
  push32((uint32_t)(EAX));
  /* 12d9e9ed push eax */
  push32((uint32_t)(EAX));
  /* 12d9e9ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9e9f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d9e9f4:;
  /* 12d9e9f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d9e9f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d9e9f8 je 0x12d9ea01 */
  if (C.zf) goto L_12d9ea01;
  /* 12d9e9fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12d9e9fb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12d9e9fb");
  /* 12d9e9ff jmp 0x12d9e9f4 */
  goto L_12d9e9f4;
L_12d9ea01:;
  /* 12d9ea01 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12d9ea04:;
  /* 12d9ea04 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d9ea06 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d9ea08 je 0x12d9ea14 */
  if (C.zf) goto L_12d9ea14;
  /* 12d9ea0a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d9ea0b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12d9ea0b");
  /* 12d9ea0f jae 0x12d9ea04 */
  if (!C.cf) goto L_12d9ea04;
  /* 12d9ea11 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12d9ea14:;
  /* 12d9ea14 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ea17 pop esi */
  ESI = (pop32());
  /* 12d9ea18 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d9ea19 ret  */
  ESPCHK(0x12d9e9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea20 @ 0x12d9ea20 (512 bytes, 147 insns) */
void f_12d9ea20(void) {
  FTRACE(0x12d9ea20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9ea20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9ea21 mov ebp, esp */
  EBP = (ESP);
  /* 12d9ea23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ea26 cmp dword ptr [0x12dad7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ea2d jne 0x12d9ea52 */
  if (!C.zf) goto L_12d9ea52;
  /* 12d9ea2f call 0x12d9f4f0 */
  push32(0x12d9ea34u); f_12d9f4f0();
  /* 12d9ea34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9ea36 je 0x12d9ea42 */
  if (C.zf) goto L_12d9ea42;
  /* 12d9ea38 mov eax, dword ptr [0x12db026c] */
  EAX = (r32((uint32_t)(0x12db026c)));
  /* 12d9ea3d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9ea40 jmp 0x12d9ea49 */
  goto L_12d9ea49;
L_12d9ea42:;
  /* 12d9ea42 mov dword ptr [ebp - 8], 0x12d9f540 */
  w32((uint32_t)(EBP + -0x8), (0x12d9f540u));
L_12d9ea49:;
  /* 12d9ea49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9ea4c mov dword ptr [0x12dad7ac], ecx */
  w32((uint32_t)(0x12dad7ac), (ECX));
L_12d9ea52:;
  /* 12d9ea52 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ea56 jne 0x12d9ea62 */
  if (!C.zf) goto L_12d9ea62;
  /* 12d9ea58 call 0x12d9f340 */
  push32(0x12d9ea5du); f_12d9f340();
  /* 12d9ea5d jmp 0x12d9eb2e */
  goto L_12d9eb2e;
L_12d9ea62:;
  /* 12d9ea62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ea65 mov dword ptr [0x12dad79c], edx */
  w32((uint32_t)(0x12dad79c), (EDX));
  /* 12d9ea6b cmp dword ptr [0x12dad79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ea72 je 0x12d9ea94 */
  if (C.zf) goto L_12d9ea94;
  /* 12d9ea74 mov eax, dword ptr [0x12dad79c] */
  EAX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9ea79 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d9ea7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9ea7e je 0x12d9ea94 */
  if (C.zf) goto L_12d9ea94;
  /* 12d9ea80 push 0x12dad79c */
  push32((uint32_t)(0x12dad79cu));
  /* 12d9ea85 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12d9ea87 push 0x12dacb50 */
  push32((uint32_t)(0x12dacb50u));
  /* 12d9ea8c call 0x12d9ec20 */
  push32(0x12d9ea91u); f_12d9ec20();
  /* 12d9ea91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9ea94:;
  /* 12d9ea94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ea97 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ea9a mov dword ptr [0x12dad7a0], edx */
  w32((uint32_t)(0x12dad7a0), (EDX));
  /* 12d9eaa0 cmp dword ptr [0x12dad7a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad7a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9eaa7 je 0x12d9eac9 */
  if (C.zf) goto L_12d9eac9;
  /* 12d9eaa9 mov eax, dword ptr [0x12dad7a0] */
  EAX = (r32((uint32_t)(0x12dad7a0)));
  /* 12d9eaae movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d9eab1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9eab3 je 0x12d9eac9 */
  if (C.zf) goto L_12d9eac9;
  /* 12d9eab5 push 0x12dad7a0 */
  push32((uint32_t)(0x12dad7a0u));
  /* 12d9eaba push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12d9eabc push 0x12daca98 */
  push32((uint32_t)(0x12daca98u));
  /* 12d9eac1 call 0x12d9ec20 */
  push32(0x12d9eac6u); f_12d9ec20();
  /* 12d9eac6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9eac9:;
  /* 12d9eac9 mov dword ptr [0x12dad7a4], 0 */
  w32((uint32_t)(0x12dad7a4), (0x0u));
  /* 12d9ead3 cmp dword ptr [0x12dad79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9eada je 0x12d9eb0d */
  if (C.zf) goto L_12d9eb0d;
  /* 12d9eadc mov edx, dword ptr [0x12dad79c] */
  EDX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9eae2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d9eae5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9eae7 je 0x12d9eb0d */
  if (C.zf) goto L_12d9eb0d;
  /* 12d9eae9 cmp dword ptr [0x12dad7a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad7a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9eaf0 je 0x12d9eb06 */
  if (C.zf) goto L_12d9eb06;
  /* 12d9eaf2 mov ecx, dword ptr [0x12dad7a0] */
  ECX = (r32((uint32_t)(0x12dad7a0)));
  /* 12d9eaf8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d9eafb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9eafd je 0x12d9eb06 */
  if (C.zf) goto L_12d9eb06;
  /* 12d9eaff call 0x12d9ecb0 */
  push32(0x12d9eb04u); f_12d9ecb0();
  /* 12d9eb04 jmp 0x12d9eb0b */
  goto L_12d9eb0b;
L_12d9eb06:;
  /* 12d9eb06 call 0x12d9f0a0 */
  push32(0x12d9eb0bu); f_12d9f0a0();
L_12d9eb0b:;
  /* 12d9eb0b jmp 0x12d9eb2e */
  goto L_12d9eb2e;
L_12d9eb0d:;
  /* 12d9eb0d cmp dword ptr [0x12dad7a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad7a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9eb14 je 0x12d9eb29 */
  if (C.zf) goto L_12d9eb29;
  /* 12d9eb16 mov eax, dword ptr [0x12dad7a0] */
  EAX = (r32((uint32_t)(0x12dad7a0)));
  /* 12d9eb1b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d9eb1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9eb20 je 0x12d9eb29 */
  if (C.zf) goto L_12d9eb29;
  /* 12d9eb22 call 0x12d9f240 */
  push32(0x12d9eb27u); f_12d9f240();
  /* 12d9eb27 jmp 0x12d9eb2e */
  goto L_12d9eb2e;
L_12d9eb29:;
  /* 12d9eb29 call 0x12d9f340 */
  push32(0x12d9eb2eu); f_12d9f340();
L_12d9eb2e:;
  /* 12d9eb2e cmp dword ptr [0x12dad7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9eb35 jne 0x12d9eb3e */
  if (!C.zf) goto L_12d9eb3e;
  /* 12d9eb37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9eb39 jmp 0x12d9ec1c */
  goto L_12d9ec1c;
L_12d9eb3e:;
  /* 12d9eb3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9eb41 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9eb47 push edx */
  push32((uint32_t)(EDX));
  /* 12d9eb48 call 0x12d9f370 */
  push32(0x12d9eb4du); f_12d9f370();
  /* 12d9eb4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9eb50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9eb53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9eb57 je 0x12d9eb6c */
  if (C.zf) goto L_12d9eb6c;
  /* 12d9eb59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9eb5c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9eb61 push eax */
  push32((uint32_t)(EAX));
  /* 12d9eb62 call dword ptr [0x12db0270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0270))), 0x12d9eb68u);
  /* 12d9eb68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9eb6a jne 0x12d9eb73 */
  if (!C.zf) goto L_12d9eb73;
L_12d9eb6c:;
  /* 12d9eb6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9eb6e jmp 0x12d9ec1c */
  goto L_12d9ec1c;
L_12d9eb73:;
  /* 12d9eb73 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9eb75 mov ecx, dword ptr [0x12dad78c] */
  ECX = (r32((uint32_t)(0x12dad78c)));
  /* 12d9eb7b push ecx */
  push32((uint32_t)(ECX));
  /* 12d9eb7c call dword ptr [0x12db0274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0274))), 0x12d9eb82u);
  /* 12d9eb82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9eb84 jne 0x12d9eb8d */
  if (!C.zf) goto L_12d9eb8d;
  /* 12d9eb86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9eb88 jmp 0x12d9ec1c */
  goto L_12d9ec1c;
L_12d9eb8d:;
  /* 12d9eb8d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9eb91 je 0x12d9ebb8 */
  if (C.zf) goto L_12d9ebb8;
  /* 12d9eb93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9eb96 mov ax, word ptr [0x12dad78c] */
  AX = (r16((uint32_t)(0x12dad78c)));
  /* 12d9eb9c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12d9eb9f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9eba2 mov dx, word ptr [0x12dad7a8] */
  DX = (r16((uint32_t)(0x12dad7a8)));
  /* 12d9eba9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12d9ebad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9ebb0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12d9ebb4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12d9ebb8:;
  /* 12d9ebb8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ebbc je 0x12d9ec17 */
  if (C.zf) goto L_12d9ec17;
  /* 12d9ebbe push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12d9ebc0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9ebc3 push edx */
  push32((uint32_t)(EDX));
  /* 12d9ebc4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12d9ebc9 mov eax, dword ptr [0x12dad78c] */
  EAX = (r32((uint32_t)(0x12dad78c)));
  /* 12d9ebce push eax */
  push32((uint32_t)(EAX));
  /* 12d9ebcf call dword ptr [0x12dad7ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dad7ac))), 0x12d9ebd5u);
  /* 12d9ebd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9ebd7 jne 0x12d9ebdd */
  if (!C.zf) goto L_12d9ebdd;
  /* 12d9ebd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9ebdb jmp 0x12d9ec1c */
  goto L_12d9ec1c;
L_12d9ebdd:;
  /* 12d9ebdd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12d9ebdf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9ebe2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ebe5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9ebe6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12d9ebeb mov edx, dword ptr [0x12dad7a8] */
  EDX = (r32((uint32_t)(0x12dad7a8)));
  /* 12d9ebf1 push edx */
  push32((uint32_t)(EDX));
  /* 12d9ebf2 call dword ptr [0x12dad7ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dad7ac))), 0x12d9ebf8u);
  /* 12d9ebf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9ebfa jne 0x12d9ec00 */
  if (!C.zf) goto L_12d9ec00;
  /* 12d9ebfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9ebfe jmp 0x12d9ec1c */
  goto L_12d9ec1c;
L_12d9ec00:;
  /* 12d9ec00 push 0xa */
  push32((uint32_t)(0xau));
  /* 12d9ec02 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9ec05 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ec0a push eax */
  push32((uint32_t)(EAX));
  /* 12d9ec0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9ec0e push ecx */
  push32((uint32_t)(ECX));
  /* 12d9ec0f call 0x12d95780 */
  push32(0x12d9ec14u); f_12d95780();
  /* 12d9ec14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9ec17:;
  /* 12d9ec17 mov eax, 1 */
  EAX = (0x1u);
L_12d9ec1c:;
  /* 12d9ec1c mov esp, ebp */
  ESP = (EBP);
  /* 12d9ec1e pop ebp */
  EBP = (pop32());
  /* 12d9ec1f ret  */
  ESPCHK(0x12d9ea20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec20 @ 0x12d9ec20 (130 bytes, 47 insns) */
void f_12d9ec20(void) {
  FTRACE(0x12d9ec20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9ec20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9ec21 mov ebp, esp */
  EBP = (ESP);
  /* 12d9ec23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ec26 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d9ec2d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12d9ec34:;
  /* 12d9ec34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9ec37 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ec3a jg 0x12d9ec9e */
  if ((!C.zf&&C.sf==C.of)) goto L_12d9ec9e;
  /* 12d9ec3c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ec40 je 0x12d9ec9e */
  if (C.zf) goto L_12d9ec9e;
  /* 12d9ec42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9ec45 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ec48 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d9ec49 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ec4b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d9ec4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9ec50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9ec53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ec56 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12d9ec59 push eax */
  push32((uint32_t)(EAX));
  /* 12d9ec5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9ec5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d9ec5f push edx */
  push32((uint32_t)(EDX));
  /* 12d9ec60 call 0x12da1310 */
  push32(0x12d9ec65u); f_12da1310();
  /* 12d9ec65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ec68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9ec6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ec6f jne 0x12d9ec82 */
  if (!C.zf) goto L_12d9ec82;
  /* 12d9ec71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9ec74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ec77 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12d9ec7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9ec7e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d9ec80 jmp 0x12d9ec9c */
  goto L_12d9ec9c;
L_12d9ec82:;
  /* 12d9ec82 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ec86 jge 0x12d9ec93 */
  if ((C.sf==C.of)) goto L_12d9ec93;
  /* 12d9ec88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9ec8b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ec8e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d9ec91 jmp 0x12d9ec9c */
  goto L_12d9ec9c;
L_12d9ec93:;
  /* 12d9ec93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9ec96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ec99 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d9ec9c:;
  /* 12d9ec9c jmp 0x12d9ec34 */
  goto L_12d9ec34;
L_12d9ec9e:;
  /* 12d9ec9e mov esp, ebp */
  ESP = (EBP);
  /* 12d9eca0 pop ebp */
  EBP = (pop32());
  /* 12d9eca1 ret  */
  ESPCHK(0x12d9ec20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecb0 @ 0x12d9ecb0 (186 bytes, 50 insns) */
void f_12d9ecb0(void) {
  FTRACE(0x12d9ecb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9ecb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9ecb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9ecb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9ecb4 mov eax, dword ptr [0x12dad79c] */
  EAX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9ecb9 push eax */
  push32((uint32_t)(EAX));
  /* 12d9ecba call 0x12d95a70 */
  push32(0x12d9ecbfu); f_12d95a70();
  /* 12d9ecbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ecc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9ecc4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ecc7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d9ecca mov dword ptr [0x12dad798], ecx */
  w32((uint32_t)(0x12dad798), (ECX));
  /* 12d9ecd0 mov edx, dword ptr [0x12dad7a0] */
  EDX = (r32((uint32_t)(0x12dad7a0)));
  /* 12d9ecd6 push edx */
  push32((uint32_t)(EDX));
  /* 12d9ecd7 call 0x12d95a70 */
  push32(0x12d9ecdcu); f_12d95a70();
  /* 12d9ecdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ecdf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9ece1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ece4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d9ece7 mov dword ptr [0x12dad790], ecx */
  w32((uint32_t)(0x12dad790), (ECX));
  /* 12d9eced mov dword ptr [0x12dad78c], 0 */
  w32((uint32_t)(0x12dad78c), (0x0u));
  /* 12d9ecf7 cmp dword ptr [0x12dad798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ecfe je 0x12d9ed09 */
  if (C.zf) goto L_12d9ed09;
  /* 12d9ed00 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12d9ed07 jmp 0x12d9ed1b */
  goto L_12d9ed1b;
L_12d9ed09:;
  /* 12d9ed09 mov edx, dword ptr [0x12dad79c] */
  EDX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9ed0f push edx */
  push32((uint32_t)(EDX));
  /* 12d9ed10 call 0x12d9f750 */
  push32(0x12d9ed15u); f_12d9f750();
  /* 12d9ed15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ed18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d9ed1b:;
  /* 12d9ed1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9ed1e mov dword ptr [0x12dad794], eax */
  w32((uint32_t)(0x12dad794), (EAX));
  /* 12d9ed23 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9ed25 push 0x12d9ed70 */
  push32((uint32_t)(0x12d9ed70u));
  /* 12d9ed2a call dword ptr [0x12db0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0268))), 0x12d9ed30u);
  /* 12d9ed30 mov ecx, dword ptr [0x12dad7a4] */
  ECX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9ed36 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9ed3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9ed3e je 0x12d9ed5c */
  if (C.zf) goto L_12d9ed5c;
  /* 12d9ed40 mov edx, dword ptr [0x12dad7a4] */
  EDX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9ed46 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9ed4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9ed4e je 0x12d9ed5c */
  if (C.zf) goto L_12d9ed5c;
  /* 12d9ed50 mov eax, dword ptr [0x12dad7a4] */
  EAX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9ed55 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9ed58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9ed5a jne 0x12d9ed66 */
  if (!C.zf) goto L_12d9ed66;
L_12d9ed5c:;
  /* 12d9ed5c mov dword ptr [0x12dad7a4], 0 */
  w32((uint32_t)(0x12dad7a4), (0x0u));
L_12d9ed66:;
  /* 12d9ed66 mov esp, ebp */
  ESP = (EBP);
  /* 12d9ed68 pop ebp */
  EBP = (pop32());
  /* 12d9ed69 ret  */
  ESPCHK(0x12d9ecb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed70 @ 0x12d9ed70 (804 bytes, 220 insns) */
void f_12d9ed70(void) {
  FTRACE(0x12d9ed70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9ed70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9ed71 mov ebp, esp */
  EBP = (ESP);
  /* 12d9ed73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ed76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9ed79 push eax */
  push32((uint32_t)(EAX));
  /* 12d9ed7a call 0x12d9f6d0 */
  push32(0x12d9ed7fu); f_12d9f6d0();
  /* 12d9ed7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ed82 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12d9ed85 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d9ed87 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d9ed8a push ecx */
  push32((uint32_t)(ECX));
  /* 12d9ed8b mov edx, dword ptr [0x12dad790] */
  EDX = (r32((uint32_t)(0x12dad790)));
  /* 12d9ed91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9ed93 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ed95 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9ed9b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9eda1 push edx */
  push32((uint32_t)(EDX));
  /* 12d9eda2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9eda5 push eax */
  push32((uint32_t)(EAX));
  /* 12d9eda6 call dword ptr [0x12dad7ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dad7ac))), 0x12d9edacu);
  /* 12d9edac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9edae jne 0x12d9edc4 */
  if (!C.zf) goto L_12d9edc4;
  /* 12d9edb0 mov dword ptr [0x12dad7a4], 0 */
  w32((uint32_t)(0x12dad7a4), (0x0u));
  /* 12d9edba mov eax, 1 */
  EAX = (0x1u);
  /* 12d9edbf jmp 0x12d9f08e */
  goto L_12d9f08e;
L_12d9edc4:;
  /* 12d9edc4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d9edc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9edc8 mov edx, dword ptr [0x12dad7a0] */
  EDX = (r32((uint32_t)(0x12dad7a0)));
  /* 12d9edce push edx */
  push32((uint32_t)(EDX));
  /* 12d9edcf call 0x12da1310 */
  push32(0x12d9edd4u); f_12da1310();
  /* 12d9edd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9edd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9edd9 jne 0x12d9eeff */
  if (!C.zf) goto L_12d9eeff;
  /* 12d9eddf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d9ede1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d9ede4 push eax */
  push32((uint32_t)(EAX));
  /* 12d9ede5 mov ecx, dword ptr [0x12dad798] */
  ECX = (r32((uint32_t)(0x12dad798)));
  /* 12d9edeb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9eded sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9edef and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9edf5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9edfb push ecx */
  push32((uint32_t)(ECX));
  /* 12d9edfc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9edff push edx */
  push32((uint32_t)(EDX));
  /* 12d9ee00 call dword ptr [0x12dad7ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dad7ac))), 0x12d9ee06u);
  /* 12d9ee06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9ee08 jne 0x12d9ee1e */
  if (!C.zf) goto L_12d9ee1e;
  /* 12d9ee0a mov dword ptr [0x12dad7a4], 0 */
  w32((uint32_t)(0x12dad7a4), (0x0u));
  /* 12d9ee14 mov eax, 1 */
  EAX = (0x1u);
  /* 12d9ee19 jmp 0x12d9f08e */
  goto L_12d9f08e;
L_12d9ee1e:;
  /* 12d9ee1e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d9ee21 push eax */
  push32((uint32_t)(EAX));
  /* 12d9ee22 mov ecx, dword ptr [0x12dad79c] */
  ECX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9ee28 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9ee29 call 0x12da1310 */
  push32(0x12d9ee2eu); f_12da1310();
  /* 12d9ee2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ee31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9ee33 jne 0x12d9ee60 */
  if (!C.zf) goto L_12d9ee60;
  /* 12d9ee35 mov edx, dword ptr [0x12dad7a4] */
  EDX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9ee3b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9ee41 mov dword ptr [0x12dad7a4], edx */
  w32((uint32_t)(0x12dad7a4), (EDX));
  /* 12d9ee47 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9ee4a mov dword ptr [0x12dad7a8], eax */
  w32((uint32_t)(0x12dad7a8), (EAX));
  /* 12d9ee4f mov ecx, dword ptr [0x12dad7a8] */
  ECX = (r32((uint32_t)(0x12dad7a8)));
  /* 12d9ee55 mov dword ptr [0x12dad78c], ecx */
  w32((uint32_t)(0x12dad78c), (ECX));
  /* 12d9ee5b jmp 0x12d9eeff */
  goto L_12d9eeff;
L_12d9ee60:;
  /* 12d9ee60 mov edx, dword ptr [0x12dad7a4] */
  EDX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9ee66 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9ee69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9ee6b jne 0x12d9eeff */
  if (!C.zf) goto L_12d9eeff;
  /* 12d9ee71 cmp dword ptr [0x12dad794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ee78 je 0x12d9eecd */
  if (C.zf) goto L_12d9eecd;
  /* 12d9ee7a mov eax, dword ptr [0x12dad794] */
  EAX = (r32((uint32_t)(0x12dad794)));
  /* 12d9ee7f push eax */
  push32((uint32_t)(EAX));
  /* 12d9ee80 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d9ee83 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9ee84 mov edx, dword ptr [0x12dad79c] */
  EDX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9ee8a push edx */
  push32((uint32_t)(EDX));
  /* 12d9ee8b call 0x12da13e0 */
  push32(0x12d9ee90u); f_12da13e0();
  /* 12d9ee90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ee93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9ee95 jne 0x12d9eecd */
  if (!C.zf) goto L_12d9eecd;
  /* 12d9ee97 mov eax, dword ptr [0x12dad7a4] */
  EAX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9ee9c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12d9ee9e mov dword ptr [0x12dad7a4], eax */
  w32((uint32_t)(0x12dad7a4), (EAX));
  /* 12d9eea3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9eea6 mov dword ptr [0x12dad7a8], ecx */
  w32((uint32_t)(0x12dad7a8), (ECX));
  /* 12d9eeac mov edx, dword ptr [0x12dad79c] */
  EDX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9eeb2 push edx */
  push32((uint32_t)(EDX));
  /* 12d9eeb3 call 0x12d95a70 */
  push32(0x12d9eeb8u); f_12d95a70();
  /* 12d9eeb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9eebb cmp eax, dword ptr [0x12dad794] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12dad794))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9eec1 jne 0x12d9eecb */
  if (!C.zf) goto L_12d9eecb;
  /* 12d9eec3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9eec6 mov dword ptr [0x12dad78c], eax */
  w32((uint32_t)(0x12dad78c), (EAX));
L_12d9eecb:;
  /* 12d9eecb jmp 0x12d9eeff */
  goto L_12d9eeff;
L_12d9eecd:;
  /* 12d9eecd mov ecx, dword ptr [0x12dad7a4] */
  ECX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9eed3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9eed6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9eed8 jne 0x12d9eeff */
  if (!C.zf) goto L_12d9eeff;
  /* 12d9eeda mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9eedd push edx */
  push32((uint32_t)(EDX));
  /* 12d9eede call 0x12d9f410 */
  push32(0x12d9eee3u); f_12d9f410();
  /* 12d9eee3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9eee6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9eee8 je 0x12d9eeff */
  if (C.zf) goto L_12d9eeff;
  /* 12d9eeea mov eax, dword ptr [0x12dad7a4] */
  EAX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9eeef or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12d9eef1 mov dword ptr [0x12dad7a4], eax */
  w32((uint32_t)(0x12dad7a4), (EAX));
  /* 12d9eef6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9eef9 mov dword ptr [0x12dad7a8], ecx */
  w32((uint32_t)(0x12dad7a8), (ECX));
L_12d9eeff:;
  /* 12d9eeff mov edx, dword ptr [0x12dad7a4] */
  EDX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9ef05 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12d9ef0b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ef11 je 0x12d9f081 */
  if (C.zf) goto L_12d9f081;
  /* 12d9ef17 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d9ef19 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d9ef1c push eax */
  push32((uint32_t)(EAX));
  /* 12d9ef1d mov ecx, dword ptr [0x12dad798] */
  ECX = (r32((uint32_t)(0x12dad798)));
  /* 12d9ef23 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9ef25 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9ef27 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9ef2d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ef33 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9ef34 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9ef37 push edx */
  push32((uint32_t)(EDX));
  /* 12d9ef38 call dword ptr [0x12dad7ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dad7ac))), 0x12d9ef3eu);
  /* 12d9ef3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9ef40 jne 0x12d9ef56 */
  if (!C.zf) goto L_12d9ef56;
  /* 12d9ef42 mov dword ptr [0x12dad7a4], 0 */
  w32((uint32_t)(0x12dad7a4), (0x0u));
  /* 12d9ef4c mov eax, 1 */
  EAX = (0x1u);
  /* 12d9ef51 jmp 0x12d9f08e */
  goto L_12d9f08e;
L_12d9ef56:;
  /* 12d9ef56 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d9ef59 push eax */
  push32((uint32_t)(EAX));
  /* 12d9ef5a mov ecx, dword ptr [0x12dad79c] */
  ECX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9ef60 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9ef61 call 0x12da1310 */
  push32(0x12d9ef66u); f_12da1310();
  /* 12d9ef66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9ef69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9ef6b jne 0x12d9f020 */
  if (!C.zf) goto L_12d9f020;
  /* 12d9ef71 mov edx, dword ptr [0x12dad7a4] */
  EDX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9ef77 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d9ef7a mov dword ptr [0x12dad7a4], edx */
  w32((uint32_t)(0x12dad7a4), (EDX));
  /* 12d9ef80 cmp dword ptr [0x12dad798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ef87 je 0x12d9efaa */
  if (C.zf) goto L_12d9efaa;
  /* 12d9ef89 mov eax, dword ptr [0x12dad7a4] */
  EAX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9ef8e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12d9ef91 mov dword ptr [0x12dad7a4], eax */
  w32((uint32_t)(0x12dad7a4), (EAX));
  /* 12d9ef96 cmp dword ptr [0x12dad78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9ef9d jne 0x12d9efa8 */
  if (!C.zf) goto L_12d9efa8;
  /* 12d9ef9f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9efa2 mov dword ptr [0x12dad78c], ecx */
  w32((uint32_t)(0x12dad78c), (ECX));
L_12d9efa8:;
  /* 12d9efa8 jmp 0x12d9f01e */
  goto L_12d9f01e;
L_12d9efaa:;
  /* 12d9efaa cmp dword ptr [0x12dad794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9efb1 je 0x12d9efff */
  if (C.zf) goto L_12d9efff;
  /* 12d9efb3 mov edx, dword ptr [0x12dad79c] */
  EDX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9efb9 push edx */
  push32((uint32_t)(EDX));
  /* 12d9efba call 0x12d95a70 */
  push32(0x12d9efbfu); f_12d95a70();
  /* 12d9efbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9efc2 cmp eax, dword ptr [0x12dad794] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12dad794))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9efc8 jne 0x12d9efff */
  if (!C.zf) goto L_12d9efff;
  /* 12d9efca push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9efcc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9efcf push eax */
  push32((uint32_t)(EAX));
  /* 12d9efd0 call 0x12d9f460 */
  push32(0x12d9efd5u); f_12d9f460();
  /* 12d9efd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9efd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9efda je 0x12d9effd */
  if (C.zf) goto L_12d9effd;
  /* 12d9efdc mov ecx, dword ptr [0x12dad7a4] */
  ECX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9efe2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12d9efe5 mov dword ptr [0x12dad7a4], ecx */
  w32((uint32_t)(0x12dad7a4), (ECX));
  /* 12d9efeb cmp dword ptr [0x12dad78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9eff2 jne 0x12d9effd */
  if (!C.zf) goto L_12d9effd;
  /* 12d9eff4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9eff7 mov dword ptr [0x12dad78c], edx */
  w32((uint32_t)(0x12dad78c), (EDX));
L_12d9effd:;
  /* 12d9effd jmp 0x12d9f01e */
  goto L_12d9f01e;
L_12d9efff:;
  /* 12d9efff mov eax, dword ptr [0x12dad7a4] */
  EAX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9f004 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12d9f007 mov dword ptr [0x12dad7a4], eax */
  w32((uint32_t)(0x12dad7a4), (EAX));
  /* 12d9f00c cmp dword ptr [0x12dad78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f013 jne 0x12d9f01e */
  if (!C.zf) goto L_12d9f01e;
  /* 12d9f015 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9f018 mov dword ptr [0x12dad78c], ecx */
  w32((uint32_t)(0x12dad78c), (ECX));
L_12d9f01e:;
  /* 12d9f01e jmp 0x12d9f081 */
  goto L_12d9f081;
L_12d9f020:;
  /* 12d9f020 cmp dword ptr [0x12dad798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f027 jne 0x12d9f081 */
  if (!C.zf) goto L_12d9f081;
  /* 12d9f029 cmp dword ptr [0x12dad794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f030 je 0x12d9f081 */
  if (C.zf) goto L_12d9f081;
  /* 12d9f032 mov edx, dword ptr [0x12dad794] */
  EDX = (r32((uint32_t)(0x12dad794)));
  /* 12d9f038 push edx */
  push32((uint32_t)(EDX));
  /* 12d9f039 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d9f03c push eax */
  push32((uint32_t)(EAX));
  /* 12d9f03d mov ecx, dword ptr [0x12dad79c] */
  ECX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9f043 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f044 call 0x12da13e0 */
  push32(0x12d9f049u); f_12da13e0();
  /* 12d9f049 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f04c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f04e jne 0x12d9f081 */
  if (!C.zf) goto L_12d9f081;
  /* 12d9f050 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9f052 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9f055 push edx */
  push32((uint32_t)(EDX));
  /* 12d9f056 call 0x12d9f460 */
  push32(0x12d9f05bu); f_12d9f460();
  /* 12d9f05b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f05e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9f060 je 0x12d9f081 */
  if (C.zf) goto L_12d9f081;
  /* 12d9f062 mov eax, dword ptr [0x12dad7a4] */
  EAX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9f067 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12d9f06a mov dword ptr [0x12dad7a4], eax */
  w32((uint32_t)(0x12dad7a4), (EAX));
  /* 12d9f06f cmp dword ptr [0x12dad78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f076 jne 0x12d9f081 */
  if (!C.zf) goto L_12d9f081;
  /* 12d9f078 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d9f07b mov dword ptr [0x12dad78c], ecx */
  w32((uint32_t)(0x12dad78c), (ECX));
L_12d9f081:;
  /* 12d9f081 mov eax, dword ptr [0x12dad7a4] */
  EAX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9f086 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9f089 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9f08b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9f08d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12d9f08e:;
  /* 12d9f08e mov esp, ebp */
  ESP = (EBP);
  /* 12d9f090 pop ebp */
  EBP = (pop32());
  /* 12d9f091 ret 4 */
  ESPCHK(0x12d9ed70u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f0a0 @ 0x12d9f0a0 (116 bytes, 33 insns) */
void f_12d9f0a0(void) {
  FTRACE(0x12d9f0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9f0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d9f0a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d9f0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9f0a4 mov eax, dword ptr [0x12dad79c] */
  EAX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9f0a9 push eax */
  push32((uint32_t)(EAX));
  /* 12d9f0aa call 0x12d95a70 */
  push32(0x12d9f0afu); f_12d95a70();
  /* 12d9f0af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f0b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9f0b4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f0b7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d9f0ba mov dword ptr [0x12dad798], ecx */
  w32((uint32_t)(0x12dad798), (ECX));
  /* 12d9f0c0 cmp dword ptr [0x12dad798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9f0c7 je 0x12d9f0d2 */
  if (C.zf) goto L_12d9f0d2;
  /* 12d9f0c9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12d9f0d0 jmp 0x12d9f0e4 */
  goto L_12d9f0e4;
L_12d9f0d2:;
  /* 12d9f0d2 mov edx, dword ptr [0x12dad79c] */
  EDX = (r32((uint32_t)(0x12dad79c)));
  /* 12d9f0d8 push edx */
  push32((uint32_t)(EDX));
  /* 12d9f0d9 call 0x12d9f750 */
  push32(0x12d9f0deu); f_12d9f750();
  /* 12d9f0de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9f0e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d9f0e4:;
  /* 12d9f0e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9f0e7 mov dword ptr [0x12dad794], eax */
  w32((uint32_t)(0x12dad794), (EAX));
  /* 12d9f0ec push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9f0ee push 0x12d9f120 */
  push32((uint32_t)(0x12d9f120u));
  /* 12d9f0f3 call dword ptr [0x12db0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0268))), 0x12d9f0f9u);
  /* 12d9f0f9 mov ecx, dword ptr [0x12dad7a4] */
  ECX = (r32((uint32_t)(0x12dad7a4)));
  /* 12d9f0ff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9f102 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9f104 jne 0x12d9f110 */
  if (!C.zf) goto L_12d9f110;
  /* 12d9f106 mov dword ptr [0x12dad7a4], 0 */
  w32((uint32_t)(0x12dad7a4), (0x0u));
L_12d9f110:;
  /* 12d9f110 mov esp, ebp */
  ESP = (EBP);
  /* 12d9f112 pop ebp */
  EBP = (pop32());
  /* 12d9f113 ret  */
  ESPCHK(0x12d9f0a0u, _esp0);
  ESP += 4; return;
}

