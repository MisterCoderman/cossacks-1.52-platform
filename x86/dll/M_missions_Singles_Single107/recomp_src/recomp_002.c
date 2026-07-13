#include "recomp.h"

/* FUN_100116f0 @ 0x110a16f0 (393 bytes, 123 insns) */
void f_110a16f0(void) {
  FTRACE(0x110a16f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a16f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a16f1 mov ebp, esp */
  EBP = (ESP);
  /* 110a16f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a16f6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a16fa jne 0x110a1706 */
  if (!C.zf) goto L_110a1706;
  /* 110a16fc mov eax, dword ptr [0x110bfc98] */
  EAX = (r32((uint32_t)(0x110bfc98)));
  /* 110a1701 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 110a1704 jmp 0x110a170c */
  goto L_110a170c;
L_110a1706:;
  /* 110a1706 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a1709 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_110a170c:;
  /* 110a170c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a170f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110a1712 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1715 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110a1718 push 0x110c098c */
  push32((uint32_t)(0x110c098cu));
  /* 110a171d call dword ptr [0x110c32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32b4))), 0x110a1723u);
  /* 110a1723 cmp dword ptr [0x110c097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a172a je 0x110a174a */
  if (C.zf) goto L_110a174a;
  /* 110a172c push 0x110c098c */
  push32((uint32_t)(0x110c098cu));
  /* 110a1731 call dword ptr [0x110c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a4))), 0x110a1737u);
  /* 110a1737 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110a1739 call 0x11097db0 */
  push32(0x110a173eu); f_11097db0();
  /* 110a173e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1741 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 110a1748 jmp 0x110a1751 */
  goto L_110a1751;
L_110a174a:;
  /* 110a174a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_110a1751:;
  /* 110a1751 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1755 jbe 0x110a1842 */
  if ((C.cf||C.zf)) goto L_110a1842;
  /* 110a175b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a175e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110a1760 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 110a1763 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a1767 je 0x110a1771 */
  if (C.zf) goto L_110a1771;
  /* 110a1769 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a176d je 0x110a1776 */
  if (C.zf) goto L_110a1776;
  /* 110a176f jmp 0x110a17d0 */
  goto L_110a17d0;
L_110a1771:;
  /* 110a1771 jmp 0x110a1842 */
  goto L_110a1842;
L_110a1776:;
  /* 110a1776 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1779 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a177c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 110a177f mov dword ptr [0x110c0968], 0 */
  w32((uint32_t)(0x110c0968), (0x0u));
  /* 110a1789 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a178c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110a178f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1792 jne 0x110a17a7 */
  if (!C.zf) goto L_110a17a7;
  /* 110a1794 mov dword ptr [0x110c0968], 1 */
  w32((uint32_t)(0x110c0968), (0x1u));
  /* 110a179e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a17a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a17a4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_110a17a7:;
  /* 110a17a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a17aa push ecx */
  push32((uint32_t)(ECX));
  /* 110a17ab lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 110a17ae push edx */
  push32((uint32_t)(EDX));
  /* 110a17af lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 110a17b2 push eax */
  push32((uint32_t)(EAX));
  /* 110a17b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a17b6 push ecx */
  push32((uint32_t)(ECX));
  /* 110a17b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a17ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a17bc push eax */
  push32((uint32_t)(EAX));
  /* 110a17bd call 0x110a1880 */
  push32(0x110a17c2u); f_110a1880();
  /* 110a17c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a17c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a17c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a17cb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 110a17ce jmp 0x110a183d */
  goto L_110a183d;
L_110a17d0:;
  /* 110a17d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a17d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a17d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a17d7 mov ecx, dword ptr [0x110bec98] */
  ECX = (r32((uint32_t)(0x110bec98)));
  /* 110a17dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a17df mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 110a17e3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 110a17e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a17eb je 0x110a1818 */
  if (C.zf) goto L_110a1818;
  /* 110a17ed cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a17f1 jbe 0x110a1818 */
  if ((C.cf||C.zf)) goto L_110a1818;
  /* 110a17f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a17f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a17f9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110a17fb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 110a17fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a1800 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1803 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110a1806 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1809 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a180c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 110a180f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1812 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1815 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_110a1818:;
  /* 110a1818 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a181b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a181e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110a1820 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 110a1822 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a1825 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1828 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110a182b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a182e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1831 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 110a1834 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1837 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a183a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_110a183d:;
  /* 110a183d jmp 0x110a1751 */
  goto L_110a1751;
L_110a1842:;
  /* 110a1842 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1846 je 0x110a1854 */
  if (C.zf) goto L_110a1854;
  /* 110a1848 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110a184a call 0x11097e50 */
  push32(0x110a184fu); f_11097e50();
  /* 110a184f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1852 jmp 0x110a185f */
  goto L_110a185f;
L_110a1854:;
  /* 110a1854 push 0x110c098c */
  push32((uint32_t)(0x110c098cu));
  /* 110a1859 call dword ptr [0x110c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a4))), 0x110a185fu);
L_110a185f:;
  /* 110a185f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1863 jbe 0x110a1873 */
  if ((C.cf||C.zf)) goto L_110a1873;
  /* 110a1865 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a1868 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 110a186b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a186e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1871 jmp 0x110a1875 */
  goto L_110a1875;
L_110a1873:;
  /* 110a1873 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110a1875:;
  /* 110a1875 mov esp, ebp */
  ESP = (EBP);
  /* 110a1877 pop ebp */
  EBP = (pop32());
  /* 110a1878 ret  */
  ESPCHK(0x110a16f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011880 @ 0x110a1880 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_110a1880(void) {
  FTRACE(0x110a1880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a1880 push ebp */
  push32((uint32_t)(EBP));
  /* 110a1881 mov ebp, esp */
  EBP = (ESP);
  /* 110a1883 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1886 push esi */
  push32((uint32_t)(ESI));
  /* 110a1887 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 110a188b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110a188e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a1891 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1894 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110a1897 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a189b ja 0x110a1de8 */
  if ((!C.cf&&!C.zf)) goto L_110a1de8;
  /* 110a18a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a18a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a18a6 mov dl, byte ptr [eax + 0x110a1e49] */
  DL = (r8((uint32_t)(EAX + 0x110a1e49)));
  /* 110a18ac jmp dword ptr [edx*4 + 0x110a1ded] */
  switch (EDX) {
    case 0: goto L_110a1dc6;
    case 1: goto L_110a18d5;
    case 2: goto L_110a191b;
    case 3: goto L_110a1a68;
    case 4: goto L_110a1a90;
    case 5: goto L_110a1b2f;
    case 6: goto L_110a1b9b;
    case 7: goto L_110a1bc4;
    case 8: goto L_110a1c05;
    case 9: goto L_110a1ce7;
    case 10: goto L_110a1d4e;
    case 11: goto L_110a1d9b;
    case 12: goto L_110a18b3;
    case 13: goto L_110a18f8;
    case 14: goto L_110a193e;
    case 15: goto L_110a1a3e;
    case 16: goto L_110a1ad5;
    case 17: goto L_110a1b02;
    case 18: goto L_110a1b57;
    case 19: goto L_110a1bdb;
    case 20: goto L_110a1c89;
    case 21: goto L_110a1d18;
    case 22: goto L_110a1de8;
    default: x86_unimpl("switch@0x110a18ac out of table"); return;
  }
L_110a18b3:;
  /* 110a18b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a18b6 push ecx */
  push32((uint32_t)(ECX));
  /* 110a18b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a18ba push edx */
  push32((uint32_t)(EDX));
  /* 110a18bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a18be mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 110a18c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a18c4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 110a18c7 push eax */
  push32((uint32_t)(EAX));
  /* 110a18c8 call 0x110a1ea0 */
  push32(0x110a18cdu); f_110a1ea0();
  /* 110a18cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a18d0 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a18d5:;
  /* 110a18d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a18d8 push ecx */
  push32((uint32_t)(ECX));
  /* 110a18d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a18dc push edx */
  push32((uint32_t)(EDX));
  /* 110a18dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a18e0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 110a18e3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a18e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 110a18ea push eax */
  push32((uint32_t)(EAX));
  /* 110a18eb call 0x110a1ea0 */
  push32(0x110a18f0u); f_110a1ea0();
  /* 110a18f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a18f3 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a18f8:;
  /* 110a18f8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a18fb push ecx */
  push32((uint32_t)(ECX));
  /* 110a18fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a18ff push edx */
  push32((uint32_t)(EDX));
  /* 110a1900 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1903 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 110a1906 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a1909 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 110a190d push eax */
  push32((uint32_t)(EAX));
  /* 110a190e call 0x110a1ea0 */
  push32(0x110a1913u); f_110a1ea0();
  /* 110a1913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1916 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a191b:;
  /* 110a191b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a191e push ecx */
  push32((uint32_t)(ECX));
  /* 110a191f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1922 push edx */
  push32((uint32_t)(EDX));
  /* 110a1923 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1926 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 110a1929 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a192c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 110a1930 push eax */
  push32((uint32_t)(EAX));
  /* 110a1931 call 0x110a1ea0 */
  push32(0x110a1936u); f_110a1ea0();
  /* 110a1936 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1939 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a193e:;
  /* 110a193e cmp dword ptr [0x110c0968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1945 je 0x110a19c6 */
  if (C.zf) goto L_110a19c6;
  /* 110a1947 mov dword ptr [0x110c0968], 0 */
  w32((uint32_t)(0x110c0968), (0x0u));
  /* 110a1951 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a1954 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1955 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1958 push edx */
  push32((uint32_t)(EDX));
  /* 110a1959 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a195c push eax */
  push32((uint32_t)(EAX));
  /* 110a195d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1960 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1961 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a1964 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 110a196a push eax */
  push32((uint32_t)(EAX));
  /* 110a196b call 0x110a2050 */
  push32(0x110a1970u); f_110a2050();
  /* 110a1970 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1973 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1976 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1979 jne 0x110a1980 */
  if (!C.zf) goto L_110a1980;
  /* 110a197b jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1980:;
  /* 110a1980 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1983 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a1985 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 110a1988 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a198b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a198d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1990 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1993 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110a1995 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1998 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a199a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a199d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a19a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110a19a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a19a5 push ecx */
  push32((uint32_t)(ECX));
  /* 110a19a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a19a9 push edx */
  push32((uint32_t)(EDX));
  /* 110a19aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a19ad push eax */
  push32((uint32_t)(EAX));
  /* 110a19ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a19b1 push ecx */
  push32((uint32_t)(ECX));
  /* 110a19b2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a19b5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 110a19bb push eax */
  push32((uint32_t)(EAX));
  /* 110a19bc call 0x110a2050 */
  push32(0x110a19c1u); f_110a2050();
  /* 110a19c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a19c4 jmp 0x110a1a39 */
  goto L_110a1a39;
L_110a19c6:;
  /* 110a19c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a19c9 push ecx */
  push32((uint32_t)(ECX));
  /* 110a19ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a19cd push edx */
  push32((uint32_t)(EDX));
  /* 110a19ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a19d1 push eax */
  push32((uint32_t)(EAX));
  /* 110a19d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a19d5 push ecx */
  push32((uint32_t)(ECX));
  /* 110a19d6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a19d9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 110a19df push eax */
  push32((uint32_t)(EAX));
  /* 110a19e0 call 0x110a2050 */
  push32(0x110a19e5u); f_110a2050();
  /* 110a19e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a19e8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a19eb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a19ee jne 0x110a19f5 */
  if (!C.zf) goto L_110a19f5;
  /* 110a19f0 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a19f5:;
  /* 110a19f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a19f8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a19fa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 110a19fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1a00 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a1a02 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1a05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1a08 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110a1a0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1a0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a1a0f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1a12 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1a15 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110a1a17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a1a1a push ecx */
  push32((uint32_t)(ECX));
  /* 110a1a1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1a1e push edx */
  push32((uint32_t)(EDX));
  /* 110a1a1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1a22 push eax */
  push32((uint32_t)(EAX));
  /* 110a1a23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1a26 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1a27 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a1a2a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 110a1a30 push eax */
  push32((uint32_t)(EAX));
  /* 110a1a31 call 0x110a2050 */
  push32(0x110a1a36u); f_110a2050();
  /* 110a1a36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a1a39:;
  /* 110a1a39 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1a3e:;
  /* 110a1a3e mov ecx, dword ptr [0x110c0968] */
  ECX = (r32((uint32_t)(0x110c0968)));
  /* 110a1a44 mov dword ptr [0x110c0978], ecx */
  w32((uint32_t)(0x110c0978), (ECX));
  /* 110a1a4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1a4d push edx */
  push32((uint32_t)(EDX));
  /* 110a1a4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1a51 push eax */
  push32((uint32_t)(EAX));
  /* 110a1a52 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a1a54 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1a57 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 110a1a5a push edx */
  push32((uint32_t)(EDX));
  /* 110a1a5b call 0x110a1ef0 */
  push32(0x110a1a60u); f_110a1ef0();
  /* 110a1a60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1a63 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1a68:;
  /* 110a1a68 mov eax, dword ptr [0x110c0968] */
  EAX = (r32((uint32_t)(0x110c0968)));
  /* 110a1a6d mov dword ptr [0x110c0978], eax */
  w32((uint32_t)(0x110c0978), (EAX));
  /* 110a1a72 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1a75 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1a76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1a79 push edx */
  push32((uint32_t)(EDX));
  /* 110a1a7a push 2 */
  push32((uint32_t)(0x2u));
  /* 110a1a7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1a7f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 110a1a82 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1a83 call 0x110a1ef0 */
  push32(0x110a1a88u); f_110a1ef0();
  /* 110a1a88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1a8b jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1a90:;
  /* 110a1a90 mov edx, dword ptr [0x110c0968] */
  EDX = (r32((uint32_t)(0x110c0968)));
  /* 110a1a96 mov dword ptr [0x110c0978], edx */
  w32((uint32_t)(0x110c0978), (EDX));
  /* 110a1a9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1a9f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 110a1aa2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110a1aa3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 110a1aa8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110a1aaa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110a1aad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1ab1 jne 0x110a1aba */
  if (!C.zf) goto L_110a1aba;
  /* 110a1ab3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_110a1aba:;
  /* 110a1aba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1abd push edx */
  push32((uint32_t)(EDX));
  /* 110a1abe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1ac1 push eax */
  push32((uint32_t)(EAX));
  /* 110a1ac2 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a1ac4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a1ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1ac8 call 0x110a1ef0 */
  push32(0x110a1acdu); f_110a1ef0();
  /* 110a1acd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1ad0 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1ad5:;
  /* 110a1ad5 mov edx, dword ptr [0x110c0968] */
  EDX = (r32((uint32_t)(0x110c0968)));
  /* 110a1adb mov dword ptr [0x110c0978], edx */
  w32((uint32_t)(0x110c0978), (EDX));
  /* 110a1ae1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1ae4 push eax */
  push32((uint32_t)(EAX));
  /* 110a1ae5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1ae8 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1ae9 push 3 */
  push32((uint32_t)(0x3u));
  /* 110a1aeb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1aee mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 110a1af1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1af4 push eax */
  push32((uint32_t)(EAX));
  /* 110a1af5 call 0x110a1ef0 */
  push32(0x110a1afau); f_110a1ef0();
  /* 110a1afa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1afd jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1b02:;
  /* 110a1b02 mov ecx, dword ptr [0x110c0968] */
  ECX = (r32((uint32_t)(0x110c0968)));
  /* 110a1b08 mov dword ptr [0x110c0978], ecx */
  w32((uint32_t)(0x110c0978), (ECX));
  /* 110a1b0e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1b11 push edx */
  push32((uint32_t)(EDX));
  /* 110a1b12 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1b15 push eax */
  push32((uint32_t)(EAX));
  /* 110a1b16 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a1b18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1b1b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 110a1b1e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1b21 push edx */
  push32((uint32_t)(EDX));
  /* 110a1b22 call 0x110a1ef0 */
  push32(0x110a1b27u); f_110a1ef0();
  /* 110a1b27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1b2a jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1b2f:;
  /* 110a1b2f mov eax, dword ptr [0x110c0968] */
  EAX = (r32((uint32_t)(0x110c0968)));
  /* 110a1b34 mov dword ptr [0x110c0978], eax */
  w32((uint32_t)(0x110c0978), (EAX));
  /* 110a1b39 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1b3c push ecx */
  push32((uint32_t)(ECX));
  /* 110a1b3d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1b40 push edx */
  push32((uint32_t)(EDX));
  /* 110a1b41 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a1b43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1b46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 110a1b49 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1b4a call 0x110a1ef0 */
  push32(0x110a1b4fu); f_110a1ef0();
  /* 110a1b4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1b52 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1b57:;
  /* 110a1b57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1b5a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1b5e jg 0x110a1b7c */
  if ((!C.zf&&C.sf==C.of)) goto L_110a1b7c;
  /* 110a1b60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1b63 push eax */
  push32((uint32_t)(EAX));
  /* 110a1b64 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1b67 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1b68 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a1b6b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 110a1b71 push eax */
  push32((uint32_t)(EAX));
  /* 110a1b72 call 0x110a1ea0 */
  push32(0x110a1b77u); f_110a1ea0();
  /* 110a1b77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1b7a jmp 0x110a1b96 */
  goto L_110a1b96;
L_110a1b7c:;
  /* 110a1b7c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1b7f push ecx */
  push32((uint32_t)(ECX));
  /* 110a1b80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1b83 push edx */
  push32((uint32_t)(EDX));
  /* 110a1b84 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a1b87 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 110a1b8d push ecx */
  push32((uint32_t)(ECX));
  /* 110a1b8e call 0x110a1ea0 */
  push32(0x110a1b93u); f_110a1ea0();
  /* 110a1b93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a1b96:;
  /* 110a1b96 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1b9b:;
  /* 110a1b9b mov edx, dword ptr [0x110c0968] */
  EDX = (r32((uint32_t)(0x110c0968)));
  /* 110a1ba1 mov dword ptr [0x110c0978], edx */
  w32((uint32_t)(0x110c0978), (EDX));
  /* 110a1ba7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1baa push eax */
  push32((uint32_t)(EAX));
  /* 110a1bab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1bae push ecx */
  push32((uint32_t)(ECX));
  /* 110a1baf push 2 */
  push32((uint32_t)(0x2u));
  /* 110a1bb1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1bb4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a1bb6 push eax */
  push32((uint32_t)(EAX));
  /* 110a1bb7 call 0x110a1ef0 */
  push32(0x110a1bbcu); f_110a1ef0();
  /* 110a1bbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1bbf jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1bc4:;
  /* 110a1bc4 mov ecx, dword ptr [0x110c0968] */
  ECX = (r32((uint32_t)(0x110c0968)));
  /* 110a1bca mov dword ptr [0x110c0978], ecx */
  w32((uint32_t)(0x110c0978), (ECX));
  /* 110a1bd0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1bd3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 110a1bd6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110a1bd9 jmp 0x110a1c2d */
  goto L_110a1c2d;
L_110a1bdb:;
  /* 110a1bdb mov ecx, dword ptr [0x110c0968] */
  ECX = (r32((uint32_t)(0x110c0968)));
  /* 110a1be1 mov dword ptr [0x110c0978], ecx */
  w32((uint32_t)(0x110c0978), (ECX));
  /* 110a1be7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1bea push edx */
  push32((uint32_t)(EDX));
  /* 110a1beb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1bee push eax */
  push32((uint32_t)(EAX));
  /* 110a1bef push 1 */
  push32((uint32_t)(0x1u));
  /* 110a1bf1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1bf4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 110a1bf7 push edx */
  push32((uint32_t)(EDX));
  /* 110a1bf8 call 0x110a1ef0 */
  push32(0x110a1bfdu); f_110a1ef0();
  /* 110a1bfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1c00 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1c05:;
  /* 110a1c05 mov eax, dword ptr [0x110c0968] */
  EAX = (r32((uint32_t)(0x110c0968)));
  /* 110a1c0a mov dword ptr [0x110c0978], eax */
  w32((uint32_t)(0x110c0978), (EAX));
  /* 110a1c0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1c12 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1c16 jne 0x110a1c21 */
  if (!C.zf) goto L_110a1c21;
  /* 110a1c18 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 110a1c1f jmp 0x110a1c2d */
  goto L_110a1c2d;
L_110a1c21:;
  /* 110a1c21 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1c24 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 110a1c27 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1c2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_110a1c2d:;
  /* 110a1c2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1c30 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 110a1c33 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1c36 jge 0x110a1c41 */
  if ((C.sf==C.of)) goto L_110a1c41;
  /* 110a1c38 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 110a1c3f jmp 0x110a1c6e */
  goto L_110a1c6e;
L_110a1c41:;
  /* 110a1c41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1c44 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 110a1c47 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110a1c48 mov ecx, 7 */
  ECX = (0x7u);
  /* 110a1c4d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110a1c4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a1c52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1c55 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 110a1c58 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110a1c59 mov ecx, 7 */
  ECX = (0x7u);
  /* 110a1c5e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110a1c60 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1c63 jl 0x110a1c6e */
  if ((C.sf!=C.of)) goto L_110a1c6e;
  /* 110a1c65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a1c68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1c6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_110a1c6e:;
  /* 110a1c6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1c71 push eax */
  push32((uint32_t)(EAX));
  /* 110a1c72 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1c75 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1c76 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a1c78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a1c7b push edx */
  push32((uint32_t)(EDX));
  /* 110a1c7c call 0x110a1ef0 */
  push32(0x110a1c81u); f_110a1ef0();
  /* 110a1c81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1c84 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1c89:;
  /* 110a1c89 cmp dword ptr [0x110c0968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1c90 je 0x110a1cc0 */
  if (C.zf) goto L_110a1cc0;
  /* 110a1c92 mov dword ptr [0x110c0968], 0 */
  w32((uint32_t)(0x110c0968), (0x0u));
  /* 110a1c9c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a1c9f push eax */
  push32((uint32_t)(EAX));
  /* 110a1ca0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1ca4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1ca7 push edx */
  push32((uint32_t)(EDX));
  /* 110a1ca8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1cab push eax */
  push32((uint32_t)(EAX));
  /* 110a1cac mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a1caf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 110a1cb5 push edx */
  push32((uint32_t)(EDX));
  /* 110a1cb6 call 0x110a2050 */
  push32(0x110a1cbbu); f_110a2050();
  /* 110a1cbb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1cbe jmp 0x110a1ce2 */
  goto L_110a1ce2;
L_110a1cc0:;
  /* 110a1cc0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a1cc3 push eax */
  push32((uint32_t)(EAX));
  /* 110a1cc4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1cc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1ccb push edx */
  push32((uint32_t)(EDX));
  /* 110a1ccc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1ccf push eax */
  push32((uint32_t)(EAX));
  /* 110a1cd0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a1cd3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 110a1cd9 push edx */
  push32((uint32_t)(EDX));
  /* 110a1cda call 0x110a2050 */
  push32(0x110a1cdfu); f_110a2050();
  /* 110a1cdf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a1ce2:;
  /* 110a1ce2 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1ce7:;
  /* 110a1ce7 mov dword ptr [0x110c0968], 0 */
  w32((uint32_t)(0x110c0968), (0x0u));
  /* 110a1cf1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a1cf4 push eax */
  push32((uint32_t)(EAX));
  /* 110a1cf5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1cf9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1cfc push edx */
  push32((uint32_t)(EDX));
  /* 110a1cfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1d00 push eax */
  push32((uint32_t)(EAX));
  /* 110a1d01 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a1d04 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 110a1d0a push edx */
  push32((uint32_t)(EDX));
  /* 110a1d0b call 0x110a2050 */
  push32(0x110a1d10u); f_110a2050();
  /* 110a1d10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1d13 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1d18:;
  /* 110a1d18 mov eax, dword ptr [0x110c0968] */
  EAX = (r32((uint32_t)(0x110c0968)));
  /* 110a1d1d mov dword ptr [0x110c0978], eax */
  w32((uint32_t)(0x110c0978), (EAX));
  /* 110a1d22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1d25 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 110a1d28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110a1d29 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 110a1d2e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110a1d30 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110a1d33 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1d36 push edx */
  push32((uint32_t)(EDX));
  /* 110a1d37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1d3a push eax */
  push32((uint32_t)(EAX));
  /* 110a1d3b push 2 */
  push32((uint32_t)(0x2u));
  /* 110a1d3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a1d40 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1d41 call 0x110a1ef0 */
  push32(0x110a1d46u); f_110a1ef0();
  /* 110a1d46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1d49 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1d4e:;
  /* 110a1d4e mov edx, dword ptr [0x110c0968] */
  EDX = (r32((uint32_t)(0x110c0968)));
  /* 110a1d54 mov dword ptr [0x110c0978], edx */
  w32((uint32_t)(0x110c0978), (EDX));
  /* 110a1d5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1d5d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 110a1d60 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110a1d61 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 110a1d66 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110a1d68 mov ecx, eax */
  ECX = (EAX);
  /* 110a1d6a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1d6d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a1d70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1d73 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 110a1d76 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110a1d77 mov esi, 0x64 */
  ESI = (0x64u);
  /* 110a1d7c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110a1d7e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1d80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110a1d83 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1d86 push eax */
  push32((uint32_t)(EAX));
  /* 110a1d87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1d8a push ecx */
  push32((uint32_t)(ECX));
  /* 110a1d8b push 4 */
  push32((uint32_t)(0x4u));
  /* 110a1d8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a1d90 push edx */
  push32((uint32_t)(EDX));
  /* 110a1d91 call 0x110a1ef0 */
  push32(0x110a1d96u); f_110a1ef0();
  /* 110a1d96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1d99 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1d9b:;
  /* 110a1d9b call 0x110a2eb0 */
  push32(0x110a1da0u); f_110a2eb0();
  /* 110a1da0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1da3 push eax */
  push32((uint32_t)(EAX));
  /* 110a1da4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1da7 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1da8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1dab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a1dad cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1db1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 110a1db4 mov ecx, dword ptr [eax*4 + 0x110bfe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x110bfe1c)));
  /* 110a1dbb push ecx */
  push32((uint32_t)(ECX));
  /* 110a1dbc call 0x110a1ea0 */
  push32(0x110a1dc1u); f_110a1ea0();
  /* 110a1dc1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1dc4 jmp 0x110a1de8 */
  goto L_110a1de8;
L_110a1dc6:;
  /* 110a1dc6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1dc9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a1dcb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 110a1dce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1dd1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a1dd3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1dd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1dd9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110a1ddb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1dde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a1de0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1de3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1de6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_110a1de8:;
  /* 110a1de8 pop esi */
  ESI = (pop32());
  /* 110a1de9 mov esp, ebp */
  ESP = (EBP);
  /* 110a1deb pop ebp */
  EBP = (pop32());
  /* 110a1dec ret  */
  ESPCHK(0x110a1880u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x110a1ea0 (72 bytes, 30 insns) */
void f_110a1ea0(void) {
  FTRACE(0x110a1ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a1ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a1ea1 mov ebp, esp */
  EBP = (ESP);
L_110a1ea3:;
  /* 110a1ea3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1ea6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1ea9 je 0x110a1ee6 */
  if (C.zf) goto L_110a1ee6;
  /* 110a1eab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a1eae movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110a1eb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a1eb3 je 0x110a1ee6 */
  if (C.zf) goto L_110a1ee6;
  /* 110a1eb5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1eb8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a1eba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a1ebd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a1ebf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 110a1ec1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1ec4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a1ec6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1ec9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1ecc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110a1ece mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a1ed1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1ed4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 110a1ed7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1eda mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a1edc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1edf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1ee2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110a1ee4 jmp 0x110a1ea3 */
  goto L_110a1ea3;
L_110a1ee6:;
  /* 110a1ee6 pop ebp */
  EBP = (pop32());
  /* 110a1ee7 ret  */
  ESPCHK(0x110a1ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ef0 @ 0x110a1ef0 (173 bytes, 64 insns) */
void f_110a1ef0(void) {
  FTRACE(0x110a1ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a1ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a1ef1 mov ebp, esp */
  EBP = (ESP);
  /* 110a1ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 110a1ef4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 110a1efb cmp dword ptr [0x110c0978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1f02 je 0x110a1f1a */
  if (C.zf) goto L_110a1f1a;
  /* 110a1f04 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1f07 push eax */
  push32((uint32_t)(EAX));
  /* 110a1f08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1f0b push ecx */
  push32((uint32_t)(ECX));
  /* 110a1f0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a1f0f push edx */
  push32((uint32_t)(EDX));
  /* 110a1f10 call 0x110a1fa0 */
  push32(0x110a1f15u); f_110a1fa0();
  /* 110a1f15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1f18 jmp 0x110a1f99 */
  goto L_110a1f99;
L_110a1f1a:;
  /* 110a1f1a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1f1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1f20 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1f22 jae 0x110a1f90 */
  if (!C.cf) goto L_110a1f90;
  /* 110a1f24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1f27 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1f2a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 110a1f2d jmp 0x110a1f38 */
  goto L_110a1f38;
L_110a1f2f:;
  /* 110a1f2f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1f32 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1f35 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_110a1f38:;
  /* 110a1f38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1f3b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1f3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a1f40 je 0x110a1f74 */
  if (C.zf) goto L_110a1f74;
  /* 110a1f42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a1f45 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110a1f46 mov ecx, 0xa */
  ECX = (0xau);
  /* 110a1f4b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110a1f4d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1f50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1f53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a1f55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1f58 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 110a1f5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a1f5e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110a1f5f mov ecx, 0xa */
  ECX = (0xau);
  /* 110a1f64 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110a1f66 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110a1f69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a1f6c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1f6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110a1f72 jmp 0x110a1f2f */
  goto L_110a1f2f;
L_110a1f74:;
  /* 110a1f74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1f77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a1f79 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1f7c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1f7f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110a1f81 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1f84 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a1f86 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1f89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1f8c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110a1f8e jmp 0x110a1f99 */
  goto L_110a1f99;
L_110a1f90:;
  /* 110a1f90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a1f93 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_110a1f99:;
  /* 110a1f99 mov esp, ebp */
  ESP = (EBP);
  /* 110a1f9b pop ebp */
  EBP = (pop32());
  /* 110a1f9c ret  */
  ESPCHK(0x110a1ef0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x110a1fa0 (172 bytes, 65 insns) */
void f_110a1fa0(void) {
  FTRACE(0x110a1fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a1fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a1fa1 mov ebp, esp */
  EBP = (ESP);
  /* 110a1fa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1fa6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1fa9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a1fab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110a1fae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1fb1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1fb4 jbe 0x110a1ffb */
  if ((C.cf||C.zf)) goto L_110a1ffb;
L_110a1fb6:;
  /* 110a1fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a1fb9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110a1fba mov ecx, 0xa */
  ECX = (0xau);
  /* 110a1fbf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110a1fc1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1fc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a1fc7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 110a1fc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a1fcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a1fcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110a1fd2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1fd5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a1fd7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a1fda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1fdd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110a1fdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a1fe2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110a1fe3 mov ecx, 0xa */
  ECX = (0xau);
  /* 110a1fe8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110a1fea mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110a1fed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1ff1 jle 0x110a1ffb */
  if ((C.zf||C.sf!=C.of)) goto L_110a1ffb;
  /* 110a1ff3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a1ff6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a1ff9 ja 0x110a1fb6 */
  if ((!C.cf&&!C.zf)) goto L_110a1fb6;
L_110a1ffb:;
  /* 110a1ffb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a1ffe mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a2000 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110a2003 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a2006 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a2009 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 110a200b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a200e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a2011 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_110a2014:;
  /* 110a2014 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a2017 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a2019 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 110a201c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a201f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a2022 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a2024 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 110a2026 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a2029 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a202c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110a202f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a2032 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 110a2035 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 110a2037 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a203a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a203d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110a2040 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a2043 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2046 jb 0x110a2014 */
  if (C.cf) goto L_110a2014;
  /* 110a2048 mov esp, ebp */
  ESP = (EBP);
  /* 110a204a pop ebp */
  EBP = (pop32());
  /* 110a204b ret  */
  ESPCHK(0x110a1fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012050 @ 0x110a2050 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_110a2050(void) {
  FTRACE(0x110a2050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a2050 push ebp */
  push32((uint32_t)(EBP));
  /* 110a2051 mov ebp, esp */
  EBP = (ESP);
  /* 110a2053 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_110a2056:;
  /* 110a2056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2059 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110a205c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a205e je 0x110a24cc */
  if (C.zf) goto L_110a24cc;
  /* 110a2064 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a2067 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a206a je 0x110a24cc */
  if (C.zf) goto L_110a24cc;
  /* 110a2070 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 110a2074 mov dword ptr [0x110c0978], 0 */
  w32((uint32_t)(0x110c0978), (0x0u));
  /* 110a207e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 110a2085 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2088 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a208b jmp 0x110a2096 */
  goto L_110a2096;
L_110a208d:;
  /* 110a208d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a2090 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2093 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_110a2096:;
  /* 110a2096 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a2099 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110a209c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a209f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110a20a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a20a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a20a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110a20ab cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a20ad jne 0x110a20b1 */
  if (!C.zf) goto L_110a20b1;
  /* 110a20af jmp 0x110a208d */
  goto L_110a208d;
L_110a20b1:;
  /* 110a20b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a20b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a20b7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110a20ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a20bd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110a20c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 110a20c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a20c6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a20c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110a20cc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a20d0 ja 0x110a2420 */
  if ((!C.cf&&!C.zf)) goto L_110a2420;
  /* 110a20d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a20d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a20db mov al, byte ptr [ecx + 0x110a24fc] */
  AL = (r8((uint32_t)(ECX + 0x110a24fc)));
  /* 110a20e1 jmp dword ptr [eax*4 + 0x110a24d0] */
  switch (EAX) {
    case 0: goto L_110a233f;
    case 1: goto L_110a2223;
    case 2: goto L_110a21ae;
    case 3: goto L_110a20e8;
    case 4: goto L_110a2126;
    case 5: goto L_110a2187;
    case 6: goto L_110a21d5;
    case 7: goto L_110a21fc;
    case 8: goto L_110a226a;
    case 9: goto L_110a2164;
    case 10: goto L_110a2420;
    default: x86_unimpl("switch@0x110a20e1 out of table"); return;
  }
L_110a20e8:;
  /* 110a20e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a20eb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 110a20ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 110a20f1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a20f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 110a20f7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a20fb ja 0x110a2121 */
  if ((!C.cf&&!C.zf)) goto L_110a2121;
  /* 110a20fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110a2100 jmp dword ptr [ecx*4 + 0x110a254f] */
  switch (ECX) {
    case 0: goto L_110a2107;
    case 1: goto L_110a2111;
    case 2: goto L_110a2117;
    case 3: goto L_110a211d;
    case 4: goto L_110a2145;
    case 5: goto L_110a214f;
    case 6: goto L_110a2155;
    case 7: goto L_110a215b;
    default: x86_unimpl("switch@0x110a2100 out of table"); return;
  }
L_110a2107:;
  /* 110a2107 mov dword ptr [0x110c0978], 1 */
  w32((uint32_t)(0x110c0978), (0x1u));
L_110a2111:;
  /* 110a2111 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 110a2115 jmp 0x110a2121 */
  goto L_110a2121;
L_110a2117:;
  /* 110a2117 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 110a211b jmp 0x110a2121 */
  goto L_110a2121;
L_110a211d:;
  /* 110a211d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_110a2121:;
  /* 110a2121 jmp 0x110a2420 */
  goto L_110a2420;
L_110a2126:;
  /* 110a2126 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a2129 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 110a212c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110a212f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a2132 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 110a2135 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2139 ja 0x110a215f */
  if ((!C.cf&&!C.zf)) goto L_110a215f;
  /* 110a213b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110a213e jmp dword ptr [ecx*4 + 0x110a255f] */
  switch (ECX) {
    case 0: goto L_110a2145;
    case 1: goto L_110a214f;
    case 2: goto L_110a2155;
    case 3: goto L_110a215b;
    default: x86_unimpl("switch@0x110a213e out of table"); return;
  }
L_110a2145:;
  /* 110a2145 mov dword ptr [0x110c0978], 1 */
  w32((uint32_t)(0x110c0978), (0x1u));
L_110a214f:;
  /* 110a214f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 110a2153 jmp 0x110a215f */
  goto L_110a215f;
L_110a2155:;
  /* 110a2155 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 110a2159 jmp 0x110a215f */
  goto L_110a215f;
L_110a215b:;
  /* 110a215b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_110a215f:;
  /* 110a215f jmp 0x110a2420 */
  goto L_110a2420;
L_110a2164:;
  /* 110a2164 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a2167 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 110a216a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a216e je 0x110a2178 */
  if (C.zf) goto L_110a2178;
  /* 110a2170 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2174 je 0x110a217e */
  if (C.zf) goto L_110a217e;
  /* 110a2176 jmp 0x110a2182 */
  goto L_110a2182;
L_110a2178:;
  /* 110a2178 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 110a217c jmp 0x110a2182 */
  goto L_110a2182;
L_110a217e:;
  /* 110a217e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_110a2182:;
  /* 110a2182 jmp 0x110a2420 */
  goto L_110a2420;
L_110a2187:;
  /* 110a2187 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a218a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 110a218d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2191 je 0x110a219b */
  if (C.zf) goto L_110a219b;
  /* 110a2193 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2197 je 0x110a21a5 */
  if (C.zf) goto L_110a21a5;
  /* 110a2199 jmp 0x110a21a9 */
  goto L_110a21a9;
L_110a219b:;
  /* 110a219b mov dword ptr [0x110c0978], 1 */
  w32((uint32_t)(0x110c0978), (0x1u));
L_110a21a5:;
  /* 110a21a5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_110a21a9:;
  /* 110a21a9 jmp 0x110a2420 */
  goto L_110a2420;
L_110a21ae:;
  /* 110a21ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a21b1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 110a21b4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a21b8 je 0x110a21c2 */
  if (C.zf) goto L_110a21c2;
  /* 110a21ba cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a21be je 0x110a21cc */
  if (C.zf) goto L_110a21cc;
  /* 110a21c0 jmp 0x110a21d0 */
  goto L_110a21d0;
L_110a21c2:;
  /* 110a21c2 mov dword ptr [0x110c0978], 1 */
  w32((uint32_t)(0x110c0978), (0x1u));
L_110a21cc:;
  /* 110a21cc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_110a21d0:;
  /* 110a21d0 jmp 0x110a2420 */
  goto L_110a2420;
L_110a21d5:;
  /* 110a21d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a21d8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 110a21db cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a21df je 0x110a21e9 */
  if (C.zf) goto L_110a21e9;
  /* 110a21e1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a21e5 je 0x110a21f3 */
  if (C.zf) goto L_110a21f3;
  /* 110a21e7 jmp 0x110a21f7 */
  goto L_110a21f7;
L_110a21e9:;
  /* 110a21e9 mov dword ptr [0x110c0978], 1 */
  w32((uint32_t)(0x110c0978), (0x1u));
L_110a21f3:;
  /* 110a21f3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_110a21f7:;
  /* 110a21f7 jmp 0x110a2420 */
  goto L_110a2420;
L_110a21fc:;
  /* 110a21fc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a21ff mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 110a2202 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2206 je 0x110a2210 */
  if (C.zf) goto L_110a2210;
  /* 110a2208 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a220c je 0x110a221a */
  if (C.zf) goto L_110a221a;
  /* 110a220e jmp 0x110a221e */
  goto L_110a221e;
L_110a2210:;
  /* 110a2210 mov dword ptr [0x110c0978], 1 */
  w32((uint32_t)(0x110c0978), (0x1u));
L_110a221a:;
  /* 110a221a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_110a221e:;
  /* 110a221e jmp 0x110a2420 */
  goto L_110a2420;
L_110a2223:;
  /* 110a2223 push 0x110bcba4 */
  push32((uint32_t)(0x110bcba4u));
  /* 110a2228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a222b push ecx */
  push32((uint32_t)(ECX));
  /* 110a222c call 0x110a2a80 */
  push32(0x110a2231u); f_110a2a80();
  /* 110a2231 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2234 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a2236 jne 0x110a2243 */
  if (!C.zf) goto L_110a2243;
  /* 110a2238 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a223b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a223e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110a2241 jmp 0x110a2261 */
  goto L_110a2261;
L_110a2243:;
  /* 110a2243 push 0x110bcba0 */
  push32((uint32_t)(0x110bcba0u));
  /* 110a2248 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a224b push eax */
  push32((uint32_t)(EAX));
  /* 110a224c call 0x110a2a80 */
  push32(0x110a2251u); f_110a2a80();
  /* 110a2251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2254 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a2256 jne 0x110a2261 */
  if (!C.zf) goto L_110a2261;
  /* 110a2258 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a225b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a225e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_110a2261:;
  /* 110a2261 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 110a2265 jmp 0x110a2420 */
  goto L_110a2420;
L_110a226a:;
  /* 110a226a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a226d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2271 jg 0x110a2281 */
  if ((!C.zf&&C.sf==C.of)) goto L_110a2281;
  /* 110a2273 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a2276 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 110a227c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 110a227f jmp 0x110a228d */
  goto L_110a228d;
L_110a2281:;
  /* 110a2281 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a2284 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 110a228a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_110a228d:;
  /* 110a228d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2291 jle 0x110a2334 */
  if ((C.zf||C.sf!=C.of)) goto L_110a2334;
  /* 110a2297 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a229a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a229d jbe 0x110a2334 */
  if ((C.cf||C.zf)) goto L_110a2334;
  /* 110a22a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a22a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a22a8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a22aa mov ecx, dword ptr [0x110bec98] */
  ECX = (r32((uint32_t)(0x110bec98)));
  /* 110a22b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a22b2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 110a22b6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 110a22bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a22be je 0x110a22f7 */
  if (C.zf) goto L_110a22f7;
  /* 110a22c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a22c3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a22c6 jbe 0x110a22f7 */
  if ((C.cf||C.zf)) goto L_110a22f7;
  /* 110a22c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a22cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a22cd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a22d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110a22d2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 110a22d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a22d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a22d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a22dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a22df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110a22e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a22e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a22e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 110a22ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a22ed mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a22ef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a22f2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a22f5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_110a22f7:;
  /* 110a22f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a22fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a22fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a22ff mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a2301 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 110a2303 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a2306 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a2308 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a230b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a230e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110a2310 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a2313 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2316 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 110a2319 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a231c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a231e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a2321 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a2324 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110a2326 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a2329 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a232c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 110a232f jmp 0x110a228d */
  goto L_110a228d;
L_110a2334:;
  /* 110a2334 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a2337 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110a233a jmp 0x110a2056 */
  goto L_110a2056;
L_110a233f:;
  /* 110a233f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a2342 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 110a2345 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a2347 je 0x110a2412 */
  if (C.zf) goto L_110a2412;
  /* 110a234d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2350 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2353 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_110a2356:;
  /* 110a2356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2359 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110a235c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a235e je 0x110a2410 */
  if (C.zf) goto L_110a2410;
  /* 110a2364 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a2367 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a236a je 0x110a2410 */
  if (C.zf) goto L_110a2410;
  /* 110a2370 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2373 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110a2376 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2379 jne 0x110a2389 */
  if (!C.zf) goto L_110a2389;
  /* 110a237b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a237e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2381 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 110a2384 jmp 0x110a2410 */
  goto L_110a2410;
L_110a2389:;
  /* 110a2389 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a238c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a238e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110a2390 mov edx, dword ptr [0x110bec98] */
  EDX = (r32((uint32_t)(0x110bec98)));
  /* 110a2396 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a2398 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 110a239c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 110a23a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a23a3 je 0x110a23dc */
  if (C.zf) goto L_110a23dc;
  /* 110a23a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a23a8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a23ab jbe 0x110a23dc */
  if ((C.cf||C.zf)) goto L_110a23dc;
  /* 110a23ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a23b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a23b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a23b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110a23b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 110a23b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a23bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a23be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a23c1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a23c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110a23c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a23c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a23cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110a23cf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a23d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a23d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a23d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a23da mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_110a23dc:;
  /* 110a23dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a23df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a23e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a23e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110a23e6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 110a23e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a23eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a23ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a23f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a23f3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110a23f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a23f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a23fb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 110a23fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a2401 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a2403 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a2406 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a2409 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110a240b jmp 0x110a2356 */
  goto L_110a2356;
L_110a2410:;
  /* 110a2410 jmp 0x110a241b */
  goto L_110a241b;
L_110a2412:;
  /* 110a2412 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2415 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2418 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_110a241b:;
  /* 110a241b jmp 0x110a2056 */
  goto L_110a2056;
L_110a2420:;
  /* 110a2420 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 110a2424 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a2426 je 0x110a244c */
  if (C.zf) goto L_110a244c;
  /* 110a2428 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a242b push edx */
  push32((uint32_t)(EDX));
  /* 110a242c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a242f push eax */
  push32((uint32_t)(EAX));
  /* 110a2430 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a2433 push ecx */
  push32((uint32_t)(ECX));
  /* 110a2434 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a2437 push edx */
  push32((uint32_t)(EDX));
  /* 110a2438 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 110a243b push eax */
  push32((uint32_t)(EAX));
  /* 110a243c call 0x110a1880 */
  push32(0x110a2441u); f_110a1880();
  /* 110a2441 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2444 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a2447 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 110a244a jmp 0x110a24c7 */
  goto L_110a24c7;
L_110a244c:;
  /* 110a244c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a244f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a2451 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a2453 mov ecx, dword ptr [0x110bec98] */
  ECX = (r32((uint32_t)(0x110bec98)));
  /* 110a2459 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a245b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 110a245f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 110a2465 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a2467 je 0x110a2498 */
  if (C.zf) goto L_110a2498;
  /* 110a2469 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a246c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a246e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2471 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a2473 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 110a2475 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a2478 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a247a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a247d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a2480 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110a2482 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2485 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2488 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 110a248b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a248e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a2490 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a2493 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a2496 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_110a2498:;
  /* 110a2498 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a249b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a249d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a24a0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110a24a2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 110a24a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a24a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a24a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a24ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a24af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110a24b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a24b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a24b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110a24ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a24bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a24bf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a24c2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a24c5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_110a24c7:;
  /* 110a24c7 jmp 0x110a2056 */
  goto L_110a2056;
L_110a24cc:;
  /* 110a24cc mov esp, ebp */
  ESP = (EBP);
  /* 110a24ce pop ebp */
  EBP = (pop32());
  /* 110a24cf ret  */
  ESPCHK(0x110a2050u, _esp0);
  ESP += 4; return;
}

/* FUN_10012570 @ 0x110a2570 (650 bytes, 178 insns) */
void f_110a2570(void) {
  FTRACE(0x110a2570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a2570 push ebp */
  push32((uint32_t)(EBP));
  /* 110a2571 mov ebp, esp */
  EBP = (ESP);
  /* 110a2573 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a2579 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a257d jne 0x110a26d9 */
  if (!C.zf) goto L_110a26d9;
  /* 110a2583 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a2586 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 110a258c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 110a2592 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110a2595 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 110a259c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 110a25a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a25a8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 110a25ae push edx */
  push32((uint32_t)(EDX));
  /* 110a25af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a25b2 push eax */
  push32((uint32_t)(EAX));
  /* 110a25b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a25b6 push ecx */
  push32((uint32_t)(ECX));
  /* 110a25b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a25ba push edx */
  push32((uint32_t)(EDX));
  /* 110a25bb call 0x110a3990 */
  push32(0x110a25c0u); f_110a3990();
  /* 110a25c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a25c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110a25c6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a25ca jne 0x110a265f */
  if (!C.zf) goto L_110a265f;
  /* 110a25d0 call dword ptr [0x110c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32e0))), 0x110a25d6u);
  /* 110a25d6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a25d9 je 0x110a25e0 */
  if (C.zf) goto L_110a25e0;
  /* 110a25db jmp 0x110a26bd */
  goto L_110a26bd;
L_110a25e0:;
  /* 110a25e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a25e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a25e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a25e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a25e9 push eax */
  push32((uint32_t)(EAX));
  /* 110a25ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a25ed push ecx */
  push32((uint32_t)(ECX));
  /* 110a25ee call 0x110a3990 */
  push32(0x110a25f3u); f_110a3990();
  /* 110a25f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a25f6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 110a25fc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2603 jne 0x110a260a */
  if (!C.zf) goto L_110a260a;
  /* 110a2605 jmp 0x110a26bd */
  goto L_110a26bd;
L_110a260a:;
  /* 110a260a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 110a260c push 0x110bcbac */
  push32((uint32_t)(0x110bcbacu));
  /* 110a2611 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a2613 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 110a2619 push edx */
  push32((uint32_t)(EDX));
  /* 110a261a call 0x110943b0 */
  push32(0x110a261fu); f_110943b0();
  /* 110a261f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2622 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110a2625 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2629 jne 0x110a2630 */
  if (!C.zf) goto L_110a2630;
  /* 110a262b jmp 0x110a26bd */
  goto L_110a26bd;
L_110a2630:;
  /* 110a2630 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 110a2637 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a2639 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 110a263f push eax */
  push32((uint32_t)(EAX));
  /* 110a2640 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a2643 push ecx */
  push32((uint32_t)(ECX));
  /* 110a2644 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a2647 push edx */
  push32((uint32_t)(EDX));
  /* 110a2648 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a264b push eax */
  push32((uint32_t)(EAX));
  /* 110a264c call 0x110a3990 */
  push32(0x110a2651u); f_110a3990();
  /* 110a2651 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2654 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110a2657 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a265b jne 0x110a265f */
  if (!C.zf) goto L_110a265f;
  /* 110a265d jmp 0x110a26bd */
  goto L_110a26bd;
L_110a265f:;
  /* 110a265f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 110a2661 push 0x110bcbac */
  push32((uint32_t)(0x110bcbacu));
  /* 110a2666 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a2668 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a266b push ecx */
  push32((uint32_t)(ECX));
  /* 110a266c call 0x110943b0 */
  push32(0x110a2671u); f_110943b0();
  /* 110a2671 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2674 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 110a267a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 110a267c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 110a2682 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2685 jne 0x110a2689 */
  if (!C.zf) goto L_110a2689;
  /* 110a2687 jmp 0x110a26bd */
  goto L_110a26bd;
L_110a2689:;
  /* 110a2689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a268c push ecx */
  push32((uint32_t)(ECX));
  /* 110a268d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a2690 push edx */
  push32((uint32_t)(EDX));
  /* 110a2691 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 110a2697 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a2699 push ecx */
  push32((uint32_t)(ECX));
  /* 110a269a call 0x11097bd0 */
  push32(0x110a269fu); f_11097bd0();
  /* 110a269f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a26a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a26a6 je 0x110a26b6 */
  if (C.zf) goto L_110a26b6;
  /* 110a26a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a26aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a26ad push edx */
  push32((uint32_t)(EDX));
  /* 110a26ae call 0x11094e40 */
  push32(0x110a26b3u); f_11094e40();
  /* 110a26b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a26b6:;
  /* 110a26b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a26b8 jmp 0x110a27f6 */
  goto L_110a27f6;
L_110a26bd:;
  /* 110a26bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a26c1 je 0x110a26d1 */
  if (C.zf) goto L_110a26d1;
  /* 110a26c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a26c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a26c8 push eax */
  push32((uint32_t)(EAX));
  /* 110a26c9 call 0x11094e40 */
  push32(0x110a26ceu); f_11094e40();
  /* 110a26ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a26d1:;
  /* 110a26d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a26d4 jmp 0x110a27f6 */
  goto L_110a27f6;
L_110a26d9:;
  /* 110a26d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a26dd jne 0x110a27f3 */
  if (!C.zf) goto L_110a27f3;
  /* 110a26e3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 110a26ed mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a26f0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 110a26f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a26f8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 110a26fe push edx */
  push32((uint32_t)(EDX));
  /* 110a26ff push 0x110c0890 */
  push32((uint32_t)(0x110c0890u));
  /* 110a2704 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a2707 push eax */
  push32((uint32_t)(EAX));
  /* 110a2708 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a270b push ecx */
  push32((uint32_t)(ECX));
  /* 110a270c call 0x110a37f0 */
  push32(0x110a2711u); f_110a37f0();
  /* 110a2711 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2714 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a2716 jne 0x110a2720 */
  if (!C.zf) goto L_110a2720;
  /* 110a2718 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a271b jmp 0x110a27f6 */
  goto L_110a27f6;
L_110a2720:;
  /* 110a2720 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 110a2726 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 110a2729 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 110a2733 jmp 0x110a2744 */
  goto L_110a2744;
L_110a2735:;
  /* 110a2735 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 110a273b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a273e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_110a2744:;
  /* 110a2744 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a274b jge 0x110a27ef */
  if ((C.sf==C.of)) goto L_110a27ef;
  /* 110a2751 cmp dword ptr [0x110beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2758 jle 0x110a278b */
  if ((C.zf||C.sf!=C.of)) goto L_110a278b;
  /* 110a275a push 4 */
  push32((uint32_t)(0x4u));
  /* 110a275c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 110a2762 mov dl, byte ptr [ecx*2 + 0x110c0890] */
  DL = (r8((uint32_t)(ECX*2 + 0x110c0890)));
  /* 110a2769 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 110a276f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 110a2775 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a277a push eax */
  push32((uint32_t)(EAX));
  /* 110a277b call 0x1109a3c0 */
  push32(0x110a2780u); f_1109a3c0();
  /* 110a2780 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2783 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 110a2789 jmp 0x110a27be */
  goto L_110a27be;
L_110a278b:;
  /* 110a278b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 110a2791 mov dl, byte ptr [ecx*2 + 0x110c0890] */
  DL = (r8((uint32_t)(ECX*2 + 0x110c0890)));
  /* 110a2798 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 110a279e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 110a27a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a27a9 mov ecx, dword ptr [0x110bec98] */
  ECX = (r32((uint32_t)(0x110bec98)));
  /* 110a27af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a27b1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 110a27b5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 110a27b8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_110a27be:;
  /* 110a27be cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a27c5 je 0x110a27e8 */
  if (C.zf) goto L_110a27e8;
  /* 110a27c7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 110a27cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110a27d0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a27d3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 110a27da lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 110a27de mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 110a27e4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 110a27e6 jmp 0x110a27ea */
  goto L_110a27ea;
L_110a27e8:;
  /* 110a27e8 jmp 0x110a27ef */
  goto L_110a27ef;
L_110a27ea:;
  /* 110a27ea jmp 0x110a2735 */
  goto L_110a2735;
L_110a27ef:;
  /* 110a27ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a27f1 jmp 0x110a27f6 */
  goto L_110a27f6;
L_110a27f3:;
  /* 110a27f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_110a27f6:;
  /* 110a27f6 mov esp, ebp */
  ESP = (EBP);
  /* 110a27f8 pop ebp */
  EBP = (pop32());
  /* 110a27f9 ret  */
  ESPCHK(0x110a2570u, _esp0);
  ESP += 4; return;
}

/* FUN_10012800 @ 0x110a2800 (10 bytes, 5 insns) */
void f_110a2800(void) {
  FTRACE(0x110a2800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a2800 push ebp */
  push32((uint32_t)(EBP));
  /* 110a2801 mov ebp, esp */
  EBP = (ESP);
  /* 110a2803 mov eax, dword ptr [0x110bfd88] */
  EAX = (r32((uint32_t)(0x110bfd88)));
  /* 110a2808 pop ebp */
  EBP = (pop32());
  /* 110a2809 ret  */
  ESPCHK(0x110a2800u, _esp0);
  ESP += 4; return;
}

/* FUN_10012810 @ 0x110a2810 (575 bytes, 196 insns) */
void f_110a2810(void) {
  FTRACE(0x110a2810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a2810 push ebp */
  push32((uint32_t)(EBP));
  /* 110a2811 mov ebp, esp */
  EBP = (ESP);
  /* 110a2813 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110a2815 push 0x110bcbb8 */
  push32((uint32_t)(0x110bcbb8u));
  /* 110a281a push 0x1109d4b8 */
  push32((uint32_t)(0x1109d4b8u));
  /* 110a281f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 110a2825 push eax */
  push32((uint32_t)(EAX));
  /* 110a2826 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 110a282d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2830 push ebx */
  push32((uint32_t)(EBX));
  /* 110a2831 push esi */
  push32((uint32_t)(ESI));
  /* 110a2832 push edi */
  push32((uint32_t)(EDI));
  /* 110a2833 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110a2836 cmp dword ptr [0x110c089c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c089c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a283d jne 0x110a288e */
  if (!C.zf) goto L_110a288e;
  /* 110a283f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 110a2842 push eax */
  push32((uint32_t)(EAX));
  /* 110a2843 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a2845 push 0x110bc2ec */
  push32((uint32_t)(0x110bc2ecu));
  /* 110a284a push 1 */
  push32((uint32_t)(0x1u));
  /* 110a284c call dword ptr [0x110c335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c335c))), 0x110a2852u);
  /* 110a2852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a2854 je 0x110a2862 */
  if (C.zf) goto L_110a2862;
  /* 110a2856 mov dword ptr [0x110c089c], 1 */
  w32((uint32_t)(0x110c089c), (0x1u));
  /* 110a2860 jmp 0x110a288e */
  goto L_110a288e;
L_110a2862:;
  /* 110a2862 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 110a2865 push ecx */
  push32((uint32_t)(ECX));
  /* 110a2866 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a2868 push 0x110bc2e8 */
  push32((uint32_t)(0x110bc2e8u));
  /* 110a286d push 1 */
  push32((uint32_t)(0x1u));
  /* 110a286f push 0 */
  push32((uint32_t)(0x0u));
  /* 110a2871 call dword ptr [0x110c3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3358))), 0x110a2877u);
  /* 110a2877 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a2879 je 0x110a2887 */
  if (C.zf) goto L_110a2887;
  /* 110a287b mov dword ptr [0x110c089c], 2 */
  w32((uint32_t)(0x110c089c), (0x2u));
  /* 110a2885 jmp 0x110a288e */
  goto L_110a288e;
L_110a2887:;
  /* 110a2887 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a2889 jmp 0x110a2a69 */
  goto L_110a2a69;
L_110a288e:;
  /* 110a288e cmp dword ptr [0x110c089c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c089c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2895 jne 0x110a28b2 */
  if (!C.zf) goto L_110a28b2;
  /* 110a2897 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a289a push edx */
  push32((uint32_t)(EDX));
  /* 110a289b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a289e push eax */
  push32((uint32_t)(EAX));
  /* 110a289f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a28a2 push ecx */
  push32((uint32_t)(ECX));
  /* 110a28a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a28a6 push edx */
  push32((uint32_t)(EDX));
  /* 110a28a7 call dword ptr [0x110c335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c335c))), 0x110a28adu);
  /* 110a28ad jmp 0x110a2a69 */
  goto L_110a2a69;
L_110a28b2:;
  /* 110a28b2 cmp dword ptr [0x110c089c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x110c089c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a28b9 jne 0x110a2a67 */
  if (!C.zf) goto L_110a2a67;
  /* 110a28bf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a28c3 jne 0x110a28cd */
  if (!C.zf) goto L_110a28cd;
  /* 110a28c5 mov eax, dword ptr [0x110c0810] */
  EAX = (r32((uint32_t)(0x110c0810)));
  /* 110a28ca mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_110a28cd:;
  /* 110a28cd push 0 */
  push32((uint32_t)(0x0u));
  /* 110a28cf push 0 */
  push32((uint32_t)(0x0u));
  /* 110a28d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a28d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a28d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a28d8 push ecx */
  push32((uint32_t)(ECX));
  /* 110a28d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a28dc push edx */
  push32((uint32_t)(EDX));
  /* 110a28dd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 110a28e2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a28e5 push eax */
  push32((uint32_t)(EAX));
  /* 110a28e6 call dword ptr [0x110c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c330c))), 0x110a28ecu);
  /* 110a28ec mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 110a28ef cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a28f3 jne 0x110a28fc */
  if (!C.zf) goto L_110a28fc;
  /* 110a28f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a28f7 jmp 0x110a2a69 */
  goto L_110a2a69;
L_110a28fc:;
  /* 110a28fc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 110a2903 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 110a2906 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2909 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 110a290b call 0x11097550 */
  push32(0x110a2910u); f_11097550();
  /* 110a2910 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 110a2913 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110a2916 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 110a2919 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 110a291c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 110a291f push edx */
  push32((uint32_t)(EDX));
  /* 110a2920 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a2922 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 110a2925 push eax */
  push32((uint32_t)(EAX));
  /* 110a2926 call 0x11098120 */
  push32(0x110a292bu); f_11098120();
  /* 110a292b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a292e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 110a2935 jmp 0x110a294e */
  goto L_110a294e;
  /* 110a2937 mov eax, 1 */
  EAX = (0x1u);
  /* 110a293c ret  */
  ESPCHK(0x110a2810u, _esp0);
  ESP += 4; return;
  /* 110a293d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 110a2940 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 110a2947 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_110a294e:;
  /* 110a294e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2952 jne 0x110a295b */
  if (!C.zf) goto L_110a295b;
  /* 110a2954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a2956 jmp 0x110a2a69 */
  goto L_110a2a69;
L_110a295b:;
  /* 110a295b push 0 */
  push32((uint32_t)(0x0u));
  /* 110a295d push 0 */
  push32((uint32_t)(0x0u));
  /* 110a295f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 110a2962 push ecx */
  push32((uint32_t)(ECX));
  /* 110a2963 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 110a2966 push edx */
  push32((uint32_t)(EDX));
  /* 110a2967 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a296a push eax */
  push32((uint32_t)(EAX));
  /* 110a296b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a296e push ecx */
  push32((uint32_t)(ECX));
  /* 110a296f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 110a2974 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a2977 push edx */
  push32((uint32_t)(EDX));
  /* 110a2978 call dword ptr [0x110c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c330c))), 0x110a297eu);
  /* 110a297e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a2980 jne 0x110a2989 */
  if (!C.zf) goto L_110a2989;
  /* 110a2982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a2984 jmp 0x110a2a69 */
  goto L_110a2a69;
L_110a2989:;
  /* 110a2989 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 110a2990 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 110a2993 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 110a2997 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a299a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 110a299c call 0x11097550 */
  push32(0x110a29a1u); f_11097550();
  /* 110a29a1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 110a29a4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110a29a7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 110a29aa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 110a29ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 110a29b4 jmp 0x110a29cd */
  goto L_110a29cd;
  /* 110a29b6 mov eax, 1 */
  EAX = (0x1u);
  /* 110a29bb ret  */
  ESPCHK(0x110a2810u, _esp0);
  ESP += 4; return;
  /* 110a29bc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 110a29bf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 110a29c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_110a29cd:;
  /* 110a29cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a29d1 jne 0x110a29da */
  if (!C.zf) goto L_110a29da;
  /* 110a29d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a29d5 jmp 0x110a2a69 */
  goto L_110a2a69;
L_110a29da:;
  /* 110a29da cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a29de jne 0x110a29e9 */
  if (!C.zf) goto L_110a29e9;
  /* 110a29e0 mov edx, dword ptr [0x110c0800] */
  EDX = (r32((uint32_t)(0x110c0800)));
  /* 110a29e6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_110a29e9:;
  /* 110a29e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a29ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110a29ef mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 110a29f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a29f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110a29fb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 110a2a02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110a2a05 push ecx */
  push32((uint32_t)(ECX));
  /* 110a2a06 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 110a2a09 push edx */
  push32((uint32_t)(EDX));
  /* 110a2a0a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 110a2a0d push eax */
  push32((uint32_t)(EAX));
  /* 110a2a0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2a11 push ecx */
  push32((uint32_t)(ECX));
  /* 110a2a12 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 110a2a15 push edx */
  push32((uint32_t)(EDX));
  /* 110a2a16 call dword ptr [0x110c3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3358))), 0x110a2a1cu);
  /* 110a2a1c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 110a2a1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a2a22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110a2a25 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a2a27 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 110a2a2c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2a32 je 0x110a2a48 */
  if (C.zf) goto L_110a2a48;
  /* 110a2a34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a2a37 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110a2a3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a2a3c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 110a2a40 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2a46 je 0x110a2a4c */
  if (C.zf) goto L_110a2a4c;
L_110a2a48:;
  /* 110a2a48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a2a4a jmp 0x110a2a69 */
  goto L_110a2a69;
L_110a2a4c:;
  /* 110a2a4c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a2a4f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 110a2a51 push eax */
  push32((uint32_t)(EAX));
  /* 110a2a52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110a2a55 push ecx */
  push32((uint32_t)(ECX));
  /* 110a2a56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a2a59 push edx */
  push32((uint32_t)(EDX));
  /* 110a2a5a call 0x1109c2a0 */
  push32(0x110a2a5fu); f_1109c2a0();
  /* 110a2a5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2a62 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 110a2a65 jmp 0x110a2a69 */
  goto L_110a2a69;
L_110a2a67:;
  /* 110a2a67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110a2a69:;
  /* 110a2a69 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 110a2a6c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a2a6f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 110a2a76 pop edi */
  EDI = (pop32());
  /* 110a2a77 pop esi */
  ESI = (pop32());
  /* 110a2a78 pop ebx */
  EBX = (pop32());
  /* 110a2a79 mov esp, ebp */
  ESP = (EBP);
  /* 110a2a7b pop ebp */
  EBP = (pop32());
  /* 110a2a7c ret  */
  ESPCHK(0x110a2810u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a80 @ 0x110a2a80 (208 bytes, 85 insns) */
void f_110a2a80(void) {
  FTRACE(0x110a2a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a2a80 push ebp */
  push32((uint32_t)(EBP));
  /* 110a2a81 mov ebp, esp */
  EBP = (ESP);
  /* 110a2a83 push edi */
  push32((uint32_t)(EDI));
  /* 110a2a84 push esi */
  push32((uint32_t)(ESI));
  /* 110a2a85 push ebx */
  push32((uint32_t)(EBX));
  /* 110a2a86 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 110a2a89 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2a8c lea eax, [0x110c07f8] */
  EAX = ((uint32_t)(0x110c07f8));
  /* 110a2a92 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2a96 jne 0x110a2ad3 */
  if (!C.zf) goto L_110a2ad3;
  /* 110a2a98 mov al, 0xff */
  AL = (0xffu);
  /* 110a2a9a mov edi, edi */
  EDI = (EDI);
L_110a2a9c:;
  /* 110a2a9c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110a2a9e je 0x110a2ace */
  if (C.zf) goto L_110a2ace;
  /* 110a2aa0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110a2aa2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110a2aa3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 110a2aa5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110a2aa6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a2aa8 je 0x110a2a9c */
  if (C.zf) goto L_110a2a9c;
  /* 110a2aaa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110a2aac cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a2aae sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110a2ab0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 110a2ab3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 110a2ab5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 110a2ab7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 110a2ab9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110a2abb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a2abd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110a2abf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 110a2ac2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 110a2ac4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 110a2ac6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a2ac8 je 0x110a2a9c */
  if (C.zf) goto L_110a2a9c;
  /* 110a2aca sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110a2acc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_110a2ace:;
  /* 110a2ace movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 110a2ad1 jmp 0x110a2b4b */
  goto L_110a2b4b;
L_110a2ad3:;
  /* 110a2ad3 lock inc dword ptr [0x110c098c] */
  x86_unimpl("lock inc @ 0x110a2ad3");
  /* 110a2ada cmp dword ptr [0x110c097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2ae1 jg 0x110a2ae7 */
  if ((!C.zf&&C.sf==C.of)) goto L_110a2ae7;
  /* 110a2ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a2ae5 jmp 0x110a2afc */
  goto L_110a2afc;
L_110a2ae7:;
  /* 110a2ae7 lock dec dword ptr [0x110c098c] */
  x86_unimpl("lock dec @ 0x110a2ae7");
  /* 110a2aee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110a2af0 call 0x11097db0 */
  push32(0x110a2af5u); f_11097db0();
  /* 110a2af5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_110a2afc:;
  /* 110a2afc mov eax, 0xff */
  EAX = (0xffu);
  /* 110a2b01 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110a2b03 nop  */
  /* nop */
L_110a2b04:;
  /* 110a2b04 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110a2b06 je 0x110a2b2f */
  if (C.zf) goto L_110a2b2f;
  /* 110a2b08 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110a2b0a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110a2b0b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 110a2b0d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110a2b0e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a2b10 je 0x110a2b04 */
  if (C.zf) goto L_110a2b04;
  /* 110a2b12 push eax */
  push32((uint32_t)(EAX));
  /* 110a2b13 push ebx */
  push32((uint32_t)(EBX));
  /* 110a2b14 call 0x110a3bf0 */
  push32(0x110a2b19u); f_110a3bf0();
  /* 110a2b19 mov ebx, eax */
  EBX = (EAX);
  /* 110a2b1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2b1e call 0x110a3bf0 */
  push32(0x110a2b23u); f_110a3bf0();
  /* 110a2b23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2b26 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a2b28 je 0x110a2b04 */
  if (C.zf) goto L_110a2b04;
  /* 110a2b2a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a2b2c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_110a2b2f:;
  /* 110a2b2f mov ebx, eax */
  EBX = (EAX);
  /* 110a2b31 pop eax */
  EAX = (pop32());
  /* 110a2b32 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a2b34 jne 0x110a2b3f */
  if (!C.zf) goto L_110a2b3f;
  /* 110a2b36 lock dec dword ptr [0x110c098c] */
  x86_unimpl("lock dec @ 0x110a2b36");
  /* 110a2b3d jmp 0x110a2b49 */
  goto L_110a2b49;
L_110a2b3f:;
  /* 110a2b3f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110a2b41 call 0x11097e50 */
  push32(0x110a2b46u); f_11097e50();
  /* 110a2b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a2b49:;
  /* 110a2b49 mov eax, ebx */
  EAX = (EBX);
L_110a2b4b:;
  /* 110a2b4b pop ebx */
  EBX = (pop32());
  /* 110a2b4c pop esi */
  ESI = (pop32());
  /* 110a2b4d pop edi */
  EDI = (pop32());
  /* 110a2b4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110a2b4f ret  */
  ESPCHK(0x110a2a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b50 @ 0x110a2b50 (257 bytes, 103 insns) */
void f_110a2b50(void) {
  FTRACE(0x110a2b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a2b50 push ebp */
  push32((uint32_t)(EBP));
  /* 110a2b51 mov ebp, esp */
  EBP = (ESP);
  /* 110a2b53 push edi */
  push32((uint32_t)(EDI));
  /* 110a2b54 push esi */
  push32((uint32_t)(ESI));
  /* 110a2b55 push ebx */
  push32((uint32_t)(EBX));
  /* 110a2b56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a2b59 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a2b5b je 0x110a2c4a */
  if (C.zf) goto L_110a2c4a;
  /* 110a2b61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2b64 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 110a2b67 lea eax, [0x110c07f8] */
  EAX = ((uint32_t)(0x110c07f8));
  /* 110a2b6d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2b71 jne 0x110a2bc1 */
  if (!C.zf) goto L_110a2bc1;
  /* 110a2b73 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 110a2b75 mov bl, 0x5a */
  BL = (0x5au);
  /* 110a2b77 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 110a2b79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110a2b7c:;
  /* 110a2b7c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 110a2b7e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 110a2b80 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 110a2b82 je 0x110a2ba5 */
  if (C.zf) goto L_110a2ba5;
  /* 110a2b84 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110a2b86 je 0x110a2ba5 */
  if (C.zf) goto L_110a2ba5;
  /* 110a2b88 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110a2b89 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110a2b8a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a2b8c jb 0x110a2b94 */
  if (C.cf) goto L_110a2b94;
  /* 110a2b8e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a2b90 ja 0x110a2b94 */
  if ((!C.cf&&!C.zf)) goto L_110a2b94;
  /* 110a2b92 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_110a2b94:;
  /* 110a2b94 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a2b96 jb 0x110a2b9e */
  if (C.cf) goto L_110a2b9e;
  /* 110a2b98 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a2b9a ja 0x110a2b9e */
  if ((!C.cf&&!C.zf)) goto L_110a2b9e;
  /* 110a2b9c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_110a2b9e:;
  /* 110a2b9e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a2ba0 jne 0x110a2baf */
  if (!C.zf) goto L_110a2baf;
  /* 110a2ba2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110a2ba3 jne 0x110a2b7c */
  if (!C.zf) goto L_110a2b7c;
L_110a2ba5:;
  /* 110a2ba5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a2ba7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a2ba9 je 0x110a2c4a */
  if (C.zf) goto L_110a2c4a;
L_110a2baf:;
  /* 110a2baf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 110a2bb4 jb 0x110a2c4a */
  if (C.cf) goto L_110a2c4a;
  /* 110a2bba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a2bbc jmp 0x110a2c4a */
  goto L_110a2c4a;
L_110a2bc1:;
  /* 110a2bc1 lock inc dword ptr [0x110c098c] */
  x86_unimpl("lock inc @ 0x110a2bc1");
  /* 110a2bc8 cmp dword ptr [0x110c097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2bcf jg 0x110a2bd5 */
  if ((!C.zf&&C.sf==C.of)) goto L_110a2bd5;
  /* 110a2bd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a2bd3 jmp 0x110a2bee */
  goto L_110a2bee;
L_110a2bd5:;
  /* 110a2bd5 lock dec dword ptr [0x110c098c] */
  x86_unimpl("lock dec @ 0x110a2bd5");
  /* 110a2bdc mov ebx, ecx */
  EBX = (ECX);
  /* 110a2bde push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110a2be0 call 0x11097db0 */
  push32(0x110a2be5u); f_11097db0();
  /* 110a2be5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 110a2bec mov ecx, ebx */
  ECX = (EBX);
L_110a2bee:;
  /* 110a2bee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a2bf0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110a2bf2 mov edi, edi */
  EDI = (EDI);
L_110a2bf4:;
  /* 110a2bf4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110a2bf6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a2bf8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 110a2bfa je 0x110a2c1f */
  if (C.zf) goto L_110a2c1f;
  /* 110a2bfc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110a2bfe je 0x110a2c1f */
  if (C.zf) goto L_110a2c1f;
  /* 110a2c00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110a2c01 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110a2c02 push ecx */
  push32((uint32_t)(ECX));
  /* 110a2c03 push eax */
  push32((uint32_t)(EAX));
  /* 110a2c04 push ebx */
  push32((uint32_t)(EBX));
  /* 110a2c05 call 0x110a3bf0 */
  push32(0x110a2c0au); f_110a3bf0();
  /* 110a2c0a mov ebx, eax */
  EBX = (EAX);
  /* 110a2c0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2c0f call 0x110a3bf0 */
  push32(0x110a2c14u); f_110a3bf0();
  /* 110a2c14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2c17 pop ecx */
  ECX = (pop32());
  /* 110a2c18 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2c1a jne 0x110a2c25 */
  if (!C.zf) goto L_110a2c25;
  /* 110a2c1c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110a2c1d jne 0x110a2bf4 */
  if (!C.zf) goto L_110a2bf4;
L_110a2c1f:;
  /* 110a2c1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a2c21 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2c23 je 0x110a2c2e */
  if (C.zf) goto L_110a2c2e;
L_110a2c25:;
  /* 110a2c25 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 110a2c2a jb 0x110a2c2e */
  if (C.cf) goto L_110a2c2e;
  /* 110a2c2c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_110a2c2e:;
  /* 110a2c2e pop eax */
  EAX = (pop32());
  /* 110a2c2f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a2c31 jne 0x110a2c3c */
  if (!C.zf) goto L_110a2c3c;
  /* 110a2c33 lock dec dword ptr [0x110c098c] */
  x86_unimpl("lock dec @ 0x110a2c33");
  /* 110a2c3a jmp 0x110a2c4a */
  goto L_110a2c4a;
L_110a2c3c:;
  /* 110a2c3c mov ebx, ecx */
  EBX = (ECX);
  /* 110a2c3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110a2c40 call 0x11097e50 */
  push32(0x110a2c45u); f_11097e50();
  /* 110a2c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2c48 mov ecx, ebx */
  ECX = (EBX);
L_110a2c4a:;
  /* 110a2c4a mov eax, ecx */
  EAX = (ECX);
  /* 110a2c4c pop ebx */
  EBX = (pop32());
  /* 110a2c4d pop esi */
  ESI = (pop32());
  /* 110a2c4e pop edi */
  EDI = (pop32());
  /* 110a2c4f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110a2c50 ret  */
  ESPCHK(0x110a2b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c60 @ 0x110a2c60 (255 bytes, 88 insns) */
void f_110a2c60(void) {
  FTRACE(0x110a2c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a2c60 push ebp */
  push32((uint32_t)(EBP));
  /* 110a2c61 mov ebp, esp */
  EBP = (ESP);
  /* 110a2c63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_110a2c66:;
  /* 110a2c66 cmp dword ptr [0x110beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2c6d jle 0x110a2c86 */
  if ((C.zf||C.sf!=C.of)) goto L_110a2c86;
  /* 110a2c6f push 8 */
  push32((uint32_t)(0x8u));
  /* 110a2c71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2c74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a2c76 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110a2c78 push ecx */
  push32((uint32_t)(ECX));
  /* 110a2c79 call 0x1109a3c0 */
  push32(0x110a2c7eu); f_1109a3c0();
  /* 110a2c7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2c81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 110a2c84 jmp 0x110a2c9f */
  goto L_110a2c9f;
L_110a2c86:;
  /* 110a2c86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2c89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a2c8b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a2c8d mov ecx, dword ptr [0x110bec98] */
  ECX = (r32((uint32_t)(0x110bec98)));
  /* 110a2c93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a2c95 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 110a2c99 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 110a2c9c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_110a2c9f:;
  /* 110a2c9f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2ca3 je 0x110a2cb0 */
  if (C.zf) goto L_110a2cb0;
  /* 110a2ca5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2ca8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2cab mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110a2cae jmp 0x110a2c66 */
  goto L_110a2c66;
L_110a2cb0:;
  /* 110a2cb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2cb3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a2cb5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110a2cb7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110a2cba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2cbd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2cc0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110a2cc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a2cc6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110a2cc9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2ccd je 0x110a2cd5 */
  if (C.zf) goto L_110a2cd5;
  /* 110a2ccf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2cd3 jne 0x110a2ce8 */
  if (!C.zf) goto L_110a2ce8;
L_110a2cd5:;
  /* 110a2cd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2cd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a2cda mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a2cdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a2cdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2ce2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2ce5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_110a2ce8:;
  /* 110a2ce8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_110a2cef:;
  /* 110a2cef cmp dword ptr [0x110beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2cf6 jle 0x110a2d0b */
  if ((C.zf||C.sf!=C.of)) goto L_110a2d0b;
  /* 110a2cf8 push 4 */
  push32((uint32_t)(0x4u));
  /* 110a2cfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a2cfd push edx */
  push32((uint32_t)(EDX));
  /* 110a2cfe call 0x1109a3c0 */
  push32(0x110a2d03u); f_1109a3c0();
  /* 110a2d03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2d06 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110a2d09 jmp 0x110a2d20 */
  goto L_110a2d20;
L_110a2d0b:;
  /* 110a2d0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a2d0e mov ecx, dword ptr [0x110bec98] */
  ECX = (r32((uint32_t)(0x110bec98)));
  /* 110a2d14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a2d16 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 110a2d1a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 110a2d1d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_110a2d20:;
  /* 110a2d20 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2d24 je 0x110a2d4b */
  if (C.zf) goto L_110a2d4b;
  /* 110a2d26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a2d29 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a2d2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a2d2f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 110a2d33 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110a2d36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2d39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a2d3b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110a2d3d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110a2d40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2d43 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2d46 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 110a2d49 jmp 0x110a2cef */
  goto L_110a2cef;
L_110a2d4b:;
  /* 110a2d4b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2d4f jne 0x110a2d58 */
  if (!C.zf) goto L_110a2d58;
  /* 110a2d51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a2d54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a2d56 jmp 0x110a2d5b */
  goto L_110a2d5b;
L_110a2d58:;
  /* 110a2d58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_110a2d5b:;
  /* 110a2d5b mov esp, ebp */
  ESP = (EBP);
  /* 110a2d5d pop ebp */
  EBP = (pop32());
  /* 110a2d5e ret  */
  ESPCHK(0x110a2c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d60 @ 0x110a2d60 (17 bytes, 8 insns) */
void f_110a2d60(void) {
  FTRACE(0x110a2d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a2d60 push ebp */
  push32((uint32_t)(EBP));
  /* 110a2d61 mov ebp, esp */
  EBP = (ESP);
  /* 110a2d63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2d66 push eax */
  push32((uint32_t)(EAX));
  /* 110a2d67 call 0x110a2c60 */
  push32(0x110a2d6cu); f_110a2c60();
  /* 110a2d6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2d6f pop ebp */
  EBP = (pop32());
  /* 110a2d70 ret  */
  ESPCHK(0x110a2d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d80 @ 0x110a2d80 (297 bytes, 106 insns) */
void f_110a2d80(void) {
  FTRACE(0x110a2d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a2d80 push ebp */
  push32((uint32_t)(EBP));
  /* 110a2d81 mov ebp, esp */
  EBP = (ESP);
  /* 110a2d83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a2d86 push esi */
  push32((uint32_t)(ESI));
L_110a2d87:;
  /* 110a2d87 cmp dword ptr [0x110beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2d8e jle 0x110a2da7 */
  if ((C.zf||C.sf!=C.of)) goto L_110a2da7;
  /* 110a2d90 push 8 */
  push32((uint32_t)(0x8u));
  /* 110a2d92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2d95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a2d97 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110a2d99 push ecx */
  push32((uint32_t)(ECX));
  /* 110a2d9a call 0x1109a3c0 */
  push32(0x110a2d9fu); f_1109a3c0();
  /* 110a2d9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2da2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110a2da5 jmp 0x110a2dc0 */
  goto L_110a2dc0;
L_110a2da7:;
  /* 110a2da7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2daa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a2dac mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a2dae mov ecx, dword ptr [0x110bec98] */
  ECX = (r32((uint32_t)(0x110bec98)));
  /* 110a2db4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a2db6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 110a2dba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 110a2dbd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_110a2dc0:;
  /* 110a2dc0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2dc4 je 0x110a2dd1 */
  if (C.zf) goto L_110a2dd1;
  /* 110a2dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2dc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2dcc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110a2dcf jmp 0x110a2d87 */
  goto L_110a2d87;
L_110a2dd1:;
  /* 110a2dd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2dd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a2dd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110a2dd8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110a2ddb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2dde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2de1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110a2de4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a2de7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 110a2dea cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2dee je 0x110a2df6 */
  if (C.zf) goto L_110a2df6;
  /* 110a2df0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2df4 jne 0x110a2e09 */
  if (!C.zf) goto L_110a2e09;
L_110a2df6:;
  /* 110a2df6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2df9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a2dfb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a2dfd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a2e00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2e03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2e06 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_110a2e09:;
  /* 110a2e09 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 110a2e10 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_110a2e17:;
  /* 110a2e17 cmp dword ptr [0x110beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2e1e jle 0x110a2e33 */
  if ((C.zf||C.sf!=C.of)) goto L_110a2e33;
  /* 110a2e20 push 4 */
  push32((uint32_t)(0x4u));
  /* 110a2e22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a2e25 push edx */
  push32((uint32_t)(EDX));
  /* 110a2e26 call 0x1109a3c0 */
  push32(0x110a2e2bu); f_1109a3c0();
  /* 110a2e2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2e2e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 110a2e31 jmp 0x110a2e48 */
  goto L_110a2e48;
L_110a2e33:;
  /* 110a2e33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a2e36 mov ecx, dword ptr [0x110bec98] */
  ECX = (r32((uint32_t)(0x110bec98)));
  /* 110a2e3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a2e3e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 110a2e42 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 110a2e45 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_110a2e48:;
  /* 110a2e48 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2e4c je 0x110a2e89 */
  if (C.zf) goto L_110a2e89;
  /* 110a2e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 110a2e50 push 0xa */
  push32((uint32_t)(0xau));
  /* 110a2e52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a2e55 push eax */
  push32((uint32_t)(EAX));
  /* 110a2e56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a2e59 push ecx */
  push32((uint32_t)(ECX));
  /* 110a2e5a call 0x110a3d20 */
  push32(0x110a2e5fu); f_110a3d20();
  /* 110a2e5f mov ecx, eax */
  ECX = (EAX);
  /* 110a2e61 mov esi, edx */
  ESI = (EDX);
  /* 110a2e63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a2e66 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a2e69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110a2e6a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2e6c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2e6e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110a2e71 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 110a2e74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2e77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a2e79 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a2e7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a2e7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a2e81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2e84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 110a2e87 jmp 0x110a2e17 */
  goto L_110a2e17;
L_110a2e89:;
  /* 110a2e89 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2e8d jne 0x110a2e9e */
  if (!C.zf) goto L_110a2e9e;
  /* 110a2e8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a2e92 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a2e94 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a2e97 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2e9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a2e9c jmp 0x110a2ea4 */
  goto L_110a2ea4;
L_110a2e9e:;
  /* 110a2e9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a2ea1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_110a2ea4:;
  /* 110a2ea4 pop esi */
  ESI = (pop32());
  /* 110a2ea5 mov esp, ebp */
  ESP = (EBP);
  /* 110a2ea7 pop ebp */
  EBP = (pop32());
  /* 110a2ea8 ret  */
  ESPCHK(0x110a2d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012eb0 @ 0x110a2eb0 (61 bytes, 18 insns) */
void f_110a2eb0(void) {
  FTRACE(0x110a2eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a2eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a2eb1 mov ebp, esp */
  EBP = (ESP);
  /* 110a2eb3 cmp dword ptr [0x110c0958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2eba jne 0x110a2eeb */
  if (!C.zf) goto L_110a2eeb;
  /* 110a2ebc push 0xb */
  push32((uint32_t)(0xbu));
  /* 110a2ebe call 0x11097db0 */
  push32(0x110a2ec3u); f_11097db0();
  /* 110a2ec3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2ec6 cmp dword ptr [0x110c0958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2ecd jne 0x110a2ee1 */
  if (!C.zf) goto L_110a2ee1;
  /* 110a2ecf call 0x110a2f10 */
  push32(0x110a2ed4u); f_110a2f10();
  /* 110a2ed4 mov eax, dword ptr [0x110c0958] */
  EAX = (r32((uint32_t)(0x110c0958)));
  /* 110a2ed9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2edc mov dword ptr [0x110c0958], eax */
  w32((uint32_t)(0x110c0958), (EAX));
L_110a2ee1:;
  /* 110a2ee1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 110a2ee3 call 0x11097e50 */
  push32(0x110a2ee8u); f_11097e50();
  /* 110a2ee8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a2eeb:;
  /* 110a2eeb pop ebp */
  EBP = (pop32());
  /* 110a2eec ret  */
  ESPCHK(0x110a2eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ef0 @ 0x110a2ef0 (30 bytes, 11 insns) */
void f_110a2ef0(void) {
  FTRACE(0x110a2ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a2ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a2ef1 mov ebp, esp */
  EBP = (ESP);
  /* 110a2ef3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 110a2ef5 call 0x11097db0 */
  push32(0x110a2efau); f_11097db0();
  /* 110a2efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2efd call 0x110a2f10 */
  push32(0x110a2f02u); f_110a2f10();
  /* 110a2f02 push 0xb */
  push32((uint32_t)(0xbu));
  /* 110a2f04 call 0x11097e50 */
  push32(0x110a2f09u); f_11097e50();
  /* 110a2f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2f0c pop ebp */
  EBP = (pop32());
  /* 110a2f0d ret  */
  ESPCHK(0x110a2ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f10 @ 0x110a2f10 (939 bytes, 266 insns) */
void f_110a2f10(void) {
  FTRACE(0x110a2f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a2f10 push ebp */
  push32((uint32_t)(EBP));
  /* 110a2f11 mov ebp, esp */
  EBP = (ESP);
  /* 110a2f13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a2f16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 110a2f1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 110a2f1f call 0x11097db0 */
  push32(0x110a2f24u); f_11097db0();
  /* 110a2f24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2f27 mov dword ptr [0x110c08a0], 0 */
  w32((uint32_t)(0x110c08a0), (0x0u));
  /* 110a2f31 mov dword ptr [0x110bfe38], 0xffffffff */
  w32((uint32_t)(0x110bfe38), (0xffffffffu));
  /* 110a2f3b mov eax, dword ptr [0x110bfe38] */
  EAX = (r32((uint32_t)(0x110bfe38)));
  /* 110a2f40 mov dword ptr [0x110bfe28], eax */
  w32((uint32_t)(0x110bfe28), (EAX));
  /* 110a2f45 push 0x110bcc18 */
  push32((uint32_t)(0x110bcc18u));
  /* 110a2f4a call 0x110a3d90 */
  push32(0x110a2f4fu); f_110a3d90();
  /* 110a2f4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2f52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110a2f55 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2f59 jne 0x110a3093 */
  if (!C.zf) goto L_110a3093;
  /* 110a2f5f push 0xc */
  push32((uint32_t)(0xcu));
  /* 110a2f61 call 0x11097e50 */
  push32(0x110a2f66u); f_11097e50();
  /* 110a2f66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2f69 push 0x110c08a8 */
  push32((uint32_t)(0x110c08a8u));
  /* 110a2f6e call dword ptr [0x110c3258] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3258))), 0x110a2f74u);
  /* 110a2f74 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2f77 je 0x110a308e */
  if (C.zf) goto L_110a308e;
  /* 110a2f7d mov dword ptr [0x110c08a0], 1 */
  w32((uint32_t)(0x110c08a0), (0x1u));
  /* 110a2f87 mov ecx, dword ptr [0x110c08a8] */
  ECX = (r32((uint32_t)(0x110c08a8)));
  /* 110a2f8d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a2f90 mov dword ptr [0x110bfd90], ecx */
  w32((uint32_t)(0x110bfd90), (ECX));
  /* 110a2f96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a2f98 mov dx, word ptr [0x110c08ee] */
  DX = (r16((uint32_t)(0x110c08ee)));
  /* 110a2f9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a2fa1 je 0x110a2fb9 */
  if (C.zf) goto L_110a2fb9;
  /* 110a2fa3 mov eax, dword ptr [0x110c08fc] */
  EAX = (r32((uint32_t)(0x110c08fc)));
  /* 110a2fa8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a2fab mov ecx, dword ptr [0x110bfd90] */
  ECX = (r32((uint32_t)(0x110bfd90)));
  /* 110a2fb1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a2fb3 mov dword ptr [0x110bfd90], ecx */
  w32((uint32_t)(0x110bfd90), (ECX));
L_110a2fb9:;
  /* 110a2fb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a2fbb mov dx, word ptr [0x110c0942] */
  DX = (r16((uint32_t)(0x110c0942)));
  /* 110a2fc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a2fc4 je 0x110a2fee */
  if (C.zf) goto L_110a2fee;
  /* 110a2fc6 cmp dword ptr [0x110c0950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a2fcd je 0x110a2fee */
  if (C.zf) goto L_110a2fee;
  /* 110a2fcf mov dword ptr [0x110bfd94], 1 */
  w32((uint32_t)(0x110bfd94), (0x1u));
  /* 110a2fd9 mov eax, dword ptr [0x110c0950] */
  EAX = (r32((uint32_t)(0x110c0950)));
  /* 110a2fde sub eax, dword ptr [0x110c08fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110c08fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a2fe4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a2fe7 mov dword ptr [0x110bfd98], eax */
  w32((uint32_t)(0x110bfd98), (EAX));
  /* 110a2fec jmp 0x110a3002 */
  goto L_110a3002;
L_110a2fee:;
  /* 110a2fee mov dword ptr [0x110bfd94], 0 */
  w32((uint32_t)(0x110bfd94), (0x0u));
  /* 110a2ff8 mov dword ptr [0x110bfd98], 0 */
  w32((uint32_t)(0x110bfd98), (0x0u));
L_110a3002:;
  /* 110a3002 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 110a3005 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3006 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3008 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 110a300a mov edx, dword ptr [0x110bfe1c] */
  EDX = (r32((uint32_t)(0x110bfe1c)));
  /* 110a3010 push edx */
  push32((uint32_t)(EDX));
  /* 110a3011 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110a3013 push 0x110c08ac */
  push32((uint32_t)(0x110c08acu));
  /* 110a3018 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 110a301d mov eax, dword ptr [0x110c0810] */
  EAX = (r32((uint32_t)(0x110c0810)));
  /* 110a3022 push eax */
  push32((uint32_t)(EAX));
  /* 110a3023 call dword ptr [0x110c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c330c))), 0x110a3029u);
  /* 110a3029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a302b je 0x110a303f */
  if (C.zf) goto L_110a303f;
  /* 110a302d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3031 jne 0x110a303f */
  if (!C.zf) goto L_110a303f;
  /* 110a3033 mov ecx, dword ptr [0x110bfe1c] */
  ECX = (r32((uint32_t)(0x110bfe1c)));
  /* 110a3039 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 110a303d jmp 0x110a3048 */
  goto L_110a3048;
L_110a303f:;
  /* 110a303f mov edx, dword ptr [0x110bfe1c] */
  EDX = (r32((uint32_t)(0x110bfe1c)));
  /* 110a3045 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_110a3048:;
  /* 110a3048 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 110a304b push eax */
  push32((uint32_t)(EAX));
  /* 110a304c push 0 */
  push32((uint32_t)(0x0u));
  /* 110a304e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 110a3050 mov ecx, dword ptr [0x110bfe20] */
  ECX = (r32((uint32_t)(0x110bfe20)));
  /* 110a3056 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3057 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110a3059 push 0x110c0900 */
  push32((uint32_t)(0x110c0900u));
  /* 110a305e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 110a3063 mov edx, dword ptr [0x110c0810] */
  EDX = (r32((uint32_t)(0x110c0810)));
  /* 110a3069 push edx */
  push32((uint32_t)(EDX));
  /* 110a306a call dword ptr [0x110c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c330c))), 0x110a3070u);
  /* 110a3070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a3072 je 0x110a3085 */
  if (C.zf) goto L_110a3085;
  /* 110a3074 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3078 jne 0x110a3085 */
  if (!C.zf) goto L_110a3085;
  /* 110a307a mov eax, dword ptr [0x110bfe20] */
  EAX = (r32((uint32_t)(0x110bfe20)));
  /* 110a307f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 110a3083 jmp 0x110a308e */
  goto L_110a308e;
L_110a3085:;
  /* 110a3085 mov ecx, dword ptr [0x110bfe20] */
  ECX = (r32((uint32_t)(0x110bfe20)));
  /* 110a308b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_110a308e:;
  /* 110a308e jmp 0x110a32b7 */
  goto L_110a32b7;
L_110a3093:;
  /* 110a3093 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3096 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110a3099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a309b je 0x110a30bd */
  if (C.zf) goto L_110a30bd;
  /* 110a309d cmp dword ptr [0x110c0954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a30a4 je 0x110a30cc */
  if (C.zf) goto L_110a30cc;
  /* 110a30a6 mov ecx, dword ptr [0x110c0954] */
  ECX = (r32((uint32_t)(0x110c0954)));
  /* 110a30ac push ecx */
  push32((uint32_t)(ECX));
  /* 110a30ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a30b0 push edx */
  push32((uint32_t)(EDX));
  /* 110a30b1 call 0x110a0040 */
  push32(0x110a30b6u); f_110a0040();
  /* 110a30b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a30b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a30bb jne 0x110a30cc */
  if (!C.zf) goto L_110a30cc;
L_110a30bd:;
  /* 110a30bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 110a30bf call 0x11097e50 */
  push32(0x110a30c4u); f_11097e50();
  /* 110a30c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a30c7 jmp 0x110a32b7 */
  goto L_110a32b7;
L_110a30cc:;
  /* 110a30cc push 2 */
  push32((uint32_t)(0x2u));
  /* 110a30ce mov eax, dword ptr [0x110c0954] */
  EAX = (r32((uint32_t)(0x110c0954)));
  /* 110a30d3 push eax */
  push32((uint32_t)(EAX));
  /* 110a30d4 call 0x11094e40 */
  push32(0x110a30d9u); f_11094e40();
  /* 110a30d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a30dc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 110a30e1 push 0x110bcc10 */
  push32((uint32_t)(0x110bcc10u));
  /* 110a30e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a30e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a30eb push ecx */
  push32((uint32_t)(ECX));
  /* 110a30ec call 0x110971e0 */
  push32(0x110a30f1u); f_110971e0();
  /* 110a30f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a30f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a30f7 push eax */
  push32((uint32_t)(EAX));
  /* 110a30f8 call 0x110943b0 */
  push32(0x110a30fdu); f_110943b0();
  /* 110a30fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3100 mov dword ptr [0x110c0954], eax */
  w32((uint32_t)(0x110c0954), (EAX));
  /* 110a3105 cmp dword ptr [0x110c0954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a310c jne 0x110a311d */
  if (!C.zf) goto L_110a311d;
  /* 110a310e push 0xc */
  push32((uint32_t)(0xcu));
  /* 110a3110 call 0x11097e50 */
  push32(0x110a3115u); f_11097e50();
  /* 110a3115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3118 jmp 0x110a32b7 */
  goto L_110a32b7;
L_110a311d:;
  /* 110a311d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3120 push edx */
  push32((uint32_t)(EDX));
  /* 110a3121 mov eax, dword ptr [0x110c0954] */
  EAX = (r32((uint32_t)(0x110c0954)));
  /* 110a3126 push eax */
  push32((uint32_t)(EAX));
  /* 110a3127 call 0x11097360 */
  push32(0x110a312cu); f_11097360();
  /* 110a312c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a312f push 0xc */
  push32((uint32_t)(0xcu));
  /* 110a3131 call 0x11097e50 */
  push32(0x110a3136u); f_11097e50();
  /* 110a3136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3139 push 3 */
  push32((uint32_t)(0x3u));
  /* 110a313b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a313e push ecx */
  push32((uint32_t)(ECX));
  /* 110a313f mov edx, dword ptr [0x110bfe1c] */
  EDX = (r32((uint32_t)(0x110bfe1c)));
  /* 110a3145 push edx */
  push32((uint32_t)(EDX));
  /* 110a3146 call 0x11097bd0 */
  push32(0x110a314bu); f_11097bd0();
  /* 110a314b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a314e mov eax, dword ptr [0x110bfe1c] */
  EAX = (r32((uint32_t)(0x110bfe1c)));
  /* 110a3153 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 110a3157 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a315a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a315d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110a3160 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3163 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110a3166 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3169 jne 0x110a317d */
  if (!C.zf) goto L_110a317d;
  /* 110a316b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a316e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3171 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110a3174 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3177 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a317a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_110a317d:;
  /* 110a317d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3180 push eax */
  push32((uint32_t)(EAX));
  /* 110a3181 call 0x110a2c60 */
  push32(0x110a3186u); f_110a2c60();
  /* 110a3186 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3189 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a318f mov dword ptr [0x110bfd90], eax */
  w32((uint32_t)(0x110bfd90), (EAX));
L_110a3194:;
  /* 110a3194 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3197 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110a319a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a319d je 0x110a31b5 */
  if (C.zf) goto L_110a31b5;
  /* 110a319f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a31a2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110a31a5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a31a8 jl 0x110a31c0 */
  if ((C.sf!=C.of)) goto L_110a31c0;
  /* 110a31aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a31ad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110a31b0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a31b3 jg 0x110a31c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_110a31c0;
L_110a31b5:;
  /* 110a31b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a31b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a31bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110a31be jmp 0x110a3194 */
  goto L_110a3194;
L_110a31c0:;
  /* 110a31c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a31c3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110a31c6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a31c9 jne 0x110a3265 */
  if (!C.zf) goto L_110a3265;
  /* 110a31cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a31d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a31d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110a31d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a31db push edx */
  push32((uint32_t)(EDX));
  /* 110a31dc call 0x110a2c60 */
  push32(0x110a31e1u); f_110a2c60();
  /* 110a31e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a31e4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a31e7 mov ecx, dword ptr [0x110bfd90] */
  ECX = (r32((uint32_t)(0x110bfd90)));
  /* 110a31ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a31ef mov dword ptr [0x110bfd90], ecx */
  w32((uint32_t)(0x110bfd90), (ECX));
L_110a31f5:;
  /* 110a31f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a31f8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110a31fb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a31fe jl 0x110a3216 */
  if ((C.sf!=C.of)) goto L_110a3216;
  /* 110a3200 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3203 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110a3206 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3209 jg 0x110a3216 */
  if ((!C.zf&&C.sf==C.of)) goto L_110a3216;
  /* 110a320b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a320e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3211 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110a3214 jmp 0x110a31f5 */
  goto L_110a31f5;
L_110a3216:;
  /* 110a3216 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3219 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110a321c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a321f jne 0x110a3265 */
  if (!C.zf) goto L_110a3265;
  /* 110a3221 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3224 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3227 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110a322a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a322d push ecx */
  push32((uint32_t)(ECX));
  /* 110a322e call 0x110a2c60 */
  push32(0x110a3233u); f_110a2c60();
  /* 110a3233 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3236 mov edx, dword ptr [0x110bfd90] */
  EDX = (r32((uint32_t)(0x110bfd90)));
  /* 110a323c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a323e mov dword ptr [0x110bfd90], edx */
  w32((uint32_t)(0x110bfd90), (EDX));
L_110a3244:;
  /* 110a3244 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3247 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110a324a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a324d jl 0x110a3265 */
  if ((C.sf!=C.of)) goto L_110a3265;
  /* 110a324f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3252 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110a3255 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3258 jg 0x110a3265 */
  if ((!C.zf&&C.sf==C.of)) goto L_110a3265;
  /* 110a325a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a325d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3260 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110a3263 jmp 0x110a3244 */
  goto L_110a3244;
L_110a3265:;
  /* 110a3265 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3269 je 0x110a3279 */
  if (C.zf) goto L_110a3279;
  /* 110a326b mov edx, dword ptr [0x110bfd90] */
  EDX = (r32((uint32_t)(0x110bfd90)));
  /* 110a3271 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a3273 mov dword ptr [0x110bfd90], edx */
  w32((uint32_t)(0x110bfd90), (EDX));
L_110a3279:;
  /* 110a3279 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a327c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110a327f mov dword ptr [0x110bfd94], ecx */
  w32((uint32_t)(0x110bfd94), (ECX));
  /* 110a3285 cmp dword ptr [0x110bfd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110bfd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a328c je 0x110a32ae */
  if (C.zf) goto L_110a32ae;
  /* 110a328e push 3 */
  push32((uint32_t)(0x3u));
  /* 110a3290 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3293 push edx */
  push32((uint32_t)(EDX));
  /* 110a3294 mov eax, dword ptr [0x110bfe20] */
  EAX = (r32((uint32_t)(0x110bfe20)));
  /* 110a3299 push eax */
  push32((uint32_t)(EAX));
  /* 110a329a call 0x11097bd0 */
  push32(0x110a329fu); f_11097bd0();
  /* 110a329f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a32a2 mov ecx, dword ptr [0x110bfe20] */
  ECX = (r32((uint32_t)(0x110bfe20)));
  /* 110a32a8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 110a32ac jmp 0x110a32b7 */
  goto L_110a32b7;
L_110a32ae:;
  /* 110a32ae mov edx, dword ptr [0x110bfe20] */
  EDX = (r32((uint32_t)(0x110bfe20)));
  /* 110a32b4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_110a32b7:;
  /* 110a32b7 mov esp, ebp */
  ESP = (EBP);
  /* 110a32b9 pop ebp */
  EBP = (pop32());
  /* 110a32ba ret  */
  ESPCHK(0x110a2f10u, _esp0);
  ESP += 4; return;
}

/* FUN_100132c0 @ 0x110a32c0 (46 bytes, 18 insns) */
void f_110a32c0(void) {
  FTRACE(0x110a32c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a32c0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a32c1 mov ebp, esp */
  EBP = (ESP);
  /* 110a32c3 push ecx */
  push32((uint32_t)(ECX));
  /* 110a32c4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 110a32c6 call 0x11097db0 */
  push32(0x110a32cbu); f_11097db0();
  /* 110a32cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a32ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a32d1 push eax */
  push32((uint32_t)(EAX));
  /* 110a32d2 call 0x110a32f0 */
  push32(0x110a32d7u); f_110a32f0();
  /* 110a32d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a32da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a32dd push 0xb */
  push32((uint32_t)(0xbu));
  /* 110a32df call 0x11097e50 */
  push32(0x110a32e4u); f_11097e50();
  /* 110a32e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a32e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a32ea mov esp, ebp */
  ESP = (EBP);
  /* 110a32ec pop ebp */
  EBP = (pop32());
  /* 110a32ed ret  */
  ESPCHK(0x110a32c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100132f0 @ 0x110a32f0 (762 bytes, 246 insns) */
void f_110a32f0(void) {
  FTRACE(0x110a32f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a32f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a32f1 mov ebp, esp */
  EBP = (ESP);
  /* 110a32f3 push ecx */
  push32((uint32_t)(ECX));
  /* 110a32f4 cmp dword ptr [0x110bfd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110bfd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a32fb jne 0x110a3304 */
  if (!C.zf) goto L_110a3304;
  /* 110a32fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a32ff jmp 0x110a35e6 */
  goto L_110a35e6;
L_110a3304:;
  /* 110a3304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3307 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 110a330a cmp ecx, dword ptr [0x110bfe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110bfe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3310 jne 0x110a3324 */
  if (!C.zf) goto L_110a3324;
  /* 110a3312 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3315 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 110a3318 cmp eax, dword ptr [0x110bfe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110bfe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a331e je 0x110a34eb */
  if (C.zf) goto L_110a34eb;
L_110a3324:;
  /* 110a3324 cmp dword ptr [0x110c08a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c08a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a332b je 0x110a34a5 */
  if (C.zf) goto L_110a34a5;
  /* 110a3331 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a3333 mov cx, word ptr [0x110c0940] */
  CX = (r16((uint32_t)(0x110c0940)));
  /* 110a333a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a333c jne 0x110a3399 */
  if (!C.zf) goto L_110a3399;
  /* 110a333e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a3340 mov dx, word ptr [0x110c094e] */
  DX = (r16((uint32_t)(0x110c094e)));
  /* 110a3347 push edx */
  push32((uint32_t)(EDX));
  /* 110a3348 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a334a mov ax, word ptr [0x110c094c] */
  AX = (r16((uint32_t)(0x110c094c)));
  /* 110a3350 push eax */
  push32((uint32_t)(EAX));
  /* 110a3351 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a3353 mov cx, word ptr [0x110c094a] */
  CX = (r16((uint32_t)(0x110c094a)));
  /* 110a335a push ecx */
  push32((uint32_t)(ECX));
  /* 110a335b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a335d mov dx, word ptr [0x110c0948] */
  DX = (r16((uint32_t)(0x110c0948)));
  /* 110a3364 push edx */
  push32((uint32_t)(EDX));
  /* 110a3365 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3367 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a3369 mov ax, word ptr [0x110c0944] */
  AX = (r16((uint32_t)(0x110c0944)));
  /* 110a336f push eax */
  push32((uint32_t)(EAX));
  /* 110a3370 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a3372 mov cx, word ptr [0x110c0946] */
  CX = (r16((uint32_t)(0x110c0946)));
  /* 110a3379 push ecx */
  push32((uint32_t)(ECX));
  /* 110a337a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a337c mov dx, word ptr [0x110c0942] */
  DX = (r16((uint32_t)(0x110c0942)));
  /* 110a3383 push edx */
  push32((uint32_t)(EDX));
  /* 110a3384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3387 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 110a338a push ecx */
  push32((uint32_t)(ECX));
  /* 110a338b push 1 */
  push32((uint32_t)(0x1u));
  /* 110a338d push 1 */
  push32((uint32_t)(0x1u));
  /* 110a338f call 0x110a35f0 */
  push32(0x110a3394u); f_110a35f0();
  /* 110a3394 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3397 jmp 0x110a33ea */
  goto L_110a33ea;
L_110a3399:;
  /* 110a3399 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a339b mov dx, word ptr [0x110c094e] */
  DX = (r16((uint32_t)(0x110c094e)));
  /* 110a33a2 push edx */
  push32((uint32_t)(EDX));
  /* 110a33a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a33a5 mov ax, word ptr [0x110c094c] */
  AX = (r16((uint32_t)(0x110c094c)));
  /* 110a33ab push eax */
  push32((uint32_t)(EAX));
  /* 110a33ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a33ae mov cx, word ptr [0x110c094a] */
  CX = (r16((uint32_t)(0x110c094a)));
  /* 110a33b5 push ecx */
  push32((uint32_t)(ECX));
  /* 110a33b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a33b8 mov dx, word ptr [0x110c0948] */
  DX = (r16((uint32_t)(0x110c0948)));
  /* 110a33bf push edx */
  push32((uint32_t)(EDX));
  /* 110a33c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a33c2 mov ax, word ptr [0x110c0946] */
  AX = (r16((uint32_t)(0x110c0946)));
  /* 110a33c8 push eax */
  push32((uint32_t)(EAX));
  /* 110a33c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a33cb push 0 */
  push32((uint32_t)(0x0u));
  /* 110a33cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a33cf mov cx, word ptr [0x110c0942] */
  CX = (r16((uint32_t)(0x110c0942)));
  /* 110a33d6 push ecx */
  push32((uint32_t)(ECX));
  /* 110a33d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a33da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 110a33dd push eax */
  push32((uint32_t)(EAX));
  /* 110a33de push 0 */
  push32((uint32_t)(0x0u));
  /* 110a33e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a33e2 call 0x110a35f0 */
  push32(0x110a33e7u); f_110a35f0();
  /* 110a33e7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a33ea:;
  /* 110a33ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a33ec mov cx, word ptr [0x110c08ec] */
  CX = (r16((uint32_t)(0x110c08ec)));
  /* 110a33f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a33f5 jne 0x110a3452 */
  if (!C.zf) goto L_110a3452;
  /* 110a33f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a33f9 mov dx, word ptr [0x110c08fa] */
  DX = (r16((uint32_t)(0x110c08fa)));
  /* 110a3400 push edx */
  push32((uint32_t)(EDX));
  /* 110a3401 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a3403 mov ax, word ptr [0x110c08f8] */
  AX = (r16((uint32_t)(0x110c08f8)));
  /* 110a3409 push eax */
  push32((uint32_t)(EAX));
  /* 110a340a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a340c mov cx, word ptr [0x110c08f6] */
  CX = (r16((uint32_t)(0x110c08f6)));
  /* 110a3413 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3414 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a3416 mov dx, word ptr [0x110c08f4] */
  DX = (r16((uint32_t)(0x110c08f4)));
  /* 110a341d push edx */
  push32((uint32_t)(EDX));
  /* 110a341e push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3420 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a3422 mov ax, word ptr [0x110c08f0] */
  AX = (r16((uint32_t)(0x110c08f0)));
  /* 110a3428 push eax */
  push32((uint32_t)(EAX));
  /* 110a3429 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a342b mov cx, word ptr [0x110c08f2] */
  CX = (r16((uint32_t)(0x110c08f2)));
  /* 110a3432 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3433 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a3435 mov dx, word ptr [0x110c08ee] */
  DX = (r16((uint32_t)(0x110c08ee)));
  /* 110a343c push edx */
  push32((uint32_t)(EDX));
  /* 110a343d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3440 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 110a3443 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3444 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a3446 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3448 call 0x110a35f0 */
  push32(0x110a344du); f_110a35f0();
  /* 110a344d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3450 jmp 0x110a34a3 */
  goto L_110a34a3;
L_110a3452:;
  /* 110a3452 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a3454 mov dx, word ptr [0x110c08fa] */
  DX = (r16((uint32_t)(0x110c08fa)));
  /* 110a345b push edx */
  push32((uint32_t)(EDX));
  /* 110a345c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a345e mov ax, word ptr [0x110c08f8] */
  AX = (r16((uint32_t)(0x110c08f8)));
  /* 110a3464 push eax */
  push32((uint32_t)(EAX));
  /* 110a3465 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a3467 mov cx, word ptr [0x110c08f6] */
  CX = (r16((uint32_t)(0x110c08f6)));
  /* 110a346e push ecx */
  push32((uint32_t)(ECX));
  /* 110a346f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a3471 mov dx, word ptr [0x110c08f4] */
  DX = (r16((uint32_t)(0x110c08f4)));
  /* 110a3478 push edx */
  push32((uint32_t)(EDX));
  /* 110a3479 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a347b mov ax, word ptr [0x110c08f2] */
  AX = (r16((uint32_t)(0x110c08f2)));
  /* 110a3481 push eax */
  push32((uint32_t)(EAX));
  /* 110a3482 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3484 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3486 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a3488 mov cx, word ptr [0x110c08ee] */
  CX = (r16((uint32_t)(0x110c08ee)));
  /* 110a348f push ecx */
  push32((uint32_t)(ECX));
  /* 110a3490 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3493 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 110a3496 push eax */
  push32((uint32_t)(EAX));
  /* 110a3497 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3499 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a349b call 0x110a35f0 */
  push32(0x110a34a0u); f_110a35f0();
  /* 110a34a0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a34a3:;
  /* 110a34a3 jmp 0x110a34eb */
  goto L_110a34eb;
L_110a34a5:;
  /* 110a34a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a34a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a34a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a34ab push 2 */
  push32((uint32_t)(0x2u));
  /* 110a34ad push 0 */
  push32((uint32_t)(0x0u));
  /* 110a34af push 0 */
  push32((uint32_t)(0x0u));
  /* 110a34b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a34b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 110a34b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a34b8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 110a34bb push edx */
  push32((uint32_t)(EDX));
  /* 110a34bc push 1 */
  push32((uint32_t)(0x1u));
  /* 110a34be push 1 */
  push32((uint32_t)(0x1u));
  /* 110a34c0 call 0x110a35f0 */
  push32(0x110a34c5u); f_110a35f0();
  /* 110a34c5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a34c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a34ca push 0 */
  push32((uint32_t)(0x0u));
  /* 110a34cc push 0 */
  push32((uint32_t)(0x0u));
  /* 110a34ce push 2 */
  push32((uint32_t)(0x2u));
  /* 110a34d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a34d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a34d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 110a34d6 push 0xa */
  push32((uint32_t)(0xau));
  /* 110a34d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a34db mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 110a34de push ecx */
  push32((uint32_t)(ECX));
  /* 110a34df push 1 */
  push32((uint32_t)(0x1u));
  /* 110a34e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a34e3 call 0x110a35f0 */
  push32(0x110a34e8u); f_110a35f0();
  /* 110a34e8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a34eb:;
  /* 110a34eb mov edx, dword ptr [0x110bfe2c] */
  EDX = (r32((uint32_t)(0x110bfe2c)));
  /* 110a34f1 cmp edx, dword ptr [0x110bfe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x110bfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a34f7 jge 0x110a3544 */
  if ((C.sf==C.of)) goto L_110a3544;
  /* 110a34f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a34fc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 110a34ff cmp ecx, dword ptr [0x110bfe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110bfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3505 jl 0x110a3515 */
  if ((C.sf!=C.of)) goto L_110a3515;
  /* 110a3507 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a350a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 110a350d cmp eax, dword ptr [0x110bfe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110bfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3513 jle 0x110a351c */
  if ((C.zf||C.sf!=C.of)) goto L_110a351c;
L_110a3515:;
  /* 110a3515 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a3517 jmp 0x110a35e6 */
  goto L_110a35e6;
L_110a351c:;
  /* 110a351c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a351f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 110a3522 cmp edx, dword ptr [0x110bfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x110bfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3528 jle 0x110a3542 */
  if ((C.zf||C.sf!=C.of)) goto L_110a3542;
  /* 110a352a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a352d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 110a3530 cmp ecx, dword ptr [0x110bfe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110bfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3536 jge 0x110a3542 */
  if ((C.sf==C.of)) goto L_110a3542;
  /* 110a3538 mov eax, 1 */
  EAX = (0x1u);
  /* 110a353d jmp 0x110a35e6 */
  goto L_110a35e6;
L_110a3542:;
  /* 110a3542 jmp 0x110a3587 */
  goto L_110a3587;
L_110a3544:;
  /* 110a3544 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3547 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 110a354a cmp eax, dword ptr [0x110bfe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110bfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3550 jl 0x110a3560 */
  if ((C.sf!=C.of)) goto L_110a3560;
  /* 110a3552 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3555 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 110a3558 cmp edx, dword ptr [0x110bfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x110bfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a355e jle 0x110a3567 */
  if ((C.zf||C.sf!=C.of)) goto L_110a3567;
L_110a3560:;
  /* 110a3560 mov eax, 1 */
  EAX = (0x1u);
  /* 110a3565 jmp 0x110a35e6 */
  goto L_110a35e6;
L_110a3567:;
  /* 110a3567 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a356a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 110a356d cmp ecx, dword ptr [0x110bfe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110bfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3573 jle 0x110a3587 */
  if ((C.zf||C.sf!=C.of)) goto L_110a3587;
  /* 110a3575 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3578 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 110a357b cmp eax, dword ptr [0x110bfe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110bfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3581 jge 0x110a3587 */
  if ((C.sf==C.of)) goto L_110a3587;
  /* 110a3583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a3585 jmp 0x110a35e6 */
  goto L_110a35e6;
L_110a3587:;
  /* 110a3587 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a358a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 110a358d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a3590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3593 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a3595 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3597 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a359a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 110a359d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a35a3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a35a5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a35ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110a35ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a35b1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 110a35b4 cmp edx, dword ptr [0x110bfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x110bfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a35ba jne 0x110a35d2 */
  if (!C.zf) goto L_110a35d2;
  /* 110a35bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a35bf cmp eax, dword ptr [0x110bfe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110bfe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a35c5 jl 0x110a35ce */
  if ((C.sf!=C.of)) goto L_110a35ce;
  /* 110a35c7 mov eax, 1 */
  EAX = (0x1u);
  /* 110a35cc jmp 0x110a35e6 */
  goto L_110a35e6;
L_110a35ce:;
  /* 110a35ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a35d0 jmp 0x110a35e6 */
  goto L_110a35e6;
L_110a35d2:;
  /* 110a35d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a35d5 cmp ecx, dword ptr [0x110bfe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110bfe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a35db jge 0x110a35e4 */
  if ((C.sf==C.of)) goto L_110a35e4;
  /* 110a35dd mov eax, 1 */
  EAX = (0x1u);
  /* 110a35e2 jmp 0x110a35e6 */
  goto L_110a35e6;
L_110a35e4:;
  /* 110a35e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110a35e6:;
  /* 110a35e6 mov esp, ebp */
  ESP = (EBP);
  /* 110a35e8 pop ebp */
  EBP = (pop32());
  /* 110a35e9 ret  */
  ESPCHK(0x110a32f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100135f0 @ 0x110a35f0 (504 bytes, 145 insns) */
void f_110a35f0(void) {
  FTRACE(0x110a35f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a35f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a35f1 mov ebp, esp */
  EBP = (ESP);
  /* 110a35f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a35f6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a35fa jne 0x110a36cc */
  if (!C.zf) goto L_110a36cc;
  /* 110a3600 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a3603 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 110a3606 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a3608 jne 0x110a3619 */
  if (!C.zf) goto L_110a3619;
  /* 110a360a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a360d mov edx, dword ptr [ecx*4 + 0x110bfe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x110bfe4c)));
  /* 110a3614 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 110a3617 jmp 0x110a3626 */
  goto L_110a3626;
L_110a3619:;
  /* 110a3619 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a361c mov ecx, dword ptr [eax*4 + 0x110bfe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x110bfe80)));
  /* 110a3623 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_110a3626:;
  /* 110a3626 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3629 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a362c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110a362f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a3632 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a3635 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a363b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a363e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3640 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a3643 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a3646 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 110a3649 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 110a364d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110a364e mov ecx, 7 */
  ECX = (0x7u);
  /* 110a3653 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110a3655 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110a3658 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a365b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a365e jge 0x110a3679 */
  if ((C.sf==C.of)) goto L_110a3679;
  /* 110a3660 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 110a3663 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a3666 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a3669 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a366c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a366f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3672 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3674 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110a3677 jmp 0x110a368d */
  goto L_110a368d;
L_110a3679:;
  /* 110a3679 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 110a367c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a367f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a3682 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a3685 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3688 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a368a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_110a368d:;
  /* 110a368d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3691 jne 0x110a36ca */
  if (!C.zf) goto L_110a36ca;
  /* 110a3693 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a3696 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110a3699 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a369b jne 0x110a36ac */
  if (!C.zf) goto L_110a36ac;
  /* 110a369d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a36a0 mov eax, dword ptr [edx*4 + 0x110bfe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x110bfe50)));
  /* 110a36a7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 110a36aa jmp 0x110a36b9 */
  goto L_110a36b9;
L_110a36ac:;
  /* 110a36ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a36af mov edx, dword ptr [ecx*4 + 0x110bfe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x110bfe84)));
  /* 110a36b6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_110a36b9:;
  /* 110a36b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a36bc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a36bf jle 0x110a36ca */
  if ((C.zf||C.sf!=C.of)) goto L_110a36ca;
  /* 110a36c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a36c4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a36c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_110a36ca:;
  /* 110a36ca jmp 0x110a3701 */
  goto L_110a3701;
L_110a36cc:;
  /* 110a36cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a36cf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 110a36d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a36d4 jne 0x110a36e5 */
  if (!C.zf) goto L_110a36e5;
  /* 110a36d6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a36d9 mov ecx, dword ptr [eax*4 + 0x110bfe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x110bfe4c)));
  /* 110a36e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 110a36e3 jmp 0x110a36f2 */
  goto L_110a36f2;
L_110a36e5:;
  /* 110a36e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a36e8 mov eax, dword ptr [edx*4 + 0x110bfe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x110bfe80)));
  /* 110a36ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_110a36f2:;
  /* 110a36f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a36f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110a36f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a36fb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a36fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_110a3701:;
  /* 110a3701 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3705 jne 0x110a3741 */
  if (!C.zf) goto L_110a3741;
  /* 110a3707 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a370a mov dword ptr [0x110bfe2c], eax */
  w32((uint32_t)(0x110bfe2c), (EAX));
  /* 110a370f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 110a3712 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a3715 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 110a3718 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a371a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a371d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 110a3720 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3722 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a3728 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 110a372b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a372d mov dword ptr [0x110bfe30], ecx */
  w32((uint32_t)(0x110bfe30), (ECX));
  /* 110a3733 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a3736 mov dword ptr [0x110bfe28], edx */
  w32((uint32_t)(0x110bfe28), (EDX));
  /* 110a373c jmp 0x110a37e4 */
  goto L_110a37e4;
L_110a3741:;
  /* 110a3741 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a3744 mov dword ptr [0x110bfe3c], eax */
  w32((uint32_t)(0x110bfe3c), (EAX));
  /* 110a3749 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 110a374c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a374f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 110a3752 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3754 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a3757 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 110a375a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a375c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a3762 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 110a3765 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3767 mov dword ptr [0x110bfe40], ecx */
  w32((uint32_t)(0x110bfe40), (ECX));
  /* 110a376d mov edx, dword ptr [0x110bfd98] */
  EDX = (r32((uint32_t)(0x110bfd98)));
  /* 110a3773 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110a3779 mov eax, dword ptr [0x110bfe40] */
  EAX = (r32((uint32_t)(0x110bfe40)));
  /* 110a377e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3780 mov dword ptr [0x110bfe40], eax */
  w32((uint32_t)(0x110bfe40), (EAX));
  /* 110a3785 cmp dword ptr [0x110bfe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110bfe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a378c jge 0x110a37b1 */
  if ((C.sf==C.of)) goto L_110a37b1;
  /* 110a378e mov ecx, dword ptr [0x110bfe40] */
  ECX = (r32((uint32_t)(0x110bfe40)));
  /* 110a3794 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a379a mov dword ptr [0x110bfe40], ecx */
  w32((uint32_t)(0x110bfe40), (ECX));
  /* 110a37a0 mov edx, dword ptr [0x110bfe3c] */
  EDX = (r32((uint32_t)(0x110bfe3c)));
  /* 110a37a6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a37a9 mov dword ptr [0x110bfe3c], edx */
  w32((uint32_t)(0x110bfe3c), (EDX));
  /* 110a37af jmp 0x110a37db */
  goto L_110a37db;
L_110a37b1:;
  /* 110a37b1 cmp dword ptr [0x110bfe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x110bfe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a37bb jl 0x110a37db */
  if ((C.sf!=C.of)) goto L_110a37db;
  /* 110a37bd mov eax, dword ptr [0x110bfe40] */
  EAX = (r32((uint32_t)(0x110bfe40)));
  /* 110a37c2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a37c7 mov dword ptr [0x110bfe40], eax */
  w32((uint32_t)(0x110bfe40), (EAX));
  /* 110a37cc mov ecx, dword ptr [0x110bfe3c] */
  ECX = (r32((uint32_t)(0x110bfe3c)));
  /* 110a37d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a37d5 mov dword ptr [0x110bfe3c], ecx */
  w32((uint32_t)(0x110bfe3c), (ECX));
L_110a37db:;
  /* 110a37db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a37de mov dword ptr [0x110bfe38], edx */
  w32((uint32_t)(0x110bfe38), (EDX));
L_110a37e4:;
  /* 110a37e4 mov esp, ebp */
  ESP = (EBP);
  /* 110a37e6 pop ebp */
  EBP = (pop32());
  /* 110a37e7 ret  */
  ESPCHK(0x110a35f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100137f0 @ 0x110a37f0 (382 bytes, 135 insns) */
void f_110a37f0(void) {
  FTRACE(0x110a37f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a37f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a37f1 mov ebp, esp */
  EBP = (ESP);
  /* 110a37f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110a37f5 push 0x110bcc20 */
  push32((uint32_t)(0x110bcc20u));
  /* 110a37fa push 0x1109d4b8 */
  push32((uint32_t)(0x1109d4b8u));
  /* 110a37ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 110a3805 push eax */
  push32((uint32_t)(EAX));
  /* 110a3806 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 110a380d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3810 push ebx */
  push32((uint32_t)(EBX));
  /* 110a3811 push esi */
  push32((uint32_t)(ESI));
  /* 110a3812 push edi */
  push32((uint32_t)(EDI));
  /* 110a3813 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110a3816 cmp dword ptr [0x110c095c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c095c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a381d jne 0x110a3862 */
  if (!C.zf) goto L_110a3862;
  /* 110a381f push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3821 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3823 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a3825 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3827 call dword ptr [0x110c3254] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3254))), 0x110a382du);
  /* 110a382d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a382f je 0x110a383d */
  if (C.zf) goto L_110a383d;
  /* 110a3831 mov dword ptr [0x110c095c], 1 */
  w32((uint32_t)(0x110c095c), (0x1u));
  /* 110a383b jmp 0x110a3862 */
  goto L_110a3862;
L_110a383d:;
  /* 110a383d push 0 */
  push32((uint32_t)(0x0u));
  /* 110a383f push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3841 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a3843 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3845 call dword ptr [0x110c326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c326c))), 0x110a384bu);
  /* 110a384b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a384d je 0x110a385b */
  if (C.zf) goto L_110a385b;
  /* 110a384f mov dword ptr [0x110c095c], 2 */
  w32((uint32_t)(0x110c095c), (0x2u));
  /* 110a3859 jmp 0x110a3862 */
  goto L_110a3862;
L_110a385b:;
  /* 110a385b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a385d jmp 0x110a3971 */
  goto L_110a3971;
L_110a3862:;
  /* 110a3862 cmp dword ptr [0x110c095c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c095c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3869 jne 0x110a3886 */
  if (!C.zf) goto L_110a3886;
  /* 110a386b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a386e push eax */
  push32((uint32_t)(EAX));
  /* 110a386f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a3872 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3873 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a3876 push edx */
  push32((uint32_t)(EDX));
  /* 110a3877 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a387a push eax */
  push32((uint32_t)(EAX));
  /* 110a387b call dword ptr [0x110c3254] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3254))), 0x110a3881u);
  /* 110a3881 jmp 0x110a3971 */
  goto L_110a3971;
L_110a3886:;
  /* 110a3886 cmp dword ptr [0x110c095c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x110c095c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a388d jne 0x110a396f */
  if (!C.zf) goto L_110a396f;
  /* 110a3893 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3897 jne 0x110a38a2 */
  if (!C.zf) goto L_110a38a2;
  /* 110a3899 mov ecx, dword ptr [0x110c0810] */
  ECX = (r32((uint32_t)(0x110c0810)));
  /* 110a389f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_110a38a2:;
  /* 110a38a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a38a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a38a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a38a9 push edx */
  push32((uint32_t)(EDX));
  /* 110a38aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a38ad push eax */
  push32((uint32_t)(EAX));
  /* 110a38ae call dword ptr [0x110c326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c326c))), 0x110a38b4u);
  /* 110a38b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 110a38b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a38bb jne 0x110a38c4 */
  if (!C.zf) goto L_110a38c4;
  /* 110a38bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a38bf jmp 0x110a3971 */
  goto L_110a3971;
L_110a38c4:;
  /* 110a38c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 110a38cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110a38ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a38d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 110a38d3 call 0x11097550 */
  push32(0x110a38d8u); f_11097550();
  /* 110a38d8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 110a38db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110a38de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 110a38e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 110a38e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 110a38eb jmp 0x110a3904 */
  goto L_110a3904;
  /* 110a38ed mov eax, 1 */
  EAX = (0x1u);
  /* 110a38f2 ret  */
  ESPCHK(0x110a37f0u, _esp0);
  ESP += 4; return;
  /* 110a38f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 110a38f6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 110a38fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_110a3904:;
  /* 110a3904 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3908 jne 0x110a390e */
  if (!C.zf) goto L_110a390e;
  /* 110a390a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a390c jmp 0x110a3971 */
  goto L_110a3971;
L_110a390e:;
  /* 110a390e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110a3911 push edx */
  push32((uint32_t)(EDX));
  /* 110a3912 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 110a3915 push eax */
  push32((uint32_t)(EAX));
  /* 110a3916 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a3919 push ecx */
  push32((uint32_t)(ECX));
  /* 110a391a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a391d push edx */
  push32((uint32_t)(EDX));
  /* 110a391e call dword ptr [0x110c326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c326c))), 0x110a3924u);
  /* 110a3924 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a3926 jne 0x110a392c */
  if (!C.zf) goto L_110a392c;
  /* 110a3928 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a392a jmp 0x110a3971 */
  goto L_110a3971;
L_110a392c:;
  /* 110a392c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3930 jne 0x110a394d */
  if (!C.zf) goto L_110a394d;
  /* 110a3932 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3934 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3936 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110a3938 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 110a393b push eax */
  push32((uint32_t)(EAX));
  /* 110a393c push 1 */
  push32((uint32_t)(0x1u));
  /* 110a393e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a3941 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3942 call dword ptr [0x110c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3354))), 0x110a3948u);
  /* 110a3948 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 110a394b jmp 0x110a396a */
  goto L_110a396a;
L_110a394d:;
  /* 110a394d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a3950 push edx */
  push32((uint32_t)(EDX));
  /* 110a3951 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a3954 push eax */
  push32((uint32_t)(EAX));
  /* 110a3955 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110a3957 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 110a395a push ecx */
  push32((uint32_t)(ECX));
  /* 110a395b push 1 */
  push32((uint32_t)(0x1u));
  /* 110a395d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a3960 push edx */
  push32((uint32_t)(EDX));
  /* 110a3961 call dword ptr [0x110c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3354))), 0x110a3967u);
  /* 110a3967 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_110a396a:;
  /* 110a396a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110a396d jmp 0x110a3971 */
  goto L_110a3971;
L_110a396f:;
  /* 110a396f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110a3971:;
  /* 110a3971 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 110a3974 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a3977 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 110a397e pop edi */
  EDI = (pop32());
  /* 110a397f pop esi */
  ESI = (pop32());
  /* 110a3980 pop ebx */
  EBX = (pop32());
  /* 110a3981 mov esp, ebp */
  ESP = (EBP);
  /* 110a3983 pop ebp */
  EBP = (pop32());
  /* 110a3984 ret  */
  ESPCHK(0x110a37f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013990 @ 0x110a3990 (398 bytes, 140 insns) */
void f_110a3990(void) {
  FTRACE(0x110a3990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a3990 push ebp */
  push32((uint32_t)(EBP));
  /* 110a3991 mov ebp, esp */
  EBP = (ESP);
  /* 110a3993 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110a3995 push 0x110bcc30 */
  push32((uint32_t)(0x110bcc30u));
  /* 110a399a push 0x1109d4b8 */
  push32((uint32_t)(0x1109d4b8u));
  /* 110a399f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 110a39a5 push eax */
  push32((uint32_t)(EAX));
  /* 110a39a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 110a39ad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a39b0 push ebx */
  push32((uint32_t)(EBX));
  /* 110a39b1 push esi */
  push32((uint32_t)(ESI));
  /* 110a39b2 push edi */
  push32((uint32_t)(EDI));
  /* 110a39b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110a39b6 cmp dword ptr [0x110c0960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a39bd jne 0x110a3a02 */
  if (!C.zf) goto L_110a3a02;
  /* 110a39bf push 0 */
  push32((uint32_t)(0x0u));
  /* 110a39c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a39c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a39c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a39c7 call dword ptr [0x110c3254] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3254))), 0x110a39cdu);
  /* 110a39cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a39cf je 0x110a39dd */
  if (C.zf) goto L_110a39dd;
  /* 110a39d1 mov dword ptr [0x110c0960], 1 */
  w32((uint32_t)(0x110c0960), (0x1u));
  /* 110a39db jmp 0x110a3a02 */
  goto L_110a3a02;
L_110a39dd:;
  /* 110a39dd push 0 */
  push32((uint32_t)(0x0u));
  /* 110a39df push 0 */
  push32((uint32_t)(0x0u));
  /* 110a39e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a39e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a39e5 call dword ptr [0x110c326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c326c))), 0x110a39ebu);
  /* 110a39eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a39ed je 0x110a39fb */
  if (C.zf) goto L_110a39fb;
  /* 110a39ef mov dword ptr [0x110c0960], 2 */
  w32((uint32_t)(0x110c0960), (0x2u));
  /* 110a39f9 jmp 0x110a3a02 */
  goto L_110a3a02;
L_110a39fb:;
  /* 110a39fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a39fd jmp 0x110a3b21 */
  goto L_110a3b21;
L_110a3a02:;
  /* 110a3a02 cmp dword ptr [0x110c0960], 2 */
  { uint32_t _a=(r32((uint32_t)(0x110c0960))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3a09 jne 0x110a3a26 */
  if (!C.zf) goto L_110a3a26;
  /* 110a3a0b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a3a0e push eax */
  push32((uint32_t)(EAX));
  /* 110a3a0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a3a12 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3a13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a3a16 push edx */
  push32((uint32_t)(EDX));
  /* 110a3a17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3a1a push eax */
  push32((uint32_t)(EAX));
  /* 110a3a1b call dword ptr [0x110c326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c326c))), 0x110a3a21u);
  /* 110a3a21 jmp 0x110a3b21 */
  goto L_110a3b21;
L_110a3a26:;
  /* 110a3a26 cmp dword ptr [0x110c0960], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c0960))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3a2d jne 0x110a3b1f */
  if (!C.zf) goto L_110a3b1f;
  /* 110a3a33 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3a37 jne 0x110a3a42 */
  if (!C.zf) goto L_110a3a42;
  /* 110a3a39 mov ecx, dword ptr [0x110c0810] */
  ECX = (r32((uint32_t)(0x110c0810)));
  /* 110a3a3f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_110a3a42:;
  /* 110a3a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3a46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a3a49 push edx */
  push32((uint32_t)(EDX));
  /* 110a3a4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3a4d push eax */
  push32((uint32_t)(EAX));
  /* 110a3a4e call dword ptr [0x110c3254] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3254))), 0x110a3a54u);
  /* 110a3a54 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 110a3a57 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3a5b jne 0x110a3a64 */
  if (!C.zf) goto L_110a3a64;
  /* 110a3a5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a3a5f jmp 0x110a3b21 */
  goto L_110a3b21;
L_110a3a64:;
  /* 110a3a64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 110a3a6b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110a3a6e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 110a3a70 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3a73 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 110a3a75 call 0x11097550 */
  push32(0x110a3a7au); f_11097550();
  /* 110a3a7a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 110a3a7d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110a3a80 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 110a3a83 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 110a3a86 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 110a3a8d jmp 0x110a3aa6 */
  goto L_110a3aa6;
  /* 110a3a8f mov eax, 1 */
  EAX = (0x1u);
  /* 110a3a94 ret  */
  ESPCHK(0x110a3990u, _esp0);
  ESP += 4; return;
  /* 110a3a95 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 110a3a98 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 110a3a9f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_110a3aa6:;
  /* 110a3aa6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3aaa jne 0x110a3ab0 */
  if (!C.zf) goto L_110a3ab0;
  /* 110a3aac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a3aae jmp 0x110a3b21 */
  goto L_110a3b21;
L_110a3ab0:;
  /* 110a3ab0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110a3ab3 push edx */
  push32((uint32_t)(EDX));
  /* 110a3ab4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 110a3ab7 push eax */
  push32((uint32_t)(EAX));
  /* 110a3ab8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a3abb push ecx */
  push32((uint32_t)(ECX));
  /* 110a3abc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3abf push edx */
  push32((uint32_t)(EDX));
  /* 110a3ac0 call dword ptr [0x110c3254] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3254))), 0x110a3ac6u);
  /* 110a3ac6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a3ac8 jne 0x110a3ace */
  if (!C.zf) goto L_110a3ace;
  /* 110a3aca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a3acc jmp 0x110a3b21 */
  goto L_110a3b21;
L_110a3ace:;
  /* 110a3ace cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3ad2 jne 0x110a3af6 */
  if (!C.zf) goto L_110a3af6;
  /* 110a3ad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3ada push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3adc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110a3ade mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 110a3ae1 push eax */
  push32((uint32_t)(EAX));
  /* 110a3ae2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 110a3ae7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a3aea push ecx */
  push32((uint32_t)(ECX));
  /* 110a3aeb call dword ptr [0x110c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c330c))), 0x110a3af1u);
  /* 110a3af1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 110a3af4 jmp 0x110a3b1a */
  goto L_110a3b1a;
L_110a3af6:;
  /* 110a3af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3afa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a3afd push edx */
  push32((uint32_t)(EDX));
  /* 110a3afe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a3b01 push eax */
  push32((uint32_t)(EAX));
  /* 110a3b02 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110a3b04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 110a3b07 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3b08 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 110a3b0d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a3b10 push edx */
  push32((uint32_t)(EDX));
  /* 110a3b11 call dword ptr [0x110c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c330c))), 0x110a3b17u);
  /* 110a3b17 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_110a3b1a:;
  /* 110a3b1a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110a3b1d jmp 0x110a3b21 */
  goto L_110a3b21;
L_110a3b1f:;
  /* 110a3b1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110a3b21:;
  /* 110a3b21 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 110a3b24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a3b27 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 110a3b2e pop edi */
  EDI = (pop32());
  /* 110a3b2f pop esi */
  ESI = (pop32());
  /* 110a3b30 pop ebx */
  EBX = (pop32());
  /* 110a3b31 mov esp, ebp */
  ESP = (EBP);
  /* 110a3b33 pop ebp */
  EBP = (pop32());
  /* 110a3b34 ret  */
  ESPCHK(0x110a3990u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b40 @ 0x110a3b40 (11 bytes, 6 insns) */
void f_110a3b40(void) {
  FTRACE(0x110a3b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a3b40 push ebp */
  push32((uint32_t)(EBP));
  /* 110a3b41 mov ebp, esp */
  EBP = (ESP);
  /* 110a3b43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3b46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3b49 pop ebp */
  EBP = (pop32());
  /* 110a3b4a ret  */
  ESPCHK(0x110a3b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b50 @ 0x110a3b50 (147 bytes, 43 insns) */
void f_110a3b50(void) {
  FTRACE(0x110a3b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a3b50 push ebp */
  push32((uint32_t)(EBP));
  /* 110a3b51 mov ebp, esp */
  EBP = (ESP);
  /* 110a3b53 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3b54 cmp dword ptr [0x110c0800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3b5b jne 0x110a3b77 */
  if (!C.zf) goto L_110a3b77;
  /* 110a3b5d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3b61 jl 0x110a3b72 */
  if ((C.sf!=C.of)) goto L_110a3b72;
  /* 110a3b63 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3b67 jg 0x110a3b72 */
  if ((!C.zf&&C.sf==C.of)) goto L_110a3b72;
  /* 110a3b69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3b6c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3b6f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_110a3b72:;
  /* 110a3b72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3b75 jmp 0x110a3bdf */
  goto L_110a3bdf;
L_110a3b77:;
  /* 110a3b77 push 0x110c098c */
  push32((uint32_t)(0x110c098cu));
  /* 110a3b7c call dword ptr [0x110c32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32b4))), 0x110a3b82u);
  /* 110a3b82 cmp dword ptr [0x110c097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3b89 je 0x110a3ba9 */
  if (C.zf) goto L_110a3ba9;
  /* 110a3b8b push 0x110c098c */
  push32((uint32_t)(0x110c098cu));
  /* 110a3b90 call dword ptr [0x110c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a4))), 0x110a3b96u);
  /* 110a3b96 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110a3b98 call 0x11097db0 */
  push32(0x110a3b9du); f_11097db0();
  /* 110a3b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3ba0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 110a3ba7 jmp 0x110a3bb0 */
  goto L_110a3bb0;
L_110a3ba9:;
  /* 110a3ba9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_110a3bb0:;
  /* 110a3bb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3bb4 call 0x110a3bf0 */
  push32(0x110a3bb9u); f_110a3bf0();
  /* 110a3bb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3bbc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110a3bbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3bc3 je 0x110a3bd1 */
  if (C.zf) goto L_110a3bd1;
  /* 110a3bc5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110a3bc7 call 0x11097e50 */
  push32(0x110a3bccu); f_11097e50();
  /* 110a3bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3bcf jmp 0x110a3bdc */
  goto L_110a3bdc;
L_110a3bd1:;
  /* 110a3bd1 push 0x110c098c */
  push32((uint32_t)(0x110c098cu));
  /* 110a3bd6 call dword ptr [0x110c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a4))), 0x110a3bdcu);
L_110a3bdc:;
  /* 110a3bdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_110a3bdf:;
  /* 110a3bdf mov esp, ebp */
  ESP = (EBP);
  /* 110a3be1 pop ebp */
  EBP = (pop32());
  /* 110a3be2 ret  */
  ESPCHK(0x110a3b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013bf0 @ 0x110a3bf0 (299 bytes, 91 insns) */
void f_110a3bf0(void) {
  FTRACE(0x110a3bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a3bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a3bf1 mov ebp, esp */
  EBP = (ESP);
  /* 110a3bf3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a3bf6 cmp dword ptr [0x110c0800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3bfd jne 0x110a3c1c */
  if (!C.zf) goto L_110a3c1c;
  /* 110a3bff cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3c03 jl 0x110a3c14 */
  if ((C.sf!=C.of)) goto L_110a3c14;
  /* 110a3c05 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3c09 jg 0x110a3c14 */
  if ((!C.zf&&C.sf==C.of)) goto L_110a3c14;
  /* 110a3c0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3c0e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3c11 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_110a3c14:;
  /* 110a3c14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3c17 jmp 0x110a3d17 */
  goto L_110a3d17;
L_110a3c1c:;
  /* 110a3c1c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3c23 jge 0x110a3c63 */
  if ((C.sf==C.of)) goto L_110a3c63;
  /* 110a3c25 cmp dword ptr [0x110beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3c2c jle 0x110a3c41 */
  if ((C.zf||C.sf!=C.of)) goto L_110a3c41;
  /* 110a3c2e push 1 */
  push32((uint32_t)(0x1u));
  /* 110a3c30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3c33 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3c34 call 0x1109a3c0 */
  push32(0x110a3c39u); f_1109a3c0();
  /* 110a3c39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3c3c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 110a3c3f jmp 0x110a3c55 */
  goto L_110a3c55;
L_110a3c41:;
  /* 110a3c41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3c44 mov eax, dword ptr [0x110bec98] */
  EAX = (r32((uint32_t)(0x110bec98)));
  /* 110a3c49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a3c4b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 110a3c4f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 110a3c52 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_110a3c55:;
  /* 110a3c55 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3c59 jne 0x110a3c63 */
  if (!C.zf) goto L_110a3c63;
  /* 110a3c5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3c5e jmp 0x110a3d17 */
  goto L_110a3d17;
L_110a3c63:;
  /* 110a3c63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3c66 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 110a3c69 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 110a3c6f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 110a3c75 mov eax, dword ptr [0x110bec98] */
  EAX = (r32((uint32_t)(0x110bec98)));
  /* 110a3c7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a3c7c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 110a3c80 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 110a3c86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a3c88 je 0x110a3cac */
  if (C.zf) goto L_110a3cac;
  /* 110a3c8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3c8d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 110a3c90 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 110a3c96 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 110a3c99 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 110a3c9c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 110a3c9f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 110a3ca3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 110a3caa jmp 0x110a3cbd */
  goto L_110a3cbd;
L_110a3cac:;
  /* 110a3cac mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 110a3caf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 110a3cb2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 110a3cb6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_110a3cbd:;
  /* 110a3cbd push 1 */
  push32((uint32_t)(0x1u));
  /* 110a3cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3cc1 push 3 */
  push32((uint32_t)(0x3u));
  /* 110a3cc3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 110a3cc6 push edx */
  push32((uint32_t)(EDX));
  /* 110a3cc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a3cca push eax */
  push32((uint32_t)(EAX));
  /* 110a3ccb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 110a3cce push ecx */
  push32((uint32_t)(ECX));
  /* 110a3ccf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 110a3cd4 mov edx, dword ptr [0x110c0800] */
  EDX = (r32((uint32_t)(0x110c0800)));
  /* 110a3cda push edx */
  push32((uint32_t)(EDX));
  /* 110a3cdb call 0x1109c7a0 */
  push32(0x110a3ce0u); f_1109c7a0();
  /* 110a3ce0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3ce3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a3ce6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3cea jne 0x110a3cf1 */
  if (!C.zf) goto L_110a3cf1;
  /* 110a3cec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3cef jmp 0x110a3d17 */
  goto L_110a3d17;
L_110a3cf1:;
  /* 110a3cf1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3cf5 jne 0x110a3d01 */
  if (!C.zf) goto L_110a3d01;
  /* 110a3cf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3cfa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a3cff jmp 0x110a3d17 */
  goto L_110a3d17;
L_110a3d01:;
  /* 110a3d01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3d04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a3d09 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 110a3d0c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 110a3d12 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 110a3d15 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_110a3d17:;
  /* 110a3d17 mov esp, ebp */
  ESP = (EBP);
  /* 110a3d19 pop ebp */
  EBP = (pop32());
  /* 110a3d1a ret  */
  ESPCHK(0x110a3bf0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x110a3d20 (52 bytes, 19 insns) */
void f_110a3d20(void) {
  FTRACE(0x110a3d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a3d20 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110a3d24 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 110a3d28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110a3d2a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 110a3d2e jne 0x110a3d39 */
  if (!C.zf) goto L_110a3d39;
  /* 110a3d30 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110a3d34 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 110a3d36 ret 0x10 */
  ESPCHK(0x110a3d20u, _esp0);
  ESP += 20; return;
L_110a3d39:;
  /* 110a3d39 push ebx */
  push32((uint32_t)(EBX));
  /* 110a3d3a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 110a3d3c mov ebx, eax */
  EBX = (EAX);
  /* 110a3d3e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110a3d42 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 110a3d46 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3d48 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110a3d4c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 110a3d4e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3d50 pop ebx */
  EBX = (pop32());
  /* 110a3d51 ret 0x10 */
  ESPCHK(0x110a3d20u, _esp0);
  ESP += 20; return;
}

/* FUN_10013d60 @ 0x110a3d60 (46 bytes, 18 insns) */
void f_110a3d60(void) {
  FTRACE(0x110a3d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a3d60 push ebp */
  push32((uint32_t)(EBP));
  /* 110a3d61 mov ebp, esp */
  EBP = (ESP);
  /* 110a3d63 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3d64 push 0xc */
  push32((uint32_t)(0xcu));
  /* 110a3d66 call 0x11097db0 */
  push32(0x110a3d6bu); f_11097db0();
  /* 110a3d6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3d6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3d71 push eax */
  push32((uint32_t)(EAX));
  /* 110a3d72 call 0x110a3d90 */
  push32(0x110a3d77u); f_110a3d90();
  /* 110a3d77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3d7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a3d7d push 0xc */
  push32((uint32_t)(0xcu));
  /* 110a3d7f call 0x11097e50 */
  push32(0x110a3d84u); f_11097e50();
  /* 110a3d84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3d87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a3d8a mov esp, ebp */
  ESP = (EBP);
  /* 110a3d8c pop ebp */
  EBP = (pop32());
  /* 110a3d8d ret  */
  ESPCHK(0x110a3d60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x110a3d90 (198 bytes, 69 insns) */
void f_110a3d90(void) {
  FTRACE(0x110a3d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a3d90 push ebp */
  push32((uint32_t)(EBP));
  /* 110a3d91 mov ebp, esp */
  EBP = (ESP);
  /* 110a3d93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a3d96 mov eax, dword ptr [0x110c061c] */
  EAX = (r32((uint32_t)(0x110c061c)));
  /* 110a3d9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110a3d9e cmp dword ptr [0x110c2120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c2120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3da5 jne 0x110a3dae */
  if (!C.zf) goto L_110a3dae;
  /* 110a3da7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a3da9 jmp 0x110a3e52 */
  goto L_110a3e52;
L_110a3dae:;
  /* 110a3dae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3db2 jne 0x110a3dd6 */
  if (!C.zf) goto L_110a3dd6;
  /* 110a3db4 cmp dword ptr [0x110c0624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3dbb je 0x110a3dd6 */
  if (C.zf) goto L_110a3dd6;
  /* 110a3dbd call 0x110a3eb0 */
  push32(0x110a3dc2u); f_110a3eb0();
  /* 110a3dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a3dc4 je 0x110a3dcd */
  if (C.zf) goto L_110a3dcd;
  /* 110a3dc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a3dc8 jmp 0x110a3e52 */
  goto L_110a3e52;
L_110a3dcd:;
  /* 110a3dcd mov ecx, dword ptr [0x110c061c] */
  ECX = (r32((uint32_t)(0x110c061c)));
  /* 110a3dd3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_110a3dd6:;
  /* 110a3dd6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3dda je 0x110a3e50 */
  if (C.zf) goto L_110a3e50;
  /* 110a3ddc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3de0 je 0x110a3e50 */
  if (C.zf) goto L_110a3e50;
  /* 110a3de2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3de5 push edx */
  push32((uint32_t)(EDX));
  /* 110a3de6 call 0x110971e0 */
  push32(0x110a3debu); f_110971e0();
  /* 110a3deb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3dee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_110a3df1:;
  /* 110a3df1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a3df4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3df7 je 0x110a3e50 */
  if (C.zf) goto L_110a3e50;
  /* 110a3df9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a3dfc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a3dfe push edx */
  push32((uint32_t)(EDX));
  /* 110a3dff call 0x110971e0 */
  push32(0x110a3e04u); f_110971e0();
  /* 110a3e04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3e07 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3e0a jbe 0x110a3e45 */
  if ((C.cf||C.zf)) goto L_110a3e45;
  /* 110a3e0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a3e0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a3e11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a3e14 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 110a3e18 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3e1b jne 0x110a3e45 */
  if (!C.zf) goto L_110a3e45;
  /* 110a3e1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a3e20 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3e21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3e24 push edx */
  push32((uint32_t)(EDX));
  /* 110a3e25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a3e28 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a3e2a push ecx */
  push32((uint32_t)(ECX));
  /* 110a3e2b call 0x110a3e60 */
  push32(0x110a3e30u); f_110a3e60();
  /* 110a3e30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3e33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a3e35 jne 0x110a3e45 */
  if (!C.zf) goto L_110a3e45;
  /* 110a3e37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a3e3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a3e3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a3e3f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 110a3e43 jmp 0x110a3e52 */
  goto L_110a3e52;
L_110a3e45:;
  /* 110a3e45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a3e48 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3e4b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110a3e4e jmp 0x110a3df1 */
  goto L_110a3df1;
L_110a3e50:;
  /* 110a3e50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110a3e52:;
  /* 110a3e52 mov esp, ebp */
  ESP = (EBP);
  /* 110a3e54 pop ebp */
  EBP = (pop32());
  /* 110a3e55 ret  */
  ESPCHK(0x110a3d90u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x110a3e60 (79 bytes, 32 insns) */
void f_110a3e60(void) {
  FTRACE(0x110a3e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a3e60 push ebp */
  push32((uint32_t)(EBP));
  /* 110a3e61 mov ebp, esp */
  EBP = (ESP);
  /* 110a3e63 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3e64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3e68 jne 0x110a3e6e */
  if (!C.zf) goto L_110a3e6e;
  /* 110a3e6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a3e6c jmp 0x110a3eab */
  goto L_110a3eab;
L_110a3e6e:;
  /* 110a3e6e mov eax, dword ptr [0x110c1ce4] */
  EAX = (r32((uint32_t)(0x110c1ce4)));
  /* 110a3e73 push eax */
  push32((uint32_t)(EAX));
  /* 110a3e74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a3e77 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3e78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a3e7b push edx */
  push32((uint32_t)(EDX));
  /* 110a3e7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a3e7f push eax */
  push32((uint32_t)(EAX));
  /* 110a3e80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a3e83 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3e84 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a3e86 mov edx, dword ptr [0x110c1f84] */
  EDX = (r32((uint32_t)(0x110c1f84)));
  /* 110a3e8c push edx */
  push32((uint32_t)(EDX));
  /* 110a3e8d call 0x110a3f60 */
  push32(0x110a3e92u); f_110a3f60();
  /* 110a3e92 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3e95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a3e98 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3e9c jne 0x110a3ea5 */
  if (!C.zf) goto L_110a3ea5;
  /* 110a3e9e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 110a3ea3 jmp 0x110a3eab */
  goto L_110a3eab;
L_110a3ea5:;
  /* 110a3ea5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a3ea8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_110a3eab:;
  /* 110a3eab mov esp, ebp */
  ESP = (EBP);
  /* 110a3ead pop ebp */
  EBP = (pop32());
  /* 110a3eae ret  */
  ESPCHK(0x110a3e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013eb0 @ 0x110a3eb0 (174 bytes, 66 insns) */
void f_110a3eb0(void) {
  FTRACE(0x110a3eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a3eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a3eb1 mov ebp, esp */
  EBP = (ESP);
  /* 110a3eb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a3eb6 mov eax, dword ptr [0x110c0624] */
  EAX = (r32((uint32_t)(0x110c0624)));
  /* 110a3ebb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_110a3ebe:;
  /* 110a3ebe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a3ec1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3ec4 je 0x110a3f58 */
  if (C.zf) goto L_110a3f58;
  /* 110a3eca push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3ecc push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3ece push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3ed2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110a3ed4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a3ed7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a3ed9 push eax */
  push32((uint32_t)(EAX));
  /* 110a3eda push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3edc push 1 */
  push32((uint32_t)(0x1u));
  /* 110a3ede call dword ptr [0x110c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c330c))), 0x110a3ee4u);
  /* 110a3ee4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110a3ee7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3eeb jne 0x110a3ef2 */
  if (!C.zf) goto L_110a3ef2;
  /* 110a3eed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a3ef0 jmp 0x110a3f5a */
  goto L_110a3f5a;
L_110a3ef2:;
  /* 110a3ef2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 110a3ef4 push 0x110bcc3c */
  push32((uint32_t)(0x110bcc3cu));
  /* 110a3ef9 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a3efb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3efe push ecx */
  push32((uint32_t)(ECX));
  /* 110a3eff call 0x110943b0 */
  push32(0x110a3f04u); f_110943b0();
  /* 110a3f04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3f07 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110a3f0a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3f0e jne 0x110a3f15 */
  if (!C.zf) goto L_110a3f15;
  /* 110a3f10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a3f13 jmp 0x110a3f5a */
  goto L_110a3f5a;
L_110a3f15:;
  /* 110a3f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3f19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a3f1c push edx */
  push32((uint32_t)(EDX));
  /* 110a3f1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a3f20 push eax */
  push32((uint32_t)(EAX));
  /* 110a3f21 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110a3f23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a3f26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a3f28 push edx */
  push32((uint32_t)(EDX));
  /* 110a3f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3f2b push 1 */
  push32((uint32_t)(0x1u));
  /* 110a3f2d call dword ptr [0x110c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c330c))), 0x110a3f33u);
  /* 110a3f33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a3f35 jne 0x110a3f3c */
  if (!C.zf) goto L_110a3f3c;
  /* 110a3f37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a3f3a jmp 0x110a3f5a */
  goto L_110a3f5a;
L_110a3f3c:;
  /* 110a3f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3f3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a3f41 push eax */
  push32((uint32_t)(EAX));
  /* 110a3f42 call 0x110a43b0 */
  push32(0x110a3f47u); f_110a43b0();
  /* 110a3f47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3f4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a3f4d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3f50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110a3f53 jmp 0x110a3ebe */
  goto L_110a3ebe;
L_110a3f58:;
  /* 110a3f58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110a3f5a:;
  /* 110a3f5a mov esp, ebp */
  ESP = (EBP);
  /* 110a3f5c pop ebp */
  EBP = (pop32());
  /* 110a3f5d ret  */
  ESPCHK(0x110a3eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f60 @ 0x110a3f60 (970 bytes, 340 insns) */
void f_110a3f60(void) {
  FTRACE(0x110a3f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a3f60 push ebp */
  push32((uint32_t)(EBP));
  /* 110a3f61 mov ebp, esp */
  EBP = (ESP);
  /* 110a3f63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110a3f65 push 0x110bcc90 */
  push32((uint32_t)(0x110bcc90u));
  /* 110a3f6a push 0x1109d4b8 */
  push32((uint32_t)(0x1109d4b8u));
  /* 110a3f6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 110a3f75 push eax */
  push32((uint32_t)(EAX));
  /* 110a3f76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 110a3f7d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3f80 push ebx */
  push32((uint32_t)(EBX));
  /* 110a3f81 push esi */
  push32((uint32_t)(ESI));
  /* 110a3f82 push edi */
  push32((uint32_t)(EDI));
  /* 110a3f83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110a3f86 cmp dword ptr [0x110c0964], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0964))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3f8d jne 0x110a3fe6 */
  if (!C.zf) goto L_110a3fe6;
  /* 110a3f8f push 1 */
  push32((uint32_t)(0x1u));
  /* 110a3f91 push 0x110bc2ec */
  push32((uint32_t)(0x110bc2ecu));
  /* 110a3f96 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a3f98 push 0x110bc2ec */
  push32((uint32_t)(0x110bc2ecu));
  /* 110a3f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3fa1 call dword ptr [0x110c3250] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3250))), 0x110a3fa7u);
  /* 110a3fa7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a3fa9 je 0x110a3fb7 */
  if (C.zf) goto L_110a3fb7;
  /* 110a3fab mov dword ptr [0x110c0964], 1 */
  w32((uint32_t)(0x110c0964), (0x1u));
  /* 110a3fb5 jmp 0x110a3fe6 */
  goto L_110a3fe6;
L_110a3fb7:;
  /* 110a3fb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a3fb9 push 0x110bc2e8 */
  push32((uint32_t)(0x110bc2e8u));
  /* 110a3fbe push 1 */
  push32((uint32_t)(0x1u));
  /* 110a3fc0 push 0x110bc2e8 */
  push32((uint32_t)(0x110bc2e8u));
  /* 110a3fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a3fc9 call dword ptr [0x110c325c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c325c))), 0x110a3fcfu);
  /* 110a3fcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a3fd1 je 0x110a3fdf */
  if (C.zf) goto L_110a3fdf;
  /* 110a3fd3 mov dword ptr [0x110c0964], 2 */
  w32((uint32_t)(0x110c0964), (0x2u));
  /* 110a3fdd jmp 0x110a3fe6 */
  goto L_110a3fe6;
L_110a3fdf:;
  /* 110a3fdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a3fe1 jmp 0x110a4344 */
  goto L_110a4344;
L_110a3fe6:;
  /* 110a3fe6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a3fea jle 0x110a3fff */
  if ((C.zf||C.sf!=C.of)) goto L_110a3fff;
  /* 110a3fec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a3fef push eax */
  push32((uint32_t)(EAX));
  /* 110a3ff0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a3ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 110a3ff4 call 0x110a4360 */
  push32(0x110a3ff9u); f_110a4360();
  /* 110a3ff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a3ffc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_110a3fff:;
  /* 110a3fff cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4003 jle 0x110a4018 */
  if ((C.zf||C.sf!=C.of)) goto L_110a4018;
  /* 110a4005 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 110a4008 push edx */
  push32((uint32_t)(EDX));
  /* 110a4009 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a400c push eax */
  push32((uint32_t)(EAX));
  /* 110a400d call 0x110a4360 */
  push32(0x110a4012u); f_110a4360();
  /* 110a4012 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4015 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_110a4018:;
  /* 110a4018 cmp dword ptr [0x110c0964], 2 */
  { uint32_t _a=(r32((uint32_t)(0x110c0964))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a401f jne 0x110a4044 */
  if (!C.zf) goto L_110a4044;
  /* 110a4021 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 110a4024 push ecx */
  push32((uint32_t)(ECX));
  /* 110a4025 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a4028 push edx */
  push32((uint32_t)(EDX));
  /* 110a4029 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a402c push eax */
  push32((uint32_t)(EAX));
  /* 110a402d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a4030 push ecx */
  push32((uint32_t)(ECX));
  /* 110a4031 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a4034 push edx */
  push32((uint32_t)(EDX));
  /* 110a4035 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a4038 push eax */
  push32((uint32_t)(EAX));
  /* 110a4039 call dword ptr [0x110c325c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c325c))), 0x110a403fu);
  /* 110a403f jmp 0x110a4344 */
  goto L_110a4344;
L_110a4044:;
  /* 110a4044 cmp dword ptr [0x110c0964], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c0964))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a404b jne 0x110a4342 */
  if (!C.zf) goto L_110a4342;
  /* 110a4051 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4055 jne 0x110a4060 */
  if (!C.zf) goto L_110a4060;
  /* 110a4057 mov ecx, dword ptr [0x110c0810] */
  ECX = (r32((uint32_t)(0x110c0810)));
  /* 110a405d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_110a4060:;
  /* 110a4060 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4064 je 0x110a4070 */
  if (C.zf) goto L_110a4070;
  /* 110a4066 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a406a jne 0x110a41ec */
  if (!C.zf) goto L_110a41ec;
L_110a4070:;
  /* 110a4070 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a4073 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4076 jne 0x110a4082 */
  if (!C.zf) goto L_110a4082;
  /* 110a4078 mov eax, 2 */
  EAX = (0x2u);
  /* 110a407d jmp 0x110a4344 */
  goto L_110a4344;
L_110a4082:;
  /* 110a4082 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4086 jle 0x110a4092 */
  if ((C.zf||C.sf!=C.of)) goto L_110a4092;
  /* 110a4088 mov eax, 1 */
  EAX = (0x1u);
  /* 110a408d jmp 0x110a4344 */
  goto L_110a4344;
L_110a4092:;
  /* 110a4092 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4096 jle 0x110a40a2 */
  if ((C.zf||C.sf!=C.of)) goto L_110a40a2;
  /* 110a4098 mov eax, 3 */
  EAX = (0x3u);
  /* 110a409d jmp 0x110a4344 */
  goto L_110a4344;
L_110a40a2:;
  /* 110a40a2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 110a40a5 push eax */
  push32((uint32_t)(EAX));
  /* 110a40a6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 110a40a9 push ecx */
  push32((uint32_t)(ECX));
  /* 110a40aa call dword ptr [0x110c3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3330))), 0x110a40b0u);
  /* 110a40b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a40b2 jne 0x110a40bb */
  if (!C.zf) goto L_110a40bb;
  /* 110a40b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a40b6 jmp 0x110a4344 */
  goto L_110a4344;
L_110a40bb:;
  /* 110a40bb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a40bf jne 0x110a40c7 */
  if (!C.zf) goto L_110a40c7;
  /* 110a40c1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a40c5 je 0x110a40f4 */
  if (C.zf) goto L_110a40f4;
L_110a40c7:;
  /* 110a40c7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a40cb jne 0x110a40d3 */
  if (!C.zf) goto L_110a40d3;
  /* 110a40cd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a40d1 je 0x110a40f4 */
  if (C.zf) goto L_110a40f4;
L_110a40d3:;
  /* 110a40d3 push 0x110bcc50 */
  push32((uint32_t)(0x110bcc50u));
  /* 110a40d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110a40da push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 110a40df push 0x110bcc48 */
  push32((uint32_t)(0x110bcc48u));
  /* 110a40e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a40e6 call 0x11093470 */
  push32(0x110a40ebu); f_11093470();
  /* 110a40eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a40ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a40f1 jne 0x110a40f4 */
  if (!C.zf) goto L_110a40f4;
  /* 110a40f3 int3  */
  x86_unimpl("int3 @ 0x110a40f3");
L_110a40f4:;
  /* 110a40f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a40f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a40f8 jne 0x110a40bb */
  if (!C.zf) goto L_110a40bb;
  /* 110a40fa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a40fe jle 0x110a4173 */
  if ((C.zf||C.sf!=C.of)) goto L_110a4173;
  /* 110a4100 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4104 jae 0x110a4110 */
  if (!C.cf) goto L_110a4110;
  /* 110a4106 mov eax, 3 */
  EAX = (0x3u);
  /* 110a410b jmp 0x110a4344 */
  goto L_110a4344;
L_110a4110:;
  /* 110a4110 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 110a4113 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 110a4116 jmp 0x110a4121 */
  goto L_110a4121;
L_110a4118:;
  /* 110a4118 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 110a411b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a411e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_110a4121:;
  /* 110a4121 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 110a4124 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a4126 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a4128 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a412a je 0x110a4169 */
  if (C.zf) goto L_110a4169;
  /* 110a412c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 110a412f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a4131 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 110a4134 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a4136 je 0x110a4169 */
  if (C.zf) goto L_110a4169;
  /* 110a4138 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a413b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a413d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110a413f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 110a4142 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a4144 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a4146 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4148 jl 0x110a4167 */
  if ((C.sf!=C.of)) goto L_110a4167;
  /* 110a414a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a414d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a414f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110a4151 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 110a4154 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a4156 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 110a4159 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a415b jg 0x110a4167 */
  if ((!C.zf&&C.sf==C.of)) goto L_110a4167;
  /* 110a415d mov eax, 2 */
  EAX = (0x2u);
  /* 110a4162 jmp 0x110a4344 */
  goto L_110a4344;
L_110a4167:;
  /* 110a4167 jmp 0x110a4118 */
  goto L_110a4118;
L_110a4169:;
  /* 110a4169 mov eax, 3 */
  EAX = (0x3u);
  /* 110a416e jmp 0x110a4344 */
  goto L_110a4344;
L_110a4173:;
  /* 110a4173 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4177 jle 0x110a41ec */
  if ((C.zf||C.sf!=C.of)) goto L_110a41ec;
  /* 110a4179 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a417d jae 0x110a4189 */
  if (!C.cf) goto L_110a4189;
  /* 110a417f mov eax, 1 */
  EAX = (0x1u);
  /* 110a4184 jmp 0x110a4344 */
  goto L_110a4344;
L_110a4189:;
  /* 110a4189 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 110a418c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 110a418f jmp 0x110a419a */
  goto L_110a419a;
L_110a4191:;
  /* 110a4191 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 110a4194 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4197 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_110a419a:;
  /* 110a419a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 110a419d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a419f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110a41a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a41a3 je 0x110a41e2 */
  if (C.zf) goto L_110a41e2;
  /* 110a41a5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 110a41a8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a41aa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 110a41ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a41af je 0x110a41e2 */
  if (C.zf) goto L_110a41e2;
  /* 110a41b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a41b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a41b6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110a41b8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 110a41bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110a41bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110a41bf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a41c1 jl 0x110a41e0 */
  if ((C.sf!=C.of)) goto L_110a41e0;
  /* 110a41c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a41c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a41c8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110a41ca mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 110a41cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a41cf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 110a41d2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a41d4 jg 0x110a41e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_110a41e0;
  /* 110a41d6 mov eax, 2 */
  EAX = (0x2u);
  /* 110a41db jmp 0x110a4344 */
  goto L_110a4344;
L_110a41e0:;
  /* 110a41e0 jmp 0x110a4191 */
  goto L_110a4191;
L_110a41e2:;
  /* 110a41e2 mov eax, 1 */
  EAX = (0x1u);
  /* 110a41e7 jmp 0x110a4344 */
  goto L_110a4344;
L_110a41ec:;
  /* 110a41ec push 0 */
  push32((uint32_t)(0x0u));
  /* 110a41ee push 0 */
  push32((uint32_t)(0x0u));
  /* 110a41f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a41f3 push ecx */
  push32((uint32_t)(ECX));
  /* 110a41f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a41f7 push edx */
  push32((uint32_t)(EDX));
  /* 110a41f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 110a41fa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 110a41fd push eax */
  push32((uint32_t)(EAX));
  /* 110a41fe call dword ptr [0x110c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3354))), 0x110a4204u);
  /* 110a4204 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 110a4207 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a420b jne 0x110a4214 */
  if (!C.zf) goto L_110a4214;
  /* 110a420d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a420f jmp 0x110a4344 */
  goto L_110a4344;
L_110a4214:;
  /* 110a4214 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 110a421b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110a421e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 110a4220 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4223 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 110a4225 call 0x11097550 */
  push32(0x110a422au); f_11097550();
  /* 110a422a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 110a422d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110a4230 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 110a4233 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 110a4236 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 110a423d jmp 0x110a4256 */
  goto L_110a4256;
  /* 110a423f mov eax, 1 */
  EAX = (0x1u);
  /* 110a4244 ret  */
  ESPCHK(0x110a3f60u, _esp0);
  ESP += 4; return;
  /* 110a4245 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 110a4248 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 110a424f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_110a4256:;
  /* 110a4256 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a425a jne 0x110a4263 */
  if (!C.zf) goto L_110a4263;
  /* 110a425c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a425e jmp 0x110a4344 */
  goto L_110a4344;
L_110a4263:;
  /* 110a4263 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110a4266 push edx */
  push32((uint32_t)(EDX));
  /* 110a4267 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110a426a push eax */
  push32((uint32_t)(EAX));
  /* 110a426b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110a426e push ecx */
  push32((uint32_t)(ECX));
  /* 110a426f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110a4272 push edx */
  push32((uint32_t)(EDX));
  /* 110a4273 push 1 */
  push32((uint32_t)(0x1u));
  /* 110a4275 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 110a4278 push eax */
  push32((uint32_t)(EAX));
  /* 110a4279 call dword ptr [0x110c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3354))), 0x110a427fu);
  /* 110a427f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a4281 jne 0x110a428a */
  if (!C.zf) goto L_110a428a;
  /* 110a4283 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a4285 jmp 0x110a4344 */
  goto L_110a4344;
L_110a428a:;
  /* 110a428a push 0 */
  push32((uint32_t)(0x0u));
  /* 110a428c push 0 */
  push32((uint32_t)(0x0u));
  /* 110a428e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 110a4291 push ecx */
  push32((uint32_t)(ECX));
  /* 110a4292 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a4295 push edx */
  push32((uint32_t)(EDX));
  /* 110a4296 push 9 */
  push32((uint32_t)(0x9u));
  /* 110a4298 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 110a429b push eax */
  push32((uint32_t)(EAX));
  /* 110a429c call dword ptr [0x110c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3354))), 0x110a42a2u);
  /* 110a42a2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 110a42a5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a42a9 jne 0x110a42b2 */
  if (!C.zf) goto L_110a42b2;
  /* 110a42ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a42ad jmp 0x110a4344 */
  goto L_110a4344;
L_110a42b2:;
  /* 110a42b2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 110a42b9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 110a42bc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 110a42be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a42c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 110a42c3 call 0x11097550 */
  push32(0x110a42c8u); f_11097550();
  /* 110a42c8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 110a42cb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110a42ce mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 110a42d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 110a42d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 110a42db jmp 0x110a42f4 */
  goto L_110a42f4;
  /* 110a42dd mov eax, 1 */
  EAX = (0x1u);
  /* 110a42e2 ret  */
  ESPCHK(0x110a3f60u, _esp0);
  ESP += 4; return;
  /* 110a42e3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 110a42e6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 110a42ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_110a42f4:;
  /* 110a42f4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a42f8 jne 0x110a42fe */
  if (!C.zf) goto L_110a42fe;
  /* 110a42fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a42fc jmp 0x110a4344 */
  goto L_110a4344;
L_110a42fe:;
  /* 110a42fe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 110a4301 push edx */
  push32((uint32_t)(EDX));
  /* 110a4302 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 110a4305 push eax */
  push32((uint32_t)(EAX));
  /* 110a4306 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 110a4309 push ecx */
  push32((uint32_t)(ECX));
  /* 110a430a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110a430d push edx */
  push32((uint32_t)(EDX));
  /* 110a430e push 1 */
  push32((uint32_t)(0x1u));
  /* 110a4310 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 110a4313 push eax */
  push32((uint32_t)(EAX));
  /* 110a4314 call dword ptr [0x110c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3354))), 0x110a431au);
  /* 110a431a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a431c jne 0x110a4322 */
  if (!C.zf) goto L_110a4322;
  /* 110a431e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a4320 jmp 0x110a4344 */
  goto L_110a4344;
L_110a4322:;
  /* 110a4322 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 110a4325 push ecx */
  push32((uint32_t)(ECX));
  /* 110a4326 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 110a4329 push edx */
  push32((uint32_t)(EDX));
  /* 110a432a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110a432d push eax */
  push32((uint32_t)(EAX));
  /* 110a432e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110a4331 push ecx */
  push32((uint32_t)(ECX));
  /* 110a4332 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a4335 push edx */
  push32((uint32_t)(EDX));
  /* 110a4336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a4339 push eax */
  push32((uint32_t)(EAX));
  /* 110a433a call dword ptr [0x110c3250] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3250))), 0x110a4340u);
  /* 110a4340 jmp 0x110a4344 */
  goto L_110a4344;
L_110a4342:;
  /* 110a4342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110a4344:;
  /* 110a4344 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 110a4347 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a434a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 110a4351 pop edi */
  EDI = (pop32());
  /* 110a4352 pop esi */
  ESI = (pop32());
  /* 110a4353 pop ebx */
  EBX = (pop32());
  /* 110a4354 mov esp, ebp */
  ESP = (EBP);
  /* 110a4356 pop ebp */
  EBP = (pop32());
  /* 110a4357 ret  */
  ESPCHK(0x110a3f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014360 @ 0x110a4360 (80 bytes, 32 insns) */
void f_110a4360(void) {
  FTRACE(0x110a4360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a4360 push ebp */
  push32((uint32_t)(EBP));
  /* 110a4361 mov ebp, esp */
  EBP = (ESP);
  /* 110a4363 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a4366 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a4369 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110a436c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a436f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_110a4372:;
  /* 110a4372 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a4375 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a4378 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a437b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110a437e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a4380 je 0x110a4397 */
  if (C.zf) goto L_110a4397;
  /* 110a4382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a4385 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110a4388 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a438a je 0x110a4397 */
  if (C.zf) goto L_110a4397;
  /* 110a438c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a438f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4392 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a4395 jmp 0x110a4372 */
  goto L_110a4372;
L_110a4397:;
  /* 110a4397 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a439a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110a439d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a439f jne 0x110a43a9 */
  if (!C.zf) goto L_110a43a9;
  /* 110a43a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a43a4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a43a7 jmp 0x110a43ac */
  goto L_110a43ac;
L_110a43a9:;
  /* 110a43a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_110a43ac:;
  /* 110a43ac mov esp, ebp */
  ESP = (EBP);
  /* 110a43ae pop ebp */
  EBP = (pop32());
  /* 110a43af ret  */
  ESPCHK(0x110a4360u, _esp0);
  ESP += 4; return;
}

/* FUN_100143b0 @ 0x110a43b0 (736 bytes, 224 insns) */
void f_110a43b0(void) {
  FTRACE(0x110a43b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a43b0 push ebp */
  push32((uint32_t)(EBP));
  /* 110a43b1 mov ebp, esp */
  EBP = (ESP);
  /* 110a43b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a43b6 push esi */
  push32((uint32_t)(ESI));
  /* 110a43b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a43bb je 0x110a43dc */
  if (C.zf) goto L_110a43dc;
  /* 110a43bd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 110a43bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a43c2 push eax */
  push32((uint32_t)(EAX));
  /* 110a43c3 call 0x110a4800 */
  push32(0x110a43c8u); f_110a4800();
  /* 110a43c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a43cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 110a43ce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a43d2 je 0x110a43dc */
  if (C.zf) goto L_110a43dc;
  /* 110a43d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a43d7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a43da jne 0x110a43e4 */
  if (!C.zf) goto L_110a43e4;
L_110a43dc:;
  /* 110a43dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a43df jmp 0x110a468b */
  goto L_110a468b;
L_110a43e4:;
  /* 110a43e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 110a43e7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 110a43eb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a43ed sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a43ef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110a43f0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110a43f3 mov ecx, dword ptr [0x110c061c] */
  ECX = (r32((uint32_t)(0x110c061c)));
  /* 110a43f9 cmp ecx, dword ptr [0x110c0620] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110c0620))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a43ff jne 0x110a4415 */
  if (!C.zf) goto L_110a4415;
  /* 110a4401 mov edx, dword ptr [0x110c061c] */
  EDX = (r32((uint32_t)(0x110c061c)));
  /* 110a4407 push edx */
  push32((uint32_t)(EDX));
  /* 110a4408 call 0x110a4710 */
  push32(0x110a440du); f_110a4710();
  /* 110a440d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4410 mov dword ptr [0x110c061c], eax */
  w32((uint32_t)(0x110c061c), (EAX));
L_110a4415:;
  /* 110a4415 cmp dword ptr [0x110c061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a441c jne 0x110a44d5 */
  if (!C.zf) goto L_110a44d5;
  /* 110a4422 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4426 je 0x110a4447 */
  if (C.zf) goto L_110a4447;
  /* 110a4428 cmp dword ptr [0x110c0624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a442f je 0x110a4447 */
  if (C.zf) goto L_110a4447;
  /* 110a4431 call 0x110a3eb0 */
  push32(0x110a4436u); f_110a3eb0();
  /* 110a4436 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a4438 je 0x110a4442 */
  if (C.zf) goto L_110a4442;
  /* 110a443a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a443d jmp 0x110a468b */
  goto L_110a468b;
L_110a4442:;
  /* 110a4442 jmp 0x110a44d5 */
  goto L_110a44d5;
L_110a4447:;
  /* 110a4447 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a444b je 0x110a4454 */
  if (C.zf) goto L_110a4454;
  /* 110a444d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a444f jmp 0x110a468b */
  goto L_110a468b;
L_110a4454:;
  /* 110a4454 cmp dword ptr [0x110c061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a445b jne 0x110a4494 */
  if (!C.zf) goto L_110a4494;
  /* 110a445d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 110a4462 push 0x110bcca8 */
  push32((uint32_t)(0x110bcca8u));
  /* 110a4467 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a4469 push 4 */
  push32((uint32_t)(0x4u));
  /* 110a446b call 0x110943b0 */
  push32(0x110a4470u); f_110943b0();
  /* 110a4470 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4473 mov dword ptr [0x110c061c], eax */
  w32((uint32_t)(0x110c061c), (EAX));
  /* 110a4478 cmp dword ptr [0x110c061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a447f jne 0x110a4489 */
  if (!C.zf) goto L_110a4489;
  /* 110a4481 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a4484 jmp 0x110a468b */
  goto L_110a468b;
L_110a4489:;
  /* 110a4489 mov eax, dword ptr [0x110c061c] */
  EAX = (r32((uint32_t)(0x110c061c)));
  /* 110a448e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_110a4494:;
  /* 110a4494 cmp dword ptr [0x110c0624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a449b jne 0x110a44d5 */
  if (!C.zf) goto L_110a44d5;
  /* 110a449d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 110a44a2 push 0x110bcca8 */
  push32((uint32_t)(0x110bcca8u));
  /* 110a44a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a44a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 110a44ab call 0x110943b0 */
  push32(0x110a44b0u); f_110943b0();
  /* 110a44b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a44b3 mov dword ptr [0x110c0624], eax */
  w32((uint32_t)(0x110c0624), (EAX));
  /* 110a44b8 cmp dword ptr [0x110c0624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a44bf jne 0x110a44c9 */
  if (!C.zf) goto L_110a44c9;
  /* 110a44c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a44c4 jmp 0x110a468b */
  goto L_110a468b;
L_110a44c9:;
  /* 110a44c9 mov ecx, dword ptr [0x110c0624] */
  ECX = (r32((uint32_t)(0x110c0624)));
  /* 110a44cf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_110a44d5:;
  /* 110a44d5 mov edx, dword ptr [0x110c061c] */
  EDX = (r32((uint32_t)(0x110c061c)));
  /* 110a44db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 110a44de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 110a44e1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a44e4 push eax */
  push32((uint32_t)(EAX));
  /* 110a44e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a44e8 push ecx */
  push32((uint32_t)(ECX));
  /* 110a44e9 call 0x110a4690 */
  push32(0x110a44eeu); f_110a4690();
  /* 110a44ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a44f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110a44f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a44f8 jl 0x110a4591 */
  if ((C.sf!=C.of)) goto L_110a4591;
  /* 110a44fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a4501 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4504 je 0x110a4591 */
  if (C.zf) goto L_110a4591;
  /* 110a450a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a450e je 0x110a4583 */
  if (C.zf) goto L_110a4583;
  /* 110a4510 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a4512 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a4515 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a4518 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 110a451b push edx */
  push32((uint32_t)(EDX));
  /* 110a451c call 0x11094e40 */
  push32(0x110a4521u); f_11094e40();
  /* 110a4521 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4524 jmp 0x110a452f */
  goto L_110a452f;
L_110a4526:;
  /* 110a4526 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a4529 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a452c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_110a452f:;
  /* 110a452f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a4532 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a4535 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4539 je 0x110a4550 */
  if (C.zf) goto L_110a4550;
  /* 110a453b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a453e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a4541 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a4544 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 110a4547 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 110a454b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 110a454e jmp 0x110a4526 */
  goto L_110a4526;
L_110a4550:;
  /* 110a4550 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 110a4555 push 0x110bcca8 */
  push32((uint32_t)(0x110bcca8u));
  /* 110a455a push 2 */
  push32((uint32_t)(0x2u));
  /* 110a455c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a455f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 110a4562 push eax */
  push32((uint32_t)(EAX));
  /* 110a4563 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a4566 push ecx */
  push32((uint32_t)(ECX));
  /* 110a4567 call 0x11094840 */
  push32(0x110a456cu); f_11094840();
  /* 110a456c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a456f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110a4572 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4576 je 0x110a4581 */
  if (C.zf) goto L_110a4581;
  /* 110a4578 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a457b mov dword ptr [0x110c061c], edx */
  w32((uint32_t)(0x110c061c), (EDX));
L_110a4581:;
  /* 110a4581 jmp 0x110a458f */
  goto L_110a458f;
L_110a4583:;
  /* 110a4583 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a4586 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a4589 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a458c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_110a458f:;
  /* 110a458f jmp 0x110a4604 */
  goto L_110a4604;
L_110a4591:;
  /* 110a4591 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4595 jne 0x110a45fd */
  if (!C.zf) goto L_110a45fd;
  /* 110a4597 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a459b jge 0x110a45a5 */
  if ((C.sf==C.of)) goto L_110a45a5;
  /* 110a459d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a45a0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a45a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_110a45a5:;
  /* 110a45a5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 110a45aa push 0x110bcca8 */
  push32((uint32_t)(0x110bcca8u));
  /* 110a45af push 2 */
  push32((uint32_t)(0x2u));
  /* 110a45b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a45b4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 110a45bb push edx */
  push32((uint32_t)(EDX));
  /* 110a45bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a45bf push eax */
  push32((uint32_t)(EAX));
  /* 110a45c0 call 0x11094840 */
  push32(0x110a45c5u); f_11094840();
  /* 110a45c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a45c8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110a45cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a45cf jne 0x110a45d9 */
  if (!C.zf) goto L_110a45d9;
  /* 110a45d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a45d4 jmp 0x110a468b */
  goto L_110a468b;
L_110a45d9:;
  /* 110a45d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a45dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a45df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a45e2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 110a45e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a45e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a45eb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 110a45f3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a45f6 mov dword ptr [0x110c061c], eax */
  w32((uint32_t)(0x110c061c), (EAX));
  /* 110a45fb jmp 0x110a4604 */
  goto L_110a4604;
L_110a45fd:;
  /* 110a45fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a45ff jmp 0x110a468b */
  goto L_110a468b;
L_110a4604:;
  /* 110a4604 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4608 je 0x110a4689 */
  if (C.zf) goto L_110a4689;
  /* 110a460a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 110a460f push 0x110bcca8 */
  push32((uint32_t)(0x110bcca8u));
  /* 110a4614 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a4616 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a4619 push ecx */
  push32((uint32_t)(ECX));
  /* 110a461a call 0x110971e0 */
  push32(0x110a461fu); f_110971e0();
  /* 110a461f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4622 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4625 push eax */
  push32((uint32_t)(EAX));
  /* 110a4626 call 0x110943b0 */
  push32(0x110a462bu); f_110943b0();
  /* 110a462b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a462e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 110a4631 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4635 je 0x110a4689 */
  if (C.zf) goto L_110a4689;
  /* 110a4637 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a463a push edx */
  push32((uint32_t)(EDX));
  /* 110a463b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a463e push eax */
  push32((uint32_t)(EAX));
  /* 110a463f call 0x11097360 */
  push32(0x110a4644u); f_11097360();
  /* 110a4644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4647 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110a464a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a464d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a4650 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4652 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110a4655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a4658 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 110a465b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a465e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4661 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110a4664 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110a4667 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 110a4669 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a466b not edx */
  EDX = (~(EDX));
  /* 110a466d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 110a4670 push edx */
  push32((uint32_t)(EDX));
  /* 110a4671 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a4674 push eax */
  push32((uint32_t)(EAX));
  /* 110a4675 call dword ptr [0x110c324c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c324c))), 0x110a467bu);
  /* 110a467b push 2 */
  push32((uint32_t)(0x2u));
  /* 110a467d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a4680 push ecx */
  push32((uint32_t)(ECX));
  /* 110a4681 call 0x11094e40 */
  push32(0x110a4686u); f_11094e40();
  /* 110a4686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a4689:;
  /* 110a4689 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110a468b:;
  /* 110a468b pop esi */
  ESI = (pop32());
  /* 110a468c mov esp, ebp */
  ESP = (EBP);
  /* 110a468e pop ebp */
  EBP = (pop32());
  /* 110a468f ret  */
  ESPCHK(0x110a43b0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x110a4690 (124 bytes, 47 insns) */
void f_110a4690(void) {
  FTRACE(0x110a4690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a4690 push ebp */
  push32((uint32_t)(EBP));
  /* 110a4691 mov ebp, esp */
  EBP = (ESP);
  /* 110a4693 push ecx */
  push32((uint32_t)(ECX));
  /* 110a4694 mov eax, dword ptr [0x110c061c] */
  EAX = (r32((uint32_t)(0x110c061c)));
  /* 110a4699 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110a469c jmp 0x110a46a7 */
  goto L_110a46a7;
L_110a469e:;
  /* 110a469e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a46a1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a46a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_110a46a7:;
  /* 110a46a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a46aa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a46ad je 0x110a46fa */
  if (C.zf) goto L_110a46fa;
  /* 110a46af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a46b2 push eax */
  push32((uint32_t)(EAX));
  /* 110a46b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a46b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a46b8 push edx */
  push32((uint32_t)(EDX));
  /* 110a46b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a46bc push eax */
  push32((uint32_t)(EAX));
  /* 110a46bd call 0x110a3e60 */
  push32(0x110a46c2u); f_110a3e60();
  /* 110a46c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a46c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110a46c7 jne 0x110a46f8 */
  if (!C.zf) goto L_110a46f8;
  /* 110a46c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a46cc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a46ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a46d1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 110a46d5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a46d8 je 0x110a46ea */
  if (C.zf) goto L_110a46ea;
  /* 110a46da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a46dd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a46df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a46e2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 110a46e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a46e8 jne 0x110a46f8 */
  if (!C.zf) goto L_110a46f8;
L_110a46ea:;
  /* 110a46ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a46ed sub eax, dword ptr [0x110c061c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110c061c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a46f3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 110a46f6 jmp 0x110a4708 */
  goto L_110a4708;
L_110a46f8:;
  /* 110a46f8 jmp 0x110a469e */
  goto L_110a469e;
L_110a46fa:;
  /* 110a46fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a46fd sub eax, dword ptr [0x110c061c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110c061c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a4703 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 110a4706 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_110a4708:;
  /* 110a4708 mov esp, ebp */
  ESP = (EBP);
  /* 110a470a pop ebp */
  EBP = (pop32());
  /* 110a470b ret  */
  ESPCHK(0x110a4690u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x110a4710 (238 bytes, 80 insns) */
void f_110a4710(void) {
  FTRACE(0x110a4710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a4710 push ebp */
  push32((uint32_t)(EBP));
  /* 110a4711 mov ebp, esp */
  EBP = (ESP);
  /* 110a4713 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a4716 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 110a471d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a4720 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110a4723 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4727 jne 0x110a4730 */
  if (!C.zf) goto L_110a4730;
  /* 110a4729 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a472b jmp 0x110a47fa */
  goto L_110a47fa;
L_110a4730:;
  /* 110a4730 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a4733 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a4735 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a4738 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a473b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110a473e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a4740 je 0x110a474d */
  if (C.zf) goto L_110a474d;
  /* 110a4742 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a4745 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4748 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 110a474b jmp 0x110a4730 */
  goto L_110a4730;
L_110a474d:;
  /* 110a474d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 110a4752 push 0x110bcca8 */
  push32((uint32_t)(0x110bcca8u));
  /* 110a4757 push 2 */
  push32((uint32_t)(0x2u));
  /* 110a4759 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110a475c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 110a4763 push eax */
  push32((uint32_t)(EAX));
  /* 110a4764 call 0x110943b0 */
  push32(0x110a4769u); f_110943b0();
  /* 110a4769 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a476c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110a476f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a4772 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110a4775 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4779 jne 0x110a4785 */
  if (!C.zf) goto L_110a4785;
  /* 110a477b push 9 */
  push32((uint32_t)(0x9u));
  /* 110a477d call 0x11093320 */
  push32(0x110a4782u); f_11093320();
  /* 110a4782 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a4785:;
  /* 110a4785 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a4788 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_110a478b:;
  /* 110a478b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a478e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a4791 je 0x110a47ee */
  if (C.zf) goto L_110a47ee;
  /* 110a4793 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 110a4798 push 0x110bcca8 */
  push32((uint32_t)(0x110bcca8u));
  /* 110a479d push 2 */
  push32((uint32_t)(0x2u));
  /* 110a479f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a47a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110a47a4 push edx */
  push32((uint32_t)(EDX));
  /* 110a47a5 call 0x110971e0 */
  push32(0x110a47aau); f_110971e0();
  /* 110a47aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a47ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a47b0 push eax */
  push32((uint32_t)(EAX));
  /* 110a47b1 call 0x110943b0 */
  push32(0x110a47b6u); f_110943b0();
  /* 110a47b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a47b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a47bc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110a47be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a47c1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a47c4 je 0x110a47da */
  if (C.zf) goto L_110a47da;
  /* 110a47c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a47c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110a47cb push ecx */
  push32((uint32_t)(ECX));
  /* 110a47cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a47cf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110a47d1 push eax */
  push32((uint32_t)(EAX));
  /* 110a47d2 call 0x11097360 */
  push32(0x110a47d7u); f_11097360();
  /* 110a47d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110a47da:;
  /* 110a47da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110a47dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a47e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110a47e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a47e6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a47e9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110a47ec jmp 0x110a478b */
  goto L_110a478b;
L_110a47ee:;
  /* 110a47ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110a47f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 110a47f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_110a47fa:;
  /* 110a47fa mov esp, ebp */
  ESP = (EBP);
  /* 110a47fc pop ebp */
  EBP = (pop32());
  /* 110a47fd ret  */
  ESPCHK(0x110a4710u, _esp0);
  ESP += 4; return;
}

/* FUN_10014800 @ 0x110a4800 (237 bytes, 81 insns) */
void f_110a4800(void) {
  FTRACE(0x110a4800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a4800 push ebp */
  push32((uint32_t)(EBP));
  /* 110a4801 mov ebp, esp */
  EBP = (ESP);
  /* 110a4803 push ecx */
  push32((uint32_t)(ECX));
  /* 110a4804 cmp dword ptr [0x110c1d6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c1d6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a480b jne 0x110a4822 */
  if (!C.zf) goto L_110a4822;
  /* 110a480d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110a4810 push eax */
  push32((uint32_t)(EAX));
  /* 110a4811 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a4814 push ecx */
  push32((uint32_t)(ECX));
  /* 110a4815 call 0x110a4900 */
  push32(0x110a481au); f_110a4900();
  /* 110a481a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a481d jmp 0x110a48e9 */
  goto L_110a48e9;
L_110a4822:;
  /* 110a4822 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 110a4824 call 0x11097db0 */
  push32(0x110a4829u); f_11097db0();
  /* 110a4829 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a482c jmp 0x110a4837 */
  goto L_110a4837;
L_110a482e:;
  /* 110a482e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a4831 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4834 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_110a4837:;
  /* 110a4837 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a483a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 110a483e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 110a4842 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a4845 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 110a484b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110a484d je 0x110a48cb */
  if (C.zf) goto L_110a48cb;
  /* 110a484f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a4852 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a4857 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a4859 mov cl, byte ptr [eax + 0x110c1e81] */
  CL = (r8((uint32_t)(EAX + 0x110c1e81)));
  /* 110a485f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 110a4862 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a4864 je 0x110a48b6 */
  if (C.zf) goto L_110a48b6;
  /* 110a4866 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a4869 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a486c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 110a486f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a4872 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a4874 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110a4876 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110a4878 jne 0x110a4888 */
  if (!C.zf) goto L_110a4888;
  /* 110a487a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 110a487c call 0x11097e50 */
  push32(0x110a4881u); f_11097e50();
  /* 110a4881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a4886 jmp 0x110a48e9 */
  goto L_110a48e9;
L_110a4888:;
  /* 110a4888 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a488b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 110a4891 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 110a4894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a4897 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110a4899 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110a489b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110a489d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a48a0 jne 0x110a48b4 */
  if (!C.zf) goto L_110a48b4;
  /* 110a48a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 110a48a4 call 0x11097e50 */
  push32(0x110a48a9u); f_11097e50();
  /* 110a48a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a48ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a48af sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110a48b2 jmp 0x110a48e9 */
  goto L_110a48e9;
L_110a48b4:;
  /* 110a48b4 jmp 0x110a48c6 */
  goto L_110a48c6;
L_110a48b6:;
  /* 110a48b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a48b9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 110a48bf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a48c2 jne 0x110a48c6 */
  if (!C.zf) goto L_110a48c6;
  /* 110a48c4 jmp 0x110a48cb */
  goto L_110a48cb;
L_110a48c6:;
  /* 110a48c6 jmp 0x110a482e */
  goto L_110a482e;
L_110a48cb:;
  /* 110a48cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 110a48cd call 0x11097e50 */
  push32(0x110a48d2u); f_11097e50();
  /* 110a48d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110a48d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110a48d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a48dd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110a48e0 jne 0x110a48e7 */
  if (!C.zf) goto L_110a48e7;
  /* 110a48e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110a48e5 jmp 0x110a48e9 */
  goto L_110a48e9;
L_110a48e7:;
  /* 110a48e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110a48e9:;
  /* 110a48e9 mov esp, ebp */
  ESP = (EBP);
  /* 110a48eb pop ebp */
  EBP = (pop32());
  /* 110a48ec ret  */
  ESPCHK(0x110a4800u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x110a4900 (193 bytes, 87 insns) */
void f_110a4900(void) {
  FTRACE(0x110a4900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a4900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a4902 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 110a4906 push ebx */
  push32((uint32_t)(EBX));
  /* 110a4907 mov ebx, eax */
  EBX = (EAX);
  /* 110a4909 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 110a490c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 110a4910 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 110a4916 je 0x110a492b */
  if (C.zf) goto L_110a492b;
L_110a4918:;
  /* 110a4918 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 110a491a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110a491b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a491d je 0x110a48f0 */
  if (C.zf) { jmp_ind(0x110a48f0u); return; }
  /* 110a491f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 110a4921 je 0x110a4974 */
  if (C.zf) goto L_110a4974;
  /* 110a4923 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 110a4929 jne 0x110a4918 */
  if (!C.zf) goto L_110a4918;
L_110a492b:;
  /* 110a492b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 110a492d push edi */
  push32((uint32_t)(EDI));
  /* 110a492e mov eax, ebx */
  EAX = (EBX);
  /* 110a4930 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 110a4933 push esi */
  push32((uint32_t)(ESI));
  /* 110a4934 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_110a4936:;
  /* 110a4936 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 110a4938 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 110a493d mov eax, ecx */
  EAX = (ECX);
  /* 110a493f mov esi, edi */
  ESI = (EDI);
  /* 110a4941 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 110a4943 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4945 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4947 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110a494a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110a494d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 110a494f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 110a4951 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110a4954 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 110a495a jne 0x110a4978 */
  if (!C.zf) goto L_110a4978;
  /* 110a495c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 110a4961 je 0x110a4936 */
  if (C.zf) goto L_110a4936;
  /* 110a4963 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 110a4968 jne 0x110a4972 */
  if (!C.zf) goto L_110a4972;
  /* 110a496a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 110a4970 jne 0x110a4936 */
  if (!C.zf) goto L_110a4936;
L_110a4972:;
  /* 110a4972 pop esi */
  ESI = (pop32());
  /* 110a4973 pop edi */
  EDI = (pop32());
L_110a4974:;
  /* 110a4974 pop ebx */
  EBX = (pop32());
  /* 110a4975 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110a4977 ret  */
  ESPCHK(0x110a4900u, _esp0);
  ESP += 4; return;
L_110a4978:;
  /* 110a4978 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 110a497b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a497d je 0x110a49b5 */
  if (C.zf) goto L_110a49b5;
  /* 110a497f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110a4981 je 0x110a4972 */
  if (C.zf) goto L_110a4972;
  /* 110a4983 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a4985 je 0x110a49ae */
  if (C.zf) goto L_110a49ae;
  /* 110a4987 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 110a4989 je 0x110a4972 */
  if (C.zf) goto L_110a4972;
  /* 110a498b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 110a498e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a4990 je 0x110a49a7 */
  if (C.zf) goto L_110a49a7;
  /* 110a4992 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110a4994 je 0x110a4972 */
  if (C.zf) goto L_110a4972;
  /* 110a4996 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110a4998 je 0x110a49a0 */
  if (C.zf) goto L_110a49a0;
  /* 110a499a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 110a499c je 0x110a4972 */
  if (C.zf) goto L_110a4972;
  /* 110a499e jmp 0x110a4936 */
  goto L_110a4936;
L_110a49a0:;
  /* 110a49a0 pop esi */
  ESI = (pop32());
  /* 110a49a1 pop edi */
  EDI = (pop32());
  /* 110a49a2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 110a49a5 pop ebx */
  EBX = (pop32());
  /* 110a49a6 ret  */
  ESPCHK(0x110a4900u, _esp0);
  ESP += 4; return;
L_110a49a7:;
  /* 110a49a7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 110a49aa pop esi */
  ESI = (pop32());
  /* 110a49ab pop edi */
  EDI = (pop32());
  /* 110a49ac pop ebx */
  EBX = (pop32());
  /* 110a49ad ret  */
  ESPCHK(0x110a4900u, _esp0);
  ESP += 4; return;
L_110a49ae:;
  /* 110a49ae lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 110a49b1 pop esi */
  ESI = (pop32());
  /* 110a49b2 pop edi */
  EDI = (pop32());
  /* 110a49b3 pop ebx */
  EBX = (pop32());
  /* 110a49b4 ret  */
  ESPCHK(0x110a4900u, _esp0);
  ESP += 4; return;
L_110a49b5:;
  /* 110a49b5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 110a49b8 pop esi */
  ESI = (pop32());
  /* 110a49b9 pop edi */
  EDI = (pop32());
  /* 110a49ba pop ebx */
  EBX = (pop32());
  /* 110a49bb ret  */
  ESPCHK(0x110a4900u, _esp0);
  ESP += 4; return;
  /* 110a49bc jmp dword ptr [0x110c3290] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x110c3290)))); return;
}

/* RtlUnwind @ 0x110a4b0c (6 bytes, 1 insns) */
void f_110a4b0c(void) {
  FTRACE(0x110a4b0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110a4b0c jmp dword ptr [0x110c3284] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x110c3284)))); return;
}

