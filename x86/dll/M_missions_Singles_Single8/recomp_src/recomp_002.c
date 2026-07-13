#include "recomp.h"

/* FUN_100126c0 @ 0x11d526c0 (393 bytes, 123 insns) */
void f_11d526c0(void) {
  FTRACE(0x11d526c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d526c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d526c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d526c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d526c6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d526ca jne 0x11d526d6 */
  if (!C.zf) goto L_11d526d6;
  /* 11d526cc mov eax, dword ptr [0x11d70c98] */
  EAX = (r32((uint32_t)(0x11d70c98)));
  /* 11d526d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d526d4 jmp 0x11d526dc */
  goto L_11d526dc;
L_11d526d6:;
  /* 11d526d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d526d9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11d526dc:;
  /* 11d526dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d526df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d526e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d526e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d526e8 push 0x11d719dc */
  push32((uint32_t)(0x11d719dcu));
  /* 11d526ed call dword ptr [0x11d743c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743c8))), 0x11d526f3u);
  /* 11d526f3 cmp dword ptr [0x11d719cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d526fa je 0x11d5271a */
  if (C.zf) goto L_11d5271a;
  /* 11d526fc push 0x11d719dc */
  push32((uint32_t)(0x11d719dcu));
  /* 11d52701 call dword ptr [0x11d743b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b8))), 0x11d52707u);
  /* 11d52707 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d52709 call 0x11d48d80 */
  push32(0x11d5270eu); f_11d48d80();
  /* 11d5270e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52711 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11d52718 jmp 0x11d52721 */
  goto L_11d52721;
L_11d5271a:;
  /* 11d5271a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11d52721:;
  /* 11d52721 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52725 jbe 0x11d52812 */
  if ((C.cf||C.zf)) goto L_11d52812;
  /* 11d5272b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5272e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d52730 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11d52733 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d52737 je 0x11d52741 */
  if (C.zf) goto L_11d52741;
  /* 11d52739 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d5273d je 0x11d52746 */
  if (C.zf) goto L_11d52746;
  /* 11d5273f jmp 0x11d527a0 */
  goto L_11d527a0;
L_11d52741:;
  /* 11d52741 jmp 0x11d52812 */
  goto L_11d52812;
L_11d52746:;
  /* 11d52746 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52749 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5274c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11d5274f mov dword ptr [0x11d719b8], 0 */
  w32((uint32_t)(0x11d719b8), (0x0u));
  /* 11d52759 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5275c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d5275f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52762 jne 0x11d52777 */
  if (!C.zf) goto L_11d52777;
  /* 11d52764 mov dword ptr [0x11d719b8], 1 */
  w32((uint32_t)(0x11d719b8), (0x1u));
  /* 11d5276e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52771 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52774 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11d52777:;
  /* 11d52777 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5277a push ecx */
  push32((uint32_t)(ECX));
  /* 11d5277b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11d5277e push edx */
  push32((uint32_t)(EDX));
  /* 11d5277f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11d52782 push eax */
  push32((uint32_t)(EAX));
  /* 11d52783 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52786 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52787 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5278a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d5278c push eax */
  push32((uint32_t)(EAX));
  /* 11d5278d call 0x11d52850 */
  push32(0x11d52792u); f_11d52850();
  /* 11d52792 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52795 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52798 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5279b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11d5279e jmp 0x11d5280d */
  goto L_11d5280d;
L_11d527a0:;
  /* 11d527a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d527a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d527a5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d527a7 mov ecx, dword ptr [0x11d6fc98] */
  ECX = (r32((uint32_t)(0x11d6fc98)));
  /* 11d527ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d527af mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d527b3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11d527b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d527bb je 0x11d527e8 */
  if (C.zf) goto L_11d527e8;
  /* 11d527bd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d527c1 jbe 0x11d527e8 */
  if ((C.cf||C.zf)) goto L_11d527e8;
  /* 11d527c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d527c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d527c9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d527cb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d527cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d527d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d527d3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d527d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d527d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d527dc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11d527df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d527e2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d527e5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11d527e8:;
  /* 11d527e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d527eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d527ee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d527f0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d527f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d527f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d527f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d527fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d527fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52801 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11d52804 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52807 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d5280a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11d5280d:;
  /* 11d5280d jmp 0x11d52721 */
  goto L_11d52721;
L_11d52812:;
  /* 11d52812 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52816 je 0x11d52824 */
  if (C.zf) goto L_11d52824;
  /* 11d52818 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d5281a call 0x11d48e20 */
  push32(0x11d5281fu); f_11d48e20();
  /* 11d5281f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52822 jmp 0x11d5282f */
  goto L_11d5282f;
L_11d52824:;
  /* 11d52824 push 0x11d719dc */
  push32((uint32_t)(0x11d719dcu));
  /* 11d52829 call dword ptr [0x11d743b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b8))), 0x11d5282fu);
L_11d5282f:;
  /* 11d5282f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52833 jbe 0x11d52843 */
  if ((C.cf||C.zf)) goto L_11d52843;
  /* 11d52835 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d52838 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11d5283b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d5283e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d52841 jmp 0x11d52845 */
  goto L_11d52845;
L_11d52843:;
  /* 11d52843 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d52845:;
  /* 11d52845 mov esp, ebp */
  ESP = (EBP);
  /* 11d52847 pop ebp */
  EBP = (pop32());
  /* 11d52848 ret  */
  ESPCHK(0x11d526c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012850 @ 0x11d52850 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11d52850(void) {
  FTRACE(0x11d52850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d52850 push ebp */
  push32((uint32_t)(EBP));
  /* 11d52851 mov ebp, esp */
  EBP = (ESP);
  /* 11d52853 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d52856 push esi */
  push32((uint32_t)(ESI));
  /* 11d52857 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11d5285b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d5285e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52861 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d52864 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d52867 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5286b ja 0x11d52db8 */
  if ((!C.cf&&!C.zf)) goto L_11d52db8;
  /* 11d52871 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d52874 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d52876 mov dl, byte ptr [eax + 0x11d52e19] */
  DL = (r8((uint32_t)(EAX + 0x11d52e19)));
  /* 11d5287c jmp dword ptr [edx*4 + 0x11d52dbd] */
  switch (EDX) {
    case 0: goto L_11d52d96;
    case 1: goto L_11d528a5;
    case 2: goto L_11d528eb;
    case 3: goto L_11d52a38;
    case 4: goto L_11d52a60;
    case 5: goto L_11d52aff;
    case 6: goto L_11d52b6b;
    case 7: goto L_11d52b94;
    case 8: goto L_11d52bd5;
    case 9: goto L_11d52cb7;
    case 10: goto L_11d52d1e;
    case 11: goto L_11d52d6b;
    case 12: goto L_11d52883;
    case 13: goto L_11d528c8;
    case 14: goto L_11d5290e;
    case 15: goto L_11d52a0e;
    case 16: goto L_11d52aa5;
    case 17: goto L_11d52ad2;
    case 18: goto L_11d52b27;
    case 19: goto L_11d52bab;
    case 20: goto L_11d52c59;
    case 21: goto L_11d52ce8;
    case 22: goto L_11d52db8;
    default: x86_unimpl("switch@0x11d5287c out of table"); return;
  }
L_11d52883:;
  /* 11d52883 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52886 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52887 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5288a push edx */
  push32((uint32_t)(EDX));
  /* 11d5288b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d5288e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11d52891 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d52894 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11d52897 push eax */
  push32((uint32_t)(EAX));
  /* 11d52898 call 0x11d52e70 */
  push32(0x11d5289du); f_11d52e70();
  /* 11d5289d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d528a0 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d528a5:;
  /* 11d528a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d528a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d528a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d528ac push edx */
  push32((uint32_t)(EDX));
  /* 11d528ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d528b0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11d528b3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d528b6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11d528ba push eax */
  push32((uint32_t)(EAX));
  /* 11d528bb call 0x11d52e70 */
  push32(0x11d528c0u); f_11d52e70();
  /* 11d528c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d528c3 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d528c8:;
  /* 11d528c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d528cb push ecx */
  push32((uint32_t)(ECX));
  /* 11d528cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d528cf push edx */
  push32((uint32_t)(EDX));
  /* 11d528d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d528d3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d528d6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d528d9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11d528dd push eax */
  push32((uint32_t)(EAX));
  /* 11d528de call 0x11d52e70 */
  push32(0x11d528e3u); f_11d52e70();
  /* 11d528e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d528e6 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d528eb:;
  /* 11d528eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d528ee push ecx */
  push32((uint32_t)(ECX));
  /* 11d528ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d528f2 push edx */
  push32((uint32_t)(EDX));
  /* 11d528f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d528f6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d528f9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d528fc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11d52900 push eax */
  push32((uint32_t)(EAX));
  /* 11d52901 call 0x11d52e70 */
  push32(0x11d52906u); f_11d52e70();
  /* 11d52906 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52909 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d5290e:;
  /* 11d5290e cmp dword ptr [0x11d719b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52915 je 0x11d52996 */
  if (C.zf) goto L_11d52996;
  /* 11d52917 mov dword ptr [0x11d719b8], 0 */
  w32((uint32_t)(0x11d719b8), (0x0u));
  /* 11d52921 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d52924 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52925 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52928 push edx */
  push32((uint32_t)(EDX));
  /* 11d52929 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5292c push eax */
  push32((uint32_t)(EAX));
  /* 11d5292d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52930 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52931 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d52934 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11d5293a push eax */
  push32((uint32_t)(EAX));
  /* 11d5293b call 0x11d53020 */
  push32(0x11d52940u); f_11d53020();
  /* 11d52940 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52943 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52946 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52949 jne 0x11d52950 */
  if (!C.zf) goto L_11d52950;
  /* 11d5294b jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52950:;
  /* 11d52950 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52953 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d52955 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11d52958 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5295b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d5295d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52960 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52963 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d52965 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52968 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d5296a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d5296d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52970 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d52972 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d52975 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52976 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52979 push edx */
  push32((uint32_t)(EDX));
  /* 11d5297a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5297d push eax */
  push32((uint32_t)(EAX));
  /* 11d5297e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52981 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52982 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d52985 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11d5298b push eax */
  push32((uint32_t)(EAX));
  /* 11d5298c call 0x11d53020 */
  push32(0x11d52991u); f_11d53020();
  /* 11d52991 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52994 jmp 0x11d52a09 */
  goto L_11d52a09;
L_11d52996:;
  /* 11d52996 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d52999 push ecx */
  push32((uint32_t)(ECX));
  /* 11d5299a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d5299d push edx */
  push32((uint32_t)(EDX));
  /* 11d5299e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d529a1 push eax */
  push32((uint32_t)(EAX));
  /* 11d529a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d529a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d529a6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d529a9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11d529af push eax */
  push32((uint32_t)(EAX));
  /* 11d529b0 call 0x11d53020 */
  push32(0x11d529b5u); f_11d53020();
  /* 11d529b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d529b8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d529bb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d529be jne 0x11d529c5 */
  if (!C.zf) goto L_11d529c5;
  /* 11d529c0 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d529c5:;
  /* 11d529c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d529c8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d529ca mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11d529cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d529d0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d529d2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d529d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d529d8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d529da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d529dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d529df sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d529e2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d529e5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d529e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d529ea push ecx */
  push32((uint32_t)(ECX));
  /* 11d529eb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d529ee push edx */
  push32((uint32_t)(EDX));
  /* 11d529ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d529f2 push eax */
  push32((uint32_t)(EAX));
  /* 11d529f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d529f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d529f7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d529fa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11d52a00 push eax */
  push32((uint32_t)(EAX));
  /* 11d52a01 call 0x11d53020 */
  push32(0x11d52a06u); f_11d53020();
  /* 11d52a06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d52a09:;
  /* 11d52a09 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52a0e:;
  /* 11d52a0e mov ecx, dword ptr [0x11d719b8] */
  ECX = (r32((uint32_t)(0x11d719b8)));
  /* 11d52a14 mov dword ptr [0x11d719c8], ecx */
  w32((uint32_t)(0x11d719c8), (ECX));
  /* 11d52a1a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52a1d push edx */
  push32((uint32_t)(EDX));
  /* 11d52a1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52a21 push eax */
  push32((uint32_t)(EAX));
  /* 11d52a22 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d52a24 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52a27 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d52a2a push edx */
  push32((uint32_t)(EDX));
  /* 11d52a2b call 0x11d52ec0 */
  push32(0x11d52a30u); f_11d52ec0();
  /* 11d52a30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52a33 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52a38:;
  /* 11d52a38 mov eax, dword ptr [0x11d719b8] */
  EAX = (r32((uint32_t)(0x11d719b8)));
  /* 11d52a3d mov dword ptr [0x11d719c8], eax */
  w32((uint32_t)(0x11d719c8), (EAX));
  /* 11d52a42 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52a45 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52a46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52a49 push edx */
  push32((uint32_t)(EDX));
  /* 11d52a4a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d52a4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52a4f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d52a52 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52a53 call 0x11d52ec0 */
  push32(0x11d52a58u); f_11d52ec0();
  /* 11d52a58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52a5b jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52a60:;
  /* 11d52a60 mov edx, dword ptr [0x11d719b8] */
  EDX = (r32((uint32_t)(0x11d719b8)));
  /* 11d52a66 mov dword ptr [0x11d719c8], edx */
  w32((uint32_t)(0x11d719c8), (EDX));
  /* 11d52a6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52a6f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d52a72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d52a73 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11d52a78 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d52a7a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d52a7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52a81 jne 0x11d52a8a */
  if (!C.zf) goto L_11d52a8a;
  /* 11d52a83 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11d52a8a:;
  /* 11d52a8a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52a8d push edx */
  push32((uint32_t)(EDX));
  /* 11d52a8e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52a91 push eax */
  push32((uint32_t)(EAX));
  /* 11d52a92 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d52a94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52a97 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52a98 call 0x11d52ec0 */
  push32(0x11d52a9du); f_11d52ec0();
  /* 11d52a9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52aa0 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52aa5:;
  /* 11d52aa5 mov edx, dword ptr [0x11d719b8] */
  EDX = (r32((uint32_t)(0x11d719b8)));
  /* 11d52aab mov dword ptr [0x11d719c8], edx */
  w32((uint32_t)(0x11d719c8), (EDX));
  /* 11d52ab1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52ab4 push eax */
  push32((uint32_t)(EAX));
  /* 11d52ab5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52ab8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52ab9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d52abb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52abe mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11d52ac1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52ac4 push eax */
  push32((uint32_t)(EAX));
  /* 11d52ac5 call 0x11d52ec0 */
  push32(0x11d52acau); f_11d52ec0();
  /* 11d52aca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52acd jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52ad2:;
  /* 11d52ad2 mov ecx, dword ptr [0x11d719b8] */
  ECX = (r32((uint32_t)(0x11d719b8)));
  /* 11d52ad8 mov dword ptr [0x11d719c8], ecx */
  w32((uint32_t)(0x11d719c8), (ECX));
  /* 11d52ade mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52ae1 push edx */
  push32((uint32_t)(EDX));
  /* 11d52ae2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52ae5 push eax */
  push32((uint32_t)(EAX));
  /* 11d52ae6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d52ae8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52aeb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d52aee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52af1 push edx */
  push32((uint32_t)(EDX));
  /* 11d52af2 call 0x11d52ec0 */
  push32(0x11d52af7u); f_11d52ec0();
  /* 11d52af7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52afa jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52aff:;
  /* 11d52aff mov eax, dword ptr [0x11d719b8] */
  EAX = (r32((uint32_t)(0x11d719b8)));
  /* 11d52b04 mov dword ptr [0x11d719c8], eax */
  w32((uint32_t)(0x11d719c8), (EAX));
  /* 11d52b09 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52b0c push ecx */
  push32((uint32_t)(ECX));
  /* 11d52b0d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52b10 push edx */
  push32((uint32_t)(EDX));
  /* 11d52b11 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d52b13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52b16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d52b19 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52b1a call 0x11d52ec0 */
  push32(0x11d52b1fu); f_11d52ec0();
  /* 11d52b1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52b22 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52b27:;
  /* 11d52b27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52b2a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52b2e jg 0x11d52b4c */
  if ((!C.zf&&C.sf==C.of)) goto L_11d52b4c;
  /* 11d52b30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52b33 push eax */
  push32((uint32_t)(EAX));
  /* 11d52b34 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52b37 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52b38 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d52b3b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11d52b41 push eax */
  push32((uint32_t)(EAX));
  /* 11d52b42 call 0x11d52e70 */
  push32(0x11d52b47u); f_11d52e70();
  /* 11d52b47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52b4a jmp 0x11d52b66 */
  goto L_11d52b66;
L_11d52b4c:;
  /* 11d52b4c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52b4f push ecx */
  push32((uint32_t)(ECX));
  /* 11d52b50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52b53 push edx */
  push32((uint32_t)(EDX));
  /* 11d52b54 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d52b57 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11d52b5d push ecx */
  push32((uint32_t)(ECX));
  /* 11d52b5e call 0x11d52e70 */
  push32(0x11d52b63u); f_11d52e70();
  /* 11d52b63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d52b66:;
  /* 11d52b66 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52b6b:;
  /* 11d52b6b mov edx, dword ptr [0x11d719b8] */
  EDX = (r32((uint32_t)(0x11d719b8)));
  /* 11d52b71 mov dword ptr [0x11d719c8], edx */
  w32((uint32_t)(0x11d719c8), (EDX));
  /* 11d52b77 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52b7a push eax */
  push32((uint32_t)(EAX));
  /* 11d52b7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52b7e push ecx */
  push32((uint32_t)(ECX));
  /* 11d52b7f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d52b81 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52b84 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d52b86 push eax */
  push32((uint32_t)(EAX));
  /* 11d52b87 call 0x11d52ec0 */
  push32(0x11d52b8cu); f_11d52ec0();
  /* 11d52b8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52b8f jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52b94:;
  /* 11d52b94 mov ecx, dword ptr [0x11d719b8] */
  ECX = (r32((uint32_t)(0x11d719b8)));
  /* 11d52b9a mov dword ptr [0x11d719c8], ecx */
  w32((uint32_t)(0x11d719c8), (ECX));
  /* 11d52ba0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52ba3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11d52ba6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d52ba9 jmp 0x11d52bfd */
  goto L_11d52bfd;
L_11d52bab:;
  /* 11d52bab mov ecx, dword ptr [0x11d719b8] */
  ECX = (r32((uint32_t)(0x11d719b8)));
  /* 11d52bb1 mov dword ptr [0x11d719c8], ecx */
  w32((uint32_t)(0x11d719c8), (ECX));
  /* 11d52bb7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52bba push edx */
  push32((uint32_t)(EDX));
  /* 11d52bbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52bbe push eax */
  push32((uint32_t)(EAX));
  /* 11d52bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 11d52bc1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52bc4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d52bc7 push edx */
  push32((uint32_t)(EDX));
  /* 11d52bc8 call 0x11d52ec0 */
  push32(0x11d52bcdu); f_11d52ec0();
  /* 11d52bcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52bd0 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52bd5:;
  /* 11d52bd5 mov eax, dword ptr [0x11d719b8] */
  EAX = (r32((uint32_t)(0x11d719b8)));
  /* 11d52bda mov dword ptr [0x11d719c8], eax */
  w32((uint32_t)(0x11d719c8), (EAX));
  /* 11d52bdf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52be2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52be6 jne 0x11d52bf1 */
  if (!C.zf) goto L_11d52bf1;
  /* 11d52be8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11d52bef jmp 0x11d52bfd */
  goto L_11d52bfd;
L_11d52bf1:;
  /* 11d52bf1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52bf4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11d52bf7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d52bfa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d52bfd:;
  /* 11d52bfd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52c00 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11d52c03 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52c06 jge 0x11d52c11 */
  if ((C.sf==C.of)) goto L_11d52c11;
  /* 11d52c08 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d52c0f jmp 0x11d52c3e */
  goto L_11d52c3e;
L_11d52c11:;
  /* 11d52c11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52c14 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11d52c17 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d52c18 mov ecx, 7 */
  ECX = (0x7u);
  /* 11d52c1d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d52c1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d52c22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52c25 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11d52c28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d52c29 mov ecx, 7 */
  ECX = (0x7u);
  /* 11d52c2e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d52c30 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52c33 jl 0x11d52c3e */
  if ((C.sf!=C.of)) goto L_11d52c3e;
  /* 11d52c35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52c38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52c3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d52c3e:;
  /* 11d52c3e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52c41 push eax */
  push32((uint32_t)(EAX));
  /* 11d52c42 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52c45 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52c46 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d52c48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52c4b push edx */
  push32((uint32_t)(EDX));
  /* 11d52c4c call 0x11d52ec0 */
  push32(0x11d52c51u); f_11d52ec0();
  /* 11d52c51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52c54 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52c59:;
  /* 11d52c59 cmp dword ptr [0x11d719b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52c60 je 0x11d52c90 */
  if (C.zf) goto L_11d52c90;
  /* 11d52c62 mov dword ptr [0x11d719b8], 0 */
  w32((uint32_t)(0x11d719b8), (0x0u));
  /* 11d52c6c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d52c6f push eax */
  push32((uint32_t)(EAX));
  /* 11d52c70 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52c73 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52c74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52c77 push edx */
  push32((uint32_t)(EDX));
  /* 11d52c78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52c7b push eax */
  push32((uint32_t)(EAX));
  /* 11d52c7c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d52c7f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11d52c85 push edx */
  push32((uint32_t)(EDX));
  /* 11d52c86 call 0x11d53020 */
  push32(0x11d52c8bu); f_11d53020();
  /* 11d52c8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52c8e jmp 0x11d52cb2 */
  goto L_11d52cb2;
L_11d52c90:;
  /* 11d52c90 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d52c93 push eax */
  push32((uint32_t)(EAX));
  /* 11d52c94 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52c97 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52c98 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52c9b push edx */
  push32((uint32_t)(EDX));
  /* 11d52c9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52c9f push eax */
  push32((uint32_t)(EAX));
  /* 11d52ca0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d52ca3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11d52ca9 push edx */
  push32((uint32_t)(EDX));
  /* 11d52caa call 0x11d53020 */
  push32(0x11d52cafu); f_11d53020();
  /* 11d52caf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d52cb2:;
  /* 11d52cb2 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52cb7:;
  /* 11d52cb7 mov dword ptr [0x11d719b8], 0 */
  w32((uint32_t)(0x11d719b8), (0x0u));
  /* 11d52cc1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d52cc4 push eax */
  push32((uint32_t)(EAX));
  /* 11d52cc5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52cc8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52cc9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52ccc push edx */
  push32((uint32_t)(EDX));
  /* 11d52ccd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52cd0 push eax */
  push32((uint32_t)(EAX));
  /* 11d52cd1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d52cd4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11d52cda push edx */
  push32((uint32_t)(EDX));
  /* 11d52cdb call 0x11d53020 */
  push32(0x11d52ce0u); f_11d53020();
  /* 11d52ce0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52ce3 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52ce8:;
  /* 11d52ce8 mov eax, dword ptr [0x11d719b8] */
  EAX = (r32((uint32_t)(0x11d719b8)));
  /* 11d52ced mov dword ptr [0x11d719c8], eax */
  w32((uint32_t)(0x11d719c8), (EAX));
  /* 11d52cf2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52cf5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d52cf8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d52cf9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11d52cfe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d52d00 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d52d03 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52d06 push edx */
  push32((uint32_t)(EDX));
  /* 11d52d07 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52d0a push eax */
  push32((uint32_t)(EAX));
  /* 11d52d0b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d52d0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52d10 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52d11 call 0x11d52ec0 */
  push32(0x11d52d16u); f_11d52ec0();
  /* 11d52d16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52d19 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52d1e:;
  /* 11d52d1e mov edx, dword ptr [0x11d719b8] */
  EDX = (r32((uint32_t)(0x11d719b8)));
  /* 11d52d24 mov dword ptr [0x11d719c8], edx */
  w32((uint32_t)(0x11d719c8), (EDX));
  /* 11d52d2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52d2d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d52d30 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d52d31 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11d52d36 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d52d38 mov ecx, eax */
  ECX = (EAX);
  /* 11d52d3a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52d3d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d52d40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52d43 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d52d46 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d52d47 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11d52d4c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d52d4e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52d50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d52d53 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52d56 push eax */
  push32((uint32_t)(EAX));
  /* 11d52d57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52d5a push ecx */
  push32((uint32_t)(ECX));
  /* 11d52d5b push 4 */
  push32((uint32_t)(0x4u));
  /* 11d52d5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52d60 push edx */
  push32((uint32_t)(EDX));
  /* 11d52d61 call 0x11d52ec0 */
  push32(0x11d52d66u); f_11d52ec0();
  /* 11d52d66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52d69 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52d6b:;
  /* 11d52d6b call 0x11d53e80 */
  push32(0x11d52d70u); f_11d53e80();
  /* 11d52d70 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52d73 push eax */
  push32((uint32_t)(EAX));
  /* 11d52d74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52d77 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52d78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52d7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d52d7d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52d81 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11d52d84 mov ecx, dword ptr [eax*4 + 0x11d70e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11d70e1c)));
  /* 11d52d8b push ecx */
  push32((uint32_t)(ECX));
  /* 11d52d8c call 0x11d52e70 */
  push32(0x11d52d91u); f_11d52e70();
  /* 11d52d91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52d94 jmp 0x11d52db8 */
  goto L_11d52db8;
L_11d52d96:;
  /* 11d52d96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52d99 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d52d9b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11d52d9e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52da1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d52da3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52da6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52da9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d52dab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52dae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d52db0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d52db3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52db6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d52db8:;
  /* 11d52db8 pop esi */
  ESI = (pop32());
  /* 11d52db9 mov esp, ebp */
  ESP = (EBP);
  /* 11d52dbb pop ebp */
  EBP = (pop32());
  /* 11d52dbc ret  */
  ESPCHK(0x11d52850u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11d52e70 (72 bytes, 30 insns) */
void f_11d52e70(void) {
  FTRACE(0x11d52e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d52e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11d52e71 mov ebp, esp */
  EBP = (ESP);
L_11d52e73:;
  /* 11d52e73 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52e76 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52e79 je 0x11d52eb6 */
  if (C.zf) goto L_11d52eb6;
  /* 11d52e7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d52e7e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d52e81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d52e83 je 0x11d52eb6 */
  if (C.zf) goto L_11d52eb6;
  /* 11d52e85 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52e88 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d52e8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d52e8d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d52e8f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d52e91 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52e94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d52e96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52e99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52e9c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d52e9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d52ea1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52ea4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11d52ea7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52eaa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d52eac sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d52eaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52eb2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d52eb4 jmp 0x11d52e73 */
  goto L_11d52e73;
L_11d52eb6:;
  /* 11d52eb6 pop ebp */
  EBP = (pop32());
  /* 11d52eb7 ret  */
  ESPCHK(0x11d52e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ec0 @ 0x11d52ec0 (173 bytes, 64 insns) */
void f_11d52ec0(void) {
  FTRACE(0x11d52ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d52ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d52ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11d52ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d52ec4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d52ecb cmp dword ptr [0x11d719c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52ed2 je 0x11d52eea */
  if (C.zf) goto L_11d52eea;
  /* 11d52ed4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52ed7 push eax */
  push32((uint32_t)(EAX));
  /* 11d52ed8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52edb push ecx */
  push32((uint32_t)(ECX));
  /* 11d52edc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d52edf push edx */
  push32((uint32_t)(EDX));
  /* 11d52ee0 call 0x11d52f70 */
  push32(0x11d52ee5u); f_11d52f70();
  /* 11d52ee5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52ee8 jmp 0x11d52f69 */
  goto L_11d52f69;
L_11d52eea:;
  /* 11d52eea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52eed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52ef0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52ef2 jae 0x11d52f60 */
  if (!C.cf) goto L_11d52f60;
  /* 11d52ef4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52ef7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d52efa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11d52efd jmp 0x11d52f08 */
  goto L_11d52f08;
L_11d52eff:;
  /* 11d52eff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52f02 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d52f05 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11d52f08:;
  /* 11d52f08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52f0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52f0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d52f10 je 0x11d52f44 */
  if (C.zf) goto L_11d52f44;
  /* 11d52f12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d52f15 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d52f16 mov ecx, 0xa */
  ECX = (0xau);
  /* 11d52f1b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d52f1d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52f20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52f23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d52f25 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52f28 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11d52f2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d52f2e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d52f2f mov ecx, 0xa */
  ECX = (0xau);
  /* 11d52f34 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d52f36 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d52f39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52f3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52f3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d52f42 jmp 0x11d52eff */
  goto L_11d52eff;
L_11d52f44:;
  /* 11d52f44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52f47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d52f49 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52f4c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52f4f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d52f51 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52f54 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d52f56 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d52f59 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52f5c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d52f5e jmp 0x11d52f69 */
  goto L_11d52f69;
L_11d52f60:;
  /* 11d52f60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d52f63 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11d52f69:;
  /* 11d52f69 mov esp, ebp */
  ESP = (EBP);
  /* 11d52f6b pop ebp */
  EBP = (pop32());
  /* 11d52f6c ret  */
  ESPCHK(0x11d52ec0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11d52f70 (172 bytes, 65 insns) */
void f_11d52f70(void) {
  FTRACE(0x11d52f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d52f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11d52f71 mov ebp, esp */
  EBP = (ESP);
  /* 11d52f73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d52f76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52f79 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d52f7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d52f7e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52f81 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52f84 jbe 0x11d52fcb */
  if ((C.cf||C.zf)) goto L_11d52fcb;
L_11d52f86:;
  /* 11d52f86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d52f89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d52f8a mov ecx, 0xa */
  ECX = (0xau);
  /* 11d52f8f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d52f91 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52f94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52f97 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d52f99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52f9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d52f9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d52fa2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52fa5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d52fa7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d52faa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52fad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d52faf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d52fb2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d52fb3 mov ecx, 0xa */
  ECX = (0xau);
  /* 11d52fb8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d52fba mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d52fbd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52fc1 jle 0x11d52fcb */
  if ((C.zf||C.sf!=C.of)) goto L_11d52fcb;
  /* 11d52fc3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d52fc6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d52fc9 ja 0x11d52f86 */
  if ((!C.cf&&!C.zf)) goto L_11d52f86;
L_11d52fcb:;
  /* 11d52fcb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52fce mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d52fd0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d52fd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d52fd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52fd9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d52fdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52fde sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d52fe1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d52fe4:;
  /* 11d52fe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52fe7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d52fe9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11d52fec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52fef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d52ff2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d52ff4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d52ff6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d52ff9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d52ffc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d52fff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d53002 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11d53005 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11d53007 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5300a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5300d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d53010 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d53013 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53016 jb 0x11d52fe4 */
  if (C.cf) goto L_11d52fe4;
  /* 11d53018 mov esp, ebp */
  ESP = (EBP);
  /* 11d5301a pop ebp */
  EBP = (pop32());
  /* 11d5301b ret  */
  ESPCHK(0x11d52f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013020 @ 0x11d53020 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11d53020(void) {
  FTRACE(0x11d53020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d53020 push ebp */
  push32((uint32_t)(EBP));
  /* 11d53021 mov ebp, esp */
  EBP = (ESP);
  /* 11d53023 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11d53026:;
  /* 11d53026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53029 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d5302c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d5302e je 0x11d5349c */
  if (C.zf) goto L_11d5349c;
  /* 11d53034 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d53037 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5303a je 0x11d5349c */
  if (C.zf) goto L_11d5349c;
  /* 11d53040 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11d53044 mov dword ptr [0x11d719c8], 0 */
  w32((uint32_t)(0x11d719c8), (0x0u));
  /* 11d5304e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d53055 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53058 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d5305b jmp 0x11d53066 */
  goto L_11d53066;
L_11d5305d:;
  /* 11d5305d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d53060 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53063 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11d53066:;
  /* 11d53066 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d53069 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d5306c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5306f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d53072 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d53075 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53078 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d5307b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5307d jne 0x11d53081 */
  if (!C.zf) goto L_11d53081;
  /* 11d5307f jmp 0x11d5305d */
  goto L_11d5305d;
L_11d53081:;
  /* 11d53081 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d53084 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d53087 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d5308a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5308d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d53090 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d53093 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d53096 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d53099 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11d5309c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d530a0 ja 0x11d533f0 */
  if ((!C.cf&&!C.zf)) goto L_11d533f0;
  /* 11d530a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d530a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d530ab mov al, byte ptr [ecx + 0x11d534cc] */
  AL = (r8((uint32_t)(ECX + 0x11d534cc)));
  /* 11d530b1 jmp dword ptr [eax*4 + 0x11d534a0] */
  switch (EAX) {
    case 0: goto L_11d5330f;
    case 1: goto L_11d531f3;
    case 2: goto L_11d5317e;
    case 3: goto L_11d530b8;
    case 4: goto L_11d530f6;
    case 5: goto L_11d53157;
    case 6: goto L_11d531a5;
    case 7: goto L_11d531cc;
    case 8: goto L_11d5323a;
    case 9: goto L_11d53134;
    case 10: goto L_11d533f0;
    default: x86_unimpl("switch@0x11d530b1 out of table"); return;
  }
L_11d530b8:;
  /* 11d530b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d530bb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d530be mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d530c1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d530c4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d530c7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d530cb ja 0x11d530f1 */
  if ((!C.cf&&!C.zf)) goto L_11d530f1;
  /* 11d530cd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d530d0 jmp dword ptr [ecx*4 + 0x11d5351f] */
  switch (ECX) {
    case 0: goto L_11d530d7;
    case 1: goto L_11d530e1;
    case 2: goto L_11d530e7;
    case 3: goto L_11d530ed;
    case 4: goto L_11d53115;
    case 5: goto L_11d5311f;
    case 6: goto L_11d53125;
    case 7: goto L_11d5312b;
    default: x86_unimpl("switch@0x11d530d0 out of table"); return;
  }
L_11d530d7:;
  /* 11d530d7 mov dword ptr [0x11d719c8], 1 */
  w32((uint32_t)(0x11d719c8), (0x1u));
L_11d530e1:;
  /* 11d530e1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11d530e5 jmp 0x11d530f1 */
  goto L_11d530f1;
L_11d530e7:;
  /* 11d530e7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11d530eb jmp 0x11d530f1 */
  goto L_11d530f1;
L_11d530ed:;
  /* 11d530ed mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11d530f1:;
  /* 11d530f1 jmp 0x11d533f0 */
  goto L_11d533f0;
L_11d530f6:;
  /* 11d530f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d530f9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11d530fc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d530ff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d53102 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d53105 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53109 ja 0x11d5312f */
  if ((!C.cf&&!C.zf)) goto L_11d5312f;
  /* 11d5310b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d5310e jmp dword ptr [ecx*4 + 0x11d5352f] */
  switch (ECX) {
    case 0: goto L_11d53115;
    case 1: goto L_11d5311f;
    case 2: goto L_11d53125;
    case 3: goto L_11d5312b;
    default: x86_unimpl("switch@0x11d5310e out of table"); return;
  }
L_11d53115:;
  /* 11d53115 mov dword ptr [0x11d719c8], 1 */
  w32((uint32_t)(0x11d719c8), (0x1u));
L_11d5311f:;
  /* 11d5311f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11d53123 jmp 0x11d5312f */
  goto L_11d5312f;
L_11d53125:;
  /* 11d53125 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11d53129 jmp 0x11d5312f */
  goto L_11d5312f;
L_11d5312b:;
  /* 11d5312b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11d5312f:;
  /* 11d5312f jmp 0x11d533f0 */
  goto L_11d533f0;
L_11d53134:;
  /* 11d53134 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d53137 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11d5313a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5313e je 0x11d53148 */
  if (C.zf) goto L_11d53148;
  /* 11d53140 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53144 je 0x11d5314e */
  if (C.zf) goto L_11d5314e;
  /* 11d53146 jmp 0x11d53152 */
  goto L_11d53152;
L_11d53148:;
  /* 11d53148 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11d5314c jmp 0x11d53152 */
  goto L_11d53152;
L_11d5314e:;
  /* 11d5314e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11d53152:;
  /* 11d53152 jmp 0x11d533f0 */
  goto L_11d533f0;
L_11d53157:;
  /* 11d53157 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5315a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d5315d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53161 je 0x11d5316b */
  if (C.zf) goto L_11d5316b;
  /* 11d53163 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53167 je 0x11d53175 */
  if (C.zf) goto L_11d53175;
  /* 11d53169 jmp 0x11d53179 */
  goto L_11d53179;
L_11d5316b:;
  /* 11d5316b mov dword ptr [0x11d719c8], 1 */
  w32((uint32_t)(0x11d719c8), (0x1u));
L_11d53175:;
  /* 11d53175 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11d53179:;
  /* 11d53179 jmp 0x11d533f0 */
  goto L_11d533f0;
L_11d5317e:;
  /* 11d5317e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d53181 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11d53184 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53188 je 0x11d53192 */
  if (C.zf) goto L_11d53192;
  /* 11d5318a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5318e je 0x11d5319c */
  if (C.zf) goto L_11d5319c;
  /* 11d53190 jmp 0x11d531a0 */
  goto L_11d531a0;
L_11d53192:;
  /* 11d53192 mov dword ptr [0x11d719c8], 1 */
  w32((uint32_t)(0x11d719c8), (0x1u));
L_11d5319c:;
  /* 11d5319c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11d531a0:;
  /* 11d531a0 jmp 0x11d533f0 */
  goto L_11d533f0;
L_11d531a5:;
  /* 11d531a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d531a8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11d531ab cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d531af je 0x11d531b9 */
  if (C.zf) goto L_11d531b9;
  /* 11d531b1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d531b5 je 0x11d531c3 */
  if (C.zf) goto L_11d531c3;
  /* 11d531b7 jmp 0x11d531c7 */
  goto L_11d531c7;
L_11d531b9:;
  /* 11d531b9 mov dword ptr [0x11d719c8], 1 */
  w32((uint32_t)(0x11d719c8), (0x1u));
L_11d531c3:;
  /* 11d531c3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11d531c7:;
  /* 11d531c7 jmp 0x11d533f0 */
  goto L_11d533f0;
L_11d531cc:;
  /* 11d531cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d531cf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11d531d2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d531d6 je 0x11d531e0 */
  if (C.zf) goto L_11d531e0;
  /* 11d531d8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d531dc je 0x11d531ea */
  if (C.zf) goto L_11d531ea;
  /* 11d531de jmp 0x11d531ee */
  goto L_11d531ee;
L_11d531e0:;
  /* 11d531e0 mov dword ptr [0x11d719c8], 1 */
  w32((uint32_t)(0x11d719c8), (0x1u));
L_11d531ea:;
  /* 11d531ea mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11d531ee:;
  /* 11d531ee jmp 0x11d533f0 */
  goto L_11d533f0;
L_11d531f3:;
  /* 11d531f3 push 0x11d6db24 */
  push32((uint32_t)(0x11d6db24u));
  /* 11d531f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d531fb push ecx */
  push32((uint32_t)(ECX));
  /* 11d531fc call 0x11d53a50 */
  push32(0x11d53201u); f_11d53a50();
  /* 11d53201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d53206 jne 0x11d53213 */
  if (!C.zf) goto L_11d53213;
  /* 11d53208 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5320b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5320e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d53211 jmp 0x11d53231 */
  goto L_11d53231;
L_11d53213:;
  /* 11d53213 push 0x11d6db20 */
  push32((uint32_t)(0x11d6db20u));
  /* 11d53218 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5321b push eax */
  push32((uint32_t)(EAX));
  /* 11d5321c call 0x11d53a50 */
  push32(0x11d53221u); f_11d53a50();
  /* 11d53221 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d53226 jne 0x11d53231 */
  if (!C.zf) goto L_11d53231;
  /* 11d53228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5322b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5322e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d53231:;
  /* 11d53231 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11d53235 jmp 0x11d533f0 */
  goto L_11d533f0;
L_11d5323a:;
  /* 11d5323a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d5323d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53241 jg 0x11d53251 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d53251;
  /* 11d53243 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d53246 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11d5324c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d5324f jmp 0x11d5325d */
  goto L_11d5325d;
L_11d53251:;
  /* 11d53251 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d53254 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11d5325a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11d5325d:;
  /* 11d5325d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53261 jle 0x11d53304 */
  if ((C.zf||C.sf!=C.of)) goto L_11d53304;
  /* 11d53267 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d5326a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5326d jbe 0x11d53304 */
  if ((C.cf||C.zf)) goto L_11d53304;
  /* 11d53273 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d53276 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53278 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d5327a mov ecx, dword ptr [0x11d6fc98] */
  ECX = (r32((uint32_t)(0x11d6fc98)));
  /* 11d53280 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d53282 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d53286 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11d5328c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d5328e je 0x11d532c7 */
  if (C.zf) goto L_11d532c7;
  /* 11d53290 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d53293 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53296 jbe 0x11d532c7 */
  if ((C.cf||C.zf)) goto L_11d532c7;
  /* 11d53298 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5329b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d5329d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d532a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d532a2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11d532a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d532a7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d532a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d532ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d532af mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d532b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d532b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d532b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d532ba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d532bd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d532bf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d532c2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d532c5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11d532c7:;
  /* 11d532c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d532ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d532cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d532cf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d532d1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d532d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d532d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d532d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d532db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d532de mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d532e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d532e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d532e6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d532e9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d532ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d532ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d532f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d532f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d532f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d532f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d532fc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d532ff jmp 0x11d5325d */
  goto L_11d5325d;
L_11d53304:;
  /* 11d53304 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d53307 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d5330a jmp 0x11d53026 */
  goto L_11d53026;
L_11d5330f:;
  /* 11d5330f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d53312 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d53315 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d53317 je 0x11d533e2 */
  if (C.zf) goto L_11d533e2;
  /* 11d5331d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53320 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53323 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11d53326:;
  /* 11d53326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53329 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d5332c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d5332e je 0x11d533e0 */
  if (C.zf) goto L_11d533e0;
  /* 11d53334 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d53337 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5333a je 0x11d533e0 */
  if (C.zf) goto L_11d533e0;
  /* 11d53340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53343 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d53346 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53349 jne 0x11d53359 */
  if (!C.zf) goto L_11d53359;
  /* 11d5334b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5334e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53351 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11d53354 jmp 0x11d533e0 */
  goto L_11d533e0;
L_11d53359:;
  /* 11d53359 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5335c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d5335e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d53360 mov edx, dword ptr [0x11d6fc98] */
  EDX = (r32((uint32_t)(0x11d6fc98)));
  /* 11d53366 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53368 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11d5336c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11d53371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d53373 je 0x11d533ac */
  if (C.zf) goto L_11d533ac;
  /* 11d53375 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d53378 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5337b jbe 0x11d533ac */
  if ((C.cf||C.zf)) goto L_11d533ac;
  /* 11d5337d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d53380 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d53382 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53385 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d53387 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d53389 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5338c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d5338e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53391 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d53394 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d53396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53399 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5339c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d5339f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d533a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d533a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d533a7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d533aa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d533ac:;
  /* 11d533ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d533af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d533b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d533b4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d533b6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11d533b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d533bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d533bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d533c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d533c3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d533c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d533c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d533cb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11d533ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d533d1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d533d3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d533d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d533d9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d533db jmp 0x11d53326 */
  goto L_11d53326;
L_11d533e0:;
  /* 11d533e0 jmp 0x11d533eb */
  goto L_11d533eb;
L_11d533e2:;
  /* 11d533e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d533e5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d533e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11d533eb:;
  /* 11d533eb jmp 0x11d53026 */
  goto L_11d53026;
L_11d533f0:;
  /* 11d533f0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11d533f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d533f6 je 0x11d5341c */
  if (C.zf) goto L_11d5341c;
  /* 11d533f8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d533fb push edx */
  push32((uint32_t)(EDX));
  /* 11d533fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d533ff push eax */
  push32((uint32_t)(EAX));
  /* 11d53400 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d53403 push ecx */
  push32((uint32_t)(ECX));
  /* 11d53404 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d53407 push edx */
  push32((uint32_t)(EDX));
  /* 11d53408 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11d5340b push eax */
  push32((uint32_t)(EAX));
  /* 11d5340c call 0x11d52850 */
  push32(0x11d53411u); f_11d52850();
  /* 11d53411 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53414 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d53417 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11d5341a jmp 0x11d53497 */
  goto L_11d53497;
L_11d5341c:;
  /* 11d5341c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5341f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53421 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d53423 mov ecx, dword ptr [0x11d6fc98] */
  ECX = (r32((uint32_t)(0x11d6fc98)));
  /* 11d53429 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d5342b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d5342f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11d53435 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d53437 je 0x11d53468 */
  if (C.zf) goto L_11d53468;
  /* 11d53439 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5343c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d5343e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53441 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d53443 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d53445 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d53448 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d5344a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5344d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d53450 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d53452 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53455 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53458 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11d5345b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d5345e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d53460 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d53463 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d53466 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11d53468:;
  /* 11d53468 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5346b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d5346d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53470 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d53472 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d53474 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d53477 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d53479 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5347c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5347f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d53481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53484 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53487 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d5348a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d5348d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d5348f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d53492 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d53495 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d53497:;
  /* 11d53497 jmp 0x11d53026 */
  goto L_11d53026;
L_11d5349c:;
  /* 11d5349c mov esp, ebp */
  ESP = (EBP);
  /* 11d5349e pop ebp */
  EBP = (pop32());
  /* 11d5349f ret  */
  ESPCHK(0x11d53020u, _esp0);
  ESP += 4; return;
}

/* FUN_10013540 @ 0x11d53540 (650 bytes, 178 insns) */
void f_11d53540(void) {
  FTRACE(0x11d53540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d53540 push ebp */
  push32((uint32_t)(EBP));
  /* 11d53541 mov ebp, esp */
  EBP = (ESP);
  /* 11d53543 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d53549 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5354d jne 0x11d536a9 */
  if (!C.zf) goto L_11d536a9;
  /* 11d53553 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d53556 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11d5355c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11d53562 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d53565 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d5356c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11d53576 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d53578 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11d5357e push edx */
  push32((uint32_t)(EDX));
  /* 11d5357f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d53582 push eax */
  push32((uint32_t)(EAX));
  /* 11d53583 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d53586 push ecx */
  push32((uint32_t)(ECX));
  /* 11d53587 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d5358a push edx */
  push32((uint32_t)(EDX));
  /* 11d5358b call 0x11d54960 */
  push32(0x11d53590u); f_11d54960();
  /* 11d53590 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53593 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d53596 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5359a jne 0x11d5362f */
  if (!C.zf) goto L_11d5362f;
  /* 11d535a0 call dword ptr [0x11d743f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743f0))), 0x11d535a6u);
  /* 11d535a6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d535a9 je 0x11d535b0 */
  if (C.zf) goto L_11d535b0;
  /* 11d535ab jmp 0x11d5368d */
  goto L_11d5368d;
L_11d535b0:;
  /* 11d535b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d535b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d535b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d535b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d535b9 push eax */
  push32((uint32_t)(EAX));
  /* 11d535ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d535bd push ecx */
  push32((uint32_t)(ECX));
  /* 11d535be call 0x11d54960 */
  push32(0x11d535c3u); f_11d54960();
  /* 11d535c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d535c6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11d535cc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d535d3 jne 0x11d535da */
  if (!C.zf) goto L_11d535da;
  /* 11d535d5 jmp 0x11d5368d */
  goto L_11d5368d;
L_11d535da:;
  /* 11d535da push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11d535dc push 0x11d6db2c */
  push32((uint32_t)(0x11d6db2cu));
  /* 11d535e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d535e3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11d535e9 push edx */
  push32((uint32_t)(EDX));
  /* 11d535ea call 0x11d45380 */
  push32(0x11d535efu); f_11d45380();
  /* 11d535ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d535f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d535f5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d535f9 jne 0x11d53600 */
  if (!C.zf) goto L_11d53600;
  /* 11d535fb jmp 0x11d5368d */
  goto L_11d5368d;
L_11d53600:;
  /* 11d53600 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d53607 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d53609 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11d5360f push eax */
  push32((uint32_t)(EAX));
  /* 11d53610 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d53613 push ecx */
  push32((uint32_t)(ECX));
  /* 11d53614 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d53617 push edx */
  push32((uint32_t)(EDX));
  /* 11d53618 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d5361b push eax */
  push32((uint32_t)(EAX));
  /* 11d5361c call 0x11d54960 */
  push32(0x11d53621u); f_11d54960();
  /* 11d53621 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53624 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d53627 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5362b jne 0x11d5362f */
  if (!C.zf) goto L_11d5362f;
  /* 11d5362d jmp 0x11d5368d */
  goto L_11d5368d;
L_11d5362f:;
  /* 11d5362f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11d53631 push 0x11d6db2c */
  push32((uint32_t)(0x11d6db2cu));
  /* 11d53636 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d53638 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5363b push ecx */
  push32((uint32_t)(ECX));
  /* 11d5363c call 0x11d45380 */
  push32(0x11d53641u); f_11d45380();
  /* 11d53641 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53644 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11d5364a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11d5364c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11d53652 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53655 jne 0x11d53659 */
  if (!C.zf) goto L_11d53659;
  /* 11d53657 jmp 0x11d5368d */
  goto L_11d5368d;
L_11d53659:;
  /* 11d53659 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5365c push ecx */
  push32((uint32_t)(ECX));
  /* 11d5365d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d53660 push edx */
  push32((uint32_t)(EDX));
  /* 11d53661 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11d53667 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d53669 push ecx */
  push32((uint32_t)(ECX));
  /* 11d5366a call 0x11d48ba0 */
  push32(0x11d5366fu); f_11d48ba0();
  /* 11d5366f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53672 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53676 je 0x11d53686 */
  if (C.zf) goto L_11d53686;
  /* 11d53678 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5367a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5367d push edx */
  push32((uint32_t)(EDX));
  /* 11d5367e call 0x11d45e10 */
  push32(0x11d53683u); f_11d45e10();
  /* 11d53683 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d53686:;
  /* 11d53686 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53688 jmp 0x11d537c6 */
  goto L_11d537c6;
L_11d5368d:;
  /* 11d5368d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53691 je 0x11d536a1 */
  if (C.zf) goto L_11d536a1;
  /* 11d53693 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d53695 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d53698 push eax */
  push32((uint32_t)(EAX));
  /* 11d53699 call 0x11d45e10 */
  push32(0x11d5369eu); f_11d45e10();
  /* 11d5369e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d536a1:;
  /* 11d536a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d536a4 jmp 0x11d537c6 */
  goto L_11d537c6;
L_11d536a9:;
  /* 11d536a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d536ad jne 0x11d537c3 */
  if (!C.zf) goto L_11d537c3;
  /* 11d536b3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11d536bd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d536c0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11d536c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d536c8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11d536ce push edx */
  push32((uint32_t)(EDX));
  /* 11d536cf push 0x11d718e0 */
  push32((uint32_t)(0x11d718e0u));
  /* 11d536d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d536d7 push eax */
  push32((uint32_t)(EAX));
  /* 11d536d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d536db push ecx */
  push32((uint32_t)(ECX));
  /* 11d536dc call 0x11d547c0 */
  push32(0x11d536e1u); f_11d547c0();
  /* 11d536e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d536e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d536e6 jne 0x11d536f0 */
  if (!C.zf) goto L_11d536f0;
  /* 11d536e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d536eb jmp 0x11d537c6 */
  goto L_11d537c6;
L_11d536f0:;
  /* 11d536f0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d536f6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11d536f9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11d53703 jmp 0x11d53714 */
  goto L_11d53714;
L_11d53705:;
  /* 11d53705 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d5370b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5370e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11d53714:;
  /* 11d53714 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5371b jge 0x11d537bf */
  if ((C.sf==C.of)) goto L_11d537bf;
  /* 11d53721 cmp dword ptr [0x11d6fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d6fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53728 jle 0x11d5375b */
  if ((C.zf||C.sf!=C.of)) goto L_11d5375b;
  /* 11d5372a push 4 */
  push32((uint32_t)(0x4u));
  /* 11d5372c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d53732 mov dl, byte ptr [ecx*2 + 0x11d718e0] */
  DL = (r8((uint32_t)(ECX*2 + 0x11d718e0)));
  /* 11d53739 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11d5373f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11d53745 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d5374a push eax */
  push32((uint32_t)(EAX));
  /* 11d5374b call 0x11d4b390 */
  push32(0x11d53750u); f_11d4b390();
  /* 11d53750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53753 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11d53759 jmp 0x11d5378e */
  goto L_11d5378e;
L_11d5375b:;
  /* 11d5375b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11d53761 mov dl, byte ptr [ecx*2 + 0x11d718e0] */
  DL = (r8((uint32_t)(ECX*2 + 0x11d718e0)));
  /* 11d53768 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11d5376e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11d53774 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d53779 mov ecx, dword ptr [0x11d6fc98] */
  ECX = (r32((uint32_t)(0x11d6fc98)));
  /* 11d5377f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d53781 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d53785 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d53788 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11d5378e:;
  /* 11d5378e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53795 je 0x11d537b8 */
  if (C.zf) goto L_11d537b8;
  /* 11d53797 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d5379d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d537a0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d537a3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11d537aa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11d537ae mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11d537b4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d537b6 jmp 0x11d537ba */
  goto L_11d537ba;
L_11d537b8:;
  /* 11d537b8 jmp 0x11d537bf */
  goto L_11d537bf;
L_11d537ba:;
  /* 11d537ba jmp 0x11d53705 */
  goto L_11d53705;
L_11d537bf:;
  /* 11d537bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d537c1 jmp 0x11d537c6 */
  goto L_11d537c6;
L_11d537c3:;
  /* 11d537c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d537c6:;
  /* 11d537c6 mov esp, ebp */
  ESP = (EBP);
  /* 11d537c8 pop ebp */
  EBP = (pop32());
  /* 11d537c9 ret  */
  ESPCHK(0x11d53540u, _esp0);
  ESP += 4; return;
}

/* FUN_100137d0 @ 0x11d537d0 (10 bytes, 5 insns) */
void f_11d537d0(void) {
  FTRACE(0x11d537d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d537d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d537d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d537d3 mov eax, dword ptr [0x11d70d88] */
  EAX = (r32((uint32_t)(0x11d70d88)));
  /* 11d537d8 pop ebp */
  EBP = (pop32());
  /* 11d537d9 ret  */
  ESPCHK(0x11d537d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100137e0 @ 0x11d537e0 (575 bytes, 196 insns) */
void f_11d537e0(void) {
  FTRACE(0x11d537e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d537e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d537e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d537e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d537e5 push 0x11d6db38 */
  push32((uint32_t)(0x11d6db38u));
  /* 11d537ea push 0x11d4e488 */
  push32((uint32_t)(0x11d4e488u));
  /* 11d537ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d537f5 push eax */
  push32((uint32_t)(EAX));
  /* 11d537f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d537fd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53800 push ebx */
  push32((uint32_t)(EBX));
  /* 11d53801 push esi */
  push32((uint32_t)(ESI));
  /* 11d53802 push edi */
  push32((uint32_t)(EDI));
  /* 11d53803 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d53806 cmp dword ptr [0x11d718ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5380d jne 0x11d5385e */
  if (!C.zf) goto L_11d5385e;
  /* 11d5380f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11d53812 push eax */
  push32((uint32_t)(EAX));
  /* 11d53813 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d53815 push 0x11d6d26c */
  push32((uint32_t)(0x11d6d26cu));
  /* 11d5381a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d5381c call dword ptr [0x11d74330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74330))), 0x11d53822u);
  /* 11d53822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d53824 je 0x11d53832 */
  if (C.zf) goto L_11d53832;
  /* 11d53826 mov dword ptr [0x11d718ec], 1 */
  w32((uint32_t)(0x11d718ec), (0x1u));
  /* 11d53830 jmp 0x11d5385e */
  goto L_11d5385e;
L_11d53832:;
  /* 11d53832 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11d53835 push ecx */
  push32((uint32_t)(ECX));
  /* 11d53836 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d53838 push 0x11d6d268 */
  push32((uint32_t)(0x11d6d268u));
  /* 11d5383d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d5383f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d53841 call dword ptr [0x11d74334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74334))), 0x11d53847u);
  /* 11d53847 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d53849 je 0x11d53857 */
  if (C.zf) goto L_11d53857;
  /* 11d5384b mov dword ptr [0x11d718ec], 2 */
  w32((uint32_t)(0x11d718ec), (0x2u));
  /* 11d53855 jmp 0x11d5385e */
  goto L_11d5385e;
L_11d53857:;
  /* 11d53857 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53859 jmp 0x11d53a39 */
  goto L_11d53a39;
L_11d5385e:;
  /* 11d5385e cmp dword ptr [0x11d718ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d718ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53865 jne 0x11d53882 */
  if (!C.zf) goto L_11d53882;
  /* 11d53867 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d5386a push edx */
  push32((uint32_t)(EDX));
  /* 11d5386b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5386e push eax */
  push32((uint32_t)(EAX));
  /* 11d5386f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d53872 push ecx */
  push32((uint32_t)(ECX));
  /* 11d53873 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53876 push edx */
  push32((uint32_t)(EDX));
  /* 11d53877 call dword ptr [0x11d74330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74330))), 0x11d5387du);
  /* 11d5387d jmp 0x11d53a39 */
  goto L_11d53a39;
L_11d53882:;
  /* 11d53882 cmp dword ptr [0x11d718ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11d718ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53889 jne 0x11d53a37 */
  if (!C.zf) goto L_11d53a37;
  /* 11d5388f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53893 jne 0x11d5389d */
  if (!C.zf) goto L_11d5389d;
  /* 11d53895 mov eax, dword ptr [0x11d71860] */
  EAX = (r32((uint32_t)(0x11d71860)));
  /* 11d5389a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11d5389d:;
  /* 11d5389d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5389f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d538a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d538a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d538a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d538a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d538a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d538ac push edx */
  push32((uint32_t)(EDX));
  /* 11d538ad push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d538b2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d538b5 push eax */
  push32((uint32_t)(EAX));
  /* 11d538b6 call dword ptr [0x11d74384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74384))), 0x11d538bcu);
  /* 11d538bc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d538bf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d538c3 jne 0x11d538cc */
  if (!C.zf) goto L_11d538cc;
  /* 11d538c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d538c7 jmp 0x11d53a39 */
  goto L_11d53a39;
L_11d538cc:;
  /* 11d538cc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d538d3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d538d6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d538d9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d538db call 0x11d48520 */
  push32(0x11d538e0u); f_11d48520();
  /* 11d538e0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11d538e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d538e6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11d538e9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11d538ec mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d538ef push edx */
  push32((uint32_t)(EDX));
  /* 11d538f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d538f2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d538f5 push eax */
  push32((uint32_t)(EAX));
  /* 11d538f6 call 0x11d490f0 */
  push32(0x11d538fbu); f_11d490f0();
  /* 11d538fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d538fe mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d53905 jmp 0x11d5391e */
  goto L_11d5391e;
  /* 11d53907 mov eax, 1 */
  EAX = (0x1u);
  /* 11d5390c ret  */
  ESPCHK(0x11d537e0u, _esp0);
  ESP += 4; return;
  /* 11d5390d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d53910 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11d53917 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d5391e:;
  /* 11d5391e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53922 jne 0x11d5392b */
  if (!C.zf) goto L_11d5392b;
  /* 11d53924 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53926 jmp 0x11d53a39 */
  goto L_11d53a39;
L_11d5392b:;
  /* 11d5392b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5392d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5392f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d53932 push ecx */
  push32((uint32_t)(ECX));
  /* 11d53933 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d53936 push edx */
  push32((uint32_t)(EDX));
  /* 11d53937 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5393a push eax */
  push32((uint32_t)(EAX));
  /* 11d5393b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d5393e push ecx */
  push32((uint32_t)(ECX));
  /* 11d5393f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d53944 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d53947 push edx */
  push32((uint32_t)(EDX));
  /* 11d53948 call dword ptr [0x11d74384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74384))), 0x11d5394eu);
  /* 11d5394e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d53950 jne 0x11d53959 */
  if (!C.zf) goto L_11d53959;
  /* 11d53952 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53954 jmp 0x11d53a39 */
  goto L_11d53a39;
L_11d53959:;
  /* 11d53959 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d53960 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d53963 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11d53967 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5396a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d5396c call 0x11d48520 */
  push32(0x11d53971u); f_11d48520();
  /* 11d53971 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11d53974 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d53977 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d5397a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d5397d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d53984 jmp 0x11d5399d */
  goto L_11d5399d;
  /* 11d53986 mov eax, 1 */
  EAX = (0x1u);
  /* 11d5398b ret  */
  ESPCHK(0x11d537e0u, _esp0);
  ESP += 4; return;
  /* 11d5398c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d5398f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d53996 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d5399d:;
  /* 11d5399d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d539a1 jne 0x11d539aa */
  if (!C.zf) goto L_11d539aa;
  /* 11d539a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d539a5 jmp 0x11d53a39 */
  goto L_11d53a39;
L_11d539aa:;
  /* 11d539aa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d539ae jne 0x11d539b9 */
  if (!C.zf) goto L_11d539b9;
  /* 11d539b0 mov edx, dword ptr [0x11d71850] */
  EDX = (r32((uint32_t)(0x11d71850)));
  /* 11d539b6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11d539b9:;
  /* 11d539b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d539bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d539bf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11d539c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d539c8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d539cb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11d539d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d539d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d539d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d539d9 push edx */
  push32((uint32_t)(EDX));
  /* 11d539da mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d539dd push eax */
  push32((uint32_t)(EAX));
  /* 11d539de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d539e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d539e2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d539e5 push edx */
  push32((uint32_t)(EDX));
  /* 11d539e6 call dword ptr [0x11d74334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74334))), 0x11d539ecu);
  /* 11d539ec mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d539ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d539f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d539f5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d539f7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11d539fc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53a02 je 0x11d53a18 */
  if (C.zf) goto L_11d53a18;
  /* 11d53a04 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d53a07 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d53a0a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d53a0c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d53a10 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53a16 je 0x11d53a1c */
  if (C.zf) goto L_11d53a1c;
L_11d53a18:;
  /* 11d53a18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53a1a jmp 0x11d53a39 */
  goto L_11d53a39;
L_11d53a1c:;
  /* 11d53a1c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d53a1f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d53a21 push eax */
  push32((uint32_t)(EAX));
  /* 11d53a22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d53a25 push ecx */
  push32((uint32_t)(ECX));
  /* 11d53a26 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d53a29 push edx */
  push32((uint32_t)(EDX));
  /* 11d53a2a call 0x11d4d270 */
  push32(0x11d53a2fu); f_11d4d270();
  /* 11d53a2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53a32 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d53a35 jmp 0x11d53a39 */
  goto L_11d53a39;
L_11d53a37:;
  /* 11d53a37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d53a39:;
  /* 11d53a39 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11d53a3c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d53a3f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d53a46 pop edi */
  EDI = (pop32());
  /* 11d53a47 pop esi */
  ESI = (pop32());
  /* 11d53a48 pop ebx */
  EBX = (pop32());
  /* 11d53a49 mov esp, ebp */
  ESP = (EBP);
  /* 11d53a4b pop ebp */
  EBP = (pop32());
  /* 11d53a4c ret  */
  ESPCHK(0x11d537e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a50 @ 0x11d53a50 (208 bytes, 85 insns) */
void f_11d53a50(void) {
  FTRACE(0x11d53a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d53a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11d53a51 mov ebp, esp */
  EBP = (ESP);
  /* 11d53a53 push edi */
  push32((uint32_t)(EDI));
  /* 11d53a54 push esi */
  push32((uint32_t)(ESI));
  /* 11d53a55 push ebx */
  push32((uint32_t)(EBX));
  /* 11d53a56 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d53a59 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53a5c lea eax, [0x11d71848] */
  EAX = ((uint32_t)(0x11d71848));
  /* 11d53a62 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53a66 jne 0x11d53aa3 */
  if (!C.zf) goto L_11d53aa3;
  /* 11d53a68 mov al, 0xff */
  AL = (0xffu);
  /* 11d53a6a mov edi, edi */
  EDI = (EDI);
L_11d53a6c:;
  /* 11d53a6c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d53a6e je 0x11d53a9e */
  if (C.zf) goto L_11d53a9e;
  /* 11d53a70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d53a72 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d53a73 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11d53a75 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d53a76 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d53a78 je 0x11d53a6c */
  if (C.zf) goto L_11d53a6c;
  /* 11d53a7a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d53a7c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d53a7e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d53a80 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11d53a83 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d53a85 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d53a87 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11d53a89 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d53a8b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d53a8d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d53a8f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11d53a92 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d53a94 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d53a96 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d53a98 je 0x11d53a6c */
  if (C.zf) goto L_11d53a6c;
  /* 11d53a9a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d53a9c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11d53a9e:;
  /* 11d53a9e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11d53aa1 jmp 0x11d53b1b */
  goto L_11d53b1b;
L_11d53aa3:;
  /* 11d53aa3 lock inc dword ptr [0x11d719dc] */
  x86_unimpl("lock inc @ 0x11d53aa3");
  /* 11d53aaa cmp dword ptr [0x11d719cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53ab1 jg 0x11d53ab7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d53ab7;
  /* 11d53ab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d53ab5 jmp 0x11d53acc */
  goto L_11d53acc;
L_11d53ab7:;
  /* 11d53ab7 lock dec dword ptr [0x11d719dc] */
  x86_unimpl("lock dec @ 0x11d53ab7");
  /* 11d53abe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d53ac0 call 0x11d48d80 */
  push32(0x11d53ac5u); f_11d48d80();
  /* 11d53ac5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11d53acc:;
  /* 11d53acc mov eax, 0xff */
  EAX = (0xffu);
  /* 11d53ad1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d53ad3 nop  */
  /* nop */
L_11d53ad4:;
  /* 11d53ad4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d53ad6 je 0x11d53aff */
  if (C.zf) goto L_11d53aff;
  /* 11d53ad8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d53ada inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d53adb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11d53add inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d53ade cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d53ae0 je 0x11d53ad4 */
  if (C.zf) goto L_11d53ad4;
  /* 11d53ae2 push eax */
  push32((uint32_t)(EAX));
  /* 11d53ae3 push ebx */
  push32((uint32_t)(EBX));
  /* 11d53ae4 call 0x11d54bc0 */
  push32(0x11d53ae9u); f_11d54bc0();
  /* 11d53ae9 mov ebx, eax */
  EBX = (EAX);
  /* 11d53aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53aee call 0x11d54bc0 */
  push32(0x11d53af3u); f_11d54bc0();
  /* 11d53af3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53af6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d53af8 je 0x11d53ad4 */
  if (C.zf) goto L_11d53ad4;
  /* 11d53afa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d53afc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11d53aff:;
  /* 11d53aff mov ebx, eax */
  EBX = (EAX);
  /* 11d53b01 pop eax */
  EAX = (pop32());
  /* 11d53b02 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53b04 jne 0x11d53b0f */
  if (!C.zf) goto L_11d53b0f;
  /* 11d53b06 lock dec dword ptr [0x11d719dc] */
  x86_unimpl("lock dec @ 0x11d53b06");
  /* 11d53b0d jmp 0x11d53b19 */
  goto L_11d53b19;
L_11d53b0f:;
  /* 11d53b0f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d53b11 call 0x11d48e20 */
  push32(0x11d53b16u); f_11d48e20();
  /* 11d53b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d53b19:;
  /* 11d53b19 mov eax, ebx */
  EAX = (EBX);
L_11d53b1b:;
  /* 11d53b1b pop ebx */
  EBX = (pop32());
  /* 11d53b1c pop esi */
  ESI = (pop32());
  /* 11d53b1d pop edi */
  EDI = (pop32());
  /* 11d53b1e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d53b1f ret  */
  ESPCHK(0x11d53a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b20 @ 0x11d53b20 (257 bytes, 103 insns) */
void f_11d53b20(void) {
  FTRACE(0x11d53b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d53b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11d53b21 mov ebp, esp */
  EBP = (ESP);
  /* 11d53b23 push edi */
  push32((uint32_t)(EDI));
  /* 11d53b24 push esi */
  push32((uint32_t)(ESI));
  /* 11d53b25 push ebx */
  push32((uint32_t)(EBX));
  /* 11d53b26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d53b29 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d53b2b je 0x11d53c1a */
  if (C.zf) goto L_11d53c1a;
  /* 11d53b31 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53b34 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d53b37 lea eax, [0x11d71848] */
  EAX = ((uint32_t)(0x11d71848));
  /* 11d53b3d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53b41 jne 0x11d53b91 */
  if (!C.zf) goto L_11d53b91;
  /* 11d53b43 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11d53b45 mov bl, 0x5a */
  BL = (0x5au);
  /* 11d53b47 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11d53b49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d53b4c:;
  /* 11d53b4c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11d53b4e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11d53b50 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11d53b52 je 0x11d53b75 */
  if (C.zf) goto L_11d53b75;
  /* 11d53b54 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d53b56 je 0x11d53b75 */
  if (C.zf) goto L_11d53b75;
  /* 11d53b58 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d53b59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d53b5a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d53b5c jb 0x11d53b64 */
  if (C.cf) goto L_11d53b64;
  /* 11d53b5e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d53b60 ja 0x11d53b64 */
  if ((!C.cf&&!C.zf)) goto L_11d53b64;
  /* 11d53b62 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11d53b64:;
  /* 11d53b64 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d53b66 jb 0x11d53b6e */
  if (C.cf) goto L_11d53b6e;
  /* 11d53b68 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d53b6a ja 0x11d53b6e */
  if ((!C.cf&&!C.zf)) goto L_11d53b6e;
  /* 11d53b6c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11d53b6e:;
  /* 11d53b6e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d53b70 jne 0x11d53b7f */
  if (!C.zf) goto L_11d53b7f;
  /* 11d53b72 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d53b73 jne 0x11d53b4c */
  if (!C.zf) goto L_11d53b4c;
L_11d53b75:;
  /* 11d53b75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d53b77 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d53b79 je 0x11d53c1a */
  if (C.zf) goto L_11d53c1a;
L_11d53b7f:;
  /* 11d53b7f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11d53b84 jb 0x11d53c1a */
  if (C.cf) goto L_11d53c1a;
  /* 11d53b8a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d53b8c jmp 0x11d53c1a */
  goto L_11d53c1a;
L_11d53b91:;
  /* 11d53b91 lock inc dword ptr [0x11d719dc] */
  x86_unimpl("lock inc @ 0x11d53b91");
  /* 11d53b98 cmp dword ptr [0x11d719cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53b9f jg 0x11d53ba5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d53ba5;
  /* 11d53ba1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d53ba3 jmp 0x11d53bbe */
  goto L_11d53bbe;
L_11d53ba5:;
  /* 11d53ba5 lock dec dword ptr [0x11d719dc] */
  x86_unimpl("lock dec @ 0x11d53ba5");
  /* 11d53bac mov ebx, ecx */
  EBX = (ECX);
  /* 11d53bae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d53bb0 call 0x11d48d80 */
  push32(0x11d53bb5u); f_11d48d80();
  /* 11d53bb5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11d53bbc mov ecx, ebx */
  ECX = (EBX);
L_11d53bbe:;
  /* 11d53bbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53bc0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d53bc2 mov edi, edi */
  EDI = (EDI);
L_11d53bc4:;
  /* 11d53bc4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d53bc6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53bc8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11d53bca je 0x11d53bef */
  if (C.zf) goto L_11d53bef;
  /* 11d53bcc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d53bce je 0x11d53bef */
  if (C.zf) goto L_11d53bef;
  /* 11d53bd0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d53bd1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d53bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d53bd3 push eax */
  push32((uint32_t)(EAX));
  /* 11d53bd4 push ebx */
  push32((uint32_t)(EBX));
  /* 11d53bd5 call 0x11d54bc0 */
  push32(0x11d53bdau); f_11d54bc0();
  /* 11d53bda mov ebx, eax */
  EBX = (EAX);
  /* 11d53bdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53bdf call 0x11d54bc0 */
  push32(0x11d53be4u); f_11d54bc0();
  /* 11d53be4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53be7 pop ecx */
  ECX = (pop32());
  /* 11d53be8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53bea jne 0x11d53bf5 */
  if (!C.zf) goto L_11d53bf5;
  /* 11d53bec dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d53bed jne 0x11d53bc4 */
  if (!C.zf) goto L_11d53bc4;
L_11d53bef:;
  /* 11d53bef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d53bf1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53bf3 je 0x11d53bfe */
  if (C.zf) goto L_11d53bfe;
L_11d53bf5:;
  /* 11d53bf5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11d53bfa jb 0x11d53bfe */
  if (C.cf) goto L_11d53bfe;
  /* 11d53bfc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11d53bfe:;
  /* 11d53bfe pop eax */
  EAX = (pop32());
  /* 11d53bff or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53c01 jne 0x11d53c0c */
  if (!C.zf) goto L_11d53c0c;
  /* 11d53c03 lock dec dword ptr [0x11d719dc] */
  x86_unimpl("lock dec @ 0x11d53c03");
  /* 11d53c0a jmp 0x11d53c1a */
  goto L_11d53c1a;
L_11d53c0c:;
  /* 11d53c0c mov ebx, ecx */
  EBX = (ECX);
  /* 11d53c0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d53c10 call 0x11d48e20 */
  push32(0x11d53c15u); f_11d48e20();
  /* 11d53c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53c18 mov ecx, ebx */
  ECX = (EBX);
L_11d53c1a:;
  /* 11d53c1a mov eax, ecx */
  EAX = (ECX);
  /* 11d53c1c pop ebx */
  EBX = (pop32());
  /* 11d53c1d pop esi */
  ESI = (pop32());
  /* 11d53c1e pop edi */
  EDI = (pop32());
  /* 11d53c1f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d53c20 ret  */
  ESPCHK(0x11d53b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c30 @ 0x11d53c30 (255 bytes, 88 insns) */
void f_11d53c30(void) {
  FTRACE(0x11d53c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d53c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d53c31 mov ebp, esp */
  EBP = (ESP);
  /* 11d53c33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11d53c36:;
  /* 11d53c36 cmp dword ptr [0x11d6fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d6fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53c3d jle 0x11d53c56 */
  if ((C.zf||C.sf!=C.of)) goto L_11d53c56;
  /* 11d53c3f push 8 */
  push32((uint32_t)(0x8u));
  /* 11d53c41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53c44 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d53c46 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d53c48 push ecx */
  push32((uint32_t)(ECX));
  /* 11d53c49 call 0x11d4b390 */
  push32(0x11d53c4eu); f_11d4b390();
  /* 11d53c4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53c51 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d53c54 jmp 0x11d53c6f */
  goto L_11d53c6f;
L_11d53c56:;
  /* 11d53c56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53c59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53c5b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d53c5d mov ecx, dword ptr [0x11d6fc98] */
  ECX = (r32((uint32_t)(0x11d6fc98)));
  /* 11d53c63 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d53c65 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d53c69 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11d53c6c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11d53c6f:;
  /* 11d53c6f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53c73 je 0x11d53c80 */
  if (C.zf) goto L_11d53c80;
  /* 11d53c75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53c78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53c7b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d53c7e jmp 0x11d53c36 */
  goto L_11d53c36;
L_11d53c80:;
  /* 11d53c80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53c83 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d53c85 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d53c87 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d53c8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53c8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53c90 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d53c93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d53c96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d53c99 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53c9d je 0x11d53ca5 */
  if (C.zf) goto L_11d53ca5;
  /* 11d53c9f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53ca3 jne 0x11d53cb8 */
  if (!C.zf) goto L_11d53cb8;
L_11d53ca5:;
  /* 11d53ca5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53ca8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53caa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d53cac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d53caf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53cb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53cb5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11d53cb8:;
  /* 11d53cb8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11d53cbf:;
  /* 11d53cbf cmp dword ptr [0x11d6fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d6fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53cc6 jle 0x11d53cdb */
  if ((C.zf||C.sf!=C.of)) goto L_11d53cdb;
  /* 11d53cc8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d53cca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d53ccd push edx */
  push32((uint32_t)(EDX));
  /* 11d53cce call 0x11d4b390 */
  push32(0x11d53cd3u); f_11d4b390();
  /* 11d53cd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53cd6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d53cd9 jmp 0x11d53cf0 */
  goto L_11d53cf0;
L_11d53cdb:;
  /* 11d53cdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d53cde mov ecx, dword ptr [0x11d6fc98] */
  ECX = (r32((uint32_t)(0x11d6fc98)));
  /* 11d53ce4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d53ce6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d53cea and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d53ced mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11d53cf0:;
  /* 11d53cf0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53cf4 je 0x11d53d1b */
  if (C.zf) goto L_11d53d1b;
  /* 11d53cf6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d53cf9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d53cfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d53cff lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11d53d03 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d53d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53d09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d53d0b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d53d0d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d53d10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53d13 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53d16 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11d53d19 jmp 0x11d53cbf */
  goto L_11d53cbf;
L_11d53d1b:;
  /* 11d53d1b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53d1f jne 0x11d53d28 */
  if (!C.zf) goto L_11d53d28;
  /* 11d53d21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d53d24 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d53d26 jmp 0x11d53d2b */
  goto L_11d53d2b;
L_11d53d28:;
  /* 11d53d28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11d53d2b:;
  /* 11d53d2b mov esp, ebp */
  ESP = (EBP);
  /* 11d53d2d pop ebp */
  EBP = (pop32());
  /* 11d53d2e ret  */
  ESPCHK(0x11d53c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d30 @ 0x11d53d30 (17 bytes, 8 insns) */
void f_11d53d30(void) {
  FTRACE(0x11d53d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d53d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d53d31 mov ebp, esp */
  EBP = (ESP);
  /* 11d53d33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53d36 push eax */
  push32((uint32_t)(EAX));
  /* 11d53d37 call 0x11d53c30 */
  push32(0x11d53d3cu); f_11d53c30();
  /* 11d53d3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53d3f pop ebp */
  EBP = (pop32());
  /* 11d53d40 ret  */
  ESPCHK(0x11d53d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d50 @ 0x11d53d50 (297 bytes, 106 insns) */
void f_11d53d50(void) {
  FTRACE(0x11d53d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d53d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11d53d51 mov ebp, esp */
  EBP = (ESP);
  /* 11d53d53 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d53d56 push esi */
  push32((uint32_t)(ESI));
L_11d53d57:;
  /* 11d53d57 cmp dword ptr [0x11d6fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d6fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53d5e jle 0x11d53d77 */
  if ((C.zf||C.sf!=C.of)) goto L_11d53d77;
  /* 11d53d60 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d53d62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53d65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d53d67 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d53d69 push ecx */
  push32((uint32_t)(ECX));
  /* 11d53d6a call 0x11d4b390 */
  push32(0x11d53d6fu); f_11d4b390();
  /* 11d53d6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53d72 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d53d75 jmp 0x11d53d90 */
  goto L_11d53d90;
L_11d53d77:;
  /* 11d53d77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53d7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53d7c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d53d7e mov ecx, dword ptr [0x11d6fc98] */
  ECX = (r32((uint32_t)(0x11d6fc98)));
  /* 11d53d84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d53d86 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d53d8a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11d53d8d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11d53d90:;
  /* 11d53d90 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53d94 je 0x11d53da1 */
  if (C.zf) goto L_11d53da1;
  /* 11d53d96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53d99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53d9c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d53d9f jmp 0x11d53d57 */
  goto L_11d53d57;
L_11d53da1:;
  /* 11d53da1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53da4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d53da6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d53da8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d53dab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53dae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53db1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d53db4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d53db7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d53dba cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53dbe je 0x11d53dc6 */
  if (C.zf) goto L_11d53dc6;
  /* 11d53dc0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53dc4 jne 0x11d53dd9 */
  if (!C.zf) goto L_11d53dd9;
L_11d53dc6:;
  /* 11d53dc6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53dc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53dcb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d53dcd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d53dd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53dd3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53dd6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11d53dd9:;
  /* 11d53dd9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11d53de0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11d53de7:;
  /* 11d53de7 cmp dword ptr [0x11d6fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d6fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53dee jle 0x11d53e03 */
  if ((C.zf||C.sf!=C.of)) goto L_11d53e03;
  /* 11d53df0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d53df2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d53df5 push edx */
  push32((uint32_t)(EDX));
  /* 11d53df6 call 0x11d4b390 */
  push32(0x11d53dfbu); f_11d4b390();
  /* 11d53dfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53dfe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d53e01 jmp 0x11d53e18 */
  goto L_11d53e18;
L_11d53e03:;
  /* 11d53e03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d53e06 mov ecx, dword ptr [0x11d6fc98] */
  ECX = (r32((uint32_t)(0x11d6fc98)));
  /* 11d53e0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d53e0e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11d53e12 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11d53e15 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11d53e18:;
  /* 11d53e18 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53e1c je 0x11d53e59 */
  if (C.zf) goto L_11d53e59;
  /* 11d53e1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d53e20 push 0xa */
  push32((uint32_t)(0xau));
  /* 11d53e22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d53e25 push eax */
  push32((uint32_t)(EAX));
  /* 11d53e26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d53e29 push ecx */
  push32((uint32_t)(ECX));
  /* 11d53e2a call 0x11d54cf0 */
  push32(0x11d53e2fu); f_11d54cf0();
  /* 11d53e2f mov ecx, eax */
  ECX = (EAX);
  /* 11d53e31 mov esi, edx */
  ESI = (EDX);
  /* 11d53e33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d53e36 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d53e39 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d53e3a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53e3c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53e3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d53e41 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11d53e44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53e47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d53e49 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d53e4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d53e4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d53e51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53e54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11d53e57 jmp 0x11d53de7 */
  goto L_11d53de7;
L_11d53e59:;
  /* 11d53e59 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53e5d jne 0x11d53e6e */
  if (!C.zf) goto L_11d53e6e;
  /* 11d53e5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d53e62 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d53e64 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d53e67 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53e6a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d53e6c jmp 0x11d53e74 */
  goto L_11d53e74;
L_11d53e6e:;
  /* 11d53e6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d53e71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11d53e74:;
  /* 11d53e74 pop esi */
  ESI = (pop32());
  /* 11d53e75 mov esp, ebp */
  ESP = (EBP);
  /* 11d53e77 pop ebp */
  EBP = (pop32());
  /* 11d53e78 ret  */
  ESPCHK(0x11d53d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e80 @ 0x11d53e80 (61 bytes, 18 insns) */
void f_11d53e80(void) {
  FTRACE(0x11d53e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d53e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11d53e81 mov ebp, esp */
  EBP = (ESP);
  /* 11d53e83 cmp dword ptr [0x11d719a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53e8a jne 0x11d53ebb */
  if (!C.zf) goto L_11d53ebb;
  /* 11d53e8c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d53e8e call 0x11d48d80 */
  push32(0x11d53e93u); f_11d48d80();
  /* 11d53e93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53e96 cmp dword ptr [0x11d719a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53e9d jne 0x11d53eb1 */
  if (!C.zf) goto L_11d53eb1;
  /* 11d53e9f call 0x11d53ee0 */
  push32(0x11d53ea4u); f_11d53ee0();
  /* 11d53ea4 mov eax, dword ptr [0x11d719a8] */
  EAX = (r32((uint32_t)(0x11d719a8)));
  /* 11d53ea9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53eac mov dword ptr [0x11d719a8], eax */
  w32((uint32_t)(0x11d719a8), (EAX));
L_11d53eb1:;
  /* 11d53eb1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d53eb3 call 0x11d48e20 */
  push32(0x11d53eb8u); f_11d48e20();
  /* 11d53eb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d53ebb:;
  /* 11d53ebb pop ebp */
  EBP = (pop32());
  /* 11d53ebc ret  */
  ESPCHK(0x11d53e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ec0 @ 0x11d53ec0 (30 bytes, 11 insns) */
void f_11d53ec0(void) {
  FTRACE(0x11d53ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d53ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d53ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11d53ec3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d53ec5 call 0x11d48d80 */
  push32(0x11d53ecau); f_11d48d80();
  /* 11d53eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53ecd call 0x11d53ee0 */
  push32(0x11d53ed2u); f_11d53ee0();
  /* 11d53ed2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d53ed4 call 0x11d48e20 */
  push32(0x11d53ed9u); f_11d48e20();
  /* 11d53ed9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53edc pop ebp */
  EBP = (pop32());
  /* 11d53edd ret  */
  ESPCHK(0x11d53ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ee0 @ 0x11d53ee0 (939 bytes, 266 insns) */
void f_11d53ee0(void) {
  FTRACE(0x11d53ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d53ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d53ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11d53ee3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d53ee6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d53eed push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d53eef call 0x11d48d80 */
  push32(0x11d53ef4u); f_11d48d80();
  /* 11d53ef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53ef7 mov dword ptr [0x11d718f0], 0 */
  w32((uint32_t)(0x11d718f0), (0x0u));
  /* 11d53f01 mov dword ptr [0x11d70e38], 0xffffffff */
  w32((uint32_t)(0x11d70e38), (0xffffffffu));
  /* 11d53f0b mov eax, dword ptr [0x11d70e38] */
  EAX = (r32((uint32_t)(0x11d70e38)));
  /* 11d53f10 mov dword ptr [0x11d70e28], eax */
  w32((uint32_t)(0x11d70e28), (EAX));
  /* 11d53f15 push 0x11d6db98 */
  push32((uint32_t)(0x11d6db98u));
  /* 11d53f1a call 0x11d54d60 */
  push32(0x11d53f1fu); f_11d54d60();
  /* 11d53f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53f22 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d53f25 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53f29 jne 0x11d54063 */
  if (!C.zf) goto L_11d54063;
  /* 11d53f2f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d53f31 call 0x11d48e20 */
  push32(0x11d53f36u); f_11d48e20();
  /* 11d53f36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53f39 push 0x11d718f8 */
  push32((uint32_t)(0x11d718f8u));
  /* 11d53f3e call dword ptr [0x11d742f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742f4))), 0x11d53f44u);
  /* 11d53f44 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53f47 je 0x11d5405e */
  if (C.zf) goto L_11d5405e;
  /* 11d53f4d mov dword ptr [0x11d718f0], 1 */
  w32((uint32_t)(0x11d718f0), (0x1u));
  /* 11d53f57 mov ecx, dword ptr [0x11d718f8] */
  ECX = (r32((uint32_t)(0x11d718f8)));
  /* 11d53f5d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d53f60 mov dword ptr [0x11d70d90], ecx */
  w32((uint32_t)(0x11d70d90), (ECX));
  /* 11d53f66 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d53f68 mov dx, word ptr [0x11d7193e] */
  DX = (r16((uint32_t)(0x11d7193e)));
  /* 11d53f6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d53f71 je 0x11d53f89 */
  if (C.zf) goto L_11d53f89;
  /* 11d53f73 mov eax, dword ptr [0x11d7194c] */
  EAX = (r32((uint32_t)(0x11d7194c)));
  /* 11d53f78 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d53f7b mov ecx, dword ptr [0x11d70d90] */
  ECX = (r32((uint32_t)(0x11d70d90)));
  /* 11d53f81 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d53f83 mov dword ptr [0x11d70d90], ecx */
  w32((uint32_t)(0x11d70d90), (ECX));
L_11d53f89:;
  /* 11d53f89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d53f8b mov dx, word ptr [0x11d71992] */
  DX = (r16((uint32_t)(0x11d71992)));
  /* 11d53f92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d53f94 je 0x11d53fbe */
  if (C.zf) goto L_11d53fbe;
  /* 11d53f96 cmp dword ptr [0x11d719a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d53f9d je 0x11d53fbe */
  if (C.zf) goto L_11d53fbe;
  /* 11d53f9f mov dword ptr [0x11d70d94], 1 */
  w32((uint32_t)(0x11d70d94), (0x1u));
  /* 11d53fa9 mov eax, dword ptr [0x11d719a0] */
  EAX = (r32((uint32_t)(0x11d719a0)));
  /* 11d53fae sub eax, dword ptr [0x11d7194c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d7194c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d53fb4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d53fb7 mov dword ptr [0x11d70d98], eax */
  w32((uint32_t)(0x11d70d98), (EAX));
  /* 11d53fbc jmp 0x11d53fd2 */
  goto L_11d53fd2;
L_11d53fbe:;
  /* 11d53fbe mov dword ptr [0x11d70d94], 0 */
  w32((uint32_t)(0x11d70d94), (0x0u));
  /* 11d53fc8 mov dword ptr [0x11d70d98], 0 */
  w32((uint32_t)(0x11d70d98), (0x0u));
L_11d53fd2:;
  /* 11d53fd2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11d53fd5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d53fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d53fd8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d53fda mov edx, dword ptr [0x11d70e1c] */
  EDX = (r32((uint32_t)(0x11d70e1c)));
  /* 11d53fe0 push edx */
  push32((uint32_t)(EDX));
  /* 11d53fe1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d53fe3 push 0x11d718fc */
  push32((uint32_t)(0x11d718fcu));
  /* 11d53fe8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d53fed mov eax, dword ptr [0x11d71860] */
  EAX = (r32((uint32_t)(0x11d71860)));
  /* 11d53ff2 push eax */
  push32((uint32_t)(EAX));
  /* 11d53ff3 call dword ptr [0x11d74384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74384))), 0x11d53ff9u);
  /* 11d53ff9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d53ffb je 0x11d5400f */
  if (C.zf) goto L_11d5400f;
  /* 11d53ffd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54001 jne 0x11d5400f */
  if (!C.zf) goto L_11d5400f;
  /* 11d54003 mov ecx, dword ptr [0x11d70e1c] */
  ECX = (r32((uint32_t)(0x11d70e1c)));
  /* 11d54009 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11d5400d jmp 0x11d54018 */
  goto L_11d54018;
L_11d5400f:;
  /* 11d5400f mov edx, dword ptr [0x11d70e1c] */
  EDX = (r32((uint32_t)(0x11d70e1c)));
  /* 11d54015 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11d54018:;
  /* 11d54018 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11d5401b push eax */
  push32((uint32_t)(EAX));
  /* 11d5401c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5401e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d54020 mov ecx, dword ptr [0x11d70e20] */
  ECX = (r32((uint32_t)(0x11d70e20)));
  /* 11d54026 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54027 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d54029 push 0x11d71950 */
  push32((uint32_t)(0x11d71950u));
  /* 11d5402e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d54033 mov edx, dword ptr [0x11d71860] */
  EDX = (r32((uint32_t)(0x11d71860)));
  /* 11d54039 push edx */
  push32((uint32_t)(EDX));
  /* 11d5403a call dword ptr [0x11d74384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74384))), 0x11d54040u);
  /* 11d54040 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d54042 je 0x11d54055 */
  if (C.zf) goto L_11d54055;
  /* 11d54044 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54048 jne 0x11d54055 */
  if (!C.zf) goto L_11d54055;
  /* 11d5404a mov eax, dword ptr [0x11d70e20] */
  EAX = (r32((uint32_t)(0x11d70e20)));
  /* 11d5404f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11d54053 jmp 0x11d5405e */
  goto L_11d5405e;
L_11d54055:;
  /* 11d54055 mov ecx, dword ptr [0x11d70e20] */
  ECX = (r32((uint32_t)(0x11d70e20)));
  /* 11d5405b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11d5405e:;
  /* 11d5405e jmp 0x11d54287 */
  goto L_11d54287;
L_11d54063:;
  /* 11d54063 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54066 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d54069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d5406b je 0x11d5408d */
  if (C.zf) goto L_11d5408d;
  /* 11d5406d cmp dword ptr [0x11d719a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54074 je 0x11d5409c */
  if (C.zf) goto L_11d5409c;
  /* 11d54076 mov ecx, dword ptr [0x11d719a4] */
  ECX = (r32((uint32_t)(0x11d719a4)));
  /* 11d5407c push ecx */
  push32((uint32_t)(ECX));
  /* 11d5407d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54080 push edx */
  push32((uint32_t)(EDX));
  /* 11d54081 call 0x11d51010 */
  push32(0x11d54086u); f_11d51010();
  /* 11d54086 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d5408b jne 0x11d5409c */
  if (!C.zf) goto L_11d5409c;
L_11d5408d:;
  /* 11d5408d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d5408f call 0x11d48e20 */
  push32(0x11d54094u); f_11d48e20();
  /* 11d54094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54097 jmp 0x11d54287 */
  goto L_11d54287;
L_11d5409c:;
  /* 11d5409c push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5409e mov eax, dword ptr [0x11d719a4] */
  EAX = (r32((uint32_t)(0x11d719a4)));
  /* 11d540a3 push eax */
  push32((uint32_t)(EAX));
  /* 11d540a4 call 0x11d45e10 */
  push32(0x11d540a9u); f_11d45e10();
  /* 11d540a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d540ac push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11d540b1 push 0x11d6db90 */
  push32((uint32_t)(0x11d6db90u));
  /* 11d540b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d540b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d540bb push ecx */
  push32((uint32_t)(ECX));
  /* 11d540bc call 0x11d481b0 */
  push32(0x11d540c1u); f_11d481b0();
  /* 11d540c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d540c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d540c7 push eax */
  push32((uint32_t)(EAX));
  /* 11d540c8 call 0x11d45380 */
  push32(0x11d540cdu); f_11d45380();
  /* 11d540cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d540d0 mov dword ptr [0x11d719a4], eax */
  w32((uint32_t)(0x11d719a4), (EAX));
  /* 11d540d5 cmp dword ptr [0x11d719a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d540dc jne 0x11d540ed */
  if (!C.zf) goto L_11d540ed;
  /* 11d540de push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d540e0 call 0x11d48e20 */
  push32(0x11d540e5u); f_11d48e20();
  /* 11d540e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d540e8 jmp 0x11d54287 */
  goto L_11d54287;
L_11d540ed:;
  /* 11d540ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d540f0 push edx */
  push32((uint32_t)(EDX));
  /* 11d540f1 mov eax, dword ptr [0x11d719a4] */
  EAX = (r32((uint32_t)(0x11d719a4)));
  /* 11d540f6 push eax */
  push32((uint32_t)(EAX));
  /* 11d540f7 call 0x11d48330 */
  push32(0x11d540fcu); f_11d48330();
  /* 11d540fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d540ff push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d54101 call 0x11d48e20 */
  push32(0x11d54106u); f_11d48e20();
  /* 11d54106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54109 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d5410b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5410e push ecx */
  push32((uint32_t)(ECX));
  /* 11d5410f mov edx, dword ptr [0x11d70e1c] */
  EDX = (r32((uint32_t)(0x11d70e1c)));
  /* 11d54115 push edx */
  push32((uint32_t)(EDX));
  /* 11d54116 call 0x11d48ba0 */
  push32(0x11d5411bu); f_11d48ba0();
  /* 11d5411b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5411e mov eax, dword ptr [0x11d70e1c] */
  EAX = (r32((uint32_t)(0x11d70e1c)));
  /* 11d54123 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11d54127 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5412a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5412d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d54130 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54133 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d54136 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54139 jne 0x11d5414d */
  if (!C.zf) goto L_11d5414d;
  /* 11d5413b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5413e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54141 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d54144 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54147 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5414a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11d5414d:;
  /* 11d5414d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54150 push eax */
  push32((uint32_t)(EAX));
  /* 11d54151 call 0x11d53c30 */
  push32(0x11d54156u); f_11d53c30();
  /* 11d54156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54159 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d5415f mov dword ptr [0x11d70d90], eax */
  w32((uint32_t)(0x11d70d90), (EAX));
L_11d54164:;
  /* 11d54164 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54167 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d5416a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5416d je 0x11d54185 */
  if (C.zf) goto L_11d54185;
  /* 11d5416f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54172 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d54175 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54178 jl 0x11d54190 */
  if ((C.sf!=C.of)) goto L_11d54190;
  /* 11d5417a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5417d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d54180 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54183 jg 0x11d54190 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d54190;
L_11d54185:;
  /* 11d54185 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54188 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5418b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d5418e jmp 0x11d54164 */
  goto L_11d54164;
L_11d54190:;
  /* 11d54190 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54193 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d54196 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54199 jne 0x11d54235 */
  if (!C.zf) goto L_11d54235;
  /* 11d5419f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d541a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d541a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d541a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d541ab push edx */
  push32((uint32_t)(EDX));
  /* 11d541ac call 0x11d53c30 */
  push32(0x11d541b1u); f_11d53c30();
  /* 11d541b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d541b4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d541b7 mov ecx, dword ptr [0x11d70d90] */
  ECX = (r32((uint32_t)(0x11d70d90)));
  /* 11d541bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d541bf mov dword ptr [0x11d70d90], ecx */
  w32((uint32_t)(0x11d70d90), (ECX));
L_11d541c5:;
  /* 11d541c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d541c8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d541cb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d541ce jl 0x11d541e6 */
  if ((C.sf!=C.of)) goto L_11d541e6;
  /* 11d541d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d541d3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d541d6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d541d9 jg 0x11d541e6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d541e6;
  /* 11d541db mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d541de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d541e1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d541e4 jmp 0x11d541c5 */
  goto L_11d541c5;
L_11d541e6:;
  /* 11d541e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d541e9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d541ec cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d541ef jne 0x11d54235 */
  if (!C.zf) goto L_11d54235;
  /* 11d541f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d541f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d541f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d541fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d541fd push ecx */
  push32((uint32_t)(ECX));
  /* 11d541fe call 0x11d53c30 */
  push32(0x11d54203u); f_11d53c30();
  /* 11d54203 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54206 mov edx, dword ptr [0x11d70d90] */
  EDX = (r32((uint32_t)(0x11d70d90)));
  /* 11d5420c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5420e mov dword ptr [0x11d70d90], edx */
  w32((uint32_t)(0x11d70d90), (EDX));
L_11d54214:;
  /* 11d54214 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54217 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d5421a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5421d jl 0x11d54235 */
  if ((C.sf!=C.of)) goto L_11d54235;
  /* 11d5421f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54222 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11d54225 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54228 jg 0x11d54235 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d54235;
  /* 11d5422a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5422d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54230 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d54233 jmp 0x11d54214 */
  goto L_11d54214;
L_11d54235:;
  /* 11d54235 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54239 je 0x11d54249 */
  if (C.zf) goto L_11d54249;
  /* 11d5423b mov edx, dword ptr [0x11d70d90] */
  EDX = (r32((uint32_t)(0x11d70d90)));
  /* 11d54241 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d54243 mov dword ptr [0x11d70d90], edx */
  w32((uint32_t)(0x11d70d90), (EDX));
L_11d54249:;
  /* 11d54249 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5424c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d5424f mov dword ptr [0x11d70d94], ecx */
  w32((uint32_t)(0x11d70d94), (ECX));
  /* 11d54255 cmp dword ptr [0x11d70d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d70d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5425c je 0x11d5427e */
  if (C.zf) goto L_11d5427e;
  /* 11d5425e push 3 */
  push32((uint32_t)(0x3u));
  /* 11d54260 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54263 push edx */
  push32((uint32_t)(EDX));
  /* 11d54264 mov eax, dword ptr [0x11d70e20] */
  EAX = (r32((uint32_t)(0x11d70e20)));
  /* 11d54269 push eax */
  push32((uint32_t)(EAX));
  /* 11d5426a call 0x11d48ba0 */
  push32(0x11d5426fu); f_11d48ba0();
  /* 11d5426f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54272 mov ecx, dword ptr [0x11d70e20] */
  ECX = (r32((uint32_t)(0x11d70e20)));
  /* 11d54278 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11d5427c jmp 0x11d54287 */
  goto L_11d54287;
L_11d5427e:;
  /* 11d5427e mov edx, dword ptr [0x11d70e20] */
  EDX = (r32((uint32_t)(0x11d70e20)));
  /* 11d54284 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11d54287:;
  /* 11d54287 mov esp, ebp */
  ESP = (EBP);
  /* 11d54289 pop ebp */
  EBP = (pop32());
  /* 11d5428a ret  */
  ESPCHK(0x11d53ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014290 @ 0x11d54290 (46 bytes, 18 insns) */
void f_11d54290(void) {
  FTRACE(0x11d54290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d54290 push ebp */
  push32((uint32_t)(EBP));
  /* 11d54291 mov ebp, esp */
  EBP = (ESP);
  /* 11d54293 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54294 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d54296 call 0x11d48d80 */
  push32(0x11d5429bu); f_11d48d80();
  /* 11d5429b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5429e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d542a1 push eax */
  push32((uint32_t)(EAX));
  /* 11d542a2 call 0x11d542c0 */
  push32(0x11d542a7u); f_11d542c0();
  /* 11d542a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d542aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d542ad push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d542af call 0x11d48e20 */
  push32(0x11d542b4u); f_11d48e20();
  /* 11d542b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d542b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d542ba mov esp, ebp */
  ESP = (EBP);
  /* 11d542bc pop ebp */
  EBP = (pop32());
  /* 11d542bd ret  */
  ESPCHK(0x11d54290u, _esp0);
  ESP += 4; return;
}

/* FUN_100142c0 @ 0x11d542c0 (762 bytes, 246 insns) */
void f_11d542c0(void) {
  FTRACE(0x11d542c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d542c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d542c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d542c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d542c4 cmp dword ptr [0x11d70d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d70d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d542cb jne 0x11d542d4 */
  if (!C.zf) goto L_11d542d4;
  /* 11d542cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d542cf jmp 0x11d545b6 */
  goto L_11d545b6;
L_11d542d4:;
  /* 11d542d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d542d7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d542da cmp ecx, dword ptr [0x11d70e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d70e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d542e0 jne 0x11d542f4 */
  if (!C.zf) goto L_11d542f4;
  /* 11d542e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d542e5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d542e8 cmp eax, dword ptr [0x11d70e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d70e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d542ee je 0x11d544bb */
  if (C.zf) goto L_11d544bb;
L_11d542f4:;
  /* 11d542f4 cmp dword ptr [0x11d718f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d718f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d542fb je 0x11d54475 */
  if (C.zf) goto L_11d54475;
  /* 11d54301 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d54303 mov cx, word ptr [0x11d71990] */
  CX = (r16((uint32_t)(0x11d71990)));
  /* 11d5430a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d5430c jne 0x11d54369 */
  if (!C.zf) goto L_11d54369;
  /* 11d5430e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d54310 mov dx, word ptr [0x11d7199e] */
  DX = (r16((uint32_t)(0x11d7199e)));
  /* 11d54317 push edx */
  push32((uint32_t)(EDX));
  /* 11d54318 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d5431a mov ax, word ptr [0x11d7199c] */
  AX = (r16((uint32_t)(0x11d7199c)));
  /* 11d54320 push eax */
  push32((uint32_t)(EAX));
  /* 11d54321 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d54323 mov cx, word ptr [0x11d7199a] */
  CX = (r16((uint32_t)(0x11d7199a)));
  /* 11d5432a push ecx */
  push32((uint32_t)(ECX));
  /* 11d5432b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d5432d mov dx, word ptr [0x11d71998] */
  DX = (r16((uint32_t)(0x11d71998)));
  /* 11d54334 push edx */
  push32((uint32_t)(EDX));
  /* 11d54335 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54337 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d54339 mov ax, word ptr [0x11d71994] */
  AX = (r16((uint32_t)(0x11d71994)));
  /* 11d5433f push eax */
  push32((uint32_t)(EAX));
  /* 11d54340 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d54342 mov cx, word ptr [0x11d71996] */
  CX = (r16((uint32_t)(0x11d71996)));
  /* 11d54349 push ecx */
  push32((uint32_t)(ECX));
  /* 11d5434a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d5434c mov dx, word ptr [0x11d71992] */
  DX = (r16((uint32_t)(0x11d71992)));
  /* 11d54353 push edx */
  push32((uint32_t)(EDX));
  /* 11d54354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54357 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d5435a push ecx */
  push32((uint32_t)(ECX));
  /* 11d5435b push 1 */
  push32((uint32_t)(0x1u));
  /* 11d5435d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d5435f call 0x11d545c0 */
  push32(0x11d54364u); f_11d545c0();
  /* 11d54364 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54367 jmp 0x11d543ba */
  goto L_11d543ba;
L_11d54369:;
  /* 11d54369 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d5436b mov dx, word ptr [0x11d7199e] */
  DX = (r16((uint32_t)(0x11d7199e)));
  /* 11d54372 push edx */
  push32((uint32_t)(EDX));
  /* 11d54373 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d54375 mov ax, word ptr [0x11d7199c] */
  AX = (r16((uint32_t)(0x11d7199c)));
  /* 11d5437b push eax */
  push32((uint32_t)(EAX));
  /* 11d5437c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d5437e mov cx, word ptr [0x11d7199a] */
  CX = (r16((uint32_t)(0x11d7199a)));
  /* 11d54385 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54386 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d54388 mov dx, word ptr [0x11d71998] */
  DX = (r16((uint32_t)(0x11d71998)));
  /* 11d5438f push edx */
  push32((uint32_t)(EDX));
  /* 11d54390 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d54392 mov ax, word ptr [0x11d71996] */
  AX = (r16((uint32_t)(0x11d71996)));
  /* 11d54398 push eax */
  push32((uint32_t)(EAX));
  /* 11d54399 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5439b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5439d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d5439f mov cx, word ptr [0x11d71992] */
  CX = (r16((uint32_t)(0x11d71992)));
  /* 11d543a6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d543a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d543aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d543ad push eax */
  push32((uint32_t)(EAX));
  /* 11d543ae push 0 */
  push32((uint32_t)(0x0u));
  /* 11d543b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d543b2 call 0x11d545c0 */
  push32(0x11d543b7u); f_11d545c0();
  /* 11d543b7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d543ba:;
  /* 11d543ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d543bc mov cx, word ptr [0x11d7193c] */
  CX = (r16((uint32_t)(0x11d7193c)));
  /* 11d543c3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d543c5 jne 0x11d54422 */
  if (!C.zf) goto L_11d54422;
  /* 11d543c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d543c9 mov dx, word ptr [0x11d7194a] */
  DX = (r16((uint32_t)(0x11d7194a)));
  /* 11d543d0 push edx */
  push32((uint32_t)(EDX));
  /* 11d543d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d543d3 mov ax, word ptr [0x11d71948] */
  AX = (r16((uint32_t)(0x11d71948)));
  /* 11d543d9 push eax */
  push32((uint32_t)(EAX));
  /* 11d543da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d543dc mov cx, word ptr [0x11d71946] */
  CX = (r16((uint32_t)(0x11d71946)));
  /* 11d543e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d543e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d543e6 mov dx, word ptr [0x11d71944] */
  DX = (r16((uint32_t)(0x11d71944)));
  /* 11d543ed push edx */
  push32((uint32_t)(EDX));
  /* 11d543ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11d543f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d543f2 mov ax, word ptr [0x11d71940] */
  AX = (r16((uint32_t)(0x11d71940)));
  /* 11d543f8 push eax */
  push32((uint32_t)(EAX));
  /* 11d543f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d543fb mov cx, word ptr [0x11d71942] */
  CX = (r16((uint32_t)(0x11d71942)));
  /* 11d54402 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54403 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d54405 mov dx, word ptr [0x11d7193e] */
  DX = (r16((uint32_t)(0x11d7193e)));
  /* 11d5440c push edx */
  push32((uint32_t)(EDX));
  /* 11d5440d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54410 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d54413 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54414 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d54416 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54418 call 0x11d545c0 */
  push32(0x11d5441du); f_11d545c0();
  /* 11d5441d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54420 jmp 0x11d54473 */
  goto L_11d54473;
L_11d54422:;
  /* 11d54422 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d54424 mov dx, word ptr [0x11d7194a] */
  DX = (r16((uint32_t)(0x11d7194a)));
  /* 11d5442b push edx */
  push32((uint32_t)(EDX));
  /* 11d5442c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d5442e mov ax, word ptr [0x11d71948] */
  AX = (r16((uint32_t)(0x11d71948)));
  /* 11d54434 push eax */
  push32((uint32_t)(EAX));
  /* 11d54435 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d54437 mov cx, word ptr [0x11d71946] */
  CX = (r16((uint32_t)(0x11d71946)));
  /* 11d5443e push ecx */
  push32((uint32_t)(ECX));
  /* 11d5443f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d54441 mov dx, word ptr [0x11d71944] */
  DX = (r16((uint32_t)(0x11d71944)));
  /* 11d54448 push edx */
  push32((uint32_t)(EDX));
  /* 11d54449 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d5444b mov ax, word ptr [0x11d71942] */
  AX = (r16((uint32_t)(0x11d71942)));
  /* 11d54451 push eax */
  push32((uint32_t)(EAX));
  /* 11d54452 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54454 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54456 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d54458 mov cx, word ptr [0x11d7193e] */
  CX = (r16((uint32_t)(0x11d7193e)));
  /* 11d5445f push ecx */
  push32((uint32_t)(ECX));
  /* 11d54460 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54463 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11d54466 push eax */
  push32((uint32_t)(EAX));
  /* 11d54467 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54469 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5446b call 0x11d545c0 */
  push32(0x11d54470u); f_11d545c0();
  /* 11d54470 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d54473:;
  /* 11d54473 jmp 0x11d544bb */
  goto L_11d544bb;
L_11d54475:;
  /* 11d54475 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54477 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54479 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5447b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5447d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5447f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54481 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d54483 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d54485 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54488 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11d5448b push edx */
  push32((uint32_t)(EDX));
  /* 11d5448c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d5448e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d54490 call 0x11d545c0 */
  push32(0x11d54495u); f_11d545c0();
  /* 11d54495 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54498 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5449a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5449c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5449e push 2 */
  push32((uint32_t)(0x2u));
  /* 11d544a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d544a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d544a4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d544a6 push 0xa */
  push32((uint32_t)(0xau));
  /* 11d544a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d544ab mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d544ae push ecx */
  push32((uint32_t)(ECX));
  /* 11d544af push 1 */
  push32((uint32_t)(0x1u));
  /* 11d544b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d544b3 call 0x11d545c0 */
  push32(0x11d544b8u); f_11d545c0();
  /* 11d544b8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d544bb:;
  /* 11d544bb mov edx, dword ptr [0x11d70e2c] */
  EDX = (r32((uint32_t)(0x11d70e2c)));
  /* 11d544c1 cmp edx, dword ptr [0x11d70e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11d70e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d544c7 jge 0x11d54514 */
  if ((C.sf==C.of)) goto L_11d54514;
  /* 11d544c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d544cc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11d544cf cmp ecx, dword ptr [0x11d70e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d70e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d544d5 jl 0x11d544e5 */
  if ((C.sf!=C.of)) goto L_11d544e5;
  /* 11d544d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d544da mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11d544dd cmp eax, dword ptr [0x11d70e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d70e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d544e3 jle 0x11d544ec */
  if ((C.zf||C.sf!=C.of)) goto L_11d544ec;
L_11d544e5:;
  /* 11d544e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d544e7 jmp 0x11d545b6 */
  goto L_11d545b6;
L_11d544ec:;
  /* 11d544ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d544ef mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11d544f2 cmp edx, dword ptr [0x11d70e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11d70e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d544f8 jle 0x11d54512 */
  if ((C.zf||C.sf!=C.of)) goto L_11d54512;
  /* 11d544fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d544fd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11d54500 cmp ecx, dword ptr [0x11d70e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d70e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54506 jge 0x11d54512 */
  if ((C.sf==C.of)) goto L_11d54512;
  /* 11d54508 mov eax, 1 */
  EAX = (0x1u);
  /* 11d5450d jmp 0x11d545b6 */
  goto L_11d545b6;
L_11d54512:;
  /* 11d54512 jmp 0x11d54557 */
  goto L_11d54557;
L_11d54514:;
  /* 11d54514 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54517 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11d5451a cmp eax, dword ptr [0x11d70e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d70e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54520 jl 0x11d54530 */
  if ((C.sf!=C.of)) goto L_11d54530;
  /* 11d54522 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54525 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11d54528 cmp edx, dword ptr [0x11d70e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11d70e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5452e jle 0x11d54537 */
  if ((C.zf||C.sf!=C.of)) goto L_11d54537;
L_11d54530:;
  /* 11d54530 mov eax, 1 */
  EAX = (0x1u);
  /* 11d54535 jmp 0x11d545b6 */
  goto L_11d545b6;
L_11d54537:;
  /* 11d54537 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5453a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11d5453d cmp ecx, dword ptr [0x11d70e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d70e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54543 jle 0x11d54557 */
  if ((C.zf||C.sf!=C.of)) goto L_11d54557;
  /* 11d54545 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54548 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11d5454b cmp eax, dword ptr [0x11d70e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d70e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54551 jge 0x11d54557 */
  if ((C.sf==C.of)) goto L_11d54557;
  /* 11d54553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d54555 jmp 0x11d545b6 */
  goto L_11d545b6;
L_11d54557:;
  /* 11d54557 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5455a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d5455d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d54560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54563 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d54565 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54567 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5456a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d5456d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d54573 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54575 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d5457b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d5457e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54581 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11d54584 cmp edx, dword ptr [0x11d70e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11d70e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5458a jne 0x11d545a2 */
  if (!C.zf) goto L_11d545a2;
  /* 11d5458c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5458f cmp eax, dword ptr [0x11d70e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d70e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54595 jl 0x11d5459e */
  if ((C.sf!=C.of)) goto L_11d5459e;
  /* 11d54597 mov eax, 1 */
  EAX = (0x1u);
  /* 11d5459c jmp 0x11d545b6 */
  goto L_11d545b6;
L_11d5459e:;
  /* 11d5459e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d545a0 jmp 0x11d545b6 */
  goto L_11d545b6;
L_11d545a2:;
  /* 11d545a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d545a5 cmp ecx, dword ptr [0x11d70e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d70e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d545ab jge 0x11d545b4 */
  if ((C.sf==C.of)) goto L_11d545b4;
  /* 11d545ad mov eax, 1 */
  EAX = (0x1u);
  /* 11d545b2 jmp 0x11d545b6 */
  goto L_11d545b6;
L_11d545b4:;
  /* 11d545b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d545b6:;
  /* 11d545b6 mov esp, ebp */
  ESP = (EBP);
  /* 11d545b8 pop ebp */
  EBP = (pop32());
  /* 11d545b9 ret  */
  ESPCHK(0x11d542c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100145c0 @ 0x11d545c0 (504 bytes, 145 insns) */
void f_11d545c0(void) {
  FTRACE(0x11d545c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d545c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d545c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d545c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d545c6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d545ca jne 0x11d5469c */
  if (!C.zf) goto L_11d5469c;
  /* 11d545d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d545d3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11d545d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d545d8 jne 0x11d545e9 */
  if (!C.zf) goto L_11d545e9;
  /* 11d545da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d545dd mov edx, dword ptr [ecx*4 + 0x11d70e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11d70e4c)));
  /* 11d545e4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d545e7 jmp 0x11d545f6 */
  goto L_11d545f6;
L_11d545e9:;
  /* 11d545e9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d545ec mov ecx, dword ptr [eax*4 + 0x11d70e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11d70e80)));
  /* 11d545f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11d545f6:;
  /* 11d545f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d545f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d545fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d545ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d54602 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d54605 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d5460b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5460e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54610 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d54613 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d54616 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11d54619 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11d5461d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d5461e mov ecx, 7 */
  ECX = (0x7u);
  /* 11d54623 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d54625 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d54628 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5462b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5462e jge 0x11d54649 */
  if ((C.sf==C.of)) goto L_11d54649;
  /* 11d54630 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d54633 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d54636 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d54639 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d5463c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d5463f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54642 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54644 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d54647 jmp 0x11d5465d */
  goto L_11d5465d;
L_11d54649:;
  /* 11d54649 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d5464c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d5464f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d54652 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d54655 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54658 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5465a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d5465d:;
  /* 11d5465d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54661 jne 0x11d5469a */
  if (!C.zf) goto L_11d5469a;
  /* 11d54663 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d54666 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11d54669 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d5466b jne 0x11d5467c */
  if (!C.zf) goto L_11d5467c;
  /* 11d5466d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d54670 mov eax, dword ptr [edx*4 + 0x11d70e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11d70e50)));
  /* 11d54677 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d5467a jmp 0x11d54689 */
  goto L_11d54689;
L_11d5467c:;
  /* 11d5467c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d5467f mov edx, dword ptr [ecx*4 + 0x11d70e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11d70e84)));
  /* 11d54686 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11d54689:;
  /* 11d54689 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5468c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5468f jle 0x11d5469a */
  if ((C.zf||C.sf!=C.of)) goto L_11d5469a;
  /* 11d54691 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d54694 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d54697 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d5469a:;
  /* 11d5469a jmp 0x11d546d1 */
  goto L_11d546d1;
L_11d5469c:;
  /* 11d5469c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5469f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d546a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d546a4 jne 0x11d546b5 */
  if (!C.zf) goto L_11d546b5;
  /* 11d546a6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d546a9 mov ecx, dword ptr [eax*4 + 0x11d70e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11d70e4c)));
  /* 11d546b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11d546b3 jmp 0x11d546c2 */
  goto L_11d546c2;
L_11d546b5:;
  /* 11d546b5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d546b8 mov eax, dword ptr [edx*4 + 0x11d70e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11d70e80)));
  /* 11d546bf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11d546c2:;
  /* 11d546c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d546c5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d546c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d546cb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d546ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11d546d1:;
  /* 11d546d1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d546d5 jne 0x11d54711 */
  if (!C.zf) goto L_11d54711;
  /* 11d546d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d546da mov dword ptr [0x11d70e2c], eax */
  w32((uint32_t)(0x11d70e2c), (EAX));
  /* 11d546df mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11d546e2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d546e5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11d546e8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d546ea imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d546ed mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11d546f0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d546f2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d546f8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11d546fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d546fd mov dword ptr [0x11d70e30], ecx */
  w32((uint32_t)(0x11d70e30), (ECX));
  /* 11d54703 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d54706 mov dword ptr [0x11d70e28], edx */
  w32((uint32_t)(0x11d70e28), (EDX));
  /* 11d5470c jmp 0x11d547b4 */
  goto L_11d547b4;
L_11d54711:;
  /* 11d54711 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d54714 mov dword ptr [0x11d70e3c], eax */
  w32((uint32_t)(0x11d70e3c), (EAX));
  /* 11d54719 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11d5471c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d5471f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11d54722 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54724 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d54727 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11d5472a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5472c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d54732 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11d54735 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54737 mov dword ptr [0x11d70e40], ecx */
  w32((uint32_t)(0x11d70e40), (ECX));
  /* 11d5473d mov edx, dword ptr [0x11d70d98] */
  EDX = (r32((uint32_t)(0x11d70d98)));
  /* 11d54743 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d54749 mov eax, dword ptr [0x11d70e40] */
  EAX = (r32((uint32_t)(0x11d70e40)));
  /* 11d5474e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54750 mov dword ptr [0x11d70e40], eax */
  w32((uint32_t)(0x11d70e40), (EAX));
  /* 11d54755 cmp dword ptr [0x11d70e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d70e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5475c jge 0x11d54781 */
  if ((C.sf==C.of)) goto L_11d54781;
  /* 11d5475e mov ecx, dword ptr [0x11d70e40] */
  ECX = (r32((uint32_t)(0x11d70e40)));
  /* 11d54764 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5476a mov dword ptr [0x11d70e40], ecx */
  w32((uint32_t)(0x11d70e40), (ECX));
  /* 11d54770 mov edx, dword ptr [0x11d70e3c] */
  EDX = (r32((uint32_t)(0x11d70e3c)));
  /* 11d54776 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d54779 mov dword ptr [0x11d70e3c], edx */
  w32((uint32_t)(0x11d70e3c), (EDX));
  /* 11d5477f jmp 0x11d547ab */
  goto L_11d547ab;
L_11d54781:;
  /* 11d54781 cmp dword ptr [0x11d70e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11d70e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5478b jl 0x11d547ab */
  if ((C.sf!=C.of)) goto L_11d547ab;
  /* 11d5478d mov eax, dword ptr [0x11d70e40] */
  EAX = (r32((uint32_t)(0x11d70e40)));
  /* 11d54792 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d54797 mov dword ptr [0x11d70e40], eax */
  w32((uint32_t)(0x11d70e40), (EAX));
  /* 11d5479c mov ecx, dword ptr [0x11d70e3c] */
  ECX = (r32((uint32_t)(0x11d70e3c)));
  /* 11d547a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d547a5 mov dword ptr [0x11d70e3c], ecx */
  w32((uint32_t)(0x11d70e3c), (ECX));
L_11d547ab:;
  /* 11d547ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d547ae mov dword ptr [0x11d70e38], edx */
  w32((uint32_t)(0x11d70e38), (EDX));
L_11d547b4:;
  /* 11d547b4 mov esp, ebp */
  ESP = (EBP);
  /* 11d547b6 pop ebp */
  EBP = (pop32());
  /* 11d547b7 ret  */
  ESPCHK(0x11d545c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100147c0 @ 0x11d547c0 (382 bytes, 135 insns) */
void f_11d547c0(void) {
  FTRACE(0x11d547c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d547c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d547c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d547c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d547c5 push 0x11d6dba0 */
  push32((uint32_t)(0x11d6dba0u));
  /* 11d547ca push 0x11d4e488 */
  push32((uint32_t)(0x11d4e488u));
  /* 11d547cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d547d5 push eax */
  push32((uint32_t)(EAX));
  /* 11d547d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d547dd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d547e0 push ebx */
  push32((uint32_t)(EBX));
  /* 11d547e1 push esi */
  push32((uint32_t)(ESI));
  /* 11d547e2 push edi */
  push32((uint32_t)(EDI));
  /* 11d547e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d547e6 cmp dword ptr [0x11d719ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d547ed jne 0x11d54832 */
  if (!C.zf) goto L_11d54832;
  /* 11d547ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11d547f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d547f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d547f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d547f7 call dword ptr [0x11d742f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742f0))), 0x11d547fdu);
  /* 11d547fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d547ff je 0x11d5480d */
  if (C.zf) goto L_11d5480d;
  /* 11d54801 mov dword ptr [0x11d719ac], 1 */
  w32((uint32_t)(0x11d719ac), (0x1u));
  /* 11d5480b jmp 0x11d54832 */
  goto L_11d54832;
L_11d5480d:;
  /* 11d5480d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5480f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54811 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d54813 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54815 call dword ptr [0x11d74308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74308))), 0x11d5481bu);
  /* 11d5481b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d5481d je 0x11d5482b */
  if (C.zf) goto L_11d5482b;
  /* 11d5481f mov dword ptr [0x11d719ac], 2 */
  w32((uint32_t)(0x11d719ac), (0x2u));
  /* 11d54829 jmp 0x11d54832 */
  goto L_11d54832;
L_11d5482b:;
  /* 11d5482b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d5482d jmp 0x11d54941 */
  goto L_11d54941;
L_11d54832:;
  /* 11d54832 cmp dword ptr [0x11d719ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d719ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54839 jne 0x11d54856 */
  if (!C.zf) goto L_11d54856;
  /* 11d5483b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d5483e push eax */
  push32((uint32_t)(EAX));
  /* 11d5483f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d54842 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54843 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d54846 push edx */
  push32((uint32_t)(EDX));
  /* 11d54847 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5484a push eax */
  push32((uint32_t)(EAX));
  /* 11d5484b call dword ptr [0x11d742f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742f0))), 0x11d54851u);
  /* 11d54851 jmp 0x11d54941 */
  goto L_11d54941;
L_11d54856:;
  /* 11d54856 cmp dword ptr [0x11d719ac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11d719ac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5485d jne 0x11d5493f */
  if (!C.zf) goto L_11d5493f;
  /* 11d54863 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54867 jne 0x11d54872 */
  if (!C.zf) goto L_11d54872;
  /* 11d54869 mov ecx, dword ptr [0x11d71860] */
  ECX = (r32((uint32_t)(0x11d71860)));
  /* 11d5486f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11d54872:;
  /* 11d54872 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54874 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54876 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d54879 push edx */
  push32((uint32_t)(EDX));
  /* 11d5487a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5487d push eax */
  push32((uint32_t)(EAX));
  /* 11d5487e call dword ptr [0x11d74308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74308))), 0x11d54884u);
  /* 11d54884 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d54887 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5488b jne 0x11d54894 */
  if (!C.zf) goto L_11d54894;
  /* 11d5488d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d5488f jmp 0x11d54941 */
  goto L_11d54941;
L_11d54894:;
  /* 11d54894 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d5489b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d5489e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d548a1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d548a3 call 0x11d48520 */
  push32(0x11d548a8u); f_11d48520();
  /* 11d548a8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11d548ab mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d548ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d548b1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11d548b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d548bb jmp 0x11d548d4 */
  goto L_11d548d4;
  /* 11d548bd mov eax, 1 */
  EAX = (0x1u);
  /* 11d548c2 ret  */
  ESPCHK(0x11d547c0u, _esp0);
  ESP += 4; return;
  /* 11d548c3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d548c6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11d548cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d548d4:;
  /* 11d548d4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d548d8 jne 0x11d548de */
  if (!C.zf) goto L_11d548de;
  /* 11d548da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d548dc jmp 0x11d54941 */
  goto L_11d54941;
L_11d548de:;
  /* 11d548de mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d548e1 push edx */
  push32((uint32_t)(EDX));
  /* 11d548e2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d548e5 push eax */
  push32((uint32_t)(EAX));
  /* 11d548e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d548e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d548ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d548ed push edx */
  push32((uint32_t)(EDX));
  /* 11d548ee call dword ptr [0x11d74308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74308))), 0x11d548f4u);
  /* 11d548f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d548f6 jne 0x11d548fc */
  if (!C.zf) goto L_11d548fc;
  /* 11d548f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d548fa jmp 0x11d54941 */
  goto L_11d54941;
L_11d548fc:;
  /* 11d548fc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54900 jne 0x11d5491d */
  if (!C.zf) goto L_11d5491d;
  /* 11d54902 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54904 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54906 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d54908 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d5490b push eax */
  push32((uint32_t)(EAX));
  /* 11d5490c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d5490e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d54911 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54912 call dword ptr [0x11d74338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74338))), 0x11d54918u);
  /* 11d54918 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d5491b jmp 0x11d5493a */
  goto L_11d5493a;
L_11d5491d:;
  /* 11d5491d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d54920 push edx */
  push32((uint32_t)(EDX));
  /* 11d54921 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d54924 push eax */
  push32((uint32_t)(EAX));
  /* 11d54925 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d54927 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d5492a push ecx */
  push32((uint32_t)(ECX));
  /* 11d5492b push 1 */
  push32((uint32_t)(0x1u));
  /* 11d5492d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d54930 push edx */
  push32((uint32_t)(EDX));
  /* 11d54931 call dword ptr [0x11d74338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74338))), 0x11d54937u);
  /* 11d54937 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d5493a:;
  /* 11d5493a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d5493d jmp 0x11d54941 */
  goto L_11d54941;
L_11d5493f:;
  /* 11d5493f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d54941:;
  /* 11d54941 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11d54944 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d54947 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d5494e pop edi */
  EDI = (pop32());
  /* 11d5494f pop esi */
  ESI = (pop32());
  /* 11d54950 pop ebx */
  EBX = (pop32());
  /* 11d54951 mov esp, ebp */
  ESP = (EBP);
  /* 11d54953 pop ebp */
  EBP = (pop32());
  /* 11d54954 ret  */
  ESPCHK(0x11d547c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014960 @ 0x11d54960 (398 bytes, 140 insns) */
void f_11d54960(void) {
  FTRACE(0x11d54960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d54960 push ebp */
  push32((uint32_t)(EBP));
  /* 11d54961 mov ebp, esp */
  EBP = (ESP);
  /* 11d54963 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d54965 push 0x11d6dbb0 */
  push32((uint32_t)(0x11d6dbb0u));
  /* 11d5496a push 0x11d4e488 */
  push32((uint32_t)(0x11d4e488u));
  /* 11d5496f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d54975 push eax */
  push32((uint32_t)(EAX));
  /* 11d54976 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d5497d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54980 push ebx */
  push32((uint32_t)(EBX));
  /* 11d54981 push esi */
  push32((uint32_t)(ESI));
  /* 11d54982 push edi */
  push32((uint32_t)(EDI));
  /* 11d54983 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d54986 cmp dword ptr [0x11d719b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5498d jne 0x11d549d2 */
  if (!C.zf) goto L_11d549d2;
  /* 11d5498f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54991 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54993 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d54995 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54997 call dword ptr [0x11d742f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742f0))), 0x11d5499du);
  /* 11d5499d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d5499f je 0x11d549ad */
  if (C.zf) goto L_11d549ad;
  /* 11d549a1 mov dword ptr [0x11d719b0], 1 */
  w32((uint32_t)(0x11d719b0), (0x1u));
  /* 11d549ab jmp 0x11d549d2 */
  goto L_11d549d2;
L_11d549ad:;
  /* 11d549ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11d549af push 0 */
  push32((uint32_t)(0x0u));
  /* 11d549b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d549b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d549b5 call dword ptr [0x11d74308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74308))), 0x11d549bbu);
  /* 11d549bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d549bd je 0x11d549cb */
  if (C.zf) goto L_11d549cb;
  /* 11d549bf mov dword ptr [0x11d719b0], 2 */
  w32((uint32_t)(0x11d719b0), (0x2u));
  /* 11d549c9 jmp 0x11d549d2 */
  goto L_11d549d2;
L_11d549cb:;
  /* 11d549cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d549cd jmp 0x11d54af1 */
  goto L_11d54af1;
L_11d549d2:;
  /* 11d549d2 cmp dword ptr [0x11d719b0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11d719b0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d549d9 jne 0x11d549f6 */
  if (!C.zf) goto L_11d549f6;
  /* 11d549db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d549de push eax */
  push32((uint32_t)(EAX));
  /* 11d549df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d549e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d549e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d549e6 push edx */
  push32((uint32_t)(EDX));
  /* 11d549e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d549ea push eax */
  push32((uint32_t)(EAX));
  /* 11d549eb call dword ptr [0x11d74308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74308))), 0x11d549f1u);
  /* 11d549f1 jmp 0x11d54af1 */
  goto L_11d54af1;
L_11d549f6:;
  /* 11d549f6 cmp dword ptr [0x11d719b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d719b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d549fd jne 0x11d54aef */
  if (!C.zf) goto L_11d54aef;
  /* 11d54a03 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54a07 jne 0x11d54a12 */
  if (!C.zf) goto L_11d54a12;
  /* 11d54a09 mov ecx, dword ptr [0x11d71860] */
  ECX = (r32((uint32_t)(0x11d71860)));
  /* 11d54a0f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11d54a12:;
  /* 11d54a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54a16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d54a19 push edx */
  push32((uint32_t)(EDX));
  /* 11d54a1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54a1d push eax */
  push32((uint32_t)(EAX));
  /* 11d54a1e call dword ptr [0x11d742f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742f0))), 0x11d54a24u);
  /* 11d54a24 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d54a27 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54a2b jne 0x11d54a34 */
  if (!C.zf) goto L_11d54a34;
  /* 11d54a2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d54a2f jmp 0x11d54af1 */
  goto L_11d54af1;
L_11d54a34:;
  /* 11d54a34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d54a3b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d54a3e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d54a40 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54a43 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d54a45 call 0x11d48520 */
  push32(0x11d54a4au); f_11d48520();
  /* 11d54a4a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11d54a4d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d54a50 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d54a53 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11d54a56 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d54a5d jmp 0x11d54a76 */
  goto L_11d54a76;
  /* 11d54a5f mov eax, 1 */
  EAX = (0x1u);
  /* 11d54a64 ret  */
  ESPCHK(0x11d54960u, _esp0);
  ESP += 4; return;
  /* 11d54a65 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d54a68 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11d54a6f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d54a76:;
  /* 11d54a76 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54a7a jne 0x11d54a80 */
  if (!C.zf) goto L_11d54a80;
  /* 11d54a7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d54a7e jmp 0x11d54af1 */
  goto L_11d54af1;
L_11d54a80:;
  /* 11d54a80 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d54a83 push edx */
  push32((uint32_t)(EDX));
  /* 11d54a84 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d54a87 push eax */
  push32((uint32_t)(EAX));
  /* 11d54a88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d54a8b push ecx */
  push32((uint32_t)(ECX));
  /* 11d54a8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54a8f push edx */
  push32((uint32_t)(EDX));
  /* 11d54a90 call dword ptr [0x11d742f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742f0))), 0x11d54a96u);
  /* 11d54a96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d54a98 jne 0x11d54a9e */
  if (!C.zf) goto L_11d54a9e;
  /* 11d54a9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d54a9c jmp 0x11d54af1 */
  goto L_11d54af1;
L_11d54a9e:;
  /* 11d54a9e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54aa2 jne 0x11d54ac6 */
  if (!C.zf) goto L_11d54ac6;
  /* 11d54aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54aac push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d54aae mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d54ab1 push eax */
  push32((uint32_t)(EAX));
  /* 11d54ab2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d54ab7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d54aba push ecx */
  push32((uint32_t)(ECX));
  /* 11d54abb call dword ptr [0x11d74384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74384))), 0x11d54ac1u);
  /* 11d54ac1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d54ac4 jmp 0x11d54aea */
  goto L_11d54aea;
L_11d54ac6:;
  /* 11d54ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54ac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54aca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d54acd push edx */
  push32((uint32_t)(EDX));
  /* 11d54ace mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d54ad1 push eax */
  push32((uint32_t)(EAX));
  /* 11d54ad2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d54ad4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d54ad7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54ad8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d54add mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d54ae0 push edx */
  push32((uint32_t)(EDX));
  /* 11d54ae1 call dword ptr [0x11d74384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74384))), 0x11d54ae7u);
  /* 11d54ae7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d54aea:;
  /* 11d54aea mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d54aed jmp 0x11d54af1 */
  goto L_11d54af1;
L_11d54aef:;
  /* 11d54aef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d54af1:;
  /* 11d54af1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11d54af4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d54af7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d54afe pop edi */
  EDI = (pop32());
  /* 11d54aff pop esi */
  ESI = (pop32());
  /* 11d54b00 pop ebx */
  EBX = (pop32());
  /* 11d54b01 mov esp, ebp */
  ESP = (EBP);
  /* 11d54b03 pop ebp */
  EBP = (pop32());
  /* 11d54b04 ret  */
  ESPCHK(0x11d54960u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b10 @ 0x11d54b10 (11 bytes, 6 insns) */
void f_11d54b10(void) {
  FTRACE(0x11d54b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d54b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11d54b11 mov ebp, esp */
  EBP = (ESP);
  /* 11d54b13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54b16 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54b19 pop ebp */
  EBP = (pop32());
  /* 11d54b1a ret  */
  ESPCHK(0x11d54b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b20 @ 0x11d54b20 (147 bytes, 43 insns) */
void f_11d54b20(void) {
  FTRACE(0x11d54b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d54b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11d54b21 mov ebp, esp */
  EBP = (ESP);
  /* 11d54b23 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54b24 cmp dword ptr [0x11d71850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54b2b jne 0x11d54b47 */
  if (!C.zf) goto L_11d54b47;
  /* 11d54b2d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54b31 jl 0x11d54b42 */
  if ((C.sf!=C.of)) goto L_11d54b42;
  /* 11d54b33 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54b37 jg 0x11d54b42 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d54b42;
  /* 11d54b39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54b3c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54b3f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11d54b42:;
  /* 11d54b42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54b45 jmp 0x11d54baf */
  goto L_11d54baf;
L_11d54b47:;
  /* 11d54b47 push 0x11d719dc */
  push32((uint32_t)(0x11d719dcu));
  /* 11d54b4c call dword ptr [0x11d743c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743c8))), 0x11d54b52u);
  /* 11d54b52 cmp dword ptr [0x11d719cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54b59 je 0x11d54b79 */
  if (C.zf) goto L_11d54b79;
  /* 11d54b5b push 0x11d719dc */
  push32((uint32_t)(0x11d719dcu));
  /* 11d54b60 call dword ptr [0x11d743b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b8))), 0x11d54b66u);
  /* 11d54b66 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d54b68 call 0x11d48d80 */
  push32(0x11d54b6du); f_11d48d80();
  /* 11d54b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54b70 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d54b77 jmp 0x11d54b80 */
  goto L_11d54b80;
L_11d54b79:;
  /* 11d54b79 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11d54b80:;
  /* 11d54b80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54b83 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54b84 call 0x11d54bc0 */
  push32(0x11d54b89u); f_11d54bc0();
  /* 11d54b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54b8c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d54b8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54b93 je 0x11d54ba1 */
  if (C.zf) goto L_11d54ba1;
  /* 11d54b95 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d54b97 call 0x11d48e20 */
  push32(0x11d54b9cu); f_11d48e20();
  /* 11d54b9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54b9f jmp 0x11d54bac */
  goto L_11d54bac;
L_11d54ba1:;
  /* 11d54ba1 push 0x11d719dc */
  push32((uint32_t)(0x11d719dcu));
  /* 11d54ba6 call dword ptr [0x11d743b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d743b8))), 0x11d54bacu);
L_11d54bac:;
  /* 11d54bac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11d54baf:;
  /* 11d54baf mov esp, ebp */
  ESP = (EBP);
  /* 11d54bb1 pop ebp */
  EBP = (pop32());
  /* 11d54bb2 ret  */
  ESPCHK(0x11d54b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10014bc0 @ 0x11d54bc0 (299 bytes, 91 insns) */
void f_11d54bc0(void) {
  FTRACE(0x11d54bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d54bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d54bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11d54bc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d54bc6 cmp dword ptr [0x11d71850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54bcd jne 0x11d54bec */
  if (!C.zf) goto L_11d54bec;
  /* 11d54bcf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54bd3 jl 0x11d54be4 */
  if ((C.sf!=C.of)) goto L_11d54be4;
  /* 11d54bd5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54bd9 jg 0x11d54be4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d54be4;
  /* 11d54bdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54bde add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54be1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11d54be4:;
  /* 11d54be4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54be7 jmp 0x11d54ce7 */
  goto L_11d54ce7;
L_11d54bec:;
  /* 11d54bec cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54bf3 jge 0x11d54c33 */
  if ((C.sf==C.of)) goto L_11d54c33;
  /* 11d54bf5 cmp dword ptr [0x11d6fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d6fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54bfc jle 0x11d54c11 */
  if ((C.zf||C.sf!=C.of)) goto L_11d54c11;
  /* 11d54bfe push 1 */
  push32((uint32_t)(0x1u));
  /* 11d54c00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54c03 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54c04 call 0x11d4b390 */
  push32(0x11d54c09u); f_11d4b390();
  /* 11d54c09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54c0c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d54c0f jmp 0x11d54c25 */
  goto L_11d54c25;
L_11d54c11:;
  /* 11d54c11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54c14 mov eax, dword ptr [0x11d6fc98] */
  EAX = (r32((uint32_t)(0x11d6fc98)));
  /* 11d54c19 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d54c1b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11d54c1f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11d54c22 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11d54c25:;
  /* 11d54c25 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54c29 jne 0x11d54c33 */
  if (!C.zf) goto L_11d54c33;
  /* 11d54c2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54c2e jmp 0x11d54ce7 */
  goto L_11d54ce7;
L_11d54c33:;
  /* 11d54c33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54c36 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11d54c39 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d54c3f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d54c45 mov eax, dword ptr [0x11d6fc98] */
  EAX = (r32((uint32_t)(0x11d6fc98)));
  /* 11d54c4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d54c4c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11d54c50 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11d54c56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d54c58 je 0x11d54c7c */
  if (C.zf) goto L_11d54c7c;
  /* 11d54c5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54c5d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11d54c60 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d54c66 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11d54c69 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11d54c6c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11d54c6f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11d54c73 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11d54c7a jmp 0x11d54c8d */
  goto L_11d54c8d;
L_11d54c7c:;
  /* 11d54c7c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11d54c7f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11d54c82 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11d54c86 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11d54c8d:;
  /* 11d54c8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d54c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54c91 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d54c93 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11d54c96 push edx */
  push32((uint32_t)(EDX));
  /* 11d54c97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d54c9a push eax */
  push32((uint32_t)(EAX));
  /* 11d54c9b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11d54c9e push ecx */
  push32((uint32_t)(ECX));
  /* 11d54c9f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d54ca4 mov edx, dword ptr [0x11d71850] */
  EDX = (r32((uint32_t)(0x11d71850)));
  /* 11d54caa push edx */
  push32((uint32_t)(EDX));
  /* 11d54cab call 0x11d4d770 */
  push32(0x11d54cb0u); f_11d4d770();
  /* 11d54cb0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54cb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d54cb6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54cba jne 0x11d54cc1 */
  if (!C.zf) goto L_11d54cc1;
  /* 11d54cbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54cbf jmp 0x11d54ce7 */
  goto L_11d54ce7;
L_11d54cc1:;
  /* 11d54cc1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54cc5 jne 0x11d54cd1 */
  if (!C.zf) goto L_11d54cd1;
  /* 11d54cc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54cca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d54ccf jmp 0x11d54ce7 */
  goto L_11d54ce7;
L_11d54cd1:;
  /* 11d54cd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54cd4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d54cd9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11d54cdc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d54ce2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11d54ce5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11d54ce7:;
  /* 11d54ce7 mov esp, ebp */
  ESP = (EBP);
  /* 11d54ce9 pop ebp */
  EBP = (pop32());
  /* 11d54cea ret  */
  ESPCHK(0x11d54bc0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11d54cf0 (52 bytes, 19 insns) */
void f_11d54cf0(void) {
  FTRACE(0x11d54cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d54cf0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d54cf4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d54cf8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d54cfa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d54cfe jne 0x11d54d09 */
  if (!C.zf) goto L_11d54d09;
  /* 11d54d00 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d54d04 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d54d06 ret 0x10 */
  ESPCHK(0x11d54cf0u, _esp0);
  ESP += 20; return;
L_11d54d09:;
  /* 11d54d09 push ebx */
  push32((uint32_t)(EBX));
  /* 11d54d0a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d54d0c mov ebx, eax */
  EBX = (EAX);
  /* 11d54d0e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d54d12 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d54d16 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54d18 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d54d1c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11d54d1e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54d20 pop ebx */
  EBX = (pop32());
  /* 11d54d21 ret 0x10 */
  ESPCHK(0x11d54cf0u, _esp0);
  ESP += 20; return;
}

/* FUN_10014d30 @ 0x11d54d30 (46 bytes, 18 insns) */
void f_11d54d30(void) {
  FTRACE(0x11d54d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d54d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d54d31 mov ebp, esp */
  EBP = (ESP);
  /* 11d54d33 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54d34 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d54d36 call 0x11d48d80 */
  push32(0x11d54d3bu); f_11d48d80();
  /* 11d54d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54d3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54d41 push eax */
  push32((uint32_t)(EAX));
  /* 11d54d42 call 0x11d54d60 */
  push32(0x11d54d47u); f_11d54d60();
  /* 11d54d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54d4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d54d4d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11d54d4f call 0x11d48e20 */
  push32(0x11d54d54u); f_11d48e20();
  /* 11d54d54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54d57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d54d5a mov esp, ebp */
  ESP = (EBP);
  /* 11d54d5c pop ebp */
  EBP = (pop32());
  /* 11d54d5d ret  */
  ESPCHK(0x11d54d30u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11d54d60 (198 bytes, 69 insns) */
void f_11d54d60(void) {
  FTRACE(0x11d54d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d54d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11d54d61 mov ebp, esp */
  EBP = (ESP);
  /* 11d54d63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d54d66 mov eax, dword ptr [0x11d71670] */
  EAX = (r32((uint32_t)(0x11d71670)));
  /* 11d54d6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d54d6e cmp dword ptr [0x11d73160], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d73160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54d75 jne 0x11d54d7e */
  if (!C.zf) goto L_11d54d7e;
  /* 11d54d77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d54d79 jmp 0x11d54e22 */
  goto L_11d54e22;
L_11d54d7e:;
  /* 11d54d7e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54d82 jne 0x11d54da6 */
  if (!C.zf) goto L_11d54da6;
  /* 11d54d84 cmp dword ptr [0x11d71678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54d8b je 0x11d54da6 */
  if (C.zf) goto L_11d54da6;
  /* 11d54d8d call 0x11d54e80 */
  push32(0x11d54d92u); f_11d54e80();
  /* 11d54d92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d54d94 je 0x11d54d9d */
  if (C.zf) goto L_11d54d9d;
  /* 11d54d96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d54d98 jmp 0x11d54e22 */
  goto L_11d54e22;
L_11d54d9d:;
  /* 11d54d9d mov ecx, dword ptr [0x11d71670] */
  ECX = (r32((uint32_t)(0x11d71670)));
  /* 11d54da3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d54da6:;
  /* 11d54da6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54daa je 0x11d54e20 */
  if (C.zf) goto L_11d54e20;
  /* 11d54dac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54db0 je 0x11d54e20 */
  if (C.zf) goto L_11d54e20;
  /* 11d54db2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54db5 push edx */
  push32((uint32_t)(EDX));
  /* 11d54db6 call 0x11d481b0 */
  push32(0x11d54dbbu); f_11d481b0();
  /* 11d54dbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54dbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d54dc1:;
  /* 11d54dc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d54dc4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54dc7 je 0x11d54e20 */
  if (C.zf) goto L_11d54e20;
  /* 11d54dc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d54dcc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d54dce push edx */
  push32((uint32_t)(EDX));
  /* 11d54dcf call 0x11d481b0 */
  push32(0x11d54dd4u); f_11d481b0();
  /* 11d54dd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54dd7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54dda jbe 0x11d54e15 */
  if ((C.cf||C.zf)) goto L_11d54e15;
  /* 11d54ddc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d54ddf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d54de1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d54de4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11d54de8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54deb jne 0x11d54e15 */
  if (!C.zf) goto L_11d54e15;
  /* 11d54ded mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d54df0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54df1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54df4 push edx */
  push32((uint32_t)(EDX));
  /* 11d54df5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d54df8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d54dfa push ecx */
  push32((uint32_t)(ECX));
  /* 11d54dfb call 0x11d54e30 */
  push32(0x11d54e00u); f_11d54e30();
  /* 11d54e00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54e03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d54e05 jne 0x11d54e15 */
  if (!C.zf) goto L_11d54e15;
  /* 11d54e07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d54e0a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d54e0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d54e0f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11d54e13 jmp 0x11d54e22 */
  goto L_11d54e22;
L_11d54e15:;
  /* 11d54e15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d54e18 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54e1b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d54e1e jmp 0x11d54dc1 */
  goto L_11d54dc1;
L_11d54e20:;
  /* 11d54e20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d54e22:;
  /* 11d54e22 mov esp, ebp */
  ESP = (EBP);
  /* 11d54e24 pop ebp */
  EBP = (pop32());
  /* 11d54e25 ret  */
  ESPCHK(0x11d54d60u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11d54e30 (79 bytes, 32 insns) */
void f_11d54e30(void) {
  FTRACE(0x11d54e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d54e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d54e31 mov ebp, esp */
  EBP = (ESP);
  /* 11d54e33 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54e34 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54e38 jne 0x11d54e3e */
  if (!C.zf) goto L_11d54e3e;
  /* 11d54e3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d54e3c jmp 0x11d54e7b */
  goto L_11d54e7b;
L_11d54e3e:;
  /* 11d54e3e mov eax, dword ptr [0x11d72d24] */
  EAX = (r32((uint32_t)(0x11d72d24)));
  /* 11d54e43 push eax */
  push32((uint32_t)(EAX));
  /* 11d54e44 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d54e47 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54e48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d54e4b push edx */
  push32((uint32_t)(EDX));
  /* 11d54e4c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d54e4f push eax */
  push32((uint32_t)(EAX));
  /* 11d54e50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d54e53 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54e54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d54e56 mov edx, dword ptr [0x11d72fc4] */
  EDX = (r32((uint32_t)(0x11d72fc4)));
  /* 11d54e5c push edx */
  push32((uint32_t)(EDX));
  /* 11d54e5d call 0x11d54f30 */
  push32(0x11d54e62u); f_11d54f30();
  /* 11d54e62 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54e65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d54e68 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54e6c jne 0x11d54e75 */
  if (!C.zf) goto L_11d54e75;
  /* 11d54e6e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11d54e73 jmp 0x11d54e7b */
  goto L_11d54e7b;
L_11d54e75:;
  /* 11d54e75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d54e78 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11d54e7b:;
  /* 11d54e7b mov esp, ebp */
  ESP = (EBP);
  /* 11d54e7d pop ebp */
  EBP = (pop32());
  /* 11d54e7e ret  */
  ESPCHK(0x11d54e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e80 @ 0x11d54e80 (174 bytes, 66 insns) */
void f_11d54e80(void) {
  FTRACE(0x11d54e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d54e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11d54e81 mov ebp, esp */
  EBP = (ESP);
  /* 11d54e83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d54e86 mov eax, dword ptr [0x11d71678] */
  EAX = (r32((uint32_t)(0x11d71678)));
  /* 11d54e8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d54e8e:;
  /* 11d54e8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d54e91 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54e94 je 0x11d54f28 */
  if (C.zf) goto L_11d54f28;
  /* 11d54e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54e9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54e9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54ea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54ea2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d54ea4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d54ea7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d54ea9 push eax */
  push32((uint32_t)(EAX));
  /* 11d54eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54eac push 1 */
  push32((uint32_t)(0x1u));
  /* 11d54eae call dword ptr [0x11d74384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74384))), 0x11d54eb4u);
  /* 11d54eb4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d54eb7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54ebb jne 0x11d54ec2 */
  if (!C.zf) goto L_11d54ec2;
  /* 11d54ebd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d54ec0 jmp 0x11d54f2a */
  goto L_11d54f2a;
L_11d54ec2:;
  /* 11d54ec2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11d54ec4 push 0x11d6dbbc */
  push32((uint32_t)(0x11d6dbbcu));
  /* 11d54ec9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d54ecb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54ece push ecx */
  push32((uint32_t)(ECX));
  /* 11d54ecf call 0x11d45380 */
  push32(0x11d54ed4u); f_11d45380();
  /* 11d54ed4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54ed7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d54eda cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54ede jne 0x11d54ee5 */
  if (!C.zf) goto L_11d54ee5;
  /* 11d54ee0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d54ee3 jmp 0x11d54f2a */
  goto L_11d54f2a;
L_11d54ee5:;
  /* 11d54ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54ee9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d54eec push edx */
  push32((uint32_t)(EDX));
  /* 11d54eed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d54ef0 push eax */
  push32((uint32_t)(EAX));
  /* 11d54ef1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d54ef3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d54ef6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d54ef8 push edx */
  push32((uint32_t)(EDX));
  /* 11d54ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54efb push 1 */
  push32((uint32_t)(0x1u));
  /* 11d54efd call dword ptr [0x11d74384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74384))), 0x11d54f03u);
  /* 11d54f03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d54f05 jne 0x11d54f0c */
  if (!C.zf) goto L_11d54f0c;
  /* 11d54f07 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d54f0a jmp 0x11d54f2a */
  goto L_11d54f2a;
L_11d54f0c:;
  /* 11d54f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54f0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d54f11 push eax */
  push32((uint32_t)(EAX));
  /* 11d54f12 call 0x11d55380 */
  push32(0x11d54f17u); f_11d55380();
  /* 11d54f17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54f1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d54f1d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54f20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d54f23 jmp 0x11d54e8e */
  goto L_11d54e8e;
L_11d54f28:;
  /* 11d54f28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d54f2a:;
  /* 11d54f2a mov esp, ebp */
  ESP = (EBP);
  /* 11d54f2c pop ebp */
  EBP = (pop32());
  /* 11d54f2d ret  */
  ESPCHK(0x11d54e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f30 @ 0x11d54f30 (970 bytes, 340 insns) */
void f_11d54f30(void) {
  FTRACE(0x11d54f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d54f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11d54f31 mov ebp, esp */
  EBP = (ESP);
  /* 11d54f33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d54f35 push 0x11d6dc10 */
  push32((uint32_t)(0x11d6dc10u));
  /* 11d54f3a push 0x11d4e488 */
  push32((uint32_t)(0x11d4e488u));
  /* 11d54f3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d54f45 push eax */
  push32((uint32_t)(EAX));
  /* 11d54f46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d54f4d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54f50 push ebx */
  push32((uint32_t)(EBX));
  /* 11d54f51 push esi */
  push32((uint32_t)(ESI));
  /* 11d54f52 push edi */
  push32((uint32_t)(EDI));
  /* 11d54f53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d54f56 cmp dword ptr [0x11d719b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d719b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54f5d jne 0x11d54fb6 */
  if (!C.zf) goto L_11d54fb6;
  /* 11d54f5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d54f61 push 0x11d6d26c */
  push32((uint32_t)(0x11d6d26cu));
  /* 11d54f66 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d54f68 push 0x11d6d26c */
  push32((uint32_t)(0x11d6d26cu));
  /* 11d54f6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54f6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54f71 call dword ptr [0x11d742e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742e8))), 0x11d54f77u);
  /* 11d54f77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d54f79 je 0x11d54f87 */
  if (C.zf) goto L_11d54f87;
  /* 11d54f7b mov dword ptr [0x11d719b4], 1 */
  w32((uint32_t)(0x11d719b4), (0x1u));
  /* 11d54f85 jmp 0x11d54fb6 */
  goto L_11d54fb6;
L_11d54f87:;
  /* 11d54f87 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d54f89 push 0x11d6d268 */
  push32((uint32_t)(0x11d6d268u));
  /* 11d54f8e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d54f90 push 0x11d6d268 */
  push32((uint32_t)(0x11d6d268u));
  /* 11d54f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d54f99 call dword ptr [0x11d742ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742ec))), 0x11d54f9fu);
  /* 11d54f9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d54fa1 je 0x11d54faf */
  if (C.zf) goto L_11d54faf;
  /* 11d54fa3 mov dword ptr [0x11d719b4], 2 */
  w32((uint32_t)(0x11d719b4), (0x2u));
  /* 11d54fad jmp 0x11d54fb6 */
  goto L_11d54fb6;
L_11d54faf:;
  /* 11d54faf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d54fb1 jmp 0x11d55314 */
  goto L_11d55314;
L_11d54fb6:;
  /* 11d54fb6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54fba jle 0x11d54fcf */
  if ((C.zf||C.sf!=C.of)) goto L_11d54fcf;
  /* 11d54fbc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d54fbf push eax */
  push32((uint32_t)(EAX));
  /* 11d54fc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d54fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54fc4 call 0x11d55330 */
  push32(0x11d54fc9u); f_11d55330();
  /* 11d54fc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54fcc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11d54fcf:;
  /* 11d54fcf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54fd3 jle 0x11d54fe8 */
  if ((C.zf||C.sf!=C.of)) goto L_11d54fe8;
  /* 11d54fd5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d54fd8 push edx */
  push32((uint32_t)(EDX));
  /* 11d54fd9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d54fdc push eax */
  push32((uint32_t)(EAX));
  /* 11d54fdd call 0x11d55330 */
  push32(0x11d54fe2u); f_11d55330();
  /* 11d54fe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d54fe5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11d54fe8:;
  /* 11d54fe8 cmp dword ptr [0x11d719b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11d719b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d54fef jne 0x11d55014 */
  if (!C.zf) goto L_11d55014;
  /* 11d54ff1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d54ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d54ff5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d54ff8 push edx */
  push32((uint32_t)(EDX));
  /* 11d54ff9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d54ffc push eax */
  push32((uint32_t)(EAX));
  /* 11d54ffd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d55000 push ecx */
  push32((uint32_t)(ECX));
  /* 11d55001 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d55004 push edx */
  push32((uint32_t)(EDX));
  /* 11d55005 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d55008 push eax */
  push32((uint32_t)(EAX));
  /* 11d55009 call dword ptr [0x11d742ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742ec))), 0x11d5500fu);
  /* 11d5500f jmp 0x11d55314 */
  goto L_11d55314;
L_11d55014:;
  /* 11d55014 cmp dword ptr [0x11d719b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d719b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5501b jne 0x11d55312 */
  if (!C.zf) goto L_11d55312;
  /* 11d55021 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55025 jne 0x11d55030 */
  if (!C.zf) goto L_11d55030;
  /* 11d55027 mov ecx, dword ptr [0x11d71860] */
  ECX = (r32((uint32_t)(0x11d71860)));
  /* 11d5502d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11d55030:;
  /* 11d55030 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55034 je 0x11d55040 */
  if (C.zf) goto L_11d55040;
  /* 11d55036 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5503a jne 0x11d551bc */
  if (!C.zf) goto L_11d551bc;
L_11d55040:;
  /* 11d55040 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d55043 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55046 jne 0x11d55052 */
  if (!C.zf) goto L_11d55052;
  /* 11d55048 mov eax, 2 */
  EAX = (0x2u);
  /* 11d5504d jmp 0x11d55314 */
  goto L_11d55314;
L_11d55052:;
  /* 11d55052 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55056 jle 0x11d55062 */
  if ((C.zf||C.sf!=C.of)) goto L_11d55062;
  /* 11d55058 mov eax, 1 */
  EAX = (0x1u);
  /* 11d5505d jmp 0x11d55314 */
  goto L_11d55314;
L_11d55062:;
  /* 11d55062 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55066 jle 0x11d55072 */
  if ((C.zf||C.sf!=C.of)) goto L_11d55072;
  /* 11d55068 mov eax, 3 */
  EAX = (0x3u);
  /* 11d5506d jmp 0x11d55314 */
  goto L_11d55314;
L_11d55072:;
  /* 11d55072 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11d55075 push eax */
  push32((uint32_t)(EAX));
  /* 11d55076 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d55079 push ecx */
  push32((uint32_t)(ECX));
  /* 11d5507a call dword ptr [0x11d74344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74344))), 0x11d55080u);
  /* 11d55080 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d55082 jne 0x11d5508b */
  if (!C.zf) goto L_11d5508b;
  /* 11d55084 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d55086 jmp 0x11d55314 */
  goto L_11d55314;
L_11d5508b:;
  /* 11d5508b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5508f jne 0x11d55097 */
  if (!C.zf) goto L_11d55097;
  /* 11d55091 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55095 je 0x11d550c4 */
  if (C.zf) goto L_11d550c4;
L_11d55097:;
  /* 11d55097 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5509b jne 0x11d550a3 */
  if (!C.zf) goto L_11d550a3;
  /* 11d5509d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d550a1 je 0x11d550c4 */
  if (C.zf) goto L_11d550c4;
L_11d550a3:;
  /* 11d550a3 push 0x11d6dbd0 */
  push32((uint32_t)(0x11d6dbd0u));
  /* 11d550a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d550aa push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11d550af push 0x11d6dbc8 */
  push32((uint32_t)(0x11d6dbc8u));
  /* 11d550b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d550b6 call 0x11d44440 */
  push32(0x11d550bbu); f_11d44440();
  /* 11d550bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d550be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d550c1 jne 0x11d550c4 */
  if (!C.zf) goto L_11d550c4;
  /* 11d550c3 int3  */
  x86_unimpl("int3 @ 0x11d550c3");
L_11d550c4:;
  /* 11d550c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d550c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d550c8 jne 0x11d5508b */
  if (!C.zf) goto L_11d5508b;
  /* 11d550ca cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d550ce jle 0x11d55143 */
  if ((C.zf||C.sf!=C.of)) goto L_11d55143;
  /* 11d550d0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d550d4 jae 0x11d550e0 */
  if (!C.cf) goto L_11d550e0;
  /* 11d550d6 mov eax, 3 */
  EAX = (0x3u);
  /* 11d550db jmp 0x11d55314 */
  goto L_11d55314;
L_11d550e0:;
  /* 11d550e0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11d550e3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11d550e6 jmp 0x11d550f1 */
  goto L_11d550f1;
L_11d550e8:;
  /* 11d550e8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d550eb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d550ee mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11d550f1:;
  /* 11d550f1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d550f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d550f6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d550f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d550fa je 0x11d55139 */
  if (C.zf) goto L_11d55139;
  /* 11d550fc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d550ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d55101 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11d55104 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d55106 je 0x11d55139 */
  if (C.zf) goto L_11d55139;
  /* 11d55108 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5510b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d5510d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d5510f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d55112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d55114 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d55116 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55118 jl 0x11d55137 */
  if ((C.sf!=C.of)) goto L_11d55137;
  /* 11d5511a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d5511d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d5511f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d55121 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d55124 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d55126 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11d55129 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5512b jg 0x11d55137 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d55137;
  /* 11d5512d mov eax, 2 */
  EAX = (0x2u);
  /* 11d55132 jmp 0x11d55314 */
  goto L_11d55314;
L_11d55137:;
  /* 11d55137 jmp 0x11d550e8 */
  goto L_11d550e8;
L_11d55139:;
  /* 11d55139 mov eax, 3 */
  EAX = (0x3u);
  /* 11d5513e jmp 0x11d55314 */
  goto L_11d55314;
L_11d55143:;
  /* 11d55143 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55147 jle 0x11d551bc */
  if ((C.zf||C.sf!=C.of)) goto L_11d551bc;
  /* 11d55149 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5514d jae 0x11d55159 */
  if (!C.cf) goto L_11d55159;
  /* 11d5514f mov eax, 1 */
  EAX = (0x1u);
  /* 11d55154 jmp 0x11d55314 */
  goto L_11d55314;
L_11d55159:;
  /* 11d55159 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11d5515c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11d5515f jmp 0x11d5516a */
  goto L_11d5516a;
L_11d55161:;
  /* 11d55161 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d55164 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55167 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11d5516a:;
  /* 11d5516a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d5516d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d5516f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d55171 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d55173 je 0x11d551b2 */
  if (C.zf) goto L_11d551b2;
  /* 11d55175 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d55178 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d5517a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11d5517d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d5517f je 0x11d551b2 */
  if (C.zf) goto L_11d551b2;
  /* 11d55181 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d55184 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d55186 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d55188 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d5518b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d5518d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d5518f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55191 jl 0x11d551b0 */
  if ((C.sf!=C.of)) goto L_11d551b0;
  /* 11d55193 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d55196 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d55198 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d5519a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d5519d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d5519f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11d551a2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d551a4 jg 0x11d551b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d551b0;
  /* 11d551a6 mov eax, 2 */
  EAX = (0x2u);
  /* 11d551ab jmp 0x11d55314 */
  goto L_11d55314;
L_11d551b0:;
  /* 11d551b0 jmp 0x11d55161 */
  goto L_11d55161;
L_11d551b2:;
  /* 11d551b2 mov eax, 1 */
  EAX = (0x1u);
  /* 11d551b7 jmp 0x11d55314 */
  goto L_11d55314;
L_11d551bc:;
  /* 11d551bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11d551be push 0 */
  push32((uint32_t)(0x0u));
  /* 11d551c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d551c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d551c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d551c7 push edx */
  push32((uint32_t)(EDX));
  /* 11d551c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d551ca mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d551cd push eax */
  push32((uint32_t)(EAX));
  /* 11d551ce call dword ptr [0x11d74338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74338))), 0x11d551d4u);
  /* 11d551d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d551d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d551db jne 0x11d551e4 */
  if (!C.zf) goto L_11d551e4;
  /* 11d551dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d551df jmp 0x11d55314 */
  goto L_11d55314;
L_11d551e4:;
  /* 11d551e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11d551eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d551ee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d551f0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d551f3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d551f5 call 0x11d48520 */
  push32(0x11d551fau); f_11d48520();
  /* 11d551fa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11d551fd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d55200 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11d55203 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11d55206 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d5520d jmp 0x11d55226 */
  goto L_11d55226;
  /* 11d5520f mov eax, 1 */
  EAX = (0x1u);
  /* 11d55214 ret  */
  ESPCHK(0x11d54f30u, _esp0);
  ESP += 4; return;
  /* 11d55215 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d55218 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11d5521f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d55226:;
  /* 11d55226 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5522a jne 0x11d55233 */
  if (!C.zf) goto L_11d55233;
  /* 11d5522c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d5522e jmp 0x11d55314 */
  goto L_11d55314;
L_11d55233:;
  /* 11d55233 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d55236 push edx */
  push32((uint32_t)(EDX));
  /* 11d55237 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d5523a push eax */
  push32((uint32_t)(EAX));
  /* 11d5523b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d5523e push ecx */
  push32((uint32_t)(ECX));
  /* 11d5523f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d55242 push edx */
  push32((uint32_t)(EDX));
  /* 11d55243 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d55245 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d55248 push eax */
  push32((uint32_t)(EAX));
  /* 11d55249 call dword ptr [0x11d74338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74338))), 0x11d5524fu);
  /* 11d5524f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d55251 jne 0x11d5525a */
  if (!C.zf) goto L_11d5525a;
  /* 11d55253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d55255 jmp 0x11d55314 */
  goto L_11d55314;
L_11d5525a:;
  /* 11d5525a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5525c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d5525e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d55261 push ecx */
  push32((uint32_t)(ECX));
  /* 11d55262 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d55265 push edx */
  push32((uint32_t)(EDX));
  /* 11d55266 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d55268 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d5526b push eax */
  push32((uint32_t)(EAX));
  /* 11d5526c call dword ptr [0x11d74338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74338))), 0x11d55272u);
  /* 11d55272 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d55275 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55279 jne 0x11d55282 */
  if (!C.zf) goto L_11d55282;
  /* 11d5527b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d5527d jmp 0x11d55314 */
  goto L_11d55314;
L_11d55282:;
  /* 11d55282 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d55289 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d5528c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d5528e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55291 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d55293 call 0x11d48520 */
  push32(0x11d55298u); f_11d48520();
  /* 11d55298 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11d5529b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d5529e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11d552a1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11d552a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11d552ab jmp 0x11d552c4 */
  goto L_11d552c4;
  /* 11d552ad mov eax, 1 */
  EAX = (0x1u);
  /* 11d552b2 ret  */
  ESPCHK(0x11d54f30u, _esp0);
  ESP += 4; return;
  /* 11d552b3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d552b6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11d552bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11d552c4:;
  /* 11d552c4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d552c8 jne 0x11d552ce */
  if (!C.zf) goto L_11d552ce;
  /* 11d552ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d552cc jmp 0x11d55314 */
  goto L_11d55314;
L_11d552ce:;
  /* 11d552ce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d552d1 push edx */
  push32((uint32_t)(EDX));
  /* 11d552d2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d552d5 push eax */
  push32((uint32_t)(EAX));
  /* 11d552d6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d552d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d552da mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d552dd push edx */
  push32((uint32_t)(EDX));
  /* 11d552de push 1 */
  push32((uint32_t)(0x1u));
  /* 11d552e0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d552e3 push eax */
  push32((uint32_t)(EAX));
  /* 11d552e4 call dword ptr [0x11d74338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d74338))), 0x11d552eau);
  /* 11d552ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d552ec jne 0x11d552f2 */
  if (!C.zf) goto L_11d552f2;
  /* 11d552ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d552f0 jmp 0x11d55314 */
  goto L_11d55314;
L_11d552f2:;
  /* 11d552f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d552f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d552f6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d552f9 push edx */
  push32((uint32_t)(EDX));
  /* 11d552fa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d552fd push eax */
  push32((uint32_t)(EAX));
  /* 11d552fe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d55301 push ecx */
  push32((uint32_t)(ECX));
  /* 11d55302 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d55305 push edx */
  push32((uint32_t)(EDX));
  /* 11d55306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d55309 push eax */
  push32((uint32_t)(EAX));
  /* 11d5530a call dword ptr [0x11d742e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742e8))), 0x11d55310u);
  /* 11d55310 jmp 0x11d55314 */
  goto L_11d55314;
L_11d55312:;
  /* 11d55312 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d55314:;
  /* 11d55314 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11d55317 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d5531a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d55321 pop edi */
  EDI = (pop32());
  /* 11d55322 pop esi */
  ESI = (pop32());
  /* 11d55323 pop ebx */
  EBX = (pop32());
  /* 11d55324 mov esp, ebp */
  ESP = (EBP);
  /* 11d55326 pop ebp */
  EBP = (pop32());
  /* 11d55327 ret  */
  ESPCHK(0x11d54f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10015330 @ 0x11d55330 (80 bytes, 32 insns) */
void f_11d55330(void) {
  FTRACE(0x11d55330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d55330 push ebp */
  push32((uint32_t)(EBP));
  /* 11d55331 mov ebp, esp */
  EBP = (ESP);
  /* 11d55333 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d55336 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d55339 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d5533c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5533f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d55342:;
  /* 11d55342 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d55345 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d55348 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d5534b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d5534e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d55350 je 0x11d55367 */
  if (C.zf) goto L_11d55367;
  /* 11d55352 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d55355 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d55358 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d5535a je 0x11d55367 */
  if (C.zf) goto L_11d55367;
  /* 11d5535c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5535f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55362 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d55365 jmp 0x11d55342 */
  goto L_11d55342;
L_11d55367:;
  /* 11d55367 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5536a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11d5536d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d5536f jne 0x11d55379 */
  if (!C.zf) goto L_11d55379;
  /* 11d55371 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d55374 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d55377 jmp 0x11d5537c */
  goto L_11d5537c;
L_11d55379:;
  /* 11d55379 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11d5537c:;
  /* 11d5537c mov esp, ebp */
  ESP = (EBP);
  /* 11d5537e pop ebp */
  EBP = (pop32());
  /* 11d5537f ret  */
  ESPCHK(0x11d55330u, _esp0);
  ESP += 4; return;
}

/* FUN_10015380 @ 0x11d55380 (736 bytes, 224 insns) */
void f_11d55380(void) {
  FTRACE(0x11d55380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d55380 push ebp */
  push32((uint32_t)(EBP));
  /* 11d55381 mov ebp, esp */
  EBP = (ESP);
  /* 11d55383 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d55386 push esi */
  push32((uint32_t)(ESI));
  /* 11d55387 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5538b je 0x11d553ac */
  if (C.zf) goto L_11d553ac;
  /* 11d5538d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11d5538f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d55392 push eax */
  push32((uint32_t)(EAX));
  /* 11d55393 call 0x11d557d0 */
  push32(0x11d55398u); f_11d557d0();
  /* 11d55398 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5539b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d5539e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d553a2 je 0x11d553ac */
  if (C.zf) goto L_11d553ac;
  /* 11d553a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d553a7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d553aa jne 0x11d553b4 */
  if (!C.zf) goto L_11d553b4;
L_11d553ac:;
  /* 11d553ac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d553af jmp 0x11d5565b */
  goto L_11d5565b;
L_11d553b4:;
  /* 11d553b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d553b7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11d553bb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d553bd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d553bf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d553c0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d553c3 mov ecx, dword ptr [0x11d71670] */
  ECX = (r32((uint32_t)(0x11d71670)));
  /* 11d553c9 cmp ecx, dword ptr [0x11d71674] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d71674))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d553cf jne 0x11d553e5 */
  if (!C.zf) goto L_11d553e5;
  /* 11d553d1 mov edx, dword ptr [0x11d71670] */
  EDX = (r32((uint32_t)(0x11d71670)));
  /* 11d553d7 push edx */
  push32((uint32_t)(EDX));
  /* 11d553d8 call 0x11d556e0 */
  push32(0x11d553ddu); f_11d556e0();
  /* 11d553dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d553e0 mov dword ptr [0x11d71670], eax */
  w32((uint32_t)(0x11d71670), (EAX));
L_11d553e5:;
  /* 11d553e5 cmp dword ptr [0x11d71670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d553ec jne 0x11d554a5 */
  if (!C.zf) goto L_11d554a5;
  /* 11d553f2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d553f6 je 0x11d55417 */
  if (C.zf) goto L_11d55417;
  /* 11d553f8 cmp dword ptr [0x11d71678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d553ff je 0x11d55417 */
  if (C.zf) goto L_11d55417;
  /* 11d55401 call 0x11d54e80 */
  push32(0x11d55406u); f_11d54e80();
  /* 11d55406 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d55408 je 0x11d55412 */
  if (C.zf) goto L_11d55412;
  /* 11d5540a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d5540d jmp 0x11d5565b */
  goto L_11d5565b;
L_11d55412:;
  /* 11d55412 jmp 0x11d554a5 */
  goto L_11d554a5;
L_11d55417:;
  /* 11d55417 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5541b je 0x11d55424 */
  if (C.zf) goto L_11d55424;
  /* 11d5541d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d5541f jmp 0x11d5565b */
  goto L_11d5565b;
L_11d55424:;
  /* 11d55424 cmp dword ptr [0x11d71670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5542b jne 0x11d55464 */
  if (!C.zf) goto L_11d55464;
  /* 11d5542d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11d55432 push 0x11d6dc28 */
  push32((uint32_t)(0x11d6dc28u));
  /* 11d55437 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d55439 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d5543b call 0x11d45380 */
  push32(0x11d55440u); f_11d45380();
  /* 11d55440 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55443 mov dword ptr [0x11d71670], eax */
  w32((uint32_t)(0x11d71670), (EAX));
  /* 11d55448 cmp dword ptr [0x11d71670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5544f jne 0x11d55459 */
  if (!C.zf) goto L_11d55459;
  /* 11d55451 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d55454 jmp 0x11d5565b */
  goto L_11d5565b;
L_11d55459:;
  /* 11d55459 mov eax, dword ptr [0x11d71670] */
  EAX = (r32((uint32_t)(0x11d71670)));
  /* 11d5545e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11d55464:;
  /* 11d55464 cmp dword ptr [0x11d71678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5546b jne 0x11d554a5 */
  if (!C.zf) goto L_11d554a5;
  /* 11d5546d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11d55472 push 0x11d6dc28 */
  push32((uint32_t)(0x11d6dc28u));
  /* 11d55477 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d55479 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d5547b call 0x11d45380 */
  push32(0x11d55480u); f_11d45380();
  /* 11d55480 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55483 mov dword ptr [0x11d71678], eax */
  w32((uint32_t)(0x11d71678), (EAX));
  /* 11d55488 cmp dword ptr [0x11d71678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d71678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5548f jne 0x11d55499 */
  if (!C.zf) goto L_11d55499;
  /* 11d55491 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d55494 jmp 0x11d5565b */
  goto L_11d5565b;
L_11d55499:;
  /* 11d55499 mov ecx, dword ptr [0x11d71678] */
  ECX = (r32((uint32_t)(0x11d71678)));
  /* 11d5549f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11d554a5:;
  /* 11d554a5 mov edx, dword ptr [0x11d71670] */
  EDX = (r32((uint32_t)(0x11d71670)));
  /* 11d554ab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d554ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d554b1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d554b4 push eax */
  push32((uint32_t)(EAX));
  /* 11d554b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d554b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d554b9 call 0x11d55660 */
  push32(0x11d554beu); f_11d55660();
  /* 11d554be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d554c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d554c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d554c8 jl 0x11d55561 */
  if ((C.sf!=C.of)) goto L_11d55561;
  /* 11d554ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d554d1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d554d4 je 0x11d55561 */
  if (C.zf) goto L_11d55561;
  /* 11d554da cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d554de je 0x11d55553 */
  if (C.zf) goto L_11d55553;
  /* 11d554e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d554e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d554e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d554e8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11d554eb push edx */
  push32((uint32_t)(EDX));
  /* 11d554ec call 0x11d45e10 */
  push32(0x11d554f1u); f_11d45e10();
  /* 11d554f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d554f4 jmp 0x11d554ff */
  goto L_11d554ff;
L_11d554f6:;
  /* 11d554f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d554f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d554fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d554ff:;
  /* 11d554ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d55502 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d55505 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55509 je 0x11d55520 */
  if (C.zf) goto L_11d55520;
  /* 11d5550b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5550e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d55511 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d55514 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11d55517 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11d5551b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11d5551e jmp 0x11d554f6 */
  goto L_11d554f6;
L_11d55520:;
  /* 11d55520 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11d55525 push 0x11d6dc28 */
  push32((uint32_t)(0x11d6dc28u));
  /* 11d5552a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5552c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5552f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11d55532 push eax */
  push32((uint32_t)(EAX));
  /* 11d55533 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d55536 push ecx */
  push32((uint32_t)(ECX));
  /* 11d55537 call 0x11d45810 */
  push32(0x11d5553cu); f_11d45810();
  /* 11d5553c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5553f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d55542 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55546 je 0x11d55551 */
  if (C.zf) goto L_11d55551;
  /* 11d55548 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5554b mov dword ptr [0x11d71670], edx */
  w32((uint32_t)(0x11d71670), (EDX));
L_11d55551:;
  /* 11d55551 jmp 0x11d5555f */
  goto L_11d5555f;
L_11d55553:;
  /* 11d55553 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d55556 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d55559 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5555c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11d5555f:;
  /* 11d5555f jmp 0x11d555d4 */
  goto L_11d555d4;
L_11d55561:;
  /* 11d55561 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55565 jne 0x11d555cd */
  if (!C.zf) goto L_11d555cd;
  /* 11d55567 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5556b jge 0x11d55575 */
  if ((C.sf==C.of)) goto L_11d55575;
  /* 11d5556d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d55570 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d55572 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d55575:;
  /* 11d55575 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11d5557a push 0x11d6dc28 */
  push32((uint32_t)(0x11d6dc28u));
  /* 11d5557f push 2 */
  push32((uint32_t)(0x2u));
  /* 11d55581 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d55584 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11d5558b push edx */
  push32((uint32_t)(EDX));
  /* 11d5558c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5558f push eax */
  push32((uint32_t)(EAX));
  /* 11d55590 call 0x11d45810 */
  push32(0x11d55595u); f_11d45810();
  /* 11d55595 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55598 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d5559b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5559f jne 0x11d555a9 */
  if (!C.zf) goto L_11d555a9;
  /* 11d555a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d555a4 jmp 0x11d5565b */
  goto L_11d5565b;
L_11d555a9:;
  /* 11d555a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d555ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d555af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d555b2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11d555b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d555b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d555bb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11d555c3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d555c6 mov dword ptr [0x11d71670], eax */
  w32((uint32_t)(0x11d71670), (EAX));
  /* 11d555cb jmp 0x11d555d4 */
  goto L_11d555d4;
L_11d555cd:;
  /* 11d555cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d555cf jmp 0x11d5565b */
  goto L_11d5565b;
L_11d555d4:;
  /* 11d555d4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d555d8 je 0x11d55659 */
  if (C.zf) goto L_11d55659;
  /* 11d555da push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11d555df push 0x11d6dc28 */
  push32((uint32_t)(0x11d6dc28u));
  /* 11d555e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d555e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d555e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d555ea call 0x11d481b0 */
  push32(0x11d555efu); f_11d481b0();
  /* 11d555ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d555f2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d555f5 push eax */
  push32((uint32_t)(EAX));
  /* 11d555f6 call 0x11d45380 */
  push32(0x11d555fbu); f_11d45380();
  /* 11d555fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d555fe mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d55601 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55605 je 0x11d55659 */
  if (C.zf) goto L_11d55659;
  /* 11d55607 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5560a push edx */
  push32((uint32_t)(EDX));
  /* 11d5560b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d5560e push eax */
  push32((uint32_t)(EAX));
  /* 11d5560f call 0x11d48330 */
  push32(0x11d55614u); f_11d48330();
  /* 11d55614 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55617 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11d5561a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d5561d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d55620 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55622 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d55625 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d55628 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11d5562b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5562e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55631 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d55634 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d55637 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d55639 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d5563b not edx */
  EDX = (~(EDX));
  /* 11d5563d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11d55640 push edx */
  push32((uint32_t)(EDX));
  /* 11d55641 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d55644 push eax */
  push32((uint32_t)(EAX));
  /* 11d55645 call dword ptr [0x11d742e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d742e4))), 0x11d5564bu);
  /* 11d5564b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5564d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d55650 push ecx */
  push32((uint32_t)(ECX));
  /* 11d55651 call 0x11d45e10 */
  push32(0x11d55656u); f_11d45e10();
  /* 11d55656 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d55659:;
  /* 11d55659 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d5565b:;
  /* 11d5565b pop esi */
  ESI = (pop32());
  /* 11d5565c mov esp, ebp */
  ESP = (EBP);
  /* 11d5565e pop ebp */
  EBP = (pop32());
  /* 11d5565f ret  */
  ESPCHK(0x11d55380u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11d55660 (124 bytes, 47 insns) */
void f_11d55660(void) {
  FTRACE(0x11d55660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d55660 push ebp */
  push32((uint32_t)(EBP));
  /* 11d55661 mov ebp, esp */
  EBP = (ESP);
  /* 11d55663 push ecx */
  push32((uint32_t)(ECX));
  /* 11d55664 mov eax, dword ptr [0x11d71670] */
  EAX = (r32((uint32_t)(0x11d71670)));
  /* 11d55669 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d5566c jmp 0x11d55677 */
  goto L_11d55677;
L_11d5566e:;
  /* 11d5566e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d55671 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55674 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11d55677:;
  /* 11d55677 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5567a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d5567d je 0x11d556ca */
  if (C.zf) goto L_11d556ca;
  /* 11d5567f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d55682 push eax */
  push32((uint32_t)(EAX));
  /* 11d55683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d55686 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d55688 push edx */
  push32((uint32_t)(EDX));
  /* 11d55689 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5568c push eax */
  push32((uint32_t)(EAX));
  /* 11d5568d call 0x11d54e30 */
  push32(0x11d55692u); f_11d54e30();
  /* 11d55692 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55695 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d55697 jne 0x11d556c8 */
  if (!C.zf) goto L_11d556c8;
  /* 11d55699 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5569c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d5569e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d556a1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11d556a5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d556a8 je 0x11d556ba */
  if (C.zf) goto L_11d556ba;
  /* 11d556aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d556ad mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d556af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d556b2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11d556b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d556b8 jne 0x11d556c8 */
  if (!C.zf) goto L_11d556c8;
L_11d556ba:;
  /* 11d556ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d556bd sub eax, dword ptr [0x11d71670] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d71670))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d556c3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11d556c6 jmp 0x11d556d8 */
  goto L_11d556d8;
L_11d556c8:;
  /* 11d556c8 jmp 0x11d5566e */
  goto L_11d5566e;
L_11d556ca:;
  /* 11d556ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d556cd sub eax, dword ptr [0x11d71670] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d71670))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d556d3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11d556d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11d556d8:;
  /* 11d556d8 mov esp, ebp */
  ESP = (EBP);
  /* 11d556da pop ebp */
  EBP = (pop32());
  /* 11d556db ret  */
  ESPCHK(0x11d55660u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11d556e0 (238 bytes, 80 insns) */
void f_11d556e0(void) {
  FTRACE(0x11d556e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d556e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d556e1 mov ebp, esp */
  EBP = (ESP);
  /* 11d556e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d556e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11d556ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d556f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d556f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d556f7 jne 0x11d55700 */
  if (!C.zf) goto L_11d55700;
  /* 11d556f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d556fb jmp 0x11d557ca */
  goto L_11d557ca;
L_11d55700:;
  /* 11d55700 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d55703 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d55705 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d55708 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5570b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d5570e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d55710 je 0x11d5571d */
  if (C.zf) goto L_11d5571d;
  /* 11d55712 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d55715 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55718 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d5571b jmp 0x11d55700 */
  goto L_11d55700;
L_11d5571d:;
  /* 11d5571d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11d55722 push 0x11d6dc28 */
  push32((uint32_t)(0x11d6dc28u));
  /* 11d55727 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d55729 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d5572c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11d55733 push eax */
  push32((uint32_t)(EAX));
  /* 11d55734 call 0x11d45380 */
  push32(0x11d55739u); f_11d45380();
  /* 11d55739 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5573c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d5573f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d55742 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d55745 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55749 jne 0x11d55755 */
  if (!C.zf) goto L_11d55755;
  /* 11d5574b push 9 */
  push32((uint32_t)(0x9u));
  /* 11d5574d call 0x11d442f0 */
  push32(0x11d55752u); f_11d442f0();
  /* 11d55752 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d55755:;
  /* 11d55755 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d55758 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11d5575b:;
  /* 11d5575b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d5575e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55761 je 0x11d557be */
  if (C.zf) goto L_11d557be;
  /* 11d55763 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11d55768 push 0x11d6dc28 */
  push32((uint32_t)(0x11d6dc28u));
  /* 11d5576d push 2 */
  push32((uint32_t)(0x2u));
  /* 11d5576f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d55772 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d55774 push edx */
  push32((uint32_t)(EDX));
  /* 11d55775 call 0x11d481b0 */
  push32(0x11d5577au); f_11d481b0();
  /* 11d5577a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5577d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55780 push eax */
  push32((uint32_t)(EAX));
  /* 11d55781 call 0x11d45380 */
  push32(0x11d55786u); f_11d45380();
  /* 11d55786 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55789 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5578c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d5578e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d55791 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55794 je 0x11d557aa */
  if (C.zf) goto L_11d557aa;
  /* 11d55796 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d55799 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d5579b push ecx */
  push32((uint32_t)(ECX));
  /* 11d5579c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d5579f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d557a1 push eax */
  push32((uint32_t)(EAX));
  /* 11d557a2 call 0x11d48330 */
  push32(0x11d557a7u); f_11d48330();
  /* 11d557a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d557aa:;
  /* 11d557aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d557ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d557b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d557b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d557b6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d557b9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d557bc jmp 0x11d5575b */
  goto L_11d5575b;
L_11d557be:;
  /* 11d557be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d557c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11d557c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d557ca:;
  /* 11d557ca mov esp, ebp */
  ESP = (EBP);
  /* 11d557cc pop ebp */
  EBP = (pop32());
  /* 11d557cd ret  */
  ESPCHK(0x11d556e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100157d0 @ 0x11d557d0 (237 bytes, 81 insns) */
void f_11d557d0(void) {
  FTRACE(0x11d557d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d557d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d557d1 mov ebp, esp */
  EBP = (ESP);
  /* 11d557d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d557d4 cmp dword ptr [0x11d72dac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d72dac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d557db jne 0x11d557f2 */
  if (!C.zf) goto L_11d557f2;
  /* 11d557dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d557e0 push eax */
  push32((uint32_t)(EAX));
  /* 11d557e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d557e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d557e5 call 0x11d558d0 */
  push32(0x11d557eau); f_11d558d0();
  /* 11d557ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d557ed jmp 0x11d558b9 */
  goto L_11d558b9;
L_11d557f2:;
  /* 11d557f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d557f4 call 0x11d48d80 */
  push32(0x11d557f9u); f_11d48d80();
  /* 11d557f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d557fc jmp 0x11d55807 */
  goto L_11d55807;
L_11d557fe:;
  /* 11d557fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d55801 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55804 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11d55807:;
  /* 11d55807 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5580a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11d5580e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11d55812 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d55815 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d5581b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d5581d je 0x11d5589b */
  if (C.zf) goto L_11d5589b;
  /* 11d5581f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d55822 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d55827 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d55829 mov cl, byte ptr [eax + 0x11d72ec1] */
  CL = (r8((uint32_t)(EAX + 0x11d72ec1)));
  /* 11d5582f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11d55832 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d55834 je 0x11d55886 */
  if (C.zf) goto L_11d55886;
  /* 11d55836 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d55839 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5583c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11d5583f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d55842 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d55844 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d55846 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d55848 jne 0x11d55858 */
  if (!C.zf) goto L_11d55858;
  /* 11d5584a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d5584c call 0x11d48e20 */
  push32(0x11d55851u); f_11d48e20();
  /* 11d55851 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d55856 jmp 0x11d558b9 */
  goto L_11d558b9;
L_11d55858:;
  /* 11d55858 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d5585b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d55861 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11d55864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d55867 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d55869 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11d5586b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d5586d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55870 jne 0x11d55884 */
  if (!C.zf) goto L_11d55884;
  /* 11d55872 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d55874 call 0x11d48e20 */
  push32(0x11d55879u); f_11d48e20();
  /* 11d55879 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d5587c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d5587f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d55882 jmp 0x11d558b9 */
  goto L_11d558b9;
L_11d55884:;
  /* 11d55884 jmp 0x11d55896 */
  goto L_11d55896;
L_11d55886:;
  /* 11d55886 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d55889 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d5588f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d55892 jne 0x11d55896 */
  if (!C.zf) goto L_11d55896;
  /* 11d55894 jmp 0x11d5589b */
  goto L_11d5589b;
L_11d55896:;
  /* 11d55896 jmp 0x11d557fe */
  goto L_11d557fe;
L_11d5589b:;
  /* 11d5589b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d5589d call 0x11d48e20 */
  push32(0x11d558a2u); f_11d48e20();
  /* 11d558a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d558a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d558a8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d558ad cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d558b0 jne 0x11d558b7 */
  if (!C.zf) goto L_11d558b7;
  /* 11d558b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d558b5 jmp 0x11d558b9 */
  goto L_11d558b9;
L_11d558b7:;
  /* 11d558b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d558b9:;
  /* 11d558b9 mov esp, ebp */
  ESP = (EBP);
  /* 11d558bb pop ebp */
  EBP = (pop32());
  /* 11d558bc ret  */
  ESPCHK(0x11d557d0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11d558d0 (193 bytes, 87 insns) */
void f_11d558d0(void) {
  FTRACE(0x11d558d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d558d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d558d2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11d558d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d558d7 mov ebx, eax */
  EBX = (EAX);
  /* 11d558d9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11d558dc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d558e0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11d558e6 je 0x11d558fb */
  if (C.zf) goto L_11d558fb;
L_11d558e8:;
  /* 11d558e8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11d558ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d558eb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d558ed je 0x11d558c0 */
  if (C.zf) { jmp_ind(0x11d558c0u); return; }
  /* 11d558ef test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11d558f1 je 0x11d55944 */
  if (C.zf) goto L_11d55944;
  /* 11d558f3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11d558f9 jne 0x11d558e8 */
  if (!C.zf) goto L_11d558e8;
L_11d558fb:;
  /* 11d558fb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11d558fd push edi */
  push32((uint32_t)(EDI));
  /* 11d558fe mov eax, ebx */
  EAX = (EBX);
  /* 11d55900 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11d55903 push esi */
  push32((uint32_t)(ESI));
  /* 11d55904 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11d55906:;
  /* 11d55906 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11d55908 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11d5590d mov eax, ecx */
  EAX = (ECX);
  /* 11d5590f mov esi, edi */
  ESI = (EDI);
  /* 11d55911 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11d55913 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55915 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55917 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d5591a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d5591d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11d5591f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11d55921 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d55924 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11d5592a jne 0x11d55948 */
  if (!C.zf) goto L_11d55948;
  /* 11d5592c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11d55931 je 0x11d55906 */
  if (C.zf) goto L_11d55906;
  /* 11d55933 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11d55938 jne 0x11d55942 */
  if (!C.zf) goto L_11d55942;
  /* 11d5593a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11d55940 jne 0x11d55906 */
  if (!C.zf) goto L_11d55906;
L_11d55942:;
  /* 11d55942 pop esi */
  ESI = (pop32());
  /* 11d55943 pop edi */
  EDI = (pop32());
L_11d55944:;
  /* 11d55944 pop ebx */
  EBX = (pop32());
  /* 11d55945 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d55947 ret  */
  ESPCHK(0x11d558d0u, _esp0);
  ESP += 4; return;
L_11d55948:;
  /* 11d55948 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11d5594b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d5594d je 0x11d55985 */
  if (C.zf) goto L_11d55985;
  /* 11d5594f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d55951 je 0x11d55942 */
  if (C.zf) goto L_11d55942;
  /* 11d55953 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d55955 je 0x11d5597e */
  if (C.zf) goto L_11d5597e;
  /* 11d55957 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11d55959 je 0x11d55942 */
  if (C.zf) goto L_11d55942;
  /* 11d5595b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d5595e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d55960 je 0x11d55977 */
  if (C.zf) goto L_11d55977;
  /* 11d55962 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d55964 je 0x11d55942 */
  if (C.zf) goto L_11d55942;
  /* 11d55966 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d55968 je 0x11d55970 */
  if (C.zf) goto L_11d55970;
  /* 11d5596a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11d5596c je 0x11d55942 */
  if (C.zf) goto L_11d55942;
  /* 11d5596e jmp 0x11d55906 */
  goto L_11d55906;
L_11d55970:;
  /* 11d55970 pop esi */
  ESI = (pop32());
  /* 11d55971 pop edi */
  EDI = (pop32());
  /* 11d55972 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11d55975 pop ebx */
  EBX = (pop32());
  /* 11d55976 ret  */
  ESPCHK(0x11d558d0u, _esp0);
  ESP += 4; return;
L_11d55977:;
  /* 11d55977 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11d5597a pop esi */
  ESI = (pop32());
  /* 11d5597b pop edi */
  EDI = (pop32());
  /* 11d5597c pop ebx */
  EBX = (pop32());
  /* 11d5597d ret  */
  ESPCHK(0x11d558d0u, _esp0);
  ESP += 4; return;
L_11d5597e:;
  /* 11d5597e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11d55981 pop esi */
  ESI = (pop32());
  /* 11d55982 pop edi */
  EDI = (pop32());
  /* 11d55983 pop ebx */
  EBX = (pop32());
  /* 11d55984 ret  */
  ESPCHK(0x11d558d0u, _esp0);
  ESP += 4; return;
L_11d55985:;
  /* 11d55985 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11d55988 pop esi */
  ESI = (pop32());
  /* 11d55989 pop edi */
  EDI = (pop32());
  /* 11d5598a pop ebx */
  EBX = (pop32());
  /* 11d5598b ret  */
  ESPCHK(0x11d558d0u, _esp0);
  ESP += 4; return;
  /* 11d5598c jmp dword ptr [0x11d743a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11d743a4)))); return;
}

/* RtlUnwind @ 0x11d55adc (6 bytes, 1 insns) */
void f_11d55adc(void) {
  FTRACE(0x11d55adcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d55adc jmp dword ptr [0x11d74320] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11d74320)))); return;
}

