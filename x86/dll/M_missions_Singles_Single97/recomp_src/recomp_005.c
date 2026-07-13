#include "recomp.h"

/* FUN_1001e580 @ 0x120be580 (1085 bytes, 299 insns) */
void f_120be580(void) {
  FTRACE(0x120be580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120be580 push ebp */
  push32((uint32_t)(EBP));
  /* 120be581 mov ebp, esp */
  EBP = (ESP);
  /* 120be583 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be586 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 120be58c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120be593 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 120be59a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120be5a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120be5a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be5ab mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 120be5af mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 120be5b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120be5b6 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 120be5ba mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 120be5be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120be5c1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120be5c7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 120be5ca and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120be5d0 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120be5d2 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 120be5d8 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 120be5dc mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 120be5e0 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 120be5e4 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 120be5e8 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 120be5ec and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 120be5f1 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 120be5f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120be5f8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120be5fe mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120be601 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120be606 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be608 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 120be60c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120be60f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120be615 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be61b jge 0x120be63d */
  if ((C.sf==C.of)) goto L_120be63d;
  /* 120be61d mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 120be620 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120be626 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be62c jge 0x120be63d */
  if ((C.sf==C.of)) goto L_120be63d;
  /* 120be62e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120be631 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120be636 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be63b jle 0x120be674 */
  if ((C.zf||C.sf!=C.of)) goto L_120be674;
L_120be63d:;
  /* 120be63d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120be640 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120be646 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120be648 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be64a and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 120be650 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be656 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be659 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 120be65c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be65f mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 120be666 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be669 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 120be66f jmp 0x120be9b9 */
  goto L_120be9b9;
L_120be674:;
  /* 120be674 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120be677 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120be67d cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be683 jg 0x120be6a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_120be6a7;
  /* 120be685 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be688 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 120be68f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be692 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 120be699 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be69c mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 120be6a2 jmp 0x120be9b9 */
  goto L_120be9b9;
L_120be6a7:;
  /* 120be6a7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120be6aa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120be6af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120be6b1 jne 0x120be6ed */
  if (!C.zf) goto L_120be6ed;
  /* 120be6b3 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 120be6b7 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 120be6bb mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 120be6bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be6c2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120be6c5 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120be6ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120be6cc jne 0x120be6ed */
  if (!C.zf) goto L_120be6ed;
  /* 120be6ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be6d1 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be6d5 jne 0x120be6ed */
  if (!C.zf) goto L_120be6ed;
  /* 120be6d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be6da cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be6dd jne 0x120be6ed */
  if (!C.zf) goto L_120be6ed;
  /* 120be6df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be6e2 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 120be6e8 jmp 0x120be9b9 */
  goto L_120be9b9;
L_120be6ed:;
  /* 120be6ed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120be6f0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120be6f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120be6f8 jne 0x120be749 */
  if (!C.zf) goto L_120be749;
  /* 120be6fa mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 120be6fe add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 120be702 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 120be706 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120be709 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120be70c and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120be712 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120be714 jne 0x120be749 */
  if (!C.zf) goto L_120be749;
  /* 120be716 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120be719 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be71d jne 0x120be749 */
  if (!C.zf) goto L_120be749;
  /* 120be71f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120be722 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be725 jne 0x120be749 */
  if (!C.zf) goto L_120be749;
  /* 120be727 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be72a mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 120be731 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be734 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 120be73b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be73e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120be744 jmp 0x120be9b9 */
  goto L_120be9b9;
L_120be749:;
  /* 120be749 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 120be750 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 120be757 jmp 0x120be762 */
  goto L_120be762;
L_120be759:;
  /* 120be759 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120be75c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be75f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_120be762:;
  /* 120be762 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be766 jge 0x120be821 */
  if ((C.sf==C.of)) goto L_120be821;
  /* 120be76c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120be76f shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 120be771 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 120be774 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 120be77b mov eax, 5 */
  EAX = (0x5u);
  /* 120be780 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be783 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 120be786 jmp 0x120be791 */
  goto L_120be791;
L_120be788:;
  /* 120be788 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 120be78b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be78e mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_120be791:;
  /* 120be791 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be795 jle 0x120be813 */
  if ((C.zf||C.sf!=C.of)) goto L_120be813;
  /* 120be797 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be79a add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be79d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 120be7a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120be7a3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be7a6 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 120be7a9 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120be7ac lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 120be7b0 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 120be7b3 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120be7b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120be7b8 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 120be7bb mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120be7be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120be7c0 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 120be7c3 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120be7c6 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 120be7c9 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 120be7cc push ecx */
  push32((uint32_t)(ECX));
  /* 120be7cd mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 120be7d0 push edx */
  push32((uint32_t)(EDX));
  /* 120be7d1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 120be7d4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120be7d6 push ecx */
  push32((uint32_t)(ECX));
  /* 120be7d7 call 0x120ba000 */
  push32(0x120be7dcu); f_120ba000();
  /* 120be7dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120be7df mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 120be7e2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be7e6 je 0x120be7fc */
  if (C.zf) goto L_120be7fc;
  /* 120be7e8 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120be7eb mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 120be7f0 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 120be7f4 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120be7f7 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_120be7fc:;
  /* 120be7fc mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120be7ff add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be802 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 120be805 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120be808 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be80b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120be80e jmp 0x120be788 */
  goto L_120be788;
L_120be813:;
  /* 120be813 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120be816 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be819 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 120be81c jmp 0x120be759 */
  goto L_120be759;
L_120be821:;
  /* 120be821 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 120be825 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 120be82a mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_120be82e:;
  /* 120be82e movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 120be832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120be834 jle 0x120be85d */
  if ((C.zf||C.sf!=C.of)) goto L_120be85d;
  /* 120be836 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120be839 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 120be83f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120be841 jne 0x120be85d */
  if (!C.zf) goto L_120be85d;
  /* 120be843 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 120be846 push edx */
  push32((uint32_t)(EDX));
  /* 120be847 call 0x120ba0f0 */
  push32(0x120be84cu); f_120ba0f0();
  /* 120be84c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120be84f mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 120be853 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 120be857 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 120be85b jmp 0x120be82e */
  goto L_120be82e;
L_120be85d:;
  /* 120be85d movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 120be861 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120be863 jg 0x120be8bd */
  if ((!C.zf&&C.sf==C.of)) goto L_120be8bd;
  /* 120be865 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 120be869 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 120be86d mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_120be871:;
  /* 120be871 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 120be875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120be877 jge 0x120be8ac */
  if ((C.sf==C.of)) goto L_120be8ac;
  /* 120be879 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120be87c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120be882 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120be885 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120be887 je 0x120be892 */
  if (C.zf) goto L_120be892;
  /* 120be889 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120be88c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be88f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120be892:;
  /* 120be892 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 120be895 push eax */
  push32((uint32_t)(EAX));
  /* 120be896 call 0x120ba150 */
  push32(0x120be89bu); f_120ba150();
  /* 120be89b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120be89e mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 120be8a2 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 120be8a6 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 120be8aa jmp 0x120be871 */
  goto L_120be871;
L_120be8ac:;
  /* 120be8ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be8b0 je 0x120be8bd */
  if (C.zf) goto L_120be8bd;
  /* 120be8b2 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 120be8b6 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 120be8b9 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_120be8bd:;
  /* 120be8bd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120be8c0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120be8c5 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be8ca jg 0x120be8dd */
  if ((!C.zf&&C.sf==C.of)) goto L_120be8dd;
  /* 120be8cc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120be8cf and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120be8d5 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be8db jne 0x120be93e */
  if (!C.zf) goto L_120be93e;
L_120be8dd:;
  /* 120be8dd cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be8e1 jne 0x120be935 */
  if (!C.zf) goto L_120be935;
  /* 120be8e3 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 120be8ea cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be8ee jne 0x120be92a */
  if (!C.zf) goto L_120be92a;
  /* 120be8f0 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 120be8f7 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 120be8fa and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120be900 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be906 jne 0x120be91c */
  if (!C.zf) goto L_120be91c;
  /* 120be908 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 120be90e mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 120be912 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 120be916 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 120be91a jmp 0x120be928 */
  goto L_120be928;
L_120be91c:;
  /* 120be91c mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 120be920 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 120be924 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_120be928:;
  /* 120be928 jmp 0x120be933 */
  goto L_120be933;
L_120be92a:;
  /* 120be92a mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 120be92d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be930 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_120be933:;
  /* 120be933 jmp 0x120be93e */
  goto L_120be93e;
L_120be935:;
  /* 120be935 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 120be938 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be93b mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_120be93e:;
  /* 120be93e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120be941 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120be947 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be94d jl 0x120be983 */
  if ((C.sf!=C.of)) goto L_120be983;
  /* 120be94f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120be952 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120be958 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120be95a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be95c and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 120be962 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120be968 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be96b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 120be96e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be971 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 120be978 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be97b mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 120be981 jmp 0x120be9b9 */
  goto L_120be9b9;
L_120be983:;
  /* 120be983 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be986 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 120be98a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 120be98d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be990 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120be993 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 120be996 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be999 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120be99c mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 120be99f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120be9a2 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120be9a7 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120be9aa and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120be9b0 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 120be9b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be9b5 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_120be9b9:;
  /* 120be9b9 mov esp, ebp */
  ESP = (EBP);
  /* 120be9bb pop ebp */
  EBP = (pop32());
  /* 120be9bc ret  */
  ESPCHK(0x120be580u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e9c0 @ 0x120be9c0 (195 bytes, 67 insns) */
void f_120be9c0(void) {
  FTRACE(0x120be9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120be9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120be9c1 mov ebp, esp */
  EBP = (ESP);
  /* 120be9c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be9c6 mov eax, 0x120e03f0 */
  EAX = (0x120e03f0u);
  /* 120be9cb sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be9ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120be9d1 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be9d5 jne 0x120be9dc */
  if (!C.zf) goto L_120be9dc;
  /* 120be9d7 jmp 0x120bea7f */
  goto L_120bea7f;
L_120be9dc:;
  /* 120be9dc cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be9e0 jge 0x120be9f5 */
  if ((C.sf==C.of)) goto L_120be9f5;
  /* 120be9e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120be9e5 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120be9e7 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 120be9ea mov edx, 0x120e0550 */
  EDX = (0x120e0550u);
  /* 120be9ef sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120be9f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120be9f5:;
  /* 120be9f5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120be9f9 jne 0x120bea03 */
  if (!C.zf) goto L_120bea03;
  /* 120be9fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120be9fe mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_120bea03:;
  /* 120bea03 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bea07 je 0x120bea7f */
  if (C.zf) goto L_120bea7f;
  /* 120bea09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bea0c add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bea0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120bea12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bea15 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 120bea18 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120bea1b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bea1e sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 120bea21 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 120bea24 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bea28 jne 0x120bea2c */
  if (!C.zf) goto L_120bea2c;
  /* 120bea2a jmp 0x120bea03 */
  goto L_120bea03;
L_120bea2c:;
  /* 120bea2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bea2f imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bea32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bea35 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bea37 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120bea3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bea3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120bea3f mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 120bea42 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bea48 jl 0x120bea6d */
  if ((C.sf!=C.of)) goto L_120bea6d;
  /* 120bea4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bea4d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120bea4f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120bea52 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 120bea55 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120bea58 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 120bea5b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120bea5e mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 120bea61 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bea64 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 120bea67 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 120bea6a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_120bea6d:;
  /* 120bea6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bea70 push edx */
  push32((uint32_t)(EDX));
  /* 120bea71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bea74 push eax */
  push32((uint32_t)(EAX));
  /* 120bea75 call 0x120be580 */
  push32(0x120bea7au); f_120be580();
  /* 120bea7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bea7d jmp 0x120bea03 */
  goto L_120bea03;
L_120bea7f:;
  /* 120bea7f mov esp, ebp */
  ESP = (EBP);
  /* 120bea81 pop ebp */
  EBP = (pop32());
  /* 120bea82 ret  */
  ESPCHK(0x120be9c0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x120bea90 (52 bytes, 19 insns) */
void f_120bea90(void) {
  FTRACE(0x120bea90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bea90 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120bea94 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 120bea98 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120bea9a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 120bea9e jne 0x120beaa9 */
  if (!C.zf) goto L_120beaa9;
  /* 120beaa0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120beaa4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 120beaa6 ret 0x10 */
  ESPCHK(0x120bea90u, _esp0);
  ESP += 20; return;
L_120beaa9:;
  /* 120beaa9 push ebx */
  push32((uint32_t)(EBX));
  /* 120beaaa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 120beaac mov ebx, eax */
  EBX = (EAX);
  /* 120beaae mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120beab2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 120beab6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 120beab8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120beabc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 120beabe add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120beac0 pop ebx */
  EBX = (pop32());
  /* 120beac1 ret 0x10 */
  ESPCHK(0x120bea90u, _esp0);
  ESP += 20; return;
}

/* __mbsnbicoll @ 0x120bead0 (79 bytes, 32 insns) */
void f_120bead0(void) {
  FTRACE(0x120bead0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bead0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bead1 mov ebp, esp */
  EBP = (ESP);
  /* 120bead3 push ecx */
  push32((uint32_t)(ECX));
  /* 120bead4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bead8 jne 0x120beade */
  if (!C.zf) goto L_120beade;
  /* 120beada xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120beadc jmp 0x120beb1b */
  goto L_120beb1b;
L_120beade:;
  /* 120beade mov eax, dword ptr [0x120e27f8] */
  EAX = (r32((uint32_t)(0x120e27f8)));
  /* 120beae3 push eax */
  push32((uint32_t)(EAX));
  /* 120beae4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120beae7 push ecx */
  push32((uint32_t)(ECX));
  /* 120beae8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120beaeb push edx */
  push32((uint32_t)(EDX));
  /* 120beaec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120beaef push eax */
  push32((uint32_t)(EAX));
  /* 120beaf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120beaf3 push ecx */
  push32((uint32_t)(ECX));
  /* 120beaf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 120beaf6 mov edx, dword ptr [0x120e2a84] */
  EDX = (r32((uint32_t)(0x120e2a84)));
  /* 120beafc push edx */
  push32((uint32_t)(EDX));
  /* 120beafd call 0x120c1090 */
  push32(0x120beb02u); f_120c1090();
  /* 120beb02 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120beb05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120beb08 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120beb0c jne 0x120beb15 */
  if (!C.zf) goto L_120beb15;
  /* 120beb0e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 120beb13 jmp 0x120beb1b */
  goto L_120beb1b;
L_120beb15:;
  /* 120beb15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120beb18 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_120beb1b:;
  /* 120beb1b mov esp, ebp */
  ESP = (EBP);
  /* 120beb1d pop ebp */
  EBP = (pop32());
  /* 120beb1e ret  */
  ESPCHK(0x120bead0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001eb20 @ 0x120beb20 (174 bytes, 66 insns) */
void f_120beb20(void) {
  FTRACE(0x120beb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120beb20 push ebp */
  push32((uint32_t)(EBP));
  /* 120beb21 mov ebp, esp */
  EBP = (ESP);
  /* 120beb23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120beb26 mov eax, dword ptr [0x120e11ac] */
  EAX = (r32((uint32_t)(0x120e11ac)));
  /* 120beb2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120beb2e:;
  /* 120beb2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120beb31 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120beb34 je 0x120bebc8 */
  if (C.zf) goto L_120bebc8;
  /* 120beb3a push 0 */
  push32((uint32_t)(0x0u));
  /* 120beb3c push 0 */
  push32((uint32_t)(0x0u));
  /* 120beb3e push 0 */
  push32((uint32_t)(0x0u));
  /* 120beb40 push 0 */
  push32((uint32_t)(0x0u));
  /* 120beb42 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120beb44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120beb47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120beb49 push eax */
  push32((uint32_t)(EAX));
  /* 120beb4a push 0 */
  push32((uint32_t)(0x0u));
  /* 120beb4c push 1 */
  push32((uint32_t)(0x1u));
  /* 120beb4e call dword ptr [0x120e33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c4))), 0x120beb54u);
  /* 120beb54 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120beb57 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120beb5b jne 0x120beb62 */
  if (!C.zf) goto L_120beb62;
  /* 120beb5d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120beb60 jmp 0x120bebca */
  goto L_120bebca;
L_120beb62:;
  /* 120beb62 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 120beb64 push 0x120dcb0c */
  push32((uint32_t)(0x120dcb0cu));
  /* 120beb69 push 2 */
  push32((uint32_t)(0x2u));
  /* 120beb6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120beb6e push ecx */
  push32((uint32_t)(ECX));
  /* 120beb6f call 0x120acc80 */
  push32(0x120beb74u); f_120acc80();
  /* 120beb74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120beb77 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120beb7a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120beb7e jne 0x120beb85 */
  if (!C.zf) goto L_120beb85;
  /* 120beb80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120beb83 jmp 0x120bebca */
  goto L_120bebca;
L_120beb85:;
  /* 120beb85 push 0 */
  push32((uint32_t)(0x0u));
  /* 120beb87 push 0 */
  push32((uint32_t)(0x0u));
  /* 120beb89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120beb8c push edx */
  push32((uint32_t)(EDX));
  /* 120beb8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120beb90 push eax */
  push32((uint32_t)(EAX));
  /* 120beb91 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120beb93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120beb96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120beb98 push edx */
  push32((uint32_t)(EDX));
  /* 120beb99 push 0 */
  push32((uint32_t)(0x0u));
  /* 120beb9b push 1 */
  push32((uint32_t)(0x1u));
  /* 120beb9d call dword ptr [0x120e33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c4))), 0x120beba3u);
  /* 120beba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120beba5 jne 0x120bebac */
  if (!C.zf) goto L_120bebac;
  /* 120beba7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bebaa jmp 0x120bebca */
  goto L_120bebca;
L_120bebac:;
  /* 120bebac push 0 */
  push32((uint32_t)(0x0u));
  /* 120bebae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bebb1 push eax */
  push32((uint32_t)(EAX));
  /* 120bebb2 call 0x120c14e0 */
  push32(0x120bebb7u); f_120c14e0();
  /* 120bebb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bebba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bebbd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bebc0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120bebc3 jmp 0x120beb2e */
  goto L_120beb2e;
L_120bebc8:;
  /* 120bebc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120bebca:;
  /* 120bebca mov esp, ebp */
  ESP = (EBP);
  /* 120bebcc pop ebp */
  EBP = (pop32());
  /* 120bebcd ret  */
  ESPCHK(0x120beb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ebd0 @ 0x120bebd0 (482 bytes, 138 insns) */
void f_120bebd0(void) {
  FTRACE(0x120bebd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bebd0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bebd1 mov ebp, esp */
  EBP = (ESP);
  /* 120bebd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bebd6 push esi */
  push32((uint32_t)(ESI));
  /* 120bebd7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 120bebde push 0x12 */
  push32((uint32_t)(0x12u));
  /* 120bebe0 call 0x120acb80 */
  push32(0x120bebe5u); f_120acb80();
  /* 120bebe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bebe8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120bebef jmp 0x120bebfa */
  goto L_120bebfa;
L_120bebf1:;
  /* 120bebf1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bebf4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bebf7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_120bebfa:;
  /* 120bebfa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bebfe jge 0x120beda0 */
  if ((C.sf==C.of)) goto L_120beda0;
  /* 120bec04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bec07 cmp dword ptr [ecx*4 + 0x120e2ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x120e2ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bec0f je 0x120bed06 */
  if (C.zf) goto L_120bed06;
  /* 120bec15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bec18 mov eax, dword ptr [edx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120e2ac0)));
  /* 120bec1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bec22 jmp 0x120bec2d */
  goto L_120bec2d;
L_120bec24:;
  /* 120bec24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bec27 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bec2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120bec2d:;
  /* 120bec2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bec30 mov eax, dword ptr [edx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120e2ac0)));
  /* 120bec37 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bec3c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bec3f jae 0x120becf6 */
  if (!C.cf) goto L_120becf6;
  /* 120bec45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bec48 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 120bec4c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120bec4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120bec51 jne 0x120becf1 */
  if (!C.zf) goto L_120becf1;
  /* 120bec57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bec5a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bec5e jne 0x120bec99 */
  if (!C.zf) goto L_120bec99;
  /* 120bec60 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120bec62 call 0x120acb80 */
  push32(0x120bec67u); f_120acb80();
  /* 120bec67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bec6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bec6d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bec71 jne 0x120bec8f */
  if (!C.zf) goto L_120bec8f;
  /* 120bec73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bec76 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bec79 push edx */
  push32((uint32_t)(EDX));
  /* 120bec7a call dword ptr [0x120e3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3454))), 0x120bec80u);
  /* 120bec80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bec83 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120bec86 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bec89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bec8c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_120bec8f:;
  /* 120bec8f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120bec91 call 0x120acc20 */
  push32(0x120bec96u); f_120acc20();
  /* 120bec96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bec99:;
  /* 120bec99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bec9c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bec9f push eax */
  push32((uint32_t)(EAX));
  /* 120beca0 call dword ptr [0x120e345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e345c))), 0x120beca6u);
  /* 120beca6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120beca9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 120becad and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120becb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120becb2 je 0x120becc6 */
  if (C.zf) goto L_120becc6;
  /* 120becb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120becb7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120becba push eax */
  push32((uint32_t)(EAX));
  /* 120becbb call dword ptr [0x120e3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3438))), 0x120becc1u);
  /* 120becc1 jmp 0x120bec24 */
  goto L_120bec24;
L_120becc6:;
  /* 120becc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120becc9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 120beccf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120becd2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120becd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120becd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120becdb sub eax, dword ptr [edx*4 + 0x120e2ac0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x120e2ac0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bece2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120bece3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 120bece8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120becea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120becec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120becef jmp 0x120becf6 */
  goto L_120becf6;
L_120becf1:;
  /* 120becf1 jmp 0x120bec24 */
  goto L_120bec24;
L_120becf6:;
  /* 120becf6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120becfa je 0x120bed01 */
  if (C.zf) goto L_120bed01;
  /* 120becfc jmp 0x120beda0 */
  goto L_120beda0;
L_120bed01:;
  /* 120bed01 jmp 0x120bed9b */
  goto L_120bed9b;
L_120bed06:;
  /* 120bed06 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 120bed08 push 0x120dcb18 */
  push32((uint32_t)(0x120dcb18u));
  /* 120bed0d push 2 */
  push32((uint32_t)(0x2u));
  /* 120bed0f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 120bed14 call 0x120acc80 */
  push32(0x120bed19u); f_120acc80();
  /* 120bed19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bed1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bed1f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bed23 je 0x120bed99 */
  if (C.zf) goto L_120bed99;
  /* 120bed25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bed28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bed2b mov dword ptr [eax*4 + 0x120e2ac0], ecx */
  w32((uint32_t)(EAX*4 + 0x120e2ac0), (ECX));
  /* 120bed32 mov edx, dword ptr [0x120e2bfc] */
  EDX = (r32((uint32_t)(0x120e2bfc)));
  /* 120bed38 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bed3b mov dword ptr [0x120e2bfc], edx */
  w32((uint32_t)(0x120e2bfc), (EDX));
  /* 120bed41 jmp 0x120bed4c */
  goto L_120bed4c;
L_120bed43:;
  /* 120bed43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bed46 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bed49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120bed4c:;
  /* 120bed4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bed4f mov edx, dword ptr [ecx*4 + 0x120e2ac0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120e2ac0)));
  /* 120bed56 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bed5c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bed5f jae 0x120bed84 */
  if (!C.cf) goto L_120bed84;
  /* 120bed61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bed64 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 120bed68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bed6b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 120bed71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bed74 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 120bed78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bed7b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 120bed82 jmp 0x120bed43 */
  goto L_120bed43;
L_120bed84:;
  /* 120bed84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bed87 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120bed8a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bed8d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bed90 push edx */
  push32((uint32_t)(EDX));
  /* 120bed91 call 0x120bf0e0 */
  push32(0x120bed96u); f_120bf0e0();
  /* 120bed96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bed99:;
  /* 120bed99 jmp 0x120beda0 */
  goto L_120beda0;
L_120bed9b:;
  /* 120bed9b jmp 0x120bebf1 */
  goto L_120bebf1;
L_120beda0:;
  /* 120beda0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 120beda2 call 0x120acc20 */
  push32(0x120beda7u); f_120acc20();
  /* 120beda7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bedaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bedad pop esi */
  ESI = (pop32());
  /* 120bedae mov esp, ebp */
  ESP = (EBP);
  /* 120bedb0 pop ebp */
  EBP = (pop32());
  /* 120bedb1 ret  */
  ESPCHK(0x120bebd0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x120bedc0 (183 bytes, 57 insns) */
void f_120bedc0(void) {
  FTRACE(0x120bedc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bedc0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bedc1 mov ebp, esp */
  EBP = (ESP);
  /* 120bedc3 push ecx */
  push32((uint32_t)(ECX));
  /* 120bedc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bedc7 cmp eax, dword ptr [0x120e2bfc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120e2bfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bedcd jae 0x120bee5a */
  if (!C.cf) goto L_120bee5a;
  /* 120bedd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bedd6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120bedd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120beddc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120beddf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bede2 mov eax, dword ptr [ecx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120e2ac0)));
  /* 120bede9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120beded jne 0x120bee5a */
  if (!C.zf) goto L_120bee5a;
  /* 120bedef cmp dword ptr [0x120e1108], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e1108))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bedf6 jne 0x120bee3a */
  if (!C.zf) goto L_120bee3a;
  /* 120bedf8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bedfb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120bedfe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bee02 je 0x120bee12 */
  if (C.zf) goto L_120bee12;
  /* 120bee04 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bee08 je 0x120bee20 */
  if (C.zf) goto L_120bee20;
  /* 120bee0a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bee0e je 0x120bee2e */
  if (C.zf) goto L_120bee2e;
  /* 120bee10 jmp 0x120bee3a */
  goto L_120bee3a;
L_120bee12:;
  /* 120bee12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bee15 push edx */
  push32((uint32_t)(EDX));
  /* 120bee16 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 120bee18 call dword ptr [0x120e3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3348))), 0x120bee1eu);
  /* 120bee1e jmp 0x120bee3a */
  goto L_120bee3a;
L_120bee20:;
  /* 120bee20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bee23 push eax */
  push32((uint32_t)(EAX));
  /* 120bee24 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 120bee26 call dword ptr [0x120e3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3348))), 0x120bee2cu);
  /* 120bee2c jmp 0x120bee3a */
  goto L_120bee3a;
L_120bee2e:;
  /* 120bee2e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bee31 push ecx */
  push32((uint32_t)(ECX));
  /* 120bee32 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 120bee34 call dword ptr [0x120e3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3348))), 0x120bee3au);
L_120bee3a:;
  /* 120bee3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bee3d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 120bee40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bee43 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120bee46 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bee49 mov ecx, dword ptr [edx*4 + 0x120e2ac0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x120e2ac0)));
  /* 120bee50 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bee53 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 120bee56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bee58 jmp 0x120bee73 */
  goto L_120bee73;
L_120bee5a:;
  /* 120bee5a call 0x120b8310 */
  push32(0x120bee5fu); f_120b8310();
  /* 120bee5f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120bee65 call 0x120b8320 */
  push32(0x120bee6au); f_120b8320();
  /* 120bee6a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120bee70 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120bee73:;
  /* 120bee73 mov esp, ebp */
  ESP = (EBP);
  /* 120bee75 pop ebp */
  EBP = (pop32());
  /* 120bee76 ret  */
  ESPCHK(0x120bedc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ee80 @ 0x120bee80 (216 bytes, 63 insns) */
void f_120bee80(void) {
  FTRACE(0x120bee80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bee80 push ebp */
  push32((uint32_t)(EBP));
  /* 120bee81 mov ebp, esp */
  EBP = (ESP);
  /* 120bee83 push ecx */
  push32((uint32_t)(ECX));
  /* 120bee84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bee87 cmp eax, dword ptr [0x120e2bfc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120e2bfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bee8d jae 0x120bef3b */
  if (!C.cf) goto L_120bef3b;
  /* 120bee93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bee96 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120bee99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bee9c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120bee9f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120beea2 mov eax, dword ptr [ecx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120e2ac0)));
  /* 120beea9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 120beeae and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120beeb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120beeb3 je 0x120bef3b */
  if (C.zf) goto L_120bef3b;
  /* 120beeb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120beebc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 120beebf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120beec2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120beec5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120beec8 mov ecx, dword ptr [edx*4 + 0x120e2ac0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x120e2ac0)));
  /* 120beecf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120beed3 je 0x120bef3b */
  if (C.zf) goto L_120bef3b;
  /* 120beed5 cmp dword ptr [0x120e1108], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e1108))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120beedc jne 0x120bef1a */
  if (!C.zf) goto L_120bef1a;
  /* 120beede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120beee1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120beee4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120beee8 je 0x120beef8 */
  if (C.zf) goto L_120beef8;
  /* 120beeea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120beeee je 0x120bef04 */
  if (C.zf) goto L_120bef04;
  /* 120beef0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120beef4 je 0x120bef10 */
  if (C.zf) goto L_120bef10;
  /* 120beef6 jmp 0x120bef1a */
  goto L_120bef1a;
L_120beef8:;
  /* 120beef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120beefa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 120beefc call dword ptr [0x120e3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3348))), 0x120bef02u);
  /* 120bef02 jmp 0x120bef1a */
  goto L_120bef1a;
L_120bef04:;
  /* 120bef04 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bef06 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 120bef08 call dword ptr [0x120e3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3348))), 0x120bef0eu);
  /* 120bef0e jmp 0x120bef1a */
  goto L_120bef1a;
L_120bef10:;
  /* 120bef10 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bef12 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 120bef14 call dword ptr [0x120e3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3348))), 0x120bef1au);
L_120bef1a:;
  /* 120bef1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bef1d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120bef20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bef23 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 120bef26 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bef29 mov edx, dword ptr [eax*4 + 0x120e2ac0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120e2ac0)));
  /* 120bef30 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 120bef37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bef39 jmp 0x120bef54 */
  goto L_120bef54;
L_120bef3b:;
  /* 120bef3b call 0x120b8310 */
  push32(0x120bef40u); f_120b8310();
  /* 120bef40 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120bef46 call 0x120b8320 */
  push32(0x120bef4bu); f_120b8320();
  /* 120bef4b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120bef51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120bef54:;
  /* 120bef54 mov esp, ebp */
  ESP = (EBP);
  /* 120bef56 pop ebp */
  EBP = (pop32());
  /* 120bef57 ret  */
  ESPCHK(0x120bee80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ef60 @ 0x120bef60 (102 bytes, 30 insns) */
void f_120bef60(void) {
  FTRACE(0x120bef60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bef60 push ebp */
  push32((uint32_t)(EBP));
  /* 120bef61 mov ebp, esp */
  EBP = (ESP);
  /* 120bef63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bef66 cmp eax, dword ptr [0x120e2bfc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120e2bfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bef6c jae 0x120befab */
  if (!C.cf) goto L_120befab;
  /* 120bef6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bef71 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120bef74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bef77 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120bef7a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bef7d mov eax, dword ptr [ecx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120e2ac0)));
  /* 120bef84 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 120bef89 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120bef8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bef8e je 0x120befab */
  if (C.zf) goto L_120befab;
  /* 120bef90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bef93 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 120bef96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bef99 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120bef9c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bef9f mov ecx, dword ptr [edx*4 + 0x120e2ac0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x120e2ac0)));
  /* 120befa6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 120befa9 jmp 0x120befc4 */
  goto L_120befc4;
L_120befab:;
  /* 120befab call 0x120b8310 */
  push32(0x120befb0u); f_120b8310();
  /* 120befb0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120befb6 call 0x120b8320 */
  push32(0x120befbbu); f_120b8320();
  /* 120befbb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120befc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120befc4:;
  /* 120befc4 pop ebp */
  EBP = (pop32());
  /* 120befc5 ret  */
  ESPCHK(0x120bef60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001efd0 @ 0x120befd0 (260 bytes, 83 insns) */
void f_120befd0(void) {
  FTRACE(0x120befd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120befd0 push ebp */
  push32((uint32_t)(EBP));
  /* 120befd1 mov ebp, esp */
  EBP = (ESP);
  /* 120befd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120befd6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 120befda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120befdd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 120befe0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120befe2 je 0x120befed */
  if (C.zf) goto L_120befed;
  /* 120befe4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 120befe7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 120befea mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_120befed:;
  /* 120befed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120beff0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 120beff6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120beff8 je 0x120bf002 */
  if (C.zf) goto L_120bf002;
  /* 120beffa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 120beffd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 120befff mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_120bf002:;
  /* 120bf002 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bf005 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 120bf00b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bf00d je 0x120bf018 */
  if (C.zf) goto L_120bf018;
  /* 120bf00f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 120bf012 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 120bf015 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_120bf018:;
  /* 120bf018 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bf01b push eax */
  push32((uint32_t)(EAX));
  /* 120bf01c call dword ptr [0x120e33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33d4))), 0x120bf022u);
  /* 120bf022 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bf025 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf029 jne 0x120bf042 */
  if (!C.zf) goto L_120bf042;
  /* 120bf02b call dword ptr [0x120e33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33e8))), 0x120bf031u);
  /* 120bf031 push eax */
  push32((uint32_t)(EAX));
  /* 120bf032 call 0x120b8270 */
  push32(0x120bf037u); f_120b8270();
  /* 120bf037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf03a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bf03d jmp 0x120bf0d0 */
  goto L_120bf0d0;
L_120bf042:;
  /* 120bf042 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf046 jne 0x120bf053 */
  if (!C.zf) goto L_120bf053;
  /* 120bf048 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 120bf04b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 120bf04e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 120bf051 jmp 0x120bf062 */
  goto L_120bf062;
L_120bf053:;
  /* 120bf053 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf057 jne 0x120bf062 */
  if (!C.zf) goto L_120bf062;
  /* 120bf059 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 120bf05c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 120bf05f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_120bf062:;
  /* 120bf062 call 0x120bebd0 */
  push32(0x120bf067u); f_120bebd0();
  /* 120bf067 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120bf06a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf06e jne 0x120bf08b */
  if (!C.zf) goto L_120bf08b;
  /* 120bf070 call 0x120b8310 */
  push32(0x120bf075u); f_120b8310();
  /* 120bf075 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 120bf07b call 0x120b8320 */
  push32(0x120bf080u); f_120b8320();
  /* 120bf080 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120bf086 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bf089 jmp 0x120bf0d0 */
  goto L_120bf0d0;
L_120bf08b:;
  /* 120bf08b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bf08e push eax */
  push32((uint32_t)(EAX));
  /* 120bf08f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf092 push ecx */
  push32((uint32_t)(ECX));
  /* 120bf093 call 0x120bedc0 */
  push32(0x120bf098u); f_120bedc0();
  /* 120bf098 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf09b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 120bf09e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 120bf0a1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 120bf0a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf0a7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120bf0aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf0ad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 120bf0b0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bf0b3 mov edx, dword ptr [eax*4 + 0x120e2ac0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120e2ac0)));
  /* 120bf0ba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 120bf0bd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 120bf0c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf0c4 push ecx */
  push32((uint32_t)(ECX));
  /* 120bf0c5 call 0x120bf170 */
  push32(0x120bf0cau); f_120bf170();
  /* 120bf0ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf0cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_120bf0d0:;
  /* 120bf0d0 mov esp, ebp */
  ESP = (EBP);
  /* 120bf0d2 pop ebp */
  EBP = (pop32());
  /* 120bf0d3 ret  */
  ESPCHK(0x120befd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f0e0 @ 0x120bf0e0 (134 bytes, 44 insns) */
void f_120bf0e0(void) {
  FTRACE(0x120bf0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bf0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bf0e1 mov ebp, esp */
  EBP = (ESP);
  /* 120bf0e3 push ecx */
  push32((uint32_t)(ECX));
  /* 120bf0e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bf0e7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120bf0ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bf0ed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 120bf0f0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bf0f3 mov edx, dword ptr [eax*4 + 0x120e2ac0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120e2ac0)));
  /* 120bf0fa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf0fc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120bf0ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf102 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf106 jne 0x120bf141 */
  if (!C.zf) goto L_120bf141;
  /* 120bf108 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120bf10a call 0x120acb80 */
  push32(0x120bf10fu); f_120acb80();
  /* 120bf10f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf112 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf115 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf119 jne 0x120bf137 */
  if (!C.zf) goto L_120bf137;
  /* 120bf11b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf11e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf121 push edx */
  push32((uint32_t)(EDX));
  /* 120bf122 call dword ptr [0x120e3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3454))), 0x120bf128u);
  /* 120bf128 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf12b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120bf12e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf131 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf134 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_120bf137:;
  /* 120bf137 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120bf139 call 0x120acc20 */
  push32(0x120bf13eu); f_120acc20();
  /* 120bf13e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bf141:;
  /* 120bf141 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bf144 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120bf147 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bf14a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 120bf14d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bf150 mov edx, dword ptr [eax*4 + 0x120e2ac0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120e2ac0)));
  /* 120bf157 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 120bf15b push eax */
  push32((uint32_t)(EAX));
  /* 120bf15c call dword ptr [0x120e345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e345c))), 0x120bf162u);
  /* 120bf162 mov esp, ebp */
  ESP = (EBP);
  /* 120bf164 pop ebp */
  EBP = (pop32());
  /* 120bf165 ret  */
  ESPCHK(0x120bf0e0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x120bf170 (38 bytes, 13 insns) */
void f_120bf170(void) {
  FTRACE(0x120bf170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bf170 push ebp */
  push32((uint32_t)(EBP));
  /* 120bf171 mov ebp, esp */
  EBP = (ESP);
  /* 120bf173 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bf176 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120bf179 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bf17c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 120bf17f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120bf182 mov edx, dword ptr [eax*4 + 0x120e2ac0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120e2ac0)));
  /* 120bf189 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 120bf18d push eax */
  push32((uint32_t)(EAX));
  /* 120bf18e call dword ptr [0x120e3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3438))), 0x120bf194u);
  /* 120bf194 pop ebp */
  EBP = (pop32());
  /* 120bf195 ret  */
  ESPCHK(0x120bf170u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f1a0 @ 0x120bf1a0 (218 bytes, 63 insns) */
void f_120bf1a0(void) {
  FTRACE(0x120bf1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bf1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bf1a1 mov ebp, esp */
  EBP = (ESP);
  /* 120bf1a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bf1a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120bf1ad push 2 */
  push32((uint32_t)(0x2u));
  /* 120bf1af call 0x120acb80 */
  push32(0x120bf1b4u); f_120acb80();
  /* 120bf1b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf1b7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 120bf1be jmp 0x120bf1c9 */
  goto L_120bf1c9;
L_120bf1c0:;
  /* 120bf1c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf1c3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf1c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120bf1c9:;
  /* 120bf1c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf1cc cmp ecx, dword ptr [0x120e27e0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120e27e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf1d2 jge 0x120bf269 */
  if ((C.sf==C.of)) goto L_120bf269;
  /* 120bf1d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf1db mov eax, dword ptr [0x120e1494] */
  EAX = (r32((uint32_t)(0x120e1494)));
  /* 120bf1e0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf1e4 je 0x120bf264 */
  if (C.zf) goto L_120bf264;
  /* 120bf1e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf1e9 mov edx, dword ptr [0x120e1494] */
  EDX = (r32((uint32_t)(0x120e1494)));
  /* 120bf1ef mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 120bf1f2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120bf1f5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 120bf1fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bf1fd je 0x120bf221 */
  if (C.zf) goto L_120bf221;
  /* 120bf1ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf202 mov eax, dword ptr [0x120e1494] */
  EAX = (r32((uint32_t)(0x120e1494)));
  /* 120bf207 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 120bf20a push ecx */
  push32((uint32_t)(ECX));
  /* 120bf20b call 0x120c1930 */
  push32(0x120bf210u); f_120c1930();
  /* 120bf210 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf213 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf216 je 0x120bf221 */
  if (C.zf) goto L_120bf221;
  /* 120bf218 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf21b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf21e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120bf221:;
  /* 120bf221 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf225 jl 0x120bf264 */
  if ((C.sf!=C.of)) goto L_120bf264;
  /* 120bf227 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf22a mov ecx, dword ptr [0x120e1494] */
  ECX = (r32((uint32_t)(0x120e1494)));
  /* 120bf230 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120bf233 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf236 push edx */
  push32((uint32_t)(EDX));
  /* 120bf237 call dword ptr [0x120e3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3458))), 0x120bf23du);
  /* 120bf23d push 2 */
  push32((uint32_t)(0x2u));
  /* 120bf23f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf242 mov ecx, dword ptr [0x120e1494] */
  ECX = (r32((uint32_t)(0x120e1494)));
  /* 120bf248 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120bf24b push edx */
  push32((uint32_t)(EDX));
  /* 120bf24c call 0x120ad710 */
  push32(0x120bf251u); f_120ad710();
  /* 120bf251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf254 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf257 mov ecx, dword ptr [0x120e1494] */
  ECX = (r32((uint32_t)(0x120e1494)));
  /* 120bf25d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_120bf264:;
  /* 120bf264 jmp 0x120bf1c0 */
  goto L_120bf1c0;
L_120bf269:;
  /* 120bf269 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bf26b call 0x120acc20 */
  push32(0x120bf270u); f_120acc20();
  /* 120bf270 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf273 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf276 mov esp, ebp */
  ESP = (EBP);
  /* 120bf278 pop ebp */
  EBP = (pop32());
  /* 120bf279 ret  */
  ESPCHK(0x120bf1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f280 @ 0x120bf280 (68 bytes, 26 insns) */
void f_120bf280(void) {
  FTRACE(0x120bf280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bf280 push ebp */
  push32((uint32_t)(EBP));
  /* 120bf281 mov ebp, esp */
  EBP = (ESP);
  /* 120bf283 push ecx */
  push32((uint32_t)(ECX));
  /* 120bf284 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf288 jne 0x120bf296 */
  if (!C.zf) goto L_120bf296;
  /* 120bf28a push 0 */
  push32((uint32_t)(0x0u));
  /* 120bf28c call 0x120bf3f0 */
  push32(0x120bf291u); f_120bf3f0();
  /* 120bf291 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf294 jmp 0x120bf2c0 */
  goto L_120bf2c0;
L_120bf296:;
  /* 120bf296 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bf299 push eax */
  push32((uint32_t)(EAX));
  /* 120bf29a call 0x120bbdb0 */
  push32(0x120bf29fu); f_120bbdb0();
  /* 120bf29f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf2a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bf2a5 push ecx */
  push32((uint32_t)(ECX));
  /* 120bf2a6 call 0x120bf2d0 */
  push32(0x120bf2abu); f_120bf2d0();
  /* 120bf2ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf2ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bf2b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bf2b4 push edx */
  push32((uint32_t)(EDX));
  /* 120bf2b5 call 0x120bbe20 */
  push32(0x120bf2bau); f_120bbe20();
  /* 120bf2ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf2bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120bf2c0:;
  /* 120bf2c0 mov esp, ebp */
  ESP = (EBP);
  /* 120bf2c2 pop ebp */
  EBP = (pop32());
  /* 120bf2c3 ret  */
  ESPCHK(0x120bf280u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f2d0 @ 0x120bf2d0 (65 bytes, 26 insns) */
void f_120bf2d0(void) {
  FTRACE(0x120bf2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bf2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bf2d1 mov ebp, esp */
  EBP = (ESP);
  /* 120bf2d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bf2d6 push eax */
  push32((uint32_t)(EAX));
  /* 120bf2d7 call 0x120bf320 */
  push32(0x120bf2dcu); f_120bf320();
  /* 120bf2dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf2df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bf2e1 je 0x120bf2e8 */
  if (C.zf) goto L_120bf2e8;
  /* 120bf2e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120bf2e6 jmp 0x120bf30f */
  goto L_120bf30f;
L_120bf2e8:;
  /* 120bf2e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bf2eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120bf2ee and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 120bf2f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120bf2f6 je 0x120bf30d */
  if (C.zf) goto L_120bf30d;
  /* 120bf2f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bf2fb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120bf2fe push ecx */
  push32((uint32_t)(ECX));
  /* 120bf2ff call 0x120c1a80 */
  push32(0x120bf304u); f_120c1a80();
  /* 120bf304 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf307 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120bf309 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bf30b jmp 0x120bf30f */
  goto L_120bf30f;
L_120bf30d:;
  /* 120bf30d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120bf30f:;
  /* 120bf30f pop ebp */
  EBP = (pop32());
  /* 120bf310 ret  */
  ESPCHK(0x120bf2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f320 @ 0x120bf320 (183 bytes, 62 insns) */
void f_120bf320(void) {
  FTRACE(0x120bf320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bf320 push ebp */
  push32((uint32_t)(EBP));
  /* 120bf321 mov ebp, esp */
  EBP = (ESP);
  /* 120bf323 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bf326 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120bf32d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bf330 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120bf333 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf336 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120bf339 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 120bf33c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf33f jne 0x120bf3bb */
  if (!C.zf) goto L_120bf3bb;
  /* 120bf341 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf344 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120bf347 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 120bf34d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bf34f je 0x120bf3bb */
  if (C.zf) goto L_120bf3bb;
  /* 120bf351 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf354 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf357 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 120bf359 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bf35c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bf35f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf363 jle 0x120bf3bb */
  if ((C.zf||C.sf!=C.of)) goto L_120bf3bb;
  /* 120bf365 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf368 push edx */
  push32((uint32_t)(EDX));
  /* 120bf369 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf36c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120bf36f push ecx */
  push32((uint32_t)(ECX));
  /* 120bf370 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf373 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120bf376 push eax */
  push32((uint32_t)(EAX));
  /* 120bf377 call 0x120bb840 */
  push32(0x120bf37cu); f_120bb840();
  /* 120bf37c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf37f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf382 jne 0x120bf3a5 */
  if (!C.zf) goto L_120bf3a5;
  /* 120bf384 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf387 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120bf38a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 120bf390 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120bf392 je 0x120bf3a3 */
  if (C.zf) goto L_120bf3a3;
  /* 120bf394 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf397 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120bf39a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 120bf39d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf3a0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_120bf3a3:;
  /* 120bf3a3 jmp 0x120bf3bb */
  goto L_120bf3bb;
L_120bf3a5:;
  /* 120bf3a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf3a8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120bf3ab or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 120bf3ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf3b1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 120bf3b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120bf3bb:;
  /* 120bf3bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf3be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf3c1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120bf3c4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120bf3c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf3c9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 120bf3d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf3d3 mov esp, ebp */
  ESP = (EBP);
  /* 120bf3d5 pop ebp */
  EBP = (pop32());
  /* 120bf3d6 ret  */
  ESPCHK(0x120bf320u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f3e0 @ 0x120bf3e0 (15 bytes, 7 insns) */
void f_120bf3e0(void) {
  FTRACE(0x120bf3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bf3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bf3e1 mov ebp, esp */
  EBP = (ESP);
  /* 120bf3e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120bf3e5 call 0x120bf3f0 */
  push32(0x120bf3eau); f_120bf3f0();
  /* 120bf3ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf3ed pop ebp */
  EBP = (pop32());
  /* 120bf3ee ret  */
  ESPCHK(0x120bf3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f3f0 @ 0x120bf3f0 (319 bytes, 94 insns) */
void f_120bf3f0(void) {
  FTRACE(0x120bf3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bf3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bf3f1 mov ebp, esp */
  EBP = (ESP);
  /* 120bf3f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bf3f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120bf3fd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120bf404 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bf406 call 0x120acb80 */
  push32(0x120bf40bu); f_120acb80();
  /* 120bf40b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf40e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120bf415 jmp 0x120bf420 */
  goto L_120bf420;
L_120bf417:;
  /* 120bf417 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf41a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf41d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_120bf420:;
  /* 120bf420 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf423 cmp ecx, dword ptr [0x120e27e0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120e27e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf429 jge 0x120bf513 */
  if ((C.sf==C.of)) goto L_120bf513;
  /* 120bf42f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf432 mov eax, dword ptr [0x120e1494] */
  EAX = (r32((uint32_t)(0x120e1494)));
  /* 120bf437 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf43b je 0x120bf50e */
  if (C.zf) goto L_120bf50e;
  /* 120bf441 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf444 mov edx, dword ptr [0x120e1494] */
  EDX = (r32((uint32_t)(0x120e1494)));
  /* 120bf44a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 120bf44d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120bf450 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 120bf456 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120bf458 je 0x120bf50e */
  if (C.zf) goto L_120bf50e;
  /* 120bf45e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf461 mov eax, dword ptr [0x120e1494] */
  EAX = (r32((uint32_t)(0x120e1494)));
  /* 120bf466 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 120bf469 push ecx */
  push32((uint32_t)(ECX));
  /* 120bf46a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf46d push edx */
  push32((uint32_t)(EDX));
  /* 120bf46e call 0x120bbdf0 */
  push32(0x120bf473u); f_120bbdf0();
  /* 120bf473 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf476 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf479 mov ecx, dword ptr [0x120e1494] */
  ECX = (r32((uint32_t)(0x120e1494)));
  /* 120bf47f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120bf482 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120bf485 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 120bf48a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120bf48c je 0x120bf4f5 */
  if (C.zf) goto L_120bf4f5;
  /* 120bf48e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf492 jne 0x120bf4b9 */
  if (!C.zf) goto L_120bf4b9;
  /* 120bf494 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf497 mov edx, dword ptr [0x120e1494] */
  EDX = (r32((uint32_t)(0x120e1494)));
  /* 120bf49d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 120bf4a0 push eax */
  push32((uint32_t)(EAX));
  /* 120bf4a1 call 0x120bf2d0 */
  push32(0x120bf4a6u); f_120bf2d0();
  /* 120bf4a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf4a9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf4ac je 0x120bf4b7 */
  if (C.zf) goto L_120bf4b7;
  /* 120bf4ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf4b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf4b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120bf4b7:;
  /* 120bf4b7 jmp 0x120bf4f5 */
  goto L_120bf4f5;
L_120bf4b9:;
  /* 120bf4b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf4bd jne 0x120bf4f5 */
  if (!C.zf) goto L_120bf4f5;
  /* 120bf4bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf4c2 mov eax, dword ptr [0x120e1494] */
  EAX = (r32((uint32_t)(0x120e1494)));
  /* 120bf4c7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 120bf4ca mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120bf4cd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 120bf4d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120bf4d2 je 0x120bf4f5 */
  if (C.zf) goto L_120bf4f5;
  /* 120bf4d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf4d7 mov ecx, dword ptr [0x120e1494] */
  ECX = (r32((uint32_t)(0x120e1494)));
  /* 120bf4dd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120bf4e0 push edx */
  push32((uint32_t)(EDX));
  /* 120bf4e1 call 0x120bf2d0 */
  push32(0x120bf4e6u); f_120bf2d0();
  /* 120bf4e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf4e9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf4ec jne 0x120bf4f5 */
  if (!C.zf) goto L_120bf4f5;
  /* 120bf4ee mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_120bf4f5:;
  /* 120bf4f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf4f8 mov ecx, dword ptr [0x120e1494] */
  ECX = (r32((uint32_t)(0x120e1494)));
  /* 120bf4fe mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120bf501 push edx */
  push32((uint32_t)(EDX));
  /* 120bf502 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf505 push eax */
  push32((uint32_t)(EAX));
  /* 120bf506 call 0x120bbe60 */
  push32(0x120bf50bu); f_120bbe60();
  /* 120bf50b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bf50e:;
  /* 120bf50e jmp 0x120bf417 */
  goto L_120bf417;
L_120bf513:;
  /* 120bf513 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bf515 call 0x120acc20 */
  push32(0x120bf51au); f_120acc20();
  /* 120bf51a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf51d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf521 jne 0x120bf528 */
  if (!C.zf) goto L_120bf528;
  /* 120bf523 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf526 jmp 0x120bf52b */
  goto L_120bf52b;
L_120bf528:;
  /* 120bf528 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_120bf52b:;
  /* 120bf52b mov esp, ebp */
  ESP = (EBP);
  /* 120bf52d pop ebp */
  EBP = (pop32());
  /* 120bf52e ret  */
  ESPCHK(0x120bf3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f530 @ 0x120bf530 (289 bytes, 97 insns) */
void f_120bf530(void) {
  FTRACE(0x120bf530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bf530 push ebp */
  push32((uint32_t)(EBP));
  /* 120bf531 mov ebp, esp */
  EBP = (ESP);
  /* 120bf533 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bf536 push esi */
  push32((uint32_t)(ESI));
  /* 120bf537 mov eax, dword ptr [0x120e02f0] */
  EAX = (r32((uint32_t)(0x120e02f0)));
  /* 120bf53c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120bf53f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120bf546 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120bf54d jmp 0x120bf558 */
  goto L_120bf558;
L_120bf54f:;
  /* 120bf54f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf552 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf555 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_120bf558:;
  /* 120bf558 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf55c jae 0x120bf591 */
  if (!C.cf) goto L_120bf591;
  /* 120bf55e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf561 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf564 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 120bf567 push ecx */
  push32((uint32_t)(ECX));
  /* 120bf568 call 0x120b1210 */
  push32(0x120bf56du); f_120b1210();
  /* 120bf56d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf570 mov esi, eax */
  ESI = (EAX);
  /* 120bf572 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf575 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf578 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 120bf57c push ecx */
  push32((uint32_t)(ECX));
  /* 120bf57d call 0x120b1210 */
  push32(0x120bf582u); f_120b1210();
  /* 120bf582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf585 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf588 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 120bf58c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120bf58f jmp 0x120bf54f */
  goto L_120bf54f;
L_120bf591:;
  /* 120bf591 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf594 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf597 push eax */
  push32((uint32_t)(EAX));
  /* 120bf598 call 0x120acc60 */
  push32(0x120bf59du); f_120acc60();
  /* 120bf59d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf5a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bf5a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf5a7 je 0x120bf649 */
  if (C.zf) goto L_120bf649;
  /* 120bf5ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf5b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120bf5b3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120bf5ba jmp 0x120bf5c5 */
  goto L_120bf5c5;
L_120bf5bc:;
  /* 120bf5bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf5bf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf5c2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_120bf5c5:;
  /* 120bf5c5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf5c9 jae 0x120bf63a */
  if (!C.cf) goto L_120bf63a;
  /* 120bf5cb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf5ce mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 120bf5d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf5d4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf5d7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120bf5da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf5dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf5e0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 120bf5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 120bf5e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf5e7 push edx */
  push32((uint32_t)(EDX));
  /* 120bf5e8 call 0x120b1390 */
  push32(0x120bf5edu); f_120b1390();
  /* 120bf5ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf5f0 push eax */
  push32((uint32_t)(EAX));
  /* 120bf5f1 call 0x120b1210 */
  push32(0x120bf5f6u); f_120b1210();
  /* 120bf5f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf5f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf5fc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf5fe mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120bf601 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf604 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 120bf607 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf60a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf60d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120bf610 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf613 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf616 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 120bf61a push eax */
  push32((uint32_t)(EAX));
  /* 120bf61b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf61e push ecx */
  push32((uint32_t)(ECX));
  /* 120bf61f call 0x120b1390 */
  push32(0x120bf624u); f_120b1390();
  /* 120bf624 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf627 push eax */
  push32((uint32_t)(EAX));
  /* 120bf628 call 0x120b1210 */
  push32(0x120bf62du); f_120b1210();
  /* 120bf62d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf630 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf633 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf635 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120bf638 jmp 0x120bf5bc */
  goto L_120bf5bc;
L_120bf63a:;
  /* 120bf63a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf63d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 120bf640 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf643 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf646 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_120bf649:;
  /* 120bf649 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf64c pop esi */
  ESI = (pop32());
  /* 120bf64d mov esp, ebp */
  ESP = (EBP);
  /* 120bf64f pop ebp */
  EBP = (pop32());
  /* 120bf650 ret  */
  ESPCHK(0x120bf530u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f660 @ 0x120bf660 (291 bytes, 97 insns) */
void f_120bf660(void) {
  FTRACE(0x120bf660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bf660 push ebp */
  push32((uint32_t)(EBP));
  /* 120bf661 mov ebp, esp */
  EBP = (ESP);
  /* 120bf663 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bf666 push esi */
  push32((uint32_t)(ESI));
  /* 120bf667 mov eax, dword ptr [0x120e02f0] */
  EAX = (r32((uint32_t)(0x120e02f0)));
  /* 120bf66c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120bf66f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120bf676 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120bf67d jmp 0x120bf688 */
  goto L_120bf688;
L_120bf67f:;
  /* 120bf67f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf682 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf685 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_120bf688:;
  /* 120bf688 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf68c jae 0x120bf6c2 */
  if (!C.cf) goto L_120bf6c2;
  /* 120bf68e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf691 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf694 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 120bf698 push ecx */
  push32((uint32_t)(ECX));
  /* 120bf699 call 0x120b1210 */
  push32(0x120bf69eu); f_120b1210();
  /* 120bf69e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf6a1 mov esi, eax */
  ESI = (EAX);
  /* 120bf6a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf6a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf6a9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 120bf6ad push ecx */
  push32((uint32_t)(ECX));
  /* 120bf6ae call 0x120b1210 */
  push32(0x120bf6b3u); f_120b1210();
  /* 120bf6b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf6b6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf6b9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 120bf6bd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120bf6c0 jmp 0x120bf67f */
  goto L_120bf67f;
L_120bf6c2:;
  /* 120bf6c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf6c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf6c8 push eax */
  push32((uint32_t)(EAX));
  /* 120bf6c9 call 0x120acc60 */
  push32(0x120bf6ceu); f_120acc60();
  /* 120bf6ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf6d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bf6d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf6d8 je 0x120bf77b */
  if (C.zf) goto L_120bf77b;
  /* 120bf6de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf6e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120bf6e4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120bf6eb jmp 0x120bf6f6 */
  goto L_120bf6f6;
L_120bf6ed:;
  /* 120bf6ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf6f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf6f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_120bf6f6:;
  /* 120bf6f6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf6fa jae 0x120bf76c */
  if (!C.cf) goto L_120bf76c;
  /* 120bf6fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf6ff mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 120bf702 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf705 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf708 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120bf70b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf70e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf711 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 120bf715 push ecx */
  push32((uint32_t)(ECX));
  /* 120bf716 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf719 push edx */
  push32((uint32_t)(EDX));
  /* 120bf71a call 0x120b1390 */
  push32(0x120bf71fu); f_120b1390();
  /* 120bf71f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf722 push eax */
  push32((uint32_t)(EAX));
  /* 120bf723 call 0x120b1210 */
  push32(0x120bf728u); f_120b1210();
  /* 120bf728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf72b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf72e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf730 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120bf733 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf736 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 120bf739 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf73c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf73f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120bf742 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf745 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf748 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 120bf74c push eax */
  push32((uint32_t)(EAX));
  /* 120bf74d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf750 push ecx */
  push32((uint32_t)(ECX));
  /* 120bf751 call 0x120b1390 */
  push32(0x120bf756u); f_120b1390();
  /* 120bf756 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf759 push eax */
  push32((uint32_t)(EAX));
  /* 120bf75a call 0x120b1210 */
  push32(0x120bf75fu); f_120b1210();
  /* 120bf75f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf762 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf765 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf767 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120bf76a jmp 0x120bf6ed */
  goto L_120bf6ed;
L_120bf76c:;
  /* 120bf76c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf76f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 120bf772 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf775 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf778 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_120bf77b:;
  /* 120bf77b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf77e pop esi */
  ESI = (pop32());
  /* 120bf77f mov esp, ebp */
  ESP = (EBP);
  /* 120bf781 pop ebp */
  EBP = (pop32());
  /* 120bf782 ret  */
  ESPCHK(0x120bf660u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f790 @ 0x120bf790 (878 bytes, 273 insns) */
void f_120bf790(void) {
  FTRACE(0x120bf790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bf790 push ebp */
  push32((uint32_t)(EBP));
  /* 120bf791 mov ebp, esp */
  EBP = (ESP);
  /* 120bf793 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bf796 push esi */
  push32((uint32_t)(ESI));
  /* 120bf797 mov eax, dword ptr [0x120e02f0] */
  EAX = (r32((uint32_t)(0x120e02f0)));
  /* 120bf79c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120bf79f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120bf7a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120bf7ad jmp 0x120bf7b8 */
  goto L_120bf7b8;
L_120bf7af:;
  /* 120bf7af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf7b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf7b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_120bf7b8:;
  /* 120bf7b8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf7bc jae 0x120bf7f1 */
  if (!C.cf) goto L_120bf7f1;
  /* 120bf7be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf7c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf7c4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 120bf7c7 push ecx */
  push32((uint32_t)(ECX));
  /* 120bf7c8 call 0x120b1210 */
  push32(0x120bf7cdu); f_120b1210();
  /* 120bf7cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf7d0 mov esi, eax */
  ESI = (EAX);
  /* 120bf7d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf7d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf7d8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 120bf7dc push ecx */
  push32((uint32_t)(ECX));
  /* 120bf7dd call 0x120b1210 */
  push32(0x120bf7e2u); f_120b1210();
  /* 120bf7e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf7e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf7e8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 120bf7ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120bf7ef jmp 0x120bf7af */
  goto L_120bf7af;
L_120bf7f1:;
  /* 120bf7f1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120bf7f8 jmp 0x120bf803 */
  goto L_120bf803;
L_120bf7fa:;
  /* 120bf7fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf7fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf800 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_120bf803:;
  /* 120bf803 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf807 jae 0x120bf83d */
  if (!C.cf) goto L_120bf83d;
  /* 120bf809 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf80c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf80f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 120bf813 push eax */
  push32((uint32_t)(EAX));
  /* 120bf814 call 0x120b1210 */
  push32(0x120bf819u); f_120b1210();
  /* 120bf819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf81c mov esi, eax */
  ESI = (EAX);
  /* 120bf81e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf821 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf824 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 120bf828 push eax */
  push32((uint32_t)(EAX));
  /* 120bf829 call 0x120b1210 */
  push32(0x120bf82eu); f_120b1210();
  /* 120bf82e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf831 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf834 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 120bf838 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120bf83b jmp 0x120bf7fa */
  goto L_120bf7fa;
L_120bf83d:;
  /* 120bf83d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf840 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 120bf846 push eax */
  push32((uint32_t)(EAX));
  /* 120bf847 call 0x120b1210 */
  push32(0x120bf84cu); f_120b1210();
  /* 120bf84c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf84f mov esi, eax */
  ESI = (EAX);
  /* 120bf851 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf854 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 120bf85a push edx */
  push32((uint32_t)(EDX));
  /* 120bf85b call 0x120b1210 */
  push32(0x120bf860u); f_120b1210();
  /* 120bf860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf863 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf866 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 120bf86a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120bf86d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf870 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 120bf876 push edx */
  push32((uint32_t)(EDX));
  /* 120bf877 call 0x120b1210 */
  push32(0x120bf87cu); f_120b1210();
  /* 120bf87c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf87f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf882 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 120bf886 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120bf889 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf88c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 120bf892 push ecx */
  push32((uint32_t)(ECX));
  /* 120bf893 call 0x120b1210 */
  push32(0x120bf898u); f_120b1210();
  /* 120bf898 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf89b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf89e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 120bf8a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120bf8a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf8a8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 120bf8ae push edx */
  push32((uint32_t)(EDX));
  /* 120bf8af call 0x120b1210 */
  push32(0x120bf8b4u); f_120b1210();
  /* 120bf8b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf8b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf8ba lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 120bf8be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120bf8c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120bf8c4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf8c9 push eax */
  push32((uint32_t)(EAX));
  /* 120bf8ca call 0x120acc60 */
  push32(0x120bf8cfu); f_120acc60();
  /* 120bf8cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf8d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120bf8d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf8d9 je 0x120bfaf6 */
  if (C.zf) goto L_120bfaf6;
  /* 120bf8df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf8e2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 120bf8e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf8e8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf8ee mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120bf8f1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 120bf8f6 mov eax, dword ptr [0x120e02f0] */
  EAX = (r32((uint32_t)(0x120e02f0)));
  /* 120bf8fb push eax */
  push32((uint32_t)(EAX));
  /* 120bf8fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bf8ff push ecx */
  push32((uint32_t)(ECX));
  /* 120bf900 call 0x120b6d20 */
  push32(0x120bf905u); f_120b6d20();
  /* 120bf905 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf908 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120bf90f jmp 0x120bf91a */
  goto L_120bf91a;
L_120bf911:;
  /* 120bf911 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf914 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf917 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_120bf91a:;
  /* 120bf91a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf91e jae 0x120bf98e */
  if (!C.cf) goto L_120bf98e;
  /* 120bf920 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf923 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bf926 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf929 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 120bf92c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf92f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf932 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120bf935 push edx */
  push32((uint32_t)(EDX));
  /* 120bf936 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf939 push eax */
  push32((uint32_t)(EAX));
  /* 120bf93a call 0x120b1390 */
  push32(0x120bf93fu); f_120b1390();
  /* 120bf93f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf942 push eax */
  push32((uint32_t)(EAX));
  /* 120bf943 call 0x120b1210 */
  push32(0x120bf948u); f_120b1210();
  /* 120bf948 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf94b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf94e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 120bf952 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120bf955 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf958 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bf95b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf95e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 120bf962 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf965 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf968 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 120bf96c push edx */
  push32((uint32_t)(EDX));
  /* 120bf96d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf970 push eax */
  push32((uint32_t)(EAX));
  /* 120bf971 call 0x120b1390 */
  push32(0x120bf976u); f_120b1390();
  /* 120bf976 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf979 push eax */
  push32((uint32_t)(EAX));
  /* 120bf97a call 0x120b1210 */
  push32(0x120bf97fu); f_120b1210();
  /* 120bf97f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf982 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf985 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 120bf989 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120bf98c jmp 0x120bf911 */
  goto L_120bf911;
L_120bf98e:;
  /* 120bf98e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120bf995 jmp 0x120bf9a0 */
  goto L_120bf9a0;
L_120bf997:;
  /* 120bf997 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf99a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf99d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_120bf9a0:;
  /* 120bf9a0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bf9a4 jae 0x120bfa16 */
  if (!C.cf) goto L_120bfa16;
  /* 120bf9a6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf9a9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bf9ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf9af mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 120bf9b3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf9b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf9b9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 120bf9bd push eax */
  push32((uint32_t)(EAX));
  /* 120bf9be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf9c1 push ecx */
  push32((uint32_t)(ECX));
  /* 120bf9c2 call 0x120b1390 */
  push32(0x120bf9c7u); f_120b1390();
  /* 120bf9c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf9ca push eax */
  push32((uint32_t)(EAX));
  /* 120bf9cb call 0x120b1210 */
  push32(0x120bf9d0u); f_120b1210();
  /* 120bf9d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bf9d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf9d6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 120bf9da mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120bf9dd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf9e0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bf9e3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf9e6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 120bf9ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bf9ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bf9f0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 120bf9f4 push eax */
  push32((uint32_t)(EAX));
  /* 120bf9f5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bf9f8 push ecx */
  push32((uint32_t)(ECX));
  /* 120bf9f9 call 0x120b1390 */
  push32(0x120bf9feu); f_120b1390();
  /* 120bf9fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfa01 push eax */
  push32((uint32_t)(EAX));
  /* 120bfa02 call 0x120b1210 */
  push32(0x120bfa07u); f_120b1210();
  /* 120bfa07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfa0a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bfa0d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 120bfa11 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120bfa14 jmp 0x120bf997 */
  goto L_120bf997;
L_120bfa16:;
  /* 120bfa16 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bfa19 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bfa1c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 120bfa22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bfa25 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 120bfa2b push ecx */
  push32((uint32_t)(ECX));
  /* 120bfa2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bfa2f push edx */
  push32((uint32_t)(EDX));
  /* 120bfa30 call 0x120b1390 */
  push32(0x120bfa35u); f_120b1390();
  /* 120bfa35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfa38 push eax */
  push32((uint32_t)(EAX));
  /* 120bfa39 call 0x120b1210 */
  push32(0x120bfa3eu); f_120b1210();
  /* 120bfa3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfa41 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bfa44 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 120bfa48 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120bfa4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bfa4e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bfa51 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 120bfa57 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bfa5a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 120bfa60 push eax */
  push32((uint32_t)(EAX));
  /* 120bfa61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bfa64 push ecx */
  push32((uint32_t)(ECX));
  /* 120bfa65 call 0x120b1390 */
  push32(0x120bfa6au); f_120b1390();
  /* 120bfa6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfa6d push eax */
  push32((uint32_t)(EAX));
  /* 120bfa6e call 0x120b1210 */
  push32(0x120bfa73u); f_120b1210();
  /* 120bfa73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfa76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bfa79 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 120bfa7d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120bfa80 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bfa83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bfa86 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 120bfa8c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bfa8f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 120bfa95 push ecx */
  push32((uint32_t)(ECX));
  /* 120bfa96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bfa99 push edx */
  push32((uint32_t)(EDX));
  /* 120bfa9a call 0x120b1390 */
  push32(0x120bfa9fu); f_120b1390();
  /* 120bfa9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfaa2 push eax */
  push32((uint32_t)(EAX));
  /* 120bfaa3 call 0x120b1210 */
  push32(0x120bfaa8u); f_120b1210();
  /* 120bfaa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfaab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bfaae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 120bfab2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120bfab5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bfab8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bfabb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 120bfac1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bfac4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 120bfaca push eax */
  push32((uint32_t)(EAX));
  /* 120bfacb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bface push ecx */
  push32((uint32_t)(ECX));
  /* 120bfacf call 0x120b1390 */
  push32(0x120bfad4u); f_120b1390();
  /* 120bfad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfad7 push eax */
  push32((uint32_t)(EAX));
  /* 120bfad8 call 0x120b1210 */
  push32(0x120bfaddu); f_120b1210();
  /* 120bfadd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfae0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bfae3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 120bfae7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120bfaea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120bfaed mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120bfaf0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_120bfaf6:;
  /* 120bfaf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bfaf9 pop esi */
  ESI = (pop32());
  /* 120bfafa mov esp, ebp */
  ESP = (EBP);
  /* 120bfafc pop ebp */
  EBP = (pop32());
  /* 120bfafd ret  */
  ESPCHK(0x120bf790u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fb00 @ 0x120bfb00 (31 bytes, 15 insns) */
void f_120bfb00(void) {
  FTRACE(0x120bfb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bfb00 push ebp */
  push32((uint32_t)(EBP));
  /* 120bfb01 mov ebp, esp */
  EBP = (ESP);
  /* 120bfb03 push 0 */
  push32((uint32_t)(0x0u));
  /* 120bfb05 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfb08 push eax */
  push32((uint32_t)(EAX));
  /* 120bfb09 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfb0c push ecx */
  push32((uint32_t)(ECX));
  /* 120bfb0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bfb10 push edx */
  push32((uint32_t)(EDX));
  /* 120bfb11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bfb14 push eax */
  push32((uint32_t)(EAX));
  /* 120bfb15 call 0x120bfb20 */
  push32(0x120bfb1au); f_120bfb20();
  /* 120bfb1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfb1d pop ebp */
  EBP = (pop32());
  /* 120bfb1e ret  */
  ESPCHK(0x120bfb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fb20 @ 0x120bfb20 (393 bytes, 123 insns) */
void f_120bfb20(void) {
  FTRACE(0x120bfb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bfb20 push ebp */
  push32((uint32_t)(EBP));
  /* 120bfb21 mov ebp, esp */
  EBP = (ESP);
  /* 120bfb23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bfb26 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bfb2a jne 0x120bfb36 */
  if (!C.zf) goto L_120bfb36;
  /* 120bfb2c mov eax, dword ptr [0x120e02f0] */
  EAX = (r32((uint32_t)(0x120e02f0)));
  /* 120bfb31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120bfb34 jmp 0x120bfb3c */
  goto L_120bfb3c;
L_120bfb36:;
  /* 120bfb36 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bfb39 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_120bfb3c:;
  /* 120bfb3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120bfb3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120bfb42 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bfb45 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120bfb48 push 0x120e27f4 */
  push32((uint32_t)(0x120e27f4u));
  /* 120bfb4d call dword ptr [0x120e344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e344c))), 0x120bfb53u);
  /* 120bfb53 cmp dword ptr [0x120e27e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e27e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bfb5a je 0x120bfb7a */
  if (C.zf) goto L_120bfb7a;
  /* 120bfb5c push 0x120e27f4 */
  push32((uint32_t)(0x120e27f4u));
  /* 120bfb61 call dword ptr [0x120e3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3328))), 0x120bfb67u);
  /* 120bfb67 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120bfb69 call 0x120acb80 */
  push32(0x120bfb6eu); f_120acb80();
  /* 120bfb6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfb71 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 120bfb78 jmp 0x120bfb81 */
  goto L_120bfb81;
L_120bfb7a:;
  /* 120bfb7a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_120bfb81:;
  /* 120bfb81 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bfb85 jbe 0x120bfc72 */
  if ((C.cf||C.zf)) goto L_120bfc72;
  /* 120bfb8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfb8e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120bfb90 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 120bfb93 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120bfb97 je 0x120bfba1 */
  if (C.zf) goto L_120bfba1;
  /* 120bfb99 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120bfb9d je 0x120bfba6 */
  if (C.zf) goto L_120bfba6;
  /* 120bfb9f jmp 0x120bfc00 */
  goto L_120bfc00;
L_120bfba1:;
  /* 120bfba1 jmp 0x120bfc72 */
  goto L_120bfc72;
L_120bfba6:;
  /* 120bfba6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfba9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfbac mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 120bfbaf mov dword ptr [0x120e1480], 0 */
  w32((uint32_t)(0x120e1480), (0x0u));
  /* 120bfbb9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfbbc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120bfbbf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bfbc2 jne 0x120bfbd7 */
  if (!C.zf) goto L_120bfbd7;
  /* 120bfbc4 mov dword ptr [0x120e1480], 1 */
  w32((uint32_t)(0x120e1480), (0x1u));
  /* 120bfbce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfbd1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfbd4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_120bfbd7:;
  /* 120bfbd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bfbda push ecx */
  push32((uint32_t)(ECX));
  /* 120bfbdb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 120bfbde push edx */
  push32((uint32_t)(EDX));
  /* 120bfbdf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 120bfbe2 push eax */
  push32((uint32_t)(EAX));
  /* 120bfbe3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfbe6 push ecx */
  push32((uint32_t)(ECX));
  /* 120bfbe7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfbea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120bfbec push eax */
  push32((uint32_t)(EAX));
  /* 120bfbed call 0x120bfcb0 */
  push32(0x120bfbf2u); f_120bfcb0();
  /* 120bfbf2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfbf5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfbf8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfbfb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 120bfbfe jmp 0x120bfc6d */
  goto L_120bfc6d;
L_120bfc00:;
  /* 120bfc00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfc03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120bfc05 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120bfc07 mov ecx, dword ptr [0x120df01c] */
  ECX = (r32((uint32_t)(0x120df01c)));
  /* 120bfc0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120bfc0f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120bfc13 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 120bfc19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120bfc1b je 0x120bfc48 */
  if (C.zf) goto L_120bfc48;
  /* 120bfc1d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bfc21 jbe 0x120bfc48 */
  if ((C.cf||C.zf)) goto L_120bfc48;
  /* 120bfc23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bfc26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfc29 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120bfc2b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120bfc2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bfc30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfc33 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120bfc36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfc39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfc3c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 120bfc3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bfc42 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bfc45 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_120bfc48:;
  /* 120bfc48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bfc4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfc4e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120bfc50 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120bfc52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bfc55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfc58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120bfc5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfc5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfc61 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 120bfc64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bfc67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bfc6a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_120bfc6d:;
  /* 120bfc6d jmp 0x120bfb81 */
  goto L_120bfb81;
L_120bfc72:;
  /* 120bfc72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bfc76 je 0x120bfc84 */
  if (C.zf) goto L_120bfc84;
  /* 120bfc78 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120bfc7a call 0x120acc20 */
  push32(0x120bfc7fu); f_120acc20();
  /* 120bfc7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfc82 jmp 0x120bfc8f */
  goto L_120bfc8f;
L_120bfc84:;
  /* 120bfc84 push 0x120e27f4 */
  push32((uint32_t)(0x120e27f4u));
  /* 120bfc89 call dword ptr [0x120e3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3328))), 0x120bfc8fu);
L_120bfc8f:;
  /* 120bfc8f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bfc93 jbe 0x120bfca3 */
  if ((C.cf||C.zf)) goto L_120bfca3;
  /* 120bfc95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120bfc98 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 120bfc9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bfc9e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bfca1 jmp 0x120bfca5 */
  goto L_120bfca5;
L_120bfca3:;
  /* 120bfca3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120bfca5:;
  /* 120bfca5 mov esp, ebp */
  ESP = (EBP);
  /* 120bfca7 pop ebp */
  EBP = (pop32());
  /* 120bfca8 ret  */
  ESPCHK(0x120bfb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fcb0 @ 0x120bfcb0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_120bfcb0(void) {
  FTRACE(0x120bfcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120bfcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 120bfcb1 mov ebp, esp */
  EBP = (ESP);
  /* 120bfcb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bfcb6 push esi */
  push32((uint32_t)(ESI));
  /* 120bfcb7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 120bfcbb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120bfcbe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bfcc1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bfcc4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120bfcc7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bfccb ja 0x120c0218 */
  if ((!C.cf&&!C.zf)) goto L_120c0218;
  /* 120bfcd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120bfcd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120bfcd6 mov dl, byte ptr [eax + 0x120c0279] */
  DL = (r8((uint32_t)(EAX + 0x120c0279)));
  /* 120bfcdc jmp dword ptr [edx*4 + 0x120c021d] */
  switch (EDX) {
    case 0: goto L_120c01f6;
    case 1: goto L_120bfd05;
    case 2: goto L_120bfd4b;
    case 3: goto L_120bfe98;
    case 4: goto L_120bfec0;
    case 5: goto L_120bff5f;
    case 6: goto L_120bffcb;
    case 7: goto L_120bfff4;
    case 8: goto L_120c0035;
    case 9: goto L_120c0117;
    case 10: goto L_120c017e;
    case 11: goto L_120c01cb;
    case 12: goto L_120bfce3;
    case 13: goto L_120bfd28;
    case 14: goto L_120bfd6e;
    case 15: goto L_120bfe6e;
    case 16: goto L_120bff05;
    case 17: goto L_120bff32;
    case 18: goto L_120bff87;
    case 19: goto L_120c000b;
    case 20: goto L_120c00b9;
    case 21: goto L_120c0148;
    case 22: goto L_120c0218;
    default: x86_unimpl("switch@0x120bfcdc out of table"); return;
  }
L_120bfce3:;
  /* 120bfce3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfce6 push ecx */
  push32((uint32_t)(ECX));
  /* 120bfce7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfcea push edx */
  push32((uint32_t)(EDX));
  /* 120bfceb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bfcee mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 120bfcf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bfcf4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 120bfcf7 push eax */
  push32((uint32_t)(EAX));
  /* 120bfcf8 call 0x120c02d0 */
  push32(0x120bfcfdu); f_120c02d0();
  /* 120bfcfd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfd00 jmp 0x120c0218 */
  goto L_120c0218;
L_120bfd05:;
  /* 120bfd05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfd08 push ecx */
  push32((uint32_t)(ECX));
  /* 120bfd09 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfd0c push edx */
  push32((uint32_t)(EDX));
  /* 120bfd0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bfd10 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 120bfd13 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bfd16 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 120bfd1a push eax */
  push32((uint32_t)(EAX));
  /* 120bfd1b call 0x120c02d0 */
  push32(0x120bfd20u); f_120c02d0();
  /* 120bfd20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfd23 jmp 0x120c0218 */
  goto L_120c0218;
L_120bfd28:;
  /* 120bfd28 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfd2b push ecx */
  push32((uint32_t)(ECX));
  /* 120bfd2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfd2f push edx */
  push32((uint32_t)(EDX));
  /* 120bfd30 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bfd33 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120bfd36 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bfd39 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 120bfd3d push eax */
  push32((uint32_t)(EAX));
  /* 120bfd3e call 0x120c02d0 */
  push32(0x120bfd43u); f_120c02d0();
  /* 120bfd43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfd46 jmp 0x120c0218 */
  goto L_120c0218;
L_120bfd4b:;
  /* 120bfd4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfd4e push ecx */
  push32((uint32_t)(ECX));
  /* 120bfd4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfd52 push edx */
  push32((uint32_t)(EDX));
  /* 120bfd53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bfd56 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120bfd59 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bfd5c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 120bfd60 push eax */
  push32((uint32_t)(EAX));
  /* 120bfd61 call 0x120c02d0 */
  push32(0x120bfd66u); f_120c02d0();
  /* 120bfd66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfd69 jmp 0x120c0218 */
  goto L_120c0218;
L_120bfd6e:;
  /* 120bfd6e cmp dword ptr [0x120e1480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bfd75 je 0x120bfdf6 */
  if (C.zf) goto L_120bfdf6;
  /* 120bfd77 mov dword ptr [0x120e1480], 0 */
  w32((uint32_t)(0x120e1480), (0x0u));
  /* 120bfd81 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bfd84 push ecx */
  push32((uint32_t)(ECX));
  /* 120bfd85 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfd88 push edx */
  push32((uint32_t)(EDX));
  /* 120bfd89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfd8c push eax */
  push32((uint32_t)(EAX));
  /* 120bfd8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bfd90 push ecx */
  push32((uint32_t)(ECX));
  /* 120bfd91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bfd94 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 120bfd9a push eax */
  push32((uint32_t)(EAX));
  /* 120bfd9b call 0x120c0480 */
  push32(0x120bfda0u); f_120c0480();
  /* 120bfda0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfda3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfda6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bfda9 jne 0x120bfdb0 */
  if (!C.zf) goto L_120bfdb0;
  /* 120bfdab jmp 0x120c0218 */
  goto L_120c0218;
L_120bfdb0:;
  /* 120bfdb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfdb3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120bfdb5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 120bfdb8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfdbb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120bfdbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfdc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfdc3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120bfdc5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfdc8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120bfdca sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bfdcd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfdd0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120bfdd2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bfdd5 push ecx */
  push32((uint32_t)(ECX));
  /* 120bfdd6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfdd9 push edx */
  push32((uint32_t)(EDX));
  /* 120bfdda mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfddd push eax */
  push32((uint32_t)(EAX));
  /* 120bfdde mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bfde1 push ecx */
  push32((uint32_t)(ECX));
  /* 120bfde2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bfde5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 120bfdeb push eax */
  push32((uint32_t)(EAX));
  /* 120bfdec call 0x120c0480 */
  push32(0x120bfdf1u); f_120c0480();
  /* 120bfdf1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfdf4 jmp 0x120bfe69 */
  goto L_120bfe69;
L_120bfdf6:;
  /* 120bfdf6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bfdf9 push ecx */
  push32((uint32_t)(ECX));
  /* 120bfdfa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfdfd push edx */
  push32((uint32_t)(EDX));
  /* 120bfdfe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfe01 push eax */
  push32((uint32_t)(EAX));
  /* 120bfe02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bfe05 push ecx */
  push32((uint32_t)(ECX));
  /* 120bfe06 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bfe09 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 120bfe0f push eax */
  push32((uint32_t)(EAX));
  /* 120bfe10 call 0x120c0480 */
  push32(0x120bfe15u); f_120c0480();
  /* 120bfe15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfe18 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfe1b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bfe1e jne 0x120bfe25 */
  if (!C.zf) goto L_120bfe25;
  /* 120bfe20 jmp 0x120c0218 */
  goto L_120c0218;
L_120bfe25:;
  /* 120bfe25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfe28 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120bfe2a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 120bfe2d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfe30 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120bfe32 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfe35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfe38 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120bfe3a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfe3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120bfe3f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120bfe42 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfe45 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120bfe47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bfe4a push ecx */
  push32((uint32_t)(ECX));
  /* 120bfe4b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfe4e push edx */
  push32((uint32_t)(EDX));
  /* 120bfe4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfe52 push eax */
  push32((uint32_t)(EAX));
  /* 120bfe53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bfe56 push ecx */
  push32((uint32_t)(ECX));
  /* 120bfe57 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bfe5a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 120bfe60 push eax */
  push32((uint32_t)(EAX));
  /* 120bfe61 call 0x120c0480 */
  push32(0x120bfe66u); f_120c0480();
  /* 120bfe66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bfe69:;
  /* 120bfe69 jmp 0x120c0218 */
  goto L_120c0218;
L_120bfe6e:;
  /* 120bfe6e mov ecx, dword ptr [0x120e1480] */
  ECX = (r32((uint32_t)(0x120e1480)));
  /* 120bfe74 mov dword ptr [0x120e1490], ecx */
  w32((uint32_t)(0x120e1490), (ECX));
  /* 120bfe7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfe7d push edx */
  push32((uint32_t)(EDX));
  /* 120bfe7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfe81 push eax */
  push32((uint32_t)(EAX));
  /* 120bfe82 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bfe84 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bfe87 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120bfe8a push edx */
  push32((uint32_t)(EDX));
  /* 120bfe8b call 0x120c0320 */
  push32(0x120bfe90u); f_120c0320();
  /* 120bfe90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfe93 jmp 0x120c0218 */
  goto L_120c0218;
L_120bfe98:;
  /* 120bfe98 mov eax, dword ptr [0x120e1480] */
  EAX = (r32((uint32_t)(0x120e1480)));
  /* 120bfe9d mov dword ptr [0x120e1490], eax */
  w32((uint32_t)(0x120e1490), (EAX));
  /* 120bfea2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfea5 push ecx */
  push32((uint32_t)(ECX));
  /* 120bfea6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfea9 push edx */
  push32((uint32_t)(EDX));
  /* 120bfeaa push 2 */
  push32((uint32_t)(0x2u));
  /* 120bfeac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bfeaf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120bfeb2 push ecx */
  push32((uint32_t)(ECX));
  /* 120bfeb3 call 0x120c0320 */
  push32(0x120bfeb8u); f_120c0320();
  /* 120bfeb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bfebb jmp 0x120c0218 */
  goto L_120c0218;
L_120bfec0:;
  /* 120bfec0 mov edx, dword ptr [0x120e1480] */
  EDX = (r32((uint32_t)(0x120e1480)));
  /* 120bfec6 mov dword ptr [0x120e1490], edx */
  w32((uint32_t)(0x120e1490), (EDX));
  /* 120bfecc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bfecf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 120bfed2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120bfed3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 120bfed8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120bfeda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120bfedd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bfee1 jne 0x120bfeea */
  if (!C.zf) goto L_120bfeea;
  /* 120bfee3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_120bfeea:;
  /* 120bfeea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bfeed push edx */
  push32((uint32_t)(EDX));
  /* 120bfeee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bfef1 push eax */
  push32((uint32_t)(EAX));
  /* 120bfef2 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bfef4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120bfef7 push ecx */
  push32((uint32_t)(ECX));
  /* 120bfef8 call 0x120c0320 */
  push32(0x120bfefdu); f_120c0320();
  /* 120bfefd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bff00 jmp 0x120c0218 */
  goto L_120c0218;
L_120bff05:;
  /* 120bff05 mov edx, dword ptr [0x120e1480] */
  EDX = (r32((uint32_t)(0x120e1480)));
  /* 120bff0b mov dword ptr [0x120e1490], edx */
  w32((uint32_t)(0x120e1490), (EDX));
  /* 120bff11 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bff14 push eax */
  push32((uint32_t)(EAX));
  /* 120bff15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bff18 push ecx */
  push32((uint32_t)(ECX));
  /* 120bff19 push 3 */
  push32((uint32_t)(0x3u));
  /* 120bff1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bff1e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120bff21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bff24 push eax */
  push32((uint32_t)(EAX));
  /* 120bff25 call 0x120c0320 */
  push32(0x120bff2au); f_120c0320();
  /* 120bff2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bff2d jmp 0x120c0218 */
  goto L_120c0218;
L_120bff32:;
  /* 120bff32 mov ecx, dword ptr [0x120e1480] */
  ECX = (r32((uint32_t)(0x120e1480)));
  /* 120bff38 mov dword ptr [0x120e1490], ecx */
  w32((uint32_t)(0x120e1490), (ECX));
  /* 120bff3e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bff41 push edx */
  push32((uint32_t)(EDX));
  /* 120bff42 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bff45 push eax */
  push32((uint32_t)(EAX));
  /* 120bff46 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bff48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bff4b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 120bff4e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120bff51 push edx */
  push32((uint32_t)(EDX));
  /* 120bff52 call 0x120c0320 */
  push32(0x120bff57u); f_120c0320();
  /* 120bff57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bff5a jmp 0x120c0218 */
  goto L_120c0218;
L_120bff5f:;
  /* 120bff5f mov eax, dword ptr [0x120e1480] */
  EAX = (r32((uint32_t)(0x120e1480)));
  /* 120bff64 mov dword ptr [0x120e1490], eax */
  w32((uint32_t)(0x120e1490), (EAX));
  /* 120bff69 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bff6c push ecx */
  push32((uint32_t)(ECX));
  /* 120bff6d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bff70 push edx */
  push32((uint32_t)(EDX));
  /* 120bff71 push 2 */
  push32((uint32_t)(0x2u));
  /* 120bff73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bff76 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120bff79 push ecx */
  push32((uint32_t)(ECX));
  /* 120bff7a call 0x120c0320 */
  push32(0x120bff7fu); f_120c0320();
  /* 120bff7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bff82 jmp 0x120c0218 */
  goto L_120c0218;
L_120bff87:;
  /* 120bff87 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bff8a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120bff8e jg 0x120bffac */
  if ((!C.zf&&C.sf==C.of)) goto L_120bffac;
  /* 120bff90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bff93 push eax */
  push32((uint32_t)(EAX));
  /* 120bff94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bff97 push ecx */
  push32((uint32_t)(ECX));
  /* 120bff98 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bff9b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 120bffa1 push eax */
  push32((uint32_t)(EAX));
  /* 120bffa2 call 0x120c02d0 */
  push32(0x120bffa7u); f_120c02d0();
  /* 120bffa7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bffaa jmp 0x120bffc6 */
  goto L_120bffc6;
L_120bffac:;
  /* 120bffac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bffaf push ecx */
  push32((uint32_t)(ECX));
  /* 120bffb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bffb3 push edx */
  push32((uint32_t)(EDX));
  /* 120bffb4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120bffb7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 120bffbd push ecx */
  push32((uint32_t)(ECX));
  /* 120bffbe call 0x120c02d0 */
  push32(0x120bffc3u); f_120c02d0();
  /* 120bffc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120bffc6:;
  /* 120bffc6 jmp 0x120c0218 */
  goto L_120c0218;
L_120bffcb:;
  /* 120bffcb mov edx, dword ptr [0x120e1480] */
  EDX = (r32((uint32_t)(0x120e1480)));
  /* 120bffd1 mov dword ptr [0x120e1490], edx */
  w32((uint32_t)(0x120e1490), (EDX));
  /* 120bffd7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120bffda push eax */
  push32((uint32_t)(EAX));
  /* 120bffdb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120bffde push ecx */
  push32((uint32_t)(ECX));
  /* 120bffdf push 2 */
  push32((uint32_t)(0x2u));
  /* 120bffe1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120bffe4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120bffe6 push eax */
  push32((uint32_t)(EAX));
  /* 120bffe7 call 0x120c0320 */
  push32(0x120bffecu); f_120c0320();
  /* 120bffec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120bffef jmp 0x120c0218 */
  goto L_120c0218;
L_120bfff4:;
  /* 120bfff4 mov ecx, dword ptr [0x120e1480] */
  ECX = (r32((uint32_t)(0x120e1480)));
  /* 120bfffa mov dword ptr [0x120e1490], ecx */
  w32((uint32_t)(0x120e1490), (ECX));
  /* 120c0000 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0003 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 120c0006 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120c0009 jmp 0x120c005d */
  goto L_120c005d;
L_120c000b:;
  /* 120c000b mov ecx, dword ptr [0x120e1480] */
  ECX = (r32((uint32_t)(0x120e1480)));
  /* 120c0011 mov dword ptr [0x120e1490], ecx */
  w32((uint32_t)(0x120e1490), (ECX));
  /* 120c0017 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c001a push edx */
  push32((uint32_t)(EDX));
  /* 120c001b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c001e push eax */
  push32((uint32_t)(EAX));
  /* 120c001f push 1 */
  push32((uint32_t)(0x1u));
  /* 120c0021 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0024 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120c0027 push edx */
  push32((uint32_t)(EDX));
  /* 120c0028 call 0x120c0320 */
  push32(0x120c002du); f_120c0320();
  /* 120c002d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0030 jmp 0x120c0218 */
  goto L_120c0218;
L_120c0035:;
  /* 120c0035 mov eax, dword ptr [0x120e1480] */
  EAX = (r32((uint32_t)(0x120e1480)));
  /* 120c003a mov dword ptr [0x120e1490], eax */
  w32((uint32_t)(0x120e1490), (EAX));
  /* 120c003f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0042 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0046 jne 0x120c0051 */
  if (!C.zf) goto L_120c0051;
  /* 120c0048 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 120c004f jmp 0x120c005d */
  goto L_120c005d;
L_120c0051:;
  /* 120c0051 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0054 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 120c0057 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c005a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120c005d:;
  /* 120c005d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0060 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 120c0063 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0066 jge 0x120c0071 */
  if ((C.sf==C.of)) goto L_120c0071;
  /* 120c0068 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120c006f jmp 0x120c009e */
  goto L_120c009e;
L_120c0071:;
  /* 120c0071 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0074 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120c0077 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120c0078 mov ecx, 7 */
  ECX = (0x7u);
  /* 120c007d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120c007f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120c0082 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0085 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120c0088 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120c0089 mov ecx, 7 */
  ECX = (0x7u);
  /* 120c008e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120c0090 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0093 jl 0x120c009e */
  if ((C.sf!=C.of)) goto L_120c009e;
  /* 120c0095 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c0098 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c009b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120c009e:;
  /* 120c009e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c00a1 push eax */
  push32((uint32_t)(EAX));
  /* 120c00a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c00a5 push ecx */
  push32((uint32_t)(ECX));
  /* 120c00a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 120c00a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c00ab push edx */
  push32((uint32_t)(EDX));
  /* 120c00ac call 0x120c0320 */
  push32(0x120c00b1u); f_120c0320();
  /* 120c00b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c00b4 jmp 0x120c0218 */
  goto L_120c0218;
L_120c00b9:;
  /* 120c00b9 cmp dword ptr [0x120e1480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c00c0 je 0x120c00f0 */
  if (C.zf) goto L_120c00f0;
  /* 120c00c2 mov dword ptr [0x120e1480], 0 */
  w32((uint32_t)(0x120e1480), (0x0u));
  /* 120c00cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c00cf push eax */
  push32((uint32_t)(EAX));
  /* 120c00d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c00d3 push ecx */
  push32((uint32_t)(ECX));
  /* 120c00d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c00d7 push edx */
  push32((uint32_t)(EDX));
  /* 120c00d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c00db push eax */
  push32((uint32_t)(EAX));
  /* 120c00dc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c00df mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 120c00e5 push edx */
  push32((uint32_t)(EDX));
  /* 120c00e6 call 0x120c0480 */
  push32(0x120c00ebu); f_120c0480();
  /* 120c00eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c00ee jmp 0x120c0112 */
  goto L_120c0112;
L_120c00f0:;
  /* 120c00f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c00f3 push eax */
  push32((uint32_t)(EAX));
  /* 120c00f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c00f7 push ecx */
  push32((uint32_t)(ECX));
  /* 120c00f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c00fb push edx */
  push32((uint32_t)(EDX));
  /* 120c00fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c00ff push eax */
  push32((uint32_t)(EAX));
  /* 120c0100 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c0103 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 120c0109 push edx */
  push32((uint32_t)(EDX));
  /* 120c010a call 0x120c0480 */
  push32(0x120c010fu); f_120c0480();
  /* 120c010f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120c0112:;
  /* 120c0112 jmp 0x120c0218 */
  goto L_120c0218;
L_120c0117:;
  /* 120c0117 mov dword ptr [0x120e1480], 0 */
  w32((uint32_t)(0x120e1480), (0x0u));
  /* 120c0121 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c0124 push eax */
  push32((uint32_t)(EAX));
  /* 120c0125 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c0128 push ecx */
  push32((uint32_t)(ECX));
  /* 120c0129 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c012c push edx */
  push32((uint32_t)(EDX));
  /* 120c012d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0130 push eax */
  push32((uint32_t)(EAX));
  /* 120c0131 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c0134 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 120c013a push edx */
  push32((uint32_t)(EDX));
  /* 120c013b call 0x120c0480 */
  push32(0x120c0140u); f_120c0480();
  /* 120c0140 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0143 jmp 0x120c0218 */
  goto L_120c0218;
L_120c0148:;
  /* 120c0148 mov eax, dword ptr [0x120e1480] */
  EAX = (r32((uint32_t)(0x120e1480)));
  /* 120c014d mov dword ptr [0x120e1490], eax */
  w32((uint32_t)(0x120e1490), (EAX));
  /* 120c0152 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0155 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 120c0158 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120c0159 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 120c015e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120c0160 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120c0163 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c0166 push edx */
  push32((uint32_t)(EDX));
  /* 120c0167 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c016a push eax */
  push32((uint32_t)(EAX));
  /* 120c016b push 2 */
  push32((uint32_t)(0x2u));
  /* 120c016d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c0170 push ecx */
  push32((uint32_t)(ECX));
  /* 120c0171 call 0x120c0320 */
  push32(0x120c0176u); f_120c0320();
  /* 120c0176 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0179 jmp 0x120c0218 */
  goto L_120c0218;
L_120c017e:;
  /* 120c017e mov edx, dword ptr [0x120e1480] */
  EDX = (r32((uint32_t)(0x120e1480)));
  /* 120c0184 mov dword ptr [0x120e1490], edx */
  w32((uint32_t)(0x120e1490), (EDX));
  /* 120c018a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c018d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 120c0190 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120c0191 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 120c0196 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120c0198 mov ecx, eax */
  ECX = (EAX);
  /* 120c019a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c019d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120c01a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c01a3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120c01a6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120c01a7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 120c01ac idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120c01ae add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c01b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120c01b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c01b6 push eax */
  push32((uint32_t)(EAX));
  /* 120c01b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c01ba push ecx */
  push32((uint32_t)(ECX));
  /* 120c01bb push 4 */
  push32((uint32_t)(0x4u));
  /* 120c01bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c01c0 push edx */
  push32((uint32_t)(EDX));
  /* 120c01c1 call 0x120c0320 */
  push32(0x120c01c6u); f_120c0320();
  /* 120c01c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c01c9 jmp 0x120c0218 */
  goto L_120c0218;
L_120c01cb:;
  /* 120c01cb call 0x120b5bd0 */
  push32(0x120c01d0u); f_120b5bd0();
  /* 120c01d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c01d3 push eax */
  push32((uint32_t)(EAX));
  /* 120c01d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c01d7 push ecx */
  push32((uint32_t)(ECX));
  /* 120c01d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c01db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c01dd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c01e1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 120c01e4 mov ecx, dword ptr [eax*4 + 0x120df384] */
  ECX = (r32((uint32_t)(EAX*4 + 0x120df384)));
  /* 120c01eb push ecx */
  push32((uint32_t)(ECX));
  /* 120c01ec call 0x120c02d0 */
  push32(0x120c01f1u); f_120c02d0();
  /* 120c01f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c01f4 jmp 0x120c0218 */
  goto L_120c0218;
L_120c01f6:;
  /* 120c01f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c01f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120c01fb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 120c01fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0201 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120c0203 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0206 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0209 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120c020b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c020e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120c0210 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c0213 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c0216 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_120c0218:;
  /* 120c0218 pop esi */
  ESI = (pop32());
  /* 120c0219 mov esp, ebp */
  ESP = (EBP);
  /* 120c021b pop ebp */
  EBP = (pop32());
  /* 120c021c ret  */
  ESPCHK(0x120bfcb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x120c02d0 (72 bytes, 30 insns) */
void f_120c02d0(void) {
  FTRACE(0x120c02d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c02d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120c02d1 mov ebp, esp */
  EBP = (ESP);
L_120c02d3:;
  /* 120c02d3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c02d6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c02d9 je 0x120c0316 */
  if (C.zf) goto L_120c0316;
  /* 120c02db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c02de movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120c02e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120c02e3 je 0x120c0316 */
  if (C.zf) goto L_120c0316;
  /* 120c02e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c02e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120c02ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c02ed mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120c02ef mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 120c02f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c02f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120c02f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c02f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c02fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120c02fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c0301 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0304 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 120c0307 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c030a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120c030c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c030f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0312 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120c0314 jmp 0x120c02d3 */
  goto L_120c02d3;
L_120c0316:;
  /* 120c0316 pop ebp */
  EBP = (pop32());
  /* 120c0317 ret  */
  ESPCHK(0x120c02d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020320 @ 0x120c0320 (173 bytes, 64 insns) */
void f_120c0320(void) {
  FTRACE(0x120c0320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c0320 push ebp */
  push32((uint32_t)(EBP));
  /* 120c0321 mov ebp, esp */
  EBP = (ESP);
  /* 120c0323 push ecx */
  push32((uint32_t)(ECX));
  /* 120c0324 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120c032b cmp dword ptr [0x120e1490], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1490))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0332 je 0x120c034a */
  if (C.zf) goto L_120c034a;
  /* 120c0334 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c0337 push eax */
  push32((uint32_t)(EAX));
  /* 120c0338 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c033b push ecx */
  push32((uint32_t)(ECX));
  /* 120c033c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c033f push edx */
  push32((uint32_t)(EDX));
  /* 120c0340 call 0x120c03d0 */
  push32(0x120c0345u); f_120c03d0();
  /* 120c0345 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0348 jmp 0x120c03c9 */
  goto L_120c03c9;
L_120c034a:;
  /* 120c034a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c034d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0350 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0352 jae 0x120c03c0 */
  if (!C.cf) goto L_120c03c0;
  /* 120c0354 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0357 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c035a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 120c035d jmp 0x120c0368 */
  goto L_120c0368;
L_120c035f:;
  /* 120c035f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0362 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c0365 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_120c0368:;
  /* 120c0368 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c036b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c036e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120c0370 je 0x120c03a4 */
  if (C.zf) goto L_120c03a4;
  /* 120c0372 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c0375 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120c0376 mov ecx, 0xa */
  ECX = (0xau);
  /* 120c037b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120c037d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0380 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0383 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120c0385 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0388 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 120c038b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c038e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120c038f mov ecx, 0xa */
  ECX = (0xau);
  /* 120c0394 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120c0396 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120c0399 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c039c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c039f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120c03a2 jmp 0x120c035f */
  goto L_120c035f;
L_120c03a4:;
  /* 120c03a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c03a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120c03a9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c03ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c03af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120c03b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c03b4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120c03b6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c03b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c03bc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120c03be jmp 0x120c03c9 */
  goto L_120c03c9;
L_120c03c0:;
  /* 120c03c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c03c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_120c03c9:;
  /* 120c03c9 mov esp, ebp */
  ESP = (EBP);
  /* 120c03cb pop ebp */
  EBP = (pop32());
  /* 120c03cc ret  */
  ESPCHK(0x120c0320u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x120c03d0 (172 bytes, 65 insns) */
void f_120c03d0(void) {
  FTRACE(0x120c03d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c03d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120c03d1 mov ebp, esp */
  EBP = (ESP);
  /* 120c03d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c03d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c03d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120c03db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120c03de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c03e1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c03e4 jbe 0x120c042b */
  if ((C.cf||C.zf)) goto L_120c042b;
L_120c03e6:;
  /* 120c03e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c03e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120c03ea mov ecx, 0xa */
  ECX = (0xau);
  /* 120c03ef idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120c03f1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c03f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c03f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120c03f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c03fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c03ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120c0402 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0405 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120c0407 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c040a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c040d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120c040f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c0412 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120c0413 mov ecx, 0xa */
  ECX = (0xau);
  /* 120c0418 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120c041a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120c041d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0421 jle 0x120c042b */
  if ((C.zf||C.sf!=C.of)) goto L_120c042b;
  /* 120c0423 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0426 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0429 ja 0x120c03e6 */
  if ((!C.cf&&!C.zf)) goto L_120c03e6;
L_120c042b:;
  /* 120c042b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c042e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120c0430 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120c0433 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0436 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c0439 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120c043b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c043e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c0441 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120c0444:;
  /* 120c0444 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c0447 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120c0449 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 120c044c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c044f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c0452 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120c0454 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 120c0456 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c0459 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c045c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120c045f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c0462 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 120c0465 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 120c0467 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c046a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c046d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120c0470 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c0473 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0476 jb 0x120c0444 */
  if (C.cf) goto L_120c0444;
  /* 120c0478 mov esp, ebp */
  ESP = (EBP);
  /* 120c047a pop ebp */
  EBP = (pop32());
  /* 120c047b ret  */
  ESPCHK(0x120c03d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020480 @ 0x120c0480 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_120c0480(void) {
  FTRACE(0x120c0480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c0480 push ebp */
  push32((uint32_t)(EBP));
  /* 120c0481 mov ebp, esp */
  EBP = (ESP);
  /* 120c0483 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_120c0486:;
  /* 120c0486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c0489 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120c048c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120c048e je 0x120c08fc */
  if (C.zf) goto L_120c08fc;
  /* 120c0494 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c0497 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c049a je 0x120c08fc */
  if (C.zf) goto L_120c08fc;
  /* 120c04a0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120c04a4 mov dword ptr [0x120e1490], 0 */
  w32((uint32_t)(0x120e1490), (0x0u));
  /* 120c04ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120c04b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c04b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120c04bb jmp 0x120c04c6 */
  goto L_120c04c6;
L_120c04bd:;
  /* 120c04bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c04c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c04c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_120c04c6:;
  /* 120c04c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c04c9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120c04cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c04cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120c04d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c04d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c04d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120c04db cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c04dd jne 0x120c04e1 */
  if (!C.zf) goto L_120c04e1;
  /* 120c04df jmp 0x120c04bd */
  goto L_120c04bd;
L_120c04e1:;
  /* 120c04e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c04e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c04e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120c04ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c04ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120c04f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120c04f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120c04f6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c04f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120c04fc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0500 ja 0x120c0850 */
  if ((!C.cf&&!C.zf)) goto L_120c0850;
  /* 120c0506 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120c0509 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c050b mov al, byte ptr [ecx + 0x120c092c] */
  AL = (r8((uint32_t)(ECX + 0x120c092c)));
  /* 120c0511 jmp dword ptr [eax*4 + 0x120c0900] */
  switch (EAX) {
    case 0: goto L_120c076f;
    case 1: goto L_120c0653;
    case 2: goto L_120c05de;
    case 3: goto L_120c0518;
    case 4: goto L_120c0556;
    case 5: goto L_120c05b7;
    case 6: goto L_120c0605;
    case 7: goto L_120c062c;
    case 8: goto L_120c069a;
    case 9: goto L_120c0594;
    case 10: goto L_120c0850;
    default: x86_unimpl("switch@0x120c0511 out of table"); return;
  }
L_120c0518:;
  /* 120c0518 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c051b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120c051e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120c0521 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c0524 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120c0527 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c052b ja 0x120c0551 */
  if ((!C.cf&&!C.zf)) goto L_120c0551;
  /* 120c052d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120c0530 jmp dword ptr [ecx*4 + 0x120c097f] */
  switch (ECX) {
    case 0: goto L_120c0537;
    case 1: goto L_120c0541;
    case 2: goto L_120c0547;
    case 3: goto L_120c054d;
    case 4: goto L_120c0575;
    case 5: goto L_120c057f;
    case 6: goto L_120c0585;
    case 7: goto L_120c058b;
    default: x86_unimpl("switch@0x120c0530 out of table"); return;
  }
L_120c0537:;
  /* 120c0537 mov dword ptr [0x120e1490], 1 */
  w32((uint32_t)(0x120e1490), (0x1u));
L_120c0541:;
  /* 120c0541 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 120c0545 jmp 0x120c0551 */
  goto L_120c0551;
L_120c0547:;
  /* 120c0547 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 120c054b jmp 0x120c0551 */
  goto L_120c0551;
L_120c054d:;
  /* 120c054d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_120c0551:;
  /* 120c0551 jmp 0x120c0850 */
  goto L_120c0850;
L_120c0556:;
  /* 120c0556 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c0559 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 120c055c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120c055f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c0562 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120c0565 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0569 ja 0x120c058f */
  if ((!C.cf&&!C.zf)) goto L_120c058f;
  /* 120c056b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120c056e jmp dword ptr [ecx*4 + 0x120c098f] */
  switch (ECX) {
    case 0: goto L_120c0575;
    case 1: goto L_120c057f;
    case 2: goto L_120c0585;
    case 3: goto L_120c058b;
    default: x86_unimpl("switch@0x120c056e out of table"); return;
  }
L_120c0575:;
  /* 120c0575 mov dword ptr [0x120e1490], 1 */
  w32((uint32_t)(0x120e1490), (0x1u));
L_120c057f:;
  /* 120c057f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 120c0583 jmp 0x120c058f */
  goto L_120c058f;
L_120c0585:;
  /* 120c0585 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 120c0589 jmp 0x120c058f */
  goto L_120c058f;
L_120c058b:;
  /* 120c058b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_120c058f:;
  /* 120c058f jmp 0x120c0850 */
  goto L_120c0850;
L_120c0594:;
  /* 120c0594 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c0597 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 120c059a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c059e je 0x120c05a8 */
  if (C.zf) goto L_120c05a8;
  /* 120c05a0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c05a4 je 0x120c05ae */
  if (C.zf) goto L_120c05ae;
  /* 120c05a6 jmp 0x120c05b2 */
  goto L_120c05b2;
L_120c05a8:;
  /* 120c05a8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 120c05ac jmp 0x120c05b2 */
  goto L_120c05b2;
L_120c05ae:;
  /* 120c05ae mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_120c05b2:;
  /* 120c05b2 jmp 0x120c0850 */
  goto L_120c0850;
L_120c05b7:;
  /* 120c05b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c05ba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120c05bd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c05c1 je 0x120c05cb */
  if (C.zf) goto L_120c05cb;
  /* 120c05c3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c05c7 je 0x120c05d5 */
  if (C.zf) goto L_120c05d5;
  /* 120c05c9 jmp 0x120c05d9 */
  goto L_120c05d9;
L_120c05cb:;
  /* 120c05cb mov dword ptr [0x120e1490], 1 */
  w32((uint32_t)(0x120e1490), (0x1u));
L_120c05d5:;
  /* 120c05d5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_120c05d9:;
  /* 120c05d9 jmp 0x120c0850 */
  goto L_120c0850;
L_120c05de:;
  /* 120c05de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c05e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 120c05e4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c05e8 je 0x120c05f2 */
  if (C.zf) goto L_120c05f2;
  /* 120c05ea cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c05ee je 0x120c05fc */
  if (C.zf) goto L_120c05fc;
  /* 120c05f0 jmp 0x120c0600 */
  goto L_120c0600;
L_120c05f2:;
  /* 120c05f2 mov dword ptr [0x120e1490], 1 */
  w32((uint32_t)(0x120e1490), (0x1u));
L_120c05fc:;
  /* 120c05fc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_120c0600:;
  /* 120c0600 jmp 0x120c0850 */
  goto L_120c0850;
L_120c0605:;
  /* 120c0605 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c0608 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 120c060b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c060f je 0x120c0619 */
  if (C.zf) goto L_120c0619;
  /* 120c0611 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0615 je 0x120c0623 */
  if (C.zf) goto L_120c0623;
  /* 120c0617 jmp 0x120c0627 */
  goto L_120c0627;
L_120c0619:;
  /* 120c0619 mov dword ptr [0x120e1490], 1 */
  w32((uint32_t)(0x120e1490), (0x1u));
L_120c0623:;
  /* 120c0623 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_120c0627:;
  /* 120c0627 jmp 0x120c0850 */
  goto L_120c0850;
L_120c062c:;
  /* 120c062c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c062f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 120c0632 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0636 je 0x120c0640 */
  if (C.zf) goto L_120c0640;
  /* 120c0638 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c063c je 0x120c064a */
  if (C.zf) goto L_120c064a;
  /* 120c063e jmp 0x120c064e */
  goto L_120c064e;
L_120c0640:;
  /* 120c0640 mov dword ptr [0x120e1490], 1 */
  w32((uint32_t)(0x120e1490), (0x1u));
L_120c064a:;
  /* 120c064a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_120c064e:;
  /* 120c064e jmp 0x120c0850 */
  goto L_120c0850;
L_120c0653:;
  /* 120c0653 push 0x120dcc4c */
  push32((uint32_t)(0x120dcc4cu));
  /* 120c0658 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c065b push ecx */
  push32((uint32_t)(ECX));
  /* 120c065c call 0x120c0eb0 */
  push32(0x120c0661u); f_120c0eb0();
  /* 120c0661 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0664 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c0666 jne 0x120c0673 */
  if (!C.zf) goto L_120c0673;
  /* 120c0668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c066b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c066e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120c0671 jmp 0x120c0691 */
  goto L_120c0691;
L_120c0673:;
  /* 120c0673 push 0x120dcc48 */
  push32((uint32_t)(0x120dcc48u));
  /* 120c0678 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c067b push eax */
  push32((uint32_t)(EAX));
  /* 120c067c call 0x120c0eb0 */
  push32(0x120c0681u); f_120c0eb0();
  /* 120c0681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0684 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c0686 jne 0x120c0691 */
  if (!C.zf) goto L_120c0691;
  /* 120c0688 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c068b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c068e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120c0691:;
  /* 120c0691 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 120c0695 jmp 0x120c0850 */
  goto L_120c0850;
L_120c069a:;
  /* 120c069a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c069d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c06a1 jg 0x120c06b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_120c06b1;
  /* 120c06a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c06a6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 120c06ac mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120c06af jmp 0x120c06bd */
  goto L_120c06bd;
L_120c06b1:;
  /* 120c06b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c06b4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 120c06ba mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_120c06bd:;
  /* 120c06bd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c06c1 jle 0x120c0764 */
  if ((C.zf||C.sf!=C.of)) goto L_120c0764;
  /* 120c06c7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c06ca cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c06cd jbe 0x120c0764 */
  if ((C.cf||C.zf)) goto L_120c0764;
  /* 120c06d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120c06d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c06d8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120c06da mov ecx, dword ptr [0x120df01c] */
  ECX = (r32((uint32_t)(0x120df01c)));
  /* 120c06e0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120c06e2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120c06e6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 120c06ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120c06ee je 0x120c0727 */
  if (C.zf) goto L_120c0727;
  /* 120c06f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c06f3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c06f6 jbe 0x120c0727 */
  if ((C.cf||C.zf)) goto L_120c0727;
  /* 120c06f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c06fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120c06fd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120c0700 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120c0702 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 120c0704 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0707 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120c0709 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c070c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c070f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120c0711 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120c0714 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0717 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120c071a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c071d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120c071f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c0722 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c0725 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120c0727:;
  /* 120c0727 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c072a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120c072c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120c072f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120c0731 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 120c0733 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0736 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120c0738 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c073b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c073e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120c0740 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120c0743 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0746 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120c0749 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c074c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120c074e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c0751 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c0754 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120c0756 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c0759 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c075c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120c075f jmp 0x120c06bd */
  goto L_120c06bd;
L_120c0764:;
  /* 120c0764 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c0767 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120c076a jmp 0x120c0486 */
  goto L_120c0486;
L_120c076f:;
  /* 120c076f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c0772 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120c0775 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120c0777 je 0x120c0842 */
  if (C.zf) goto L_120c0842;
  /* 120c077d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c0780 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0783 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_120c0786:;
  /* 120c0786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c0789 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120c078c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120c078e je 0x120c0840 */
  if (C.zf) goto L_120c0840;
  /* 120c0794 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c0797 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c079a je 0x120c0840 */
  if (C.zf) goto L_120c0840;
  /* 120c07a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c07a3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120c07a6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c07a9 jne 0x120c07b9 */
  if (!C.zf) goto L_120c07b9;
  /* 120c07ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c07ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c07b1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120c07b4 jmp 0x120c0840 */
  goto L_120c0840;
L_120c07b9:;
  /* 120c07b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c07bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120c07be mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120c07c0 mov edx, dword ptr [0x120df01c] */
  EDX = (r32((uint32_t)(0x120df01c)));
  /* 120c07c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c07c8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 120c07cc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 120c07d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c07d3 je 0x120c080c */
  if (C.zf) goto L_120c080c;
  /* 120c07d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c07d8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c07db jbe 0x120c080c */
  if ((C.cf||C.zf)) goto L_120c080c;
  /* 120c07dd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c07e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120c07e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c07e5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120c07e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120c07e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c07ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120c07ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c07f1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c07f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120c07f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c07f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c07fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120c07ff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c0802 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120c0804 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c0807 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c080a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_120c080c:;
  /* 120c080c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c080f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120c0811 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c0814 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120c0816 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 120c0818 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c081b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120c081d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0820 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0823 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120c0825 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c0828 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c082b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120c082e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c0831 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120c0833 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c0836 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c0839 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120c083b jmp 0x120c0786 */
  goto L_120c0786;
L_120c0840:;
  /* 120c0840 jmp 0x120c084b */
  goto L_120c084b;
L_120c0842:;
  /* 120c0842 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c0845 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0848 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_120c084b:;
  /* 120c084b jmp 0x120c0486 */
  goto L_120c0486;
L_120c0850:;
  /* 120c0850 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 120c0854 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120c0856 je 0x120c087c */
  if (C.zf) goto L_120c087c;
  /* 120c0858 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c085b push edx */
  push32((uint32_t)(EDX));
  /* 120c085c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c085f push eax */
  push32((uint32_t)(EAX));
  /* 120c0860 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0863 push ecx */
  push32((uint32_t)(ECX));
  /* 120c0864 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0867 push edx */
  push32((uint32_t)(EDX));
  /* 120c0868 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 120c086b push eax */
  push32((uint32_t)(EAX));
  /* 120c086c call 0x120bfcb0 */
  push32(0x120c0871u); f_120bfcb0();
  /* 120c0871 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0874 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c0877 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 120c087a jmp 0x120c08f7 */
  goto L_120c08f7;
L_120c087c:;
  /* 120c087c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c087f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c0881 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120c0883 mov ecx, dword ptr [0x120df01c] */
  ECX = (r32((uint32_t)(0x120df01c)));
  /* 120c0889 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120c088b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120c088f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 120c0895 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120c0897 je 0x120c08c8 */
  if (C.zf) goto L_120c08c8;
  /* 120c0899 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c089c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120c089e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c08a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120c08a3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 120c08a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c08a8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120c08aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c08ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c08b0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120c08b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c08b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c08b8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 120c08bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c08be mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120c08c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c08c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c08c6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_120c08c8:;
  /* 120c08c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c08cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120c08cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c08d0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120c08d2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120c08d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c08d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120c08d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c08dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c08df mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120c08e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c08e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c08e7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120c08ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c08ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120c08ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c08f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c08f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_120c08f7:;
  /* 120c08f7 jmp 0x120c0486 */
  goto L_120c0486;
L_120c08fc:;
  /* 120c08fc mov esp, ebp */
  ESP = (EBP);
  /* 120c08fe pop ebp */
  EBP = (pop32());
  /* 120c08ff ret  */
  ESPCHK(0x120c0480u, _esp0);
  ESP += 4; return;
}

/* FUN_100209a0 @ 0x120c09a0 (650 bytes, 178 insns) */
void f_120c09a0(void) {
  FTRACE(0x120c09a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c09a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120c09a1 mov ebp, esp */
  EBP = (ESP);
  /* 120c09a3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c09a9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c09ad jne 0x120c0b09 */
  if (!C.zf) goto L_120c0b09;
  /* 120c09b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c09b6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 120c09bc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 120c09c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120c09c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120c09cc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 120c09d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c09d8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 120c09de push edx */
  push32((uint32_t)(EDX));
  /* 120c09df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c09e2 push eax */
  push32((uint32_t)(EAX));
  /* 120c09e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c09e6 push ecx */
  push32((uint32_t)(ECX));
  /* 120c09e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c09ea push edx */
  push32((uint32_t)(EDX));
  /* 120c09eb call 0x120c1d00 */
  push32(0x120c09f0u); f_120c1d00();
  /* 120c09f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c09f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120c09f6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c09fa jne 0x120c0a8f */
  if (!C.zf) goto L_120c0a8f;
  /* 120c0a00 call dword ptr [0x120e33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33e8))), 0x120c0a06u);
  /* 120c0a06 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0a09 je 0x120c0a10 */
  if (C.zf) goto L_120c0a10;
  /* 120c0a0b jmp 0x120c0aed */
  goto L_120c0aed;
L_120c0a10:;
  /* 120c0a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c0a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c0a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c0a16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0a19 push eax */
  push32((uint32_t)(EAX));
  /* 120c0a1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0a1d push ecx */
  push32((uint32_t)(ECX));
  /* 120c0a1e call 0x120c1d00 */
  push32(0x120c0a23u); f_120c1d00();
  /* 120c0a23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0a26 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 120c0a2c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0a33 jne 0x120c0a3a */
  if (!C.zf) goto L_120c0a3a;
  /* 120c0a35 jmp 0x120c0aed */
  goto L_120c0aed;
L_120c0a3a:;
  /* 120c0a3a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 120c0a3c push 0x120dcc54 */
  push32((uint32_t)(0x120dcc54u));
  /* 120c0a41 push 2 */
  push32((uint32_t)(0x2u));
  /* 120c0a43 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 120c0a49 push edx */
  push32((uint32_t)(EDX));
  /* 120c0a4a call 0x120acc80 */
  push32(0x120c0a4fu); f_120acc80();
  /* 120c0a4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0a52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120c0a55 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0a59 jne 0x120c0a60 */
  if (!C.zf) goto L_120c0a60;
  /* 120c0a5b jmp 0x120c0aed */
  goto L_120c0aed;
L_120c0a60:;
  /* 120c0a60 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120c0a67 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c0a69 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 120c0a6f push eax */
  push32((uint32_t)(EAX));
  /* 120c0a70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c0a73 push ecx */
  push32((uint32_t)(ECX));
  /* 120c0a74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0a77 push edx */
  push32((uint32_t)(EDX));
  /* 120c0a78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0a7b push eax */
  push32((uint32_t)(EAX));
  /* 120c0a7c call 0x120c1d00 */
  push32(0x120c0a81u); f_120c1d00();
  /* 120c0a81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0a84 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120c0a87 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0a8b jne 0x120c0a8f */
  if (!C.zf) goto L_120c0a8f;
  /* 120c0a8d jmp 0x120c0aed */
  goto L_120c0aed;
L_120c0a8f:;
  /* 120c0a8f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 120c0a91 push 0x120dcc54 */
  push32((uint32_t)(0x120dcc54u));
  /* 120c0a96 push 2 */
  push32((uint32_t)(0x2u));
  /* 120c0a98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c0a9b push ecx */
  push32((uint32_t)(ECX));
  /* 120c0a9c call 0x120acc80 */
  push32(0x120c0aa1u); f_120acc80();
  /* 120c0aa1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0aa4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 120c0aaa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120c0aac mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 120c0ab2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0ab5 jne 0x120c0ab9 */
  if (!C.zf) goto L_120c0ab9;
  /* 120c0ab7 jmp 0x120c0aed */
  goto L_120c0aed;
L_120c0ab9:;
  /* 120c0ab9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c0abc push ecx */
  push32((uint32_t)(ECX));
  /* 120c0abd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c0ac0 push edx */
  push32((uint32_t)(EDX));
  /* 120c0ac1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 120c0ac7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120c0ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 120c0aca call 0x120b1c00 */
  push32(0x120c0acfu); f_120b1c00();
  /* 120c0acf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0ad2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0ad6 je 0x120c0ae6 */
  if (C.zf) goto L_120c0ae6;
  /* 120c0ad8 push 2 */
  push32((uint32_t)(0x2u));
  /* 120c0ada mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c0add push edx */
  push32((uint32_t)(EDX));
  /* 120c0ade call 0x120ad710 */
  push32(0x120c0ae3u); f_120ad710();
  /* 120c0ae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120c0ae6:;
  /* 120c0ae6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c0ae8 jmp 0x120c0c26 */
  goto L_120c0c26;
L_120c0aed:;
  /* 120c0aed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0af1 je 0x120c0b01 */
  if (C.zf) goto L_120c0b01;
  /* 120c0af3 push 2 */
  push32((uint32_t)(0x2u));
  /* 120c0af5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c0af8 push eax */
  push32((uint32_t)(EAX));
  /* 120c0af9 call 0x120ad710 */
  push32(0x120c0afeu); f_120ad710();
  /* 120c0afe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120c0b01:;
  /* 120c0b01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120c0b04 jmp 0x120c0c26 */
  goto L_120c0c26;
L_120c0b09:;
  /* 120c0b09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0b0d jne 0x120c0c23 */
  if (!C.zf) goto L_120c0c23;
  /* 120c0b13 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 120c0b1d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c0b20 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 120c0b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c0b28 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 120c0b2e push edx */
  push32((uint32_t)(EDX));
  /* 120c0b2f push 0x120e1464 */
  push32((uint32_t)(0x120e1464u));
  /* 120c0b34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0b37 push eax */
  push32((uint32_t)(EAX));
  /* 120c0b38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0b3b push ecx */
  push32((uint32_t)(ECX));
  /* 120c0b3c call 0x120c1b60 */
  push32(0x120c0b41u); f_120c1b60();
  /* 120c0b41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0b44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c0b46 jne 0x120c0b50 */
  if (!C.zf) goto L_120c0b50;
  /* 120c0b48 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120c0b4b jmp 0x120c0c26 */
  goto L_120c0c26;
L_120c0b50:;
  /* 120c0b50 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 120c0b56 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 120c0b59 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 120c0b63 jmp 0x120c0b74 */
  goto L_120c0b74;
L_120c0b65:;
  /* 120c0b65 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 120c0b6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0b6e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_120c0b74:;
  /* 120c0b74 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0b7b jge 0x120c0c1f */
  if ((C.sf==C.of)) goto L_120c0c1f;
  /* 120c0b81 cmp dword ptr [0x120df010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120df010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0b88 jle 0x120c0bbb */
  if ((C.zf||C.sf!=C.of)) goto L_120c0bbb;
  /* 120c0b8a push 4 */
  push32((uint32_t)(0x4u));
  /* 120c0b8c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 120c0b92 mov dl, byte ptr [ecx*2 + 0x120e1464] */
  DL = (r8((uint32_t)(ECX*2 + 0x120e1464)));
  /* 120c0b99 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 120c0b9f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 120c0ba5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120c0baa push eax */
  push32((uint32_t)(EAX));
  /* 120c0bab call 0x120b2320 */
  push32(0x120c0bb0u); f_120b2320();
  /* 120c0bb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0bb3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 120c0bb9 jmp 0x120c0bee */
  goto L_120c0bee;
L_120c0bbb:;
  /* 120c0bbb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 120c0bc1 mov dl, byte ptr [ecx*2 + 0x120e1464] */
  DL = (r8((uint32_t)(ECX*2 + 0x120e1464)));
  /* 120c0bc8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 120c0bce mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 120c0bd4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120c0bd9 mov ecx, dword ptr [0x120df01c] */
  ECX = (r32((uint32_t)(0x120df01c)));
  /* 120c0bdf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120c0be1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120c0be5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120c0be8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_120c0bee:;
  /* 120c0bee cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0bf5 je 0x120c0c18 */
  if (C.zf) goto L_120c0c18;
  /* 120c0bf7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 120c0bfd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120c0c00 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120c0c03 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 120c0c0a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 120c0c0e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 120c0c14 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 120c0c16 jmp 0x120c0c1a */
  goto L_120c0c1a;
L_120c0c18:;
  /* 120c0c18 jmp 0x120c0c1f */
  goto L_120c0c1f;
L_120c0c1a:;
  /* 120c0c1a jmp 0x120c0b65 */
  goto L_120c0b65;
L_120c0c1f:;
  /* 120c0c1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c0c21 jmp 0x120c0c26 */
  goto L_120c0c26;
L_120c0c23:;
  /* 120c0c23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120c0c26:;
  /* 120c0c26 mov esp, ebp */
  ESP = (EBP);
  /* 120c0c28 pop ebp */
  EBP = (pop32());
  /* 120c0c29 ret  */
  ESPCHK(0x120c09a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020c30 @ 0x120c0c30 (10 bytes, 5 insns) */
void f_120c0c30(void) {
  FTRACE(0x120c0c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c0c30 push ebp */
  push32((uint32_t)(EBP));
  /* 120c0c31 mov ebp, esp */
  EBP = (ESP);
  /* 120c0c33 mov eax, dword ptr [0x120e03e0] */
  EAX = (r32((uint32_t)(0x120e03e0)));
  /* 120c0c38 pop ebp */
  EBP = (pop32());
  /* 120c0c39 ret  */
  ESPCHK(0x120c0c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10020c40 @ 0x120c0c40 (575 bytes, 196 insns) */
void f_120c0c40(void) {
  FTRACE(0x120c0c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c0c40 push ebp */
  push32((uint32_t)(EBP));
  /* 120c0c41 mov ebp, esp */
  EBP = (ESP);
  /* 120c0c43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120c0c45 push 0x120dcc60 */
  push32((uint32_t)(0x120dcc60u));
  /* 120c0c4a push 0x120b58ac */
  push32((uint32_t)(0x120b58acu));
  /* 120c0c4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120c0c55 push eax */
  push32((uint32_t)(EAX));
  /* 120c0c56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120c0c5d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0c60 push ebx */
  push32((uint32_t)(EBX));
  /* 120c0c61 push esi */
  push32((uint32_t)(ESI));
  /* 120c0c62 push edi */
  push32((uint32_t)(EDI));
  /* 120c0c63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120c0c66 cmp dword ptr [0x120e1470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0c6d jne 0x120c0cbe */
  if (!C.zf) goto L_120c0cbe;
  /* 120c0c6f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 120c0c72 push eax */
  push32((uint32_t)(EAX));
  /* 120c0c73 push 1 */
  push32((uint32_t)(0x1u));
  /* 120c0c75 push 0x120dc394 */
  push32((uint32_t)(0x120dc394u));
  /* 120c0c7a push 1 */
  push32((uint32_t)(0x1u));
  /* 120c0c7c call dword ptr [0x120e3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3374))), 0x120c0c82u);
  /* 120c0c82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c0c84 je 0x120c0c92 */
  if (C.zf) goto L_120c0c92;
  /* 120c0c86 mov dword ptr [0x120e1470], 1 */
  w32((uint32_t)(0x120e1470), (0x1u));
  /* 120c0c90 jmp 0x120c0cbe */
  goto L_120c0cbe;
L_120c0c92:;
  /* 120c0c92 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 120c0c95 push ecx */
  push32((uint32_t)(ECX));
  /* 120c0c96 push 1 */
  push32((uint32_t)(0x1u));
  /* 120c0c98 push 0x120dc390 */
  push32((uint32_t)(0x120dc390u));
  /* 120c0c9d push 1 */
  push32((uint32_t)(0x1u));
  /* 120c0c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 120c0ca1 call dword ptr [0x120e3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3378))), 0x120c0ca7u);
  /* 120c0ca7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c0ca9 je 0x120c0cb7 */
  if (C.zf) goto L_120c0cb7;
  /* 120c0cab mov dword ptr [0x120e1470], 2 */
  w32((uint32_t)(0x120e1470), (0x2u));
  /* 120c0cb5 jmp 0x120c0cbe */
  goto L_120c0cbe;
L_120c0cb7:;
  /* 120c0cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c0cb9 jmp 0x120c0e99 */
  goto L_120c0e99;
L_120c0cbe:;
  /* 120c0cbe cmp dword ptr [0x120e1470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e1470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0cc5 jne 0x120c0ce2 */
  if (!C.zf) goto L_120c0ce2;
  /* 120c0cc7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c0cca push edx */
  push32((uint32_t)(EDX));
  /* 120c0ccb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0cce push eax */
  push32((uint32_t)(EAX));
  /* 120c0ccf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 120c0cd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c0cd6 push edx */
  push32((uint32_t)(EDX));
  /* 120c0cd7 call dword ptr [0x120e3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3374))), 0x120c0cddu);
  /* 120c0cdd jmp 0x120c0e99 */
  goto L_120c0e99;
L_120c0ce2:;
  /* 120c0ce2 cmp dword ptr [0x120e1470], 2 */
  { uint32_t _a=(r32((uint32_t)(0x120e1470))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0ce9 jne 0x120c0e97 */
  if (!C.zf) goto L_120c0e97;
  /* 120c0cef cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0cf3 jne 0x120c0cfd */
  if (!C.zf) goto L_120c0cfd;
  /* 120c0cf5 mov eax, dword ptr [0x120e13f0] */
  EAX = (r32((uint32_t)(0x120e13f0)));
  /* 120c0cfa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_120c0cfd:;
  /* 120c0cfd push 0 */
  push32((uint32_t)(0x0u));
  /* 120c0cff push 0 */
  push32((uint32_t)(0x0u));
  /* 120c0d01 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c0d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c0d05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0d08 push ecx */
  push32((uint32_t)(ECX));
  /* 120c0d09 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0d0c push edx */
  push32((uint32_t)(EDX));
  /* 120c0d0d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 120c0d12 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c0d15 push eax */
  push32((uint32_t)(EAX));
  /* 120c0d16 call dword ptr [0x120e33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c4))), 0x120c0d1cu);
  /* 120c0d1c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120c0d1f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0d23 jne 0x120c0d2c */
  if (!C.zf) goto L_120c0d2c;
  /* 120c0d25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c0d27 jmp 0x120c0e99 */
  goto L_120c0e99;
L_120c0d2c:;
  /* 120c0d2c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120c0d33 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120c0d36 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0d39 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 120c0d3b call 0x120b1580 */
  push32(0x120c0d40u); f_120b1580();
  /* 120c0d40 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 120c0d43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120c0d46 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120c0d49 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 120c0d4c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120c0d4f push edx */
  push32((uint32_t)(EDX));
  /* 120c0d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c0d52 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120c0d55 push eax */
  push32((uint32_t)(EAX));
  /* 120c0d56 call 0x120b3090 */
  push32(0x120c0d5bu); f_120b3090();
  /* 120c0d5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0d5e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120c0d65 jmp 0x120c0d7e */
  goto L_120c0d7e;
  /* 120c0d67 mov eax, 1 */
  EAX = (0x1u);
  /* 120c0d6c ret  */
  ESPCHK(0x120c0c40u, _esp0);
  ESP += 4; return;
  /* 120c0d6d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120c0d70 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 120c0d77 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120c0d7e:;
  /* 120c0d7e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0d82 jne 0x120c0d8b */
  if (!C.zf) goto L_120c0d8b;
  /* 120c0d84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c0d86 jmp 0x120c0e99 */
  goto L_120c0e99;
L_120c0d8b:;
  /* 120c0d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 120c0d8d push 0 */
  push32((uint32_t)(0x0u));
  /* 120c0d8f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120c0d92 push ecx */
  push32((uint32_t)(ECX));
  /* 120c0d93 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120c0d96 push edx */
  push32((uint32_t)(EDX));
  /* 120c0d97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0d9a push eax */
  push32((uint32_t)(EAX));
  /* 120c0d9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0d9e push ecx */
  push32((uint32_t)(ECX));
  /* 120c0d9f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 120c0da4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c0da7 push edx */
  push32((uint32_t)(EDX));
  /* 120c0da8 call dword ptr [0x120e33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c4))), 0x120c0daeu);
  /* 120c0dae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c0db0 jne 0x120c0db9 */
  if (!C.zf) goto L_120c0db9;
  /* 120c0db2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c0db4 jmp 0x120c0e99 */
  goto L_120c0e99;
L_120c0db9:;
  /* 120c0db9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120c0dc0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120c0dc3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 120c0dc7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0dca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 120c0dcc call 0x120b1580 */
  push32(0x120c0dd1u); f_120b1580();
  /* 120c0dd1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 120c0dd4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120c0dd7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 120c0dda mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 120c0ddd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120c0de4 jmp 0x120c0dfd */
  goto L_120c0dfd;
  /* 120c0de6 mov eax, 1 */
  EAX = (0x1u);
  /* 120c0deb ret  */
  ESPCHK(0x120c0c40u, _esp0);
  ESP += 4; return;
  /* 120c0dec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120c0def mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 120c0df6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120c0dfd:;
  /* 120c0dfd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0e01 jne 0x120c0e0a */
  if (!C.zf) goto L_120c0e0a;
  /* 120c0e03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c0e05 jmp 0x120c0e99 */
  goto L_120c0e99;
L_120c0e0a:;
  /* 120c0e0a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0e0e jne 0x120c0e19 */
  if (!C.zf) goto L_120c0e19;
  /* 120c0e10 mov edx, dword ptr [0x120e13e0] */
  EDX = (r32((uint32_t)(0x120e13e0)));
  /* 120c0e16 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_120c0e19:;
  /* 120c0e19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0e1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120c0e1f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 120c0e25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0e28 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120c0e2b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 120c0e32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120c0e35 push ecx */
  push32((uint32_t)(ECX));
  /* 120c0e36 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120c0e39 push edx */
  push32((uint32_t)(EDX));
  /* 120c0e3a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120c0e3d push eax */
  push32((uint32_t)(EAX));
  /* 120c0e3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c0e41 push ecx */
  push32((uint32_t)(ECX));
  /* 120c0e42 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120c0e45 push edx */
  push32((uint32_t)(EDX));
  /* 120c0e46 call dword ptr [0x120e3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3378))), 0x120c0e4cu);
  /* 120c0e4c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120c0e4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0e52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120c0e55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120c0e57 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 120c0e5c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0e62 je 0x120c0e78 */
  if (C.zf) goto L_120c0e78;
  /* 120c0e64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0e67 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120c0e6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120c0e6c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120c0e70 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0e76 je 0x120c0e7c */
  if (C.zf) goto L_120c0e7c;
L_120c0e78:;
  /* 120c0e78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c0e7a jmp 0x120c0e99 */
  goto L_120c0e99;
L_120c0e7c:;
  /* 120c0e7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0e7f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120c0e81 push eax */
  push32((uint32_t)(EAX));
  /* 120c0e82 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120c0e85 push ecx */
  push32((uint32_t)(ECX));
  /* 120c0e86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c0e89 push edx */
  push32((uint32_t)(EDX));
  /* 120c0e8a call 0x120b30f0 */
  push32(0x120c0e8fu); f_120b30f0();
  /* 120c0e8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0e92 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120c0e95 jmp 0x120c0e99 */
  goto L_120c0e99;
L_120c0e97:;
  /* 120c0e97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120c0e99:;
  /* 120c0e99 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 120c0e9c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120c0e9f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120c0ea6 pop edi */
  EDI = (pop32());
  /* 120c0ea7 pop esi */
  ESI = (pop32());
  /* 120c0ea8 pop ebx */
  EBX = (pop32());
  /* 120c0ea9 mov esp, ebp */
  ESP = (EBP);
  /* 120c0eab pop ebp */
  EBP = (pop32());
  /* 120c0eac ret  */
  ESPCHK(0x120c0c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10020eb0 @ 0x120c0eb0 (208 bytes, 85 insns) */
void f_120c0eb0(void) {
  FTRACE(0x120c0eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c0eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 120c0eb1 mov ebp, esp */
  EBP = (ESP);
  /* 120c0eb3 push edi */
  push32((uint32_t)(EDI));
  /* 120c0eb4 push esi */
  push32((uint32_t)(ESI));
  /* 120c0eb5 push ebx */
  push32((uint32_t)(EBX));
  /* 120c0eb6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0eb9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120c0ebc lea eax, [0x120e13d8] */
  EAX = ((uint32_t)(0x120e13d8));
  /* 120c0ec2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0ec6 jne 0x120c0f03 */
  if (!C.zf) goto L_120c0f03;
  /* 120c0ec8 mov al, 0xff */
  AL = (0xffu);
  /* 120c0eca mov edi, edi */
  EDI = (EDI);
L_120c0ecc:;
  /* 120c0ecc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120c0ece je 0x120c0efe */
  if (C.zf) goto L_120c0efe;
  /* 120c0ed0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120c0ed2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120c0ed3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 120c0ed5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120c0ed6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c0ed8 je 0x120c0ecc */
  if (C.zf) goto L_120c0ecc;
  /* 120c0eda sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120c0edc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c0ede sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120c0ee0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 120c0ee3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120c0ee5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120c0ee7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 120c0ee9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120c0eeb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c0eed sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120c0eef and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 120c0ef2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120c0ef4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120c0ef6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c0ef8 je 0x120c0ecc */
  if (C.zf) goto L_120c0ecc;
  /* 120c0efa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120c0efc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_120c0efe:;
  /* 120c0efe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 120c0f01 jmp 0x120c0f7b */
  goto L_120c0f7b;
L_120c0f03:;
  /* 120c0f03 lock inc dword ptr [0x120e27f4] */
  x86_unimpl("lock inc @ 0x120c0f03");
  /* 120c0f0a cmp dword ptr [0x120e27e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e27e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0f11 jg 0x120c0f17 */
  if ((!C.zf&&C.sf==C.of)) goto L_120c0f17;
  /* 120c0f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c0f15 jmp 0x120c0f2c */
  goto L_120c0f2c;
L_120c0f17:;
  /* 120c0f17 lock dec dword ptr [0x120e27f4] */
  x86_unimpl("lock dec @ 0x120c0f17");
  /* 120c0f1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120c0f20 call 0x120acb80 */
  push32(0x120c0f25u); f_120acb80();
  /* 120c0f25 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_120c0f2c:;
  /* 120c0f2c mov eax, 0xff */
  EAX = (0xffu);
  /* 120c0f31 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120c0f33 nop  */
  /* nop */
L_120c0f34:;
  /* 120c0f34 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120c0f36 je 0x120c0f5f */
  if (C.zf) goto L_120c0f5f;
  /* 120c0f38 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120c0f3a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120c0f3b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 120c0f3d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120c0f3e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c0f40 je 0x120c0f34 */
  if (C.zf) goto L_120c0f34;
  /* 120c0f42 push eax */
  push32((uint32_t)(EAX));
  /* 120c0f43 push ebx */
  push32((uint32_t)(EBX));
  /* 120c0f44 call 0x120b2490 */
  push32(0x120c0f49u); f_120b2490();
  /* 120c0f49 mov ebx, eax */
  EBX = (EAX);
  /* 120c0f4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0f4e call 0x120b2490 */
  push32(0x120c0f53u); f_120b2490();
  /* 120c0f53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c0f56 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c0f58 je 0x120c0f34 */
  if (C.zf) goto L_120c0f34;
  /* 120c0f5a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c0f5c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_120c0f5f:;
  /* 120c0f5f mov ebx, eax */
  EBX = (EAX);
  /* 120c0f61 pop eax */
  EAX = (pop32());
  /* 120c0f62 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c0f64 jne 0x120c0f6f */
  if (!C.zf) goto L_120c0f6f;
  /* 120c0f66 lock dec dword ptr [0x120e27f4] */
  x86_unimpl("lock dec @ 0x120c0f66");
  /* 120c0f6d jmp 0x120c0f79 */
  goto L_120c0f79;
L_120c0f6f:;
  /* 120c0f6f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120c0f71 call 0x120acc20 */
  push32(0x120c0f76u); f_120acc20();
  /* 120c0f76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120c0f79:;
  /* 120c0f79 mov eax, ebx */
  EAX = (EBX);
L_120c0f7b:;
  /* 120c0f7b pop ebx */
  EBX = (pop32());
  /* 120c0f7c pop esi */
  ESI = (pop32());
  /* 120c0f7d pop edi */
  EDI = (pop32());
  /* 120c0f7e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120c0f7f ret  */
  ESPCHK(0x120c0eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020f80 @ 0x120c0f80 (257 bytes, 103 insns) */
void f_120c0f80(void) {
  FTRACE(0x120c0f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c0f80 push ebp */
  push32((uint32_t)(EBP));
  /* 120c0f81 mov ebp, esp */
  EBP = (ESP);
  /* 120c0f83 push edi */
  push32((uint32_t)(EDI));
  /* 120c0f84 push esi */
  push32((uint32_t)(ESI));
  /* 120c0f85 push ebx */
  push32((uint32_t)(EBX));
  /* 120c0f86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c0f89 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120c0f8b je 0x120c107a */
  if (C.zf) goto L_120c107a;
  /* 120c0f91 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120c0f94 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 120c0f97 lea eax, [0x120e13d8] */
  EAX = ((uint32_t)(0x120e13d8));
  /* 120c0f9d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0fa1 jne 0x120c0ff1 */
  if (!C.zf) goto L_120c0ff1;
  /* 120c0fa3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 120c0fa5 mov bl, 0x5a */
  BL = (0x5au);
  /* 120c0fa7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 120c0fa9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120c0fac:;
  /* 120c0fac mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 120c0fae or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 120c0fb0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 120c0fb2 je 0x120c0fd5 */
  if (C.zf) goto L_120c0fd5;
  /* 120c0fb4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120c0fb6 je 0x120c0fd5 */
  if (C.zf) goto L_120c0fd5;
  /* 120c0fb8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120c0fb9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120c0fba cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c0fbc jb 0x120c0fc4 */
  if (C.cf) goto L_120c0fc4;
  /* 120c0fbe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c0fc0 ja 0x120c0fc4 */
  if ((!C.cf&&!C.zf)) goto L_120c0fc4;
  /* 120c0fc2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_120c0fc4:;
  /* 120c0fc4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c0fc6 jb 0x120c0fce */
  if (C.cf) goto L_120c0fce;
  /* 120c0fc8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c0fca ja 0x120c0fce */
  if ((!C.cf&&!C.zf)) goto L_120c0fce;
  /* 120c0fcc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_120c0fce:;
  /* 120c0fce cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c0fd0 jne 0x120c0fdf */
  if (!C.zf) goto L_120c0fdf;
  /* 120c0fd2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120c0fd3 jne 0x120c0fac */
  if (!C.zf) goto L_120c0fac;
L_120c0fd5:;
  /* 120c0fd5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120c0fd7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c0fd9 je 0x120c107a */
  if (C.zf) goto L_120c107a;
L_120c0fdf:;
  /* 120c0fdf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 120c0fe4 jb 0x120c107a */
  if (C.cf) goto L_120c107a;
  /* 120c0fea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120c0fec jmp 0x120c107a */
  goto L_120c107a;
L_120c0ff1:;
  /* 120c0ff1 lock inc dword ptr [0x120e27f4] */
  x86_unimpl("lock inc @ 0x120c0ff1");
  /* 120c0ff8 cmp dword ptr [0x120e27e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e27e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c0fff jg 0x120c1005 */
  if ((!C.zf&&C.sf==C.of)) goto L_120c1005;
  /* 120c1001 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1003 jmp 0x120c101e */
  goto L_120c101e;
L_120c1005:;
  /* 120c1005 lock dec dword ptr [0x120e27f4] */
  x86_unimpl("lock dec @ 0x120c1005");
  /* 120c100c mov ebx, ecx */
  EBX = (ECX);
  /* 120c100e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120c1010 call 0x120acb80 */
  push32(0x120c1015u); f_120acb80();
  /* 120c1015 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 120c101c mov ecx, ebx */
  ECX = (EBX);
L_120c101e:;
  /* 120c101e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1020 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120c1022 mov edi, edi */
  EDI = (EDI);
L_120c1024:;
  /* 120c1024 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120c1026 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1028 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 120c102a je 0x120c104f */
  if (C.zf) goto L_120c104f;
  /* 120c102c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120c102e je 0x120c104f */
  if (C.zf) goto L_120c104f;
  /* 120c1030 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120c1031 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120c1032 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1033 push eax */
  push32((uint32_t)(EAX));
  /* 120c1034 push ebx */
  push32((uint32_t)(EBX));
  /* 120c1035 call 0x120b2490 */
  push32(0x120c103au); f_120b2490();
  /* 120c103a mov ebx, eax */
  EBX = (EAX);
  /* 120c103c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c103f call 0x120b2490 */
  push32(0x120c1044u); f_120b2490();
  /* 120c1044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1047 pop ecx */
  ECX = (pop32());
  /* 120c1048 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c104a jne 0x120c1055 */
  if (!C.zf) goto L_120c1055;
  /* 120c104c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120c104d jne 0x120c1024 */
  if (!C.zf) goto L_120c1024;
L_120c104f:;
  /* 120c104f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120c1051 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1053 je 0x120c105e */
  if (C.zf) goto L_120c105e;
L_120c1055:;
  /* 120c1055 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 120c105a jb 0x120c105e */
  if (C.cf) goto L_120c105e;
  /* 120c105c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_120c105e:;
  /* 120c105e pop eax */
  EAX = (pop32());
  /* 120c105f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1061 jne 0x120c106c */
  if (!C.zf) goto L_120c106c;
  /* 120c1063 lock dec dword ptr [0x120e27f4] */
  x86_unimpl("lock dec @ 0x120c1063");
  /* 120c106a jmp 0x120c107a */
  goto L_120c107a;
L_120c106c:;
  /* 120c106c mov ebx, ecx */
  EBX = (ECX);
  /* 120c106e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120c1070 call 0x120acc20 */
  push32(0x120c1075u); f_120acc20();
  /* 120c1075 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1078 mov ecx, ebx */
  ECX = (EBX);
L_120c107a:;
  /* 120c107a mov eax, ecx */
  EAX = (ECX);
  /* 120c107c pop ebx */
  EBX = (pop32());
  /* 120c107d pop esi */
  ESI = (pop32());
  /* 120c107e pop edi */
  EDI = (pop32());
  /* 120c107f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120c1080 ret  */
  ESPCHK(0x120c0f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10021090 @ 0x120c1090 (970 bytes, 340 insns) */
void f_120c1090(void) {
  FTRACE(0x120c1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c1090 push ebp */
  push32((uint32_t)(EBP));
  /* 120c1091 mov ebp, esp */
  EBP = (ESP);
  /* 120c1093 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120c1095 push 0x120dccc0 */
  push32((uint32_t)(0x120dccc0u));
  /* 120c109a push 0x120b58ac */
  push32((uint32_t)(0x120b58acu));
  /* 120c109f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120c10a5 push eax */
  push32((uint32_t)(EAX));
  /* 120c10a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120c10ad add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c10b0 push ebx */
  push32((uint32_t)(EBX));
  /* 120c10b1 push esi */
  push32((uint32_t)(ESI));
  /* 120c10b2 push edi */
  push32((uint32_t)(EDI));
  /* 120c10b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120c10b6 cmp dword ptr [0x120e1474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c10bd jne 0x120c1116 */
  if (!C.zf) goto L_120c1116;
  /* 120c10bf push 1 */
  push32((uint32_t)(0x1u));
  /* 120c10c1 push 0x120dc394 */
  push32((uint32_t)(0x120dc394u));
  /* 120c10c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 120c10c8 push 0x120dc394 */
  push32((uint32_t)(0x120dc394u));
  /* 120c10cd push 0 */
  push32((uint32_t)(0x0u));
  /* 120c10cf push 0 */
  push32((uint32_t)(0x0u));
  /* 120c10d1 call dword ptr [0x120e3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3340))), 0x120c10d7u);
  /* 120c10d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c10d9 je 0x120c10e7 */
  if (C.zf) goto L_120c10e7;
  /* 120c10db mov dword ptr [0x120e1474], 1 */
  w32((uint32_t)(0x120e1474), (0x1u));
  /* 120c10e5 jmp 0x120c1116 */
  goto L_120c1116;
L_120c10e7:;
  /* 120c10e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 120c10e9 push 0x120dc390 */
  push32((uint32_t)(0x120dc390u));
  /* 120c10ee push 1 */
  push32((uint32_t)(0x1u));
  /* 120c10f0 push 0x120dc390 */
  push32((uint32_t)(0x120dc390u));
  /* 120c10f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c10f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c10f9 call dword ptr [0x120e3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3344))), 0x120c10ffu);
  /* 120c10ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c1101 je 0x120c110f */
  if (C.zf) goto L_120c110f;
  /* 120c1103 mov dword ptr [0x120e1474], 2 */
  w32((uint32_t)(0x120e1474), (0x2u));
  /* 120c110d jmp 0x120c1116 */
  goto L_120c1116;
L_120c110f:;
  /* 120c110f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1111 jmp 0x120c1474 */
  goto L_120c1474;
L_120c1116:;
  /* 120c1116 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c111a jle 0x120c112f */
  if ((C.zf||C.sf!=C.of)) goto L_120c112f;
  /* 120c111c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c111f push eax */
  push32((uint32_t)(EAX));
  /* 120c1120 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c1123 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1124 call 0x120c1490 */
  push32(0x120c1129u); f_120c1490();
  /* 120c1129 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c112c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_120c112f:;
  /* 120c112f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1133 jle 0x120c1148 */
  if ((C.zf||C.sf!=C.of)) goto L_120c1148;
  /* 120c1135 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120c1138 push edx */
  push32((uint32_t)(EDX));
  /* 120c1139 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c113c push eax */
  push32((uint32_t)(EAX));
  /* 120c113d call 0x120c1490 */
  push32(0x120c1142u); f_120c1490();
  /* 120c1142 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1145 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_120c1148:;
  /* 120c1148 cmp dword ptr [0x120e1474], 2 */
  { uint32_t _a=(r32((uint32_t)(0x120e1474))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c114f jne 0x120c1174 */
  if (!C.zf) goto L_120c1174;
  /* 120c1151 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120c1154 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1155 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c1158 push edx */
  push32((uint32_t)(EDX));
  /* 120c1159 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c115c push eax */
  push32((uint32_t)(EAX));
  /* 120c115d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c1160 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1161 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c1164 push edx */
  push32((uint32_t)(EDX));
  /* 120c1165 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1168 push eax */
  push32((uint32_t)(EAX));
  /* 120c1169 call dword ptr [0x120e3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3344))), 0x120c116fu);
  /* 120c116f jmp 0x120c1474 */
  goto L_120c1474;
L_120c1174:;
  /* 120c1174 cmp dword ptr [0x120e1474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e1474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c117b jne 0x120c1472 */
  if (!C.zf) goto L_120c1472;
  /* 120c1181 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1185 jne 0x120c1190 */
  if (!C.zf) goto L_120c1190;
  /* 120c1187 mov ecx, dword ptr [0x120e13f0] */
  ECX = (r32((uint32_t)(0x120e13f0)));
  /* 120c118d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_120c1190:;
  /* 120c1190 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1194 je 0x120c11a0 */
  if (C.zf) goto L_120c11a0;
  /* 120c1196 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c119a jne 0x120c131c */
  if (!C.zf) goto L_120c131c;
L_120c11a0:;
  /* 120c11a0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c11a3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c11a6 jne 0x120c11b2 */
  if (!C.zf) goto L_120c11b2;
  /* 120c11a8 mov eax, 2 */
  EAX = (0x2u);
  /* 120c11ad jmp 0x120c1474 */
  goto L_120c1474;
L_120c11b2:;
  /* 120c11b2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c11b6 jle 0x120c11c2 */
  if ((C.zf||C.sf!=C.of)) goto L_120c11c2;
  /* 120c11b8 mov eax, 1 */
  EAX = (0x1u);
  /* 120c11bd jmp 0x120c1474 */
  goto L_120c1474;
L_120c11c2:;
  /* 120c11c2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c11c6 jle 0x120c11d2 */
  if ((C.zf||C.sf!=C.of)) goto L_120c11d2;
  /* 120c11c8 mov eax, 3 */
  EAX = (0x3u);
  /* 120c11cd jmp 0x120c1474 */
  goto L_120c1474;
L_120c11d2:;
  /* 120c11d2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 120c11d5 push eax */
  push32((uint32_t)(EAX));
  /* 120c11d6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 120c11d9 push ecx */
  push32((uint32_t)(ECX));
  /* 120c11da call dword ptr [0x120e338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e338c))), 0x120c11e0u);
  /* 120c11e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c11e2 jne 0x120c11eb */
  if (!C.zf) goto L_120c11eb;
  /* 120c11e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c11e6 jmp 0x120c1474 */
  goto L_120c1474;
L_120c11eb:;
  /* 120c11eb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c11ef jne 0x120c11f7 */
  if (!C.zf) goto L_120c11f7;
  /* 120c11f1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c11f5 je 0x120c1224 */
  if (C.zf) goto L_120c1224;
L_120c11f7:;
  /* 120c11f7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c11fb jne 0x120c1203 */
  if (!C.zf) goto L_120c1203;
  /* 120c11fd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1201 je 0x120c1224 */
  if (C.zf) goto L_120c1224;
L_120c1203:;
  /* 120c1203 push 0x120dcc80 */
  push32((uint32_t)(0x120dcc80u));
  /* 120c1208 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c120a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 120c120f push 0x120dcc78 */
  push32((uint32_t)(0x120dcc78u));
  /* 120c1214 push 2 */
  push32((uint32_t)(0x2u));
  /* 120c1216 call 0x120ab840 */
  push32(0x120c121bu); f_120ab840();
  /* 120c121b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c121e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1221 jne 0x120c1224 */
  if (!C.zf) goto L_120c1224;
  /* 120c1223 int3  */
  x86_unimpl("int3 @ 0x120c1223");
L_120c1224:;
  /* 120c1224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120c1226 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120c1228 jne 0x120c11eb */
  if (!C.zf) goto L_120c11eb;
  /* 120c122a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c122e jle 0x120c12a3 */
  if ((C.zf||C.sf!=C.of)) goto L_120c12a3;
  /* 120c1230 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1234 jae 0x120c1240 */
  if (!C.cf) goto L_120c1240;
  /* 120c1236 mov eax, 3 */
  EAX = (0x3u);
  /* 120c123b jmp 0x120c1474 */
  goto L_120c1474;
L_120c1240:;
  /* 120c1240 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 120c1243 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 120c1246 jmp 0x120c1251 */
  goto L_120c1251;
L_120c1248:;
  /* 120c1248 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 120c124b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c124e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_120c1251:;
  /* 120c1251 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 120c1254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1256 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120c1258 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c125a je 0x120c1299 */
  if (C.zf) goto L_120c1299;
  /* 120c125c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 120c125f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120c1261 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 120c1264 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120c1266 je 0x120c1299 */
  if (C.zf) goto L_120c1299;
  /* 120c1268 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c126b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120c126d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120c126f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 120c1272 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1274 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120c1276 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1278 jl 0x120c1297 */
  if ((C.sf!=C.of)) goto L_120c1297;
  /* 120c127a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c127d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120c127f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120c1281 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 120c1284 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120c1286 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 120c1289 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c128b jg 0x120c1297 */
  if ((!C.zf&&C.sf==C.of)) goto L_120c1297;
  /* 120c128d mov eax, 2 */
  EAX = (0x2u);
  /* 120c1292 jmp 0x120c1474 */
  goto L_120c1474;
L_120c1297:;
  /* 120c1297 jmp 0x120c1248 */
  goto L_120c1248;
L_120c1299:;
  /* 120c1299 mov eax, 3 */
  EAX = (0x3u);
  /* 120c129e jmp 0x120c1474 */
  goto L_120c1474;
L_120c12a3:;
  /* 120c12a3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c12a7 jle 0x120c131c */
  if ((C.zf||C.sf!=C.of)) goto L_120c131c;
  /* 120c12a9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c12ad jae 0x120c12b9 */
  if (!C.cf) goto L_120c12b9;
  /* 120c12af mov eax, 1 */
  EAX = (0x1u);
  /* 120c12b4 jmp 0x120c1474 */
  goto L_120c1474;
L_120c12b9:;
  /* 120c12b9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 120c12bc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 120c12bf jmp 0x120c12ca */
  goto L_120c12ca;
L_120c12c1:;
  /* 120c12c1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 120c12c4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c12c7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_120c12ca:;
  /* 120c12ca mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 120c12cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120c12cf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120c12d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120c12d3 je 0x120c1312 */
  if (C.zf) goto L_120c1312;
  /* 120c12d5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 120c12d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120c12da mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 120c12dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120c12df je 0x120c1312 */
  if (C.zf) goto L_120c1312;
  /* 120c12e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c12e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c12e6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120c12e8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 120c12eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120c12ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120c12ef cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c12f1 jl 0x120c1310 */
  if ((C.sf!=C.of)) goto L_120c1310;
  /* 120c12f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c12f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120c12f8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120c12fa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 120c12fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c12ff mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 120c1302 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1304 jg 0x120c1310 */
  if ((!C.zf&&C.sf==C.of)) goto L_120c1310;
  /* 120c1306 mov eax, 2 */
  EAX = (0x2u);
  /* 120c130b jmp 0x120c1474 */
  goto L_120c1474;
L_120c1310:;
  /* 120c1310 jmp 0x120c12c1 */
  goto L_120c12c1;
L_120c1312:;
  /* 120c1312 mov eax, 1 */
  EAX = (0x1u);
  /* 120c1317 jmp 0x120c1474 */
  goto L_120c1474;
L_120c131c:;
  /* 120c131c push 0 */
  push32((uint32_t)(0x0u));
  /* 120c131e push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1320 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c1323 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1324 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c1327 push edx */
  push32((uint32_t)(EDX));
  /* 120c1328 push 9 */
  push32((uint32_t)(0x9u));
  /* 120c132a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120c132d push eax */
  push32((uint32_t)(EAX));
  /* 120c132e call dword ptr [0x120e337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e337c))), 0x120c1334u);
  /* 120c1334 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120c1337 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c133b jne 0x120c1344 */
  if (!C.zf) goto L_120c1344;
  /* 120c133d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c133f jmp 0x120c1474 */
  goto L_120c1474;
L_120c1344:;
  /* 120c1344 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120c134b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120c134e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120c1350 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1353 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 120c1355 call 0x120b1580 */
  push32(0x120c135au); f_120b1580();
  /* 120c135a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 120c135d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120c1360 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 120c1363 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 120c1366 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120c136d jmp 0x120c1386 */
  goto L_120c1386;
  /* 120c136f mov eax, 1 */
  EAX = (0x1u);
  /* 120c1374 ret  */
  ESPCHK(0x120c1090u, _esp0);
  ESP += 4; return;
  /* 120c1375 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120c1378 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 120c137f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120c1386:;
  /* 120c1386 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c138a jne 0x120c1393 */
  if (!C.zf) goto L_120c1393;
  /* 120c138c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c138e jmp 0x120c1474 */
  goto L_120c1474;
L_120c1393:;
  /* 120c1393 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120c1396 push edx */
  push32((uint32_t)(EDX));
  /* 120c1397 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120c139a push eax */
  push32((uint32_t)(EAX));
  /* 120c139b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c139e push ecx */
  push32((uint32_t)(ECX));
  /* 120c139f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c13a2 push edx */
  push32((uint32_t)(EDX));
  /* 120c13a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120c13a5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120c13a8 push eax */
  push32((uint32_t)(EAX));
  /* 120c13a9 call dword ptr [0x120e337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e337c))), 0x120c13afu);
  /* 120c13af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c13b1 jne 0x120c13ba */
  if (!C.zf) goto L_120c13ba;
  /* 120c13b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c13b5 jmp 0x120c1474 */
  goto L_120c1474;
L_120c13ba:;
  /* 120c13ba push 0 */
  push32((uint32_t)(0x0u));
  /* 120c13bc push 0 */
  push32((uint32_t)(0x0u));
  /* 120c13be mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120c13c1 push ecx */
  push32((uint32_t)(ECX));
  /* 120c13c2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c13c5 push edx */
  push32((uint32_t)(EDX));
  /* 120c13c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 120c13c8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120c13cb push eax */
  push32((uint32_t)(EAX));
  /* 120c13cc call dword ptr [0x120e337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e337c))), 0x120c13d2u);
  /* 120c13d2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120c13d5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c13d9 jne 0x120c13e2 */
  if (!C.zf) goto L_120c13e2;
  /* 120c13db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c13dd jmp 0x120c1474 */
  goto L_120c1474;
L_120c13e2:;
  /* 120c13e2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120c13e9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120c13ec shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120c13ee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c13f1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 120c13f3 call 0x120b1580 */
  push32(0x120c13f8u); f_120b1580();
  /* 120c13f8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 120c13fb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120c13fe mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 120c1401 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 120c1404 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120c140b jmp 0x120c1424 */
  goto L_120c1424;
  /* 120c140d mov eax, 1 */
  EAX = (0x1u);
  /* 120c1412 ret  */
  ESPCHK(0x120c1090u, _esp0);
  ESP += 4; return;
  /* 120c1413 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120c1416 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 120c141d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120c1424:;
  /* 120c1424 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1428 jne 0x120c142e */
  if (!C.zf) goto L_120c142e;
  /* 120c142a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c142c jmp 0x120c1474 */
  goto L_120c1474;
L_120c142e:;
  /* 120c142e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 120c1431 push edx */
  push32((uint32_t)(EDX));
  /* 120c1432 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120c1435 push eax */
  push32((uint32_t)(EAX));
  /* 120c1436 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120c1439 push ecx */
  push32((uint32_t)(ECX));
  /* 120c143a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c143d push edx */
  push32((uint32_t)(EDX));
  /* 120c143e push 1 */
  push32((uint32_t)(0x1u));
  /* 120c1440 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120c1443 push eax */
  push32((uint32_t)(EAX));
  /* 120c1444 call dword ptr [0x120e337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e337c))), 0x120c144au);
  /* 120c144a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c144c jne 0x120c1452 */
  if (!C.zf) goto L_120c1452;
  /* 120c144e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1450 jmp 0x120c1474 */
  goto L_120c1474;
L_120c1452:;
  /* 120c1452 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120c1455 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1456 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120c1459 push edx */
  push32((uint32_t)(EDX));
  /* 120c145a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120c145d push eax */
  push32((uint32_t)(EAX));
  /* 120c145e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120c1461 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1462 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c1465 push edx */
  push32((uint32_t)(EDX));
  /* 120c1466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1469 push eax */
  push32((uint32_t)(EAX));
  /* 120c146a call dword ptr [0x120e3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3340))), 0x120c1470u);
  /* 120c1470 jmp 0x120c1474 */
  goto L_120c1474;
L_120c1472:;
  /* 120c1472 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120c1474:;
  /* 120c1474 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 120c1477 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120c147a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120c1481 pop edi */
  EDI = (pop32());
  /* 120c1482 pop esi */
  ESI = (pop32());
  /* 120c1483 pop ebx */
  EBX = (pop32());
  /* 120c1484 mov esp, ebp */
  ESP = (EBP);
  /* 120c1486 pop ebp */
  EBP = (pop32());
  /* 120c1487 ret  */
  ESPCHK(0x120c1090u, _esp0);
  ESP += 4; return;
}

/* FUN_10021490 @ 0x120c1490 (80 bytes, 32 insns) */
void f_120c1490(void) {
  FTRACE(0x120c1490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c1490 push ebp */
  push32((uint32_t)(EBP));
  /* 120c1491 mov ebp, esp */
  EBP = (ESP);
  /* 120c1493 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c1496 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c1499 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120c149c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c149f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120c14a2:;
  /* 120c14a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c14a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c14a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c14ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120c14ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120c14b0 je 0x120c14c7 */
  if (C.zf) goto L_120c14c7;
  /* 120c14b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c14b5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120c14b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120c14ba je 0x120c14c7 */
  if (C.zf) goto L_120c14c7;
  /* 120c14bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c14bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c14c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120c14c5 jmp 0x120c14a2 */
  goto L_120c14a2;
L_120c14c7:;
  /* 120c14c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c14ca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120c14cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120c14cf jne 0x120c14d9 */
  if (!C.zf) goto L_120c14d9;
  /* 120c14d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c14d4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c14d7 jmp 0x120c14dc */
  goto L_120c14dc;
L_120c14d9:;
  /* 120c14d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_120c14dc:;
  /* 120c14dc mov esp, ebp */
  ESP = (EBP);
  /* 120c14de pop ebp */
  EBP = (pop32());
  /* 120c14df ret  */
  ESPCHK(0x120c1490u, _esp0);
  ESP += 4; return;
}

/* FUN_100214e0 @ 0x120c14e0 (736 bytes, 224 insns) */
void f_120c14e0(void) {
  FTRACE(0x120c14e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c14e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120c14e1 mov ebp, esp */
  EBP = (ESP);
  /* 120c14e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c14e6 push esi */
  push32((uint32_t)(ESI));
  /* 120c14e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c14eb je 0x120c150c */
  if (C.zf) goto L_120c150c;
  /* 120c14ed push 0x3d */
  push32((uint32_t)(0x3du));
  /* 120c14ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c14f2 push eax */
  push32((uint32_t)(EAX));
  /* 120c14f3 call 0x120c1eb0 */
  push32(0x120c14f8u); f_120c1eb0();
  /* 120c14f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c14fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120c14fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1502 je 0x120c150c */
  if (C.zf) goto L_120c150c;
  /* 120c1504 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1507 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c150a jne 0x120c1514 */
  if (!C.zf) goto L_120c1514;
L_120c150c:;
  /* 120c150c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120c150f jmp 0x120c17bb */
  goto L_120c17bb;
L_120c1514:;
  /* 120c1514 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120c1517 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 120c151b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120c151d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c151f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120c1520 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120c1523 mov ecx, dword ptr [0x120e11a4] */
  ECX = (r32((uint32_t)(0x120e11a4)));
  /* 120c1529 cmp ecx, dword ptr [0x120e11a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120e11a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c152f jne 0x120c1545 */
  if (!C.zf) goto L_120c1545;
  /* 120c1531 mov edx, dword ptr [0x120e11a4] */
  EDX = (r32((uint32_t)(0x120e11a4)));
  /* 120c1537 push edx */
  push32((uint32_t)(EDX));
  /* 120c1538 call 0x120c1840 */
  push32(0x120c153du); f_120c1840();
  /* 120c153d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1540 mov dword ptr [0x120e11a4], eax */
  w32((uint32_t)(0x120e11a4), (EAX));
L_120c1545:;
  /* 120c1545 cmp dword ptr [0x120e11a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e11a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c154c jne 0x120c1605 */
  if (!C.zf) goto L_120c1605;
  /* 120c1552 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1556 je 0x120c1577 */
  if (C.zf) goto L_120c1577;
  /* 120c1558 cmp dword ptr [0x120e11ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e11ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c155f je 0x120c1577 */
  if (C.zf) goto L_120c1577;
  /* 120c1561 call 0x120beb20 */
  push32(0x120c1566u); f_120beb20();
  /* 120c1566 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c1568 je 0x120c1572 */
  if (C.zf) goto L_120c1572;
  /* 120c156a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120c156d jmp 0x120c17bb */
  goto L_120c17bb;
L_120c1572:;
  /* 120c1572 jmp 0x120c1605 */
  goto L_120c1605;
L_120c1577:;
  /* 120c1577 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c157b je 0x120c1584 */
  if (C.zf) goto L_120c1584;
  /* 120c157d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c157f jmp 0x120c17bb */
  goto L_120c17bb;
L_120c1584:;
  /* 120c1584 cmp dword ptr [0x120e11a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e11a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c158b jne 0x120c15c4 */
  if (!C.zf) goto L_120c15c4;
  /* 120c158d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 120c1592 push 0x120dccd8 */
  push32((uint32_t)(0x120dccd8u));
  /* 120c1597 push 2 */
  push32((uint32_t)(0x2u));
  /* 120c1599 push 4 */
  push32((uint32_t)(0x4u));
  /* 120c159b call 0x120acc80 */
  push32(0x120c15a0u); f_120acc80();
  /* 120c15a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c15a3 mov dword ptr [0x120e11a4], eax */
  w32((uint32_t)(0x120e11a4), (EAX));
  /* 120c15a8 cmp dword ptr [0x120e11a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e11a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c15af jne 0x120c15b9 */
  if (!C.zf) goto L_120c15b9;
  /* 120c15b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120c15b4 jmp 0x120c17bb */
  goto L_120c17bb;
L_120c15b9:;
  /* 120c15b9 mov eax, dword ptr [0x120e11a4] */
  EAX = (r32((uint32_t)(0x120e11a4)));
  /* 120c15be mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_120c15c4:;
  /* 120c15c4 cmp dword ptr [0x120e11ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e11ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c15cb jne 0x120c1605 */
  if (!C.zf) goto L_120c1605;
  /* 120c15cd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 120c15d2 push 0x120dccd8 */
  push32((uint32_t)(0x120dccd8u));
  /* 120c15d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 120c15d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 120c15db call 0x120acc80 */
  push32(0x120c15e0u); f_120acc80();
  /* 120c15e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c15e3 mov dword ptr [0x120e11ac], eax */
  w32((uint32_t)(0x120e11ac), (EAX));
  /* 120c15e8 cmp dword ptr [0x120e11ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e11ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c15ef jne 0x120c15f9 */
  if (!C.zf) goto L_120c15f9;
  /* 120c15f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120c15f4 jmp 0x120c17bb */
  goto L_120c17bb;
L_120c15f9:;
  /* 120c15f9 mov ecx, dword ptr [0x120e11ac] */
  ECX = (r32((uint32_t)(0x120e11ac)));
  /* 120c15ff mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_120c1605:;
  /* 120c1605 mov edx, dword ptr [0x120e11a4] */
  EDX = (r32((uint32_t)(0x120e11a4)));
  /* 120c160b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120c160e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120c1611 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c1614 push eax */
  push32((uint32_t)(EAX));
  /* 120c1615 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1618 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1619 call 0x120c17c0 */
  push32(0x120c161eu); f_120c17c0();
  /* 120c161e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1621 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120c1624 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1628 jl 0x120c16c1 */
  if ((C.sf!=C.of)) goto L_120c16c1;
  /* 120c162e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c1631 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1634 je 0x120c16c1 */
  if (C.zf) goto L_120c16c1;
  /* 120c163a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c163e je 0x120c16b3 */
  if (C.zf) goto L_120c16b3;
  /* 120c1640 push 2 */
  push32((uint32_t)(0x2u));
  /* 120c1642 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c1645 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c1648 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120c164b push edx */
  push32((uint32_t)(EDX));
  /* 120c164c call 0x120ad710 */
  push32(0x120c1651u); f_120ad710();
  /* 120c1651 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1654 jmp 0x120c165f */
  goto L_120c165f;
L_120c1656:;
  /* 120c1656 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c1659 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c165c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120c165f:;
  /* 120c165f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c1662 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c1665 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1669 je 0x120c1680 */
  if (C.zf) goto L_120c1680;
  /* 120c166b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c166e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c1671 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c1674 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 120c1677 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 120c167b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 120c167e jmp 0x120c1656 */
  goto L_120c1656;
L_120c1680:;
  /* 120c1680 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 120c1685 push 0x120dccd8 */
  push32((uint32_t)(0x120dccd8u));
  /* 120c168a push 2 */
  push32((uint32_t)(0x2u));
  /* 120c168c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c168f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120c1692 push eax */
  push32((uint32_t)(EAX));
  /* 120c1693 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c1696 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1697 call 0x120ad110 */
  push32(0x120c169cu); f_120ad110();
  /* 120c169c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c169f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120c16a2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c16a6 je 0x120c16b1 */
  if (C.zf) goto L_120c16b1;
  /* 120c16a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c16ab mov dword ptr [0x120e11a4], edx */
  w32((uint32_t)(0x120e11a4), (EDX));
L_120c16b1:;
  /* 120c16b1 jmp 0x120c16bf */
  goto L_120c16bf;
L_120c16b3:;
  /* 120c16b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c16b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c16b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c16bc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_120c16bf:;
  /* 120c16bf jmp 0x120c1734 */
  goto L_120c1734;
L_120c16c1:;
  /* 120c16c1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c16c5 jne 0x120c172d */
  if (!C.zf) goto L_120c172d;
  /* 120c16c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c16cb jge 0x120c16d5 */
  if ((C.sf==C.of)) goto L_120c16d5;
  /* 120c16cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c16d0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120c16d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120c16d5:;
  /* 120c16d5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 120c16da push 0x120dccd8 */
  push32((uint32_t)(0x120dccd8u));
  /* 120c16df push 2 */
  push32((uint32_t)(0x2u));
  /* 120c16e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c16e4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 120c16eb push edx */
  push32((uint32_t)(EDX));
  /* 120c16ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c16ef push eax */
  push32((uint32_t)(EAX));
  /* 120c16f0 call 0x120ad110 */
  push32(0x120c16f5u); f_120ad110();
  /* 120c16f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c16f8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120c16fb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c16ff jne 0x120c1709 */
  if (!C.zf) goto L_120c1709;
  /* 120c1701 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120c1704 jmp 0x120c17bb */
  goto L_120c17bb;
L_120c1709:;
  /* 120c1709 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c170c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c170f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1712 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 120c1715 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c1718 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c171b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 120c1723 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c1726 mov dword ptr [0x120e11a4], eax */
  w32((uint32_t)(0x120e11a4), (EAX));
  /* 120c172b jmp 0x120c1734 */
  goto L_120c1734;
L_120c172d:;
  /* 120c172d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c172f jmp 0x120c17bb */
  goto L_120c17bb;
L_120c1734:;
  /* 120c1734 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1738 je 0x120c17b9 */
  if (C.zf) goto L_120c17b9;
  /* 120c173a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 120c173f push 0x120dccd8 */
  push32((uint32_t)(0x120dccd8u));
  /* 120c1744 push 2 */
  push32((uint32_t)(0x2u));
  /* 120c1746 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1749 push ecx */
  push32((uint32_t)(ECX));
  /* 120c174a call 0x120b1210 */
  push32(0x120c174fu); f_120b1210();
  /* 120c174f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1752 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1755 push eax */
  push32((uint32_t)(EAX));
  /* 120c1756 call 0x120acc80 */
  push32(0x120c175bu); f_120acc80();
  /* 120c175b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c175e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120c1761 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1765 je 0x120c17b9 */
  if (C.zf) goto L_120c17b9;
  /* 120c1767 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c176a push edx */
  push32((uint32_t)(EDX));
  /* 120c176b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120c176e push eax */
  push32((uint32_t)(EAX));
  /* 120c176f call 0x120b1390 */
  push32(0x120c1774u); f_120b1390();
  /* 120c1774 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1777 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120c177a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c177d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120c1780 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1782 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120c1785 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c1788 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 120c178b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c178e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1791 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120c1794 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120c1797 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120c1799 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c179b not edx */
  EDX = (~(EDX));
  /* 120c179d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 120c17a0 push edx */
  push32((uint32_t)(EDX));
  /* 120c17a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120c17a4 push eax */
  push32((uint32_t)(EAX));
  /* 120c17a5 call dword ptr [0x120e333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e333c))), 0x120c17abu);
  /* 120c17ab push 2 */
  push32((uint32_t)(0x2u));
  /* 120c17ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120c17b0 push ecx */
  push32((uint32_t)(ECX));
  /* 120c17b1 call 0x120ad710 */
  push32(0x120c17b6u); f_120ad710();
  /* 120c17b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120c17b9:;
  /* 120c17b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120c17bb:;
  /* 120c17bb pop esi */
  ESI = (pop32());
  /* 120c17bc mov esp, ebp */
  ESP = (EBP);
  /* 120c17be pop ebp */
  EBP = (pop32());
  /* 120c17bf ret  */
  ESPCHK(0x120c14e0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x120c17c0 (124 bytes, 47 insns) */
void f_120c17c0(void) {
  FTRACE(0x120c17c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c17c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120c17c1 mov ebp, esp */
  EBP = (ESP);
  /* 120c17c3 push ecx */
  push32((uint32_t)(ECX));
  /* 120c17c4 mov eax, dword ptr [0x120e11a4] */
  EAX = (r32((uint32_t)(0x120e11a4)));
  /* 120c17c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120c17cc jmp 0x120c17d7 */
  goto L_120c17d7;
L_120c17ce:;
  /* 120c17ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c17d1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c17d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120c17d7:;
  /* 120c17d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c17da cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c17dd je 0x120c182a */
  if (C.zf) goto L_120c182a;
  /* 120c17df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c17e2 push eax */
  push32((uint32_t)(EAX));
  /* 120c17e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c17e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120c17e8 push edx */
  push32((uint32_t)(EDX));
  /* 120c17e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c17ec push eax */
  push32((uint32_t)(EAX));
  /* 120c17ed call 0x120bead0 */
  push32(0x120c17f2u); f_120bead0();
  /* 120c17f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c17f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c17f7 jne 0x120c1828 */
  if (!C.zf) goto L_120c1828;
  /* 120c17f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c17fc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120c17fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c1801 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 120c1805 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1808 je 0x120c181a */
  if (C.zf) goto L_120c181a;
  /* 120c180a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c180d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120c180f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c1812 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 120c1816 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120c1818 jne 0x120c1828 */
  if (!C.zf) goto L_120c1828;
L_120c181a:;
  /* 120c181a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c181d sub eax, dword ptr [0x120e11a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120e11a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c1823 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120c1826 jmp 0x120c1838 */
  goto L_120c1838;
L_120c1828:;
  /* 120c1828 jmp 0x120c17ce */
  goto L_120c17ce;
L_120c182a:;
  /* 120c182a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c182d sub eax, dword ptr [0x120e11a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120e11a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c1833 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120c1836 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120c1838:;
  /* 120c1838 mov esp, ebp */
  ESP = (EBP);
  /* 120c183a pop ebp */
  EBP = (pop32());
  /* 120c183b ret  */
  ESPCHK(0x120c17c0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x120c1840 (238 bytes, 80 insns) */
void f_120c1840(void) {
  FTRACE(0x120c1840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c1840 push ebp */
  push32((uint32_t)(EBP));
  /* 120c1841 mov ebp, esp */
  EBP = (ESP);
  /* 120c1843 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c1846 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120c184d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1850 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120c1853 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1857 jne 0x120c1860 */
  if (!C.zf) goto L_120c1860;
  /* 120c1859 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c185b jmp 0x120c192a */
  goto L_120c192a;
L_120c1860:;
  /* 120c1860 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c1863 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120c1865 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c1868 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c186b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120c186e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120c1870 je 0x120c187d */
  if (C.zf) goto L_120c187d;
  /* 120c1872 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120c1875 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1878 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120c187b jmp 0x120c1860 */
  goto L_120c1860;
L_120c187d:;
  /* 120c187d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 120c1882 push 0x120dccd8 */
  push32((uint32_t)(0x120dccd8u));
  /* 120c1887 push 2 */
  push32((uint32_t)(0x2u));
  /* 120c1889 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120c188c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 120c1893 push eax */
  push32((uint32_t)(EAX));
  /* 120c1894 call 0x120acc80 */
  push32(0x120c1899u); f_120acc80();
  /* 120c1899 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c189c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120c189f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c18a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120c18a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c18a9 jne 0x120c18b5 */
  if (!C.zf) goto L_120c18b5;
  /* 120c18ab push 9 */
  push32((uint32_t)(0x9u));
  /* 120c18ad call 0x120ab6f0 */
  push32(0x120c18b2u); f_120ab6f0();
  /* 120c18b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120c18b5:;
  /* 120c18b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c18b8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_120c18bb:;
  /* 120c18bb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c18be cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c18c1 je 0x120c191e */
  if (C.zf) goto L_120c191e;
  /* 120c18c3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 120c18c8 push 0x120dccd8 */
  push32((uint32_t)(0x120dccd8u));
  /* 120c18cd push 2 */
  push32((uint32_t)(0x2u));
  /* 120c18cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c18d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120c18d4 push edx */
  push32((uint32_t)(EDX));
  /* 120c18d5 call 0x120b1210 */
  push32(0x120c18dau); f_120b1210();
  /* 120c18da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c18dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c18e0 push eax */
  push32((uint32_t)(EAX));
  /* 120c18e1 call 0x120acc80 */
  push32(0x120c18e6u); f_120acc80();
  /* 120c18e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c18e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c18ec mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120c18ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c18f1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c18f4 je 0x120c190a */
  if (C.zf) goto L_120c190a;
  /* 120c18f6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c18f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120c18fb push ecx */
  push32((uint32_t)(ECX));
  /* 120c18fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c18ff mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120c1901 push eax */
  push32((uint32_t)(EAX));
  /* 120c1902 call 0x120b1390 */
  push32(0x120c1907u); f_120b1390();
  /* 120c1907 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120c190a:;
  /* 120c190a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120c190d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1910 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120c1913 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c1916 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1919 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120c191c jmp 0x120c18bb */
  goto L_120c18bb;
L_120c191e:;
  /* 120c191e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c1921 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120c1927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120c192a:;
  /* 120c192a mov esp, ebp */
  ESP = (EBP);
  /* 120c192c pop ebp */
  EBP = (pop32());
  /* 120c192d ret  */
  ESPCHK(0x120c1840u, _esp0);
  ESP += 4; return;
}

/* FUN_10021930 @ 0x120c1930 (130 bytes, 50 insns) */
void f_120c1930(void) {
  FTRACE(0x120c1930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c1930 push ebp */
  push32((uint32_t)(EBP));
  /* 120c1931 mov ebp, esp */
  EBP = (ESP);
  /* 120c1933 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1934 push ebx */
  push32((uint32_t)(EBX));
  /* 120c1935 push esi */
  push32((uint32_t)(ESI));
  /* 120c1936 push edi */
  push32((uint32_t)(EDI));
  /* 120c1937 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120c193e:;
  /* 120c193e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1942 jne 0x120c1962 */
  if (!C.zf) goto L_120c1962;
  /* 120c1944 push 0x120dccf0 */
  push32((uint32_t)(0x120dccf0u));
  /* 120c1949 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c194b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 120c194d push 0x120dcce4 */
  push32((uint32_t)(0x120dcce4u));
  /* 120c1952 push 2 */
  push32((uint32_t)(0x2u));
  /* 120c1954 call 0x120ab840 */
  push32(0x120c1959u); f_120ab840();
  /* 120c1959 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c195c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c195f jne 0x120c1962 */
  if (!C.zf) goto L_120c1962;
  /* 120c1961 int3  */
  x86_unimpl("int3 @ 0x120c1961");
L_120c1962:;
  /* 120c1962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1964 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c1966 jne 0x120c193e */
  if (!C.zf) goto L_120c193e;
  /* 120c1968 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c196b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120c196e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 120c1971 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120c1973 je 0x120c1981 */
  if (C.zf) goto L_120c1981;
  /* 120c1975 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1978 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 120c197f jmp 0x120c19a8 */
  goto L_120c19a8;
L_120c1981:;
  /* 120c1981 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1984 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1985 call 0x120bbdb0 */
  push32(0x120c198au); f_120bbdb0();
  /* 120c198a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c198d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1990 push edx */
  push32((uint32_t)(EDX));
  /* 120c1991 call 0x120c19c0 */
  push32(0x120c1996u); f_120c19c0();
  /* 120c1996 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1999 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120c199c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c199f push eax */
  push32((uint32_t)(EAX));
  /* 120c19a0 call 0x120bbe20 */
  push32(0x120c19a5u); f_120bbe20();
  /* 120c19a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120c19a8:;
  /* 120c19a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c19ab pop edi */
  EDI = (pop32());
  /* 120c19ac pop esi */
  ESI = (pop32());
  /* 120c19ad pop ebx */
  EBX = (pop32());
  /* 120c19ae mov esp, ebp */
  ESP = (EBP);
  /* 120c19b0 pop ebp */
  EBP = (pop32());
  /* 120c19b1 ret  */
  ESPCHK(0x120c1930u, _esp0);
  ESP += 4; return;
}

/* FUN_100219c0 @ 0x120c19c0 (190 bytes, 67 insns) */
void f_120c19c0(void) {
  FTRACE(0x120c19c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c19c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120c19c1 mov ebp, esp */
  EBP = (ESP);
  /* 120c19c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c19c6 push ebx */
  push32((uint32_t)(EBX));
  /* 120c19c7 push esi */
  push32((uint32_t)(ESI));
  /* 120c19c8 push edi */
  push32((uint32_t)(EDI));
  /* 120c19c9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120c19d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c19d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120c19d6:;
  /* 120c19d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c19da jne 0x120c19fa */
  if (!C.zf) goto L_120c19fa;
  /* 120c19dc push 0x120dc240 */
  push32((uint32_t)(0x120dc240u));
  /* 120c19e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c19e3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 120c19e5 push 0x120dcce4 */
  push32((uint32_t)(0x120dcce4u));
  /* 120c19ea push 2 */
  push32((uint32_t)(0x2u));
  /* 120c19ec call 0x120ab840 */
  push32(0x120c19f1u); f_120ab840();
  /* 120c19f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c19f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c19f7 jne 0x120c19fa */
  if (!C.zf) goto L_120c19fa;
  /* 120c19f9 int3  */
  x86_unimpl("int3 @ 0x120c19f9");
L_120c19fa:;
  /* 120c19fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120c19fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120c19fe jne 0x120c19d6 */
  if (!C.zf) goto L_120c19d6;
  /* 120c1a00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c1a03 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120c1a06 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 120c1a0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c1a0d je 0x120c1a6a */
  if (C.zf) goto L_120c1a6a;
  /* 120c1a0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c1a12 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1a13 call 0x120bf320 */
  push32(0x120c1a18u); f_120bf320();
  /* 120c1a18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1a1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120c1a1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c1a21 push edx */
  push32((uint32_t)(EDX));
  /* 120c1a22 call 0x120c20d0 */
  push32(0x120c1a27u); f_120c20d0();
  /* 120c1a27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1a2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c1a2d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120c1a30 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1a31 call 0x120c1fa0 */
  push32(0x120c1a36u); f_120c1fa0();
  /* 120c1a36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c1a3b jge 0x120c1a46 */
  if ((C.sf==C.of)) goto L_120c1a46;
  /* 120c1a3d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120c1a44 jmp 0x120c1a6a */
  goto L_120c1a6a;
L_120c1a46:;
  /* 120c1a46 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c1a49 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1a4d je 0x120c1a6a */
  if (C.zf) goto L_120c1a6a;
  /* 120c1a4f push 2 */
  push32((uint32_t)(0x2u));
  /* 120c1a51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c1a54 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120c1a57 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1a58 call 0x120ad710 */
  push32(0x120c1a5du); f_120ad710();
  /* 120c1a5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1a60 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c1a63 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_120c1a6a:;
  /* 120c1a6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120c1a6d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 120c1a74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c1a77 pop edi */
  EDI = (pop32());
  /* 120c1a78 pop esi */
  ESI = (pop32());
  /* 120c1a79 pop ebx */
  EBX = (pop32());
  /* 120c1a7a mov esp, ebp */
  ESP = (EBP);
  /* 120c1a7c pop ebp */
  EBP = (pop32());
  /* 120c1a7d ret  */
  ESPCHK(0x120c19c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10021a80 @ 0x120c1a80 (210 bytes, 63 insns) */
void f_120c1a80(void) {
  FTRACE(0x120c1a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c1a80 push ebp */
  push32((uint32_t)(EBP));
  /* 120c1a81 mov ebp, esp */
  EBP = (ESP);
  /* 120c1a83 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1a84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1a87 cmp eax, dword ptr [0x120e2bfc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120e2bfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1a8d jae 0x120c1ab1 */
  if (!C.cf) goto L_120c1ab1;
  /* 120c1a8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1a92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120c1a95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1a98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120c1a9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120c1a9e mov eax, dword ptr [ecx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120e2ac0)));
  /* 120c1aa5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 120c1aaa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120c1aad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120c1aaf jne 0x120c1ac4 */
  if (!C.zf) goto L_120c1ac4;
L_120c1ab1:;
  /* 120c1ab1 call 0x120b8310 */
  push32(0x120c1ab6u); f_120b8310();
  /* 120c1ab6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120c1abc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120c1abf jmp 0x120c1b4e */
  goto L_120c1b4e;
L_120c1ac4:;
  /* 120c1ac4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1ac7 push edx */
  push32((uint32_t)(EDX));
  /* 120c1ac8 call 0x120bf0e0 */
  push32(0x120c1acdu); f_120bf0e0();
  /* 120c1acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1ad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1ad3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120c1ad6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1ad9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 120c1adc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120c1adf mov edx, dword ptr [eax*4 + 0x120e2ac0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120e2ac0)));
  /* 120c1ae6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 120c1aeb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120c1aee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c1af0 je 0x120c1b2d */
  if (C.zf) goto L_120c1b2d;
  /* 120c1af2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1af5 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1af6 call 0x120bef60 */
  push32(0x120c1afbu); f_120bef60();
  /* 120c1afb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1afe push eax */
  push32((uint32_t)(EAX));
  /* 120c1aff call dword ptr [0x120e3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3338))), 0x120c1b05u);
  /* 120c1b05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c1b07 jne 0x120c1b14 */
  if (!C.zf) goto L_120c1b14;
  /* 120c1b09 call dword ptr [0x120e33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33e8))), 0x120c1b0fu);
  /* 120c1b0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120c1b12 jmp 0x120c1b1b */
  goto L_120c1b1b;
L_120c1b14:;
  /* 120c1b14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120c1b1b:;
  /* 120c1b1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1b1f jne 0x120c1b23 */
  if (!C.zf) goto L_120c1b23;
  /* 120c1b21 jmp 0x120c1b3f */
  goto L_120c1b3f;
L_120c1b23:;
  /* 120c1b23 call 0x120b8320 */
  push32(0x120c1b28u); f_120b8320();
  /* 120c1b28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c1b2b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_120c1b2d:;
  /* 120c1b2d call 0x120b8310 */
  push32(0x120c1b32u); f_120b8310();
  /* 120c1b32 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120c1b38 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120c1b3f:;
  /* 120c1b3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1b42 push eax */
  push32((uint32_t)(EAX));
  /* 120c1b43 call 0x120bf170 */
  push32(0x120c1b48u); f_120bf170();
  /* 120c1b48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1b4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120c1b4e:;
  /* 120c1b4e mov esp, ebp */
  ESP = (EBP);
  /* 120c1b50 pop ebp */
  EBP = (pop32());
  /* 120c1b51 ret  */
  ESPCHK(0x120c1a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10021b60 @ 0x120c1b60 (382 bytes, 135 insns) */
void f_120c1b60(void) {
  FTRACE(0x120c1b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c1b60 push ebp */
  push32((uint32_t)(EBP));
  /* 120c1b61 mov ebp, esp */
  EBP = (ESP);
  /* 120c1b63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120c1b65 push 0x120dcd00 */
  push32((uint32_t)(0x120dcd00u));
  /* 120c1b6a push 0x120b58ac */
  push32((uint32_t)(0x120b58acu));
  /* 120c1b6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120c1b75 push eax */
  push32((uint32_t)(EAX));
  /* 120c1b76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120c1b7d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1b80 push ebx */
  push32((uint32_t)(EBX));
  /* 120c1b81 push esi */
  push32((uint32_t)(ESI));
  /* 120c1b82 push edi */
  push32((uint32_t)(EDI));
  /* 120c1b83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120c1b86 cmp dword ptr [0x120e1478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1b8d jne 0x120c1bd2 */
  if (!C.zf) goto L_120c1bd2;
  /* 120c1b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1b93 push 1 */
  push32((uint32_t)(0x1u));
  /* 120c1b95 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1b97 call dword ptr [0x120e3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3334))), 0x120c1b9du);
  /* 120c1b9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c1b9f je 0x120c1bad */
  if (C.zf) goto L_120c1bad;
  /* 120c1ba1 mov dword ptr [0x120e1478], 1 */
  w32((uint32_t)(0x120e1478), (0x1u));
  /* 120c1bab jmp 0x120c1bd2 */
  goto L_120c1bd2;
L_120c1bad:;
  /* 120c1bad push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1baf push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1bb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 120c1bb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1bb5 call dword ptr [0x120e3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3358))), 0x120c1bbbu);
  /* 120c1bbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c1bbd je 0x120c1bcb */
  if (C.zf) goto L_120c1bcb;
  /* 120c1bbf mov dword ptr [0x120e1478], 2 */
  w32((uint32_t)(0x120e1478), (0x2u));
  /* 120c1bc9 jmp 0x120c1bd2 */
  goto L_120c1bd2;
L_120c1bcb:;
  /* 120c1bcb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1bcd jmp 0x120c1ce1 */
  goto L_120c1ce1;
L_120c1bd2:;
  /* 120c1bd2 cmp dword ptr [0x120e1478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e1478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1bd9 jne 0x120c1bf6 */
  if (!C.zf) goto L_120c1bf6;
  /* 120c1bdb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c1bde push eax */
  push32((uint32_t)(EAX));
  /* 120c1bdf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c1be2 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1be3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c1be6 push edx */
  push32((uint32_t)(EDX));
  /* 120c1be7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1bea push eax */
  push32((uint32_t)(EAX));
  /* 120c1beb call dword ptr [0x120e3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3334))), 0x120c1bf1u);
  /* 120c1bf1 jmp 0x120c1ce1 */
  goto L_120c1ce1;
L_120c1bf6:;
  /* 120c1bf6 cmp dword ptr [0x120e1478], 2 */
  { uint32_t _a=(r32((uint32_t)(0x120e1478))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1bfd jne 0x120c1cdf */
  if (!C.zf) goto L_120c1cdf;
  /* 120c1c03 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1c07 jne 0x120c1c12 */
  if (!C.zf) goto L_120c1c12;
  /* 120c1c09 mov ecx, dword ptr [0x120e13f0] */
  ECX = (r32((uint32_t)(0x120e13f0)));
  /* 120c1c0f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_120c1c12:;
  /* 120c1c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1c16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c1c19 push edx */
  push32((uint32_t)(EDX));
  /* 120c1c1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1c1d push eax */
  push32((uint32_t)(EAX));
  /* 120c1c1e call dword ptr [0x120e3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3358))), 0x120c1c24u);
  /* 120c1c24 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120c1c27 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1c2b jne 0x120c1c34 */
  if (!C.zf) goto L_120c1c34;
  /* 120c1c2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1c2f jmp 0x120c1ce1 */
  goto L_120c1ce1;
L_120c1c34:;
  /* 120c1c34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120c1c3b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120c1c3e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1c41 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 120c1c43 call 0x120b1580 */
  push32(0x120c1c48u); f_120b1580();
  /* 120c1c48 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 120c1c4b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120c1c4e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120c1c51 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 120c1c54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120c1c5b jmp 0x120c1c74 */
  goto L_120c1c74;
  /* 120c1c5d mov eax, 1 */
  EAX = (0x1u);
  /* 120c1c62 ret  */
  ESPCHK(0x120c1b60u, _esp0);
  ESP += 4; return;
  /* 120c1c63 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120c1c66 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 120c1c6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120c1c74:;
  /* 120c1c74 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1c78 jne 0x120c1c7e */
  if (!C.zf) goto L_120c1c7e;
  /* 120c1c7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1c7c jmp 0x120c1ce1 */
  goto L_120c1ce1;
L_120c1c7e:;
  /* 120c1c7e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120c1c81 push edx */
  push32((uint32_t)(EDX));
  /* 120c1c82 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120c1c85 push eax */
  push32((uint32_t)(EAX));
  /* 120c1c86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c1c89 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1c8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1c8d push edx */
  push32((uint32_t)(EDX));
  /* 120c1c8e call dword ptr [0x120e3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3358))), 0x120c1c94u);
  /* 120c1c94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c1c96 jne 0x120c1c9c */
  if (!C.zf) goto L_120c1c9c;
  /* 120c1c98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1c9a jmp 0x120c1ce1 */
  goto L_120c1ce1;
L_120c1c9c:;
  /* 120c1c9c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1ca0 jne 0x120c1cbd */
  if (!C.zf) goto L_120c1cbd;
  /* 120c1ca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1ca6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120c1ca8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120c1cab push eax */
  push32((uint32_t)(EAX));
  /* 120c1cac push 1 */
  push32((uint32_t)(0x1u));
  /* 120c1cae mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c1cb1 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1cb2 call dword ptr [0x120e337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e337c))), 0x120c1cb8u);
  /* 120c1cb8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120c1cbb jmp 0x120c1cda */
  goto L_120c1cda;
L_120c1cbd:;
  /* 120c1cbd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c1cc0 push edx */
  push32((uint32_t)(EDX));
  /* 120c1cc1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c1cc4 push eax */
  push32((uint32_t)(EAX));
  /* 120c1cc5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120c1cc7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120c1cca push ecx */
  push32((uint32_t)(ECX));
  /* 120c1ccb push 1 */
  push32((uint32_t)(0x1u));
  /* 120c1ccd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c1cd0 push edx */
  push32((uint32_t)(EDX));
  /* 120c1cd1 call dword ptr [0x120e337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e337c))), 0x120c1cd7u);
  /* 120c1cd7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_120c1cda:;
  /* 120c1cda mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120c1cdd jmp 0x120c1ce1 */
  goto L_120c1ce1;
L_120c1cdf:;
  /* 120c1cdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120c1ce1:;
  /* 120c1ce1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 120c1ce4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120c1ce7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120c1cee pop edi */
  EDI = (pop32());
  /* 120c1cef pop esi */
  ESI = (pop32());
  /* 120c1cf0 pop ebx */
  EBX = (pop32());
  /* 120c1cf1 mov esp, ebp */
  ESP = (EBP);
  /* 120c1cf3 pop ebp */
  EBP = (pop32());
  /* 120c1cf4 ret  */
  ESPCHK(0x120c1b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10021d00 @ 0x120c1d00 (398 bytes, 140 insns) */
void f_120c1d00(void) {
  FTRACE(0x120c1d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c1d00 push ebp */
  push32((uint32_t)(EBP));
  /* 120c1d01 mov ebp, esp */
  EBP = (ESP);
  /* 120c1d03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120c1d05 push 0x120dcd10 */
  push32((uint32_t)(0x120dcd10u));
  /* 120c1d0a push 0x120b58ac */
  push32((uint32_t)(0x120b58acu));
  /* 120c1d0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120c1d15 push eax */
  push32((uint32_t)(EAX));
  /* 120c1d16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120c1d1d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1d20 push ebx */
  push32((uint32_t)(EBX));
  /* 120c1d21 push esi */
  push32((uint32_t)(ESI));
  /* 120c1d22 push edi */
  push32((uint32_t)(EDI));
  /* 120c1d23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120c1d26 cmp dword ptr [0x120e147c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e147c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1d2d jne 0x120c1d72 */
  if (!C.zf) goto L_120c1d72;
  /* 120c1d2f push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1d33 push 1 */
  push32((uint32_t)(0x1u));
  /* 120c1d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1d37 call dword ptr [0x120e3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3334))), 0x120c1d3du);
  /* 120c1d3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c1d3f je 0x120c1d4d */
  if (C.zf) goto L_120c1d4d;
  /* 120c1d41 mov dword ptr [0x120e147c], 1 */
  w32((uint32_t)(0x120e147c), (0x1u));
  /* 120c1d4b jmp 0x120c1d72 */
  goto L_120c1d72;
L_120c1d4d:;
  /* 120c1d4d push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1d4f push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1d51 push 1 */
  push32((uint32_t)(0x1u));
  /* 120c1d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1d55 call dword ptr [0x120e3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3358))), 0x120c1d5bu);
  /* 120c1d5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c1d5d je 0x120c1d6b */
  if (C.zf) goto L_120c1d6b;
  /* 120c1d5f mov dword ptr [0x120e147c], 2 */
  w32((uint32_t)(0x120e147c), (0x2u));
  /* 120c1d69 jmp 0x120c1d72 */
  goto L_120c1d72;
L_120c1d6b:;
  /* 120c1d6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1d6d jmp 0x120c1e91 */
  goto L_120c1e91;
L_120c1d72:;
  /* 120c1d72 cmp dword ptr [0x120e147c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x120e147c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1d79 jne 0x120c1d96 */
  if (!C.zf) goto L_120c1d96;
  /* 120c1d7b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c1d7e push eax */
  push32((uint32_t)(EAX));
  /* 120c1d7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c1d82 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1d83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c1d86 push edx */
  push32((uint32_t)(EDX));
  /* 120c1d87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1d8a push eax */
  push32((uint32_t)(EAX));
  /* 120c1d8b call dword ptr [0x120e3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3358))), 0x120c1d91u);
  /* 120c1d91 jmp 0x120c1e91 */
  goto L_120c1e91;
L_120c1d96:;
  /* 120c1d96 cmp dword ptr [0x120e147c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e147c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1d9d jne 0x120c1e8f */
  if (!C.zf) goto L_120c1e8f;
  /* 120c1da3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1da7 jne 0x120c1db2 */
  if (!C.zf) goto L_120c1db2;
  /* 120c1da9 mov ecx, dword ptr [0x120e13f0] */
  ECX = (r32((uint32_t)(0x120e13f0)));
  /* 120c1daf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_120c1db2:;
  /* 120c1db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1db4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1db6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c1db9 push edx */
  push32((uint32_t)(EDX));
  /* 120c1dba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1dbd push eax */
  push32((uint32_t)(EAX));
  /* 120c1dbe call dword ptr [0x120e3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3334))), 0x120c1dc4u);
  /* 120c1dc4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120c1dc7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1dcb jne 0x120c1dd4 */
  if (!C.zf) goto L_120c1dd4;
  /* 120c1dcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1dcf jmp 0x120c1e91 */
  goto L_120c1e91;
L_120c1dd4:;
  /* 120c1dd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120c1ddb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120c1dde shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120c1de0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1de3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 120c1de5 call 0x120b1580 */
  push32(0x120c1deau); f_120b1580();
  /* 120c1dea mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 120c1ded mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120c1df0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120c1df3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 120c1df6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120c1dfd jmp 0x120c1e16 */
  goto L_120c1e16;
  /* 120c1dff mov eax, 1 */
  EAX = (0x1u);
  /* 120c1e04 ret  */
  ESPCHK(0x120c1d00u, _esp0);
  ESP += 4; return;
  /* 120c1e05 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120c1e08 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 120c1e0f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120c1e16:;
  /* 120c1e16 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1e1a jne 0x120c1e20 */
  if (!C.zf) goto L_120c1e20;
  /* 120c1e1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1e1e jmp 0x120c1e91 */
  goto L_120c1e91;
L_120c1e20:;
  /* 120c1e20 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120c1e23 push edx */
  push32((uint32_t)(EDX));
  /* 120c1e24 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120c1e27 push eax */
  push32((uint32_t)(EAX));
  /* 120c1e28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c1e2b push ecx */
  push32((uint32_t)(ECX));
  /* 120c1e2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1e2f push edx */
  push32((uint32_t)(EDX));
  /* 120c1e30 call dword ptr [0x120e3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3334))), 0x120c1e36u);
  /* 120c1e36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c1e38 jne 0x120c1e3e */
  if (!C.zf) goto L_120c1e3e;
  /* 120c1e3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1e3c jmp 0x120c1e91 */
  goto L_120c1e91;
L_120c1e3e:;
  /* 120c1e3e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1e42 jne 0x120c1e66 */
  if (!C.zf) goto L_120c1e66;
  /* 120c1e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1e46 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1e48 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1e4a push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1e4c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120c1e4e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120c1e51 push eax */
  push32((uint32_t)(EAX));
  /* 120c1e52 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 120c1e57 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c1e5a push ecx */
  push32((uint32_t)(ECX));
  /* 120c1e5b call dword ptr [0x120e33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c4))), 0x120c1e61u);
  /* 120c1e61 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120c1e64 jmp 0x120c1e8a */
  goto L_120c1e8a;
L_120c1e66:;
  /* 120c1e66 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1e68 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c1e6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120c1e6d push edx */
  push32((uint32_t)(EDX));
  /* 120c1e6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120c1e71 push eax */
  push32((uint32_t)(EAX));
  /* 120c1e72 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120c1e74 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120c1e77 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1e78 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 120c1e7d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120c1e80 push edx */
  push32((uint32_t)(EDX));
  /* 120c1e81 call dword ptr [0x120e33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c4))), 0x120c1e87u);
  /* 120c1e87 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_120c1e8a:;
  /* 120c1e8a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120c1e8d jmp 0x120c1e91 */
  goto L_120c1e91;
L_120c1e8f:;
  /* 120c1e8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120c1e91:;
  /* 120c1e91 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 120c1e94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120c1e97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120c1e9e pop edi */
  EDI = (pop32());
  /* 120c1e9f pop esi */
  ESI = (pop32());
  /* 120c1ea0 pop ebx */
  EBX = (pop32());
  /* 120c1ea1 mov esp, ebp */
  ESP = (EBP);
  /* 120c1ea3 pop ebp */
  EBP = (pop32());
  /* 120c1ea4 ret  */
  ESPCHK(0x120c1d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10021eb0 @ 0x120c1eb0 (237 bytes, 81 insns) */
void f_120c1eb0(void) {
  FTRACE(0x120c1eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c1eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 120c1eb1 mov ebp, esp */
  EBP = (ESP);
  /* 120c1eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1eb4 cmp dword ptr [0x120e287c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e287c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1ebb jne 0x120c1ed2 */
  if (!C.zf) goto L_120c1ed2;
  /* 120c1ebd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120c1ec0 push eax */
  push32((uint32_t)(EAX));
  /* 120c1ec1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1ec4 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1ec5 call 0x120c2180 */
  push32(0x120c1ecau); f_120c2180();
  /* 120c1eca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1ecd jmp 0x120c1f99 */
  goto L_120c1f99;
L_120c1ed2:;
  /* 120c1ed2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120c1ed4 call 0x120acb80 */
  push32(0x120c1ed9u); f_120acb80();
  /* 120c1ed9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1edc jmp 0x120c1ee7 */
  goto L_120c1ee7;
L_120c1ede:;
  /* 120c1ede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1ee1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1ee4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_120c1ee7:;
  /* 120c1ee7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1eea movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 120c1eee mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 120c1ef2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c1ef5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120c1efb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120c1efd je 0x120c1f7b */
  if (C.zf) goto L_120c1f7b;
  /* 120c1eff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c1f02 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120c1f07 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120c1f09 mov cl, byte ptr [eax + 0x120e2981] */
  CL = (r8((uint32_t)(EAX + 0x120e2981)));
  /* 120c1f0f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120c1f12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120c1f14 je 0x120c1f66 */
  if (C.zf) goto L_120c1f66;
  /* 120c1f16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1f19 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1f1c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120c1f1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1f22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120c1f24 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120c1f26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120c1f28 jne 0x120c1f38 */
  if (!C.zf) goto L_120c1f38;
  /* 120c1f2a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120c1f2c call 0x120acc20 */
  push32(0x120c1f31u); f_120acc20();
  /* 120c1f31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1f34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c1f36 jmp 0x120c1f99 */
  goto L_120c1f99;
L_120c1f38:;
  /* 120c1f38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c1f3b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120c1f41 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 120c1f44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1f47 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120c1f49 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120c1f4b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120c1f4d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1f50 jne 0x120c1f64 */
  if (!C.zf) goto L_120c1f64;
  /* 120c1f52 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120c1f54 call 0x120acc20 */
  push32(0x120c1f59u); f_120acc20();
  /* 120c1f59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1f5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1f5f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120c1f62 jmp 0x120c1f99 */
  goto L_120c1f99;
L_120c1f64:;
  /* 120c1f64 jmp 0x120c1f76 */
  goto L_120c1f76;
L_120c1f66:;
  /* 120c1f66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c1f69 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120c1f6f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1f72 jne 0x120c1f76 */
  if (!C.zf) goto L_120c1f76;
  /* 120c1f74 jmp 0x120c1f7b */
  goto L_120c1f7b;
L_120c1f76:;
  /* 120c1f76 jmp 0x120c1ede */
  goto L_120c1ede;
L_120c1f7b:;
  /* 120c1f7b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120c1f7d call 0x120acc20 */
  push32(0x120c1f82u); f_120acc20();
  /* 120c1f82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1f85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c1f88 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120c1f8d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1f90 jne 0x120c1f97 */
  if (!C.zf) goto L_120c1f97;
  /* 120c1f92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1f95 jmp 0x120c1f99 */
  goto L_120c1f99;
L_120c1f97:;
  /* 120c1f97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120c1f99:;
  /* 120c1f99 mov esp, ebp */
  ESP = (EBP);
  /* 120c1f9b pop ebp */
  EBP = (pop32());
  /* 120c1f9c ret  */
  ESPCHK(0x120c1eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10021fa0 @ 0x120c1fa0 (122 bytes, 39 insns) */
void f_120c1fa0(void) {
  FTRACE(0x120c1fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c1fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 120c1fa1 mov ebp, esp */
  EBP = (ESP);
  /* 120c1fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 120c1fa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1fa7 cmp eax, dword ptr [0x120e2bfc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120e2bfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c1fad jae 0x120c1fd1 */
  if (!C.cf) goto L_120c1fd1;
  /* 120c1faf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1fb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120c1fb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1fb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120c1fbb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120c1fbe mov eax, dword ptr [ecx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120e2ac0)));
  /* 120c1fc5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 120c1fca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120c1fcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120c1fcf jne 0x120c1fec */
  if (!C.zf) goto L_120c1fec;
L_120c1fd1:;
  /* 120c1fd1 call 0x120b8310 */
  push32(0x120c1fd6u); f_120b8310();
  /* 120c1fd6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120c1fdc call 0x120b8320 */
  push32(0x120c1fe1u); f_120b8320();
  /* 120c1fe1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120c1fe7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120c1fea jmp 0x120c2016 */
  goto L_120c2016;
L_120c1fec:;
  /* 120c1fec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1fef push edx */
  push32((uint32_t)(EDX));
  /* 120c1ff0 call 0x120bf0e0 */
  push32(0x120c1ff5u); f_120bf0e0();
  /* 120c1ff5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c1ff8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c1ffb push eax */
  push32((uint32_t)(EAX));
  /* 120c1ffc call 0x120c2020 */
  push32(0x120c2001u); f_120c2020();
  /* 120c2001 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c2004 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120c2007 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c200a push ecx */
  push32((uint32_t)(ECX));
  /* 120c200b call 0x120bf170 */
  push32(0x120c2010u); f_120bf170();
  /* 120c2010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c2013 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120c2016:;
  /* 120c2016 mov esp, ebp */
  ESP = (EBP);
  /* 120c2018 pop ebp */
  EBP = (pop32());
  /* 120c2019 ret  */
  ESPCHK(0x120c1fa0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x120c2020 (170 bytes, 59 insns) */
void f_120c2020(void) {
  FTRACE(0x120c2020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c2020 push ebp */
  push32((uint32_t)(EBP));
  /* 120c2021 mov ebp, esp */
  EBP = (ESP);
  /* 120c2023 push ecx */
  push32((uint32_t)(ECX));
  /* 120c2024 push esi */
  push32((uint32_t)(ESI));
  /* 120c2025 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c2028 push eax */
  push32((uint32_t)(EAX));
  /* 120c2029 call 0x120bef60 */
  push32(0x120c202eu); f_120bef60();
  /* 120c202e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c2031 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c2034 je 0x120c2073 */
  if (C.zf) goto L_120c2073;
  /* 120c2036 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c203a je 0x120c2042 */
  if (C.zf) goto L_120c2042;
  /* 120c203c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c2040 jne 0x120c205c */
  if (!C.zf) goto L_120c205c;
L_120c2042:;
  /* 120c2042 push 1 */
  push32((uint32_t)(0x1u));
  /* 120c2044 call 0x120bef60 */
  push32(0x120c2049u); f_120bef60();
  /* 120c2049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c204c mov esi, eax */
  ESI = (EAX);
  /* 120c204e push 2 */
  push32((uint32_t)(0x2u));
  /* 120c2050 call 0x120bef60 */
  push32(0x120c2055u); f_120bef60();
  /* 120c2055 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c2058 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c205a je 0x120c2073 */
  if (C.zf) goto L_120c2073;
L_120c205c:;
  /* 120c205c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c205f push ecx */
  push32((uint32_t)(ECX));
  /* 120c2060 call 0x120bef60 */
  push32(0x120c2065u); f_120bef60();
  /* 120c2065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c2068 push eax */
  push32((uint32_t)(EAX));
  /* 120c2069 call dword ptr [0x120e3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3330))), 0x120c206fu);
  /* 120c206f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c2071 je 0x120c207c */
  if (C.zf) goto L_120c207c;
L_120c2073:;
  /* 120c2073 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120c207a jmp 0x120c2085 */
  goto L_120c2085;
L_120c207c:;
  /* 120c207c call dword ptr [0x120e33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33e8))), 0x120c2082u);
  /* 120c2082 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120c2085:;
  /* 120c2085 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c2088 push edx */
  push32((uint32_t)(EDX));
  /* 120c2089 call 0x120bee80 */
  push32(0x120c208eu); f_120bee80();
  /* 120c208e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c2091 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c2094 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120c2097 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c209a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 120c209d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120c20a0 mov edx, dword ptr [eax*4 + 0x120e2ac0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120e2ac0)));
  /* 120c20a7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 120c20ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c20b0 je 0x120c20c3 */
  if (C.zf) goto L_120c20c3;
  /* 120c20b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120c20b5 push eax */
  push32((uint32_t)(EAX));
  /* 120c20b6 call 0x120b8270 */
  push32(0x120c20bbu); f_120b8270();
  /* 120c20bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c20be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120c20c1 jmp 0x120c20c5 */
  goto L_120c20c5;
L_120c20c3:;
  /* 120c20c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120c20c5:;
  /* 120c20c5 pop esi */
  ESI = (pop32());
  /* 120c20c6 mov esp, ebp */
  ESP = (EBP);
  /* 120c20c8 pop ebp */
  EBP = (pop32());
  /* 120c20c9 ret  */
  ESPCHK(0x120c2020u, _esp0);
  ESP += 4; return;
}

/* FUN_100220d0 @ 0x120c20d0 (146 bytes, 52 insns) */
void f_120c20d0(void) {
  FTRACE(0x120c20d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c20d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120c20d1 mov ebp, esp */
  EBP = (ESP);
  /* 120c20d3 push ebx */
  push32((uint32_t)(EBX));
  /* 120c20d4 push esi */
  push32((uint32_t)(ESI));
  /* 120c20d5 push edi */
  push32((uint32_t)(EDI));
L_120c20d6:;
  /* 120c20d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c20da jne 0x120c20fa */
  if (!C.zf) goto L_120c20fa;
  /* 120c20dc push 0x120dccf0 */
  push32((uint32_t)(0x120dccf0u));
  /* 120c20e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120c20e3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 120c20e5 push 0x120dcd1c */
  push32((uint32_t)(0x120dcd1cu));
  /* 120c20ea push 2 */
  push32((uint32_t)(0x2u));
  /* 120c20ec call 0x120ab840 */
  push32(0x120c20f1u); f_120ab840();
  /* 120c20f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c20f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120c20f7 jne 0x120c20fa */
  if (!C.zf) goto L_120c20fa;
  /* 120c20f9 int3  */
  x86_unimpl("int3 @ 0x120c20f9");
L_120c20fa:;
  /* 120c20fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c20fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120c20fe jne 0x120c20d6 */
  if (!C.zf) goto L_120c20d6;
  /* 120c2100 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c2103 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120c2106 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 120c210c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120c210e je 0x120c215d */
  if (C.zf) goto L_120c215d;
  /* 120c2110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c2113 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120c2116 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 120c2119 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120c211b je 0x120c215d */
  if (C.zf) goto L_120c215d;
  /* 120c211d push 2 */
  push32((uint32_t)(0x2u));
  /* 120c211f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c2122 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120c2125 push eax */
  push32((uint32_t)(EAX));
  /* 120c2126 call 0x120ad710 */
  push32(0x120c212bu); f_120ad710();
  /* 120c212b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120c212e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c2131 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120c2134 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 120c213a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c213d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 120c2140 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c2143 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 120c2149 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c214c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 120c2153 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120c2156 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_120c215d:;
  /* 120c215d pop edi */
  EDI = (pop32());
  /* 120c215e pop esi */
  ESI = (pop32());
  /* 120c215f pop ebx */
  EBX = (pop32());
  /* 120c2160 pop ebp */
  EBP = (pop32());
  /* 120c2161 ret  */
  ESPCHK(0x120c20d0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x120c2180 (193 bytes, 87 insns) */
void f_120c2180(void) {
  FTRACE(0x120c2180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c2180 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c2182 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 120c2186 push ebx */
  push32((uint32_t)(EBX));
  /* 120c2187 mov ebx, eax */
  EBX = (EAX);
  /* 120c2189 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 120c218c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 120c2190 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 120c2196 je 0x120c21ab */
  if (C.zf) goto L_120c21ab;
L_120c2198:;
  /* 120c2198 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 120c219a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120c219b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c219d je 0x120c2170 */
  if (C.zf) { jmp_ind(0x120c2170u); return; }
  /* 120c219f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 120c21a1 je 0x120c21f4 */
  if (C.zf) goto L_120c21f4;
  /* 120c21a3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 120c21a9 jne 0x120c2198 */
  if (!C.zf) goto L_120c2198;
L_120c21ab:;
  /* 120c21ab or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 120c21ad push edi */
  push32((uint32_t)(EDI));
  /* 120c21ae mov eax, ebx */
  EAX = (EBX);
  /* 120c21b0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 120c21b3 push esi */
  push32((uint32_t)(ESI));
  /* 120c21b4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_120c21b6:;
  /* 120c21b6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 120c21b8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 120c21bd mov eax, ecx */
  EAX = (ECX);
  /* 120c21bf mov esi, edi */
  ESI = (EDI);
  /* 120c21c1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 120c21c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120c21c5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120c21c7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120c21ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120c21cd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 120c21cf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 120c21d1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120c21d4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 120c21da jne 0x120c21f8 */
  if (!C.zf) goto L_120c21f8;
  /* 120c21dc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 120c21e1 je 0x120c21b6 */
  if (C.zf) goto L_120c21b6;
  /* 120c21e3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 120c21e8 jne 0x120c21f2 */
  if (!C.zf) goto L_120c21f2;
  /* 120c21ea and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 120c21f0 jne 0x120c21b6 */
  if (!C.zf) goto L_120c21b6;
L_120c21f2:;
  /* 120c21f2 pop esi */
  ESI = (pop32());
  /* 120c21f3 pop edi */
  EDI = (pop32());
L_120c21f4:;
  /* 120c21f4 pop ebx */
  EBX = (pop32());
  /* 120c21f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120c21f7 ret  */
  ESPCHK(0x120c2180u, _esp0);
  ESP += 4; return;
L_120c21f8:;
  /* 120c21f8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 120c21fb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c21fd je 0x120c2235 */
  if (C.zf) goto L_120c2235;
  /* 120c21ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120c2201 je 0x120c21f2 */
  if (C.zf) goto L_120c21f2;
  /* 120c2203 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c2205 je 0x120c222e */
  if (C.zf) goto L_120c222e;
  /* 120c2207 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 120c2209 je 0x120c21f2 */
  if (C.zf) goto L_120c21f2;
  /* 120c220b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120c220e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c2210 je 0x120c2227 */
  if (C.zf) goto L_120c2227;
  /* 120c2212 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120c2214 je 0x120c21f2 */
  if (C.zf) goto L_120c21f2;
  /* 120c2216 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120c2218 je 0x120c2220 */
  if (C.zf) goto L_120c2220;
  /* 120c221a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 120c221c je 0x120c21f2 */
  if (C.zf) goto L_120c21f2;
  /* 120c221e jmp 0x120c21b6 */
  goto L_120c21b6;
L_120c2220:;
  /* 120c2220 pop esi */
  ESI = (pop32());
  /* 120c2221 pop edi */
  EDI = (pop32());
  /* 120c2222 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 120c2225 pop ebx */
  EBX = (pop32());
  /* 120c2226 ret  */
  ESPCHK(0x120c2180u, _esp0);
  ESP += 4; return;
L_120c2227:;
  /* 120c2227 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 120c222a pop esi */
  ESI = (pop32());
  /* 120c222b pop edi */
  EDI = (pop32());
  /* 120c222c pop ebx */
  EBX = (pop32());
  /* 120c222d ret  */
  ESPCHK(0x120c2180u, _esp0);
  ESP += 4; return;
L_120c222e:;
  /* 120c222e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 120c2231 pop esi */
  ESI = (pop32());
  /* 120c2232 pop edi */
  EDI = (pop32());
  /* 120c2233 pop ebx */
  EBX = (pop32());
  /* 120c2234 ret  */
  ESPCHK(0x120c2180u, _esp0);
  ESP += 4; return;
L_120c2235:;
  /* 120c2235 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 120c2238 pop esi */
  ESI = (pop32());
  /* 120c2239 pop edi */
  EDI = (pop32());
  /* 120c223a pop ebx */
  EBX = (pop32());
  /* 120c223b ret  */
  ESPCHK(0x120c2180u, _esp0);
  ESP += 4; return;
  /* 120c223e sbb byte ptr [esi + ecx], dh */
  { uint32_t _a=(r8((uint32_t)(ESI + ECX*1))),_b=(C.d.b.h),_r=_a-_b-C.cf; w8((uint32_t)(ESI + ECX*1), (_r)); fl_sub(_a,_b,_r,8); }
}

/* RtlUnwind @ 0x120c223c (6 bytes, 1 insns) */
void f_120c223c(void) {
  FTRACE(0x120c223cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c223c jmp dword ptr [0x120e3418] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x120e3418)))); return;
}

/* Unwind@10029270 @ 0x120c9270 (11 bytes, 5 insns) */
void f_120c9270(void) {
  FTRACE(0x120c9270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120c9270 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120c9273 push eax */
  push32((uint32_t)(EAX));
  /* 120c9274 call 0x120aac00 */
  push32(0x120c9279u); f_120aac00();
  /* 120c9279 pop ecx */
  ECX = (pop32());
  /* 120c927a ret  */
  ESPCHK(0x120c9270u, _esp0);
  ESP += 4; return;
}

