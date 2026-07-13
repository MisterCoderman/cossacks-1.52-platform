#include "recomp.h"

/* FUN_100116f0 @ 0x122a16f0 (393 bytes, 123 insns) */
void f_122a16f0(void) {
  FTRACE(0x122a16f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a16f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a16f1 mov ebp, esp */
  EBP = (ESP);
  /* 122a16f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a16f6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a16fa jne 0x122a1706 */
  if (!C.zf) goto L_122a1706;
  /* 122a16fc mov eax, dword ptr [0x122bfc98] */
  EAX = (r32((uint32_t)(0x122bfc98)));
  /* 122a1701 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122a1704 jmp 0x122a170c */
  goto L_122a170c;
L_122a1706:;
  /* 122a1706 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a1709 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122a170c:;
  /* 122a170c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a170f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122a1712 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1715 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122a1718 push 0x122c098c */
  push32((uint32_t)(0x122c098cu));
  /* 122a171d call dword ptr [0x122c32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32b4))), 0x122a1723u);
  /* 122a1723 cmp dword ptr [0x122c097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a172a je 0x122a174a */
  if (C.zf) goto L_122a174a;
  /* 122a172c push 0x122c098c */
  push32((uint32_t)(0x122c098cu));
  /* 122a1731 call dword ptr [0x122c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a4))), 0x122a1737u);
  /* 122a1737 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122a1739 call 0x12297db0 */
  push32(0x122a173eu); f_12297db0();
  /* 122a173e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1741 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 122a1748 jmp 0x122a1751 */
  goto L_122a1751;
L_122a174a:;
  /* 122a174a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_122a1751:;
  /* 122a1751 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1755 jbe 0x122a1842 */
  if ((C.cf||C.zf)) goto L_122a1842;
  /* 122a175b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a175e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122a1760 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 122a1763 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a1767 je 0x122a1771 */
  if (C.zf) goto L_122a1771;
  /* 122a1769 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a176d je 0x122a1776 */
  if (C.zf) goto L_122a1776;
  /* 122a176f jmp 0x122a17d0 */
  goto L_122a17d0;
L_122a1771:;
  /* 122a1771 jmp 0x122a1842 */
  goto L_122a1842;
L_122a1776:;
  /* 122a1776 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1779 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a177c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 122a177f mov dword ptr [0x122c0968], 0 */
  w32((uint32_t)(0x122c0968), (0x0u));
  /* 122a1789 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a178c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122a178f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1792 jne 0x122a17a7 */
  if (!C.zf) goto L_122a17a7;
  /* 122a1794 mov dword ptr [0x122c0968], 1 */
  w32((uint32_t)(0x122c0968), (0x1u));
  /* 122a179e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a17a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a17a4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_122a17a7:;
  /* 122a17a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a17aa push ecx */
  push32((uint32_t)(ECX));
  /* 122a17ab lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 122a17ae push edx */
  push32((uint32_t)(EDX));
  /* 122a17af lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 122a17b2 push eax */
  push32((uint32_t)(EAX));
  /* 122a17b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a17b6 push ecx */
  push32((uint32_t)(ECX));
  /* 122a17b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a17ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a17bc push eax */
  push32((uint32_t)(EAX));
  /* 122a17bd call 0x122a1880 */
  push32(0x122a17c2u); f_122a1880();
  /* 122a17c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a17c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a17c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a17cb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 122a17ce jmp 0x122a183d */
  goto L_122a183d;
L_122a17d0:;
  /* 122a17d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a17d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a17d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a17d7 mov ecx, dword ptr [0x122bec98] */
  ECX = (r32((uint32_t)(0x122bec98)));
  /* 122a17dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a17df mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122a17e3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 122a17e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a17eb je 0x122a1818 */
  if (C.zf) goto L_122a1818;
  /* 122a17ed cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a17f1 jbe 0x122a1818 */
  if ((C.cf||C.zf)) goto L_122a1818;
  /* 122a17f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a17f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a17f9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122a17fb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122a17fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a1800 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1803 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122a1806 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1809 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a180c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 122a180f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1812 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1815 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122a1818:;
  /* 122a1818 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a181b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a181e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122a1820 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122a1822 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a1825 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1828 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122a182b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a182e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1831 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 122a1834 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1837 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a183a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122a183d:;
  /* 122a183d jmp 0x122a1751 */
  goto L_122a1751;
L_122a1842:;
  /* 122a1842 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1846 je 0x122a1854 */
  if (C.zf) goto L_122a1854;
  /* 122a1848 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122a184a call 0x12297e50 */
  push32(0x122a184fu); f_12297e50();
  /* 122a184f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1852 jmp 0x122a185f */
  goto L_122a185f;
L_122a1854:;
  /* 122a1854 push 0x122c098c */
  push32((uint32_t)(0x122c098cu));
  /* 122a1859 call dword ptr [0x122c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a4))), 0x122a185fu);
L_122a185f:;
  /* 122a185f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1863 jbe 0x122a1873 */
  if ((C.cf||C.zf)) goto L_122a1873;
  /* 122a1865 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a1868 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 122a186b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a186e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1871 jmp 0x122a1875 */
  goto L_122a1875;
L_122a1873:;
  /* 122a1873 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122a1875:;
  /* 122a1875 mov esp, ebp */
  ESP = (EBP);
  /* 122a1877 pop ebp */
  EBP = (pop32());
  /* 122a1878 ret  */
  ESPCHK(0x122a16f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011880 @ 0x122a1880 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_122a1880(void) {
  FTRACE(0x122a1880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a1880 push ebp */
  push32((uint32_t)(EBP));
  /* 122a1881 mov ebp, esp */
  EBP = (ESP);
  /* 122a1883 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1886 push esi */
  push32((uint32_t)(ESI));
  /* 122a1887 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 122a188b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122a188e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a1891 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1894 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122a1897 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a189b ja 0x122a1de8 */
  if ((!C.cf&&!C.zf)) goto L_122a1de8;
  /* 122a18a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a18a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a18a6 mov dl, byte ptr [eax + 0x122a1e49] */
  DL = (r8((uint32_t)(EAX + 0x122a1e49)));
  /* 122a18ac jmp dword ptr [edx*4 + 0x122a1ded] */
  switch (EDX) {
    case 0: goto L_122a1dc6;
    case 1: goto L_122a18d5;
    case 2: goto L_122a191b;
    case 3: goto L_122a1a68;
    case 4: goto L_122a1a90;
    case 5: goto L_122a1b2f;
    case 6: goto L_122a1b9b;
    case 7: goto L_122a1bc4;
    case 8: goto L_122a1c05;
    case 9: goto L_122a1ce7;
    case 10: goto L_122a1d4e;
    case 11: goto L_122a1d9b;
    case 12: goto L_122a18b3;
    case 13: goto L_122a18f8;
    case 14: goto L_122a193e;
    case 15: goto L_122a1a3e;
    case 16: goto L_122a1ad5;
    case 17: goto L_122a1b02;
    case 18: goto L_122a1b57;
    case 19: goto L_122a1bdb;
    case 20: goto L_122a1c89;
    case 21: goto L_122a1d18;
    case 22: goto L_122a1de8;
    default: x86_unimpl("switch@0x122a18ac out of table"); return;
  }
L_122a18b3:;
  /* 122a18b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a18b6 push ecx */
  push32((uint32_t)(ECX));
  /* 122a18b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a18ba push edx */
  push32((uint32_t)(EDX));
  /* 122a18bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a18be mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 122a18c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a18c4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 122a18c7 push eax */
  push32((uint32_t)(EAX));
  /* 122a18c8 call 0x122a1ea0 */
  push32(0x122a18cdu); f_122a1ea0();
  /* 122a18cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a18d0 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a18d5:;
  /* 122a18d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a18d8 push ecx */
  push32((uint32_t)(ECX));
  /* 122a18d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a18dc push edx */
  push32((uint32_t)(EDX));
  /* 122a18dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a18e0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 122a18e3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a18e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 122a18ea push eax */
  push32((uint32_t)(EAX));
  /* 122a18eb call 0x122a1ea0 */
  push32(0x122a18f0u); f_122a1ea0();
  /* 122a18f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a18f3 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a18f8:;
  /* 122a18f8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a18fb push ecx */
  push32((uint32_t)(ECX));
  /* 122a18fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a18ff push edx */
  push32((uint32_t)(EDX));
  /* 122a1900 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1903 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122a1906 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a1909 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 122a190d push eax */
  push32((uint32_t)(EAX));
  /* 122a190e call 0x122a1ea0 */
  push32(0x122a1913u); f_122a1ea0();
  /* 122a1913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1916 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a191b:;
  /* 122a191b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a191e push ecx */
  push32((uint32_t)(ECX));
  /* 122a191f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1922 push edx */
  push32((uint32_t)(EDX));
  /* 122a1923 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1926 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122a1929 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a192c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 122a1930 push eax */
  push32((uint32_t)(EAX));
  /* 122a1931 call 0x122a1ea0 */
  push32(0x122a1936u); f_122a1ea0();
  /* 122a1936 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1939 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a193e:;
  /* 122a193e cmp dword ptr [0x122c0968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1945 je 0x122a19c6 */
  if (C.zf) goto L_122a19c6;
  /* 122a1947 mov dword ptr [0x122c0968], 0 */
  w32((uint32_t)(0x122c0968), (0x0u));
  /* 122a1951 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a1954 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1955 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1958 push edx */
  push32((uint32_t)(EDX));
  /* 122a1959 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a195c push eax */
  push32((uint32_t)(EAX));
  /* 122a195d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1960 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1961 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a1964 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 122a196a push eax */
  push32((uint32_t)(EAX));
  /* 122a196b call 0x122a2050 */
  push32(0x122a1970u); f_122a2050();
  /* 122a1970 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1973 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1976 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1979 jne 0x122a1980 */
  if (!C.zf) goto L_122a1980;
  /* 122a197b jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1980:;
  /* 122a1980 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1983 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a1985 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 122a1988 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a198b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a198d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1990 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1993 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122a1995 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1998 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a199a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a199d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a19a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122a19a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a19a5 push ecx */
  push32((uint32_t)(ECX));
  /* 122a19a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a19a9 push edx */
  push32((uint32_t)(EDX));
  /* 122a19aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a19ad push eax */
  push32((uint32_t)(EAX));
  /* 122a19ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a19b1 push ecx */
  push32((uint32_t)(ECX));
  /* 122a19b2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a19b5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 122a19bb push eax */
  push32((uint32_t)(EAX));
  /* 122a19bc call 0x122a2050 */
  push32(0x122a19c1u); f_122a2050();
  /* 122a19c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a19c4 jmp 0x122a1a39 */
  goto L_122a1a39;
L_122a19c6:;
  /* 122a19c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a19c9 push ecx */
  push32((uint32_t)(ECX));
  /* 122a19ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a19cd push edx */
  push32((uint32_t)(EDX));
  /* 122a19ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a19d1 push eax */
  push32((uint32_t)(EAX));
  /* 122a19d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a19d5 push ecx */
  push32((uint32_t)(ECX));
  /* 122a19d6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a19d9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 122a19df push eax */
  push32((uint32_t)(EAX));
  /* 122a19e0 call 0x122a2050 */
  push32(0x122a19e5u); f_122a2050();
  /* 122a19e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a19e8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a19eb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a19ee jne 0x122a19f5 */
  if (!C.zf) goto L_122a19f5;
  /* 122a19f0 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a19f5:;
  /* 122a19f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a19f8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a19fa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 122a19fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1a00 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a1a02 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1a05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1a08 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122a1a0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1a0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a1a0f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1a12 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1a15 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122a1a17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a1a1a push ecx */
  push32((uint32_t)(ECX));
  /* 122a1a1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1a1e push edx */
  push32((uint32_t)(EDX));
  /* 122a1a1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1a22 push eax */
  push32((uint32_t)(EAX));
  /* 122a1a23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1a26 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1a27 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a1a2a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 122a1a30 push eax */
  push32((uint32_t)(EAX));
  /* 122a1a31 call 0x122a2050 */
  push32(0x122a1a36u); f_122a2050();
  /* 122a1a36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a1a39:;
  /* 122a1a39 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1a3e:;
  /* 122a1a3e mov ecx, dword ptr [0x122c0968] */
  ECX = (r32((uint32_t)(0x122c0968)));
  /* 122a1a44 mov dword ptr [0x122c0978], ecx */
  w32((uint32_t)(0x122c0978), (ECX));
  /* 122a1a4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1a4d push edx */
  push32((uint32_t)(EDX));
  /* 122a1a4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1a51 push eax */
  push32((uint32_t)(EAX));
  /* 122a1a52 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a1a54 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1a57 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122a1a5a push edx */
  push32((uint32_t)(EDX));
  /* 122a1a5b call 0x122a1ef0 */
  push32(0x122a1a60u); f_122a1ef0();
  /* 122a1a60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1a63 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1a68:;
  /* 122a1a68 mov eax, dword ptr [0x122c0968] */
  EAX = (r32((uint32_t)(0x122c0968)));
  /* 122a1a6d mov dword ptr [0x122c0978], eax */
  w32((uint32_t)(0x122c0978), (EAX));
  /* 122a1a72 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1a75 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1a76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1a79 push edx */
  push32((uint32_t)(EDX));
  /* 122a1a7a push 2 */
  push32((uint32_t)(0x2u));
  /* 122a1a7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1a7f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122a1a82 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1a83 call 0x122a1ef0 */
  push32(0x122a1a88u); f_122a1ef0();
  /* 122a1a88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1a8b jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1a90:;
  /* 122a1a90 mov edx, dword ptr [0x122c0968] */
  EDX = (r32((uint32_t)(0x122c0968)));
  /* 122a1a96 mov dword ptr [0x122c0978], edx */
  w32((uint32_t)(0x122c0978), (EDX));
  /* 122a1a9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1a9f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 122a1aa2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122a1aa3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 122a1aa8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122a1aaa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122a1aad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1ab1 jne 0x122a1aba */
  if (!C.zf) goto L_122a1aba;
  /* 122a1ab3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_122a1aba:;
  /* 122a1aba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1abd push edx */
  push32((uint32_t)(EDX));
  /* 122a1abe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1ac1 push eax */
  push32((uint32_t)(EAX));
  /* 122a1ac2 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a1ac4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a1ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1ac8 call 0x122a1ef0 */
  push32(0x122a1acdu); f_122a1ef0();
  /* 122a1acd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1ad0 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1ad5:;
  /* 122a1ad5 mov edx, dword ptr [0x122c0968] */
  EDX = (r32((uint32_t)(0x122c0968)));
  /* 122a1adb mov dword ptr [0x122c0978], edx */
  w32((uint32_t)(0x122c0978), (EDX));
  /* 122a1ae1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1ae4 push eax */
  push32((uint32_t)(EAX));
  /* 122a1ae5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1ae8 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1ae9 push 3 */
  push32((uint32_t)(0x3u));
  /* 122a1aeb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1aee mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122a1af1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1af4 push eax */
  push32((uint32_t)(EAX));
  /* 122a1af5 call 0x122a1ef0 */
  push32(0x122a1afau); f_122a1ef0();
  /* 122a1afa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1afd jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1b02:;
  /* 122a1b02 mov ecx, dword ptr [0x122c0968] */
  ECX = (r32((uint32_t)(0x122c0968)));
  /* 122a1b08 mov dword ptr [0x122c0978], ecx */
  w32((uint32_t)(0x122c0978), (ECX));
  /* 122a1b0e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1b11 push edx */
  push32((uint32_t)(EDX));
  /* 122a1b12 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1b15 push eax */
  push32((uint32_t)(EAX));
  /* 122a1b16 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a1b18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1b1b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 122a1b1e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1b21 push edx */
  push32((uint32_t)(EDX));
  /* 122a1b22 call 0x122a1ef0 */
  push32(0x122a1b27u); f_122a1ef0();
  /* 122a1b27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1b2a jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1b2f:;
  /* 122a1b2f mov eax, dword ptr [0x122c0968] */
  EAX = (r32((uint32_t)(0x122c0968)));
  /* 122a1b34 mov dword ptr [0x122c0978], eax */
  w32((uint32_t)(0x122c0978), (EAX));
  /* 122a1b39 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1b3c push ecx */
  push32((uint32_t)(ECX));
  /* 122a1b3d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1b40 push edx */
  push32((uint32_t)(EDX));
  /* 122a1b41 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a1b43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1b46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122a1b49 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1b4a call 0x122a1ef0 */
  push32(0x122a1b4fu); f_122a1ef0();
  /* 122a1b4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1b52 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1b57:;
  /* 122a1b57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1b5a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1b5e jg 0x122a1b7c */
  if ((!C.zf&&C.sf==C.of)) goto L_122a1b7c;
  /* 122a1b60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1b63 push eax */
  push32((uint32_t)(EAX));
  /* 122a1b64 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1b67 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1b68 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a1b6b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 122a1b71 push eax */
  push32((uint32_t)(EAX));
  /* 122a1b72 call 0x122a1ea0 */
  push32(0x122a1b77u); f_122a1ea0();
  /* 122a1b77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1b7a jmp 0x122a1b96 */
  goto L_122a1b96;
L_122a1b7c:;
  /* 122a1b7c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1b7f push ecx */
  push32((uint32_t)(ECX));
  /* 122a1b80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1b83 push edx */
  push32((uint32_t)(EDX));
  /* 122a1b84 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a1b87 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 122a1b8d push ecx */
  push32((uint32_t)(ECX));
  /* 122a1b8e call 0x122a1ea0 */
  push32(0x122a1b93u); f_122a1ea0();
  /* 122a1b93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a1b96:;
  /* 122a1b96 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1b9b:;
  /* 122a1b9b mov edx, dword ptr [0x122c0968] */
  EDX = (r32((uint32_t)(0x122c0968)));
  /* 122a1ba1 mov dword ptr [0x122c0978], edx */
  w32((uint32_t)(0x122c0978), (EDX));
  /* 122a1ba7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1baa push eax */
  push32((uint32_t)(EAX));
  /* 122a1bab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1bae push ecx */
  push32((uint32_t)(ECX));
  /* 122a1baf push 2 */
  push32((uint32_t)(0x2u));
  /* 122a1bb1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1bb4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a1bb6 push eax */
  push32((uint32_t)(EAX));
  /* 122a1bb7 call 0x122a1ef0 */
  push32(0x122a1bbcu); f_122a1ef0();
  /* 122a1bbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1bbf jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1bc4:;
  /* 122a1bc4 mov ecx, dword ptr [0x122c0968] */
  ECX = (r32((uint32_t)(0x122c0968)));
  /* 122a1bca mov dword ptr [0x122c0978], ecx */
  w32((uint32_t)(0x122c0978), (ECX));
  /* 122a1bd0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1bd3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 122a1bd6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122a1bd9 jmp 0x122a1c2d */
  goto L_122a1c2d;
L_122a1bdb:;
  /* 122a1bdb mov ecx, dword ptr [0x122c0968] */
  ECX = (r32((uint32_t)(0x122c0968)));
  /* 122a1be1 mov dword ptr [0x122c0978], ecx */
  w32((uint32_t)(0x122c0978), (ECX));
  /* 122a1be7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1bea push edx */
  push32((uint32_t)(EDX));
  /* 122a1beb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1bee push eax */
  push32((uint32_t)(EAX));
  /* 122a1bef push 1 */
  push32((uint32_t)(0x1u));
  /* 122a1bf1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1bf4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 122a1bf7 push edx */
  push32((uint32_t)(EDX));
  /* 122a1bf8 call 0x122a1ef0 */
  push32(0x122a1bfdu); f_122a1ef0();
  /* 122a1bfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1c00 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1c05:;
  /* 122a1c05 mov eax, dword ptr [0x122c0968] */
  EAX = (r32((uint32_t)(0x122c0968)));
  /* 122a1c0a mov dword ptr [0x122c0978], eax */
  w32((uint32_t)(0x122c0978), (EAX));
  /* 122a1c0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1c12 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1c16 jne 0x122a1c21 */
  if (!C.zf) goto L_122a1c21;
  /* 122a1c18 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 122a1c1f jmp 0x122a1c2d */
  goto L_122a1c2d;
L_122a1c21:;
  /* 122a1c21 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1c24 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 122a1c27 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1c2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122a1c2d:;
  /* 122a1c2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1c30 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 122a1c33 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1c36 jge 0x122a1c41 */
  if ((C.sf==C.of)) goto L_122a1c41;
  /* 122a1c38 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122a1c3f jmp 0x122a1c6e */
  goto L_122a1c6e;
L_122a1c41:;
  /* 122a1c41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1c44 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 122a1c47 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122a1c48 mov ecx, 7 */
  ECX = (0x7u);
  /* 122a1c4d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122a1c4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a1c52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1c55 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122a1c58 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122a1c59 mov ecx, 7 */
  ECX = (0x7u);
  /* 122a1c5e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122a1c60 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1c63 jl 0x122a1c6e */
  if ((C.sf!=C.of)) goto L_122a1c6e;
  /* 122a1c65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a1c68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1c6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122a1c6e:;
  /* 122a1c6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1c71 push eax */
  push32((uint32_t)(EAX));
  /* 122a1c72 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1c75 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1c76 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a1c78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a1c7b push edx */
  push32((uint32_t)(EDX));
  /* 122a1c7c call 0x122a1ef0 */
  push32(0x122a1c81u); f_122a1ef0();
  /* 122a1c81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1c84 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1c89:;
  /* 122a1c89 cmp dword ptr [0x122c0968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1c90 je 0x122a1cc0 */
  if (C.zf) goto L_122a1cc0;
  /* 122a1c92 mov dword ptr [0x122c0968], 0 */
  w32((uint32_t)(0x122c0968), (0x0u));
  /* 122a1c9c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a1c9f push eax */
  push32((uint32_t)(EAX));
  /* 122a1ca0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1ca4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1ca7 push edx */
  push32((uint32_t)(EDX));
  /* 122a1ca8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1cab push eax */
  push32((uint32_t)(EAX));
  /* 122a1cac mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a1caf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 122a1cb5 push edx */
  push32((uint32_t)(EDX));
  /* 122a1cb6 call 0x122a2050 */
  push32(0x122a1cbbu); f_122a2050();
  /* 122a1cbb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1cbe jmp 0x122a1ce2 */
  goto L_122a1ce2;
L_122a1cc0:;
  /* 122a1cc0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a1cc3 push eax */
  push32((uint32_t)(EAX));
  /* 122a1cc4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1cc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1ccb push edx */
  push32((uint32_t)(EDX));
  /* 122a1ccc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1ccf push eax */
  push32((uint32_t)(EAX));
  /* 122a1cd0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a1cd3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 122a1cd9 push edx */
  push32((uint32_t)(EDX));
  /* 122a1cda call 0x122a2050 */
  push32(0x122a1cdfu); f_122a2050();
  /* 122a1cdf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a1ce2:;
  /* 122a1ce2 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1ce7:;
  /* 122a1ce7 mov dword ptr [0x122c0968], 0 */
  w32((uint32_t)(0x122c0968), (0x0u));
  /* 122a1cf1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a1cf4 push eax */
  push32((uint32_t)(EAX));
  /* 122a1cf5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1cf9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1cfc push edx */
  push32((uint32_t)(EDX));
  /* 122a1cfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1d00 push eax */
  push32((uint32_t)(EAX));
  /* 122a1d01 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a1d04 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 122a1d0a push edx */
  push32((uint32_t)(EDX));
  /* 122a1d0b call 0x122a2050 */
  push32(0x122a1d10u); f_122a2050();
  /* 122a1d10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1d13 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1d18:;
  /* 122a1d18 mov eax, dword ptr [0x122c0968] */
  EAX = (r32((uint32_t)(0x122c0968)));
  /* 122a1d1d mov dword ptr [0x122c0978], eax */
  w32((uint32_t)(0x122c0978), (EAX));
  /* 122a1d22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1d25 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 122a1d28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122a1d29 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 122a1d2e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122a1d30 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122a1d33 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1d36 push edx */
  push32((uint32_t)(EDX));
  /* 122a1d37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1d3a push eax */
  push32((uint32_t)(EAX));
  /* 122a1d3b push 2 */
  push32((uint32_t)(0x2u));
  /* 122a1d3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a1d40 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1d41 call 0x122a1ef0 */
  push32(0x122a1d46u); f_122a1ef0();
  /* 122a1d46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1d49 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1d4e:;
  /* 122a1d4e mov edx, dword ptr [0x122c0968] */
  EDX = (r32((uint32_t)(0x122c0968)));
  /* 122a1d54 mov dword ptr [0x122c0978], edx */
  w32((uint32_t)(0x122c0978), (EDX));
  /* 122a1d5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1d5d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 122a1d60 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122a1d61 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 122a1d66 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122a1d68 mov ecx, eax */
  ECX = (EAX);
  /* 122a1d6a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1d6d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a1d70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1d73 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122a1d76 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122a1d77 mov esi, 0x64 */
  ESI = (0x64u);
  /* 122a1d7c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122a1d7e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1d80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122a1d83 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1d86 push eax */
  push32((uint32_t)(EAX));
  /* 122a1d87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1d8a push ecx */
  push32((uint32_t)(ECX));
  /* 122a1d8b push 4 */
  push32((uint32_t)(0x4u));
  /* 122a1d8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a1d90 push edx */
  push32((uint32_t)(EDX));
  /* 122a1d91 call 0x122a1ef0 */
  push32(0x122a1d96u); f_122a1ef0();
  /* 122a1d96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1d99 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1d9b:;
  /* 122a1d9b call 0x122a2eb0 */
  push32(0x122a1da0u); f_122a2eb0();
  /* 122a1da0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1da3 push eax */
  push32((uint32_t)(EAX));
  /* 122a1da4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1da7 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1da8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1dab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a1dad cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1db1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 122a1db4 mov ecx, dword ptr [eax*4 + 0x122bfe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x122bfe1c)));
  /* 122a1dbb push ecx */
  push32((uint32_t)(ECX));
  /* 122a1dbc call 0x122a1ea0 */
  push32(0x122a1dc1u); f_122a1ea0();
  /* 122a1dc1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1dc4 jmp 0x122a1de8 */
  goto L_122a1de8;
L_122a1dc6:;
  /* 122a1dc6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1dc9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a1dcb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 122a1dce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1dd1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a1dd3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1dd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1dd9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122a1ddb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1dde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a1de0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1de3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1de6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_122a1de8:;
  /* 122a1de8 pop esi */
  ESI = (pop32());
  /* 122a1de9 mov esp, ebp */
  ESP = (EBP);
  /* 122a1deb pop ebp */
  EBP = (pop32());
  /* 122a1dec ret  */
  ESPCHK(0x122a1880u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x122a1ea0 (72 bytes, 30 insns) */
void f_122a1ea0(void) {
  FTRACE(0x122a1ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a1ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a1ea1 mov ebp, esp */
  EBP = (ESP);
L_122a1ea3:;
  /* 122a1ea3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1ea6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1ea9 je 0x122a1ee6 */
  if (C.zf) goto L_122a1ee6;
  /* 122a1eab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a1eae movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122a1eb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a1eb3 je 0x122a1ee6 */
  if (C.zf) goto L_122a1ee6;
  /* 122a1eb5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1eb8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a1eba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a1ebd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a1ebf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122a1ec1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1ec4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a1ec6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1ec9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1ecc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122a1ece mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a1ed1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1ed4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 122a1ed7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1eda mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a1edc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1edf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1ee2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122a1ee4 jmp 0x122a1ea3 */
  goto L_122a1ea3;
L_122a1ee6:;
  /* 122a1ee6 pop ebp */
  EBP = (pop32());
  /* 122a1ee7 ret  */
  ESPCHK(0x122a1ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ef0 @ 0x122a1ef0 (173 bytes, 64 insns) */
void f_122a1ef0(void) {
  FTRACE(0x122a1ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a1ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a1ef1 mov ebp, esp */
  EBP = (ESP);
  /* 122a1ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 122a1ef4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122a1efb cmp dword ptr [0x122c0978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1f02 je 0x122a1f1a */
  if (C.zf) goto L_122a1f1a;
  /* 122a1f04 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1f07 push eax */
  push32((uint32_t)(EAX));
  /* 122a1f08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1f0b push ecx */
  push32((uint32_t)(ECX));
  /* 122a1f0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a1f0f push edx */
  push32((uint32_t)(EDX));
  /* 122a1f10 call 0x122a1fa0 */
  push32(0x122a1f15u); f_122a1fa0();
  /* 122a1f15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1f18 jmp 0x122a1f99 */
  goto L_122a1f99;
L_122a1f1a:;
  /* 122a1f1a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1f1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1f20 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1f22 jae 0x122a1f90 */
  if (!C.cf) goto L_122a1f90;
  /* 122a1f24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1f27 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1f2a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 122a1f2d jmp 0x122a1f38 */
  goto L_122a1f38;
L_122a1f2f:;
  /* 122a1f2f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1f32 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1f35 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_122a1f38:;
  /* 122a1f38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1f3b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1f3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a1f40 je 0x122a1f74 */
  if (C.zf) goto L_122a1f74;
  /* 122a1f42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a1f45 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122a1f46 mov ecx, 0xa */
  ECX = (0xau);
  /* 122a1f4b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122a1f4d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1f50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1f53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a1f55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1f58 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 122a1f5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a1f5e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122a1f5f mov ecx, 0xa */
  ECX = (0xau);
  /* 122a1f64 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122a1f66 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122a1f69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a1f6c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1f6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122a1f72 jmp 0x122a1f2f */
  goto L_122a1f2f;
L_122a1f74:;
  /* 122a1f74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1f77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a1f79 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1f7c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1f7f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122a1f81 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1f84 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a1f86 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1f89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1f8c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122a1f8e jmp 0x122a1f99 */
  goto L_122a1f99;
L_122a1f90:;
  /* 122a1f90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a1f93 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_122a1f99:;
  /* 122a1f99 mov esp, ebp */
  ESP = (EBP);
  /* 122a1f9b pop ebp */
  EBP = (pop32());
  /* 122a1f9c ret  */
  ESPCHK(0x122a1ef0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x122a1fa0 (172 bytes, 65 insns) */
void f_122a1fa0(void) {
  FTRACE(0x122a1fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a1fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a1fa1 mov ebp, esp */
  EBP = (ESP);
  /* 122a1fa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1fa6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1fa9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a1fab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122a1fae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1fb1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1fb4 jbe 0x122a1ffb */
  if ((C.cf||C.zf)) goto L_122a1ffb;
L_122a1fb6:;
  /* 122a1fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a1fb9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122a1fba mov ecx, 0xa */
  ECX = (0xau);
  /* 122a1fbf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122a1fc1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1fc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a1fc7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122a1fc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a1fcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a1fcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122a1fd2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1fd5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a1fd7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a1fda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1fdd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122a1fdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a1fe2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122a1fe3 mov ecx, 0xa */
  ECX = (0xau);
  /* 122a1fe8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122a1fea mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122a1fed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1ff1 jle 0x122a1ffb */
  if ((C.zf||C.sf!=C.of)) goto L_122a1ffb;
  /* 122a1ff3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a1ff6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a1ff9 ja 0x122a1fb6 */
  if ((!C.cf&&!C.zf)) goto L_122a1fb6;
L_122a1ffb:;
  /* 122a1ffb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a1ffe mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a2000 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122a2003 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a2006 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a2009 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 122a200b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a200e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a2011 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122a2014:;
  /* 122a2014 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a2017 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a2019 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 122a201c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a201f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a2022 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a2024 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122a2026 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a2029 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a202c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122a202f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a2032 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 122a2035 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 122a2037 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a203a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a203d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122a2040 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a2043 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2046 jb 0x122a2014 */
  if (C.cf) goto L_122a2014;
  /* 122a2048 mov esp, ebp */
  ESP = (EBP);
  /* 122a204a pop ebp */
  EBP = (pop32());
  /* 122a204b ret  */
  ESPCHK(0x122a1fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012050 @ 0x122a2050 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_122a2050(void) {
  FTRACE(0x122a2050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a2050 push ebp */
  push32((uint32_t)(EBP));
  /* 122a2051 mov ebp, esp */
  EBP = (ESP);
  /* 122a2053 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_122a2056:;
  /* 122a2056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2059 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122a205c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a205e je 0x122a24cc */
  if (C.zf) goto L_122a24cc;
  /* 122a2064 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a2067 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a206a je 0x122a24cc */
  if (C.zf) goto L_122a24cc;
  /* 122a2070 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 122a2074 mov dword ptr [0x122c0978], 0 */
  w32((uint32_t)(0x122c0978), (0x0u));
  /* 122a207e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122a2085 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2088 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a208b jmp 0x122a2096 */
  goto L_122a2096;
L_122a208d:;
  /* 122a208d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a2090 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2093 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_122a2096:;
  /* 122a2096 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a2099 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122a209c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a209f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122a20a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a20a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a20a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122a20ab cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a20ad jne 0x122a20b1 */
  if (!C.zf) goto L_122a20b1;
  /* 122a20af jmp 0x122a208d */
  goto L_122a208d;
L_122a20b1:;
  /* 122a20b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a20b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a20b7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122a20ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a20bd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122a20c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122a20c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a20c6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a20c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122a20cc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a20d0 ja 0x122a2420 */
  if ((!C.cf&&!C.zf)) goto L_122a2420;
  /* 122a20d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a20d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a20db mov al, byte ptr [ecx + 0x122a24fc] */
  AL = (r8((uint32_t)(ECX + 0x122a24fc)));
  /* 122a20e1 jmp dword ptr [eax*4 + 0x122a24d0] */
  switch (EAX) {
    case 0: goto L_122a233f;
    case 1: goto L_122a2223;
    case 2: goto L_122a21ae;
    case 3: goto L_122a20e8;
    case 4: goto L_122a2126;
    case 5: goto L_122a2187;
    case 6: goto L_122a21d5;
    case 7: goto L_122a21fc;
    case 8: goto L_122a226a;
    case 9: goto L_122a2164;
    case 10: goto L_122a2420;
    default: x86_unimpl("switch@0x122a20e1 out of table"); return;
  }
L_122a20e8:;
  /* 122a20e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a20eb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 122a20ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122a20f1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a20f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122a20f7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a20fb ja 0x122a2121 */
  if ((!C.cf&&!C.zf)) goto L_122a2121;
  /* 122a20fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122a2100 jmp dword ptr [ecx*4 + 0x122a254f] */
  switch (ECX) {
    case 0: goto L_122a2107;
    case 1: goto L_122a2111;
    case 2: goto L_122a2117;
    case 3: goto L_122a211d;
    case 4: goto L_122a2145;
    case 5: goto L_122a214f;
    case 6: goto L_122a2155;
    case 7: goto L_122a215b;
    default: x86_unimpl("switch@0x122a2100 out of table"); return;
  }
L_122a2107:;
  /* 122a2107 mov dword ptr [0x122c0978], 1 */
  w32((uint32_t)(0x122c0978), (0x1u));
L_122a2111:;
  /* 122a2111 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 122a2115 jmp 0x122a2121 */
  goto L_122a2121;
L_122a2117:;
  /* 122a2117 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 122a211b jmp 0x122a2121 */
  goto L_122a2121;
L_122a211d:;
  /* 122a211d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_122a2121:;
  /* 122a2121 jmp 0x122a2420 */
  goto L_122a2420;
L_122a2126:;
  /* 122a2126 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a2129 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 122a212c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122a212f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a2132 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 122a2135 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2139 ja 0x122a215f */
  if ((!C.cf&&!C.zf)) goto L_122a215f;
  /* 122a213b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122a213e jmp dword ptr [ecx*4 + 0x122a255f] */
  switch (ECX) {
    case 0: goto L_122a2145;
    case 1: goto L_122a214f;
    case 2: goto L_122a2155;
    case 3: goto L_122a215b;
    default: x86_unimpl("switch@0x122a213e out of table"); return;
  }
L_122a2145:;
  /* 122a2145 mov dword ptr [0x122c0978], 1 */
  w32((uint32_t)(0x122c0978), (0x1u));
L_122a214f:;
  /* 122a214f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 122a2153 jmp 0x122a215f */
  goto L_122a215f;
L_122a2155:;
  /* 122a2155 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 122a2159 jmp 0x122a215f */
  goto L_122a215f;
L_122a215b:;
  /* 122a215b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_122a215f:;
  /* 122a215f jmp 0x122a2420 */
  goto L_122a2420;
L_122a2164:;
  /* 122a2164 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a2167 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 122a216a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a216e je 0x122a2178 */
  if (C.zf) goto L_122a2178;
  /* 122a2170 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2174 je 0x122a217e */
  if (C.zf) goto L_122a217e;
  /* 122a2176 jmp 0x122a2182 */
  goto L_122a2182;
L_122a2178:;
  /* 122a2178 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 122a217c jmp 0x122a2182 */
  goto L_122a2182;
L_122a217e:;
  /* 122a217e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_122a2182:;
  /* 122a2182 jmp 0x122a2420 */
  goto L_122a2420;
L_122a2187:;
  /* 122a2187 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a218a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 122a218d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2191 je 0x122a219b */
  if (C.zf) goto L_122a219b;
  /* 122a2193 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2197 je 0x122a21a5 */
  if (C.zf) goto L_122a21a5;
  /* 122a2199 jmp 0x122a21a9 */
  goto L_122a21a9;
L_122a219b:;
  /* 122a219b mov dword ptr [0x122c0978], 1 */
  w32((uint32_t)(0x122c0978), (0x1u));
L_122a21a5:;
  /* 122a21a5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_122a21a9:;
  /* 122a21a9 jmp 0x122a2420 */
  goto L_122a2420;
L_122a21ae:;
  /* 122a21ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a21b1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 122a21b4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a21b8 je 0x122a21c2 */
  if (C.zf) goto L_122a21c2;
  /* 122a21ba cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a21be je 0x122a21cc */
  if (C.zf) goto L_122a21cc;
  /* 122a21c0 jmp 0x122a21d0 */
  goto L_122a21d0;
L_122a21c2:;
  /* 122a21c2 mov dword ptr [0x122c0978], 1 */
  w32((uint32_t)(0x122c0978), (0x1u));
L_122a21cc:;
  /* 122a21cc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_122a21d0:;
  /* 122a21d0 jmp 0x122a2420 */
  goto L_122a2420;
L_122a21d5:;
  /* 122a21d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a21d8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 122a21db cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a21df je 0x122a21e9 */
  if (C.zf) goto L_122a21e9;
  /* 122a21e1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a21e5 je 0x122a21f3 */
  if (C.zf) goto L_122a21f3;
  /* 122a21e7 jmp 0x122a21f7 */
  goto L_122a21f7;
L_122a21e9:;
  /* 122a21e9 mov dword ptr [0x122c0978], 1 */
  w32((uint32_t)(0x122c0978), (0x1u));
L_122a21f3:;
  /* 122a21f3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_122a21f7:;
  /* 122a21f7 jmp 0x122a2420 */
  goto L_122a2420;
L_122a21fc:;
  /* 122a21fc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a21ff mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 122a2202 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2206 je 0x122a2210 */
  if (C.zf) goto L_122a2210;
  /* 122a2208 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a220c je 0x122a221a */
  if (C.zf) goto L_122a221a;
  /* 122a220e jmp 0x122a221e */
  goto L_122a221e;
L_122a2210:;
  /* 122a2210 mov dword ptr [0x122c0978], 1 */
  w32((uint32_t)(0x122c0978), (0x1u));
L_122a221a:;
  /* 122a221a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_122a221e:;
  /* 122a221e jmp 0x122a2420 */
  goto L_122a2420;
L_122a2223:;
  /* 122a2223 push 0x122bcba4 */
  push32((uint32_t)(0x122bcba4u));
  /* 122a2228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a222b push ecx */
  push32((uint32_t)(ECX));
  /* 122a222c call 0x122a2a80 */
  push32(0x122a2231u); f_122a2a80();
  /* 122a2231 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2234 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a2236 jne 0x122a2243 */
  if (!C.zf) goto L_122a2243;
  /* 122a2238 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a223b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a223e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122a2241 jmp 0x122a2261 */
  goto L_122a2261;
L_122a2243:;
  /* 122a2243 push 0x122bcba0 */
  push32((uint32_t)(0x122bcba0u));
  /* 122a2248 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a224b push eax */
  push32((uint32_t)(EAX));
  /* 122a224c call 0x122a2a80 */
  push32(0x122a2251u); f_122a2a80();
  /* 122a2251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2254 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a2256 jne 0x122a2261 */
  if (!C.zf) goto L_122a2261;
  /* 122a2258 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a225b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a225e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122a2261:;
  /* 122a2261 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 122a2265 jmp 0x122a2420 */
  goto L_122a2420;
L_122a226a:;
  /* 122a226a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a226d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2271 jg 0x122a2281 */
  if ((!C.zf&&C.sf==C.of)) goto L_122a2281;
  /* 122a2273 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a2276 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 122a227c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122a227f jmp 0x122a228d */
  goto L_122a228d;
L_122a2281:;
  /* 122a2281 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a2284 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 122a228a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_122a228d:;
  /* 122a228d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2291 jle 0x122a2334 */
  if ((C.zf||C.sf!=C.of)) goto L_122a2334;
  /* 122a2297 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a229a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a229d jbe 0x122a2334 */
  if ((C.cf||C.zf)) goto L_122a2334;
  /* 122a22a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a22a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a22a8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a22aa mov ecx, dword ptr [0x122bec98] */
  ECX = (r32((uint32_t)(0x122bec98)));
  /* 122a22b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a22b2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122a22b6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 122a22bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a22be je 0x122a22f7 */
  if (C.zf) goto L_122a22f7;
  /* 122a22c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a22c3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a22c6 jbe 0x122a22f7 */
  if ((C.cf||C.zf)) goto L_122a22f7;
  /* 122a22c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a22cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a22cd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a22d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122a22d2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 122a22d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a22d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a22d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a22dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a22df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122a22e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a22e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a22e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 122a22ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a22ed mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a22ef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a22f2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a22f5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122a22f7:;
  /* 122a22f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a22fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a22fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a22ff mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a2301 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122a2303 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a2306 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a2308 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a230b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a230e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122a2310 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a2313 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2316 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122a2319 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a231c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a231e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a2321 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a2324 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122a2326 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a2329 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a232c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122a232f jmp 0x122a228d */
  goto L_122a228d;
L_122a2334:;
  /* 122a2334 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a2337 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122a233a jmp 0x122a2056 */
  goto L_122a2056;
L_122a233f:;
  /* 122a233f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a2342 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122a2345 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a2347 je 0x122a2412 */
  if (C.zf) goto L_122a2412;
  /* 122a234d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2350 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2353 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_122a2356:;
  /* 122a2356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2359 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122a235c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a235e je 0x122a2410 */
  if (C.zf) goto L_122a2410;
  /* 122a2364 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a2367 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a236a je 0x122a2410 */
  if (C.zf) goto L_122a2410;
  /* 122a2370 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2373 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122a2376 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2379 jne 0x122a2389 */
  if (!C.zf) goto L_122a2389;
  /* 122a237b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a237e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2381 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 122a2384 jmp 0x122a2410 */
  goto L_122a2410;
L_122a2389:;
  /* 122a2389 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a238c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a238e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122a2390 mov edx, dword ptr [0x122bec98] */
  EDX = (r32((uint32_t)(0x122bec98)));
  /* 122a2396 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a2398 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 122a239c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 122a23a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a23a3 je 0x122a23dc */
  if (C.zf) goto L_122a23dc;
  /* 122a23a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a23a8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a23ab jbe 0x122a23dc */
  if ((C.cf||C.zf)) goto L_122a23dc;
  /* 122a23ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a23b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a23b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a23b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122a23b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122a23b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a23bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a23be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a23c1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a23c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122a23c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a23c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a23cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122a23cf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a23d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a23d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a23d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a23da mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_122a23dc:;
  /* 122a23dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a23df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a23e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a23e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122a23e6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 122a23e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a23eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a23ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a23f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a23f3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122a23f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a23f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a23fb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 122a23fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a2401 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a2403 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a2406 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a2409 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122a240b jmp 0x122a2356 */
  goto L_122a2356;
L_122a2410:;
  /* 122a2410 jmp 0x122a241b */
  goto L_122a241b;
L_122a2412:;
  /* 122a2412 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2415 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2418 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_122a241b:;
  /* 122a241b jmp 0x122a2056 */
  goto L_122a2056;
L_122a2420:;
  /* 122a2420 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122a2424 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a2426 je 0x122a244c */
  if (C.zf) goto L_122a244c;
  /* 122a2428 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a242b push edx */
  push32((uint32_t)(EDX));
  /* 122a242c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a242f push eax */
  push32((uint32_t)(EAX));
  /* 122a2430 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a2433 push ecx */
  push32((uint32_t)(ECX));
  /* 122a2434 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a2437 push edx */
  push32((uint32_t)(EDX));
  /* 122a2438 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 122a243b push eax */
  push32((uint32_t)(EAX));
  /* 122a243c call 0x122a1880 */
  push32(0x122a2441u); f_122a1880();
  /* 122a2441 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2444 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a2447 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 122a244a jmp 0x122a24c7 */
  goto L_122a24c7;
L_122a244c:;
  /* 122a244c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a244f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a2451 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a2453 mov ecx, dword ptr [0x122bec98] */
  ECX = (r32((uint32_t)(0x122bec98)));
  /* 122a2459 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a245b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122a245f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 122a2465 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a2467 je 0x122a2498 */
  if (C.zf) goto L_122a2498;
  /* 122a2469 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a246c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a246e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2471 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a2473 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122a2475 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a2478 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a247a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a247d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a2480 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122a2482 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2485 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2488 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 122a248b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a248e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a2490 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a2493 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a2496 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_122a2498:;
  /* 122a2498 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a249b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a249d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a24a0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122a24a2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122a24a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a24a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a24a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a24ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a24af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122a24b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a24b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a24b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122a24ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a24bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a24bf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a24c2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a24c5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_122a24c7:;
  /* 122a24c7 jmp 0x122a2056 */
  goto L_122a2056;
L_122a24cc:;
  /* 122a24cc mov esp, ebp */
  ESP = (EBP);
  /* 122a24ce pop ebp */
  EBP = (pop32());
  /* 122a24cf ret  */
  ESPCHK(0x122a2050u, _esp0);
  ESP += 4; return;
}

/* FUN_10012570 @ 0x122a2570 (650 bytes, 178 insns) */
void f_122a2570(void) {
  FTRACE(0x122a2570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a2570 push ebp */
  push32((uint32_t)(EBP));
  /* 122a2571 mov ebp, esp */
  EBP = (ESP);
  /* 122a2573 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a2579 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a257d jne 0x122a26d9 */
  if (!C.zf) goto L_122a26d9;
  /* 122a2583 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a2586 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 122a258c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 122a2592 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122a2595 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122a259c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 122a25a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a25a8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 122a25ae push edx */
  push32((uint32_t)(EDX));
  /* 122a25af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a25b2 push eax */
  push32((uint32_t)(EAX));
  /* 122a25b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a25b6 push ecx */
  push32((uint32_t)(ECX));
  /* 122a25b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a25ba push edx */
  push32((uint32_t)(EDX));
  /* 122a25bb call 0x122a3990 */
  push32(0x122a25c0u); f_122a3990();
  /* 122a25c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a25c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122a25c6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a25ca jne 0x122a265f */
  if (!C.zf) goto L_122a265f;
  /* 122a25d0 call dword ptr [0x122c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32e0))), 0x122a25d6u);
  /* 122a25d6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a25d9 je 0x122a25e0 */
  if (C.zf) goto L_122a25e0;
  /* 122a25db jmp 0x122a26bd */
  goto L_122a26bd;
L_122a25e0:;
  /* 122a25e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a25e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a25e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a25e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a25e9 push eax */
  push32((uint32_t)(EAX));
  /* 122a25ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a25ed push ecx */
  push32((uint32_t)(ECX));
  /* 122a25ee call 0x122a3990 */
  push32(0x122a25f3u); f_122a3990();
  /* 122a25f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a25f6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 122a25fc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2603 jne 0x122a260a */
  if (!C.zf) goto L_122a260a;
  /* 122a2605 jmp 0x122a26bd */
  goto L_122a26bd;
L_122a260a:;
  /* 122a260a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 122a260c push 0x122bcbac */
  push32((uint32_t)(0x122bcbacu));
  /* 122a2611 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a2613 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 122a2619 push edx */
  push32((uint32_t)(EDX));
  /* 122a261a call 0x122943b0 */
  push32(0x122a261fu); f_122943b0();
  /* 122a261f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2622 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122a2625 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2629 jne 0x122a2630 */
  if (!C.zf) goto L_122a2630;
  /* 122a262b jmp 0x122a26bd */
  goto L_122a26bd;
L_122a2630:;
  /* 122a2630 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122a2637 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a2639 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 122a263f push eax */
  push32((uint32_t)(EAX));
  /* 122a2640 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a2643 push ecx */
  push32((uint32_t)(ECX));
  /* 122a2644 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a2647 push edx */
  push32((uint32_t)(EDX));
  /* 122a2648 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a264b push eax */
  push32((uint32_t)(EAX));
  /* 122a264c call 0x122a3990 */
  push32(0x122a2651u); f_122a3990();
  /* 122a2651 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2654 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122a2657 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a265b jne 0x122a265f */
  if (!C.zf) goto L_122a265f;
  /* 122a265d jmp 0x122a26bd */
  goto L_122a26bd;
L_122a265f:;
  /* 122a265f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 122a2661 push 0x122bcbac */
  push32((uint32_t)(0x122bcbacu));
  /* 122a2666 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a2668 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a266b push ecx */
  push32((uint32_t)(ECX));
  /* 122a266c call 0x122943b0 */
  push32(0x122a2671u); f_122943b0();
  /* 122a2671 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2674 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 122a267a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 122a267c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 122a2682 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2685 jne 0x122a2689 */
  if (!C.zf) goto L_122a2689;
  /* 122a2687 jmp 0x122a26bd */
  goto L_122a26bd;
L_122a2689:;
  /* 122a2689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a268c push ecx */
  push32((uint32_t)(ECX));
  /* 122a268d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a2690 push edx */
  push32((uint32_t)(EDX));
  /* 122a2691 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 122a2697 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a2699 push ecx */
  push32((uint32_t)(ECX));
  /* 122a269a call 0x12297bd0 */
  push32(0x122a269fu); f_12297bd0();
  /* 122a269f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a26a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a26a6 je 0x122a26b6 */
  if (C.zf) goto L_122a26b6;
  /* 122a26a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a26aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a26ad push edx */
  push32((uint32_t)(EDX));
  /* 122a26ae call 0x12294e40 */
  push32(0x122a26b3u); f_12294e40();
  /* 122a26b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a26b6:;
  /* 122a26b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a26b8 jmp 0x122a27f6 */
  goto L_122a27f6;
L_122a26bd:;
  /* 122a26bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a26c1 je 0x122a26d1 */
  if (C.zf) goto L_122a26d1;
  /* 122a26c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a26c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a26c8 push eax */
  push32((uint32_t)(EAX));
  /* 122a26c9 call 0x12294e40 */
  push32(0x122a26ceu); f_12294e40();
  /* 122a26ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a26d1:;
  /* 122a26d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a26d4 jmp 0x122a27f6 */
  goto L_122a27f6;
L_122a26d9:;
  /* 122a26d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a26dd jne 0x122a27f3 */
  if (!C.zf) goto L_122a27f3;
  /* 122a26e3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 122a26ed mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a26f0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 122a26f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a26f8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 122a26fe push edx */
  push32((uint32_t)(EDX));
  /* 122a26ff push 0x122c0890 */
  push32((uint32_t)(0x122c0890u));
  /* 122a2704 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a2707 push eax */
  push32((uint32_t)(EAX));
  /* 122a2708 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a270b push ecx */
  push32((uint32_t)(ECX));
  /* 122a270c call 0x122a37f0 */
  push32(0x122a2711u); f_122a37f0();
  /* 122a2711 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2714 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a2716 jne 0x122a2720 */
  if (!C.zf) goto L_122a2720;
  /* 122a2718 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a271b jmp 0x122a27f6 */
  goto L_122a27f6;
L_122a2720:;
  /* 122a2720 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122a2726 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 122a2729 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 122a2733 jmp 0x122a2744 */
  goto L_122a2744;
L_122a2735:;
  /* 122a2735 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122a273b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a273e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_122a2744:;
  /* 122a2744 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a274b jge 0x122a27ef */
  if ((C.sf==C.of)) goto L_122a27ef;
  /* 122a2751 cmp dword ptr [0x122beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2758 jle 0x122a278b */
  if ((C.zf||C.sf!=C.of)) goto L_122a278b;
  /* 122a275a push 4 */
  push32((uint32_t)(0x4u));
  /* 122a275c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122a2762 mov dl, byte ptr [ecx*2 + 0x122c0890] */
  DL = (r8((uint32_t)(ECX*2 + 0x122c0890)));
  /* 122a2769 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 122a276f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 122a2775 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a277a push eax */
  push32((uint32_t)(EAX));
  /* 122a277b call 0x1229a3c0 */
  push32(0x122a2780u); f_1229a3c0();
  /* 122a2780 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2783 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 122a2789 jmp 0x122a27be */
  goto L_122a27be;
L_122a278b:;
  /* 122a278b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122a2791 mov dl, byte ptr [ecx*2 + 0x122c0890] */
  DL = (r8((uint32_t)(ECX*2 + 0x122c0890)));
  /* 122a2798 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 122a279e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 122a27a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a27a9 mov ecx, dword ptr [0x122bec98] */
  ECX = (r32((uint32_t)(0x122bec98)));
  /* 122a27af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a27b1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122a27b5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 122a27b8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_122a27be:;
  /* 122a27be cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a27c5 je 0x122a27e8 */
  if (C.zf) goto L_122a27e8;
  /* 122a27c7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122a27cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122a27d0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a27d3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 122a27da lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 122a27de mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122a27e4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122a27e6 jmp 0x122a27ea */
  goto L_122a27ea;
L_122a27e8:;
  /* 122a27e8 jmp 0x122a27ef */
  goto L_122a27ef;
L_122a27ea:;
  /* 122a27ea jmp 0x122a2735 */
  goto L_122a2735;
L_122a27ef:;
  /* 122a27ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a27f1 jmp 0x122a27f6 */
  goto L_122a27f6;
L_122a27f3:;
  /* 122a27f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_122a27f6:;
  /* 122a27f6 mov esp, ebp */
  ESP = (EBP);
  /* 122a27f8 pop ebp */
  EBP = (pop32());
  /* 122a27f9 ret  */
  ESPCHK(0x122a2570u, _esp0);
  ESP += 4; return;
}

/* FUN_10012800 @ 0x122a2800 (10 bytes, 5 insns) */
void f_122a2800(void) {
  FTRACE(0x122a2800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a2800 push ebp */
  push32((uint32_t)(EBP));
  /* 122a2801 mov ebp, esp */
  EBP = (ESP);
  /* 122a2803 mov eax, dword ptr [0x122bfd88] */
  EAX = (r32((uint32_t)(0x122bfd88)));
  /* 122a2808 pop ebp */
  EBP = (pop32());
  /* 122a2809 ret  */
  ESPCHK(0x122a2800u, _esp0);
  ESP += 4; return;
}

/* FUN_10012810 @ 0x122a2810 (575 bytes, 196 insns) */
void f_122a2810(void) {
  FTRACE(0x122a2810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a2810 push ebp */
  push32((uint32_t)(EBP));
  /* 122a2811 mov ebp, esp */
  EBP = (ESP);
  /* 122a2813 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122a2815 push 0x122bcbb8 */
  push32((uint32_t)(0x122bcbb8u));
  /* 122a281a push 0x1229d4b8 */
  push32((uint32_t)(0x1229d4b8u));
  /* 122a281f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 122a2825 push eax */
  push32((uint32_t)(EAX));
  /* 122a2826 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 122a282d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2830 push ebx */
  push32((uint32_t)(EBX));
  /* 122a2831 push esi */
  push32((uint32_t)(ESI));
  /* 122a2832 push edi */
  push32((uint32_t)(EDI));
  /* 122a2833 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122a2836 cmp dword ptr [0x122c089c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c089c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a283d jne 0x122a288e */
  if (!C.zf) goto L_122a288e;
  /* 122a283f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 122a2842 push eax */
  push32((uint32_t)(EAX));
  /* 122a2843 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a2845 push 0x122bc2ec */
  push32((uint32_t)(0x122bc2ecu));
  /* 122a284a push 1 */
  push32((uint32_t)(0x1u));
  /* 122a284c call dword ptr [0x122c335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c335c))), 0x122a2852u);
  /* 122a2852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a2854 je 0x122a2862 */
  if (C.zf) goto L_122a2862;
  /* 122a2856 mov dword ptr [0x122c089c], 1 */
  w32((uint32_t)(0x122c089c), (0x1u));
  /* 122a2860 jmp 0x122a288e */
  goto L_122a288e;
L_122a2862:;
  /* 122a2862 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 122a2865 push ecx */
  push32((uint32_t)(ECX));
  /* 122a2866 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a2868 push 0x122bc2e8 */
  push32((uint32_t)(0x122bc2e8u));
  /* 122a286d push 1 */
  push32((uint32_t)(0x1u));
  /* 122a286f push 0 */
  push32((uint32_t)(0x0u));
  /* 122a2871 call dword ptr [0x122c3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3358))), 0x122a2877u);
  /* 122a2877 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a2879 je 0x122a2887 */
  if (C.zf) goto L_122a2887;
  /* 122a287b mov dword ptr [0x122c089c], 2 */
  w32((uint32_t)(0x122c089c), (0x2u));
  /* 122a2885 jmp 0x122a288e */
  goto L_122a288e;
L_122a2887:;
  /* 122a2887 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a2889 jmp 0x122a2a69 */
  goto L_122a2a69;
L_122a288e:;
  /* 122a288e cmp dword ptr [0x122c089c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c089c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2895 jne 0x122a28b2 */
  if (!C.zf) goto L_122a28b2;
  /* 122a2897 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a289a push edx */
  push32((uint32_t)(EDX));
  /* 122a289b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a289e push eax */
  push32((uint32_t)(EAX));
  /* 122a289f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a28a2 push ecx */
  push32((uint32_t)(ECX));
  /* 122a28a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a28a6 push edx */
  push32((uint32_t)(EDX));
  /* 122a28a7 call dword ptr [0x122c335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c335c))), 0x122a28adu);
  /* 122a28ad jmp 0x122a2a69 */
  goto L_122a2a69;
L_122a28b2:;
  /* 122a28b2 cmp dword ptr [0x122c089c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x122c089c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a28b9 jne 0x122a2a67 */
  if (!C.zf) goto L_122a2a67;
  /* 122a28bf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a28c3 jne 0x122a28cd */
  if (!C.zf) goto L_122a28cd;
  /* 122a28c5 mov eax, dword ptr [0x122c0810] */
  EAX = (r32((uint32_t)(0x122c0810)));
  /* 122a28ca mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_122a28cd:;
  /* 122a28cd push 0 */
  push32((uint32_t)(0x0u));
  /* 122a28cf push 0 */
  push32((uint32_t)(0x0u));
  /* 122a28d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a28d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a28d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a28d8 push ecx */
  push32((uint32_t)(ECX));
  /* 122a28d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a28dc push edx */
  push32((uint32_t)(EDX));
  /* 122a28dd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122a28e2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a28e5 push eax */
  push32((uint32_t)(EAX));
  /* 122a28e6 call dword ptr [0x122c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c330c))), 0x122a28ecu);
  /* 122a28ec mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122a28ef cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a28f3 jne 0x122a28fc */
  if (!C.zf) goto L_122a28fc;
  /* 122a28f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a28f7 jmp 0x122a2a69 */
  goto L_122a2a69;
L_122a28fc:;
  /* 122a28fc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122a2903 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122a2906 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2909 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122a290b call 0x12297550 */
  push32(0x122a2910u); f_12297550();
  /* 122a2910 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 122a2913 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122a2916 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122a2919 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 122a291c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122a291f push edx */
  push32((uint32_t)(EDX));
  /* 122a2920 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a2922 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122a2925 push eax */
  push32((uint32_t)(EAX));
  /* 122a2926 call 0x12298120 */
  push32(0x122a292bu); f_12298120();
  /* 122a292b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a292e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122a2935 jmp 0x122a294e */
  goto L_122a294e;
  /* 122a2937 mov eax, 1 */
  EAX = (0x1u);
  /* 122a293c ret  */
  ESPCHK(0x122a2810u, _esp0);
  ESP += 4; return;
  /* 122a293d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122a2940 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 122a2947 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122a294e:;
  /* 122a294e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2952 jne 0x122a295b */
  if (!C.zf) goto L_122a295b;
  /* 122a2954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a2956 jmp 0x122a2a69 */
  goto L_122a2a69;
L_122a295b:;
  /* 122a295b push 0 */
  push32((uint32_t)(0x0u));
  /* 122a295d push 0 */
  push32((uint32_t)(0x0u));
  /* 122a295f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122a2962 push ecx */
  push32((uint32_t)(ECX));
  /* 122a2963 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122a2966 push edx */
  push32((uint32_t)(EDX));
  /* 122a2967 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a296a push eax */
  push32((uint32_t)(EAX));
  /* 122a296b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a296e push ecx */
  push32((uint32_t)(ECX));
  /* 122a296f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122a2974 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a2977 push edx */
  push32((uint32_t)(EDX));
  /* 122a2978 call dword ptr [0x122c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c330c))), 0x122a297eu);
  /* 122a297e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a2980 jne 0x122a2989 */
  if (!C.zf) goto L_122a2989;
  /* 122a2982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a2984 jmp 0x122a2a69 */
  goto L_122a2a69;
L_122a2989:;
  /* 122a2989 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122a2990 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122a2993 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 122a2997 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a299a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122a299c call 0x12297550 */
  push32(0x122a29a1u); f_12297550();
  /* 122a29a1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 122a29a4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122a29a7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 122a29aa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 122a29ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122a29b4 jmp 0x122a29cd */
  goto L_122a29cd;
  /* 122a29b6 mov eax, 1 */
  EAX = (0x1u);
  /* 122a29bb ret  */
  ESPCHK(0x122a2810u, _esp0);
  ESP += 4; return;
  /* 122a29bc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122a29bf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 122a29c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122a29cd:;
  /* 122a29cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a29d1 jne 0x122a29da */
  if (!C.zf) goto L_122a29da;
  /* 122a29d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a29d5 jmp 0x122a2a69 */
  goto L_122a2a69;
L_122a29da:;
  /* 122a29da cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a29de jne 0x122a29e9 */
  if (!C.zf) goto L_122a29e9;
  /* 122a29e0 mov edx, dword ptr [0x122c0800] */
  EDX = (r32((uint32_t)(0x122c0800)));
  /* 122a29e6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_122a29e9:;
  /* 122a29e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a29ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122a29ef mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 122a29f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a29f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122a29fb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 122a2a02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122a2a05 push ecx */
  push32((uint32_t)(ECX));
  /* 122a2a06 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122a2a09 push edx */
  push32((uint32_t)(EDX));
  /* 122a2a0a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122a2a0d push eax */
  push32((uint32_t)(EAX));
  /* 122a2a0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2a11 push ecx */
  push32((uint32_t)(ECX));
  /* 122a2a12 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122a2a15 push edx */
  push32((uint32_t)(EDX));
  /* 122a2a16 call dword ptr [0x122c3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3358))), 0x122a2a1cu);
  /* 122a2a1c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 122a2a1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a2a22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122a2a25 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a2a27 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 122a2a2c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2a32 je 0x122a2a48 */
  if (C.zf) goto L_122a2a48;
  /* 122a2a34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a2a37 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122a2a3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a2a3c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122a2a40 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2a46 je 0x122a2a4c */
  if (C.zf) goto L_122a2a4c;
L_122a2a48:;
  /* 122a2a48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a2a4a jmp 0x122a2a69 */
  goto L_122a2a69;
L_122a2a4c:;
  /* 122a2a4c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a2a4f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122a2a51 push eax */
  push32((uint32_t)(EAX));
  /* 122a2a52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122a2a55 push ecx */
  push32((uint32_t)(ECX));
  /* 122a2a56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a2a59 push edx */
  push32((uint32_t)(EDX));
  /* 122a2a5a call 0x1229c2a0 */
  push32(0x122a2a5fu); f_1229c2a0();
  /* 122a2a5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2a62 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122a2a65 jmp 0x122a2a69 */
  goto L_122a2a69;
L_122a2a67:;
  /* 122a2a67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122a2a69:;
  /* 122a2a69 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 122a2a6c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a2a6f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 122a2a76 pop edi */
  EDI = (pop32());
  /* 122a2a77 pop esi */
  ESI = (pop32());
  /* 122a2a78 pop ebx */
  EBX = (pop32());
  /* 122a2a79 mov esp, ebp */
  ESP = (EBP);
  /* 122a2a7b pop ebp */
  EBP = (pop32());
  /* 122a2a7c ret  */
  ESPCHK(0x122a2810u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a80 @ 0x122a2a80 (208 bytes, 85 insns) */
void f_122a2a80(void) {
  FTRACE(0x122a2a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a2a80 push ebp */
  push32((uint32_t)(EBP));
  /* 122a2a81 mov ebp, esp */
  EBP = (ESP);
  /* 122a2a83 push edi */
  push32((uint32_t)(EDI));
  /* 122a2a84 push esi */
  push32((uint32_t)(ESI));
  /* 122a2a85 push ebx */
  push32((uint32_t)(EBX));
  /* 122a2a86 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 122a2a89 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2a8c lea eax, [0x122c07f8] */
  EAX = ((uint32_t)(0x122c07f8));
  /* 122a2a92 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2a96 jne 0x122a2ad3 */
  if (!C.zf) goto L_122a2ad3;
  /* 122a2a98 mov al, 0xff */
  AL = (0xffu);
  /* 122a2a9a mov edi, edi */
  EDI = (EDI);
L_122a2a9c:;
  /* 122a2a9c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122a2a9e je 0x122a2ace */
  if (C.zf) goto L_122a2ace;
  /* 122a2aa0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122a2aa2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122a2aa3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 122a2aa5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122a2aa6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a2aa8 je 0x122a2a9c */
  if (C.zf) goto L_122a2a9c;
  /* 122a2aaa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122a2aac cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a2aae sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122a2ab0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 122a2ab3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122a2ab5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122a2ab7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 122a2ab9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122a2abb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a2abd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122a2abf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 122a2ac2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122a2ac4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122a2ac6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a2ac8 je 0x122a2a9c */
  if (C.zf) goto L_122a2a9c;
  /* 122a2aca sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122a2acc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_122a2ace:;
  /* 122a2ace movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 122a2ad1 jmp 0x122a2b4b */
  goto L_122a2b4b;
L_122a2ad3:;
  /* 122a2ad3 lock inc dword ptr [0x122c098c] */
  x86_unimpl("lock inc @ 0x122a2ad3");
  /* 122a2ada cmp dword ptr [0x122c097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2ae1 jg 0x122a2ae7 */
  if ((!C.zf&&C.sf==C.of)) goto L_122a2ae7;
  /* 122a2ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a2ae5 jmp 0x122a2afc */
  goto L_122a2afc;
L_122a2ae7:;
  /* 122a2ae7 lock dec dword ptr [0x122c098c] */
  x86_unimpl("lock dec @ 0x122a2ae7");
  /* 122a2aee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122a2af0 call 0x12297db0 */
  push32(0x122a2af5u); f_12297db0();
  /* 122a2af5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_122a2afc:;
  /* 122a2afc mov eax, 0xff */
  EAX = (0xffu);
  /* 122a2b01 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 122a2b03 nop  */
  /* nop */
L_122a2b04:;
  /* 122a2b04 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122a2b06 je 0x122a2b2f */
  if (C.zf) goto L_122a2b2f;
  /* 122a2b08 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122a2b0a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122a2b0b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 122a2b0d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122a2b0e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a2b10 je 0x122a2b04 */
  if (C.zf) goto L_122a2b04;
  /* 122a2b12 push eax */
  push32((uint32_t)(EAX));
  /* 122a2b13 push ebx */
  push32((uint32_t)(EBX));
  /* 122a2b14 call 0x122a3bf0 */
  push32(0x122a2b19u); f_122a3bf0();
  /* 122a2b19 mov ebx, eax */
  EBX = (EAX);
  /* 122a2b1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2b1e call 0x122a3bf0 */
  push32(0x122a2b23u); f_122a3bf0();
  /* 122a2b23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2b26 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a2b28 je 0x122a2b04 */
  if (C.zf) goto L_122a2b04;
  /* 122a2b2a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a2b2c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_122a2b2f:;
  /* 122a2b2f mov ebx, eax */
  EBX = (EAX);
  /* 122a2b31 pop eax */
  EAX = (pop32());
  /* 122a2b32 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a2b34 jne 0x122a2b3f */
  if (!C.zf) goto L_122a2b3f;
  /* 122a2b36 lock dec dword ptr [0x122c098c] */
  x86_unimpl("lock dec @ 0x122a2b36");
  /* 122a2b3d jmp 0x122a2b49 */
  goto L_122a2b49;
L_122a2b3f:;
  /* 122a2b3f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122a2b41 call 0x12297e50 */
  push32(0x122a2b46u); f_12297e50();
  /* 122a2b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a2b49:;
  /* 122a2b49 mov eax, ebx */
  EAX = (EBX);
L_122a2b4b:;
  /* 122a2b4b pop ebx */
  EBX = (pop32());
  /* 122a2b4c pop esi */
  ESI = (pop32());
  /* 122a2b4d pop edi */
  EDI = (pop32());
  /* 122a2b4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122a2b4f ret  */
  ESPCHK(0x122a2a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b50 @ 0x122a2b50 (257 bytes, 103 insns) */
void f_122a2b50(void) {
  FTRACE(0x122a2b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a2b50 push ebp */
  push32((uint32_t)(EBP));
  /* 122a2b51 mov ebp, esp */
  EBP = (ESP);
  /* 122a2b53 push edi */
  push32((uint32_t)(EDI));
  /* 122a2b54 push esi */
  push32((uint32_t)(ESI));
  /* 122a2b55 push ebx */
  push32((uint32_t)(EBX));
  /* 122a2b56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a2b59 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a2b5b je 0x122a2c4a */
  if (C.zf) goto L_122a2c4a;
  /* 122a2b61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2b64 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 122a2b67 lea eax, [0x122c07f8] */
  EAX = ((uint32_t)(0x122c07f8));
  /* 122a2b6d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2b71 jne 0x122a2bc1 */
  if (!C.zf) goto L_122a2bc1;
  /* 122a2b73 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 122a2b75 mov bl, 0x5a */
  BL = (0x5au);
  /* 122a2b77 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 122a2b79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122a2b7c:;
  /* 122a2b7c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 122a2b7e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 122a2b80 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 122a2b82 je 0x122a2ba5 */
  if (C.zf) goto L_122a2ba5;
  /* 122a2b84 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122a2b86 je 0x122a2ba5 */
  if (C.zf) goto L_122a2ba5;
  /* 122a2b88 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122a2b89 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122a2b8a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a2b8c jb 0x122a2b94 */
  if (C.cf) goto L_122a2b94;
  /* 122a2b8e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a2b90 ja 0x122a2b94 */
  if ((!C.cf&&!C.zf)) goto L_122a2b94;
  /* 122a2b92 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_122a2b94:;
  /* 122a2b94 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a2b96 jb 0x122a2b9e */
  if (C.cf) goto L_122a2b9e;
  /* 122a2b98 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a2b9a ja 0x122a2b9e */
  if ((!C.cf&&!C.zf)) goto L_122a2b9e;
  /* 122a2b9c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_122a2b9e:;
  /* 122a2b9e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a2ba0 jne 0x122a2baf */
  if (!C.zf) goto L_122a2baf;
  /* 122a2ba2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 122a2ba3 jne 0x122a2b7c */
  if (!C.zf) goto L_122a2b7c;
L_122a2ba5:;
  /* 122a2ba5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a2ba7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a2ba9 je 0x122a2c4a */
  if (C.zf) goto L_122a2c4a;
L_122a2baf:;
  /* 122a2baf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 122a2bb4 jb 0x122a2c4a */
  if (C.cf) goto L_122a2c4a;
  /* 122a2bba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a2bbc jmp 0x122a2c4a */
  goto L_122a2c4a;
L_122a2bc1:;
  /* 122a2bc1 lock inc dword ptr [0x122c098c] */
  x86_unimpl("lock inc @ 0x122a2bc1");
  /* 122a2bc8 cmp dword ptr [0x122c097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2bcf jg 0x122a2bd5 */
  if ((!C.zf&&C.sf==C.of)) goto L_122a2bd5;
  /* 122a2bd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a2bd3 jmp 0x122a2bee */
  goto L_122a2bee;
L_122a2bd5:;
  /* 122a2bd5 lock dec dword ptr [0x122c098c] */
  x86_unimpl("lock dec @ 0x122a2bd5");
  /* 122a2bdc mov ebx, ecx */
  EBX = (ECX);
  /* 122a2bde push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122a2be0 call 0x12297db0 */
  push32(0x122a2be5u); f_12297db0();
  /* 122a2be5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 122a2bec mov ecx, ebx */
  ECX = (EBX);
L_122a2bee:;
  /* 122a2bee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a2bf0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 122a2bf2 mov edi, edi */
  EDI = (EDI);
L_122a2bf4:;
  /* 122a2bf4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122a2bf6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a2bf8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 122a2bfa je 0x122a2c1f */
  if (C.zf) goto L_122a2c1f;
  /* 122a2bfc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 122a2bfe je 0x122a2c1f */
  if (C.zf) goto L_122a2c1f;
  /* 122a2c00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122a2c01 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122a2c02 push ecx */
  push32((uint32_t)(ECX));
  /* 122a2c03 push eax */
  push32((uint32_t)(EAX));
  /* 122a2c04 push ebx */
  push32((uint32_t)(EBX));
  /* 122a2c05 call 0x122a3bf0 */
  push32(0x122a2c0au); f_122a3bf0();
  /* 122a2c0a mov ebx, eax */
  EBX = (EAX);
  /* 122a2c0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2c0f call 0x122a3bf0 */
  push32(0x122a2c14u); f_122a3bf0();
  /* 122a2c14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2c17 pop ecx */
  ECX = (pop32());
  /* 122a2c18 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2c1a jne 0x122a2c25 */
  if (!C.zf) goto L_122a2c25;
  /* 122a2c1c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 122a2c1d jne 0x122a2bf4 */
  if (!C.zf) goto L_122a2bf4;
L_122a2c1f:;
  /* 122a2c1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a2c21 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2c23 je 0x122a2c2e */
  if (C.zf) goto L_122a2c2e;
L_122a2c25:;
  /* 122a2c25 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 122a2c2a jb 0x122a2c2e */
  if (C.cf) goto L_122a2c2e;
  /* 122a2c2c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_122a2c2e:;
  /* 122a2c2e pop eax */
  EAX = (pop32());
  /* 122a2c2f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a2c31 jne 0x122a2c3c */
  if (!C.zf) goto L_122a2c3c;
  /* 122a2c33 lock dec dword ptr [0x122c098c] */
  x86_unimpl("lock dec @ 0x122a2c33");
  /* 122a2c3a jmp 0x122a2c4a */
  goto L_122a2c4a;
L_122a2c3c:;
  /* 122a2c3c mov ebx, ecx */
  EBX = (ECX);
  /* 122a2c3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122a2c40 call 0x12297e50 */
  push32(0x122a2c45u); f_12297e50();
  /* 122a2c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2c48 mov ecx, ebx */
  ECX = (EBX);
L_122a2c4a:;
  /* 122a2c4a mov eax, ecx */
  EAX = (ECX);
  /* 122a2c4c pop ebx */
  EBX = (pop32());
  /* 122a2c4d pop esi */
  ESI = (pop32());
  /* 122a2c4e pop edi */
  EDI = (pop32());
  /* 122a2c4f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122a2c50 ret  */
  ESPCHK(0x122a2b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c60 @ 0x122a2c60 (255 bytes, 88 insns) */
void f_122a2c60(void) {
  FTRACE(0x122a2c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a2c60 push ebp */
  push32((uint32_t)(EBP));
  /* 122a2c61 mov ebp, esp */
  EBP = (ESP);
  /* 122a2c63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_122a2c66:;
  /* 122a2c66 cmp dword ptr [0x122beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2c6d jle 0x122a2c86 */
  if ((C.zf||C.sf!=C.of)) goto L_122a2c86;
  /* 122a2c6f push 8 */
  push32((uint32_t)(0x8u));
  /* 122a2c71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2c74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a2c76 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122a2c78 push ecx */
  push32((uint32_t)(ECX));
  /* 122a2c79 call 0x1229a3c0 */
  push32(0x122a2c7eu); f_1229a3c0();
  /* 122a2c7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2c81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122a2c84 jmp 0x122a2c9f */
  goto L_122a2c9f;
L_122a2c86:;
  /* 122a2c86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2c89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a2c8b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a2c8d mov ecx, dword ptr [0x122bec98] */
  ECX = (r32((uint32_t)(0x122bec98)));
  /* 122a2c93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a2c95 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122a2c99 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 122a2c9c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_122a2c9f:;
  /* 122a2c9f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2ca3 je 0x122a2cb0 */
  if (C.zf) goto L_122a2cb0;
  /* 122a2ca5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2ca8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2cab mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122a2cae jmp 0x122a2c66 */
  goto L_122a2c66;
L_122a2cb0:;
  /* 122a2cb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2cb3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a2cb5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122a2cb7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122a2cba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2cbd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2cc0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122a2cc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a2cc6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122a2cc9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2ccd je 0x122a2cd5 */
  if (C.zf) goto L_122a2cd5;
  /* 122a2ccf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2cd3 jne 0x122a2ce8 */
  if (!C.zf) goto L_122a2ce8;
L_122a2cd5:;
  /* 122a2cd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2cd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a2cda mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a2cdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a2cdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2ce2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2ce5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_122a2ce8:;
  /* 122a2ce8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_122a2cef:;
  /* 122a2cef cmp dword ptr [0x122beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2cf6 jle 0x122a2d0b */
  if ((C.zf||C.sf!=C.of)) goto L_122a2d0b;
  /* 122a2cf8 push 4 */
  push32((uint32_t)(0x4u));
  /* 122a2cfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a2cfd push edx */
  push32((uint32_t)(EDX));
  /* 122a2cfe call 0x1229a3c0 */
  push32(0x122a2d03u); f_1229a3c0();
  /* 122a2d03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2d06 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122a2d09 jmp 0x122a2d20 */
  goto L_122a2d20;
L_122a2d0b:;
  /* 122a2d0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a2d0e mov ecx, dword ptr [0x122bec98] */
  ECX = (r32((uint32_t)(0x122bec98)));
  /* 122a2d14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a2d16 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122a2d1a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 122a2d1d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_122a2d20:;
  /* 122a2d20 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2d24 je 0x122a2d4b */
  if (C.zf) goto L_122a2d4b;
  /* 122a2d26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a2d29 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a2d2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a2d2f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 122a2d33 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122a2d36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2d39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a2d3b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122a2d3d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122a2d40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2d43 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2d46 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 122a2d49 jmp 0x122a2cef */
  goto L_122a2cef;
L_122a2d4b:;
  /* 122a2d4b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2d4f jne 0x122a2d58 */
  if (!C.zf) goto L_122a2d58;
  /* 122a2d51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a2d54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a2d56 jmp 0x122a2d5b */
  goto L_122a2d5b;
L_122a2d58:;
  /* 122a2d58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_122a2d5b:;
  /* 122a2d5b mov esp, ebp */
  ESP = (EBP);
  /* 122a2d5d pop ebp */
  EBP = (pop32());
  /* 122a2d5e ret  */
  ESPCHK(0x122a2c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d60 @ 0x122a2d60 (17 bytes, 8 insns) */
void f_122a2d60(void) {
  FTRACE(0x122a2d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a2d60 push ebp */
  push32((uint32_t)(EBP));
  /* 122a2d61 mov ebp, esp */
  EBP = (ESP);
  /* 122a2d63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2d66 push eax */
  push32((uint32_t)(EAX));
  /* 122a2d67 call 0x122a2c60 */
  push32(0x122a2d6cu); f_122a2c60();
  /* 122a2d6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2d6f pop ebp */
  EBP = (pop32());
  /* 122a2d70 ret  */
  ESPCHK(0x122a2d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d80 @ 0x122a2d80 (297 bytes, 106 insns) */
void f_122a2d80(void) {
  FTRACE(0x122a2d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a2d80 push ebp */
  push32((uint32_t)(EBP));
  /* 122a2d81 mov ebp, esp */
  EBP = (ESP);
  /* 122a2d83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a2d86 push esi */
  push32((uint32_t)(ESI));
L_122a2d87:;
  /* 122a2d87 cmp dword ptr [0x122beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2d8e jle 0x122a2da7 */
  if ((C.zf||C.sf!=C.of)) goto L_122a2da7;
  /* 122a2d90 push 8 */
  push32((uint32_t)(0x8u));
  /* 122a2d92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2d95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a2d97 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122a2d99 push ecx */
  push32((uint32_t)(ECX));
  /* 122a2d9a call 0x1229a3c0 */
  push32(0x122a2d9fu); f_1229a3c0();
  /* 122a2d9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2da2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122a2da5 jmp 0x122a2dc0 */
  goto L_122a2dc0;
L_122a2da7:;
  /* 122a2da7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2daa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a2dac mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a2dae mov ecx, dword ptr [0x122bec98] */
  ECX = (r32((uint32_t)(0x122bec98)));
  /* 122a2db4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a2db6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122a2dba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 122a2dbd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_122a2dc0:;
  /* 122a2dc0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2dc4 je 0x122a2dd1 */
  if (C.zf) goto L_122a2dd1;
  /* 122a2dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2dc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2dcc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122a2dcf jmp 0x122a2d87 */
  goto L_122a2d87;
L_122a2dd1:;
  /* 122a2dd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2dd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a2dd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122a2dd8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122a2ddb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2dde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2de1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122a2de4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a2de7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122a2dea cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2dee je 0x122a2df6 */
  if (C.zf) goto L_122a2df6;
  /* 122a2df0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2df4 jne 0x122a2e09 */
  if (!C.zf) goto L_122a2e09;
L_122a2df6:;
  /* 122a2df6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2df9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a2dfb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a2dfd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a2e00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2e03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2e06 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_122a2e09:;
  /* 122a2e09 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122a2e10 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_122a2e17:;
  /* 122a2e17 cmp dword ptr [0x122beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2e1e jle 0x122a2e33 */
  if ((C.zf||C.sf!=C.of)) goto L_122a2e33;
  /* 122a2e20 push 4 */
  push32((uint32_t)(0x4u));
  /* 122a2e22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a2e25 push edx */
  push32((uint32_t)(EDX));
  /* 122a2e26 call 0x1229a3c0 */
  push32(0x122a2e2bu); f_1229a3c0();
  /* 122a2e2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2e2e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122a2e31 jmp 0x122a2e48 */
  goto L_122a2e48;
L_122a2e33:;
  /* 122a2e33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a2e36 mov ecx, dword ptr [0x122bec98] */
  ECX = (r32((uint32_t)(0x122bec98)));
  /* 122a2e3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a2e3e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122a2e42 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 122a2e45 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_122a2e48:;
  /* 122a2e48 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2e4c je 0x122a2e89 */
  if (C.zf) goto L_122a2e89;
  /* 122a2e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 122a2e50 push 0xa */
  push32((uint32_t)(0xau));
  /* 122a2e52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a2e55 push eax */
  push32((uint32_t)(EAX));
  /* 122a2e56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a2e59 push ecx */
  push32((uint32_t)(ECX));
  /* 122a2e5a call 0x122a3d20 */
  push32(0x122a2e5fu); f_122a3d20();
  /* 122a2e5f mov ecx, eax */
  ECX = (EAX);
  /* 122a2e61 mov esi, edx */
  ESI = (EDX);
  /* 122a2e63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a2e66 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a2e69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122a2e6a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2e6c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2e6e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122a2e71 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 122a2e74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2e77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a2e79 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a2e7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a2e7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a2e81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2e84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 122a2e87 jmp 0x122a2e17 */
  goto L_122a2e17;
L_122a2e89:;
  /* 122a2e89 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2e8d jne 0x122a2e9e */
  if (!C.zf) goto L_122a2e9e;
  /* 122a2e8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a2e92 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a2e94 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a2e97 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2e9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a2e9c jmp 0x122a2ea4 */
  goto L_122a2ea4;
L_122a2e9e:;
  /* 122a2e9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a2ea1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_122a2ea4:;
  /* 122a2ea4 pop esi */
  ESI = (pop32());
  /* 122a2ea5 mov esp, ebp */
  ESP = (EBP);
  /* 122a2ea7 pop ebp */
  EBP = (pop32());
  /* 122a2ea8 ret  */
  ESPCHK(0x122a2d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012eb0 @ 0x122a2eb0 (61 bytes, 18 insns) */
void f_122a2eb0(void) {
  FTRACE(0x122a2eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a2eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a2eb1 mov ebp, esp */
  EBP = (ESP);
  /* 122a2eb3 cmp dword ptr [0x122c0958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2eba jne 0x122a2eeb */
  if (!C.zf) goto L_122a2eeb;
  /* 122a2ebc push 0xb */
  push32((uint32_t)(0xbu));
  /* 122a2ebe call 0x12297db0 */
  push32(0x122a2ec3u); f_12297db0();
  /* 122a2ec3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2ec6 cmp dword ptr [0x122c0958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2ecd jne 0x122a2ee1 */
  if (!C.zf) goto L_122a2ee1;
  /* 122a2ecf call 0x122a2f10 */
  push32(0x122a2ed4u); f_122a2f10();
  /* 122a2ed4 mov eax, dword ptr [0x122c0958] */
  EAX = (r32((uint32_t)(0x122c0958)));
  /* 122a2ed9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2edc mov dword ptr [0x122c0958], eax */
  w32((uint32_t)(0x122c0958), (EAX));
L_122a2ee1:;
  /* 122a2ee1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 122a2ee3 call 0x12297e50 */
  push32(0x122a2ee8u); f_12297e50();
  /* 122a2ee8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a2eeb:;
  /* 122a2eeb pop ebp */
  EBP = (pop32());
  /* 122a2eec ret  */
  ESPCHK(0x122a2eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ef0 @ 0x122a2ef0 (30 bytes, 11 insns) */
void f_122a2ef0(void) {
  FTRACE(0x122a2ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a2ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a2ef1 mov ebp, esp */
  EBP = (ESP);
  /* 122a2ef3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 122a2ef5 call 0x12297db0 */
  push32(0x122a2efau); f_12297db0();
  /* 122a2efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2efd call 0x122a2f10 */
  push32(0x122a2f02u); f_122a2f10();
  /* 122a2f02 push 0xb */
  push32((uint32_t)(0xbu));
  /* 122a2f04 call 0x12297e50 */
  push32(0x122a2f09u); f_12297e50();
  /* 122a2f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2f0c pop ebp */
  EBP = (pop32());
  /* 122a2f0d ret  */
  ESPCHK(0x122a2ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f10 @ 0x122a2f10 (939 bytes, 266 insns) */
void f_122a2f10(void) {
  FTRACE(0x122a2f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a2f10 push ebp */
  push32((uint32_t)(EBP));
  /* 122a2f11 mov ebp, esp */
  EBP = (ESP);
  /* 122a2f13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a2f16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122a2f1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 122a2f1f call 0x12297db0 */
  push32(0x122a2f24u); f_12297db0();
  /* 122a2f24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2f27 mov dword ptr [0x122c08a0], 0 */
  w32((uint32_t)(0x122c08a0), (0x0u));
  /* 122a2f31 mov dword ptr [0x122bfe38], 0xffffffff */
  w32((uint32_t)(0x122bfe38), (0xffffffffu));
  /* 122a2f3b mov eax, dword ptr [0x122bfe38] */
  EAX = (r32((uint32_t)(0x122bfe38)));
  /* 122a2f40 mov dword ptr [0x122bfe28], eax */
  w32((uint32_t)(0x122bfe28), (EAX));
  /* 122a2f45 push 0x122bcc18 */
  push32((uint32_t)(0x122bcc18u));
  /* 122a2f4a call 0x122a3d90 */
  push32(0x122a2f4fu); f_122a3d90();
  /* 122a2f4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2f52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122a2f55 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2f59 jne 0x122a3093 */
  if (!C.zf) goto L_122a3093;
  /* 122a2f5f push 0xc */
  push32((uint32_t)(0xcu));
  /* 122a2f61 call 0x12297e50 */
  push32(0x122a2f66u); f_12297e50();
  /* 122a2f66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2f69 push 0x122c08a8 */
  push32((uint32_t)(0x122c08a8u));
  /* 122a2f6e call dword ptr [0x122c3258] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3258))), 0x122a2f74u);
  /* 122a2f74 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2f77 je 0x122a308e */
  if (C.zf) goto L_122a308e;
  /* 122a2f7d mov dword ptr [0x122c08a0], 1 */
  w32((uint32_t)(0x122c08a0), (0x1u));
  /* 122a2f87 mov ecx, dword ptr [0x122c08a8] */
  ECX = (r32((uint32_t)(0x122c08a8)));
  /* 122a2f8d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a2f90 mov dword ptr [0x122bfd90], ecx */
  w32((uint32_t)(0x122bfd90), (ECX));
  /* 122a2f96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a2f98 mov dx, word ptr [0x122c08ee] */
  DX = (r16((uint32_t)(0x122c08ee)));
  /* 122a2f9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a2fa1 je 0x122a2fb9 */
  if (C.zf) goto L_122a2fb9;
  /* 122a2fa3 mov eax, dword ptr [0x122c08fc] */
  EAX = (r32((uint32_t)(0x122c08fc)));
  /* 122a2fa8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a2fab mov ecx, dword ptr [0x122bfd90] */
  ECX = (r32((uint32_t)(0x122bfd90)));
  /* 122a2fb1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a2fb3 mov dword ptr [0x122bfd90], ecx */
  w32((uint32_t)(0x122bfd90), (ECX));
L_122a2fb9:;
  /* 122a2fb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a2fbb mov dx, word ptr [0x122c0942] */
  DX = (r16((uint32_t)(0x122c0942)));
  /* 122a2fc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a2fc4 je 0x122a2fee */
  if (C.zf) goto L_122a2fee;
  /* 122a2fc6 cmp dword ptr [0x122c0950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a2fcd je 0x122a2fee */
  if (C.zf) goto L_122a2fee;
  /* 122a2fcf mov dword ptr [0x122bfd94], 1 */
  w32((uint32_t)(0x122bfd94), (0x1u));
  /* 122a2fd9 mov eax, dword ptr [0x122c0950] */
  EAX = (r32((uint32_t)(0x122c0950)));
  /* 122a2fde sub eax, dword ptr [0x122c08fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122c08fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a2fe4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a2fe7 mov dword ptr [0x122bfd98], eax */
  w32((uint32_t)(0x122bfd98), (EAX));
  /* 122a2fec jmp 0x122a3002 */
  goto L_122a3002;
L_122a2fee:;
  /* 122a2fee mov dword ptr [0x122bfd94], 0 */
  w32((uint32_t)(0x122bfd94), (0x0u));
  /* 122a2ff8 mov dword ptr [0x122bfd98], 0 */
  w32((uint32_t)(0x122bfd98), (0x0u));
L_122a3002:;
  /* 122a3002 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 122a3005 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3006 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3008 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 122a300a mov edx, dword ptr [0x122bfe1c] */
  EDX = (r32((uint32_t)(0x122bfe1c)));
  /* 122a3010 push edx */
  push32((uint32_t)(EDX));
  /* 122a3011 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122a3013 push 0x122c08ac */
  push32((uint32_t)(0x122c08acu));
  /* 122a3018 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122a301d mov eax, dword ptr [0x122c0810] */
  EAX = (r32((uint32_t)(0x122c0810)));
  /* 122a3022 push eax */
  push32((uint32_t)(EAX));
  /* 122a3023 call dword ptr [0x122c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c330c))), 0x122a3029u);
  /* 122a3029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a302b je 0x122a303f */
  if (C.zf) goto L_122a303f;
  /* 122a302d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3031 jne 0x122a303f */
  if (!C.zf) goto L_122a303f;
  /* 122a3033 mov ecx, dword ptr [0x122bfe1c] */
  ECX = (r32((uint32_t)(0x122bfe1c)));
  /* 122a3039 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 122a303d jmp 0x122a3048 */
  goto L_122a3048;
L_122a303f:;
  /* 122a303f mov edx, dword ptr [0x122bfe1c] */
  EDX = (r32((uint32_t)(0x122bfe1c)));
  /* 122a3045 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_122a3048:;
  /* 122a3048 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 122a304b push eax */
  push32((uint32_t)(EAX));
  /* 122a304c push 0 */
  push32((uint32_t)(0x0u));
  /* 122a304e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 122a3050 mov ecx, dword ptr [0x122bfe20] */
  ECX = (r32((uint32_t)(0x122bfe20)));
  /* 122a3056 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3057 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122a3059 push 0x122c0900 */
  push32((uint32_t)(0x122c0900u));
  /* 122a305e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122a3063 mov edx, dword ptr [0x122c0810] */
  EDX = (r32((uint32_t)(0x122c0810)));
  /* 122a3069 push edx */
  push32((uint32_t)(EDX));
  /* 122a306a call dword ptr [0x122c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c330c))), 0x122a3070u);
  /* 122a3070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a3072 je 0x122a3085 */
  if (C.zf) goto L_122a3085;
  /* 122a3074 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3078 jne 0x122a3085 */
  if (!C.zf) goto L_122a3085;
  /* 122a307a mov eax, dword ptr [0x122bfe20] */
  EAX = (r32((uint32_t)(0x122bfe20)));
  /* 122a307f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 122a3083 jmp 0x122a308e */
  goto L_122a308e;
L_122a3085:;
  /* 122a3085 mov ecx, dword ptr [0x122bfe20] */
  ECX = (r32((uint32_t)(0x122bfe20)));
  /* 122a308b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_122a308e:;
  /* 122a308e jmp 0x122a32b7 */
  goto L_122a32b7;
L_122a3093:;
  /* 122a3093 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3096 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122a3099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a309b je 0x122a30bd */
  if (C.zf) goto L_122a30bd;
  /* 122a309d cmp dword ptr [0x122c0954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a30a4 je 0x122a30cc */
  if (C.zf) goto L_122a30cc;
  /* 122a30a6 mov ecx, dword ptr [0x122c0954] */
  ECX = (r32((uint32_t)(0x122c0954)));
  /* 122a30ac push ecx */
  push32((uint32_t)(ECX));
  /* 122a30ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a30b0 push edx */
  push32((uint32_t)(EDX));
  /* 122a30b1 call 0x122a0040 */
  push32(0x122a30b6u); f_122a0040();
  /* 122a30b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a30b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a30bb jne 0x122a30cc */
  if (!C.zf) goto L_122a30cc;
L_122a30bd:;
  /* 122a30bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 122a30bf call 0x12297e50 */
  push32(0x122a30c4u); f_12297e50();
  /* 122a30c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a30c7 jmp 0x122a32b7 */
  goto L_122a32b7;
L_122a30cc:;
  /* 122a30cc push 2 */
  push32((uint32_t)(0x2u));
  /* 122a30ce mov eax, dword ptr [0x122c0954] */
  EAX = (r32((uint32_t)(0x122c0954)));
  /* 122a30d3 push eax */
  push32((uint32_t)(EAX));
  /* 122a30d4 call 0x12294e40 */
  push32(0x122a30d9u); f_12294e40();
  /* 122a30d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a30dc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 122a30e1 push 0x122bcc10 */
  push32((uint32_t)(0x122bcc10u));
  /* 122a30e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a30e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a30eb push ecx */
  push32((uint32_t)(ECX));
  /* 122a30ec call 0x122971e0 */
  push32(0x122a30f1u); f_122971e0();
  /* 122a30f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a30f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a30f7 push eax */
  push32((uint32_t)(EAX));
  /* 122a30f8 call 0x122943b0 */
  push32(0x122a30fdu); f_122943b0();
  /* 122a30fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3100 mov dword ptr [0x122c0954], eax */
  w32((uint32_t)(0x122c0954), (EAX));
  /* 122a3105 cmp dword ptr [0x122c0954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a310c jne 0x122a311d */
  if (!C.zf) goto L_122a311d;
  /* 122a310e push 0xc */
  push32((uint32_t)(0xcu));
  /* 122a3110 call 0x12297e50 */
  push32(0x122a3115u); f_12297e50();
  /* 122a3115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3118 jmp 0x122a32b7 */
  goto L_122a32b7;
L_122a311d:;
  /* 122a311d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3120 push edx */
  push32((uint32_t)(EDX));
  /* 122a3121 mov eax, dword ptr [0x122c0954] */
  EAX = (r32((uint32_t)(0x122c0954)));
  /* 122a3126 push eax */
  push32((uint32_t)(EAX));
  /* 122a3127 call 0x12297360 */
  push32(0x122a312cu); f_12297360();
  /* 122a312c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a312f push 0xc */
  push32((uint32_t)(0xcu));
  /* 122a3131 call 0x12297e50 */
  push32(0x122a3136u); f_12297e50();
  /* 122a3136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3139 push 3 */
  push32((uint32_t)(0x3u));
  /* 122a313b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a313e push ecx */
  push32((uint32_t)(ECX));
  /* 122a313f mov edx, dword ptr [0x122bfe1c] */
  EDX = (r32((uint32_t)(0x122bfe1c)));
  /* 122a3145 push edx */
  push32((uint32_t)(EDX));
  /* 122a3146 call 0x12297bd0 */
  push32(0x122a314bu); f_12297bd0();
  /* 122a314b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a314e mov eax, dword ptr [0x122bfe1c] */
  EAX = (r32((uint32_t)(0x122bfe1c)));
  /* 122a3153 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 122a3157 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a315a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a315d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122a3160 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3163 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122a3166 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3169 jne 0x122a317d */
  if (!C.zf) goto L_122a317d;
  /* 122a316b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a316e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3171 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122a3174 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3177 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a317a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122a317d:;
  /* 122a317d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3180 push eax */
  push32((uint32_t)(EAX));
  /* 122a3181 call 0x122a2c60 */
  push32(0x122a3186u); f_122a2c60();
  /* 122a3186 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3189 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a318f mov dword ptr [0x122bfd90], eax */
  w32((uint32_t)(0x122bfd90), (EAX));
L_122a3194:;
  /* 122a3194 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3197 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122a319a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a319d je 0x122a31b5 */
  if (C.zf) goto L_122a31b5;
  /* 122a319f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a31a2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122a31a5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a31a8 jl 0x122a31c0 */
  if ((C.sf!=C.of)) goto L_122a31c0;
  /* 122a31aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a31ad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122a31b0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a31b3 jg 0x122a31c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_122a31c0;
L_122a31b5:;
  /* 122a31b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a31b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a31bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122a31be jmp 0x122a3194 */
  goto L_122a3194;
L_122a31c0:;
  /* 122a31c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a31c3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122a31c6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a31c9 jne 0x122a3265 */
  if (!C.zf) goto L_122a3265;
  /* 122a31cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a31d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a31d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122a31d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a31db push edx */
  push32((uint32_t)(EDX));
  /* 122a31dc call 0x122a2c60 */
  push32(0x122a31e1u); f_122a2c60();
  /* 122a31e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a31e4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a31e7 mov ecx, dword ptr [0x122bfd90] */
  ECX = (r32((uint32_t)(0x122bfd90)));
  /* 122a31ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a31ef mov dword ptr [0x122bfd90], ecx */
  w32((uint32_t)(0x122bfd90), (ECX));
L_122a31f5:;
  /* 122a31f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a31f8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122a31fb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a31fe jl 0x122a3216 */
  if ((C.sf!=C.of)) goto L_122a3216;
  /* 122a3200 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3203 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122a3206 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3209 jg 0x122a3216 */
  if ((!C.zf&&C.sf==C.of)) goto L_122a3216;
  /* 122a320b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a320e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3211 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122a3214 jmp 0x122a31f5 */
  goto L_122a31f5;
L_122a3216:;
  /* 122a3216 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3219 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122a321c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a321f jne 0x122a3265 */
  if (!C.zf) goto L_122a3265;
  /* 122a3221 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3224 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3227 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122a322a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a322d push ecx */
  push32((uint32_t)(ECX));
  /* 122a322e call 0x122a2c60 */
  push32(0x122a3233u); f_122a2c60();
  /* 122a3233 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3236 mov edx, dword ptr [0x122bfd90] */
  EDX = (r32((uint32_t)(0x122bfd90)));
  /* 122a323c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a323e mov dword ptr [0x122bfd90], edx */
  w32((uint32_t)(0x122bfd90), (EDX));
L_122a3244:;
  /* 122a3244 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3247 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122a324a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a324d jl 0x122a3265 */
  if ((C.sf!=C.of)) goto L_122a3265;
  /* 122a324f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3252 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122a3255 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3258 jg 0x122a3265 */
  if ((!C.zf&&C.sf==C.of)) goto L_122a3265;
  /* 122a325a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a325d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3260 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122a3263 jmp 0x122a3244 */
  goto L_122a3244;
L_122a3265:;
  /* 122a3265 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3269 je 0x122a3279 */
  if (C.zf) goto L_122a3279;
  /* 122a326b mov edx, dword ptr [0x122bfd90] */
  EDX = (r32((uint32_t)(0x122bfd90)));
  /* 122a3271 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a3273 mov dword ptr [0x122bfd90], edx */
  w32((uint32_t)(0x122bfd90), (EDX));
L_122a3279:;
  /* 122a3279 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a327c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122a327f mov dword ptr [0x122bfd94], ecx */
  w32((uint32_t)(0x122bfd94), (ECX));
  /* 122a3285 cmp dword ptr [0x122bfd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122bfd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a328c je 0x122a32ae */
  if (C.zf) goto L_122a32ae;
  /* 122a328e push 3 */
  push32((uint32_t)(0x3u));
  /* 122a3290 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3293 push edx */
  push32((uint32_t)(EDX));
  /* 122a3294 mov eax, dword ptr [0x122bfe20] */
  EAX = (r32((uint32_t)(0x122bfe20)));
  /* 122a3299 push eax */
  push32((uint32_t)(EAX));
  /* 122a329a call 0x12297bd0 */
  push32(0x122a329fu); f_12297bd0();
  /* 122a329f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a32a2 mov ecx, dword ptr [0x122bfe20] */
  ECX = (r32((uint32_t)(0x122bfe20)));
  /* 122a32a8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 122a32ac jmp 0x122a32b7 */
  goto L_122a32b7;
L_122a32ae:;
  /* 122a32ae mov edx, dword ptr [0x122bfe20] */
  EDX = (r32((uint32_t)(0x122bfe20)));
  /* 122a32b4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_122a32b7:;
  /* 122a32b7 mov esp, ebp */
  ESP = (EBP);
  /* 122a32b9 pop ebp */
  EBP = (pop32());
  /* 122a32ba ret  */
  ESPCHK(0x122a2f10u, _esp0);
  ESP += 4; return;
}

/* FUN_100132c0 @ 0x122a32c0 (46 bytes, 18 insns) */
void f_122a32c0(void) {
  FTRACE(0x122a32c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a32c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a32c1 mov ebp, esp */
  EBP = (ESP);
  /* 122a32c3 push ecx */
  push32((uint32_t)(ECX));
  /* 122a32c4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 122a32c6 call 0x12297db0 */
  push32(0x122a32cbu); f_12297db0();
  /* 122a32cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a32ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a32d1 push eax */
  push32((uint32_t)(EAX));
  /* 122a32d2 call 0x122a32f0 */
  push32(0x122a32d7u); f_122a32f0();
  /* 122a32d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a32da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a32dd push 0xb */
  push32((uint32_t)(0xbu));
  /* 122a32df call 0x12297e50 */
  push32(0x122a32e4u); f_12297e50();
  /* 122a32e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a32e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a32ea mov esp, ebp */
  ESP = (EBP);
  /* 122a32ec pop ebp */
  EBP = (pop32());
  /* 122a32ed ret  */
  ESPCHK(0x122a32c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100132f0 @ 0x122a32f0 (762 bytes, 246 insns) */
void f_122a32f0(void) {
  FTRACE(0x122a32f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a32f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a32f1 mov ebp, esp */
  EBP = (ESP);
  /* 122a32f3 push ecx */
  push32((uint32_t)(ECX));
  /* 122a32f4 cmp dword ptr [0x122bfd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122bfd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a32fb jne 0x122a3304 */
  if (!C.zf) goto L_122a3304;
  /* 122a32fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a32ff jmp 0x122a35e6 */
  goto L_122a35e6;
L_122a3304:;
  /* 122a3304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3307 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 122a330a cmp ecx, dword ptr [0x122bfe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122bfe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3310 jne 0x122a3324 */
  if (!C.zf) goto L_122a3324;
  /* 122a3312 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3315 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122a3318 cmp eax, dword ptr [0x122bfe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122bfe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a331e je 0x122a34eb */
  if (C.zf) goto L_122a34eb;
L_122a3324:;
  /* 122a3324 cmp dword ptr [0x122c08a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c08a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a332b je 0x122a34a5 */
  if (C.zf) goto L_122a34a5;
  /* 122a3331 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a3333 mov cx, word ptr [0x122c0940] */
  CX = (r16((uint32_t)(0x122c0940)));
  /* 122a333a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a333c jne 0x122a3399 */
  if (!C.zf) goto L_122a3399;
  /* 122a333e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a3340 mov dx, word ptr [0x122c094e] */
  DX = (r16((uint32_t)(0x122c094e)));
  /* 122a3347 push edx */
  push32((uint32_t)(EDX));
  /* 122a3348 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a334a mov ax, word ptr [0x122c094c] */
  AX = (r16((uint32_t)(0x122c094c)));
  /* 122a3350 push eax */
  push32((uint32_t)(EAX));
  /* 122a3351 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a3353 mov cx, word ptr [0x122c094a] */
  CX = (r16((uint32_t)(0x122c094a)));
  /* 122a335a push ecx */
  push32((uint32_t)(ECX));
  /* 122a335b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a335d mov dx, word ptr [0x122c0948] */
  DX = (r16((uint32_t)(0x122c0948)));
  /* 122a3364 push edx */
  push32((uint32_t)(EDX));
  /* 122a3365 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3367 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a3369 mov ax, word ptr [0x122c0944] */
  AX = (r16((uint32_t)(0x122c0944)));
  /* 122a336f push eax */
  push32((uint32_t)(EAX));
  /* 122a3370 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a3372 mov cx, word ptr [0x122c0946] */
  CX = (r16((uint32_t)(0x122c0946)));
  /* 122a3379 push ecx */
  push32((uint32_t)(ECX));
  /* 122a337a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a337c mov dx, word ptr [0x122c0942] */
  DX = (r16((uint32_t)(0x122c0942)));
  /* 122a3383 push edx */
  push32((uint32_t)(EDX));
  /* 122a3384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3387 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 122a338a push ecx */
  push32((uint32_t)(ECX));
  /* 122a338b push 1 */
  push32((uint32_t)(0x1u));
  /* 122a338d push 1 */
  push32((uint32_t)(0x1u));
  /* 122a338f call 0x122a35f0 */
  push32(0x122a3394u); f_122a35f0();
  /* 122a3394 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3397 jmp 0x122a33ea */
  goto L_122a33ea;
L_122a3399:;
  /* 122a3399 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a339b mov dx, word ptr [0x122c094e] */
  DX = (r16((uint32_t)(0x122c094e)));
  /* 122a33a2 push edx */
  push32((uint32_t)(EDX));
  /* 122a33a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a33a5 mov ax, word ptr [0x122c094c] */
  AX = (r16((uint32_t)(0x122c094c)));
  /* 122a33ab push eax */
  push32((uint32_t)(EAX));
  /* 122a33ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a33ae mov cx, word ptr [0x122c094a] */
  CX = (r16((uint32_t)(0x122c094a)));
  /* 122a33b5 push ecx */
  push32((uint32_t)(ECX));
  /* 122a33b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a33b8 mov dx, word ptr [0x122c0948] */
  DX = (r16((uint32_t)(0x122c0948)));
  /* 122a33bf push edx */
  push32((uint32_t)(EDX));
  /* 122a33c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a33c2 mov ax, word ptr [0x122c0946] */
  AX = (r16((uint32_t)(0x122c0946)));
  /* 122a33c8 push eax */
  push32((uint32_t)(EAX));
  /* 122a33c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a33cb push 0 */
  push32((uint32_t)(0x0u));
  /* 122a33cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a33cf mov cx, word ptr [0x122c0942] */
  CX = (r16((uint32_t)(0x122c0942)));
  /* 122a33d6 push ecx */
  push32((uint32_t)(ECX));
  /* 122a33d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a33da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122a33dd push eax */
  push32((uint32_t)(EAX));
  /* 122a33de push 0 */
  push32((uint32_t)(0x0u));
  /* 122a33e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a33e2 call 0x122a35f0 */
  push32(0x122a33e7u); f_122a35f0();
  /* 122a33e7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a33ea:;
  /* 122a33ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a33ec mov cx, word ptr [0x122c08ec] */
  CX = (r16((uint32_t)(0x122c08ec)));
  /* 122a33f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a33f5 jne 0x122a3452 */
  if (!C.zf) goto L_122a3452;
  /* 122a33f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a33f9 mov dx, word ptr [0x122c08fa] */
  DX = (r16((uint32_t)(0x122c08fa)));
  /* 122a3400 push edx */
  push32((uint32_t)(EDX));
  /* 122a3401 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a3403 mov ax, word ptr [0x122c08f8] */
  AX = (r16((uint32_t)(0x122c08f8)));
  /* 122a3409 push eax */
  push32((uint32_t)(EAX));
  /* 122a340a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a340c mov cx, word ptr [0x122c08f6] */
  CX = (r16((uint32_t)(0x122c08f6)));
  /* 122a3413 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3414 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a3416 mov dx, word ptr [0x122c08f4] */
  DX = (r16((uint32_t)(0x122c08f4)));
  /* 122a341d push edx */
  push32((uint32_t)(EDX));
  /* 122a341e push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3420 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a3422 mov ax, word ptr [0x122c08f0] */
  AX = (r16((uint32_t)(0x122c08f0)));
  /* 122a3428 push eax */
  push32((uint32_t)(EAX));
  /* 122a3429 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a342b mov cx, word ptr [0x122c08f2] */
  CX = (r16((uint32_t)(0x122c08f2)));
  /* 122a3432 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3433 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a3435 mov dx, word ptr [0x122c08ee] */
  DX = (r16((uint32_t)(0x122c08ee)));
  /* 122a343c push edx */
  push32((uint32_t)(EDX));
  /* 122a343d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3440 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 122a3443 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3444 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a3446 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3448 call 0x122a35f0 */
  push32(0x122a344du); f_122a35f0();
  /* 122a344d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3450 jmp 0x122a34a3 */
  goto L_122a34a3;
L_122a3452:;
  /* 122a3452 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a3454 mov dx, word ptr [0x122c08fa] */
  DX = (r16((uint32_t)(0x122c08fa)));
  /* 122a345b push edx */
  push32((uint32_t)(EDX));
  /* 122a345c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a345e mov ax, word ptr [0x122c08f8] */
  AX = (r16((uint32_t)(0x122c08f8)));
  /* 122a3464 push eax */
  push32((uint32_t)(EAX));
  /* 122a3465 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a3467 mov cx, word ptr [0x122c08f6] */
  CX = (r16((uint32_t)(0x122c08f6)));
  /* 122a346e push ecx */
  push32((uint32_t)(ECX));
  /* 122a346f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a3471 mov dx, word ptr [0x122c08f4] */
  DX = (r16((uint32_t)(0x122c08f4)));
  /* 122a3478 push edx */
  push32((uint32_t)(EDX));
  /* 122a3479 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a347b mov ax, word ptr [0x122c08f2] */
  AX = (r16((uint32_t)(0x122c08f2)));
  /* 122a3481 push eax */
  push32((uint32_t)(EAX));
  /* 122a3482 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3484 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3486 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a3488 mov cx, word ptr [0x122c08ee] */
  CX = (r16((uint32_t)(0x122c08ee)));
  /* 122a348f push ecx */
  push32((uint32_t)(ECX));
  /* 122a3490 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3493 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122a3496 push eax */
  push32((uint32_t)(EAX));
  /* 122a3497 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3499 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a349b call 0x122a35f0 */
  push32(0x122a34a0u); f_122a35f0();
  /* 122a34a0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a34a3:;
  /* 122a34a3 jmp 0x122a34eb */
  goto L_122a34eb;
L_122a34a5:;
  /* 122a34a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a34a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a34a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a34ab push 2 */
  push32((uint32_t)(0x2u));
  /* 122a34ad push 0 */
  push32((uint32_t)(0x0u));
  /* 122a34af push 0 */
  push32((uint32_t)(0x0u));
  /* 122a34b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a34b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 122a34b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a34b8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 122a34bb push edx */
  push32((uint32_t)(EDX));
  /* 122a34bc push 1 */
  push32((uint32_t)(0x1u));
  /* 122a34be push 1 */
  push32((uint32_t)(0x1u));
  /* 122a34c0 call 0x122a35f0 */
  push32(0x122a34c5u); f_122a35f0();
  /* 122a34c5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a34c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a34ca push 0 */
  push32((uint32_t)(0x0u));
  /* 122a34cc push 0 */
  push32((uint32_t)(0x0u));
  /* 122a34ce push 2 */
  push32((uint32_t)(0x2u));
  /* 122a34d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a34d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a34d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 122a34d6 push 0xa */
  push32((uint32_t)(0xau));
  /* 122a34d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a34db mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 122a34de push ecx */
  push32((uint32_t)(ECX));
  /* 122a34df push 1 */
  push32((uint32_t)(0x1u));
  /* 122a34e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a34e3 call 0x122a35f0 */
  push32(0x122a34e8u); f_122a35f0();
  /* 122a34e8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a34eb:;
  /* 122a34eb mov edx, dword ptr [0x122bfe2c] */
  EDX = (r32((uint32_t)(0x122bfe2c)));
  /* 122a34f1 cmp edx, dword ptr [0x122bfe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x122bfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a34f7 jge 0x122a3544 */
  if ((C.sf==C.of)) goto L_122a3544;
  /* 122a34f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a34fc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 122a34ff cmp ecx, dword ptr [0x122bfe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122bfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3505 jl 0x122a3515 */
  if ((C.sf!=C.of)) goto L_122a3515;
  /* 122a3507 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a350a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122a350d cmp eax, dword ptr [0x122bfe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122bfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3513 jle 0x122a351c */
  if ((C.zf||C.sf!=C.of)) goto L_122a351c;
L_122a3515:;
  /* 122a3515 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a3517 jmp 0x122a35e6 */
  goto L_122a35e6;
L_122a351c:;
  /* 122a351c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a351f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 122a3522 cmp edx, dword ptr [0x122bfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x122bfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3528 jle 0x122a3542 */
  if ((C.zf||C.sf!=C.of)) goto L_122a3542;
  /* 122a352a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a352d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 122a3530 cmp ecx, dword ptr [0x122bfe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122bfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3536 jge 0x122a3542 */
  if ((C.sf==C.of)) goto L_122a3542;
  /* 122a3538 mov eax, 1 */
  EAX = (0x1u);
  /* 122a353d jmp 0x122a35e6 */
  goto L_122a35e6;
L_122a3542:;
  /* 122a3542 jmp 0x122a3587 */
  goto L_122a3587;
L_122a3544:;
  /* 122a3544 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3547 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122a354a cmp eax, dword ptr [0x122bfe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122bfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3550 jl 0x122a3560 */
  if ((C.sf!=C.of)) goto L_122a3560;
  /* 122a3552 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3555 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 122a3558 cmp edx, dword ptr [0x122bfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x122bfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a355e jle 0x122a3567 */
  if ((C.zf||C.sf!=C.of)) goto L_122a3567;
L_122a3560:;
  /* 122a3560 mov eax, 1 */
  EAX = (0x1u);
  /* 122a3565 jmp 0x122a35e6 */
  goto L_122a35e6;
L_122a3567:;
  /* 122a3567 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a356a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 122a356d cmp ecx, dword ptr [0x122bfe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122bfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3573 jle 0x122a3587 */
  if ((C.zf||C.sf!=C.of)) goto L_122a3587;
  /* 122a3575 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3578 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122a357b cmp eax, dword ptr [0x122bfe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122bfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3581 jge 0x122a3587 */
  if ((C.sf==C.of)) goto L_122a3587;
  /* 122a3583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a3585 jmp 0x122a35e6 */
  goto L_122a35e6;
L_122a3587:;
  /* 122a3587 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a358a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122a358d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a3590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3593 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a3595 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3597 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a359a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122a359d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a35a3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a35a5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a35ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122a35ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a35b1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 122a35b4 cmp edx, dword ptr [0x122bfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x122bfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a35ba jne 0x122a35d2 */
  if (!C.zf) goto L_122a35d2;
  /* 122a35bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a35bf cmp eax, dword ptr [0x122bfe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122bfe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a35c5 jl 0x122a35ce */
  if ((C.sf!=C.of)) goto L_122a35ce;
  /* 122a35c7 mov eax, 1 */
  EAX = (0x1u);
  /* 122a35cc jmp 0x122a35e6 */
  goto L_122a35e6;
L_122a35ce:;
  /* 122a35ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a35d0 jmp 0x122a35e6 */
  goto L_122a35e6;
L_122a35d2:;
  /* 122a35d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a35d5 cmp ecx, dword ptr [0x122bfe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122bfe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a35db jge 0x122a35e4 */
  if ((C.sf==C.of)) goto L_122a35e4;
  /* 122a35dd mov eax, 1 */
  EAX = (0x1u);
  /* 122a35e2 jmp 0x122a35e6 */
  goto L_122a35e6;
L_122a35e4:;
  /* 122a35e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122a35e6:;
  /* 122a35e6 mov esp, ebp */
  ESP = (EBP);
  /* 122a35e8 pop ebp */
  EBP = (pop32());
  /* 122a35e9 ret  */
  ESPCHK(0x122a32f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100135f0 @ 0x122a35f0 (504 bytes, 145 insns) */
void f_122a35f0(void) {
  FTRACE(0x122a35f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a35f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a35f1 mov ebp, esp */
  EBP = (ESP);
  /* 122a35f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a35f6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a35fa jne 0x122a36cc */
  if (!C.zf) goto L_122a36cc;
  /* 122a3600 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a3603 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 122a3606 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a3608 jne 0x122a3619 */
  if (!C.zf) goto L_122a3619;
  /* 122a360a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a360d mov edx, dword ptr [ecx*4 + 0x122bfe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x122bfe4c)));
  /* 122a3614 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122a3617 jmp 0x122a3626 */
  goto L_122a3626;
L_122a3619:;
  /* 122a3619 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a361c mov ecx, dword ptr [eax*4 + 0x122bfe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x122bfe80)));
  /* 122a3623 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_122a3626:;
  /* 122a3626 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3629 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a362c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122a362f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a3632 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a3635 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a363b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a363e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3640 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a3643 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a3646 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 122a3649 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 122a364d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122a364e mov ecx, 7 */
  ECX = (0x7u);
  /* 122a3653 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122a3655 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122a3658 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a365b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a365e jge 0x122a3679 */
  if ((C.sf==C.of)) goto L_122a3679;
  /* 122a3660 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122a3663 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a3666 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a3669 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a366c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a366f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3672 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3674 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122a3677 jmp 0x122a368d */
  goto L_122a368d;
L_122a3679:;
  /* 122a3679 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122a367c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a367f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a3682 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a3685 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3688 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a368a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122a368d:;
  /* 122a368d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3691 jne 0x122a36ca */
  if (!C.zf) goto L_122a36ca;
  /* 122a3693 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a3696 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 122a3699 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a369b jne 0x122a36ac */
  if (!C.zf) goto L_122a36ac;
  /* 122a369d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a36a0 mov eax, dword ptr [edx*4 + 0x122bfe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x122bfe50)));
  /* 122a36a7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122a36aa jmp 0x122a36b9 */
  goto L_122a36b9;
L_122a36ac:;
  /* 122a36ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a36af mov edx, dword ptr [ecx*4 + 0x122bfe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x122bfe84)));
  /* 122a36b6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_122a36b9:;
  /* 122a36b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a36bc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a36bf jle 0x122a36ca */
  if ((C.zf||C.sf!=C.of)) goto L_122a36ca;
  /* 122a36c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a36c4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a36c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_122a36ca:;
  /* 122a36ca jmp 0x122a3701 */
  goto L_122a3701;
L_122a36cc:;
  /* 122a36cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a36cf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 122a36d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a36d4 jne 0x122a36e5 */
  if (!C.zf) goto L_122a36e5;
  /* 122a36d6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a36d9 mov ecx, dword ptr [eax*4 + 0x122bfe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x122bfe4c)));
  /* 122a36e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122a36e3 jmp 0x122a36f2 */
  goto L_122a36f2;
L_122a36e5:;
  /* 122a36e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a36e8 mov eax, dword ptr [edx*4 + 0x122bfe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x122bfe80)));
  /* 122a36ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_122a36f2:;
  /* 122a36f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a36f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122a36f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a36fb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a36fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_122a3701:;
  /* 122a3701 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3705 jne 0x122a3741 */
  if (!C.zf) goto L_122a3741;
  /* 122a3707 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a370a mov dword ptr [0x122bfe2c], eax */
  w32((uint32_t)(0x122bfe2c), (EAX));
  /* 122a370f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 122a3712 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a3715 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 122a3718 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a371a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a371d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 122a3720 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3722 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a3728 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 122a372b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a372d mov dword ptr [0x122bfe30], ecx */
  w32((uint32_t)(0x122bfe30), (ECX));
  /* 122a3733 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a3736 mov dword ptr [0x122bfe28], edx */
  w32((uint32_t)(0x122bfe28), (EDX));
  /* 122a373c jmp 0x122a37e4 */
  goto L_122a37e4;
L_122a3741:;
  /* 122a3741 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a3744 mov dword ptr [0x122bfe3c], eax */
  w32((uint32_t)(0x122bfe3c), (EAX));
  /* 122a3749 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 122a374c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a374f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 122a3752 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3754 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a3757 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 122a375a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a375c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a3762 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 122a3765 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3767 mov dword ptr [0x122bfe40], ecx */
  w32((uint32_t)(0x122bfe40), (ECX));
  /* 122a376d mov edx, dword ptr [0x122bfd98] */
  EDX = (r32((uint32_t)(0x122bfd98)));
  /* 122a3773 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122a3779 mov eax, dword ptr [0x122bfe40] */
  EAX = (r32((uint32_t)(0x122bfe40)));
  /* 122a377e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3780 mov dword ptr [0x122bfe40], eax */
  w32((uint32_t)(0x122bfe40), (EAX));
  /* 122a3785 cmp dword ptr [0x122bfe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122bfe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a378c jge 0x122a37b1 */
  if ((C.sf==C.of)) goto L_122a37b1;
  /* 122a378e mov ecx, dword ptr [0x122bfe40] */
  ECX = (r32((uint32_t)(0x122bfe40)));
  /* 122a3794 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a379a mov dword ptr [0x122bfe40], ecx */
  w32((uint32_t)(0x122bfe40), (ECX));
  /* 122a37a0 mov edx, dword ptr [0x122bfe3c] */
  EDX = (r32((uint32_t)(0x122bfe3c)));
  /* 122a37a6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a37a9 mov dword ptr [0x122bfe3c], edx */
  w32((uint32_t)(0x122bfe3c), (EDX));
  /* 122a37af jmp 0x122a37db */
  goto L_122a37db;
L_122a37b1:;
  /* 122a37b1 cmp dword ptr [0x122bfe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x122bfe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a37bb jl 0x122a37db */
  if ((C.sf!=C.of)) goto L_122a37db;
  /* 122a37bd mov eax, dword ptr [0x122bfe40] */
  EAX = (r32((uint32_t)(0x122bfe40)));
  /* 122a37c2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a37c7 mov dword ptr [0x122bfe40], eax */
  w32((uint32_t)(0x122bfe40), (EAX));
  /* 122a37cc mov ecx, dword ptr [0x122bfe3c] */
  ECX = (r32((uint32_t)(0x122bfe3c)));
  /* 122a37d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a37d5 mov dword ptr [0x122bfe3c], ecx */
  w32((uint32_t)(0x122bfe3c), (ECX));
L_122a37db:;
  /* 122a37db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a37de mov dword ptr [0x122bfe38], edx */
  w32((uint32_t)(0x122bfe38), (EDX));
L_122a37e4:;
  /* 122a37e4 mov esp, ebp */
  ESP = (EBP);
  /* 122a37e6 pop ebp */
  EBP = (pop32());
  /* 122a37e7 ret  */
  ESPCHK(0x122a35f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100137f0 @ 0x122a37f0 (382 bytes, 135 insns) */
void f_122a37f0(void) {
  FTRACE(0x122a37f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a37f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a37f1 mov ebp, esp */
  EBP = (ESP);
  /* 122a37f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122a37f5 push 0x122bcc20 */
  push32((uint32_t)(0x122bcc20u));
  /* 122a37fa push 0x1229d4b8 */
  push32((uint32_t)(0x1229d4b8u));
  /* 122a37ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 122a3805 push eax */
  push32((uint32_t)(EAX));
  /* 122a3806 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 122a380d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3810 push ebx */
  push32((uint32_t)(EBX));
  /* 122a3811 push esi */
  push32((uint32_t)(ESI));
  /* 122a3812 push edi */
  push32((uint32_t)(EDI));
  /* 122a3813 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122a3816 cmp dword ptr [0x122c095c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c095c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a381d jne 0x122a3862 */
  if (!C.zf) goto L_122a3862;
  /* 122a381f push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3821 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3823 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a3825 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3827 call dword ptr [0x122c3254] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3254))), 0x122a382du);
  /* 122a382d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a382f je 0x122a383d */
  if (C.zf) goto L_122a383d;
  /* 122a3831 mov dword ptr [0x122c095c], 1 */
  w32((uint32_t)(0x122c095c), (0x1u));
  /* 122a383b jmp 0x122a3862 */
  goto L_122a3862;
L_122a383d:;
  /* 122a383d push 0 */
  push32((uint32_t)(0x0u));
  /* 122a383f push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3841 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a3843 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3845 call dword ptr [0x122c326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c326c))), 0x122a384bu);
  /* 122a384b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a384d je 0x122a385b */
  if (C.zf) goto L_122a385b;
  /* 122a384f mov dword ptr [0x122c095c], 2 */
  w32((uint32_t)(0x122c095c), (0x2u));
  /* 122a3859 jmp 0x122a3862 */
  goto L_122a3862;
L_122a385b:;
  /* 122a385b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a385d jmp 0x122a3971 */
  goto L_122a3971;
L_122a3862:;
  /* 122a3862 cmp dword ptr [0x122c095c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c095c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3869 jne 0x122a3886 */
  if (!C.zf) goto L_122a3886;
  /* 122a386b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a386e push eax */
  push32((uint32_t)(EAX));
  /* 122a386f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a3872 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3873 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a3876 push edx */
  push32((uint32_t)(EDX));
  /* 122a3877 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a387a push eax */
  push32((uint32_t)(EAX));
  /* 122a387b call dword ptr [0x122c3254] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3254))), 0x122a3881u);
  /* 122a3881 jmp 0x122a3971 */
  goto L_122a3971;
L_122a3886:;
  /* 122a3886 cmp dword ptr [0x122c095c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x122c095c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a388d jne 0x122a396f */
  if (!C.zf) goto L_122a396f;
  /* 122a3893 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3897 jne 0x122a38a2 */
  if (!C.zf) goto L_122a38a2;
  /* 122a3899 mov ecx, dword ptr [0x122c0810] */
  ECX = (r32((uint32_t)(0x122c0810)));
  /* 122a389f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_122a38a2:;
  /* 122a38a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a38a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a38a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a38a9 push edx */
  push32((uint32_t)(EDX));
  /* 122a38aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a38ad push eax */
  push32((uint32_t)(EAX));
  /* 122a38ae call dword ptr [0x122c326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c326c))), 0x122a38b4u);
  /* 122a38b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 122a38b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a38bb jne 0x122a38c4 */
  if (!C.zf) goto L_122a38c4;
  /* 122a38bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a38bf jmp 0x122a3971 */
  goto L_122a3971;
L_122a38c4:;
  /* 122a38c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122a38cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122a38ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a38d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122a38d3 call 0x12297550 */
  push32(0x122a38d8u); f_12297550();
  /* 122a38d8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 122a38db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122a38de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122a38e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 122a38e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122a38eb jmp 0x122a3904 */
  goto L_122a3904;
  /* 122a38ed mov eax, 1 */
  EAX = (0x1u);
  /* 122a38f2 ret  */
  ESPCHK(0x122a37f0u, _esp0);
  ESP += 4; return;
  /* 122a38f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122a38f6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 122a38fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122a3904:;
  /* 122a3904 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3908 jne 0x122a390e */
  if (!C.zf) goto L_122a390e;
  /* 122a390a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a390c jmp 0x122a3971 */
  goto L_122a3971;
L_122a390e:;
  /* 122a390e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122a3911 push edx */
  push32((uint32_t)(EDX));
  /* 122a3912 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122a3915 push eax */
  push32((uint32_t)(EAX));
  /* 122a3916 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a3919 push ecx */
  push32((uint32_t)(ECX));
  /* 122a391a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a391d push edx */
  push32((uint32_t)(EDX));
  /* 122a391e call dword ptr [0x122c326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c326c))), 0x122a3924u);
  /* 122a3924 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a3926 jne 0x122a392c */
  if (!C.zf) goto L_122a392c;
  /* 122a3928 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a392a jmp 0x122a3971 */
  goto L_122a3971;
L_122a392c:;
  /* 122a392c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3930 jne 0x122a394d */
  if (!C.zf) goto L_122a394d;
  /* 122a3932 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3934 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3936 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122a3938 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122a393b push eax */
  push32((uint32_t)(EAX));
  /* 122a393c push 1 */
  push32((uint32_t)(0x1u));
  /* 122a393e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a3941 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3942 call dword ptr [0x122c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3354))), 0x122a3948u);
  /* 122a3948 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 122a394b jmp 0x122a396a */
  goto L_122a396a;
L_122a394d:;
  /* 122a394d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a3950 push edx */
  push32((uint32_t)(EDX));
  /* 122a3951 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a3954 push eax */
  push32((uint32_t)(EAX));
  /* 122a3955 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122a3957 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122a395a push ecx */
  push32((uint32_t)(ECX));
  /* 122a395b push 1 */
  push32((uint32_t)(0x1u));
  /* 122a395d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a3960 push edx */
  push32((uint32_t)(EDX));
  /* 122a3961 call dword ptr [0x122c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3354))), 0x122a3967u);
  /* 122a3967 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_122a396a:;
  /* 122a396a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122a396d jmp 0x122a3971 */
  goto L_122a3971;
L_122a396f:;
  /* 122a396f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122a3971:;
  /* 122a3971 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 122a3974 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a3977 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 122a397e pop edi */
  EDI = (pop32());
  /* 122a397f pop esi */
  ESI = (pop32());
  /* 122a3980 pop ebx */
  EBX = (pop32());
  /* 122a3981 mov esp, ebp */
  ESP = (EBP);
  /* 122a3983 pop ebp */
  EBP = (pop32());
  /* 122a3984 ret  */
  ESPCHK(0x122a37f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013990 @ 0x122a3990 (398 bytes, 140 insns) */
void f_122a3990(void) {
  FTRACE(0x122a3990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a3990 push ebp */
  push32((uint32_t)(EBP));
  /* 122a3991 mov ebp, esp */
  EBP = (ESP);
  /* 122a3993 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122a3995 push 0x122bcc30 */
  push32((uint32_t)(0x122bcc30u));
  /* 122a399a push 0x1229d4b8 */
  push32((uint32_t)(0x1229d4b8u));
  /* 122a399f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 122a39a5 push eax */
  push32((uint32_t)(EAX));
  /* 122a39a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 122a39ad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a39b0 push ebx */
  push32((uint32_t)(EBX));
  /* 122a39b1 push esi */
  push32((uint32_t)(ESI));
  /* 122a39b2 push edi */
  push32((uint32_t)(EDI));
  /* 122a39b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122a39b6 cmp dword ptr [0x122c0960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a39bd jne 0x122a3a02 */
  if (!C.zf) goto L_122a3a02;
  /* 122a39bf push 0 */
  push32((uint32_t)(0x0u));
  /* 122a39c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a39c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a39c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a39c7 call dword ptr [0x122c3254] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3254))), 0x122a39cdu);
  /* 122a39cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a39cf je 0x122a39dd */
  if (C.zf) goto L_122a39dd;
  /* 122a39d1 mov dword ptr [0x122c0960], 1 */
  w32((uint32_t)(0x122c0960), (0x1u));
  /* 122a39db jmp 0x122a3a02 */
  goto L_122a3a02;
L_122a39dd:;
  /* 122a39dd push 0 */
  push32((uint32_t)(0x0u));
  /* 122a39df push 0 */
  push32((uint32_t)(0x0u));
  /* 122a39e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a39e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a39e5 call dword ptr [0x122c326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c326c))), 0x122a39ebu);
  /* 122a39eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a39ed je 0x122a39fb */
  if (C.zf) goto L_122a39fb;
  /* 122a39ef mov dword ptr [0x122c0960], 2 */
  w32((uint32_t)(0x122c0960), (0x2u));
  /* 122a39f9 jmp 0x122a3a02 */
  goto L_122a3a02;
L_122a39fb:;
  /* 122a39fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a39fd jmp 0x122a3b21 */
  goto L_122a3b21;
L_122a3a02:;
  /* 122a3a02 cmp dword ptr [0x122c0960], 2 */
  { uint32_t _a=(r32((uint32_t)(0x122c0960))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3a09 jne 0x122a3a26 */
  if (!C.zf) goto L_122a3a26;
  /* 122a3a0b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a3a0e push eax */
  push32((uint32_t)(EAX));
  /* 122a3a0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a3a12 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3a13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a3a16 push edx */
  push32((uint32_t)(EDX));
  /* 122a3a17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3a1a push eax */
  push32((uint32_t)(EAX));
  /* 122a3a1b call dword ptr [0x122c326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c326c))), 0x122a3a21u);
  /* 122a3a21 jmp 0x122a3b21 */
  goto L_122a3b21;
L_122a3a26:;
  /* 122a3a26 cmp dword ptr [0x122c0960], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c0960))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3a2d jne 0x122a3b1f */
  if (!C.zf) goto L_122a3b1f;
  /* 122a3a33 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3a37 jne 0x122a3a42 */
  if (!C.zf) goto L_122a3a42;
  /* 122a3a39 mov ecx, dword ptr [0x122c0810] */
  ECX = (r32((uint32_t)(0x122c0810)));
  /* 122a3a3f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_122a3a42:;
  /* 122a3a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3a46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a3a49 push edx */
  push32((uint32_t)(EDX));
  /* 122a3a4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3a4d push eax */
  push32((uint32_t)(EAX));
  /* 122a3a4e call dword ptr [0x122c3254] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3254))), 0x122a3a54u);
  /* 122a3a54 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 122a3a57 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3a5b jne 0x122a3a64 */
  if (!C.zf) goto L_122a3a64;
  /* 122a3a5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a3a5f jmp 0x122a3b21 */
  goto L_122a3b21;
L_122a3a64:;
  /* 122a3a64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122a3a6b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122a3a6e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122a3a70 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3a73 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122a3a75 call 0x12297550 */
  push32(0x122a3a7au); f_12297550();
  /* 122a3a7a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 122a3a7d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122a3a80 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122a3a83 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 122a3a86 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122a3a8d jmp 0x122a3aa6 */
  goto L_122a3aa6;
  /* 122a3a8f mov eax, 1 */
  EAX = (0x1u);
  /* 122a3a94 ret  */
  ESPCHK(0x122a3990u, _esp0);
  ESP += 4; return;
  /* 122a3a95 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122a3a98 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 122a3a9f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122a3aa6:;
  /* 122a3aa6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3aaa jne 0x122a3ab0 */
  if (!C.zf) goto L_122a3ab0;
  /* 122a3aac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a3aae jmp 0x122a3b21 */
  goto L_122a3b21;
L_122a3ab0:;
  /* 122a3ab0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122a3ab3 push edx */
  push32((uint32_t)(EDX));
  /* 122a3ab4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122a3ab7 push eax */
  push32((uint32_t)(EAX));
  /* 122a3ab8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a3abb push ecx */
  push32((uint32_t)(ECX));
  /* 122a3abc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3abf push edx */
  push32((uint32_t)(EDX));
  /* 122a3ac0 call dword ptr [0x122c3254] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3254))), 0x122a3ac6u);
  /* 122a3ac6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a3ac8 jne 0x122a3ace */
  if (!C.zf) goto L_122a3ace;
  /* 122a3aca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a3acc jmp 0x122a3b21 */
  goto L_122a3b21;
L_122a3ace:;
  /* 122a3ace cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3ad2 jne 0x122a3af6 */
  if (!C.zf) goto L_122a3af6;
  /* 122a3ad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3ada push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3adc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122a3ade mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122a3ae1 push eax */
  push32((uint32_t)(EAX));
  /* 122a3ae2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122a3ae7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a3aea push ecx */
  push32((uint32_t)(ECX));
  /* 122a3aeb call dword ptr [0x122c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c330c))), 0x122a3af1u);
  /* 122a3af1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 122a3af4 jmp 0x122a3b1a */
  goto L_122a3b1a;
L_122a3af6:;
  /* 122a3af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3afa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a3afd push edx */
  push32((uint32_t)(EDX));
  /* 122a3afe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a3b01 push eax */
  push32((uint32_t)(EAX));
  /* 122a3b02 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122a3b04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122a3b07 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3b08 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122a3b0d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a3b10 push edx */
  push32((uint32_t)(EDX));
  /* 122a3b11 call dword ptr [0x122c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c330c))), 0x122a3b17u);
  /* 122a3b17 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_122a3b1a:;
  /* 122a3b1a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122a3b1d jmp 0x122a3b21 */
  goto L_122a3b21;
L_122a3b1f:;
  /* 122a3b1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122a3b21:;
  /* 122a3b21 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 122a3b24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a3b27 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 122a3b2e pop edi */
  EDI = (pop32());
  /* 122a3b2f pop esi */
  ESI = (pop32());
  /* 122a3b30 pop ebx */
  EBX = (pop32());
  /* 122a3b31 mov esp, ebp */
  ESP = (EBP);
  /* 122a3b33 pop ebp */
  EBP = (pop32());
  /* 122a3b34 ret  */
  ESPCHK(0x122a3990u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b40 @ 0x122a3b40 (11 bytes, 6 insns) */
void f_122a3b40(void) {
  FTRACE(0x122a3b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a3b40 push ebp */
  push32((uint32_t)(EBP));
  /* 122a3b41 mov ebp, esp */
  EBP = (ESP);
  /* 122a3b43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3b46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3b49 pop ebp */
  EBP = (pop32());
  /* 122a3b4a ret  */
  ESPCHK(0x122a3b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b50 @ 0x122a3b50 (147 bytes, 43 insns) */
void f_122a3b50(void) {
  FTRACE(0x122a3b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a3b50 push ebp */
  push32((uint32_t)(EBP));
  /* 122a3b51 mov ebp, esp */
  EBP = (ESP);
  /* 122a3b53 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3b54 cmp dword ptr [0x122c0800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3b5b jne 0x122a3b77 */
  if (!C.zf) goto L_122a3b77;
  /* 122a3b5d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3b61 jl 0x122a3b72 */
  if ((C.sf!=C.of)) goto L_122a3b72;
  /* 122a3b63 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3b67 jg 0x122a3b72 */
  if ((!C.zf&&C.sf==C.of)) goto L_122a3b72;
  /* 122a3b69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3b6c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3b6f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_122a3b72:;
  /* 122a3b72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3b75 jmp 0x122a3bdf */
  goto L_122a3bdf;
L_122a3b77:;
  /* 122a3b77 push 0x122c098c */
  push32((uint32_t)(0x122c098cu));
  /* 122a3b7c call dword ptr [0x122c32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32b4))), 0x122a3b82u);
  /* 122a3b82 cmp dword ptr [0x122c097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3b89 je 0x122a3ba9 */
  if (C.zf) goto L_122a3ba9;
  /* 122a3b8b push 0x122c098c */
  push32((uint32_t)(0x122c098cu));
  /* 122a3b90 call dword ptr [0x122c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a4))), 0x122a3b96u);
  /* 122a3b96 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122a3b98 call 0x12297db0 */
  push32(0x122a3b9du); f_12297db0();
  /* 122a3b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3ba0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122a3ba7 jmp 0x122a3bb0 */
  goto L_122a3bb0;
L_122a3ba9:;
  /* 122a3ba9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_122a3bb0:;
  /* 122a3bb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3bb4 call 0x122a3bf0 */
  push32(0x122a3bb9u); f_122a3bf0();
  /* 122a3bb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3bbc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122a3bbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3bc3 je 0x122a3bd1 */
  if (C.zf) goto L_122a3bd1;
  /* 122a3bc5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122a3bc7 call 0x12297e50 */
  push32(0x122a3bccu); f_12297e50();
  /* 122a3bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3bcf jmp 0x122a3bdc */
  goto L_122a3bdc;
L_122a3bd1:;
  /* 122a3bd1 push 0x122c098c */
  push32((uint32_t)(0x122c098cu));
  /* 122a3bd6 call dword ptr [0x122c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a4))), 0x122a3bdcu);
L_122a3bdc:;
  /* 122a3bdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_122a3bdf:;
  /* 122a3bdf mov esp, ebp */
  ESP = (EBP);
  /* 122a3be1 pop ebp */
  EBP = (pop32());
  /* 122a3be2 ret  */
  ESPCHK(0x122a3b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013bf0 @ 0x122a3bf0 (299 bytes, 91 insns) */
void f_122a3bf0(void) {
  FTRACE(0x122a3bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a3bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a3bf1 mov ebp, esp */
  EBP = (ESP);
  /* 122a3bf3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a3bf6 cmp dword ptr [0x122c0800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3bfd jne 0x122a3c1c */
  if (!C.zf) goto L_122a3c1c;
  /* 122a3bff cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3c03 jl 0x122a3c14 */
  if ((C.sf!=C.of)) goto L_122a3c14;
  /* 122a3c05 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3c09 jg 0x122a3c14 */
  if ((!C.zf&&C.sf==C.of)) goto L_122a3c14;
  /* 122a3c0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3c0e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3c11 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_122a3c14:;
  /* 122a3c14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3c17 jmp 0x122a3d17 */
  goto L_122a3d17;
L_122a3c1c:;
  /* 122a3c1c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3c23 jge 0x122a3c63 */
  if ((C.sf==C.of)) goto L_122a3c63;
  /* 122a3c25 cmp dword ptr [0x122beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3c2c jle 0x122a3c41 */
  if ((C.zf||C.sf!=C.of)) goto L_122a3c41;
  /* 122a3c2e push 1 */
  push32((uint32_t)(0x1u));
  /* 122a3c30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3c33 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3c34 call 0x1229a3c0 */
  push32(0x122a3c39u); f_1229a3c0();
  /* 122a3c39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3c3c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122a3c3f jmp 0x122a3c55 */
  goto L_122a3c55;
L_122a3c41:;
  /* 122a3c41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3c44 mov eax, dword ptr [0x122bec98] */
  EAX = (r32((uint32_t)(0x122bec98)));
  /* 122a3c49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a3c4b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 122a3c4f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122a3c52 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122a3c55:;
  /* 122a3c55 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3c59 jne 0x122a3c63 */
  if (!C.zf) goto L_122a3c63;
  /* 122a3c5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3c5e jmp 0x122a3d17 */
  goto L_122a3d17;
L_122a3c63:;
  /* 122a3c63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3c66 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 122a3c69 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122a3c6f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122a3c75 mov eax, dword ptr [0x122bec98] */
  EAX = (r32((uint32_t)(0x122bec98)));
  /* 122a3c7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a3c7c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 122a3c80 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 122a3c86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a3c88 je 0x122a3cac */
  if (C.zf) goto L_122a3cac;
  /* 122a3c8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3c8d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 122a3c90 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122a3c96 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 122a3c99 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 122a3c9c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 122a3c9f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 122a3ca3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 122a3caa jmp 0x122a3cbd */
  goto L_122a3cbd;
L_122a3cac:;
  /* 122a3cac mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 122a3caf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 122a3cb2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 122a3cb6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_122a3cbd:;
  /* 122a3cbd push 1 */
  push32((uint32_t)(0x1u));
  /* 122a3cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3cc1 push 3 */
  push32((uint32_t)(0x3u));
  /* 122a3cc3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 122a3cc6 push edx */
  push32((uint32_t)(EDX));
  /* 122a3cc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a3cca push eax */
  push32((uint32_t)(EAX));
  /* 122a3ccb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 122a3cce push ecx */
  push32((uint32_t)(ECX));
  /* 122a3ccf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 122a3cd4 mov edx, dword ptr [0x122c0800] */
  EDX = (r32((uint32_t)(0x122c0800)));
  /* 122a3cda push edx */
  push32((uint32_t)(EDX));
  /* 122a3cdb call 0x1229c7a0 */
  push32(0x122a3ce0u); f_1229c7a0();
  /* 122a3ce0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3ce3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a3ce6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3cea jne 0x122a3cf1 */
  if (!C.zf) goto L_122a3cf1;
  /* 122a3cec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3cef jmp 0x122a3d17 */
  goto L_122a3d17;
L_122a3cf1:;
  /* 122a3cf1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3cf5 jne 0x122a3d01 */
  if (!C.zf) goto L_122a3d01;
  /* 122a3cf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3cfa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a3cff jmp 0x122a3d17 */
  goto L_122a3d17;
L_122a3d01:;
  /* 122a3d01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3d04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a3d09 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 122a3d0c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 122a3d12 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 122a3d15 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_122a3d17:;
  /* 122a3d17 mov esp, ebp */
  ESP = (EBP);
  /* 122a3d19 pop ebp */
  EBP = (pop32());
  /* 122a3d1a ret  */
  ESPCHK(0x122a3bf0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x122a3d20 (52 bytes, 19 insns) */
void f_122a3d20(void) {
  FTRACE(0x122a3d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a3d20 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122a3d24 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 122a3d28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122a3d2a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 122a3d2e jne 0x122a3d39 */
  if (!C.zf) goto L_122a3d39;
  /* 122a3d30 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 122a3d34 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 122a3d36 ret 0x10 */
  ESPCHK(0x122a3d20u, _esp0);
  ESP += 20; return;
L_122a3d39:;
  /* 122a3d39 push ebx */
  push32((uint32_t)(EBX));
  /* 122a3d3a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 122a3d3c mov ebx, eax */
  EBX = (EAX);
  /* 122a3d3e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122a3d42 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 122a3d46 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3d48 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122a3d4c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 122a3d4e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3d50 pop ebx */
  EBX = (pop32());
  /* 122a3d51 ret 0x10 */
  ESPCHK(0x122a3d20u, _esp0);
  ESP += 20; return;
}

/* FUN_10013d60 @ 0x122a3d60 (46 bytes, 18 insns) */
void f_122a3d60(void) {
  FTRACE(0x122a3d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a3d60 push ebp */
  push32((uint32_t)(EBP));
  /* 122a3d61 mov ebp, esp */
  EBP = (ESP);
  /* 122a3d63 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3d64 push 0xc */
  push32((uint32_t)(0xcu));
  /* 122a3d66 call 0x12297db0 */
  push32(0x122a3d6bu); f_12297db0();
  /* 122a3d6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3d6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3d71 push eax */
  push32((uint32_t)(EAX));
  /* 122a3d72 call 0x122a3d90 */
  push32(0x122a3d77u); f_122a3d90();
  /* 122a3d77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3d7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a3d7d push 0xc */
  push32((uint32_t)(0xcu));
  /* 122a3d7f call 0x12297e50 */
  push32(0x122a3d84u); f_12297e50();
  /* 122a3d84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3d87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a3d8a mov esp, ebp */
  ESP = (EBP);
  /* 122a3d8c pop ebp */
  EBP = (pop32());
  /* 122a3d8d ret  */
  ESPCHK(0x122a3d60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x122a3d90 (198 bytes, 69 insns) */
void f_122a3d90(void) {
  FTRACE(0x122a3d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a3d90 push ebp */
  push32((uint32_t)(EBP));
  /* 122a3d91 mov ebp, esp */
  EBP = (ESP);
  /* 122a3d93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a3d96 mov eax, dword ptr [0x122c061c] */
  EAX = (r32((uint32_t)(0x122c061c)));
  /* 122a3d9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122a3d9e cmp dword ptr [0x122c2120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c2120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3da5 jne 0x122a3dae */
  if (!C.zf) goto L_122a3dae;
  /* 122a3da7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a3da9 jmp 0x122a3e52 */
  goto L_122a3e52;
L_122a3dae:;
  /* 122a3dae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3db2 jne 0x122a3dd6 */
  if (!C.zf) goto L_122a3dd6;
  /* 122a3db4 cmp dword ptr [0x122c0624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3dbb je 0x122a3dd6 */
  if (C.zf) goto L_122a3dd6;
  /* 122a3dbd call 0x122a3eb0 */
  push32(0x122a3dc2u); f_122a3eb0();
  /* 122a3dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a3dc4 je 0x122a3dcd */
  if (C.zf) goto L_122a3dcd;
  /* 122a3dc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a3dc8 jmp 0x122a3e52 */
  goto L_122a3e52;
L_122a3dcd:;
  /* 122a3dcd mov ecx, dword ptr [0x122c061c] */
  ECX = (r32((uint32_t)(0x122c061c)));
  /* 122a3dd3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_122a3dd6:;
  /* 122a3dd6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3dda je 0x122a3e50 */
  if (C.zf) goto L_122a3e50;
  /* 122a3ddc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3de0 je 0x122a3e50 */
  if (C.zf) goto L_122a3e50;
  /* 122a3de2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3de5 push edx */
  push32((uint32_t)(EDX));
  /* 122a3de6 call 0x122971e0 */
  push32(0x122a3debu); f_122971e0();
  /* 122a3deb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3dee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122a3df1:;
  /* 122a3df1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a3df4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3df7 je 0x122a3e50 */
  if (C.zf) goto L_122a3e50;
  /* 122a3df9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a3dfc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a3dfe push edx */
  push32((uint32_t)(EDX));
  /* 122a3dff call 0x122971e0 */
  push32(0x122a3e04u); f_122971e0();
  /* 122a3e04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3e07 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3e0a jbe 0x122a3e45 */
  if ((C.cf||C.zf)) goto L_122a3e45;
  /* 122a3e0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a3e0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a3e11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a3e14 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 122a3e18 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3e1b jne 0x122a3e45 */
  if (!C.zf) goto L_122a3e45;
  /* 122a3e1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a3e20 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3e21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3e24 push edx */
  push32((uint32_t)(EDX));
  /* 122a3e25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a3e28 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a3e2a push ecx */
  push32((uint32_t)(ECX));
  /* 122a3e2b call 0x122a3e60 */
  push32(0x122a3e30u); f_122a3e60();
  /* 122a3e30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3e33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a3e35 jne 0x122a3e45 */
  if (!C.zf) goto L_122a3e45;
  /* 122a3e37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a3e3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a3e3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a3e3f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 122a3e43 jmp 0x122a3e52 */
  goto L_122a3e52;
L_122a3e45:;
  /* 122a3e45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a3e48 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3e4b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122a3e4e jmp 0x122a3df1 */
  goto L_122a3df1;
L_122a3e50:;
  /* 122a3e50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122a3e52:;
  /* 122a3e52 mov esp, ebp */
  ESP = (EBP);
  /* 122a3e54 pop ebp */
  EBP = (pop32());
  /* 122a3e55 ret  */
  ESPCHK(0x122a3d90u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x122a3e60 (79 bytes, 32 insns) */
void f_122a3e60(void) {
  FTRACE(0x122a3e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a3e60 push ebp */
  push32((uint32_t)(EBP));
  /* 122a3e61 mov ebp, esp */
  EBP = (ESP);
  /* 122a3e63 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3e64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3e68 jne 0x122a3e6e */
  if (!C.zf) goto L_122a3e6e;
  /* 122a3e6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a3e6c jmp 0x122a3eab */
  goto L_122a3eab;
L_122a3e6e:;
  /* 122a3e6e mov eax, dword ptr [0x122c1ce4] */
  EAX = (r32((uint32_t)(0x122c1ce4)));
  /* 122a3e73 push eax */
  push32((uint32_t)(EAX));
  /* 122a3e74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a3e77 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3e78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a3e7b push edx */
  push32((uint32_t)(EDX));
  /* 122a3e7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a3e7f push eax */
  push32((uint32_t)(EAX));
  /* 122a3e80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a3e83 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3e84 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a3e86 mov edx, dword ptr [0x122c1f84] */
  EDX = (r32((uint32_t)(0x122c1f84)));
  /* 122a3e8c push edx */
  push32((uint32_t)(EDX));
  /* 122a3e8d call 0x122a3f60 */
  push32(0x122a3e92u); f_122a3f60();
  /* 122a3e92 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3e95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a3e98 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3e9c jne 0x122a3ea5 */
  if (!C.zf) goto L_122a3ea5;
  /* 122a3e9e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 122a3ea3 jmp 0x122a3eab */
  goto L_122a3eab;
L_122a3ea5:;
  /* 122a3ea5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a3ea8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_122a3eab:;
  /* 122a3eab mov esp, ebp */
  ESP = (EBP);
  /* 122a3ead pop ebp */
  EBP = (pop32());
  /* 122a3eae ret  */
  ESPCHK(0x122a3e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013eb0 @ 0x122a3eb0 (174 bytes, 66 insns) */
void f_122a3eb0(void) {
  FTRACE(0x122a3eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a3eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a3eb1 mov ebp, esp */
  EBP = (ESP);
  /* 122a3eb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a3eb6 mov eax, dword ptr [0x122c0624] */
  EAX = (r32((uint32_t)(0x122c0624)));
  /* 122a3ebb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122a3ebe:;
  /* 122a3ebe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a3ec1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3ec4 je 0x122a3f58 */
  if (C.zf) goto L_122a3f58;
  /* 122a3eca push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3ecc push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3ece push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3ed2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122a3ed4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a3ed7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a3ed9 push eax */
  push32((uint32_t)(EAX));
  /* 122a3eda push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3edc push 1 */
  push32((uint32_t)(0x1u));
  /* 122a3ede call dword ptr [0x122c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c330c))), 0x122a3ee4u);
  /* 122a3ee4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122a3ee7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3eeb jne 0x122a3ef2 */
  if (!C.zf) goto L_122a3ef2;
  /* 122a3eed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a3ef0 jmp 0x122a3f5a */
  goto L_122a3f5a;
L_122a3ef2:;
  /* 122a3ef2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 122a3ef4 push 0x122bcc3c */
  push32((uint32_t)(0x122bcc3cu));
  /* 122a3ef9 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a3efb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3efe push ecx */
  push32((uint32_t)(ECX));
  /* 122a3eff call 0x122943b0 */
  push32(0x122a3f04u); f_122943b0();
  /* 122a3f04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3f07 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122a3f0a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3f0e jne 0x122a3f15 */
  if (!C.zf) goto L_122a3f15;
  /* 122a3f10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a3f13 jmp 0x122a3f5a */
  goto L_122a3f5a;
L_122a3f15:;
  /* 122a3f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3f19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a3f1c push edx */
  push32((uint32_t)(EDX));
  /* 122a3f1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a3f20 push eax */
  push32((uint32_t)(EAX));
  /* 122a3f21 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122a3f23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a3f26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a3f28 push edx */
  push32((uint32_t)(EDX));
  /* 122a3f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3f2b push 1 */
  push32((uint32_t)(0x1u));
  /* 122a3f2d call dword ptr [0x122c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c330c))), 0x122a3f33u);
  /* 122a3f33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a3f35 jne 0x122a3f3c */
  if (!C.zf) goto L_122a3f3c;
  /* 122a3f37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a3f3a jmp 0x122a3f5a */
  goto L_122a3f5a;
L_122a3f3c:;
  /* 122a3f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3f3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a3f41 push eax */
  push32((uint32_t)(EAX));
  /* 122a3f42 call 0x122a43b0 */
  push32(0x122a3f47u); f_122a43b0();
  /* 122a3f47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3f4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a3f4d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3f50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122a3f53 jmp 0x122a3ebe */
  goto L_122a3ebe;
L_122a3f58:;
  /* 122a3f58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122a3f5a:;
  /* 122a3f5a mov esp, ebp */
  ESP = (EBP);
  /* 122a3f5c pop ebp */
  EBP = (pop32());
  /* 122a3f5d ret  */
  ESPCHK(0x122a3eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f60 @ 0x122a3f60 (970 bytes, 340 insns) */
void f_122a3f60(void) {
  FTRACE(0x122a3f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a3f60 push ebp */
  push32((uint32_t)(EBP));
  /* 122a3f61 mov ebp, esp */
  EBP = (ESP);
  /* 122a3f63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122a3f65 push 0x122bcc90 */
  push32((uint32_t)(0x122bcc90u));
  /* 122a3f6a push 0x1229d4b8 */
  push32((uint32_t)(0x1229d4b8u));
  /* 122a3f6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 122a3f75 push eax */
  push32((uint32_t)(EAX));
  /* 122a3f76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 122a3f7d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3f80 push ebx */
  push32((uint32_t)(EBX));
  /* 122a3f81 push esi */
  push32((uint32_t)(ESI));
  /* 122a3f82 push edi */
  push32((uint32_t)(EDI));
  /* 122a3f83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122a3f86 cmp dword ptr [0x122c0964], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0964))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3f8d jne 0x122a3fe6 */
  if (!C.zf) goto L_122a3fe6;
  /* 122a3f8f push 1 */
  push32((uint32_t)(0x1u));
  /* 122a3f91 push 0x122bc2ec */
  push32((uint32_t)(0x122bc2ecu));
  /* 122a3f96 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a3f98 push 0x122bc2ec */
  push32((uint32_t)(0x122bc2ecu));
  /* 122a3f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3fa1 call dword ptr [0x122c3250] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3250))), 0x122a3fa7u);
  /* 122a3fa7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a3fa9 je 0x122a3fb7 */
  if (C.zf) goto L_122a3fb7;
  /* 122a3fab mov dword ptr [0x122c0964], 1 */
  w32((uint32_t)(0x122c0964), (0x1u));
  /* 122a3fb5 jmp 0x122a3fe6 */
  goto L_122a3fe6;
L_122a3fb7:;
  /* 122a3fb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a3fb9 push 0x122bc2e8 */
  push32((uint32_t)(0x122bc2e8u));
  /* 122a3fbe push 1 */
  push32((uint32_t)(0x1u));
  /* 122a3fc0 push 0x122bc2e8 */
  push32((uint32_t)(0x122bc2e8u));
  /* 122a3fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a3fc9 call dword ptr [0x122c325c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c325c))), 0x122a3fcfu);
  /* 122a3fcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a3fd1 je 0x122a3fdf */
  if (C.zf) goto L_122a3fdf;
  /* 122a3fd3 mov dword ptr [0x122c0964], 2 */
  w32((uint32_t)(0x122c0964), (0x2u));
  /* 122a3fdd jmp 0x122a3fe6 */
  goto L_122a3fe6;
L_122a3fdf:;
  /* 122a3fdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a3fe1 jmp 0x122a4344 */
  goto L_122a4344;
L_122a3fe6:;
  /* 122a3fe6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a3fea jle 0x122a3fff */
  if ((C.zf||C.sf!=C.of)) goto L_122a3fff;
  /* 122a3fec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a3fef push eax */
  push32((uint32_t)(EAX));
  /* 122a3ff0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a3ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 122a3ff4 call 0x122a4360 */
  push32(0x122a3ff9u); f_122a4360();
  /* 122a3ff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a3ffc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_122a3fff:;
  /* 122a3fff cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4003 jle 0x122a4018 */
  if ((C.zf||C.sf!=C.of)) goto L_122a4018;
  /* 122a4005 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122a4008 push edx */
  push32((uint32_t)(EDX));
  /* 122a4009 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a400c push eax */
  push32((uint32_t)(EAX));
  /* 122a400d call 0x122a4360 */
  push32(0x122a4012u); f_122a4360();
  /* 122a4012 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4015 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_122a4018:;
  /* 122a4018 cmp dword ptr [0x122c0964], 2 */
  { uint32_t _a=(r32((uint32_t)(0x122c0964))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a401f jne 0x122a4044 */
  if (!C.zf) goto L_122a4044;
  /* 122a4021 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122a4024 push ecx */
  push32((uint32_t)(ECX));
  /* 122a4025 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a4028 push edx */
  push32((uint32_t)(EDX));
  /* 122a4029 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a402c push eax */
  push32((uint32_t)(EAX));
  /* 122a402d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a4030 push ecx */
  push32((uint32_t)(ECX));
  /* 122a4031 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a4034 push edx */
  push32((uint32_t)(EDX));
  /* 122a4035 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a4038 push eax */
  push32((uint32_t)(EAX));
  /* 122a4039 call dword ptr [0x122c325c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c325c))), 0x122a403fu);
  /* 122a403f jmp 0x122a4344 */
  goto L_122a4344;
L_122a4044:;
  /* 122a4044 cmp dword ptr [0x122c0964], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c0964))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a404b jne 0x122a4342 */
  if (!C.zf) goto L_122a4342;
  /* 122a4051 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4055 jne 0x122a4060 */
  if (!C.zf) goto L_122a4060;
  /* 122a4057 mov ecx, dword ptr [0x122c0810] */
  ECX = (r32((uint32_t)(0x122c0810)));
  /* 122a405d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_122a4060:;
  /* 122a4060 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4064 je 0x122a4070 */
  if (C.zf) goto L_122a4070;
  /* 122a4066 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a406a jne 0x122a41ec */
  if (!C.zf) goto L_122a41ec;
L_122a4070:;
  /* 122a4070 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a4073 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4076 jne 0x122a4082 */
  if (!C.zf) goto L_122a4082;
  /* 122a4078 mov eax, 2 */
  EAX = (0x2u);
  /* 122a407d jmp 0x122a4344 */
  goto L_122a4344;
L_122a4082:;
  /* 122a4082 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4086 jle 0x122a4092 */
  if ((C.zf||C.sf!=C.of)) goto L_122a4092;
  /* 122a4088 mov eax, 1 */
  EAX = (0x1u);
  /* 122a408d jmp 0x122a4344 */
  goto L_122a4344;
L_122a4092:;
  /* 122a4092 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4096 jle 0x122a40a2 */
  if ((C.zf||C.sf!=C.of)) goto L_122a40a2;
  /* 122a4098 mov eax, 3 */
  EAX = (0x3u);
  /* 122a409d jmp 0x122a4344 */
  goto L_122a4344;
L_122a40a2:;
  /* 122a40a2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 122a40a5 push eax */
  push32((uint32_t)(EAX));
  /* 122a40a6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 122a40a9 push ecx */
  push32((uint32_t)(ECX));
  /* 122a40aa call dword ptr [0x122c3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3330))), 0x122a40b0u);
  /* 122a40b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a40b2 jne 0x122a40bb */
  if (!C.zf) goto L_122a40bb;
  /* 122a40b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a40b6 jmp 0x122a4344 */
  goto L_122a4344;
L_122a40bb:;
  /* 122a40bb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a40bf jne 0x122a40c7 */
  if (!C.zf) goto L_122a40c7;
  /* 122a40c1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a40c5 je 0x122a40f4 */
  if (C.zf) goto L_122a40f4;
L_122a40c7:;
  /* 122a40c7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a40cb jne 0x122a40d3 */
  if (!C.zf) goto L_122a40d3;
  /* 122a40cd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a40d1 je 0x122a40f4 */
  if (C.zf) goto L_122a40f4;
L_122a40d3:;
  /* 122a40d3 push 0x122bcc50 */
  push32((uint32_t)(0x122bcc50u));
  /* 122a40d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122a40da push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 122a40df push 0x122bcc48 */
  push32((uint32_t)(0x122bcc48u));
  /* 122a40e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a40e6 call 0x12293470 */
  push32(0x122a40ebu); f_12293470();
  /* 122a40eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a40ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a40f1 jne 0x122a40f4 */
  if (!C.zf) goto L_122a40f4;
  /* 122a40f3 int3  */
  x86_unimpl("int3 @ 0x122a40f3");
L_122a40f4:;
  /* 122a40f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a40f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a40f8 jne 0x122a40bb */
  if (!C.zf) goto L_122a40bb;
  /* 122a40fa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a40fe jle 0x122a4173 */
  if ((C.zf||C.sf!=C.of)) goto L_122a4173;
  /* 122a4100 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4104 jae 0x122a4110 */
  if (!C.cf) goto L_122a4110;
  /* 122a4106 mov eax, 3 */
  EAX = (0x3u);
  /* 122a410b jmp 0x122a4344 */
  goto L_122a4344;
L_122a4110:;
  /* 122a4110 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 122a4113 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 122a4116 jmp 0x122a4121 */
  goto L_122a4121;
L_122a4118:;
  /* 122a4118 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 122a411b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a411e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_122a4121:;
  /* 122a4121 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 122a4124 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a4126 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a4128 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a412a je 0x122a4169 */
  if (C.zf) goto L_122a4169;
  /* 122a412c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 122a412f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a4131 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 122a4134 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a4136 je 0x122a4169 */
  if (C.zf) goto L_122a4169;
  /* 122a4138 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a413b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a413d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122a413f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 122a4142 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a4144 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a4146 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4148 jl 0x122a4167 */
  if ((C.sf!=C.of)) goto L_122a4167;
  /* 122a414a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a414d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a414f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122a4151 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 122a4154 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a4156 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 122a4159 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a415b jg 0x122a4167 */
  if ((!C.zf&&C.sf==C.of)) goto L_122a4167;
  /* 122a415d mov eax, 2 */
  EAX = (0x2u);
  /* 122a4162 jmp 0x122a4344 */
  goto L_122a4344;
L_122a4167:;
  /* 122a4167 jmp 0x122a4118 */
  goto L_122a4118;
L_122a4169:;
  /* 122a4169 mov eax, 3 */
  EAX = (0x3u);
  /* 122a416e jmp 0x122a4344 */
  goto L_122a4344;
L_122a4173:;
  /* 122a4173 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4177 jle 0x122a41ec */
  if ((C.zf||C.sf!=C.of)) goto L_122a41ec;
  /* 122a4179 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a417d jae 0x122a4189 */
  if (!C.cf) goto L_122a4189;
  /* 122a417f mov eax, 1 */
  EAX = (0x1u);
  /* 122a4184 jmp 0x122a4344 */
  goto L_122a4344;
L_122a4189:;
  /* 122a4189 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 122a418c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 122a418f jmp 0x122a419a */
  goto L_122a419a;
L_122a4191:;
  /* 122a4191 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 122a4194 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4197 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_122a419a:;
  /* 122a419a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 122a419d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a419f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122a41a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a41a3 je 0x122a41e2 */
  if (C.zf) goto L_122a41e2;
  /* 122a41a5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 122a41a8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a41aa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 122a41ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a41af je 0x122a41e2 */
  if (C.zf) goto L_122a41e2;
  /* 122a41b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a41b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a41b6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122a41b8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 122a41bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122a41bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122a41bf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a41c1 jl 0x122a41e0 */
  if ((C.sf!=C.of)) goto L_122a41e0;
  /* 122a41c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a41c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a41c8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122a41ca mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 122a41cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a41cf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 122a41d2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a41d4 jg 0x122a41e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_122a41e0;
  /* 122a41d6 mov eax, 2 */
  EAX = (0x2u);
  /* 122a41db jmp 0x122a4344 */
  goto L_122a4344;
L_122a41e0:;
  /* 122a41e0 jmp 0x122a4191 */
  goto L_122a4191;
L_122a41e2:;
  /* 122a41e2 mov eax, 1 */
  EAX = (0x1u);
  /* 122a41e7 jmp 0x122a4344 */
  goto L_122a4344;
L_122a41ec:;
  /* 122a41ec push 0 */
  push32((uint32_t)(0x0u));
  /* 122a41ee push 0 */
  push32((uint32_t)(0x0u));
  /* 122a41f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a41f3 push ecx */
  push32((uint32_t)(ECX));
  /* 122a41f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a41f7 push edx */
  push32((uint32_t)(EDX));
  /* 122a41f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 122a41fa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 122a41fd push eax */
  push32((uint32_t)(EAX));
  /* 122a41fe call dword ptr [0x122c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3354))), 0x122a4204u);
  /* 122a4204 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 122a4207 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a420b jne 0x122a4214 */
  if (!C.zf) goto L_122a4214;
  /* 122a420d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a420f jmp 0x122a4344 */
  goto L_122a4344;
L_122a4214:;
  /* 122a4214 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122a421b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122a421e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122a4220 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4223 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122a4225 call 0x12297550 */
  push32(0x122a422au); f_12297550();
  /* 122a422a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 122a422d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122a4230 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 122a4233 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 122a4236 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122a423d jmp 0x122a4256 */
  goto L_122a4256;
  /* 122a423f mov eax, 1 */
  EAX = (0x1u);
  /* 122a4244 ret  */
  ESPCHK(0x122a3f60u, _esp0);
  ESP += 4; return;
  /* 122a4245 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122a4248 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 122a424f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122a4256:;
  /* 122a4256 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a425a jne 0x122a4263 */
  if (!C.zf) goto L_122a4263;
  /* 122a425c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a425e jmp 0x122a4344 */
  goto L_122a4344;
L_122a4263:;
  /* 122a4263 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122a4266 push edx */
  push32((uint32_t)(EDX));
  /* 122a4267 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122a426a push eax */
  push32((uint32_t)(EAX));
  /* 122a426b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122a426e push ecx */
  push32((uint32_t)(ECX));
  /* 122a426f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122a4272 push edx */
  push32((uint32_t)(EDX));
  /* 122a4273 push 1 */
  push32((uint32_t)(0x1u));
  /* 122a4275 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 122a4278 push eax */
  push32((uint32_t)(EAX));
  /* 122a4279 call dword ptr [0x122c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3354))), 0x122a427fu);
  /* 122a427f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a4281 jne 0x122a428a */
  if (!C.zf) goto L_122a428a;
  /* 122a4283 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a4285 jmp 0x122a4344 */
  goto L_122a4344;
L_122a428a:;
  /* 122a428a push 0 */
  push32((uint32_t)(0x0u));
  /* 122a428c push 0 */
  push32((uint32_t)(0x0u));
  /* 122a428e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122a4291 push ecx */
  push32((uint32_t)(ECX));
  /* 122a4292 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a4295 push edx */
  push32((uint32_t)(EDX));
  /* 122a4296 push 9 */
  push32((uint32_t)(0x9u));
  /* 122a4298 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 122a429b push eax */
  push32((uint32_t)(EAX));
  /* 122a429c call dword ptr [0x122c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3354))), 0x122a42a2u);
  /* 122a42a2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 122a42a5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a42a9 jne 0x122a42b2 */
  if (!C.zf) goto L_122a42b2;
  /* 122a42ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a42ad jmp 0x122a4344 */
  goto L_122a4344;
L_122a42b2:;
  /* 122a42b2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122a42b9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122a42bc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122a42be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a42c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122a42c3 call 0x12297550 */
  push32(0x122a42c8u); f_12297550();
  /* 122a42c8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 122a42cb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122a42ce mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 122a42d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 122a42d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122a42db jmp 0x122a42f4 */
  goto L_122a42f4;
  /* 122a42dd mov eax, 1 */
  EAX = (0x1u);
  /* 122a42e2 ret  */
  ESPCHK(0x122a3f60u, _esp0);
  ESP += 4; return;
  /* 122a42e3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122a42e6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 122a42ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122a42f4:;
  /* 122a42f4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a42f8 jne 0x122a42fe */
  if (!C.zf) goto L_122a42fe;
  /* 122a42fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a42fc jmp 0x122a4344 */
  goto L_122a4344;
L_122a42fe:;
  /* 122a42fe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 122a4301 push edx */
  push32((uint32_t)(EDX));
  /* 122a4302 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122a4305 push eax */
  push32((uint32_t)(EAX));
  /* 122a4306 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122a4309 push ecx */
  push32((uint32_t)(ECX));
  /* 122a430a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122a430d push edx */
  push32((uint32_t)(EDX));
  /* 122a430e push 1 */
  push32((uint32_t)(0x1u));
  /* 122a4310 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 122a4313 push eax */
  push32((uint32_t)(EAX));
  /* 122a4314 call dword ptr [0x122c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3354))), 0x122a431au);
  /* 122a431a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a431c jne 0x122a4322 */
  if (!C.zf) goto L_122a4322;
  /* 122a431e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a4320 jmp 0x122a4344 */
  goto L_122a4344;
L_122a4322:;
  /* 122a4322 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122a4325 push ecx */
  push32((uint32_t)(ECX));
  /* 122a4326 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122a4329 push edx */
  push32((uint32_t)(EDX));
  /* 122a432a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122a432d push eax */
  push32((uint32_t)(EAX));
  /* 122a432e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122a4331 push ecx */
  push32((uint32_t)(ECX));
  /* 122a4332 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a4335 push edx */
  push32((uint32_t)(EDX));
  /* 122a4336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a4339 push eax */
  push32((uint32_t)(EAX));
  /* 122a433a call dword ptr [0x122c3250] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3250))), 0x122a4340u);
  /* 122a4340 jmp 0x122a4344 */
  goto L_122a4344;
L_122a4342:;
  /* 122a4342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122a4344:;
  /* 122a4344 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 122a4347 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a434a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 122a4351 pop edi */
  EDI = (pop32());
  /* 122a4352 pop esi */
  ESI = (pop32());
  /* 122a4353 pop ebx */
  EBX = (pop32());
  /* 122a4354 mov esp, ebp */
  ESP = (EBP);
  /* 122a4356 pop ebp */
  EBP = (pop32());
  /* 122a4357 ret  */
  ESPCHK(0x122a3f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014360 @ 0x122a4360 (80 bytes, 32 insns) */
void f_122a4360(void) {
  FTRACE(0x122a4360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a4360 push ebp */
  push32((uint32_t)(EBP));
  /* 122a4361 mov ebp, esp */
  EBP = (ESP);
  /* 122a4363 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a4366 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a4369 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122a436c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a436f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122a4372:;
  /* 122a4372 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a4375 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a4378 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a437b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122a437e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a4380 je 0x122a4397 */
  if (C.zf) goto L_122a4397;
  /* 122a4382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a4385 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122a4388 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a438a je 0x122a4397 */
  if (C.zf) goto L_122a4397;
  /* 122a438c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a438f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4392 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a4395 jmp 0x122a4372 */
  goto L_122a4372;
L_122a4397:;
  /* 122a4397 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a439a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122a439d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a439f jne 0x122a43a9 */
  if (!C.zf) goto L_122a43a9;
  /* 122a43a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a43a4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a43a7 jmp 0x122a43ac */
  goto L_122a43ac;
L_122a43a9:;
  /* 122a43a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_122a43ac:;
  /* 122a43ac mov esp, ebp */
  ESP = (EBP);
  /* 122a43ae pop ebp */
  EBP = (pop32());
  /* 122a43af ret  */
  ESPCHK(0x122a4360u, _esp0);
  ESP += 4; return;
}

/* FUN_100143b0 @ 0x122a43b0 (736 bytes, 224 insns) */
void f_122a43b0(void) {
  FTRACE(0x122a43b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a43b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122a43b1 mov ebp, esp */
  EBP = (ESP);
  /* 122a43b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a43b6 push esi */
  push32((uint32_t)(ESI));
  /* 122a43b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a43bb je 0x122a43dc */
  if (C.zf) goto L_122a43dc;
  /* 122a43bd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 122a43bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a43c2 push eax */
  push32((uint32_t)(EAX));
  /* 122a43c3 call 0x122a4800 */
  push32(0x122a43c8u); f_122a4800();
  /* 122a43c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a43cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122a43ce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a43d2 je 0x122a43dc */
  if (C.zf) goto L_122a43dc;
  /* 122a43d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a43d7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a43da jne 0x122a43e4 */
  if (!C.zf) goto L_122a43e4;
L_122a43dc:;
  /* 122a43dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a43df jmp 0x122a468b */
  goto L_122a468b;
L_122a43e4:;
  /* 122a43e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122a43e7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 122a43eb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a43ed sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a43ef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 122a43f0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122a43f3 mov ecx, dword ptr [0x122c061c] */
  ECX = (r32((uint32_t)(0x122c061c)));
  /* 122a43f9 cmp ecx, dword ptr [0x122c0620] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122c0620))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a43ff jne 0x122a4415 */
  if (!C.zf) goto L_122a4415;
  /* 122a4401 mov edx, dword ptr [0x122c061c] */
  EDX = (r32((uint32_t)(0x122c061c)));
  /* 122a4407 push edx */
  push32((uint32_t)(EDX));
  /* 122a4408 call 0x122a4710 */
  push32(0x122a440du); f_122a4710();
  /* 122a440d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4410 mov dword ptr [0x122c061c], eax */
  w32((uint32_t)(0x122c061c), (EAX));
L_122a4415:;
  /* 122a4415 cmp dword ptr [0x122c061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a441c jne 0x122a44d5 */
  if (!C.zf) goto L_122a44d5;
  /* 122a4422 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4426 je 0x122a4447 */
  if (C.zf) goto L_122a4447;
  /* 122a4428 cmp dword ptr [0x122c0624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a442f je 0x122a4447 */
  if (C.zf) goto L_122a4447;
  /* 122a4431 call 0x122a3eb0 */
  push32(0x122a4436u); f_122a3eb0();
  /* 122a4436 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a4438 je 0x122a4442 */
  if (C.zf) goto L_122a4442;
  /* 122a443a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a443d jmp 0x122a468b */
  goto L_122a468b;
L_122a4442:;
  /* 122a4442 jmp 0x122a44d5 */
  goto L_122a44d5;
L_122a4447:;
  /* 122a4447 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a444b je 0x122a4454 */
  if (C.zf) goto L_122a4454;
  /* 122a444d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a444f jmp 0x122a468b */
  goto L_122a468b;
L_122a4454:;
  /* 122a4454 cmp dword ptr [0x122c061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a445b jne 0x122a4494 */
  if (!C.zf) goto L_122a4494;
  /* 122a445d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 122a4462 push 0x122bcca8 */
  push32((uint32_t)(0x122bcca8u));
  /* 122a4467 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a4469 push 4 */
  push32((uint32_t)(0x4u));
  /* 122a446b call 0x122943b0 */
  push32(0x122a4470u); f_122943b0();
  /* 122a4470 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4473 mov dword ptr [0x122c061c], eax */
  w32((uint32_t)(0x122c061c), (EAX));
  /* 122a4478 cmp dword ptr [0x122c061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a447f jne 0x122a4489 */
  if (!C.zf) goto L_122a4489;
  /* 122a4481 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a4484 jmp 0x122a468b */
  goto L_122a468b;
L_122a4489:;
  /* 122a4489 mov eax, dword ptr [0x122c061c] */
  EAX = (r32((uint32_t)(0x122c061c)));
  /* 122a448e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_122a4494:;
  /* 122a4494 cmp dword ptr [0x122c0624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a449b jne 0x122a44d5 */
  if (!C.zf) goto L_122a44d5;
  /* 122a449d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 122a44a2 push 0x122bcca8 */
  push32((uint32_t)(0x122bcca8u));
  /* 122a44a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a44a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 122a44ab call 0x122943b0 */
  push32(0x122a44b0u); f_122943b0();
  /* 122a44b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a44b3 mov dword ptr [0x122c0624], eax */
  w32((uint32_t)(0x122c0624), (EAX));
  /* 122a44b8 cmp dword ptr [0x122c0624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a44bf jne 0x122a44c9 */
  if (!C.zf) goto L_122a44c9;
  /* 122a44c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a44c4 jmp 0x122a468b */
  goto L_122a468b;
L_122a44c9:;
  /* 122a44c9 mov ecx, dword ptr [0x122c0624] */
  ECX = (r32((uint32_t)(0x122c0624)));
  /* 122a44cf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_122a44d5:;
  /* 122a44d5 mov edx, dword ptr [0x122c061c] */
  EDX = (r32((uint32_t)(0x122c061c)));
  /* 122a44db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122a44de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122a44e1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a44e4 push eax */
  push32((uint32_t)(EAX));
  /* 122a44e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a44e8 push ecx */
  push32((uint32_t)(ECX));
  /* 122a44e9 call 0x122a4690 */
  push32(0x122a44eeu); f_122a4690();
  /* 122a44ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a44f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122a44f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a44f8 jl 0x122a4591 */
  if ((C.sf!=C.of)) goto L_122a4591;
  /* 122a44fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a4501 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4504 je 0x122a4591 */
  if (C.zf) goto L_122a4591;
  /* 122a450a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a450e je 0x122a4583 */
  if (C.zf) goto L_122a4583;
  /* 122a4510 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a4512 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a4515 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a4518 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 122a451b push edx */
  push32((uint32_t)(EDX));
  /* 122a451c call 0x12294e40 */
  push32(0x122a4521u); f_12294e40();
  /* 122a4521 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4524 jmp 0x122a452f */
  goto L_122a452f;
L_122a4526:;
  /* 122a4526 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a4529 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a452c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122a452f:;
  /* 122a452f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a4532 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a4535 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4539 je 0x122a4550 */
  if (C.zf) goto L_122a4550;
  /* 122a453b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a453e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a4541 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a4544 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 122a4547 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 122a454b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 122a454e jmp 0x122a4526 */
  goto L_122a4526;
L_122a4550:;
  /* 122a4550 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 122a4555 push 0x122bcca8 */
  push32((uint32_t)(0x122bcca8u));
  /* 122a455a push 2 */
  push32((uint32_t)(0x2u));
  /* 122a455c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a455f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 122a4562 push eax */
  push32((uint32_t)(EAX));
  /* 122a4563 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a4566 push ecx */
  push32((uint32_t)(ECX));
  /* 122a4567 call 0x12294840 */
  push32(0x122a456cu); f_12294840();
  /* 122a456c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a456f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122a4572 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4576 je 0x122a4581 */
  if (C.zf) goto L_122a4581;
  /* 122a4578 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a457b mov dword ptr [0x122c061c], edx */
  w32((uint32_t)(0x122c061c), (EDX));
L_122a4581:;
  /* 122a4581 jmp 0x122a458f */
  goto L_122a458f;
L_122a4583:;
  /* 122a4583 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a4586 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a4589 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a458c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_122a458f:;
  /* 122a458f jmp 0x122a4604 */
  goto L_122a4604;
L_122a4591:;
  /* 122a4591 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4595 jne 0x122a45fd */
  if (!C.zf) goto L_122a45fd;
  /* 122a4597 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a459b jge 0x122a45a5 */
  if ((C.sf==C.of)) goto L_122a45a5;
  /* 122a459d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a45a0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a45a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122a45a5:;
  /* 122a45a5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 122a45aa push 0x122bcca8 */
  push32((uint32_t)(0x122bcca8u));
  /* 122a45af push 2 */
  push32((uint32_t)(0x2u));
  /* 122a45b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a45b4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 122a45bb push edx */
  push32((uint32_t)(EDX));
  /* 122a45bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a45bf push eax */
  push32((uint32_t)(EAX));
  /* 122a45c0 call 0x12294840 */
  push32(0x122a45c5u); f_12294840();
  /* 122a45c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a45c8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122a45cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a45cf jne 0x122a45d9 */
  if (!C.zf) goto L_122a45d9;
  /* 122a45d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a45d4 jmp 0x122a468b */
  goto L_122a468b;
L_122a45d9:;
  /* 122a45d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a45dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a45df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a45e2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 122a45e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a45e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a45eb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 122a45f3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a45f6 mov dword ptr [0x122c061c], eax */
  w32((uint32_t)(0x122c061c), (EAX));
  /* 122a45fb jmp 0x122a4604 */
  goto L_122a4604;
L_122a45fd:;
  /* 122a45fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a45ff jmp 0x122a468b */
  goto L_122a468b;
L_122a4604:;
  /* 122a4604 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4608 je 0x122a4689 */
  if (C.zf) goto L_122a4689;
  /* 122a460a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 122a460f push 0x122bcca8 */
  push32((uint32_t)(0x122bcca8u));
  /* 122a4614 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a4616 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a4619 push ecx */
  push32((uint32_t)(ECX));
  /* 122a461a call 0x122971e0 */
  push32(0x122a461fu); f_122971e0();
  /* 122a461f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4622 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4625 push eax */
  push32((uint32_t)(EAX));
  /* 122a4626 call 0x122943b0 */
  push32(0x122a462bu); f_122943b0();
  /* 122a462b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a462e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122a4631 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4635 je 0x122a4689 */
  if (C.zf) goto L_122a4689;
  /* 122a4637 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a463a push edx */
  push32((uint32_t)(EDX));
  /* 122a463b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a463e push eax */
  push32((uint32_t)(EAX));
  /* 122a463f call 0x12297360 */
  push32(0x122a4644u); f_12297360();
  /* 122a4644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4647 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122a464a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a464d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a4650 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4652 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122a4655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a4658 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 122a465b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a465e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4661 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122a4664 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122a4667 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122a4669 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a466b not edx */
  EDX = (~(EDX));
  /* 122a466d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 122a4670 push edx */
  push32((uint32_t)(EDX));
  /* 122a4671 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a4674 push eax */
  push32((uint32_t)(EAX));
  /* 122a4675 call dword ptr [0x122c324c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c324c))), 0x122a467bu);
  /* 122a467b push 2 */
  push32((uint32_t)(0x2u));
  /* 122a467d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a4680 push ecx */
  push32((uint32_t)(ECX));
  /* 122a4681 call 0x12294e40 */
  push32(0x122a4686u); f_12294e40();
  /* 122a4686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a4689:;
  /* 122a4689 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122a468b:;
  /* 122a468b pop esi */
  ESI = (pop32());
  /* 122a468c mov esp, ebp */
  ESP = (EBP);
  /* 122a468e pop ebp */
  EBP = (pop32());
  /* 122a468f ret  */
  ESPCHK(0x122a43b0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x122a4690 (124 bytes, 47 insns) */
void f_122a4690(void) {
  FTRACE(0x122a4690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a4690 push ebp */
  push32((uint32_t)(EBP));
  /* 122a4691 mov ebp, esp */
  EBP = (ESP);
  /* 122a4693 push ecx */
  push32((uint32_t)(ECX));
  /* 122a4694 mov eax, dword ptr [0x122c061c] */
  EAX = (r32((uint32_t)(0x122c061c)));
  /* 122a4699 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122a469c jmp 0x122a46a7 */
  goto L_122a46a7;
L_122a469e:;
  /* 122a469e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a46a1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a46a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122a46a7:;
  /* 122a46a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a46aa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a46ad je 0x122a46fa */
  if (C.zf) goto L_122a46fa;
  /* 122a46af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a46b2 push eax */
  push32((uint32_t)(EAX));
  /* 122a46b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a46b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a46b8 push edx */
  push32((uint32_t)(EDX));
  /* 122a46b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a46bc push eax */
  push32((uint32_t)(EAX));
  /* 122a46bd call 0x122a3e60 */
  push32(0x122a46c2u); f_122a3e60();
  /* 122a46c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a46c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122a46c7 jne 0x122a46f8 */
  if (!C.zf) goto L_122a46f8;
  /* 122a46c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a46cc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a46ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a46d1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 122a46d5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a46d8 je 0x122a46ea */
  if (C.zf) goto L_122a46ea;
  /* 122a46da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a46dd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a46df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a46e2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 122a46e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a46e8 jne 0x122a46f8 */
  if (!C.zf) goto L_122a46f8;
L_122a46ea:;
  /* 122a46ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a46ed sub eax, dword ptr [0x122c061c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122c061c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a46f3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 122a46f6 jmp 0x122a4708 */
  goto L_122a4708;
L_122a46f8:;
  /* 122a46f8 jmp 0x122a469e */
  goto L_122a469e;
L_122a46fa:;
  /* 122a46fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a46fd sub eax, dword ptr [0x122c061c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122c061c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a4703 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 122a4706 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_122a4708:;
  /* 122a4708 mov esp, ebp */
  ESP = (EBP);
  /* 122a470a pop ebp */
  EBP = (pop32());
  /* 122a470b ret  */
  ESPCHK(0x122a4690u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x122a4710 (238 bytes, 80 insns) */
void f_122a4710(void) {
  FTRACE(0x122a4710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a4710 push ebp */
  push32((uint32_t)(EBP));
  /* 122a4711 mov ebp, esp */
  EBP = (ESP);
  /* 122a4713 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a4716 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122a471d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a4720 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122a4723 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4727 jne 0x122a4730 */
  if (!C.zf) goto L_122a4730;
  /* 122a4729 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a472b jmp 0x122a47fa */
  goto L_122a47fa;
L_122a4730:;
  /* 122a4730 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a4733 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a4735 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a4738 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a473b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122a473e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a4740 je 0x122a474d */
  if (C.zf) goto L_122a474d;
  /* 122a4742 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a4745 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4748 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122a474b jmp 0x122a4730 */
  goto L_122a4730;
L_122a474d:;
  /* 122a474d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 122a4752 push 0x122bcca8 */
  push32((uint32_t)(0x122bcca8u));
  /* 122a4757 push 2 */
  push32((uint32_t)(0x2u));
  /* 122a4759 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122a475c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 122a4763 push eax */
  push32((uint32_t)(EAX));
  /* 122a4764 call 0x122943b0 */
  push32(0x122a4769u); f_122943b0();
  /* 122a4769 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a476c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122a476f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a4772 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122a4775 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4779 jne 0x122a4785 */
  if (!C.zf) goto L_122a4785;
  /* 122a477b push 9 */
  push32((uint32_t)(0x9u));
  /* 122a477d call 0x12293320 */
  push32(0x122a4782u); f_12293320();
  /* 122a4782 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a4785:;
  /* 122a4785 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a4788 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122a478b:;
  /* 122a478b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a478e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a4791 je 0x122a47ee */
  if (C.zf) goto L_122a47ee;
  /* 122a4793 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 122a4798 push 0x122bcca8 */
  push32((uint32_t)(0x122bcca8u));
  /* 122a479d push 2 */
  push32((uint32_t)(0x2u));
  /* 122a479f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a47a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122a47a4 push edx */
  push32((uint32_t)(EDX));
  /* 122a47a5 call 0x122971e0 */
  push32(0x122a47aau); f_122971e0();
  /* 122a47aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a47ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a47b0 push eax */
  push32((uint32_t)(EAX));
  /* 122a47b1 call 0x122943b0 */
  push32(0x122a47b6u); f_122943b0();
  /* 122a47b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a47b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a47bc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122a47be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a47c1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a47c4 je 0x122a47da */
  if (C.zf) goto L_122a47da;
  /* 122a47c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a47c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122a47cb push ecx */
  push32((uint32_t)(ECX));
  /* 122a47cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a47cf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122a47d1 push eax */
  push32((uint32_t)(EAX));
  /* 122a47d2 call 0x12297360 */
  push32(0x122a47d7u); f_12297360();
  /* 122a47d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122a47da:;
  /* 122a47da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122a47dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a47e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122a47e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a47e6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a47e9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122a47ec jmp 0x122a478b */
  goto L_122a478b;
L_122a47ee:;
  /* 122a47ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122a47f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122a47f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122a47fa:;
  /* 122a47fa mov esp, ebp */
  ESP = (EBP);
  /* 122a47fc pop ebp */
  EBP = (pop32());
  /* 122a47fd ret  */
  ESPCHK(0x122a4710u, _esp0);
  ESP += 4; return;
}

/* FUN_10014800 @ 0x122a4800 (237 bytes, 81 insns) */
void f_122a4800(void) {
  FTRACE(0x122a4800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a4800 push ebp */
  push32((uint32_t)(EBP));
  /* 122a4801 mov ebp, esp */
  EBP = (ESP);
  /* 122a4803 push ecx */
  push32((uint32_t)(ECX));
  /* 122a4804 cmp dword ptr [0x122c1d6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c1d6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a480b jne 0x122a4822 */
  if (!C.zf) goto L_122a4822;
  /* 122a480d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122a4810 push eax */
  push32((uint32_t)(EAX));
  /* 122a4811 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a4814 push ecx */
  push32((uint32_t)(ECX));
  /* 122a4815 call 0x122a4900 */
  push32(0x122a481au); f_122a4900();
  /* 122a481a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a481d jmp 0x122a48e9 */
  goto L_122a48e9;
L_122a4822:;
  /* 122a4822 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122a4824 call 0x12297db0 */
  push32(0x122a4829u); f_12297db0();
  /* 122a4829 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a482c jmp 0x122a4837 */
  goto L_122a4837;
L_122a482e:;
  /* 122a482e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a4831 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4834 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_122a4837:;
  /* 122a4837 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a483a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 122a483e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 122a4842 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a4845 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122a484b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122a484d je 0x122a48cb */
  if (C.zf) goto L_122a48cb;
  /* 122a484f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a4852 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a4857 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a4859 mov cl, byte ptr [eax + 0x122c1e81] */
  CL = (r8((uint32_t)(EAX + 0x122c1e81)));
  /* 122a485f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 122a4862 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a4864 je 0x122a48b6 */
  if (C.zf) goto L_122a48b6;
  /* 122a4866 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a4869 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a486c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 122a486f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a4872 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a4874 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122a4876 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122a4878 jne 0x122a4888 */
  if (!C.zf) goto L_122a4888;
  /* 122a487a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122a487c call 0x12297e50 */
  push32(0x122a4881u); f_12297e50();
  /* 122a4881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a4886 jmp 0x122a48e9 */
  goto L_122a48e9;
L_122a4888:;
  /* 122a4888 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a488b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122a4891 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 122a4894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a4897 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122a4899 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122a489b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122a489d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a48a0 jne 0x122a48b4 */
  if (!C.zf) goto L_122a48b4;
  /* 122a48a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122a48a4 call 0x12297e50 */
  push32(0x122a48a9u); f_12297e50();
  /* 122a48a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a48ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a48af sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122a48b2 jmp 0x122a48e9 */
  goto L_122a48e9;
L_122a48b4:;
  /* 122a48b4 jmp 0x122a48c6 */
  goto L_122a48c6;
L_122a48b6:;
  /* 122a48b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a48b9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122a48bf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a48c2 jne 0x122a48c6 */
  if (!C.zf) goto L_122a48c6;
  /* 122a48c4 jmp 0x122a48cb */
  goto L_122a48cb;
L_122a48c6:;
  /* 122a48c6 jmp 0x122a482e */
  goto L_122a482e;
L_122a48cb:;
  /* 122a48cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122a48cd call 0x12297e50 */
  push32(0x122a48d2u); f_12297e50();
  /* 122a48d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122a48d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122a48d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a48dd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122a48e0 jne 0x122a48e7 */
  if (!C.zf) goto L_122a48e7;
  /* 122a48e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122a48e5 jmp 0x122a48e9 */
  goto L_122a48e9;
L_122a48e7:;
  /* 122a48e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122a48e9:;
  /* 122a48e9 mov esp, ebp */
  ESP = (EBP);
  /* 122a48eb pop ebp */
  EBP = (pop32());
  /* 122a48ec ret  */
  ESPCHK(0x122a4800u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x122a4900 (193 bytes, 87 insns) */
void f_122a4900(void) {
  FTRACE(0x122a4900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a4900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a4902 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 122a4906 push ebx */
  push32((uint32_t)(EBX));
  /* 122a4907 mov ebx, eax */
  EBX = (EAX);
  /* 122a4909 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 122a490c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 122a4910 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 122a4916 je 0x122a492b */
  if (C.zf) goto L_122a492b;
L_122a4918:;
  /* 122a4918 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 122a491a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 122a491b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a491d je 0x122a48f0 */
  if (C.zf) { jmp_ind(0x122a48f0u); return; }
  /* 122a491f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 122a4921 je 0x122a4974 */
  if (C.zf) goto L_122a4974;
  /* 122a4923 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 122a4929 jne 0x122a4918 */
  if (!C.zf) goto L_122a4918;
L_122a492b:;
  /* 122a492b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 122a492d push edi */
  push32((uint32_t)(EDI));
  /* 122a492e mov eax, ebx */
  EAX = (EBX);
  /* 122a4930 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 122a4933 push esi */
  push32((uint32_t)(ESI));
  /* 122a4934 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_122a4936:;
  /* 122a4936 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 122a4938 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 122a493d mov eax, ecx */
  EAX = (ECX);
  /* 122a493f mov esi, edi */
  ESI = (EDI);
  /* 122a4941 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 122a4943 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4945 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4947 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 122a494a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122a494d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 122a494f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 122a4951 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122a4954 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 122a495a jne 0x122a4978 */
  if (!C.zf) goto L_122a4978;
  /* 122a495c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 122a4961 je 0x122a4936 */
  if (C.zf) goto L_122a4936;
  /* 122a4963 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 122a4968 jne 0x122a4972 */
  if (!C.zf) goto L_122a4972;
  /* 122a496a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 122a4970 jne 0x122a4936 */
  if (!C.zf) goto L_122a4936;
L_122a4972:;
  /* 122a4972 pop esi */
  ESI = (pop32());
  /* 122a4973 pop edi */
  EDI = (pop32());
L_122a4974:;
  /* 122a4974 pop ebx */
  EBX = (pop32());
  /* 122a4975 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122a4977 ret  */
  ESPCHK(0x122a4900u, _esp0);
  ESP += 4; return;
L_122a4978:;
  /* 122a4978 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 122a497b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a497d je 0x122a49b5 */
  if (C.zf) goto L_122a49b5;
  /* 122a497f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 122a4981 je 0x122a4972 */
  if (C.zf) goto L_122a4972;
  /* 122a4983 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a4985 je 0x122a49ae */
  if (C.zf) goto L_122a49ae;
  /* 122a4987 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 122a4989 je 0x122a4972 */
  if (C.zf) goto L_122a4972;
  /* 122a498b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 122a498e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a4990 je 0x122a49a7 */
  if (C.zf) goto L_122a49a7;
  /* 122a4992 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 122a4994 je 0x122a4972 */
  if (C.zf) goto L_122a4972;
  /* 122a4996 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122a4998 je 0x122a49a0 */
  if (C.zf) goto L_122a49a0;
  /* 122a499a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 122a499c je 0x122a4972 */
  if (C.zf) goto L_122a4972;
  /* 122a499e jmp 0x122a4936 */
  goto L_122a4936;
L_122a49a0:;
  /* 122a49a0 pop esi */
  ESI = (pop32());
  /* 122a49a1 pop edi */
  EDI = (pop32());
  /* 122a49a2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 122a49a5 pop ebx */
  EBX = (pop32());
  /* 122a49a6 ret  */
  ESPCHK(0x122a4900u, _esp0);
  ESP += 4; return;
L_122a49a7:;
  /* 122a49a7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 122a49aa pop esi */
  ESI = (pop32());
  /* 122a49ab pop edi */
  EDI = (pop32());
  /* 122a49ac pop ebx */
  EBX = (pop32());
  /* 122a49ad ret  */
  ESPCHK(0x122a4900u, _esp0);
  ESP += 4; return;
L_122a49ae:;
  /* 122a49ae lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 122a49b1 pop esi */
  ESI = (pop32());
  /* 122a49b2 pop edi */
  EDI = (pop32());
  /* 122a49b3 pop ebx */
  EBX = (pop32());
  /* 122a49b4 ret  */
  ESPCHK(0x122a4900u, _esp0);
  ESP += 4; return;
L_122a49b5:;
  /* 122a49b5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 122a49b8 pop esi */
  ESI = (pop32());
  /* 122a49b9 pop edi */
  EDI = (pop32());
  /* 122a49ba pop ebx */
  EBX = (pop32());
  /* 122a49bb ret  */
  ESPCHK(0x122a4900u, _esp0);
  ESP += 4; return;
  /* 122a49bc jmp dword ptr [0x122c3290] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x122c3290)))); return;
}

/* RtlUnwind @ 0x122a4b0c (6 bytes, 1 insns) */
void f_122a4b0c(void) {
  FTRACE(0x122a4b0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122a4b0c jmp dword ptr [0x122c3284] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x122c3284)))); return;
}

