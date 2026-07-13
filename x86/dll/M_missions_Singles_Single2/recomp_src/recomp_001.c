#include "recomp.h"

/* FUN_10004aa0 @ 0x11244aa0 (3846 bytes, 1106 insns) */
void f_11244aa0(void) {
  FTRACE(0x11244aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11244aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11244aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11244aa3 sub esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11244aa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11244aa7 push esi */
  push32((uint32_t)(ESI));
  /* 11244aa8 push edi */
  push32((uint32_t)(EDI));
  /* 11244aa9 lea edi, [ebp - 0x54] */
  EDI = ((uint32_t)(EBP + -0x54));
  /* 11244aac mov ecx, 0x15 */
  ECX = (0x15u);
  /* 11244ab1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11244ab6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11244ab8 mov esi, esp */
  ESI = (ESP);
  /* 11244aba push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11244abc call dword ptr [0x11283504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283504))), 0x11244ac2u);
  /* 11244ac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244ac5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244ac7 call 0x1124a480 */
  push32(0x11244accu); f_1124a480();
  /* 11244acc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11244ad1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11244ad3 je 0x11244cd6 */
  if (C.zf) goto L_11244cd6;
  /* 11244ad9 mov esi, esp */
  ESI = (ESP);
  /* 11244adb push 0 */
  push32((uint32_t)(0x0u));
  /* 11244add call dword ptr [0x11283514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283514))), 0x11244ae3u);
  /* 11244ae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244ae6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244ae8 call 0x1124a480 */
  push32(0x11244aedu); f_1124a480();
  /* 11244aed mov dword ptr [0x11281210], eax */
  w32((uint32_t)(0x11281210), (EAX));
  /* 11244af2 mov esi, esp */
  ESI = (ESP);
  /* 11244af4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11244af6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11244af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244afa call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x11244b00u);
  /* 11244b00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244b03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244b05 call 0x1124a480 */
  push32(0x11244b0au); f_1124a480();
  /* 11244b0a mov esi, esp */
  ESI = (ESP);
  /* 11244b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11244b0e push 1 */
  push32((uint32_t)(0x1u));
  /* 11244b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244b12 call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x11244b18u);
  /* 11244b18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244b1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244b1d call 0x1124a480 */
  push32(0x11244b22u); f_1124a480();
  /* 11244b22 mov esi, esp */
  ESI = (ESP);
  /* 11244b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244b2a call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x11244b30u);
  /* 11244b30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244b33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244b35 call 0x1124a480 */
  push32(0x11244b3au); f_1124a480();
  /* 11244b3a mov esi, esp */
  ESI = (ESP);
  /* 11244b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11244b3e push 2 */
  push32((uint32_t)(0x2u));
  /* 11244b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244b42 call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x11244b48u);
  /* 11244b48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244b4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244b4d call 0x1124a480 */
  push32(0x11244b52u); f_1124a480();
  /* 11244b52 mov esi, esp */
  ESI = (ESP);
  /* 11244b54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244b56 push 5 */
  push32((uint32_t)(0x5u));
  /* 11244b58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244b5a call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x11244b60u);
  /* 11244b60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244b63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244b65 call 0x1124a480 */
  push32(0x11244b6au); f_1124a480();
  /* 11244b6a mov esi, esp */
  ESI = (ESP);
  /* 11244b6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11244b6e push 4 */
  push32((uint32_t)(0x4u));
  /* 11244b70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244b72 call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x11244b78u);
  /* 11244b78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244b7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244b7d call 0x1124a480 */
  push32(0x11244b82u); f_1124a480();
  /* 11244b82 mov esi, esp */
  ESI = (ESP);
  /* 11244b84 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11244b86 push 3 */
  push32((uint32_t)(0x3u));
  /* 11244b88 call dword ptr [0x11283510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283510))), 0x11244b8eu);
  /* 11244b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244b91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244b93 call 0x1124a480 */
  push32(0x11244b98u); f_1124a480();
  /* 11244b98 mov esi, esp */
  ESI = (ESP);
  /* 11244b9a push 0xb */
  push32((uint32_t)(0xbu));
  /* 11244b9c push 1 */
  push32((uint32_t)(0x1u));
  /* 11244b9e call dword ptr [0x11283510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283510))), 0x11244ba4u);
  /* 11244ba4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244ba7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244ba9 call 0x1124a480 */
  push32(0x11244baeu); f_1124a480();
  /* 11244bae mov esi, esp */
  ESI = (ESP);
  /* 11244bb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244bb2 push 0x11281150 */
  push32((uint32_t)(0x11281150u));
  /* 11244bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244bb9 call dword ptr [0x11283520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283520))), 0x11244bbfu);
  /* 11244bbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244bc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244bc4 call 0x1124a480 */
  push32(0x11244bc9u); f_1124a480();
  /* 11244bc9 mov esi, esp */
  ESI = (ESP);
  /* 11244bcb push 0x11281228 */
  push32((uint32_t)(0x11281228u));
  /* 11244bd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244bd2 call dword ptr [0x11283524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283524))), 0x11244bd8u);
  /* 11244bd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244bdb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244bdd call 0x1124a480 */
  push32(0x11244be2u); f_1124a480();
  /* 11244be2 mov esi, esp */
  ESI = (ESP);
  /* 11244be4 push 0x11281230 */
  push32((uint32_t)(0x11281230u));
  /* 11244be9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244beb call dword ptr [0x11283524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283524))), 0x11244bf1u);
  /* 11244bf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244bf4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244bf6 call 0x1124a480 */
  push32(0x11244bfbu); f_1124a480();
  /* 11244bfb mov esi, esp */
  ESI = (ESP);
  /* 11244bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11244bff push 0x11281010 */
  push32((uint32_t)(0x11281010u));
  /* 11244c04 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x11244c0au);
  /* 11244c0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244c0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244c0f call 0x1124a480 */
  push32(0x11244c14u); f_1124a480();
  /* 11244c14 mov esi, esp */
  ESI = (ESP);
  /* 11244c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244c18 push 0x11281100 */
  push32((uint32_t)(0x11281100u));
  /* 11244c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11244c1f call dword ptr [0x112835c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c8))), 0x11244c25u);
  /* 11244c25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244c28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244c2a call 0x1124a480 */
  push32(0x11244c2fu); f_1124a480();
  /* 11244c2f mov esi, esp */
  ESI = (ESP);
  /* 11244c31 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11244c33 call dword ptr [0x1128351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128351c))), 0x11244c39u);
  /* 11244c39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244c3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244c3e call 0x1124a480 */
  push32(0x11244c43u); f_1124a480();
  /* 11244c43 mov esi, esp */
  ESI = (ESP);
  /* 11244c45 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11244c47 call dword ptr [0x1128351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128351c))), 0x11244c4du);
  /* 11244c4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244c50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244c52 call 0x1124a480 */
  push32(0x11244c57u); f_1124a480();
  /* 11244c57 mov esi, esp */
  ESI = (ESP);
  /* 11244c59 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11244c5b call dword ptr [0x1128351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128351c))), 0x11244c61u);
  /* 11244c61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244c64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244c66 call 0x1124a480 */
  push32(0x11244c6bu); f_1124a480();
  /* 11244c6b mov esi, esp */
  ESI = (ESP);
  /* 11244c6d push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11244c6f call dword ptr [0x1128351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128351c))), 0x11244c75u);
  /* 11244c75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244c78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244c7a call 0x1124a480 */
  push32(0x11244c7fu); f_1124a480();
  /* 11244c7f mov esi, esp */
  ESI = (ESP);
  /* 11244c81 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11244c83 call dword ptr [0x1128351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128351c))), 0x11244c89u);
  /* 11244c89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244c8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244c8e call 0x1124a480 */
  push32(0x11244c93u); f_1124a480();
  /* 11244c93 mov esi, esp */
  ESI = (ESP);
  /* 11244c95 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11244c97 call dword ptr [0x1128351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128351c))), 0x11244c9du);
  /* 11244c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244ca0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244ca2 call 0x1124a480 */
  push32(0x11244ca7u); f_1124a480();
  /* 11244ca7 mov esi, esp */
  ESI = (ESP);
  /* 11244ca9 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 11244cae push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11244cb0 call dword ptr [0x1128352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128352c))), 0x11244cb6u);
  /* 11244cb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244cb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244cbb call 0x1124a480 */
  push32(0x11244cc0u); f_1124a480();
  /* 11244cc0 mov esi, esp */
  ESI = (ESP);
  /* 11244cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244cc4 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11244cc6 call dword ptr [0x11283530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283530))), 0x11244cccu);
  /* 11244ccc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244ccf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244cd1 call 0x1124a480 */
  push32(0x11244cd6u); f_1124a480();
L_11244cd6:;
  /* 11244cd6 mov esi, esp */
  ESI = (ESP);
  /* 11244cd8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11244cda call dword ptr [0x11283528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283528))), 0x11244ce0u);
  /* 11244ce0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244ce3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244ce5 call 0x1124a480 */
  push32(0x11244ceau); f_1124a480();
  /* 11244cea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11244cef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11244cf1 je 0x11244de2 */
  if (C.zf) goto L_11244de2;
  /* 11244cf7 mov esi, esp */
  ESI = (ESP);
  /* 11244cf9 push 0x1127b18c */
  push32((uint32_t)(0x1127b18cu));
  /* 11244cfe call dword ptr [0x11283538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283538))), 0x11244d04u);
  /* 11244d04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244d07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244d09 call 0x1124a480 */
  push32(0x11244d0eu); f_1124a480();
  /* 11244d0e mov word ptr [0x11281148], 0x21ca */
  w16((uint32_t)(0x11281148), (0x21cau));
  /* 11244d17 mov word ptr [0x1128114a], 0x1ce8 */
  w16((uint32_t)(0x1128114a), (0x1ce8u));
  /* 11244d20 mov eax, dword ptr [0x1128114c] */
  EAX = (r32((uint32_t)(0x1128114c)));
  /* 11244d25 and eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11244d2a mov dword ptr [0x1128114c], eax */
  w32((uint32_t)(0x1128114c), (EAX));
  /* 11244d2f mov ecx, dword ptr [0x1128114c] */
  ECX = (r32((uint32_t)(0x1128114c)));
  /* 11244d35 add ecx, 0x5dc */
  { uint32_t _a=(ECX),_b=(0x5dcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11244d3b mov dword ptr [0x1128114c], ecx */
  w32((uint32_t)(0x1128114c), (ECX));
  /* 11244d41 mov edx, dword ptr [0x11281210] */
  EDX = (r32((uint32_t)(0x11281210)));
  /* 11244d47 imul edx, edx, 5 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x5u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11244d4a add edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11244d4d mov dword ptr [0x1127ed5c], edx */
  w32((uint32_t)(0x1127ed5c), (EDX));
  /* 11244d53 mov eax, dword ptr [0x1127ed5c] */
  EAX = (r32((uint32_t)(0x1127ed5c)));
  /* 11244d58 push eax */
  push32((uint32_t)(EAX));
  /* 11244d59 push 0x11281148 */
  push32((uint32_t)(0x11281148u));
  /* 11244d5e call 0x112411bd */
  push32(0x11244d63u); f_112411bd();
  /* 11244d63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244d66 mov word ptr [0x11281148], 0x2328 */
  w16((uint32_t)(0x11281148), (0x2328u));
  /* 11244d6f mov word ptr [0x1128114a], 0x1f40 */
  w16((uint32_t)(0x1128114a), (0x1f40u));
  /* 11244d78 mov ecx, dword ptr [0x1128114c] */
  ECX = (r32((uint32_t)(0x1128114c)));
  /* 11244d7e and ecx, 0xff000000 */
  { uint32_t _r=(ECX)&(0xff000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11244d84 mov dword ptr [0x1128114c], ecx */
  w32((uint32_t)(0x1128114c), (ECX));
  /* 11244d8a mov edx, dword ptr [0x1128114c] */
  EDX = (r32((uint32_t)(0x1128114c)));
  /* 11244d90 add edx, 0x16a8 */
  { uint32_t _a=(EDX),_b=(0x16a8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11244d96 mov dword ptr [0x1128114c], edx */
  w32((uint32_t)(0x1128114c), (EDX));
  /* 11244d9c push 0xa */
  push32((uint32_t)(0xau));
  /* 11244d9e push 0x11281148 */
  push32((uint32_t)(0x11281148u));
  /* 11244da3 call 0x112410f0 */
  push32(0x11244da8u); f_112410f0();
  /* 11244da8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244dab call 0x1124126c */
  push32(0x11244db0u); f_1124126c();
  /* 11244db0 mov esi, esp */
  ESI = (ESP);
  /* 11244db2 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11244db7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11244db9 call dword ptr [0x1128352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128352c))), 0x11244dbfu);
  /* 11244dbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244dc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244dc4 call 0x1124a480 */
  push32(0x11244dc9u); f_1124a480();
  /* 11244dc9 mov esi, esp */
  ESI = (ESP);
  /* 11244dcb push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11244dd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11244dd2 call dword ptr [0x1128352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128352c))), 0x11244dd8u);
  /* 11244dd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244ddb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244ddd call 0x1124a480 */
  push32(0x11244de2u); f_1124a480();
L_11244de2:;
  /* 11244de2 mov esi, esp */
  ESI = (ESP);
  /* 11244de4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11244de6 call dword ptr [0x11283504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283504))), 0x11244decu);
  /* 11244dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244def cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244df1 call 0x1124a480 */
  push32(0x11244df6u); f_1124a480();
  /* 11244df6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11244dfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11244dfd je 0x11245995 */
  if (C.zf) goto L_11245995;
  /* 11244e03 mov esi, esp */
  ESI = (ESP);
  /* 11244e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244e07 push 0x11281158 */
  push32((uint32_t)(0x11281158u));
  /* 11244e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11244e0e call dword ptr [0x112835c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c8))), 0x11244e14u);
  /* 11244e14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244e17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244e19 call 0x1124a480 */
  push32(0x11244e1eu); f_1124a480();
  /* 11244e1e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11244e25 jmp 0x11244e30 */
  goto L_11244e30;
L_11244e27:;
  /* 11244e27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11244e2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11244e2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11244e30:;
  /* 11244e30 cmp dword ptr [ebp - 4], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244e34 jge 0x11245035 */
  if ((C.sf==C.of)) goto L_11245035;
  /* 11244e3a mov esi, esp */
  ESI = (ESP);
  /* 11244e3c push 0xd */
  push32((uint32_t)(0xdu));
  /* 11244e3e call dword ptr [0x11283504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283504))), 0x11244e44u);
  /* 11244e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244e47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244e49 call 0x1124a480 */
  push32(0x11244e4eu); f_1124a480();
  /* 11244e4e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11244e53 push eax */
  push32((uint32_t)(EAX));
  /* 11244e54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11244e57 shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11244e5a add ecx, 0x11281018 */
  { uint32_t _a=(ECX),_b=(0x11281018u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11244e60 push ecx */
  push32((uint32_t)(ECX));
  /* 11244e61 call 0x1124106e */
  push32(0x11244e66u); f_1124106e();
  /* 11244e66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244e69 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11244e6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11244e70 je 0x11245030 */
  if (C.zf) goto L_11245030;
  /* 11244e76 mov esi, esp */
  ESI = (ESP);
  /* 11244e78 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11244e7a call dword ptr [0x11283504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283504))), 0x11244e80u);
  /* 11244e80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244e83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244e85 call 0x1124a480 */
  push32(0x11244e8au); f_1124a480();
  /* 11244e8a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11244e8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11244e91 je 0x11245030 */
  if (C.zf) goto L_11245030;
  /* 11244e97 mov esi, esp */
  ESI = (ESP);
  /* 11244e99 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11244e9b call dword ptr [0x1128351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128351c))), 0x11244ea1u);
  /* 11244ea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244ea4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244ea6 call 0x1124a480 */
  push32(0x11244eabu); f_1124a480();
  /* 11244eab mov esi, esp */
  ESI = (ESP);
  /* 11244ead push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11244eaf call dword ptr [0x1128353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128353c))), 0x11244eb5u);
  /* 11244eb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244eb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244eba call 0x1124a480 */
  push32(0x11244ebfu); f_1124a480();
  /* 11244ebf mov esi, esp */
  ESI = (ESP);
  /* 11244ec1 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11244ec3 call dword ptr [0x1128353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128353c))), 0x11244ec9u);
  /* 11244ec9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244ecc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244ece call 0x1124a480 */
  push32(0x11244ed3u); f_1124a480();
  /* 11244ed3 mov esi, esp */
  ESI = (ESP);
  /* 11244ed5 push 0x1127b184 */
  push32((uint32_t)(0x1127b184u));
  /* 11244eda call dword ptr [0x11283538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283538))), 0x11244ee0u);
  /* 11244ee0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244ee3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244ee5 call 0x1124a480 */
  push32(0x11244eeau); f_1124a480();
  /* 11244eea mov esi, esp */
  ESI = (ESP);
  /* 11244eec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11244eee push 0x11281100 */
  push32((uint32_t)(0x11281100u));
  /* 11244ef3 push 0x11281148 */
  push32((uint32_t)(0x11281148u));
  /* 11244ef8 call dword ptr [0x112835bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835bc))), 0x11244efeu);
  /* 11244efe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244f01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244f03 call 0x1124a480 */
  push32(0x11244f08u); f_1124a480();
  /* 11244f08 mov esi, esp */
  ESI = (ESP);
  /* 11244f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11244f0c push 0x11281100 */
  push32((uint32_t)(0x11281100u));
  /* 11244f11 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x11244f17u);
  /* 11244f17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244f1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244f1c call 0x1124a480 */
  push32(0x11244f21u); f_1124a480();
  /* 11244f21 mov esi, esp */
  ESI = (ESP);
  /* 11244f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244f25 call dword ptr [0x11283534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283534))), 0x11244f2bu);
  /* 11244f2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244f2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244f30 call 0x1124a480 */
  push32(0x11244f35u); f_1124a480();
  /* 11244f35 call 0x1124ae80 */
  push32(0x11244f3au); f_1124ae80();
  /* 11244f3a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11244f3b mov ecx, 0xff */
  ECX = (0xffu);
  /* 11244f40 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11244f42 mov esi, esp */
  ESI = (ESP);
  /* 11244f44 push edx */
  push32((uint32_t)(EDX));
  /* 11244f45 push 0x11281148 */
  push32((uint32_t)(0x11281148u));
  /* 11244f4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11244f4c push 0x11281138 */
  push32((uint32_t)(0x11281138u));
  /* 11244f51 push 0x11281218 */
  push32((uint32_t)(0x11281218u));
  /* 11244f56 push 0x11281100 */
  push32((uint32_t)(0x11281100u));
  /* 11244f5b call dword ptr [0x11283580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283580))), 0x11244f61u);
  /* 11244f61 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244f64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244f66 call 0x1124a480 */
  push32(0x11244f6bu); f_1124a480();
  /* 11244f6b mov esi, esp */
  ESI = (ESP);
  /* 11244f6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11244f6f push 0xb */
  push32((uint32_t)(0xbu));
  /* 11244f71 call dword ptr [0x11283530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283530))), 0x11244f77u);
  /* 11244f77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244f7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244f7c call 0x1124a480 */
  push32(0x11244f81u); f_1124a480();
  /* 11244f81 cmp dword ptr [0x11281210], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11281210))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244f88 jge 0x11245030 */
  if ((C.sf==C.of)) goto L_11245030;
  /* 11244f8e mov esi, esp */
  ESI = (ESP);
  /* 11244f90 push 2 */
  push32((uint32_t)(0x2u));
  /* 11244f92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244f94 push 0x112810c0 */
  push32((uint32_t)(0x112810c0u));
  /* 11244f99 call dword ptr [0x11283544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283544))), 0x11244f9fu);
  /* 11244f9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244fa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244fa4 call 0x1124a480 */
  push32(0x11244fa9u); f_1124a480();
  /* 11244fa9 mov esi, esp */
  ESI = (ESP);
  /* 11244fab push 3 */
  push32((uint32_t)(0x3u));
  /* 11244fad push 0 */
  push32((uint32_t)(0x0u));
  /* 11244faf push 0x112810c8 */
  push32((uint32_t)(0x112810c8u));
  /* 11244fb4 call dword ptr [0x11283544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283544))), 0x11244fbau);
  /* 11244fba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244fbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244fbf call 0x1124a480 */
  push32(0x11244fc4u); f_1124a480();
  /* 11244fc4 mov esi, esp */
  ESI = (ESP);
  /* 11244fc6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11244fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244fca push 0x112810d0 */
  push32((uint32_t)(0x112810d0u));
  /* 11244fcf call dword ptr [0x11283544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283544))), 0x11244fd5u);
  /* 11244fd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244fd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244fda call 0x1124a480 */
  push32(0x11244fdfu); f_1124a480();
  /* 11244fdf mov esi, esp */
  ESI = (ESP);
  /* 11244fe1 push 5 */
  push32((uint32_t)(0x5u));
  /* 11244fe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11244fe5 push 0x112810d8 */
  push32((uint32_t)(0x112810d8u));
  /* 11244fea call dword ptr [0x11283544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283544))), 0x11244ff0u);
  /* 11244ff0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11244ff3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11244ff5 call 0x1124a480 */
  push32(0x11244ffau); f_1124a480();
  /* 11244ffa mov esi, esp */
  ESI = (ESP);
  /* 11244ffc push 6 */
  push32((uint32_t)(0x6u));
  /* 11244ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 11245000 push 0x112810e0 */
  push32((uint32_t)(0x112810e0u));
  /* 11245005 call dword ptr [0x11283544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283544))), 0x1124500bu);
  /* 1124500b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124500e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245010 call 0x1124a480 */
  push32(0x11245015u); f_1124a480();
  /* 11245015 mov esi, esp */
  ESI = (ESP);
  /* 11245017 push 7 */
  push32((uint32_t)(0x7u));
  /* 11245019 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124501b push 0x112810e8 */
  push32((uint32_t)(0x112810e8u));
  /* 11245020 call dword ptr [0x11283544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283544))), 0x11245026u);
  /* 11245026 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245029 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124502b call 0x1124a480 */
  push32(0x11245030u); f_1124a480();
L_11245030:;
  /* 11245030 jmp 0x11244e27 */
  goto L_11244e27;
L_11245035:;
  /* 11245035 mov esi, esp */
  ESI = (ESP);
  /* 11245037 push 2 */
  push32((uint32_t)(0x2u));
  /* 11245039 call dword ptr [0x11283528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283528))), 0x1124503fu);
  /* 1124503f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245042 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245044 call 0x1124a480 */
  push32(0x11245049u); f_1124a480();
  /* 11245049 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124504e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11245050 je 0x112450c2 */
  if (C.zf) goto L_112450c2;
  /* 11245052 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11245059 jmp 0x11245064 */
  goto L_11245064;
L_1124505b:;
  /* 1124505b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124505e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11245061 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11245064:;
  /* 11245064 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245068 jge 0x112450a9 */
  if ((C.sf==C.of)) goto L_112450a9;
  /* 1124506a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124506d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1124506e mov ecx, 3 */
  ECX = (0x3u);
  /* 11245073 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11245075 mov esi, edx */
  ESI = (EDX);
  /* 11245077 mov edi, esp */
  EDI = (ESP);
  /* 11245079 call dword ptr [0x11283548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283548))), 0x1124507fu);
  /* 1124507f cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245081 call 0x1124a480 */
  push32(0x11245086u); f_1124a480();
  /* 11245086 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11245087 mov ecx, 3 */
  ECX = (0x3u);
  /* 1124508c idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1124508e cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245090 jne 0x112450a7 */
  if (!C.zf) goto L_112450a7;
  /* 11245092 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11245095 shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11245098 add edx, 0x11281018 */
  { uint32_t _a=(EDX),_b=(0x11281018u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124509e push edx */
  push32((uint32_t)(EDX));
  /* 1124509f call 0x1124100f */
  push32(0x112450a4u); f_1124100f();
  /* 112450a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112450a7:;
  /* 112450a7 jmp 0x1124505b */
  goto L_1124505b;
L_112450a9:;
  /* 112450a9 mov esi, esp */
  ESI = (ESP);
  /* 112450ab push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 112450b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 112450b2 call dword ptr [0x1128352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128352c))), 0x112450b8u);
  /* 112450b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112450bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112450bd call 0x1124a480 */
  push32(0x112450c2u); f_1124a480();
L_112450c2:;
  /* 112450c2 mov esi, esp */
  ESI = (ESP);
  /* 112450c4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 112450c6 call dword ptr [0x11283504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283504))), 0x112450ccu);
  /* 112450cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112450cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112450d1 call 0x1124a480 */
  push32(0x112450d6u); f_1124a480();
  /* 112450d6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112450db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112450dd je 0x112457cb */
  if (C.zf) goto L_112457cb;
  /* 112450e3 mov esi, esp */
  ESI = (ESP);
  /* 112450e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 112450e7 call dword ptr [0x11283528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283528))), 0x112450edu);
  /* 112450ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112450f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112450f2 call 0x1124a480 */
  push32(0x112450f7u); f_1124a480();
  /* 112450f7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112450fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112450fe je 0x11245175 */
  if (C.zf) goto L_11245175;
  /* 11245100 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11245107 jmp 0x11245112 */
  goto L_11245112;
L_11245109:;
  /* 11245109 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124510c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124510f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11245112:;
  /* 11245112 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11245115 cmp ecx, dword ptr [0x1127ed5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1127ed5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124511b jge 0x1124515c */
  if ((C.sf==C.of)) goto L_1124515c;
  /* 1124511d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11245120 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11245121 mov ecx, 3 */
  ECX = (0x3u);
  /* 11245126 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11245128 mov esi, edx */
  ESI = (EDX);
  /* 1124512a mov edi, esp */
  EDI = (ESP);
  /* 1124512c call dword ptr [0x11283548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283548))), 0x11245132u);
  /* 11245132 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245134 call 0x1124a480 */
  push32(0x11245139u); f_1124a480();
  /* 11245139 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1124513a mov ecx, 3 */
  ECX = (0x3u);
  /* 1124513f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11245141 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245143 jne 0x1124515a */
  if (!C.zf) goto L_1124515a;
  /* 11245145 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11245148 shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1124514b add edx, 0x11280ce8 */
  { uint32_t _a=(EDX),_b=(0x11280ce8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11245151 push edx */
  push32((uint32_t)(EDX));
  /* 11245152 call 0x112412cb */
  push32(0x11245157u); f_112412cb();
  /* 11245157 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124515a:;
  /* 1124515a jmp 0x11245109 */
  goto L_11245109;
L_1124515c:;
  /* 1124515c mov esi, esp */
  ESI = (ESP);
  /* 1124515e push 0x96 */
  push32((uint32_t)(0x96u));
  /* 11245163 push 1 */
  push32((uint32_t)(0x1u));
  /* 11245165 call dword ptr [0x1128352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128352c))), 0x1124516bu);
  /* 1124516b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124516e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245170 call 0x1124a480 */
  push32(0x11245175u); f_1124a480();
L_11245175:;
  /* 11245175 mov esi, esp */
  ESI = (ESP);
  /* 11245177 push 2 */
  push32((uint32_t)(0x2u));
  /* 11245179 call dword ptr [0x11283504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283504))), 0x1124517fu);
  /* 1124517f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245182 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245184 call 0x1124a480 */
  push32(0x11245189u); f_1124a480();
  /* 11245189 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124518e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11245190 je 0x11245221 */
  if (C.zf) goto L_11245221;
  /* 11245196 mov esi, esp */
  ESI = (ESP);
  /* 11245198 push 0x11281100 */
  push32((uint32_t)(0x11281100u));
  /* 1124519d push 0x112810b8 */
  push32((uint32_t)(0x112810b8u));
  /* 112451a2 call dword ptr [0x112835ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835ac))), 0x112451a8u);
  /* 112451a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112451ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112451ad call 0x1124a480 */
  push32(0x112451b2u); f_1124a480();
  /* 112451b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112451b4 jne 0x11245221 */
  if (!C.zf) goto L_11245221;
  /* 112451b6 mov esi, esp */
  ESI = (ESP);
  /* 112451b8 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 112451bd push 3 */
  push32((uint32_t)(0x3u));
  /* 112451bf call dword ptr [0x1128352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128352c))), 0x112451c5u);
  /* 112451c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112451c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112451ca call 0x1124a480 */
  push32(0x112451cfu); f_1124a480();
  /* 112451cf mov esi, esp */
  ESI = (ESP);
  /* 112451d1 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 112451d3 call dword ptr [0x1128351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128351c))), 0x112451d9u);
  /* 112451d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112451dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112451de call 0x1124a480 */
  push32(0x112451e3u); f_1124a480();
  /* 112451e3 mov esi, esp */
  ESI = (ESP);
  /* 112451e5 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 112451e7 call dword ptr [0x1128353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128353c))), 0x112451edu);
  /* 112451ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112451f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112451f2 call 0x1124a480 */
  push32(0x112451f7u); f_1124a480();
  /* 112451f7 mov esi, esp */
  ESI = (ESP);
  /* 112451f9 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 112451fb call dword ptr [0x1128353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128353c))), 0x11245201u);
  /* 11245201 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245204 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245206 call 0x1124a480 */
  push32(0x1124520bu); f_1124a480();
  /* 1124520b mov esi, esp */
  ESI = (ESP);
  /* 1124520d push 0 */
  push32((uint32_t)(0x0u));
  /* 1124520f push 2 */
  push32((uint32_t)(0x2u));
  /* 11245211 call dword ptr [0x11283530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283530))), 0x11245217u);
  /* 11245217 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124521a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124521c call 0x1124a480 */
  push32(0x11245221u); f_1124a480();
L_11245221:;
  /* 11245221 mov esi, esp */
  ESI = (ESP);
  /* 11245223 push 3 */
  push32((uint32_t)(0x3u));
  /* 11245225 call dword ptr [0x11283528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283528))), 0x1124522bu);
  /* 1124522b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124522e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245230 call 0x1124a480 */
  push32(0x11245235u); f_1124a480();
  /* 11245235 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124523a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124523c je 0x11245323 */
  if (C.zf) goto L_11245323;
  /* 11245242 mov esi, esp */
  ESI = (ESP);
  /* 11245244 push 2 */
  push32((uint32_t)(0x2u));
  /* 11245246 push 1 */
  push32((uint32_t)(0x1u));
  /* 11245248 call dword ptr [0x11283510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283510))), 0x1124524eu);
  /* 1124524e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245251 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245253 call 0x1124a480 */
  push32(0x11245258u); f_1124a480();
  /* 11245258 mov esi, esp */
  ESI = (ESP);
  /* 1124525a push 0 */
  push32((uint32_t)(0x0u));
  /* 1124525c push 5 */
  push32((uint32_t)(0x5u));
  /* 1124525e call dword ptr [0x11283530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283530))), 0x11245264u);
  /* 11245264 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245267 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245269 call 0x1124a480 */
  push32(0x1124526eu); f_1124a480();
  /* 1124526e mov esi, esp */
  ESI = (ESP);
  /* 11245270 push 0x1127b17c */
  push32((uint32_t)(0x1127b17cu));
  /* 11245275 call dword ptr [0x11283538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283538))), 0x1124527bu);
  /* 1124527b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124527e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245280 call 0x1124a480 */
  push32(0x11245285u); f_1124a480();
  /* 11245285 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1124528c jmp 0x11245297 */
  goto L_11245297;
L_1124528e:;
  /* 1124528e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11245291 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11245294 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11245297:;
  /* 11245297 mov ecx, dword ptr [0x11281210] */
  ECX = (r32((uint32_t)(0x11281210)));
  /* 1124529d lea edx, [ecx + ecx + 4] */
  EDX = ((uint32_t)(ECX + ECX*1 + 0x4));
  /* 112452a1 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112452a4 jge 0x112452fa */
  if ((C.sf==C.of)) goto L_112452fa;
  /* 112452a6 call 0x1124ae80 */
  push32(0x112452abu); f_1124ae80();
  /* 112452ab cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112452ac mov ecx, 0xff */
  ECX = (0xffu);
  /* 112452b1 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112452b3 mov esi, esp */
  ESI = (ESP);
  /* 112452b5 push edx */
  push32((uint32_t)(EDX));
  /* 112452b6 push 0x112810b8 */
  push32((uint32_t)(0x112810b8u));
  /* 112452bb push 1 */
  push32((uint32_t)(0x1u));
  /* 112452bd push 0x11281150 */
  push32((uint32_t)(0x11281150u));
  /* 112452c2 push 0x11281218 */
  push32((uint32_t)(0x11281218u));
  /* 112452c7 push 0x11281160 */
  push32((uint32_t)(0x11281160u));
  /* 112452cc call dword ptr [0x11283580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283580))), 0x112452d2u);
  /* 112452d2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112452d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112452d7 call 0x1124a480 */
  push32(0x112452dcu); f_1124a480();
  /* 112452dc mov esi, esp */
  ESI = (ESP);
  /* 112452de push 0x11280cd8 */
  push32((uint32_t)(0x11280cd8u));
  /* 112452e3 push 0x11281160 */
  push32((uint32_t)(0x11281160u));
  /* 112452e8 call dword ptr [0x11283540] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283540))), 0x112452eeu);
  /* 112452ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112452f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112452f3 call 0x1124a480 */
  push32(0x112452f8u); f_1124a480();
  /* 112452f8 jmp 0x1124528e */
  goto L_1124528e;
L_112452fa:;
  /* 112452fa mov edx, 3 */
  EDX = (0x3u);
  /* 112452ff sub edx, dword ptr [0x11281210] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11281210))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11245305 imul edx, edx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x64u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11245308 add edx, 0x3e8 */
  { uint32_t _a=(EDX),_b=(0x3e8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124530e mov esi, esp */
  ESI = (ESP);
  /* 11245310 push edx */
  push32((uint32_t)(EDX));
  /* 11245311 push 7 */
  push32((uint32_t)(0x7u));
  /* 11245313 call dword ptr [0x1128352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128352c))), 0x11245319u);
  /* 11245319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124531c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124531e call 0x1124a480 */
  push32(0x11245323u); f_1124a480();
L_11245323:;
  /* 11245323 mov esi, esp */
  ESI = (ESP);
  /* 11245325 push 7 */
  push32((uint32_t)(0x7u));
  /* 11245327 call dword ptr [0x11283528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283528))), 0x1124532du);
  /* 1124532d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245330 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245332 call 0x1124a480 */
  push32(0x11245337u); f_1124a480();
  /* 11245337 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124533c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124533e je 0x112453d0 */
  if (C.zf) goto L_112453d0;
  /* 11245344 mov esi, esp */
  ESI = (ESP);
  /* 11245346 push 0 */
  push32((uint32_t)(0x0u));
  /* 11245348 push 0x11280cd8 */
  push32((uint32_t)(0x11280cd8u));
  /* 1124534d call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x11245353u);
  /* 11245353 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245356 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245358 call 0x1124a480 */
  push32(0x1124535du); f_1124a480();
  /* 1124535d mov esi, esp */
  ESI = (ESP);
  /* 1124535f push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11245364 push 0x11281100 */
  push32((uint32_t)(0x11281100u));
  /* 11245369 push 0x11281148 */
  push32((uint32_t)(0x11281148u));
  /* 1124536e call dword ptr [0x112835bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835bc))), 0x11245374u);
  /* 11245374 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245377 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245379 call 0x1124a480 */
  push32(0x1124537eu); f_1124a480();
  /* 1124537e mov esi, esp */
  ESI = (ESP);
  /* 11245380 push 2 */
  push32((uint32_t)(0x2u));
  /* 11245382 call 0x1124ae80 */
  push32(0x11245387u); f_1124ae80();
  /* 11245387 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11245388 mov ecx, 0xff */
  ECX = (0xffu);
  /* 1124538d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1124538f push edx */
  push32((uint32_t)(EDX));
  /* 11245390 push 0x11281148 */
  push32((uint32_t)(0x11281148u));
  /* 11245395 push 1 */
  push32((uint32_t)(0x1u));
  /* 11245397 call dword ptr [0x112835a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a0))), 0x1124539du);
  /* 1124539d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112453a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112453a2 call 0x1124a480 */
  push32(0x112453a7u); f_1124a480();
  /* 112453a7 mov edx, 3 */
  EDX = (0x3u);
  /* 112453ac sub edx, dword ptr [0x11281210] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11281210))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112453b2 imul edx, edx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x64u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112453b5 add edx, 0x3e8 */
  { uint32_t _a=(EDX),_b=(0x3e8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112453bb mov esi, esp */
  ESI = (ESP);
  /* 112453bd push edx */
  push32((uint32_t)(EDX));
  /* 112453be push 7 */
  push32((uint32_t)(0x7u));
  /* 112453c0 call dword ptr [0x1128352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128352c))), 0x112453c6u);
  /* 112453c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112453c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112453cb call 0x1124a480 */
  push32(0x112453d0u); f_1124a480();
L_112453d0:;
  /* 112453d0 mov esi, esp */
  ESI = (ESP);
  /* 112453d2 push 5 */
  push32((uint32_t)(0x5u));
  /* 112453d4 call dword ptr [0x11283504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283504))), 0x112453dau);
  /* 112453da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112453dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112453df call 0x1124a480 */
  push32(0x112453e4u); f_1124a480();
  /* 112453e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112453e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112453eb je 0x11245471 */
  if (C.zf) goto L_11245471;
  /* 112453f1 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 112453f8 jmp 0x11245403 */
  goto L_11245403;
L_112453fa:;
  /* 112453fa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112453fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11245400 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11245403:;
  /* 11245403 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11245406 cmp ecx, dword ptr [0x1127ed5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1127ed5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124540c jge 0x11245471 */
  if ((C.sf==C.of)) goto L_11245471;
  /* 1124540e mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11245411 shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11245414 add edx, 0x11280ce8 */
  { uint32_t _a=(EDX),_b=(0x11280ce8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124541a push edx */
  push32((uint32_t)(EDX));
  /* 1124541b call 0x11241096 */
  push32(0x11245420u); f_11241096();
  /* 11245420 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245423 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11245428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124542a je 0x1124546f */
  if (C.zf) goto L_1124546f;
  /* 1124542c mov esi, esp */
  ESI = (ESP);
  /* 1124542e push 0x1127b174 */
  push32((uint32_t)(0x1127b174u));
  /* 11245433 call dword ptr [0x11283538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283538))), 0x11245439u);
  /* 11245439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124543c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124543e call 0x1124a480 */
  push32(0x11245443u); f_1124a480();
  /* 11245443 mov esi, esp */
  ESI = (ESP);
  /* 11245445 push 2 */
  push32((uint32_t)(0x2u));
  /* 11245447 push 1 */
  push32((uint32_t)(0x1u));
  /* 11245449 call dword ptr [0x11283510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283510))), 0x1124544fu);
  /* 1124544f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245452 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245454 call 0x1124a480 */
  push32(0x11245459u); f_1124a480();
  /* 11245459 mov esi, esp */
  ESI = (ESP);
  /* 1124545b push 0 */
  push32((uint32_t)(0x0u));
  /* 1124545d push 5 */
  push32((uint32_t)(0x5u));
  /* 1124545f call dword ptr [0x11283530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283530))), 0x11245465u);
  /* 11245465 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245468 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124546a call 0x1124a480 */
  push32(0x1124546fu); f_1124a480();
L_1124546f:;
  /* 1124546f jmp 0x112453fa */
  goto L_112453fa;
L_11245471:;
  /* 11245471 push 0x11281108 */
  push32((uint32_t)(0x11281108u));
  /* 11245476 push 0x112810c0 */
  push32((uint32_t)(0x112810c0u));
  /* 1124547b call 0x11241073 */
  push32(0x11245480u); f_11241073();
  /* 11245480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245483 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11245488 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124548a jne 0x1124551b */
  if (!C.zf) goto L_1124551b;
  /* 11245490 push 0x11281110 */
  push32((uint32_t)(0x11281110u));
  /* 11245495 push 0x112810c8 */
  push32((uint32_t)(0x112810c8u));
  /* 1124549a call 0x11241073 */
  push32(0x1124549fu); f_11241073();
  /* 1124549f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112454a2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112454a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112454a9 jne 0x1124551b */
  if (!C.zf) goto L_1124551b;
  /* 112454ab push 0x11281118 */
  push32((uint32_t)(0x11281118u));
  /* 112454b0 push 0x112810d0 */
  push32((uint32_t)(0x112810d0u));
  /* 112454b5 call 0x11241073 */
  push32(0x112454bau); f_11241073();
  /* 112454ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112454bd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112454c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112454c4 jne 0x1124551b */
  if (!C.zf) goto L_1124551b;
  /* 112454c6 push 0x11281120 */
  push32((uint32_t)(0x11281120u));
  /* 112454cb push 0x112810d8 */
  push32((uint32_t)(0x112810d8u));
  /* 112454d0 call 0x11241073 */
  push32(0x112454d5u); f_11241073();
  /* 112454d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112454d8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112454dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112454df jne 0x1124551b */
  if (!C.zf) goto L_1124551b;
  /* 112454e1 push 0x11281128 */
  push32((uint32_t)(0x11281128u));
  /* 112454e6 push 0x112810e0 */
  push32((uint32_t)(0x112810e0u));
  /* 112454eb call 0x11241073 */
  push32(0x112454f0u); f_11241073();
  /* 112454f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112454f3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112454f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112454fa jne 0x1124551b */
  if (!C.zf) goto L_1124551b;
  /* 112454fc push 0x11281130 */
  push32((uint32_t)(0x11281130u));
  /* 11245501 push 0x112810e8 */
  push32((uint32_t)(0x112810e8u));
  /* 11245506 call 0x11241073 */
  push32(0x1124550bu); f_11241073();
  /* 1124550b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124550e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11245513 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11245515 je 0x112457cb */
  if (C.zf) goto L_112457cb;
L_1124551b:;
  /* 1124551b mov esi, esp */
  ESI = (ESP);
  /* 1124551d push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1124551f call dword ptr [0x1128351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128351c))), 0x11245525u);
  /* 11245525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245528 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124552a call 0x1124a480 */
  push32(0x1124552fu); f_1124a480();
  /* 1124552f mov esi, esp */
  ESI = (ESP);
  /* 11245531 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11245533 call dword ptr [0x1128353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128353c))), 0x11245539u);
  /* 11245539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124553c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124553e call 0x1124a480 */
  push32(0x11245543u); f_1124a480();
  /* 11245543 mov esi, esp */
  ESI = (ESP);
  /* 11245545 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11245547 call dword ptr [0x1128353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128353c))), 0x1124554du);
  /* 1124554d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245550 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245552 call 0x1124a480 */
  push32(0x11245557u); f_1124a480();
  /* 11245557 mov esi, esp */
  ESI = (ESP);
  /* 11245559 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124555b push 3 */
  push32((uint32_t)(0x3u));
  /* 1124555d call dword ptr [0x11283510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283510))), 0x11245563u);
  /* 11245563 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245566 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245568 call 0x1124a480 */
  push32(0x1124556du); f_1124a480();
  /* 1124556d mov esi, esp */
  ESI = (ESP);
  /* 1124556f push 0 */
  push32((uint32_t)(0x0u));
  /* 11245571 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11245573 call dword ptr [0x11283530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283530))), 0x11245579u);
  /* 11245579 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124557c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124557e call 0x1124a480 */
  push32(0x11245583u); f_1124a480();
  /* 11245583 mov eax, dword ptr [0x11281210] */
  EAX = (r32((uint32_t)(0x11281210)));
  /* 11245588 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1124558e mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 11245593 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11245595 mov esi, esp */
  ESI = (ESP);
  /* 11245597 push ecx */
  push32((uint32_t)(ECX));
  /* 11245598 push 3 */
  push32((uint32_t)(0x3u));
  /* 1124559a push 0 */
  push32((uint32_t)(0x0u));
  /* 1124559c call dword ptr [0x11283570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283570))), 0x112455a2u);
  /* 112455a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112455a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112455a7 call 0x1124a480 */
  push32(0x112455acu); f_1124a480();
  /* 112455ac mov edx, dword ptr [0x11281210] */
  EDX = (r32((uint32_t)(0x11281210)));
  /* 112455b2 imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112455b8 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 112455bd sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112455bf mov esi, esp */
  ESI = (ESP);
  /* 112455c1 push eax */
  push32((uint32_t)(EAX));
  /* 112455c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 112455c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112455c6 call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x112455ccu);
  /* 112455cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112455cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112455d1 call 0x1124a480 */
  push32(0x112455d6u); f_1124a480();
  /* 112455d6 mov ecx, dword ptr [0x11281210] */
  ECX = (r32((uint32_t)(0x11281210)));
  /* 112455dc imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112455e2 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 112455e7 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112455e9 mov esi, esp */
  ESI = (ESP);
  /* 112455eb push edx */
  push32((uint32_t)(EDX));
  /* 112455ec push 0 */
  push32((uint32_t)(0x0u));
  /* 112455ee push 0 */
  push32((uint32_t)(0x0u));
  /* 112455f0 call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x112455f6u);
  /* 112455f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112455f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112455fb call 0x1124a480 */
  push32(0x11245600u); f_1124a480();
  /* 11245600 mov eax, dword ptr [0x11281210] */
  EAX = (r32((uint32_t)(0x11281210)));
  /* 11245605 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1124560b mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 11245610 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11245612 mov esi, esp */
  ESI = (ESP);
  /* 11245614 push ecx */
  push32((uint32_t)(ECX));
  /* 11245615 push 2 */
  push32((uint32_t)(0x2u));
  /* 11245617 push 0 */
  push32((uint32_t)(0x0u));
  /* 11245619 call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x1124561fu);
  /* 1124561f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245622 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245624 call 0x1124a480 */
  push32(0x11245629u); f_1124a480();
  /* 11245629 mov esi, esp */
  ESI = (ESP);
  /* 1124562b push 0 */
  push32((uint32_t)(0x0u));
  /* 1124562d push 5 */
  push32((uint32_t)(0x5u));
  /* 1124562f push 0 */
  push32((uint32_t)(0x0u));
  /* 11245631 call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x11245637u);
  /* 11245637 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124563a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124563c call 0x1124a480 */
  push32(0x11245641u); f_1124a480();
  /* 11245641 mov edx, dword ptr [0x11281210] */
  EDX = (r32((uint32_t)(0x11281210)));
  /* 11245647 imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1124564d mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 11245652 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11245654 mov esi, esp */
  ESI = (ESP);
  /* 11245656 push eax */
  push32((uint32_t)(EAX));
  /* 11245657 push 4 */
  push32((uint32_t)(0x4u));
  /* 11245659 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124565b call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x11245661u);
  /* 11245661 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245664 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245666 call 0x1124a480 */
  push32(0x1124566bu); f_1124a480();
  /* 1124566b mov esi, esp */
  ESI = (ESP);
  /* 1124566d push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11245672 push 3 */
  push32((uint32_t)(0x3u));
  /* 11245674 push 1 */
  push32((uint32_t)(0x1u));
  /* 11245676 call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x1124567cu);
  /* 1124567c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124567f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245681 call 0x1124a480 */
  push32(0x11245686u); f_1124a480();
  /* 11245686 mov esi, esp */
  ESI = (ESP);
  /* 11245688 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1124568d push 1 */
  push32((uint32_t)(0x1u));
  /* 1124568f push 1 */
  push32((uint32_t)(0x1u));
  /* 11245691 call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x11245697u);
  /* 11245697 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124569a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124569c call 0x1124a480 */
  push32(0x112456a1u); f_1124a480();
  /* 112456a1 mov esi, esp */
  ESI = (ESP);
  /* 112456a3 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112456a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112456aa push 1 */
  push32((uint32_t)(0x1u));
  /* 112456ac call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x112456b2u);
  /* 112456b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112456b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112456b7 call 0x1124a480 */
  push32(0x112456bcu); f_1124a480();
  /* 112456bc mov esi, esp */
  ESI = (ESP);
  /* 112456be push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112456c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112456c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 112456c7 call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x112456cdu);
  /* 112456cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112456d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112456d2 call 0x1124a480 */
  push32(0x112456d7u); f_1124a480();
  /* 112456d7 mov esi, esp */
  ESI = (ESP);
  /* 112456d9 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 112456de push 5 */
  push32((uint32_t)(0x5u));
  /* 112456e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 112456e2 call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x112456e8u);
  /* 112456e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112456eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112456ed call 0x1124a480 */
  push32(0x112456f2u); f_1124a480();
  /* 112456f2 mov esi, esp */
  ESI = (ESP);
  /* 112456f4 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 112456f9 push 4 */
  push32((uint32_t)(0x4u));
  /* 112456fb push 1 */
  push32((uint32_t)(0x1u));
  /* 112456fd call dword ptr [0x11283518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283518))), 0x11245703u);
  /* 11245703 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245706 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245708 call 0x1124a480 */
  push32(0x1124570du); f_1124a480();
  /* 1124570d cmp dword ptr [0x11281210], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11281210))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245714 jge 0x1124578e */
  if ((C.sf==C.of)) goto L_1124578e;
  /* 11245716 mov esi, esp */
  ESI = (ESP);
  /* 11245718 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124571a call dword ptr [0x11283550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283550))), 0x11245720u);
  /* 11245720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245723 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245725 call 0x1124a480 */
  push32(0x1124572au); f_1124a480();
  /* 1124572a mov esi, esp */
  ESI = (ESP);
  /* 1124572c push 3 */
  push32((uint32_t)(0x3u));
  /* 1124572e call dword ptr [0x11283550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283550))), 0x11245734u);
  /* 11245734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245737 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245739 call 0x1124a480 */
  push32(0x1124573eu); f_1124a480();
  /* 1124573e mov esi, esp */
  ESI = (ESP);
  /* 11245740 push 4 */
  push32((uint32_t)(0x4u));
  /* 11245742 call dword ptr [0x11283550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283550))), 0x11245748u);
  /* 11245748 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124574b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124574d call 0x1124a480 */
  push32(0x11245752u); f_1124a480();
  /* 11245752 mov esi, esp */
  ESI = (ESP);
  /* 11245754 push 5 */
  push32((uint32_t)(0x5u));
  /* 11245756 call dword ptr [0x11283550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283550))), 0x1124575cu);
  /* 1124575c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124575f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245761 call 0x1124a480 */
  push32(0x11245766u); f_1124a480();
  /* 11245766 mov esi, esp */
  ESI = (ESP);
  /* 11245768 push 6 */
  push32((uint32_t)(0x6u));
  /* 1124576a call dword ptr [0x11283550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283550))), 0x11245770u);
  /* 11245770 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245773 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245775 call 0x1124a480 */
  push32(0x1124577au); f_1124a480();
  /* 1124577a mov esi, esp */
  ESI = (ESP);
  /* 1124577c push 7 */
  push32((uint32_t)(0x7u));
  /* 1124577e call dword ptr [0x11283550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283550))), 0x11245784u);
  /* 11245784 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245787 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245789 call 0x1124a480 */
  push32(0x1124578eu); f_1124a480();
L_1124578e:;
  /* 1124578e mov esi, esp */
  ESI = (ESP);
  /* 11245790 push 0x1127b16c */
  push32((uint32_t)(0x1127b16cu));
  /* 11245795 call dword ptr [0x11283538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283538))), 0x1124579bu);
  /* 1124579b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124579e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112457a0 call 0x1124a480 */
  push32(0x112457a5u); f_1124a480();
  /* 112457a5 mov esi, esp */
  ESI = (ESP);
  /* 112457a7 mov ecx, dword ptr [0x11281210] */
  ECX = (r32((uint32_t)(0x11281210)));
  /* 112457ad push ecx */
  push32((uint32_t)(ECX));
  /* 112457ae push 0 */
  push32((uint32_t)(0x0u));
  /* 112457b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112457b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112457b4 push 0x1127b160 */
  push32((uint32_t)(0x1127b160u));
  /* 112457b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 112457bb call dword ptr [0x11283554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283554))), 0x112457c1u);
  /* 112457c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112457c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112457c6 call 0x1124a480 */
  push32(0x112457cbu); f_1124a480();
L_112457cb:;
  /* 112457cb mov esi, esp */
  ESI = (ESP);
  /* 112457cd push 1 */
  push32((uint32_t)(0x1u));
  /* 112457cf call dword ptr [0x1128354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128354c))), 0x112457d5u);
  /* 112457d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112457d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112457da call 0x1124a480 */
  push32(0x112457dfu); f_1124a480();
  /* 112457df and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112457e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112457e6 je 0x11245824 */
  if (C.zf) goto L_11245824;
  /* 112457e8 mov esi, esp */
  ESI = (ESP);
  /* 112457ea push 0x1127b158 */
  push32((uint32_t)(0x1127b158u));
  /* 112457ef call dword ptr [0x11283538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283538))), 0x112457f5u);
  /* 112457f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112457f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112457fa call 0x1124a480 */
  push32(0x112457ffu); f_1124a480();
  /* 112457ff mov esi, esp */
  ESI = (ESP);
  /* 11245801 call dword ptr [0x1128355c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128355c))), 0x11245807u);
  /* 11245807 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245809 call 0x1124a480 */
  push32(0x1124580eu); f_1124a480();
  /* 1124580e mov esi, esp */
  ESI = (ESP);
  /* 11245810 push 0 */
  push32((uint32_t)(0x0u));
  /* 11245812 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11245814 call dword ptr [0x11283530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283530))), 0x1124581au);
  /* 1124581a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124581d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124581f call 0x1124a480 */
  push32(0x11245824u); f_1124a480();
L_11245824:;
  /* 11245824 mov esi, esp */
  ESI = (ESP);
  /* 11245826 push 5 */
  push32((uint32_t)(0x5u));
  /* 11245828 call dword ptr [0x11283504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283504))), 0x1124582eu);
  /* 1124582e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245831 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245833 call 0x1124a480 */
  push32(0x11245838u); f_1124a480();
  /* 11245838 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124583d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124583f jne 0x1124589b */
  if (!C.zf) goto L_1124589b;
  /* 11245841 mov esi, esp */
  ESI = (ESP);
  /* 11245843 push 1 */
  push32((uint32_t)(0x1u));
  /* 11245845 push 0x11281100 */
  push32((uint32_t)(0x11281100u));
  /* 1124584a call dword ptr [0x11283564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283564))), 0x11245850u);
  /* 11245850 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245853 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245855 call 0x1124a480 */
  push32(0x1124585au); f_1124a480();
  /* 1124585a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124585d jne 0x1124589b */
  if (!C.zf) goto L_1124589b;
  /* 1124585f mov esi, esp */
  ESI = (ESP);
  /* 11245861 push 0x1127b150 */
  push32((uint32_t)(0x1127b150u));
  /* 11245866 call dword ptr [0x11283538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283538))), 0x1124586cu);
  /* 1124586c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124586f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245871 call 0x1124a480 */
  push32(0x11245876u); f_1124a480();
  /* 11245876 mov esi, esp */
  ESI = (ESP);
  /* 11245878 call dword ptr [0x11283560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283560))), 0x1124587eu);
  /* 1124587e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245880 call 0x1124a480 */
  push32(0x11245885u); f_1124a480();
  /* 11245885 mov esi, esp */
  ESI = (ESP);
  /* 11245887 push 0 */
  push32((uint32_t)(0x0u));
  /* 11245889 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1124588b call dword ptr [0x11283530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283530))), 0x11245891u);
  /* 11245891 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245894 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245896 call 0x1124a480 */
  push32(0x1124589bu); f_1124a480();
L_1124589b:;
  /* 1124589b mov esi, esp */
  ESI = (ESP);
  /* 1124589d push 0x11281100 */
  push32((uint32_t)(0x11281100u));
  /* 112458a2 call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x112458a8u);
  /* 112458a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112458ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112458ad call 0x1124a480 */
  push32(0x112458b2u); f_1124a480();
  /* 112458b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112458b4 jne 0x112458f2 */
  if (!C.zf) goto L_112458f2;
  /* 112458b6 mov esi, esp */
  ESI = (ESP);
  /* 112458b8 push 0x1127b148 */
  push32((uint32_t)(0x1127b148u));
  /* 112458bd call dword ptr [0x11283538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283538))), 0x112458c3u);
  /* 112458c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112458c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112458c8 call 0x1124a480 */
  push32(0x112458cdu); f_1124a480();
  /* 112458cd mov esi, esp */
  ESI = (ESP);
  /* 112458cf call dword ptr [0x11283560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283560))), 0x112458d5u);
  /* 112458d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112458d7 call 0x1124a480 */
  push32(0x112458dcu); f_1124a480();
  /* 112458dc mov esi, esp */
  ESI = (ESP);
  /* 112458de push 0 */
  push32((uint32_t)(0x0u));
  /* 112458e0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 112458e2 call dword ptr [0x11283530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283530))), 0x112458e8u);
  /* 112458e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112458eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112458ed call 0x1124a480 */
  push32(0x112458f2u); f_1124a480();
L_112458f2:;
  /* 112458f2 mov esi, esp */
  ESI = (ESP);
  /* 112458f4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 112458f6 call dword ptr [0x11283504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283504))), 0x112458fcu);
  /* 112458fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112458ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245901 call 0x1124a480 */
  push32(0x11245906u); f_1124a480();
  /* 11245906 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124590b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124590d jne 0x11245968 */
  if (!C.zf) goto L_11245968;
  /* 1124590f mov esi, esp */
  ESI = (ESP);
  /* 11245911 push 0 */
  push32((uint32_t)(0x0u));
  /* 11245913 call dword ptr [0x1128354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128354c))), 0x11245919u);
  /* 11245919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124591c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124591e call 0x1124a480 */
  push32(0x11245923u); f_1124a480();
  /* 11245923 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11245928 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124592a je 0x11245968 */
  if (C.zf) goto L_11245968;
  /* 1124592c mov esi, esp */
  ESI = (ESP);
  /* 1124592e push 0x1127b140 */
  push32((uint32_t)(0x1127b140u));
  /* 11245933 call dword ptr [0x11283538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283538))), 0x11245939u);
  /* 11245939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124593c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124593e call 0x1124a480 */
  push32(0x11245943u); f_1124a480();
  /* 11245943 mov esi, esp */
  ESI = (ESP);
  /* 11245945 call dword ptr [0x11283560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283560))), 0x1124594bu);
  /* 1124594b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124594d call 0x1124a480 */
  push32(0x11245952u); f_1124a480();
  /* 11245952 mov esi, esp */
  ESI = (ESP);
  /* 11245954 push 0 */
  push32((uint32_t)(0x0u));
  /* 11245956 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11245958 call dword ptr [0x11283530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283530))), 0x1124595eu);
  /* 1124595e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245961 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245963 call 0x1124a480 */
  push32(0x11245968u); f_1124a480();
L_11245968:;
  /* 11245968 mov esi, esp */
  ESI = (ESP);
  /* 1124596a push 0 */
  push32((uint32_t)(0x0u));
  /* 1124596c call dword ptr [0x11283558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283558))), 0x11245972u);
  /* 11245972 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245975 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245977 call 0x1124a480 */
  push32(0x1124597cu); f_1124a480();
  /* 1124597c mov esi, esp */
  ESI = (ESP);
  /* 1124597e push 0 */
  push32((uint32_t)(0x0u));
  /* 11245980 push 0x11281158 */
  push32((uint32_t)(0x11281158u));
  /* 11245985 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x1124598bu);
  /* 1124598b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124598e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245990 call 0x1124a480 */
  push32(0x11245995u); f_1124a480();
L_11245995:;
  /* 11245995 pop edi */
  EDI = (pop32());
  /* 11245996 pop esi */
  ESI = (pop32());
  /* 11245997 pop ebx */
  EBX = (pop32());
  /* 11245998 add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124599b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124599d call 0x1124a480 */
  push32(0x112459a2u); f_1124a480();
  /* 112459a2 mov esp, ebp */
  ESP = (EBP);
  /* 112459a4 pop ebp */
  EBP = (pop32());
  /* 112459a5 ret  */
  ESPCHK(0x11244aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d70 @ 0x11245d70 (118 bytes, 45 insns) */
void f_11245d70(void) {
  FTRACE(0x11245d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11245d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11245d71 mov ebp, esp */
  EBP = (ESP);
  /* 11245d73 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11245d76 push ebx */
  push32((uint32_t)(EBX));
  /* 11245d77 push esi */
  push32((uint32_t)(ESI));
  /* 11245d78 push edi */
  push32((uint32_t)(EDI));
  /* 11245d79 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11245d7c mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11245d81 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11245d86 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11245d88 mov byte ptr [ebp - 4], 0 */
  w8((uint32_t)(EBP + -0x4), (0x0u));
  /* 11245d8c mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11245d90 jmp 0x11245d9a */
  goto L_11245d9a;
L_11245d92:;
  /* 11245d92 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11245d95 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11245d97 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11245d9a:;
  /* 11245d9a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11245d9d and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11245da3 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245da6 jge 0x11245dd2 */
  if ((C.sf==C.of)) goto L_11245dd2;
  /* 11245da8 mov esi, esp */
  ESI = (ESP);
  /* 11245daa mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11245dad push edx */
  push32((uint32_t)(EDX));
  /* 11245dae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11245db1 push eax */
  push32((uint32_t)(EAX));
  /* 11245db2 call dword ptr [0x11283564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283564))), 0x11245db8u);
  /* 11245db8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245dbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245dbd call 0x1124a480 */
  push32(0x11245dc2u); f_1124a480();
  /* 11245dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11245dc4 jle 0x11245dd0 */
  if ((C.zf||C.sf!=C.of)) goto L_11245dd0;
  /* 11245dc6 mov cl, byte ptr [ebp - 8] */
  CL = (r8((uint32_t)(EBP + -0x8)));
  /* 11245dc9 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11245dcc mov byte ptr [ebp - 8], 8 */
  w8((uint32_t)(EBP + -0x8), (0x8u));
L_11245dd0:;
  /* 11245dd0 jmp 0x11245d92 */
  goto L_11245d92;
L_11245dd2:;
  /* 11245dd2 mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 11245dd5 pop edi */
  EDI = (pop32());
  /* 11245dd6 pop esi */
  ESI = (pop32());
  /* 11245dd7 pop ebx */
  EBX = (pop32());
  /* 11245dd8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245ddb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245ddd call 0x1124a480 */
  push32(0x11245de2u); f_1124a480();
  /* 11245de2 mov esp, ebp */
  ESP = (EBP);
  /* 11245de4 pop ebp */
  EBP = (pop32());
  /* 11245de5 ret  */
  ESPCHK(0x11245d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e10 @ 0x11245e10 (120 bytes, 47 insns) */
void f_11245e10(void) {
  FTRACE(0x11245e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11245e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11245e11 mov ebp, esp */
  EBP = (ESP);
  /* 11245e13 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11245e16 push ebx */
  push32((uint32_t)(EBX));
  /* 11245e17 push esi */
  push32((uint32_t)(ESI));
  /* 11245e18 push edi */
  push32((uint32_t)(EDI));
  /* 11245e19 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11245e1c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11245e21 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11245e26 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_11245e28:;
  /* 11245e28 mov esi, esp */
  ESI = (ESP);
  /* 11245e2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11245e2d push eax */
  push32((uint32_t)(EAX));
  /* 11245e2e call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x11245e34u);
  /* 11245e34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245e37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245e39 call 0x1124a480 */
  push32(0x11245e3eu); f_1124a480();
  /* 11245e3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11245e40 je 0x11245e5c */
  if (C.zf) goto L_11245e5c;
  /* 11245e42 mov esi, esp */
  ESI = (ESP);
  /* 11245e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11245e46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11245e49 push ecx */
  push32((uint32_t)(ECX));
  /* 11245e4a call dword ptr [0x1128350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128350c))), 0x11245e50u);
  /* 11245e50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245e53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245e55 call 0x1124a480 */
  push32(0x11245e5au); f_1124a480();
  /* 11245e5a jmp 0x11245e28 */
  goto L_11245e28;
L_11245e5c:;
  /* 11245e5c mov esi, esp */
  ESI = (ESP);
  /* 11245e5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11245e61 push edx */
  push32((uint32_t)(EDX));
  /* 11245e62 call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x11245e68u);
  /* 11245e68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245e6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245e6d call 0x1124a480 */
  push32(0x11245e72u); f_1124a480();
  /* 11245e72 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11245e74 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11245e76 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11245e77 pop edi */
  EDI = (pop32());
  /* 11245e78 pop esi */
  ESI = (pop32());
  /* 11245e79 pop ebx */
  EBX = (pop32());
  /* 11245e7a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245e7d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245e7f call 0x1124a480 */
  push32(0x11245e84u); f_1124a480();
  /* 11245e84 mov esp, ebp */
  ESP = (EBP);
  /* 11245e86 pop ebp */
  EBP = (pop32());
  /* 11245e87 ret  */
  ESPCHK(0x11245e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005eb0 @ 0x11245eb0 (77 bytes, 35 insns) */
void f_11245eb0(void) {
  FTRACE(0x11245eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11245eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11245eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11245eb3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11245eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11245eb7 push esi */
  push32((uint32_t)(ESI));
  /* 11245eb8 push edi */
  push32((uint32_t)(EDI));
  /* 11245eb9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11245ebc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11245ec1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11245ec6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11245ec8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11245ecb cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245ece jge 0x11245ed2 */
  if ((C.sf==C.of)) goto L_11245ed2;
  /* 11245ed0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11245ed2:;
  /* 11245ed2 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11245ed5 cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245ed8 jge 0x11245edc */
  if ((C.sf==C.of)) goto L_11245edc;
  /* 11245eda neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_11245edc:;
  /* 11245edc mov ecx, eax */
  ECX = (EAX);
  /* 11245ede cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245ee0 ja 0x11245ee4 */
  if ((!C.cf&&!C.zf)) goto L_11245ee4;
  /* 11245ee2 mov ecx, ebx */
  ECX = (EBX);
L_11245ee4:;
  /* 11245ee4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11245ee6 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11245ee8 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11245eea mov eax, ecx */
  EAX = (ECX);
  /* 11245eec pop edi */
  EDI = (pop32());
  /* 11245eed pop esi */
  ESI = (pop32());
  /* 11245eee pop ebx */
  EBX = (pop32());
  /* 11245eef add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245ef2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245ef4 call 0x1124a480 */
  push32(0x11245ef9u); f_1124a480();
  /* 11245ef9 mov esp, ebp */
  ESP = (EBP);
  /* 11245efb pop ebp */
  EBP = (pop32());
  /* 11245efc ret  */
  ESPCHK(0x11245eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f10 @ 0x11245f10 (70 bytes, 30 insns) */
void f_11245f10(void) {
  FTRACE(0x11245f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11245f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11245f11 mov ebp, esp */
  EBP = (ESP);
  /* 11245f13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11245f16 push ebx */
  push32((uint32_t)(EBX));
  /* 11245f17 push esi */
  push32((uint32_t)(ESI));
  /* 11245f18 push edi */
  push32((uint32_t)(EDI));
  /* 11245f19 push ecx */
  push32((uint32_t)(ECX));
  /* 11245f1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11245f1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11245f22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11245f27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11245f29 pop ecx */
  ECX = (pop32());
  /* 11245f2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11245f2d mov esi, esp */
  ESI = (ESP);
  /* 11245f2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11245f31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11245f34 push eax */
  push32((uint32_t)(EAX));
  /* 11245f35 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x11245f3bu);
  /* 11245f3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245f3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245f40 call 0x1124a480 */
  push32(0x11245f45u); f_1124a480();
  /* 11245f45 pop edi */
  EDI = (pop32());
  /* 11245f46 pop esi */
  ESI = (pop32());
  /* 11245f47 pop ebx */
  EBX = (pop32());
  /* 11245f48 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245f4b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245f4d call 0x1124a480 */
  push32(0x11245f52u); f_1124a480();
  /* 11245f52 mov esp, ebp */
  ESP = (EBP);
  /* 11245f54 pop ebp */
  EBP = (pop32());
  /* 11245f55 ret  */
  ESPCHK(0x11245f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f70 @ 0x11245f70 (79 bytes, 32 insns) */
void f_11245f70(void) {
  FTRACE(0x11245f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11245f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11245f71 mov ebp, esp */
  EBP = (ESP);
  /* 11245f73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11245f76 push ebx */
  push32((uint32_t)(EBX));
  /* 11245f77 push esi */
  push32((uint32_t)(ESI));
  /* 11245f78 push edi */
  push32((uint32_t)(EDI));
  /* 11245f79 push ecx */
  push32((uint32_t)(ECX));
  /* 11245f7a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11245f7d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11245f82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11245f87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11245f89 pop ecx */
  ECX = (pop32());
  /* 11245f8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11245f8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11245f90 call 0x1124119f */
  push32(0x11245f95u); f_1124119f();
  /* 11245f95 mov esi, esp */
  ESI = (ESP);
  /* 11245f97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11245f9a mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11245f9d push ecx */
  push32((uint32_t)(ECX));
  /* 11245f9e call dword ptr [0x11283508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283508))), 0x11245fa4u);
  /* 11245fa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245fa7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245fa9 call 0x1124a480 */
  push32(0x11245faeu); f_1124a480();
  /* 11245fae pop edi */
  EDI = (pop32());
  /* 11245faf pop esi */
  ESI = (pop32());
  /* 11245fb0 pop ebx */
  EBX = (pop32());
  /* 11245fb1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11245fb4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11245fb6 call 0x1124a480 */
  push32(0x11245fbbu); f_1124a480();
  /* 11245fbb mov esp, ebp */
  ESP = (EBP);
  /* 11245fbd pop ebp */
  EBP = (pop32());
  /* 11245fbe ret  */
  ESPCHK(0x11245f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fe0 @ 0x11245fe0 (68 bytes, 29 insns) */
void f_11245fe0(void) {
  FTRACE(0x11245fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11245fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11245fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11245fe3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11245fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 11245fe7 push esi */
  push32((uint32_t)(ESI));
  /* 11245fe8 push edi */
  push32((uint32_t)(EDI));
  /* 11245fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 11245fea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11245fed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11245ff2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11245ff7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11245ff9 pop ecx */
  ECX = (pop32());
  /* 11245ffa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11245ffd mov esi, esp */
  ESI = (ESP);
  /* 11245fff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246002 push eax */
  push32((uint32_t)(EAX));
  /* 11246003 call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x11246009u);
  /* 11246009 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124600c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124600e call 0x1124a480 */
  push32(0x11246013u); f_1124a480();
  /* 11246013 pop edi */
  EDI = (pop32());
  /* 11246014 pop esi */
  ESI = (pop32());
  /* 11246015 pop ebx */
  EBX = (pop32());
  /* 11246016 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246019 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124601b call 0x1124a480 */
  push32(0x11246020u); f_1124a480();
  /* 11246020 mov esp, ebp */
  ESP = (EBP);
  /* 11246022 pop ebp */
  EBP = (pop32());
  /* 11246023 ret  */
  ESPCHK(0x11245fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006040 @ 0x11246040 (69 bytes, 29 insns) */
void f_11246040(void) {
  FTRACE(0x11246040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246040 push ebp */
  push32((uint32_t)(EBP));
  /* 11246041 mov ebp, esp */
  EBP = (ESP);
  /* 11246043 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246046 push ebx */
  push32((uint32_t)(EBX));
  /* 11246047 push esi */
  push32((uint32_t)(ESI));
  /* 11246048 push edi */
  push32((uint32_t)(EDI));
  /* 11246049 push ecx */
  push32((uint32_t)(ECX));
  /* 1124604a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1124604d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11246052 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246057 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246059 pop ecx */
  ECX = (pop32());
  /* 1124605a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124605d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11246061 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246064 call 0x112411a4 */
  push32(0x11246069u); f_112411a4();
  /* 11246069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124606b jle 0x11246071 */
  if ((C.zf||C.sf!=C.of)) goto L_11246071;
  /* 1124606d mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11246071:;
  /* 11246071 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11246074 pop edi */
  EDI = (pop32());
  /* 11246075 pop esi */
  ESI = (pop32());
  /* 11246076 pop ebx */
  EBX = (pop32());
  /* 11246077 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124607a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124607c call 0x1124a480 */
  push32(0x11246081u); f_1124a480();
  /* 11246081 mov esp, ebp */
  ESP = (EBP);
  /* 11246083 pop ebp */
  EBP = (pop32());
  /* 11246084 ret  */
  ESPCHK(0x11246040u, _esp0);
  ESP += 4; return;
}

/* FUN_100060a0 @ 0x112460a0 (39 bytes, 20 insns) */
void f_112460a0(void) {
  FTRACE(0x112460a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112460a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112460a1 mov ebp, esp */
  EBP = (ESP);
  /* 112460a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112460a6 push ebx */
  push32((uint32_t)(EBX));
  /* 112460a7 push esi */
  push32((uint32_t)(ESI));
  /* 112460a8 push edi */
  push32((uint32_t)(EDI));
  /* 112460a9 push ecx */
  push32((uint32_t)(ECX));
  /* 112460aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112460ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112460b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112460b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112460b9 pop ecx */
  ECX = (pop32());
  /* 112460ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112460bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112460c0 pop edi */
  EDI = (pop32());
  /* 112460c1 pop esi */
  ESI = (pop32());
  /* 112460c2 pop ebx */
  EBX = (pop32());
  /* 112460c3 mov esp, ebp */
  ESP = (EBP);
  /* 112460c5 pop ebp */
  EBP = (pop32());
  /* 112460c6 ret  */
  ESPCHK(0x112460a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060d0 @ 0x112460d0 (71 bytes, 30 insns) */
void f_112460d0(void) {
  FTRACE(0x112460d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112460d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112460d1 mov ebp, esp */
  EBP = (ESP);
  /* 112460d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112460d6 push ebx */
  push32((uint32_t)(EBX));
  /* 112460d7 push esi */
  push32((uint32_t)(ESI));
  /* 112460d8 push edi */
  push32((uint32_t)(EDI));
  /* 112460d9 push ecx */
  push32((uint32_t)(ECX));
  /* 112460da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112460dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112460e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112460e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112460e9 pop ecx */
  ECX = (pop32());
  /* 112460ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112460ed mov esi, esp */
  ESI = (ESP);
  /* 112460ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112460f2 push eax */
  push32((uint32_t)(EAX));
  /* 112460f3 call dword ptr [0x112835c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c0))), 0x112460f9u);
  /* 112460f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112460fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112460fe call 0x1124a480 */
  push32(0x11246103u); f_1124a480();
  /* 11246103 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246106 pop edi */
  EDI = (pop32());
  /* 11246107 pop esi */
  ESI = (pop32());
  /* 11246108 pop ebx */
  EBX = (pop32());
  /* 11246109 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124610c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124610e call 0x1124a480 */
  push32(0x11246113u); f_1124a480();
  /* 11246113 mov esp, ebp */
  ESP = (EBP);
  /* 11246115 pop ebp */
  EBP = (pop32());
  /* 11246116 ret  */
  ESPCHK(0x112460d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006130 @ 0x11246130 (47 bytes, 22 insns) */
void f_11246130(void) {
  FTRACE(0x11246130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246130 push ebp */
  push32((uint32_t)(EBP));
  /* 11246131 mov ebp, esp */
  EBP = (ESP);
  /* 11246133 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246136 push ebx */
  push32((uint32_t)(EBX));
  /* 11246137 push esi */
  push32((uint32_t)(ESI));
  /* 11246138 push edi */
  push32((uint32_t)(EDI));
  /* 11246139 push ecx */
  push32((uint32_t)(ECX));
  /* 1124613a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124613d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246142 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246147 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246149 pop ecx */
  ECX = (pop32());
  /* 1124614a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124614d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246150 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11246153 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11246156 pop edi */
  EDI = (pop32());
  /* 11246157 pop esi */
  ESI = (pop32());
  /* 11246158 pop ebx */
  EBX = (pop32());
  /* 11246159 mov esp, ebp */
  ESP = (EBP);
  /* 1124615b pop ebp */
  EBP = (pop32());
  /* 1124615c ret 4 */
  ESPCHK(0x11246130u, _esp0);
  ESP += 8; return;
}

/* FUN_10006170 @ 0x11246170 (94 bytes, 39 insns) */
void f_11246170(void) {
  FTRACE(0x11246170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246170 push ebp */
  push32((uint32_t)(EBP));
  /* 11246171 mov ebp, esp */
  EBP = (ESP);
  /* 11246173 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246176 push ebx */
  push32((uint32_t)(EBX));
  /* 11246177 push esi */
  push32((uint32_t)(ESI));
  /* 11246178 push edi */
  push32((uint32_t)(EDI));
  /* 11246179 push ecx */
  push32((uint32_t)(ECX));
  /* 1124617a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124617d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246182 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246187 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246189 pop ecx */
  ECX = (pop32());
  /* 1124618a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124618d mov esi, esp */
  ESI = (ESP);
  /* 1124618f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11246192 push eax */
  push32((uint32_t)(EAX));
  /* 11246193 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246196 push ecx */
  push32((uint32_t)(ECX));
  /* 11246197 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124619a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124619d push eax */
  push32((uint32_t)(EAX));
  /* 1124619e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112461a1 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112461a4 push ecx */
  push32((uint32_t)(ECX));
  /* 112461a5 call dword ptr [0x112834f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834f8))), 0x112461abu);
  /* 112461ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112461ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112461b0 call 0x1124a480 */
  push32(0x112461b5u); f_1124a480();
  /* 112461b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112461b8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112461bb pop edi */
  EDI = (pop32());
  /* 112461bc pop esi */
  ESI = (pop32());
  /* 112461bd pop ebx */
  EBX = (pop32());
  /* 112461be add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112461c1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112461c3 call 0x1124a480 */
  push32(0x112461c8u); f_1124a480();
  /* 112461c8 mov esp, ebp */
  ESP = (EBP);
  /* 112461ca pop ebp */
  EBP = (pop32());
  /* 112461cb ret 4 */
  ESPCHK(0x11246170u, _esp0);
  ESP += 8; return;
}

/* FUN_100061f0 @ 0x112461f0 (221 bytes, 81 insns) */
void f_112461f0(void) {
  FTRACE(0x112461f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112461f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112461f1 mov ebp, esp */
  EBP = (ESP);
  /* 112461f3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112461f6 push ebx */
  push32((uint32_t)(EBX));
  /* 112461f7 push esi */
  push32((uint32_t)(ESI));
  /* 112461f8 push edi */
  push32((uint32_t)(EDI));
  /* 112461f9 push ecx */
  push32((uint32_t)(ECX));
  /* 112461fa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 112461fd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11246202 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246207 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246209 pop ecx */
  ECX = (pop32());
  /* 1124620a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124620d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246210 call 0x112411a4 */
  push32(0x11246215u); f_112411a4();
  /* 11246215 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11246217 jne 0x112462ba */
  if (!C.zf) goto L_112462ba;
  /* 1124621d mov esi, esp */
  ESI = (ESP);
  /* 1124621f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246222 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11246225 push ecx */
  push32((uint32_t)(ECX));
  /* 11246226 call dword ptr [0x11283558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283558))), 0x1124622cu);
  /* 1124622c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124622f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246231 call 0x1124a480 */
  push32(0x11246236u); f_1124a480();
  /* 11246236 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1124623d jmp 0x11246248 */
  goto L_11246248;
L_1124623f:;
  /* 1124623f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11246242 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11246245 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11246248:;
  /* 11246248 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124624b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124624e jge 0x1124629b */
  if ((C.sf==C.of)) goto L_1124629b;
  /* 11246250 mov esi, esp */
  ESI = (ESP);
  /* 11246252 push 0 */
  push32((uint32_t)(0x0u));
  /* 11246254 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11246257 push ecx */
  push32((uint32_t)(ECX));
  /* 11246258 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124625b mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 1124625e push eax */
  push32((uint32_t)(EAX));
  /* 1124625f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246262 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11246265 push edx */
  push32((uint32_t)(EDX));
  /* 11246266 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246269 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1124626c push ecx */
  push32((uint32_t)(ECX));
  /* 1124626d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246270 push edx */
  push32((uint32_t)(EDX));
  /* 11246271 call dword ptr [0x11283580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283580))), 0x11246277u);
  /* 11246277 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124627a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124627c call 0x1124a480 */
  push32(0x11246281u); f_1124a480();
  /* 11246281 mov esi, esp */
  ESI = (ESP);
  /* 11246283 push 1 */
  push32((uint32_t)(0x1u));
  /* 11246285 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246288 push eax */
  push32((uint32_t)(EAX));
  /* 11246289 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x1124628fu);
  /* 1124628f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246292 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246294 call 0x1124a480 */
  push32(0x11246299u); f_1124a480();
  /* 11246299 jmp 0x1124623f */
  goto L_1124623f;
L_1124629b:;
  /* 1124629b mov esi, esp */
  ESI = (ESP);
  /* 1124629d push 0 */
  push32((uint32_t)(0x0u));
  /* 1124629f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112462a2 push ecx */
  push32((uint32_t)(ECX));
  /* 112462a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112462a6 mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 112462a9 push eax */
  push32((uint32_t)(EAX));
  /* 112462aa call dword ptr [0x112835c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c8))), 0x112462b0u);
  /* 112462b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112462b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112462b5 call 0x1124a480 */
  push32(0x112462bau); f_1124a480();
L_112462ba:;
  /* 112462ba pop edi */
  EDI = (pop32());
  /* 112462bb pop esi */
  ESI = (pop32());
  /* 112462bc pop ebx */
  EBX = (pop32());
  /* 112462bd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112462c0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112462c2 call 0x1124a480 */
  push32(0x112462c7u); f_1124a480();
  /* 112462c7 mov esp, ebp */
  ESP = (EBP);
  /* 112462c9 pop ebp */
  EBP = (pop32());
  /* 112462ca ret 8 */
  ESPCHK(0x112461f0u, _esp0);
  ESP += 12; return;
}

/* FUN_10006310 @ 0x11246310 (47 bytes, 22 insns) */
void f_11246310(void) {
  FTRACE(0x11246310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246310 push ebp */
  push32((uint32_t)(EBP));
  /* 11246311 mov ebp, esp */
  EBP = (ESP);
  /* 11246313 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246316 push ebx */
  push32((uint32_t)(EBX));
  /* 11246317 push esi */
  push32((uint32_t)(ESI));
  /* 11246318 push edi */
  push32((uint32_t)(EDI));
  /* 11246319 push ecx */
  push32((uint32_t)(ECX));
  /* 1124631a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124631d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246322 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246327 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246329 pop ecx */
  ECX = (pop32());
  /* 1124632a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124632d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246330 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11246333 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 11246336 pop edi */
  EDI = (pop32());
  /* 11246337 pop esi */
  ESI = (pop32());
  /* 11246338 pop ebx */
  EBX = (pop32());
  /* 11246339 mov esp, ebp */
  ESP = (EBP);
  /* 1124633b pop ebp */
  EBP = (pop32());
  /* 1124633c ret 4 */
  ESPCHK(0x11246310u, _esp0);
  ESP += 8; return;
}

/* FUN_10006350 @ 0x11246350 (47 bytes, 22 insns) */
void f_11246350(void) {
  FTRACE(0x11246350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246350 push ebp */
  push32((uint32_t)(EBP));
  /* 11246351 mov ebp, esp */
  EBP = (ESP);
  /* 11246353 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246356 push ebx */
  push32((uint32_t)(EBX));
  /* 11246357 push esi */
  push32((uint32_t)(ESI));
  /* 11246358 push edi */
  push32((uint32_t)(EDI));
  /* 11246359 push ecx */
  push32((uint32_t)(ECX));
  /* 1124635a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124635d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246362 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246367 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246369 pop ecx */
  ECX = (pop32());
  /* 1124636a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124636d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246370 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11246373 mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 11246376 pop edi */
  EDI = (pop32());
  /* 11246377 pop esi */
  ESI = (pop32());
  /* 11246378 pop ebx */
  EBX = (pop32());
  /* 11246379 mov esp, ebp */
  ESP = (EBP);
  /* 1124637b pop ebp */
  EBP = (pop32());
  /* 1124637c ret 4 */
  ESPCHK(0x11246350u, _esp0);
  ESP += 8; return;
}

/* FUN_10006390 @ 0x11246390 (131 bytes, 48 insns) */
void f_11246390(void) {
  FTRACE(0x11246390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246390 push ebp */
  push32((uint32_t)(EBP));
  /* 11246391 mov ebp, esp */
  EBP = (ESP);
  /* 11246393 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246396 push ebx */
  push32((uint32_t)(EBX));
  /* 11246397 push esi */
  push32((uint32_t)(ESI));
  /* 11246398 push edi */
  push32((uint32_t)(EDI));
  /* 11246399 push ecx */
  push32((uint32_t)(ECX));
  /* 1124639a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 1124639d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 112463a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112463a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112463a9 pop ecx */
  ECX = (pop32());
  /* 112463aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112463ad mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112463b4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 112463bb jmp 0x112463c6 */
  goto L_112463c6;
L_112463bd:;
  /* 112463bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112463c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112463c3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_112463c6:;
  /* 112463c6 cmp dword ptr [ebp - 0xc], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112463ca jge 0x112463f9 */
  if ((C.sf==C.of)) goto L_112463f9;
  /* 112463cc mov esi, esp */
  ESI = (ESP);
  /* 112463ce mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 112463d1 push ecx */
  push32((uint32_t)(ECX));
  /* 112463d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112463d5 push edx */
  push32((uint32_t)(EDX));
  /* 112463d6 call dword ptr [0x11283564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283564))), 0x112463dcu);
  /* 112463dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112463df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112463e1 call 0x1124a480 */
  push32(0x112463e6u); f_1124a480();
  /* 112463e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112463e8 jle 0x112463f7 */
  if ((C.zf||C.sf!=C.of)) goto L_112463f7;
  /* 112463ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 112463ed mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112463f0 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
L_112463f7:;
  /* 112463f7 jmp 0x112463bd */
  goto L_112463bd;
L_112463f9:;
  /* 112463f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112463fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112463ff mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11246402 pop edi */
  EDI = (pop32());
  /* 11246403 pop esi */
  ESI = (pop32());
  /* 11246404 pop ebx */
  EBX = (pop32());
  /* 11246405 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246408 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124640a call 0x1124a480 */
  push32(0x1124640fu); f_1124a480();
  /* 1124640f mov esp, ebp */
  ESP = (EBP);
  /* 11246411 pop ebp */
  EBP = (pop32());
  /* 11246412 ret  */
  ESPCHK(0x11246390u, _esp0);
  ESP += 4; return;
}

/* FUN_10006440 @ 0x11246440 (47 bytes, 22 insns) */
void f_11246440(void) {
  FTRACE(0x11246440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246440 push ebp */
  push32((uint32_t)(EBP));
  /* 11246441 mov ebp, esp */
  EBP = (ESP);
  /* 11246443 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246446 push ebx */
  push32((uint32_t)(EBX));
  /* 11246447 push esi */
  push32((uint32_t)(ESI));
  /* 11246448 push edi */
  push32((uint32_t)(EDI));
  /* 11246449 push ecx */
  push32((uint32_t)(ECX));
  /* 1124644a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124644d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246452 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246457 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246459 pop ecx */
  ECX = (pop32());
  /* 1124645a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124645d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246460 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11246463 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11246466 pop edi */
  EDI = (pop32());
  /* 11246467 pop esi */
  ESI = (pop32());
  /* 11246468 pop ebx */
  EBX = (pop32());
  /* 11246469 mov esp, ebp */
  ESP = (EBP);
  /* 1124646b pop ebp */
  EBP = (pop32());
  /* 1124646c ret 4 */
  ESPCHK(0x11246440u, _esp0);
  ESP += 8; return;
}

/* FUN_10006480 @ 0x11246480 (65 bytes, 28 insns) */
void f_11246480(void) {
  FTRACE(0x11246480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246480 push ebp */
  push32((uint32_t)(EBP));
  /* 11246481 mov ebp, esp */
  EBP = (ESP);
  /* 11246483 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246486 push ebx */
  push32((uint32_t)(EBX));
  /* 11246487 push esi */
  push32((uint32_t)(ESI));
  /* 11246488 push edi */
  push32((uint32_t)(EDI));
  /* 11246489 push ecx */
  push32((uint32_t)(ECX));
  /* 1124648a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124648d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246492 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246497 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246499 pop ecx */
  ECX = (pop32());
  /* 1124649a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124649d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112464a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112464a3 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 112464a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112464a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112464ac mov dword ptr [edx + 0x1c], eax */
  w32((uint32_t)(EDX + 0x1c), (EAX));
  /* 112464af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112464b2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112464b5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 112464b8 pop edi */
  EDI = (pop32());
  /* 112464b9 pop esi */
  ESI = (pop32());
  /* 112464ba pop ebx */
  EBX = (pop32());
  /* 112464bb mov esp, ebp */
  ESP = (EBP);
  /* 112464bd pop ebp */
  EBP = (pop32());
  /* 112464be ret 0xc */
  ESPCHK(0x11246480u, _esp0);
  ESP += 16; return;
}

/* FUN_100064e0 @ 0x112464e0 (166 bytes, 58 insns) */
void f_112464e0(void) {
  FTRACE(0x112464e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112464e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112464e1 mov ebp, esp */
  EBP = (ESP);
  /* 112464e3 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112464e6 push ebx */
  push32((uint32_t)(EBX));
  /* 112464e7 push esi */
  push32((uint32_t)(ESI));
  /* 112464e8 push edi */
  push32((uint32_t)(EDI));
  /* 112464e9 push ecx */
  push32((uint32_t)(ECX));
  /* 112464ea lea edi, [ebp - 0x70] */
  EDI = ((uint32_t)(EBP + -0x70));
  /* 112464ed mov ecx, 0x1c */
  ECX = (0x1cu);
  /* 112464f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112464f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112464f9 pop ecx */
  ECX = (pop32());
  /* 112464fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112464fd mov esi, esp */
  ESI = (ESP);
  /* 112464ff lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11246502 push eax */
  push32((uint32_t)(EAX));
  /* 11246503 push 0 */
  push32((uint32_t)(0x0u));
  /* 11246505 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246508 push ecx */
  push32((uint32_t)(ECX));
  /* 11246509 call dword ptr [0x112835c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c4))), 0x1124650fu);
  /* 1124650f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246512 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246514 call 0x1124a480 */
  push32(0x11246519u); f_1124a480();
  /* 11246519 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1124651c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11246522 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11246525 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 11246528 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124652d cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124652f jge 0x1124653d */
  if ((C.sf==C.of)) goto L_1124653d;
  /* 11246531 mov cx, word ptr [ebp - 0x2c] */
  CX = (r16((uint32_t)(EBP + -0x2c)));
  /* 11246535 add cx, word ptr [ebp + 8] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EBP + 0x8))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11246539 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_1124653d:;
  /* 1124653d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11246540 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11246546 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11246549 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 1124654c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11246551 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246553 jl 0x1124655d */
  if ((C.sf!=C.of)) goto L_1124655d;
  /* 11246555 mov cx, word ptr [ebp - 0x2a] */
  CX = (r16((uint32_t)(EBP + -0x2a)));
  /* 11246559 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_1124655d:;
  /* 1124655d mov esi, esp */
  ESI = (ESP);
  /* 1124655f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11246562 push edx */
  push32((uint32_t)(EDX));
  /* 11246563 call dword ptr [0x11283500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283500))), 0x11246569u);
  /* 11246569 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124656c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124656e call 0x1124a480 */
  push32(0x11246573u); f_1124a480();
  /* 11246573 pop edi */
  EDI = (pop32());
  /* 11246574 pop esi */
  ESI = (pop32());
  /* 11246575 pop ebx */
  EBX = (pop32());
  /* 11246576 add esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246579 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124657b call 0x1124a480 */
  push32(0x11246580u); f_1124a480();
  /* 11246580 mov esp, ebp */
  ESP = (EBP);
  /* 11246582 pop ebp */
  EBP = (pop32());
  /* 11246583 ret 4 */
  ESPCHK(0x112464e0u, _esp0);
  ESP += 8; return;
}

/* FUN_100065b0 @ 0x112465b0 (114 bytes, 42 insns) */
void f_112465b0(void) {
  FTRACE(0x112465b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112465b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112465b1 mov ebp, esp */
  EBP = (ESP);
  /* 112465b3 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112465b6 push ebx */
  push32((uint32_t)(EBX));
  /* 112465b7 push esi */
  push32((uint32_t)(ESI));
  /* 112465b8 push edi */
  push32((uint32_t)(EDI));
  /* 112465b9 push ecx */
  push32((uint32_t)(ECX));
  /* 112465ba lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 112465bd mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 112465c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112465c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112465c9 pop ecx */
  ECX = (pop32());
  /* 112465ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112465cd mov esi, esp */
  ESI = (ESP);
  /* 112465cf lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 112465d2 push eax */
  push32((uint32_t)(EAX));
  /* 112465d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112465d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112465d8 push ecx */
  push32((uint32_t)(ECX));
  /* 112465d9 call dword ptr [0x112835c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c4))), 0x112465dfu);
  /* 112465df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112465e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112465e4 call 0x1124a480 */
  push32(0x112465e9u); f_1124a480();
  /* 112465e9 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 112465ec and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112465f2 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 112465f5 fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 112465f8 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 112465fb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11246600 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11246603 fidiv dword ptr [ebp - 0x38] */
  FPU_ST(0) = FPU_ST(0) / ((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 11246606 fmul dword ptr [0x1127b050] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(0x1127b050)));
  /* 1124660c call 0x1124a76c */
  push32(0x11246611u); f_1124a76c();
  /* 11246611 pop edi */
  EDI = (pop32());
  /* 11246612 pop esi */
  ESI = (pop32());
  /* 11246613 pop ebx */
  EBX = (pop32());
  /* 11246614 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246617 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246619 call 0x1124a480 */
  push32(0x1124661eu); f_1124a480();
  /* 1124661e mov esp, ebp */
  ESP = (EBP);
  /* 11246620 pop ebp */
  EBP = (pop32());
  /* 11246621 ret  */
  ESPCHK(0x112465b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006640 @ 0x11246640 (94 bytes, 37 insns) */
void f_11246640(void) {
  FTRACE(0x11246640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246640 push ebp */
  push32((uint32_t)(EBP));
  /* 11246641 mov ebp, esp */
  EBP = (ESP);
  /* 11246643 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246646 push ebx */
  push32((uint32_t)(EBX));
  /* 11246647 push esi */
  push32((uint32_t)(ESI));
  /* 11246648 push edi */
  push32((uint32_t)(EDI));
  /* 11246649 push ecx */
  push32((uint32_t)(ECX));
  /* 1124664a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124664d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246652 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246657 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246659 pop ecx */
  ECX = (pop32());
  /* 1124665a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124665d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246660 call 0x1124119f */
  push32(0x11246665u); f_1124119f();
  /* 11246665 mov esi, esp */
  ESI = (ESP);
  /* 11246667 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1124666a push eax */
  push32((uint32_t)(EAX));
  /* 1124666b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124666e mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11246671 push edx */
  push32((uint32_t)(EDX));
  /* 11246672 call dword ptr [0x11283578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283578))), 0x11246678u);
  /* 11246678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124667b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124667d call 0x1124a480 */
  push32(0x11246682u); f_1124a480();
  /* 11246682 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246685 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11246688 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 1124668b pop edi */
  EDI = (pop32());
  /* 1124668c pop esi */
  ESI = (pop32());
  /* 1124668d pop ebx */
  EBX = (pop32());
  /* 1124668e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246691 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246693 call 0x1124a480 */
  push32(0x11246698u); f_1124a480();
  /* 11246698 mov esp, ebp */
  ESP = (EBP);
  /* 1124669a pop ebp */
  EBP = (pop32());
  /* 1124669b ret 4 */
  ESPCHK(0x11246640u, _esp0);
  ESP += 8; return;
}

/* FUN_100066c0 @ 0x112466c0 (39 bytes, 20 insns) */
void f_112466c0(void) {
  FTRACE(0x112466c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112466c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112466c1 mov ebp, esp */
  EBP = (ESP);
  /* 112466c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112466c6 push ebx */
  push32((uint32_t)(EBX));
  /* 112466c7 push esi */
  push32((uint32_t)(ESI));
  /* 112466c8 push edi */
  push32((uint32_t)(EDI));
  /* 112466c9 push ecx */
  push32((uint32_t)(ECX));
  /* 112466ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112466cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112466d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112466d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112466d9 pop ecx */
  ECX = (pop32());
  /* 112466da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112466dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112466e0 pop edi */
  EDI = (pop32());
  /* 112466e1 pop esi */
  ESI = (pop32());
  /* 112466e2 pop ebx */
  EBX = (pop32());
  /* 112466e3 mov esp, ebp */
  ESP = (EBP);
  /* 112466e5 pop ebp */
  EBP = (pop32());
  /* 112466e6 ret  */
  ESPCHK(0x112466c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066f0 @ 0x112466f0 (98 bytes, 39 insns) */
void f_112466f0(void) {
  FTRACE(0x112466f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112466f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112466f1 mov ebp, esp */
  EBP = (ESP);
  /* 112466f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112466f6 push ebx */
  push32((uint32_t)(EBX));
  /* 112466f7 push esi */
  push32((uint32_t)(ESI));
  /* 112466f8 push edi */
  push32((uint32_t)(EDI));
  /* 112466f9 push ecx */
  push32((uint32_t)(ECX));
  /* 112466fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112466fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246702 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246707 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246709 pop ecx */
  ECX = (pop32());
  /* 1124670a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124670d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246710 call 0x1124119f */
  push32(0x11246715u); f_1124119f();
  /* 11246715 mov esi, esp */
  ESI = (ESP);
  /* 11246717 push 0 */
  push32((uint32_t)(0x0u));
  /* 11246719 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124671b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124671e push eax */
  push32((uint32_t)(EAX));
  /* 1124671f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246722 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11246725 push edx */
  push32((uint32_t)(EDX));
  /* 11246726 call dword ptr [0x112835b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b4))), 0x1124672cu);
  /* 1124672c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124672f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246731 call 0x1124a480 */
  push32(0x11246736u); f_1124a480();
  /* 11246736 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246739 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124673c mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 1124673f pop edi */
  EDI = (pop32());
  /* 11246740 pop esi */
  ESI = (pop32());
  /* 11246741 pop ebx */
  EBX = (pop32());
  /* 11246742 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246745 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246747 call 0x1124a480 */
  push32(0x1124674cu); f_1124a480();
  /* 1124674c mov esp, ebp */
  ESP = (EBP);
  /* 1124674e pop ebp */
  EBP = (pop32());
  /* 1124674f ret 4 */
  ESPCHK(0x112466f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006770 @ 0x11246770 (87 bytes, 35 insns) */
void f_11246770(void) {
  FTRACE(0x11246770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246770 push ebp */
  push32((uint32_t)(EBP));
  /* 11246771 mov ebp, esp */
  EBP = (ESP);
  /* 11246773 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246776 push ebx */
  push32((uint32_t)(EBX));
  /* 11246777 push esi */
  push32((uint32_t)(ESI));
  /* 11246778 push edi */
  push32((uint32_t)(EDI));
  /* 11246779 push ecx */
  push32((uint32_t)(ECX));
  /* 1124677a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124677d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246782 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246787 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246789 pop ecx */
  ECX = (pop32());
  /* 1124678a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124678d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246790 call 0x1124119f */
  push32(0x11246795u); f_1124119f();
  /* 11246795 mov esi, esp */
  ESI = (ESP);
  /* 11246797 push 0 */
  push32((uint32_t)(0x0u));
  /* 11246799 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124679c push eax */
  push32((uint32_t)(EAX));
  /* 1124679d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112467a0 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 112467a3 push edx */
  push32((uint32_t)(EDX));
  /* 112467a4 call dword ptr [0x112834fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834fc))), 0x112467aau);
  /* 112467aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112467ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112467af call 0x1124a480 */
  push32(0x112467b4u); f_1124a480();
  /* 112467b4 pop edi */
  EDI = (pop32());
  /* 112467b5 pop esi */
  ESI = (pop32());
  /* 112467b6 pop ebx */
  EBX = (pop32());
  /* 112467b7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112467ba cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112467bc call 0x1124a480 */
  push32(0x112467c1u); f_1124a480();
  /* 112467c1 mov esp, ebp */
  ESP = (EBP);
  /* 112467c3 pop ebp */
  EBP = (pop32());
  /* 112467c4 ret 4 */
  ESPCHK(0x11246770u, _esp0);
  ESP += 8; return;
}

/* FUN_100067e0 @ 0x112467e0 (90 bytes, 37 insns) */
void f_112467e0(void) {
  FTRACE(0x112467e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112467e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112467e1 mov ebp, esp */
  EBP = (ESP);
  /* 112467e3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112467e6 push ebx */
  push32((uint32_t)(EBX));
  /* 112467e7 push esi */
  push32((uint32_t)(ESI));
  /* 112467e8 push edi */
  push32((uint32_t)(EDI));
  /* 112467e9 push ecx */
  push32((uint32_t)(ECX));
  /* 112467ea lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 112467ed mov ecx, 0x12 */
  ECX = (0x12u);
  /* 112467f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112467f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112467f9 pop ecx */
  ECX = (pop32());
  /* 112467fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112467fd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11246801 mov esi, esp */
  ESI = (ESP);
  /* 11246803 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246806 push eax */
  push32((uint32_t)(EAX));
  /* 11246807 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124680a mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 1124680d push edx */
  push32((uint32_t)(EDX));
  /* 1124680e call dword ptr [0x112835ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835ac))), 0x11246814u);
  /* 11246814 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246817 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246819 call 0x1124a480 */
  push32(0x1124681eu); f_1124a480();
  /* 1124681e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11246820 jle 0x11246826 */
  if ((C.zf||C.sf!=C.of)) goto L_11246826;
  /* 11246822 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11246826:;
  /* 11246826 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11246829 pop edi */
  EDI = (pop32());
  /* 1124682a pop esi */
  ESI = (pop32());
  /* 1124682b pop ebx */
  EBX = (pop32());
  /* 1124682c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124682f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246831 call 0x1124a480 */
  push32(0x11246836u); f_1124a480();
  /* 11246836 mov esp, ebp */
  ESP = (EBP);
  /* 11246838 pop ebp */
  EBP = (pop32());
  /* 11246839 ret  */
  ESPCHK(0x112467e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006850 @ 0x11246850 (89 bytes, 36 insns) */
void f_11246850(void) {
  FTRACE(0x11246850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246850 push ebp */
  push32((uint32_t)(EBP));
  /* 11246851 mov ebp, esp */
  EBP = (ESP);
  /* 11246853 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246856 push ebx */
  push32((uint32_t)(EBX));
  /* 11246857 push esi */
  push32((uint32_t)(ESI));
  /* 11246858 push edi */
  push32((uint32_t)(EDI));
  /* 11246859 push ecx */
  push32((uint32_t)(ECX));
  /* 1124685a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1124685d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11246862 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246867 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246869 pop ecx */
  ECX = (pop32());
  /* 1124686a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124686d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11246871 mov esi, esp */
  ESI = (ESP);
  /* 11246873 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246876 push eax */
  push32((uint32_t)(EAX));
  /* 11246877 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124687a push ecx */
  push32((uint32_t)(ECX));
  /* 1124687b call dword ptr [0x112835ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835ac))), 0x11246881u);
  /* 11246881 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246884 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246886 call 0x1124a480 */
  push32(0x1124688bu); f_1124a480();
  /* 1124688b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124688d jle 0x11246893 */
  if ((C.zf||C.sf!=C.of)) goto L_11246893;
  /* 1124688f mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11246893:;
  /* 11246893 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11246896 pop edi */
  EDI = (pop32());
  /* 11246897 pop esi */
  ESI = (pop32());
  /* 11246898 pop ebx */
  EBX = (pop32());
  /* 11246899 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124689c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124689e call 0x1124a480 */
  push32(0x112468a3u); f_1124a480();
  /* 112468a3 mov esp, ebp */
  ESP = (EBP);
  /* 112468a5 pop ebp */
  EBP = (pop32());
  /* 112468a6 ret 4 */
  ESPCHK(0x11246850u, _esp0);
  ESP += 8; return;
}

/* FUN_100068c0 @ 0x112468c0 (47 bytes, 22 insns) */
void f_112468c0(void) {
  FTRACE(0x112468c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112468c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112468c1 mov ebp, esp */
  EBP = (ESP);
  /* 112468c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112468c6 push ebx */
  push32((uint32_t)(EBX));
  /* 112468c7 push esi */
  push32((uint32_t)(ESI));
  /* 112468c8 push edi */
  push32((uint32_t)(EDI));
  /* 112468c9 push ecx */
  push32((uint32_t)(ECX));
  /* 112468ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112468cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112468d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112468d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112468d9 pop ecx */
  ECX = (pop32());
  /* 112468da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112468dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112468e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112468e3 mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 112468e6 pop edi */
  EDI = (pop32());
  /* 112468e7 pop esi */
  ESI = (pop32());
  /* 112468e8 pop ebx */
  EBX = (pop32());
  /* 112468e9 mov esp, ebp */
  ESP = (EBP);
  /* 112468eb pop ebp */
  EBP = (pop32());
  /* 112468ec ret 4 */
  ESPCHK(0x112468c0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006900 @ 0x11246900 (81 bytes, 33 insns) */
void f_11246900(void) {
  FTRACE(0x11246900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246900 push ebp */
  push32((uint32_t)(EBP));
  /* 11246901 mov ebp, esp */
  EBP = (ESP);
  /* 11246903 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246906 push ebx */
  push32((uint32_t)(EBX));
  /* 11246907 push esi */
  push32((uint32_t)(ESI));
  /* 11246908 push edi */
  push32((uint32_t)(EDI));
  /* 11246909 push ecx */
  push32((uint32_t)(ECX));
  /* 1124690a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124690d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246912 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246917 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246919 pop ecx */
  ECX = (pop32());
  /* 1124691a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124691d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246920 call 0x1124119f */
  push32(0x11246925u); f_1124119f();
  /* 11246925 mov esi, esp */
  ESI = (ESP);
  /* 11246927 push 1 */
  push32((uint32_t)(0x1u));
  /* 11246929 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124692c mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 1124692f push ecx */
  push32((uint32_t)(ECX));
  /* 11246930 call dword ptr [0x112835a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a8))), 0x11246936u);
  /* 11246936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246939 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124693b call 0x1124a480 */
  push32(0x11246940u); f_1124a480();
  /* 11246940 pop edi */
  EDI = (pop32());
  /* 11246941 pop esi */
  ESI = (pop32());
  /* 11246942 pop ebx */
  EBX = (pop32());
  /* 11246943 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246946 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246948 call 0x1124a480 */
  push32(0x1124694du); f_1124a480();
  /* 1124694d mov esp, ebp */
  ESP = (EBP);
  /* 1124694f pop ebp */
  EBP = (pop32());
  /* 11246950 ret  */
  ESPCHK(0x11246900u, _esp0);
  ESP += 4; return;
}

/* FUN_10006970 @ 0x11246970 (99 bytes, 38 insns) */
void f_11246970(void) {
  FTRACE(0x11246970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246970 push ebp */
  push32((uint32_t)(EBP));
  /* 11246971 mov ebp, esp */
  EBP = (ESP);
  /* 11246973 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246976 push ebx */
  push32((uint32_t)(EBX));
  /* 11246977 push esi */
  push32((uint32_t)(ESI));
  /* 11246978 push edi */
  push32((uint32_t)(EDI));
  /* 11246979 push ecx */
  push32((uint32_t)(ECX));
  /* 1124697a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124697d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246982 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246987 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246989 pop ecx */
  ECX = (pop32());
  /* 1124698a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124698d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246990 call 0x11241028 */
  push32(0x11246995u); f_11241028();
  /* 11246995 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124699a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124699c je 0x112469c2 */
  if (C.zf) goto L_112469c2;
  /* 1124699e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112469a1 call 0x11241285 */
  push32(0x112469a6u); f_11241285();
  /* 112469a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112469a9 call 0x112410aa */
  push32(0x112469aeu); f_112410aa();
  /* 112469ae cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112469b1 jge 0x112469c2 */
  if ((C.sf==C.of)) goto L_112469c2;
  /* 112469b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112469b6 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 112469b9 push ecx */
  push32((uint32_t)(ECX));
  /* 112469ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112469bd call 0x11241226 */
  push32(0x112469c2u); f_11241226();
L_112469c2:;
  /* 112469c2 pop edi */
  EDI = (pop32());
  /* 112469c3 pop esi */
  ESI = (pop32());
  /* 112469c4 pop ebx */
  EBX = (pop32());
  /* 112469c5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112469c8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112469ca call 0x1124a480 */
  push32(0x112469cfu); f_1124a480();
  /* 112469cf mov esp, ebp */
  ESP = (EBP);
  /* 112469d1 pop ebp */
  EBP = (pop32());
  /* 112469d2 ret  */
  ESPCHK(0x11246970u, _esp0);
  ESP += 4; return;
}

/* FUN_100069f0 @ 0x112469f0 (76 bytes, 32 insns) */
void f_112469f0(void) {
  FTRACE(0x112469f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112469f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112469f1 mov ebp, esp */
  EBP = (ESP);
  /* 112469f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112469f6 push ebx */
  push32((uint32_t)(EBX));
  /* 112469f7 push esi */
  push32((uint32_t)(ESI));
  /* 112469f8 push edi */
  push32((uint32_t)(EDI));
  /* 112469f9 push ecx */
  push32((uint32_t)(ECX));
  /* 112469fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112469fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246a02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246a07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246a09 pop ecx */
  ECX = (pop32());
  /* 11246a0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11246a0d mov esi, esp */
  ESI = (ESP);
  /* 11246a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11246a11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11246a14 push eax */
  push32((uint32_t)(EAX));
  /* 11246a15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246a18 push ecx */
  push32((uint32_t)(ECX));
  /* 11246a19 call dword ptr [0x112835b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b0))), 0x11246a1fu);
  /* 11246a1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246a22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246a24 call 0x1124a480 */
  push32(0x11246a29u); f_1124a480();
  /* 11246a29 pop edi */
  EDI = (pop32());
  /* 11246a2a pop esi */
  ESI = (pop32());
  /* 11246a2b pop ebx */
  EBX = (pop32());
  /* 11246a2c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246a2f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246a31 call 0x1124a480 */
  push32(0x11246a36u); f_1124a480();
  /* 11246a36 mov esp, ebp */
  ESP = (EBP);
  /* 11246a38 pop ebp */
  EBP = (pop32());
  /* 11246a39 ret 4 */
  ESPCHK(0x112469f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006a50 @ 0x11246a50 (95 bytes, 37 insns) */
void f_11246a50(void) {
  FTRACE(0x11246a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11246a51 mov ebp, esp */
  EBP = (ESP);
  /* 11246a53 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246a56 push ebx */
  push32((uint32_t)(EBX));
  /* 11246a57 push esi */
  push32((uint32_t)(ESI));
  /* 11246a58 push edi */
  push32((uint32_t)(EDI));
  /* 11246a59 push ecx */
  push32((uint32_t)(ECX));
  /* 11246a5a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11246a5d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11246a62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246a67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246a69 pop ecx */
  ECX = (pop32());
  /* 11246a6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11246a6d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11246a71 mov esi, esp */
  ESI = (ESP);
  /* 11246a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11246a75 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11246a7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246a7d call 0x112412df */
  push32(0x11246a82u); f_112412df();
  /* 11246a82 push eax */
  push32((uint32_t)(EAX));
  /* 11246a83 call dword ptr [0x11283594] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283594))), 0x11246a89u);
  /* 11246a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246a8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246a8e call 0x1124a480 */
  push32(0x11246a93u); f_1124a480();
  /* 11246a93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11246a95 jle 0x11246a9b */
  if ((C.zf||C.sf!=C.of)) goto L_11246a9b;
  /* 11246a97 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11246a9b:;
  /* 11246a9b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11246a9e pop edi */
  EDI = (pop32());
  /* 11246a9f pop esi */
  ESI = (pop32());
  /* 11246aa0 pop ebx */
  EBX = (pop32());
  /* 11246aa1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246aa4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246aa6 call 0x1124a480 */
  push32(0x11246aabu); f_1124a480();
  /* 11246aab mov esp, ebp */
  ESP = (EBP);
  /* 11246aad pop ebp */
  EBP = (pop32());
  /* 11246aae ret  */
  ESPCHK(0x11246a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ad0 @ 0x11246ad0 (47 bytes, 22 insns) */
void f_11246ad0(void) {
  FTRACE(0x11246ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11246ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11246ad3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246ad6 push ebx */
  push32((uint32_t)(EBX));
  /* 11246ad7 push esi */
  push32((uint32_t)(ESI));
  /* 11246ad8 push edi */
  push32((uint32_t)(EDI));
  /* 11246ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 11246ada lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11246add mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246ae2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246ae7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246ae9 pop ecx */
  ECX = (pop32());
  /* 11246aea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11246aed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246af0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11246af3 mov dword ptr [eax + 0x2c], ecx */
  w32((uint32_t)(EAX + 0x2c), (ECX));
  /* 11246af6 pop edi */
  EDI = (pop32());
  /* 11246af7 pop esi */
  ESI = (pop32());
  /* 11246af8 pop ebx */
  EBX = (pop32());
  /* 11246af9 mov esp, ebp */
  ESP = (EBP);
  /* 11246afb pop ebp */
  EBP = (pop32());
  /* 11246afc ret 4 */
  ESPCHK(0x11246ad0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006b10 @ 0x11246b10 (64 bytes, 27 insns) */
void f_11246b10(void) {
  FTRACE(0x11246b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11246b11 mov ebp, esp */
  EBP = (ESP);
  /* 11246b13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246b16 push ebx */
  push32((uint32_t)(EBX));
  /* 11246b17 push esi */
  push32((uint32_t)(ESI));
  /* 11246b18 push edi */
  push32((uint32_t)(EDI));
  /* 11246b19 push ecx */
  push32((uint32_t)(ECX));
  /* 11246b1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11246b1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246b22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246b27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246b29 pop ecx */
  ECX = (pop32());
  /* 11246b2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11246b2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246b30 call 0x112411f9 */
  push32(0x11246b35u); f_112411f9();
  /* 11246b35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246b38 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 11246b3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246b3f pop edi */
  EDI = (pop32());
  /* 11246b40 pop esi */
  ESI = (pop32());
  /* 11246b41 pop ebx */
  EBX = (pop32());
  /* 11246b42 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246b45 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246b47 call 0x1124a480 */
  push32(0x11246b4cu); f_1124a480();
  /* 11246b4c mov esp, ebp */
  ESP = (EBP);
  /* 11246b4e pop ebp */
  EBP = (pop32());
  /* 11246b4f ret  */
  ESPCHK(0x11246b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b60 @ 0x11246b60 (57 bytes, 25 insns) */
void f_11246b60(void) {
  FTRACE(0x11246b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11246b61 mov ebp, esp */
  EBP = (ESP);
  /* 11246b63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246b66 push ebx */
  push32((uint32_t)(EBX));
  /* 11246b67 push esi */
  push32((uint32_t)(ESI));
  /* 11246b68 push edi */
  push32((uint32_t)(EDI));
  /* 11246b69 push ecx */
  push32((uint32_t)(ECX));
  /* 11246b6a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11246b6d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246b72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246b77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246b79 pop ecx */
  ECX = (pop32());
  /* 11246b7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11246b7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246b80 call 0x1124128f */
  push32(0x11246b85u); f_1124128f();
  /* 11246b85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246b88 pop edi */
  EDI = (pop32());
  /* 11246b89 pop esi */
  ESI = (pop32());
  /* 11246b8a pop ebx */
  EBX = (pop32());
  /* 11246b8b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246b8e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246b90 call 0x1124a480 */
  push32(0x11246b95u); f_1124a480();
  /* 11246b95 mov esp, ebp */
  ESP = (EBP);
  /* 11246b97 pop ebp */
  EBP = (pop32());
  /* 11246b98 ret  */
  ESPCHK(0x11246b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bb0 @ 0x11246bb0 (56 bytes, 25 insns) */
void f_11246bb0(void) {
  FTRACE(0x11246bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11246bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11246bb3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246bb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11246bb7 push esi */
  push32((uint32_t)(ESI));
  /* 11246bb8 push edi */
  push32((uint32_t)(EDI));
  /* 11246bb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11246bba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11246bbd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246bc2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246bc7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246bc9 pop ecx */
  ECX = (pop32());
  /* 11246bca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11246bcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246bd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11246bd3 mov dword ptr [eax + 0x24], ecx */
  w32((uint32_t)(EAX + 0x24), (ECX));
  /* 11246bd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246bd9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11246bdc mov dword ptr [edx + 0x28], eax */
  w32((uint32_t)(EDX + 0x28), (EAX));
  /* 11246bdf pop edi */
  EDI = (pop32());
  /* 11246be0 pop esi */
  ESI = (pop32());
  /* 11246be1 pop ebx */
  EBX = (pop32());
  /* 11246be2 mov esp, ebp */
  ESP = (EBP);
  /* 11246be4 pop ebp */
  EBP = (pop32());
  /* 11246be5 ret 8 */
  ESPCHK(0x11246bb0u, _esp0);
  ESP += 12; return;
}

/* FUN_10006c00 @ 0x11246c00 (566 bytes, 177 insns) [1 switch table(s)] */
void f_11246c00(void) {
  FTRACE(0x11246c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11246c01 mov ebp, esp */
  EBP = (ESP);
  /* 11246c03 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246c06 push ebx */
  push32((uint32_t)(EBX));
  /* 11246c07 push esi */
  push32((uint32_t)(ESI));
  /* 11246c08 push edi */
  push32((uint32_t)(EDI));
  /* 11246c09 push ecx */
  push32((uint32_t)(ECX));
  /* 11246c0a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11246c0d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11246c12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246c17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246c19 pop ecx */
  ECX = (pop32());
  /* 11246c1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11246c1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246c20 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11246c22 mov cl, byte ptr [eax + 0x2c] */
  CL = (r8((uint32_t)(EAX + 0x2c)));
  /* 11246c25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11246c27 je 0x11246e25 */
  if (C.zf) goto L_11246e25;
  /* 11246c2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246c30 call 0x11241028 */
  push32(0x11246c35u); f_11241028();
  /* 11246c35 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11246c3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11246c3c je 0x11246e25 */
  if (C.zf) goto L_11246e25;
  /* 11246c42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246c45 cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246c49 je 0x11246e25 */
  if (C.zf) goto L_11246e25;
  /* 11246c4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246c52 cmp dword ptr [eax + 0x10], 6 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246c56 je 0x11246c9d */
  if (C.zf) goto L_11246c9d;
  /* 11246c58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246c5b call 0x112410aa */
  push32(0x11246c60u); f_112410aa();
  /* 11246c60 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246c63 jge 0x11246c6d */
  if ((C.sf==C.of)) goto L_11246c6d;
  /* 11246c65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246c68 call 0x112412a3 */
  push32(0x11246c6du); f_112412a3();
L_11246c6d:;
  /* 11246c6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246c70 call 0x112412a8 */
  push32(0x11246c75u); f_112412a8();
  /* 11246c75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11246c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11246c7c je 0x11246c98 */
  if (C.zf) goto L_11246c98;
  /* 11246c7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246c81 push ecx */
  push32((uint32_t)(ECX));
  /* 11246c82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246c85 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11246c88 push eax */
  push32((uint32_t)(EAX));
  /* 11246c89 call 0x112412d5 */
  push32(0x11246c8eu); f_112412d5();
  /* 11246c8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246c91 mov ecx, eax */
  ECX = (EAX);
  /* 11246c93 call 0x112411ef */
  push32(0x11246c98u); f_112411ef();
L_11246c98:;
  /* 11246c98 jmp 0x11246e25 */
  goto L_11246e25;
L_11246c9d:;
  /* 11246c9d mov esi, esp */
  ESI = (ESP);
  /* 11246c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11246ca1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 11246ca6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246ca9 call 0x112412df */
  push32(0x11246caeu); f_112412df();
  /* 11246cae push eax */
  push32((uint32_t)(EAX));
  /* 11246caf call dword ptr [0x11283594] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283594))), 0x11246cb5u);
  /* 11246cb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246cb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246cba call 0x1124a480 */
  push32(0x11246cbfu); f_1124a480();
  /* 11246cbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11246cc1 jle 0x11246e25 */
  if ((C.zf||C.sf!=C.of)) goto L_11246e25;
  /* 11246cc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246cca cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246cce je 0x11246e25 */
  if (C.zf) goto L_11246e25;
  /* 11246cd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246cd7 mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11246cda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11246cdd cmp dword ptr [ebp - 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246ce1 ja 0x11246db2 */
  if ((!C.cf&&!C.zf)) goto L_11246db2;
  /* 11246ce7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11246cea jmp dword ptr [ecx*4 + 0x11246e36] */
  switch (ECX) {
    case 0: goto L_11246cf1;
    case 1: goto L_11246d14;
    case 2: goto L_11246d34;
    case 3: goto L_11246d54;
    case 4: goto L_11246d74;
    case 5: goto L_11246d94;
    default: x86_unimpl("switch@0x11246cea out of table"); return;
  }
L_11246cf1:;
  /* 11246cf1 mov esi, esp */
  ESI = (ESP);
  /* 11246cf3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246cf6 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11246cf9 push eax */
  push32((uint32_t)(EAX));
  /* 11246cfa push 0x1127b1e0 */
  push32((uint32_t)(0x1127b1e0u));
  /* 11246cff call dword ptr [0x112834f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834f4))), 0x11246d05u);
  /* 11246d05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246d08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246d0a call 0x1124a480 */
  push32(0x11246d0fu); f_1124a480();
  /* 11246d0f jmp 0x11246db2 */
  goto L_11246db2;
L_11246d14:;
  /* 11246d14 mov esi, esp */
  ESI = (ESP);
  /* 11246d16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246d19 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 11246d1c push edx */
  push32((uint32_t)(EDX));
  /* 11246d1d push 0x1127b1d4 */
  push32((uint32_t)(0x1127b1d4u));
  /* 11246d22 call dword ptr [0x112834f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834f4))), 0x11246d28u);
  /* 11246d28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246d2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246d2d call 0x1124a480 */
  push32(0x11246d32u); f_1124a480();
  /* 11246d32 jmp 0x11246db2 */
  goto L_11246db2;
L_11246d34:;
  /* 11246d34 mov esi, esp */
  ESI = (ESP);
  /* 11246d36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246d39 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11246d3c push ecx */
  push32((uint32_t)(ECX));
  /* 11246d3d push 0x1127b1c8 */
  push32((uint32_t)(0x1127b1c8u));
  /* 11246d42 call dword ptr [0x112834f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834f4))), 0x11246d48u);
  /* 11246d48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246d4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246d4d call 0x1124a480 */
  push32(0x11246d52u); f_1124a480();
  /* 11246d52 jmp 0x11246db2 */
  goto L_11246db2;
L_11246d54:;
  /* 11246d54 mov esi, esp */
  ESI = (ESP);
  /* 11246d56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246d59 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11246d5c push eax */
  push32((uint32_t)(EAX));
  /* 11246d5d push 0x1127b1bc */
  push32((uint32_t)(0x1127b1bcu));
  /* 11246d62 call dword ptr [0x112834f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834f4))), 0x11246d68u);
  /* 11246d68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246d6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246d6d call 0x1124a480 */
  push32(0x11246d72u); f_1124a480();
  /* 11246d72 jmp 0x11246db2 */
  goto L_11246db2;
L_11246d74:;
  /* 11246d74 mov esi, esp */
  ESI = (ESP);
  /* 11246d76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246d79 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 11246d7c push edx */
  push32((uint32_t)(EDX));
  /* 11246d7d push 0x1127b1b0 */
  push32((uint32_t)(0x1127b1b0u));
  /* 11246d82 call dword ptr [0x112834f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834f4))), 0x11246d88u);
  /* 11246d88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246d8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246d8d call 0x1124a480 */
  push32(0x11246d92u); f_1124a480();
  /* 11246d92 jmp 0x11246db2 */
  goto L_11246db2;
L_11246d94:;
  /* 11246d94 mov esi, esp */
  ESI = (ESP);
  /* 11246d96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246d99 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11246d9c push ecx */
  push32((uint32_t)(ECX));
  /* 11246d9d push 0x1127b1a4 */
  push32((uint32_t)(0x1127b1a4u));
  /* 11246da2 call dword ptr [0x112834f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834f4))), 0x11246da8u);
  /* 11246da8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246dab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246dad call 0x1124a480 */
  push32(0x11246db2u); f_1124a480();
L_11246db2:;
  /* 11246db2 mov esi, esp */
  ESI = (ESP);
  /* 11246db4 push 0x1127b194 */
  push32((uint32_t)(0x1127b194u));
  /* 11246db9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11246dbb push 0x1127b148 */
  push32((uint32_t)(0x1127b148u));
  /* 11246dc0 push 7 */
  push32((uint32_t)(0x7u));
  /* 11246dc2 call dword ptr [0x112834ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834ec))), 0x11246dc8u);
  /* 11246dc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246dcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246dcd call 0x1124a480 */
  push32(0x11246dd2u); f_1124a480();
  /* 11246dd2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11246dd5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246dd9 je 0x11246de3 */
  if (C.zf) goto L_11246de3;
  /* 11246ddb cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246ddf je 0x11246def */
  if (C.zf) goto L_11246def;
  /* 11246de1 jmp 0x11246df7 */
  goto L_11246df7;
L_11246de3:;
  /* 11246de3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11246de5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246de8 call 0x11241131 */
  push32(0x11246dedu); f_11241131();
  /* 11246ded jmp 0x11246df7 */
  goto L_11246df7;
L_11246def:;
  /* 11246def mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246df2 call 0x1124115e */
  push32(0x11246df7u); f_1124115e();
L_11246df7:;
  /* 11246df7 mov esi, esp */
  ESI = (ESP);
  /* 11246df9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246dfc mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11246dff push eax */
  push32((uint32_t)(EAX));
  /* 11246e00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246e03 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 11246e06 push edx */
  push32((uint32_t)(EDX));
  /* 11246e07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11246e09 call dword ptr [0x11283570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283570))), 0x11246e0fu);
  /* 11246e0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246e12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246e14 call 0x1124a480 */
  push32(0x11246e19u); f_1124a480();
  /* 11246e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11246e1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11246e1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246e20 call 0x112411d1 */
  push32(0x11246e25u); f_112411d1();
L_11246e25:;
  /* 11246e25 pop edi */
  EDI = (pop32());
  /* 11246e26 pop esi */
  ESI = (pop32());
  /* 11246e27 pop ebx */
  EBX = (pop32());
  /* 11246e28 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246e2b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246e2d call 0x1124a480 */
  push32(0x11246e32u); f_1124a480();
  /* 11246e32 mov esp, ebp */
  ESP = (EBP);
  /* 11246e34 pop ebp */
  EBP = (pop32());
  /* 11246e35 ret  */
  ESPCHK(0x11246c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ef0 @ 0x11246ef0 (112 bytes, 43 insns) */
void f_11246ef0(void) {
  FTRACE(0x11246ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11246ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11246ef3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 11246ef7 push esi */
  push32((uint32_t)(ESI));
  /* 11246ef8 push edi */
  push32((uint32_t)(EDI));
  /* 11246ef9 push ecx */
  push32((uint32_t)(ECX));
  /* 11246efa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11246efd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246f02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246f07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246f09 pop ecx */
  ECX = (pop32());
  /* 11246f0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11246f0d push 6 */
  push32((uint32_t)(0x6u));
  /* 11246f0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246f12 call 0x11241131 */
  push32(0x11246f17u); f_11241131();
  /* 11246f17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246f1a call 0x1124119f */
  push32(0x11246f1fu); f_1124119f();
  /* 11246f1f mov esi, esp */
  ESI = (ESP);
  /* 11246f21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11246f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11246f25 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11246f27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246f2a call 0x112412df */
  push32(0x11246f2fu); f_112412df();
  /* 11246f2f push eax */
  push32((uint32_t)(EAX));
  /* 11246f30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246f33 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11246f36 push ecx */
  push32((uint32_t)(ECX));
  /* 11246f37 call dword ptr [0x112835b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b4))), 0x11246f3du);
  /* 11246f3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246f40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246f42 call 0x1124a480 */
  push32(0x11246f47u); f_1124a480();
  /* 11246f47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246f4a call 0x112412c6 */
  push32(0x11246f4fu); f_112412c6();
  /* 11246f4f pop edi */
  EDI = (pop32());
  /* 11246f50 pop esi */
  ESI = (pop32());
  /* 11246f51 pop ebx */
  EBX = (pop32());
  /* 11246f52 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246f55 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246f57 call 0x1124a480 */
  push32(0x11246f5cu); f_1124a480();
  /* 11246f5c mov esp, ebp */
  ESP = (EBP);
  /* 11246f5e pop ebp */
  EBP = (pop32());
  /* 11246f5f ret  */
  ESPCHK(0x11246ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f80 @ 0x11246f80 (75 bytes, 32 insns) */
void f_11246f80(void) {
  FTRACE(0x11246f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11246f81 mov ebp, esp */
  EBP = (ESP);
  /* 11246f83 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246f86 push ebx */
  push32((uint32_t)(EBX));
  /* 11246f87 push esi */
  push32((uint32_t)(ESI));
  /* 11246f88 push edi */
  push32((uint32_t)(EDI));
  /* 11246f89 push ecx */
  push32((uint32_t)(ECX));
  /* 11246f8a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11246f8d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11246f92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246f97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246f99 pop ecx */
  ECX = (pop32());
  /* 11246f9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11246f9d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11246fa0 push eax */
  push32((uint32_t)(EAX));
  /* 11246fa1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11246fa4 push ecx */
  push32((uint32_t)(ECX));
  /* 11246fa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11246fa8 push edx */
  push32((uint32_t)(EDX));
  /* 11246fa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246fac call 0x1124101e */
  push32(0x11246fb1u); f_1124101e();
  /* 11246fb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11246fb4 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 11246fb8 pop edi */
  EDI = (pop32());
  /* 11246fb9 pop esi */
  ESI = (pop32());
  /* 11246fba pop ebx */
  EBX = (pop32());
  /* 11246fbb add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11246fbe cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11246fc0 call 0x1124a480 */
  push32(0x11246fc5u); f_1124a480();
  /* 11246fc5 mov esp, ebp */
  ESP = (EBP);
  /* 11246fc7 pop ebp */
  EBP = (pop32());
  /* 11246fc8 ret 0xc */
  ESPCHK(0x11246f80u, _esp0);
  ESP += 16; return;
}

/* FUN_10006fe0 @ 0x11246fe0 (95 bytes, 37 insns) */
void f_11246fe0(void) {
  FTRACE(0x11246fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11246fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11246fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11246fe3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11246fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 11246fe7 push esi */
  push32((uint32_t)(ESI));
  /* 11246fe8 push edi */
  push32((uint32_t)(EDI));
  /* 11246fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 11246fea lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11246fed mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11246ff2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11246ff7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11246ff9 pop ecx */
  ECX = (pop32());
  /* 11246ffa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11246ffd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11247001 mov esi, esp */
  ESI = (ESP);
  /* 11247003 push 0 */
  push32((uint32_t)(0x0u));
  /* 11247005 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 1124700a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124700d call 0x112412df */
  push32(0x11247012u); f_112412df();
  /* 11247012 push eax */
  push32((uint32_t)(EAX));
  /* 11247013 call dword ptr [0x11283594] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283594))), 0x11247019u);
  /* 11247019 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124701c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124701e call 0x1124a480 */
  push32(0x11247023u); f_1124a480();
  /* 11247023 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11247025 jle 0x1124702b */
  if ((C.zf||C.sf!=C.of)) goto L_1124702b;
  /* 11247027 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_1124702b:;
  /* 1124702b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1124702e pop edi */
  EDI = (pop32());
  /* 1124702f pop esi */
  ESI = (pop32());
  /* 11247030 pop ebx */
  EBX = (pop32());
  /* 11247031 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247034 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247036 call 0x1124a480 */
  push32(0x1124703bu); f_1124a480();
  /* 1124703b mov esp, ebp */
  ESP = (EBP);
  /* 1124703d pop ebp */
  EBP = (pop32());
  /* 1124703e ret  */
  ESPCHK(0x11246fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007060 @ 0x11247060 (78 bytes, 28 insns) */
void f_11247060(void) {
  FTRACE(0x11247060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11247060 push ebp */
  push32((uint32_t)(EBP));
  /* 11247061 mov ebp, esp */
  EBP = (ESP);
  /* 11247063 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247066 push ebx */
  push32((uint32_t)(EBX));
  /* 11247067 push esi */
  push32((uint32_t)(ESI));
  /* 11247068 push edi */
  push32((uint32_t)(EDI));
  /* 11247069 push ecx */
  push32((uint32_t)(ECX));
  /* 1124706a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124706d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11247072 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247077 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247079 pop ecx */
  ECX = (pop32());
  /* 1124707a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124707d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247080 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11247083 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11247086 mov edx, dword ptr [0x112813a0] */
  EDX = (r32((uint32_t)(0x112813a0)));
  /* 1124708c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124708f mov dword ptr [edx*4 + 0x11281350], eax */
  w32((uint32_t)(EDX*4 + 0x11281350), (EAX));
  /* 11247096 mov ecx, dword ptr [0x112813a0] */
  ECX = (r32((uint32_t)(0x112813a0)));
  /* 1124709c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124709f mov dword ptr [0x112813a0], ecx */
  w32((uint32_t)(0x112813a0), (ECX));
  /* 112470a5 pop edi */
  EDI = (pop32());
  /* 112470a6 pop esi */
  ESI = (pop32());
  /* 112470a7 pop ebx */
  EBX = (pop32());
  /* 112470a8 mov esp, ebp */
  ESP = (EBP);
  /* 112470aa pop ebp */
  EBP = (pop32());
  /* 112470ab ret 4 */
  ESPCHK(0x11247060u, _esp0);
  ESP += 8; return;
}

/* FUN_100070d0 @ 0x112470d0 (128 bytes, 44 insns) */
void f_112470d0(void) {
  FTRACE(0x112470d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112470d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112470d1 mov ebp, esp */
  EBP = (ESP);
  /* 112470d3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112470d6 push ebx */
  push32((uint32_t)(EBX));
  /* 112470d7 push esi */
  push32((uint32_t)(ESI));
  /* 112470d8 push edi */
  push32((uint32_t)(EDI));
  /* 112470d9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 112470dc mov ecx, 0x12 */
  ECX = (0x12u);
  /* 112470e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112470e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112470e8 mov eax, dword ptr [0x11281350] */
  EAX = (r32((uint32_t)(0x11281350)));
  /* 112470ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112470f0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 112470f7 jmp 0x11247102 */
  goto L_11247102;
L_112470f9:;
  /* 112470f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112470fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112470ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11247102:;
  /* 11247102 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11247105 cmp edx, dword ptr [0x112813a0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x112813a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124710b jge 0x1124713c */
  if ((C.sf==C.of)) goto L_1124713c;
  /* 1124710d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11247110 mov ecx, dword ptr [eax*4 + 0x11281350] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11281350)));
  /* 11247117 call 0x11241140 */
  push32(0x1124711cu); f_11241140();
  /* 1124711c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124711e mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11247121 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11247124 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11247126 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11247129 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124712b jne 0x1124713a */
  if (!C.zf) goto L_1124713a;
  /* 1124712d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11247130 mov edx, dword ptr [ecx*4 + 0x11281350] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11281350)));
  /* 11247137 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1124713a:;
  /* 1124713a jmp 0x112470f9 */
  goto L_112470f9;
L_1124713c:;
  /* 1124713c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124713f pop edi */
  EDI = (pop32());
  /* 11247140 pop esi */
  ESI = (pop32());
  /* 11247141 pop ebx */
  EBX = (pop32());
  /* 11247142 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247145 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247147 call 0x1124a480 */
  push32(0x1124714cu); f_1124a480();
  /* 1124714c mov esp, ebp */
  ESP = (EBP);
  /* 1124714e pop ebp */
  EBP = (pop32());
  /* 1124714f ret  */
  ESPCHK(0x112470d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007170 @ 0x11247170 (47 bytes, 22 insns) */
void f_11247170(void) {
  FTRACE(0x11247170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11247170 push ebp */
  push32((uint32_t)(EBP));
  /* 11247171 mov ebp, esp */
  EBP = (ESP);
  /* 11247173 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247176 push ebx */
  push32((uint32_t)(EBX));
  /* 11247177 push esi */
  push32((uint32_t)(ESI));
  /* 11247178 push edi */
  push32((uint32_t)(EDI));
  /* 11247179 push ecx */
  push32((uint32_t)(ECX));
  /* 1124717a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124717d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11247182 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247187 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247189 pop ecx */
  ECX = (pop32());
  /* 1124718a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124718d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247190 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11247193 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11247196 pop edi */
  EDI = (pop32());
  /* 11247197 pop esi */
  ESI = (pop32());
  /* 11247198 pop ebx */
  EBX = (pop32());
  /* 11247199 mov esp, ebp */
  ESP = (EBP);
  /* 1124719b pop ebp */
  EBP = (pop32());
  /* 1124719c ret 4 */
  ESPCHK(0x11247170u, _esp0);
  ESP += 8; return;
}

/* FUN_100071b0 @ 0x112471b0 (47 bytes, 22 insns) */
void f_112471b0(void) {
  FTRACE(0x112471b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112471b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112471b1 mov ebp, esp */
  EBP = (ESP);
  /* 112471b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112471b6 push ebx */
  push32((uint32_t)(EBX));
  /* 112471b7 push esi */
  push32((uint32_t)(ESI));
  /* 112471b8 push edi */
  push32((uint32_t)(EDI));
  /* 112471b9 push ecx */
  push32((uint32_t)(ECX));
  /* 112471ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112471bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112471c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112471c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112471c9 pop ecx */
  ECX = (pop32());
  /* 112471ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112471cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112471d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112471d3 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 112471d6 pop edi */
  EDI = (pop32());
  /* 112471d7 pop esi */
  ESI = (pop32());
  /* 112471d8 pop ebx */
  EBX = (pop32());
  /* 112471d9 mov esp, ebp */
  ESP = (EBP);
  /* 112471db pop ebp */
  EBP = (pop32());
  /* 112471dc ret 4 */
  ESPCHK(0x112471b0u, _esp0);
  ESP += 8; return;
}

/* FUN_100071f0 @ 0x112471f0 (47 bytes, 22 insns) */
void f_112471f0(void) {
  FTRACE(0x112471f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112471f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112471f1 mov ebp, esp */
  EBP = (ESP);
  /* 112471f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112471f6 push ebx */
  push32((uint32_t)(EBX));
  /* 112471f7 push esi */
  push32((uint32_t)(ESI));
  /* 112471f8 push edi */
  push32((uint32_t)(EDI));
  /* 112471f9 push ecx */
  push32((uint32_t)(ECX));
  /* 112471fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112471fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11247202 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247207 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247209 pop ecx */
  ECX = (pop32());
  /* 1124720a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124720d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247210 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11247213 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11247216 pop edi */
  EDI = (pop32());
  /* 11247217 pop esi */
  ESI = (pop32());
  /* 11247218 pop ebx */
  EBX = (pop32());
  /* 11247219 mov esp, ebp */
  ESP = (EBP);
  /* 1124721b pop ebp */
  EBP = (pop32());
  /* 1124721c ret 4 */
  ESPCHK(0x112471f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007230 @ 0x11247230 (85 bytes, 35 insns) */
void f_11247230(void) {
  FTRACE(0x11247230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11247230 push ebp */
  push32((uint32_t)(EBP));
  /* 11247231 mov ebp, esp */
  EBP = (ESP);
  /* 11247233 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247236 push ebx */
  push32((uint32_t)(EBX));
  /* 11247237 push esi */
  push32((uint32_t)(ESI));
  /* 11247238 push edi */
  push32((uint32_t)(EDI));
  /* 11247239 push ecx */
  push32((uint32_t)(ECX));
  /* 1124723a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124723d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11247242 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247247 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247249 pop ecx */
  ECX = (pop32());
  /* 1124724a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124724d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247250 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11247253 push ecx */
  push32((uint32_t)(ECX));
  /* 11247254 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247257 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1124725a push eax */
  push32((uint32_t)(EAX));
  /* 1124725b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124725e call 0x112411d1 */
  push32(0x11247263u); f_112411d1();
  /* 11247263 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247266 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11247269 push edx */
  push32((uint32_t)(EDX));
  /* 1124726a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124726d call 0x11241226 */
  push32(0x11247272u); f_11241226();
  /* 11247272 pop edi */
  EDI = (pop32());
  /* 11247273 pop esi */
  ESI = (pop32());
  /* 11247274 pop ebx */
  EBX = (pop32());
  /* 11247275 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247278 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124727a call 0x1124a480 */
  push32(0x1124727fu); f_1124a480();
  /* 1124727f mov esp, ebp */
  ESP = (EBP);
  /* 11247281 pop ebp */
  EBP = (pop32());
  /* 11247282 ret 4 */
  ESPCHK(0x11247230u, _esp0);
  ESP += 8; return;
}

/* FUN_100072a0 @ 0x112472a0 (42 bytes, 21 insns) */
void f_112472a0(void) {
  FTRACE(0x112472a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112472a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112472a1 mov ebp, esp */
  EBP = (ESP);
  /* 112472a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112472a6 push ebx */
  push32((uint32_t)(EBX));
  /* 112472a7 push esi */
  push32((uint32_t)(ESI));
  /* 112472a8 push edi */
  push32((uint32_t)(EDI));
  /* 112472a9 push ecx */
  push32((uint32_t)(ECX));
  /* 112472aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112472ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112472b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112472b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112472b9 pop ecx */
  ECX = (pop32());
  /* 112472ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112472bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112472c0 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 112472c3 pop edi */
  EDI = (pop32());
  /* 112472c4 pop esi */
  ESI = (pop32());
  /* 112472c5 pop ebx */
  EBX = (pop32());
  /* 112472c6 mov esp, ebp */
  ESP = (EBP);
  /* 112472c8 pop ebp */
  EBP = (pop32());
  /* 112472c9 ret  */
  ESPCHK(0x112472a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072e0 @ 0x112472e0 (39 bytes, 20 insns) */
void f_112472e0(void) {
  FTRACE(0x112472e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112472e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112472e1 mov ebp, esp */
  EBP = (ESP);
  /* 112472e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112472e6 push ebx */
  push32((uint32_t)(EBX));
  /* 112472e7 push esi */
  push32((uint32_t)(ESI));
  /* 112472e8 push edi */
  push32((uint32_t)(EDI));
  /* 112472e9 push ecx */
  push32((uint32_t)(ECX));
  /* 112472ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112472ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112472f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112472f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112472f9 pop ecx */
  ECX = (pop32());
  /* 112472fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112472fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247300 pop edi */
  EDI = (pop32());
  /* 11247301 pop esi */
  ESI = (pop32());
  /* 11247302 pop ebx */
  EBX = (pop32());
  /* 11247303 mov esp, ebp */
  ESP = (EBP);
  /* 11247305 pop ebp */
  EBP = (pop32());
  /* 11247306 ret  */
  ESPCHK(0x112472e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007310 @ 0x11247310 (518 bytes, 176 insns) */
void f_11247310(void) {
  FTRACE(0x11247310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11247310 push ebp */
  push32((uint32_t)(EBP));
  /* 11247311 mov ebp, esp */
  EBP = (ESP);
  /* 11247313 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247316 push ebx */
  push32((uint32_t)(EBX));
  /* 11247317 push esi */
  push32((uint32_t)(ESI));
  /* 11247318 push edi */
  push32((uint32_t)(EDI));
  /* 11247319 push ecx */
  push32((uint32_t)(ECX));
  /* 1124731a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124731d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11247322 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247327 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247329 pop ecx */
  ECX = (pop32());
  /* 1124732a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124732d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247330 call 0x112411b3 */
  push32(0x11247335u); f_112411b3();
  /* 11247335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11247337 jle 0x11247505 */
  if ((C.zf||C.sf!=C.of)) goto L_11247505;
  /* 1124733d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247340 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11247343 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11247346 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247349 cmp ecx, dword ptr [edx + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124734c jge 0x11247505 */
  if ((C.sf==C.of)) goto L_11247505;
  /* 11247352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247355 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11247358 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124735b cmp dword ptr [edx + ecx*8 + 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247360 jne 0x11247429 */
  if (!C.zf) goto L_11247429;
  /* 11247366 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247369 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1124736c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124736f mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 11247373 push eax */
  push32((uint32_t)(EAX));
  /* 11247374 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247377 call 0x112410cd */
  push32(0x1124737cu); f_112410cd();
  /* 1124737c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11247381 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11247383 je 0x112473b0 */
  if (C.zf) goto L_112473b0;
  /* 11247385 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247388 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1124738b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124738e mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 11247392 push ecx */
  push32((uint32_t)(ECX));
  /* 11247393 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247396 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11247399 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124739c mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 112473a0 push edx */
  push32((uint32_t)(EDX));
  /* 112473a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112473a4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112473a7 push eax */
  push32((uint32_t)(EAX));
  /* 112473a8 call 0x11241064 */
  push32(0x112473adu); f_11241064();
  /* 112473ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112473b0:;
  /* 112473b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112473b3 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 112473b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112473b9 mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 112473bd push ecx */
  push32((uint32_t)(ECX));
  /* 112473be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112473c1 call 0x112410cd */
  push32(0x112473c6u); f_112410cd();
  /* 112473c6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112473cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112473cd je 0x11247424 */
  if (C.zf) goto L_11247424;
  /* 112473cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112473d2 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 112473d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112473d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112473db mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 112473de mov esi, esp */
  ESI = (ESP);
  /* 112473e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112473e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112473e5 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112473e8 push edx */
  push32((uint32_t)(EDX));
  /* 112473e9 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x112473efu);
  /* 112473ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112473f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112473f4 call 0x1124a480 */
  push32(0x112473f9u); f_1124a480();
  /* 112473f9 mov esi, esp */
  ESI = (ESP);
  /* 112473fb push 0 */
  push32((uint32_t)(0x0u));
  /* 112473fd push 0 */
  push32((uint32_t)(0x0u));
  /* 112473ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247402 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11247405 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247408 mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 1124740c push eax */
  push32((uint32_t)(EAX));
  /* 1124740d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247410 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 11247413 push edx */
  push32((uint32_t)(EDX));
  /* 11247414 call dword ptr [0x112835b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b4))), 0x1124741au);
  /* 1124741a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124741d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124741f call 0x1124a480 */
  push32(0x11247424u); f_1124a480();
L_11247424:;
  /* 11247424 jmp 0x11247505 */
  goto L_11247505;
L_11247429:;
  /* 11247429 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124742c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1124742f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247432 cmp dword ptr [edx + ecx*8 + 0x34], 2 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247437 je 0x11247449 */
  if (C.zf) goto L_11247449;
  /* 11247439 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124743c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1124743f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247442 cmp dword ptr [edx + ecx*8 + 0x34], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247447 jne 0x112474a0 */
  if (!C.zf) goto L_112474a0;
L_11247449:;
  /* 11247449 mov esi, esp */
  ESI = (ESP);
  /* 1124744b push 0 */
  push32((uint32_t)(0x0u));
  /* 1124744d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247450 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11247453 push eax */
  push32((uint32_t)(EAX));
  /* 11247454 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x1124745au);
  /* 1124745a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124745d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124745f call 0x1124a480 */
  push32(0x11247464u); f_1124a480();
  /* 11247464 mov esi, esp */
  ESI = (ESP);
  /* 11247466 push 2 */
  push32((uint32_t)(0x2u));
  /* 11247468 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124746a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124746d mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11247470 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11247473 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247476 mov dword ptr [eax + 0x1c], edx */
  w32((uint32_t)(EAX + 0x1c), (EDX));
  /* 11247479 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124747c mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1124747f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247482 mov ecx, dword ptr [eax + edx*8 + 0x28] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x28)));
  /* 11247486 push ecx */
  push32((uint32_t)(ECX));
  /* 11247487 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124748a mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 1124748d push eax */
  push32((uint32_t)(EAX));
  /* 1124748e call dword ptr [0x112835b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b4))), 0x11247494u);
  /* 11247494 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247497 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247499 call 0x1124a480 */
  push32(0x1124749eu); f_1124a480();
  /* 1124749e jmp 0x11247505 */
  goto L_11247505;
L_112474a0:;
  /* 112474a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112474a3 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 112474a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112474a9 cmp dword ptr [eax + edx*8 + 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*8 + 0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112474ae jne 0x11247505 */
  if (!C.zf) goto L_11247505;
  /* 112474b0 mov esi, esp */
  ESI = (ESP);
  /* 112474b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112474b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112474b7 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112474ba push ecx */
  push32((uint32_t)(ECX));
  /* 112474bb call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x112474c1u);
  /* 112474c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112474c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112474c6 call 0x1124a480 */
  push32(0x112474cbu); f_1124a480();
  /* 112474cb mov esi, esp */
  ESI = (ESP);
  /* 112474cd push 0 */
  push32((uint32_t)(0x0u));
  /* 112474cf push 0 */
  push32((uint32_t)(0x0u));
  /* 112474d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112474d4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 112474d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112474da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112474dd mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 112474e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112474e3 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 112474e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112474e9 mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 112474ed push edx */
  push32((uint32_t)(EDX));
  /* 112474ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112474f1 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 112474f4 push ecx */
  push32((uint32_t)(ECX));
  /* 112474f5 call dword ptr [0x112835b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b4))), 0x112474fbu);
  /* 112474fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112474fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247500 call 0x1124a480 */
  push32(0x11247505u); f_1124a480();
L_11247505:;
  /* 11247505 pop edi */
  EDI = (pop32());
  /* 11247506 pop esi */
  ESI = (pop32());
  /* 11247507 pop ebx */
  EBX = (pop32());
  /* 11247508 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124750b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124750d call 0x1124a480 */
  push32(0x11247512u); f_1124a480();
  /* 11247512 mov esp, ebp */
  ESP = (EBP);
  /* 11247514 pop ebp */
  EBP = (pop32());
  /* 11247515 ret  */
  ESPCHK(0x11247310u, _esp0);
  ESP += 4; return;
}

/* FUN_100075a0 @ 0x112475a0 (38 bytes, 20 insns) */
void f_112475a0(void) {
  FTRACE(0x112475a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112475a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112475a1 mov ebp, esp */
  EBP = (ESP);
  /* 112475a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112475a6 push ebx */
  push32((uint32_t)(EBX));
  /* 112475a7 push esi */
  push32((uint32_t)(ESI));
  /* 112475a8 push edi */
  push32((uint32_t)(EDI));
  /* 112475a9 push ecx */
  push32((uint32_t)(ECX));
  /* 112475aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112475ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112475b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112475b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112475b9 pop ecx */
  ECX = (pop32());
  /* 112475ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112475bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112475bf pop edi */
  EDI = (pop32());
  /* 112475c0 pop esi */
  ESI = (pop32());
  /* 112475c1 pop ebx */
  EBX = (pop32());
  /* 112475c2 mov esp, ebp */
  ESP = (EBP);
  /* 112475c4 pop ebp */
  EBP = (pop32());
  /* 112475c5 ret  */
  ESPCHK(0x112475a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100075d0 @ 0x112475d0 (85 bytes, 34 insns) */
void f_112475d0(void) {
  FTRACE(0x112475d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112475d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112475d1 mov ebp, esp */
  EBP = (ESP);
  /* 112475d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112475d6 push ebx */
  push32((uint32_t)(EBX));
  /* 112475d7 push esi */
  push32((uint32_t)(ESI));
  /* 112475d8 push edi */
  push32((uint32_t)(EDI));
  /* 112475d9 push ecx */
  push32((uint32_t)(ECX));
  /* 112475da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112475dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112475e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112475e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112475e9 pop ecx */
  ECX = (pop32());
  /* 112475ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112475ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112475f0 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 112475f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112475f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112475f9 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 112475fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247600 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11247603 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247606 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11247609 mov dword ptr [eax + edx*8 + 0x2c], ecx */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (ECX));
  /* 1124760d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247610 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11247613 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11247616 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247619 mov dword ptr [ecx + 0x20], eax */
  w32((uint32_t)(ECX + 0x20), (EAX));
  /* 1124761c pop edi */
  EDI = (pop32());
  /* 1124761d pop esi */
  ESI = (pop32());
  /* 1124761e pop ebx */
  EBX = (pop32());
  /* 1124761f mov esp, ebp */
  ESP = (EBP);
  /* 11247621 pop ebp */
  EBP = (pop32());
  /* 11247622 ret 8 */
  ESPCHK(0x112475d0u, _esp0);
  ESP += 12; return;
}

/* FUN_10007640 @ 0x11247640 (86 bytes, 33 insns) */
void f_11247640(void) {
  FTRACE(0x11247640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11247640 push ebp */
  push32((uint32_t)(EBP));
  /* 11247641 mov ebp, esp */
  EBP = (ESP);
  /* 11247643 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247646 push ebx */
  push32((uint32_t)(EBX));
  /* 11247647 push esi */
  push32((uint32_t)(ESI));
  /* 11247648 push edi */
  push32((uint32_t)(EDI));
  /* 11247649 push ecx */
  push32((uint32_t)(ECX));
  /* 1124764a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124764d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11247652 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247657 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247659 pop ecx */
  ECX = (pop32());
  /* 1124765a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124765d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247660 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11247663 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11247669 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 1124766d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247670 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11247673 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247676 mov dword ptr [eax + edx*8 + 0x2c], 2 */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (0x2u));
  /* 1124767e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247681 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11247684 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11247687 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124768a mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 1124768d pop edi */
  EDI = (pop32());
  /* 1124768e pop esi */
  ESI = (pop32());
  /* 1124768f pop ebx */
  EBX = (pop32());
  /* 11247690 mov esp, ebp */
  ESP = (EBP);
  /* 11247692 pop ebp */
  EBP = (pop32());
  /* 11247693 ret 4 */
  ESPCHK(0x11247640u, _esp0);
  ESP += 8; return;
}

/* FUN_100076b0 @ 0x112476b0 (119 bytes, 43 insns) */
void f_112476b0(void) {
  FTRACE(0x112476b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112476b0 push ebp */
  push32((uint32_t)(EBP));
  /* 112476b1 mov ebp, esp */
  EBP = (ESP);
  /* 112476b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112476b6 push ebx */
  push32((uint32_t)(EBX));
  /* 112476b7 push esi */
  push32((uint32_t)(ESI));
  /* 112476b8 push edi */
  push32((uint32_t)(EDI));
  /* 112476b9 push ecx */
  push32((uint32_t)(ECX));
  /* 112476ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112476bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112476c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112476c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112476c9 pop ecx */
  ECX = (pop32());
  /* 112476ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112476cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112476d0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112476d3 mov esi, esp */
  ESI = (ESP);
  /* 112476d5 push eax */
  push32((uint32_t)(EAX));
  /* 112476d6 call dword ptr [0x112835c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c0))), 0x112476dcu);
  /* 112476dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112476df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112476e1 call 0x1124a480 */
  push32(0x112476e6u); f_1124a480();
  /* 112476e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112476e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112476ec mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 112476ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112476f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112476f4 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 112476f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112476fa mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
  /* 11247701 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247704 mov dword ptr [eax + 0x20], 0 */
  w32((uint32_t)(EAX + 0x20), (0x0u));
  /* 1124770b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124770e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11247711 mov dword ptr [ecx + 0x24], edx */
  w32((uint32_t)(ECX + 0x24), (EDX));
  /* 11247714 pop edi */
  EDI = (pop32());
  /* 11247715 pop esi */
  ESI = (pop32());
  /* 11247716 pop ebx */
  EBX = (pop32());
  /* 11247717 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124771a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124771c call 0x1124a480 */
  push32(0x11247721u); f_1124a480();
  /* 11247721 mov esp, ebp */
  ESP = (EBP);
  /* 11247723 pop ebp */
  EBP = (pop32());
  /* 11247724 ret 0xc */
  ESPCHK(0x112476b0u, _esp0);
  ESP += 16; return;
}

/* FUN_10007750 @ 0x11247750 (263 bytes, 93 insns) */
void f_11247750(void) {
  FTRACE(0x11247750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11247750 push ebp */
  push32((uint32_t)(EBP));
  /* 11247751 mov ebp, esp */
  EBP = (ESP);
  /* 11247753 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247756 push ebx */
  push32((uint32_t)(EBX));
  /* 11247757 push esi */
  push32((uint32_t)(ESI));
  /* 11247758 push edi */
  push32((uint32_t)(EDI));
  /* 11247759 push ecx */
  push32((uint32_t)(ECX));
  /* 1124775a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1124775d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11247762 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247767 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247769 pop ecx */
  ECX = (pop32());
  /* 1124776a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124776d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247770 call 0x112411b3 */
  push32(0x11247775u); f_112411b3();
  /* 11247775 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11247777 jne 0x11247844 */
  if (!C.zf) goto L_11247844;
  /* 1124777d mov esi, esp */
  ESI = (ESP);
  /* 1124777f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247782 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11247785 push ecx */
  push32((uint32_t)(ECX));
  /* 11247786 call dword ptr [0x11283558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283558))), 0x1124778cu);
  /* 1124778c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124778f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247791 call 0x1124a480 */
  push32(0x11247796u); f_1124a480();
  /* 11247796 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1124779d jmp 0x112477a8 */
  goto L_112477a8;
L_1124779f:;
  /* 1124779f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 112477a2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112477a5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_112477a8:;
  /* 112477a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112477ab cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112477ae jge 0x11247800 */
  if ((C.sf==C.of)) goto L_11247800;
  /* 112477b0 mov esi, esp */
  ESI = (ESP);
  /* 112477b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112477b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112477b7 push ecx */
  push32((uint32_t)(ECX));
  /* 112477b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112477bb mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 112477be push eax */
  push32((uint32_t)(EAX));
  /* 112477bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112477c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 112477c4 push edx */
  push32((uint32_t)(EDX));
  /* 112477c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112477c8 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 112477cb push ecx */
  push32((uint32_t)(ECX));
  /* 112477cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112477cf add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112477d2 push edx */
  push32((uint32_t)(EDX));
  /* 112477d3 call dword ptr [0x11283580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283580))), 0x112477d9u);
  /* 112477d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112477dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112477de call 0x1124a480 */
  push32(0x112477e3u); f_1124a480();
  /* 112477e3 mov esi, esp */
  ESI = (ESP);
  /* 112477e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 112477e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112477ea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112477ed push eax */
  push32((uint32_t)(EAX));
  /* 112477ee call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x112477f4u);
  /* 112477f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112477f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112477f9 call 0x1124a480 */
  push32(0x112477feu); f_1124a480();
  /* 112477fe jmp 0x1124779f */
  goto L_1124779f;
L_11247800:;
  /* 11247800 mov esi, esp */
  ESI = (ESP);
  /* 11247802 push 0 */
  push32((uint32_t)(0x0u));
  /* 11247804 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247807 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124780a push ecx */
  push32((uint32_t)(ECX));
  /* 1124780b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124780e mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11247811 push eax */
  push32((uint32_t)(EAX));
  /* 11247812 call dword ptr [0x112835c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c8))), 0x11247818u);
  /* 11247818 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124781b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124781d call 0x1124a480 */
  push32(0x11247822u); f_1124a480();
  /* 11247822 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247825 mov dword ptr [ecx + 0x20], 0 */
  w32((uint32_t)(ECX + 0x20), (0x0u));
  /* 1124782c push 0 */
  push32((uint32_t)(0x0u));
  /* 1124782e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11247831 push edx */
  push32((uint32_t)(EDX));
  /* 11247832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247835 call 0x1124105a */
  push32(0x1124783au); f_1124105a();
  /* 1124783a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124783d mov dword ptr [eax + 0x1c], 0 */
  w32((uint32_t)(EAX + 0x1c), (0x0u));
L_11247844:;
  /* 11247844 pop edi */
  EDI = (pop32());
  /* 11247845 pop esi */
  ESI = (pop32());
  /* 11247846 pop ebx */
  EBX = (pop32());
  /* 11247847 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124784a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124784c call 0x1124a480 */
  push32(0x11247851u); f_1124a480();
  /* 11247851 mov esp, ebp */
  ESP = (EBP);
  /* 11247853 pop ebp */
  EBP = (pop32());
  /* 11247854 ret 8 */
  ESPCHK(0x11247750u, _esp0);
  ESP += 12; return;
}

/* FUN_100078a0 @ 0x112478a0 (42 bytes, 21 insns) */
void f_112478a0(void) {
  FTRACE(0x112478a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112478a0 push ebp */
  push32((uint32_t)(EBP));
  /* 112478a1 mov ebp, esp */
  EBP = (ESP);
  /* 112478a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112478a6 push ebx */
  push32((uint32_t)(EBX));
  /* 112478a7 push esi */
  push32((uint32_t)(ESI));
  /* 112478a8 push edi */
  push32((uint32_t)(EDI));
  /* 112478a9 push ecx */
  push32((uint32_t)(ECX));
  /* 112478aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112478ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112478b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112478b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112478b9 pop ecx */
  ECX = (pop32());
  /* 112478ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112478bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112478c0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112478c3 pop edi */
  EDI = (pop32());
  /* 112478c4 pop esi */
  ESI = (pop32());
  /* 112478c5 pop ebx */
  EBX = (pop32());
  /* 112478c6 mov esp, ebp */
  ESP = (EBP);
  /* 112478c8 pop ebp */
  EBP = (pop32());
  /* 112478c9 ret  */
  ESPCHK(0x112478a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078e0 @ 0x112478e0 (78 bytes, 33 insns) */
void f_112478e0(void) {
  FTRACE(0x112478e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112478e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112478e1 mov ebp, esp */
  EBP = (ESP);
  /* 112478e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112478e6 push ebx */
  push32((uint32_t)(EBX));
  /* 112478e7 push esi */
  push32((uint32_t)(ESI));
  /* 112478e8 push edi */
  push32((uint32_t)(EDI));
  /* 112478e9 push ecx */
  push32((uint32_t)(ECX));
  /* 112478ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112478ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112478f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112478f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112478f9 pop ecx */
  ECX = (pop32());
  /* 112478fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112478fd mov esi, esp */
  ESI = (ESP);
  /* 112478ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247902 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11247905 push ecx */
  push32((uint32_t)(ECX));
  /* 11247906 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247909 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124790c push edx */
  push32((uint32_t)(EDX));
  /* 1124790d call dword ptr [0x11283564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283564))), 0x11247913u);
  /* 11247913 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247916 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247918 call 0x1124a480 */
  push32(0x1124791du); f_1124a480();
  /* 1124791d pop edi */
  EDI = (pop32());
  /* 1124791e pop esi */
  ESI = (pop32());
  /* 1124791f pop ebx */
  EBX = (pop32());
  /* 11247920 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247923 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247925 call 0x1124a480 */
  push32(0x1124792au); f_1124a480();
  /* 1124792a mov esp, ebp */
  ESP = (EBP);
  /* 1124792c pop ebp */
  EBP = (pop32());
  /* 1124792d ret  */
  ESPCHK(0x112478e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007950 @ 0x11247950 (102 bytes, 40 insns) */
void f_11247950(void) {
  FTRACE(0x11247950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11247950 push ebp */
  push32((uint32_t)(EBP));
  /* 11247951 mov ebp, esp */
  EBP = (ESP);
  /* 11247953 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247956 push ebx */
  push32((uint32_t)(EBX));
  /* 11247957 push esi */
  push32((uint32_t)(ESI));
  /* 11247958 push edi */
  push32((uint32_t)(EDI));
  /* 11247959 push ecx */
  push32((uint32_t)(ECX));
  /* 1124795a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1124795d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11247962 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247967 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247969 pop ecx */
  ECX = (pop32());
  /* 1124796a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124796d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11247971 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247974 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11247977 mov esi, esp */
  ESI = (ESP);
  /* 11247979 push eax */
  push32((uint32_t)(EAX));
  /* 1124797a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124797d push ecx */
  push32((uint32_t)(ECX));
  /* 1124797e call dword ptr [0x112835ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835ac))), 0x11247984u);
  /* 11247984 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247987 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247989 call 0x1124a480 */
  push32(0x1124798eu); f_1124a480();
  /* 1124798e mov esi, eax */
  ESI = (EAX);
  /* 11247990 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247993 call 0x112411b3 */
  push32(0x11247998u); f_112411b3();
  /* 11247998 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124799a jne 0x112479a0 */
  if (!C.zf) goto L_112479a0;
  /* 1124799c mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_112479a0:;
  /* 112479a0 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 112479a3 pop edi */
  EDI = (pop32());
  /* 112479a4 pop esi */
  ESI = (pop32());
  /* 112479a5 pop ebx */
  EBX = (pop32());
  /* 112479a6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112479a9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112479ab call 0x1124a480 */
  push32(0x112479b0u); f_1124a480();
  /* 112479b0 mov esp, ebp */
  ESP = (EBP);
  /* 112479b2 pop ebp */
  EBP = (pop32());
  /* 112479b3 ret 4 */
  ESPCHK(0x11247950u, _esp0);
  ESP += 8; return;
}

/* FUN_100079d0 @ 0x112479d0 (122 bytes, 45 insns) */
void f_112479d0(void) {
  FTRACE(0x112479d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112479d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112479d1 mov ebp, esp */
  EBP = (ESP);
  /* 112479d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112479d6 push ebx */
  push32((uint32_t)(EBX));
  /* 112479d7 push esi */
  push32((uint32_t)(ESI));
  /* 112479d8 push edi */
  push32((uint32_t)(EDI));
  /* 112479d9 push ecx */
  push32((uint32_t)(ECX));
  /* 112479da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112479dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112479e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112479e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112479e9 pop ecx */
  ECX = (pop32());
  /* 112479ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112479ed mov esi, esp */
  ESI = (ESP);
  /* 112479ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112479f2 push eax */
  push32((uint32_t)(EAX));
  /* 112479f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112479f6 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112479f9 push ecx */
  push32((uint32_t)(ECX));
  /* 112479fa call dword ptr [0x1128358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128358c))), 0x11247a00u);
  /* 11247a00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247a03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247a05 call 0x1124a480 */
  push32(0x11247a0au); f_1124a480();
  /* 11247a0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247a0d add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11247a10 push edx */
  push32((uint32_t)(EDX));
  /* 11247a11 call 0x112410d2 */
  push32(0x11247a16u); f_112410d2();
  /* 11247a16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247a19 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11247a1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247a21 mov dword ptr [ecx + 0x18], eax */
  w32((uint32_t)(ECX + 0x18), (EAX));
  /* 11247a24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247a27 mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
  /* 11247a2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247a31 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11247a34 mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 11247a37 pop edi */
  EDI = (pop32());
  /* 11247a38 pop esi */
  ESI = (pop32());
  /* 11247a39 pop ebx */
  EBX = (pop32());
  /* 11247a3a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247a3d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247a3f call 0x1124a480 */
  push32(0x11247a44u); f_1124a480();
  /* 11247a44 mov esp, ebp */
  ESP = (EBP);
  /* 11247a46 pop ebp */
  EBP = (pop32());
  /* 11247a47 ret 8 */
  ESPCHK(0x112479d0u, _esp0);
  ESP += 12; return;
}

/* FUN_10007a70 @ 0x11247a70 (56 bytes, 25 insns) */
void f_11247a70(void) {
  FTRACE(0x11247a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11247a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11247a71 mov ebp, esp */
  EBP = (ESP);
  /* 11247a73 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247a76 push ebx */
  push32((uint32_t)(EBX));
  /* 11247a77 push esi */
  push32((uint32_t)(ESI));
  /* 11247a78 push edi */
  push32((uint32_t)(EDI));
  /* 11247a79 push ecx */
  push32((uint32_t)(ECX));
  /* 11247a7a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11247a7d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11247a82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247a87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247a89 pop ecx */
  ECX = (pop32());
  /* 11247a8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11247a8d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11247a91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247a94 cmp dword ptr [eax + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247a98 jne 0x11247a9e */
  if (!C.zf) goto L_11247a9e;
  /* 11247a9a mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11247a9e:;
  /* 11247a9e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11247aa1 pop edi */
  EDI = (pop32());
  /* 11247aa2 pop esi */
  ESI = (pop32());
  /* 11247aa3 pop ebx */
  EBX = (pop32());
  /* 11247aa4 mov esp, ebp */
  ESP = (EBP);
  /* 11247aa6 pop ebp */
  EBP = (pop32());
  /* 11247aa7 ret  */
  ESPCHK(0x11247a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ac0 @ 0x11247ac0 (163 bytes, 60 insns) */
void f_11247ac0(void) {
  FTRACE(0x11247ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11247ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11247ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11247ac3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247ac6 push ebx */
  push32((uint32_t)(EBX));
  /* 11247ac7 push esi */
  push32((uint32_t)(ESI));
  /* 11247ac8 push edi */
  push32((uint32_t)(EDI));
  /* 11247ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 11247aca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11247acd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11247ad2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247ad7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247ad9 pop ecx */
  ECX = (pop32());
  /* 11247ada mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11247add mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247ae0 call 0x112410f5 */
  push32(0x11247ae5u); f_112410f5();
  /* 11247ae5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11247aea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11247aec je 0x11247b50 */
  if (C.zf) goto L_11247b50;
  /* 11247aee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247af1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11247af4 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11247af7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247afa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11247afd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11247aff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247b02 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11247b05 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11247b08 mov esi, esp */
  ESI = (ESP);
  /* 11247b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11247b0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247b0f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11247b12 push eax */
  push32((uint32_t)(EAX));
  /* 11247b13 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x11247b19u);
  /* 11247b19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247b1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247b1e call 0x1124a480 */
  push32(0x11247b23u); f_1124a480();
  /* 11247b23 mov esi, esp */
  ESI = (ESP);
  /* 11247b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11247b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11247b29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247b2c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11247b2e push edx */
  push32((uint32_t)(EDX));
  /* 11247b2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247b32 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11247b35 push ecx */
  push32((uint32_t)(ECX));
  /* 11247b36 call dword ptr [0x112835b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b4))), 0x11247b3cu);
  /* 11247b3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247b3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247b41 call 0x1124a480 */
  push32(0x11247b46u); f_1124a480();
  /* 11247b46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247b49 mov dword ptr [edx + 0x14], 1 */
  w32((uint32_t)(EDX + 0x14), (0x1u));
L_11247b50:;
  /* 11247b50 pop edi */
  EDI = (pop32());
  /* 11247b51 pop esi */
  ESI = (pop32());
  /* 11247b52 pop ebx */
  EBX = (pop32());
  /* 11247b53 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247b56 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247b58 call 0x1124a480 */
  push32(0x11247b5du); f_1124a480();
  /* 11247b5d mov esp, ebp */
  ESP = (EBP);
  /* 11247b5f pop ebp */
  EBP = (pop32());
  /* 11247b60 ret 0xc */
  ESPCHK(0x11247ac0u, _esp0);
  ESP += 16; return;
}

/* FUN_10007b90 @ 0x11247b90 (140 bytes, 53 insns) */
void f_11247b90(void) {
  FTRACE(0x11247b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11247b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11247b91 mov ebp, esp */
  EBP = (ESP);
  /* 11247b93 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247b96 push ebx */
  push32((uint32_t)(EBX));
  /* 11247b97 push esi */
  push32((uint32_t)(ESI));
  /* 11247b98 push edi */
  push32((uint32_t)(EDI));
  /* 11247b99 push ecx */
  push32((uint32_t)(ECX));
  /* 11247b9a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11247b9d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11247ba2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247ba7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247ba9 pop ecx */
  ECX = (pop32());
  /* 11247baa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11247bad mov esi, esp */
  ESI = (ESP);
  /* 11247baf push 0 */
  push32((uint32_t)(0x0u));
  /* 11247bb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247bb4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11247bb7 push eax */
  push32((uint32_t)(EAX));
  /* 11247bb8 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x11247bbeu);
  /* 11247bbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247bc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247bc3 call 0x1124a480 */
  push32(0x11247bc8u); f_1124a480();
  /* 11247bc8 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11247bcc mov esi, esp */
  ESI = (ESP);
  /* 11247bce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247bd1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11247bd4 push edx */
  push32((uint32_t)(EDX));
  /* 11247bd5 call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x11247bdbu);
  /* 11247bdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247bde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247be0 call 0x1124a480 */
  push32(0x11247be5u); f_1124a480();
  /* 11247be5 mov esi, eax */
  ESI = (EAX);
  /* 11247be7 mov edi, esp */
  EDI = (ESP);
  /* 11247be9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247bec mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11247bef push ecx */
  push32((uint32_t)(ECX));
  /* 11247bf0 call dword ptr [0x112834f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834f0))), 0x11247bf6u);
  /* 11247bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247bf9 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247bfb call 0x1124a480 */
  push32(0x11247c00u); f_1124a480();
  /* 11247c00 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247c02 jne 0x11247c08 */
  if (!C.zf) goto L_11247c08;
  /* 11247c04 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11247c08:;
  /* 11247c08 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11247c0b pop edi */
  EDI = (pop32());
  /* 11247c0c pop esi */
  ESI = (pop32());
  /* 11247c0d pop ebx */
  EBX = (pop32());
  /* 11247c0e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247c11 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247c13 call 0x1124a480 */
  push32(0x11247c18u); f_1124a480();
  /* 11247c18 mov esp, ebp */
  ESP = (EBP);
  /* 11247c1a pop ebp */
  EBP = (pop32());
  /* 11247c1b ret  */
  ESPCHK(0x11247b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c40 @ 0x11247c40 (125 bytes, 48 insns) */
void f_11247c40(void) {
  FTRACE(0x11247c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11247c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11247c41 mov ebp, esp */
  EBP = (ESP);
  /* 11247c43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247c46 push ebx */
  push32((uint32_t)(EBX));
  /* 11247c47 push esi */
  push32((uint32_t)(ESI));
  /* 11247c48 push edi */
  push32((uint32_t)(EDI));
  /* 11247c49 push ecx */
  push32((uint32_t)(ECX));
  /* 11247c4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11247c4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11247c52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247c57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247c59 pop ecx */
  ECX = (pop32());
  /* 11247c5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11247c5d mov esi, esp */
  ESI = (ESP);
  /* 11247c5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11247c61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247c64 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11247c67 push eax */
  push32((uint32_t)(EAX));
  /* 11247c68 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x11247c6eu);
  /* 11247c6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247c71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247c73 call 0x1124a480 */
  push32(0x11247c78u); f_1124a480();
  /* 11247c78 mov esi, esp */
  ESI = (ESP);
  /* 11247c7a push 1 */
  push32((uint32_t)(0x1u));
  /* 11247c7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247c7f mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11247c82 push edx */
  push32((uint32_t)(EDX));
  /* 11247c83 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x11247c89u);
  /* 11247c89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247c8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247c8e call 0x1124a480 */
  push32(0x11247c93u); f_1124a480();
  /* 11247c93 mov esi, esp */
  ESI = (ESP);
  /* 11247c95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247c98 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11247c9b push ecx */
  push32((uint32_t)(ECX));
  /* 11247c9c call dword ptr [0x112834e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834e0))), 0x11247ca2u);
  /* 11247ca2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247ca5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247ca7 call 0x1124a480 */
  push32(0x11247cacu); f_1124a480();
  /* 11247cac pop edi */
  EDI = (pop32());
  /* 11247cad pop esi */
  ESI = (pop32());
  /* 11247cae pop ebx */
  EBX = (pop32());
  /* 11247caf add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247cb2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247cb4 call 0x1124a480 */
  push32(0x11247cb9u); f_1124a480();
  /* 11247cb9 mov esp, ebp */
  ESP = (EBP);
  /* 11247cbb pop ebp */
  EBP = (pop32());
  /* 11247cbc ret  */
  ESPCHK(0x11247c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce0 @ 0x11247ce0 (98 bytes, 39 insns) */
void f_11247ce0(void) {
  FTRACE(0x11247ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11247ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11247ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11247ce3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247ce6 push ebx */
  push32((uint32_t)(EBX));
  /* 11247ce7 push esi */
  push32((uint32_t)(ESI));
  /* 11247ce8 push edi */
  push32((uint32_t)(EDI));
  /* 11247ce9 push ecx */
  push32((uint32_t)(ECX));
  /* 11247cea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11247ced mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11247cf2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247cf7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247cf9 pop ecx */
  ECX = (pop32());
  /* 11247cfa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11247cfd mov esi, esp */
  ESI = (ESP);
  /* 11247cff push 0 */
  push32((uint32_t)(0x0u));
  /* 11247d01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247d04 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11247d07 push eax */
  push32((uint32_t)(EAX));
  /* 11247d08 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x11247d0eu);
  /* 11247d0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247d11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247d13 call 0x1124a480 */
  push32(0x11247d18u); f_1124a480();
  /* 11247d18 mov esi, esp */
  ESI = (ESP);
  /* 11247d1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247d1d mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11247d20 push edx */
  push32((uint32_t)(EDX));
  /* 11247d21 call dword ptr [0x112834e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834e8))), 0x11247d27u);
  /* 11247d27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247d2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247d2c call 0x1124a480 */
  push32(0x11247d31u); f_1124a480();
  /* 11247d31 pop edi */
  EDI = (pop32());
  /* 11247d32 pop esi */
  ESI = (pop32());
  /* 11247d33 pop ebx */
  EBX = (pop32());
  /* 11247d34 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247d37 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247d39 call 0x1124a480 */
  push32(0x11247d3eu); f_1124a480();
  /* 11247d3e mov esp, ebp */
  ESP = (EBP);
  /* 11247d40 pop ebp */
  EBP = (pop32());
  /* 11247d41 ret  */
  ESPCHK(0x11247ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d60 @ 0x11247d60 (402 bytes, 129 insns) [1 switch table(s)] */
void f_11247d60(void) {
  FTRACE(0x11247d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11247d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11247d61 mov ebp, esp */
  EBP = (ESP);
  /* 11247d63 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247d66 push ebx */
  push32((uint32_t)(EBX));
  /* 11247d67 push esi */
  push32((uint32_t)(ESI));
  /* 11247d68 push edi */
  push32((uint32_t)(EDI));
  /* 11247d69 push ecx */
  push32((uint32_t)(ECX));
  /* 11247d6a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11247d6d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11247d72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247d77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247d79 pop ecx */
  ECX = (pop32());
  /* 11247d7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11247d7d mov esi, esp */
  ESI = (ESP);
  /* 11247d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11247d81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247d84 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11247d87 push eax */
  push32((uint32_t)(EAX));
  /* 11247d88 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x11247d8eu);
  /* 11247d8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247d91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247d93 call 0x1124a480 */
  push32(0x11247d98u); f_1124a480();
  /* 11247d98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247d9b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11247d9e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11247da1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11247da4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247da7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11247daa cmp dword ptr [ebp - 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247dae ja 0x11247ee1 */
  if ((!C.cf&&!C.zf)) goto L_11247ee1;
  /* 11247db4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11247db7 jmp dword ptr [ecx*4 + 0x11247ef2] */
  switch (ECX) {
    case 0: goto L_11247dbe;
    case 1: goto L_11247df7;
    case 2: goto L_11247e3b;
    case 3: goto L_11247e71;
    case 4: goto L_11247eb5;
    default: x86_unimpl("switch@0x11247db7 out of table"); return;
  }
L_11247dbe:;
  /* 11247dbe mov esi, esp */
  ESI = (ESP);
  /* 11247dc0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247dc3 mov al, byte ptr [edx + 0x18] */
  AL = (r8((uint32_t)(EDX + 0x18)));
  /* 11247dc6 push eax */
  push32((uint32_t)(EAX));
  /* 11247dc7 call dword ptr [0x112834e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834e4))), 0x11247dcdu);
  /* 11247dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247dd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247dd2 call 0x1124a480 */
  push32(0x11247dd7u); f_1124a480();
  /* 11247dd7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11247ddc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11247dde je 0x11247df2 */
  if (C.zf) goto L_11247df2;
  /* 11247de0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247de3 call 0x11241221 */
  push32(0x11247de8u); f_11241221();
  /* 11247de8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247deb mov dword ptr [ecx + 0x14], 2 */
  w32((uint32_t)(ECX + 0x14), (0x2u));
L_11247df2:;
  /* 11247df2 jmp 0x11247ee1 */
  goto L_11247ee1;
L_11247df7:;
  /* 11247df7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247dfa call 0x1124114f */
  push32(0x11247dffu); f_1124114f();
  /* 11247dff and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11247e04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11247e06 je 0x11247e36 */
  if (C.zf) goto L_11247e36;
  /* 11247e08 mov esi, esp */
  ESI = (ESP);
  /* 11247e0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11247e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11247e0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247e11 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11247e14 push eax */
  push32((uint32_t)(EAX));
  /* 11247e15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247e18 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11247e1b push edx */
  push32((uint32_t)(EDX));
  /* 11247e1c call dword ptr [0x112835b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b4))), 0x11247e22u);
  /* 11247e22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247e25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247e27 call 0x1124a480 */
  push32(0x11247e2cu); f_1124a480();
  /* 11247e2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247e2f mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
L_11247e36:;
  /* 11247e36 jmp 0x11247ee1 */
  goto L_11247ee1;
L_11247e3b:;
  /* 11247e3b mov esi, esp */
  ESI = (ESP);
  /* 11247e3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247e40 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11247e43 push edx */
  push32((uint32_t)(EDX));
  /* 11247e44 call dword ptr [0x112834e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834e4))), 0x11247e4au);
  /* 11247e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247e4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247e4f call 0x1124a480 */
  push32(0x11247e54u); f_1124a480();
  /* 11247e54 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11247e59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11247e5b je 0x11247e6f */
  if (C.zf) goto L_11247e6f;
  /* 11247e5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247e60 call 0x1124107d */
  push32(0x11247e65u); f_1124107d();
  /* 11247e65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247e68 mov dword ptr [eax + 0x14], 4 */
  w32((uint32_t)(EAX + 0x14), (0x4u));
L_11247e6f:;
  /* 11247e6f jmp 0x11247ee1 */
  goto L_11247ee1;
L_11247e71:;
  /* 11247e71 mov esi, esp */
  ESI = (ESP);
  /* 11247e73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247e76 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11247e79 push edx */
  push32((uint32_t)(EDX));
  /* 11247e7a call dword ptr [0x112834f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834f0))), 0x11247e80u);
  /* 11247e80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247e83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247e85 call 0x1124a480 */
  push32(0x11247e8au); f_1124a480();
  /* 11247e8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11247e8c jne 0x11247eb3 */
  if (!C.zf) goto L_11247eb3;
  /* 11247e8e mov esi, esp */
  ESI = (ESP);
  /* 11247e90 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11247e92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247e95 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11247e98 push ecx */
  push32((uint32_t)(ECX));
  /* 11247e99 call dword ptr [0x1128352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128352c))), 0x11247e9fu);
  /* 11247e9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247ea2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247ea4 call 0x1124a480 */
  push32(0x11247ea9u); f_1124a480();
  /* 11247ea9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247eac mov dword ptr [edx + 0x14], 5 */
  w32((uint32_t)(EDX + 0x14), (0x5u));
L_11247eb3:;
  /* 11247eb3 jmp 0x11247ee1 */
  goto L_11247ee1;
L_11247eb5:;
  /* 11247eb5 mov esi, esp */
  ESI = (ESP);
  /* 11247eb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247eba mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11247ebd push ecx */
  push32((uint32_t)(ECX));
  /* 11247ebe call dword ptr [0x11283528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283528))), 0x11247ec4u);
  /* 11247ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247ec7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247ec9 call 0x1124a480 */
  push32(0x11247eceu); f_1124a480();
  /* 11247ece and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11247ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11247ed5 je 0x11247ee1 */
  if (C.zf) goto L_11247ee1;
  /* 11247ed7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11247eda mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
L_11247ee1:;
  /* 11247ee1 pop edi */
  EDI = (pop32());
  /* 11247ee2 pop esi */
  ESI = (pop32());
  /* 11247ee3 pop ebx */
  EBX = (pop32());
  /* 11247ee4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247ee7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247ee9 call 0x1124a480 */
  push32(0x11247eeeu); f_1124a480();
  /* 11247eee mov esp, ebp */
  ESP = (EBP);
  /* 11247ef0 pop ebp */
  EBP = (pop32());
  /* 11247ef1 ret  */
  ESPCHK(0x11247d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f70 @ 0x11247f70 (39 bytes, 18 insns) */
void f_11247f70(void) {
  FTRACE(0x11247f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11247f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11247f71 mov ebp, esp */
  EBP = (ESP);
  /* 11247f73 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247f76 push ebx */
  push32((uint32_t)(EBX));
  /* 11247f77 push esi */
  push32((uint32_t)(ESI));
  /* 11247f78 push edi */
  push32((uint32_t)(EDI));
  /* 11247f79 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11247f7c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11247f81 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247f86 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247f88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11247f8b mov dword ptr [0x112813a4], eax */
  w32((uint32_t)(0x112813a4), (EAX));
  /* 11247f90 pop edi */
  EDI = (pop32());
  /* 11247f91 pop esi */
  ESI = (pop32());
  /* 11247f92 pop ebx */
  EBX = (pop32());
  /* 11247f93 mov esp, ebp */
  ESP = (EBP);
  /* 11247f95 pop ebp */
  EBP = (pop32());
  /* 11247f96 ret  */
  ESPCHK(0x11247f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x11247fa0 (93 bytes, 34 insns) */
void f_11247fa0(void) {
  FTRACE(0x11247fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11247fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11247fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11247fa3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11247fa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11247fa7 push esi */
  push32((uint32_t)(ESI));
  /* 11247fa8 push edi */
  push32((uint32_t)(EDI));
  /* 11247fa9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11247fac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11247fb1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11247fb6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11247fb8 cmp dword ptr [0x112813a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112813a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247fbf je 0x11247fec */
  if (C.zf) goto L_11247fec;
  /* 11247fc1 mov ecx, dword ptr [0x112813a4] */
  ECX = (r32((uint32_t)(0x112813a4)));
  /* 11247fc7 call 0x112410f5 */
  push32(0x11247fccu); f_112410f5();
  /* 11247fcc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11247fd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11247fd3 je 0x11247fec */
  if (C.zf) goto L_11247fec;
  /* 11247fd5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11247fd8 push eax */
  push32((uint32_t)(EAX));
  /* 11247fd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11247fdc push ecx */
  push32((uint32_t)(ECX));
  /* 11247fdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11247fe0 push edx */
  push32((uint32_t)(EDX));
  /* 11247fe1 mov ecx, dword ptr [0x112813a4] */
  ECX = (r32((uint32_t)(0x112813a4)));
  /* 11247fe7 call 0x1124112c */
  push32(0x11247fecu); f_1124112c();
L_11247fec:;
  /* 11247fec pop edi */
  EDI = (pop32());
  /* 11247fed pop esi */
  ESI = (pop32());
  /* 11247fee pop ebx */
  EBX = (pop32());
  /* 11247fef add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11247ff2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11247ff4 call 0x1124a480 */
  push32(0x11247ff9u); f_1124a480();
  /* 11247ff9 mov esp, ebp */
  ESP = (EBP);
  /* 11247ffb pop ebp */
  EBP = (pop32());
  /* 11247ffc ret  */
  ESPCHK(0x11247fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008020 @ 0x11248020 (437 bytes, 146 insns) */
void f_11248020(void) {
  FTRACE(0x11248020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248020 push ebp */
  push32((uint32_t)(EBP));
  /* 11248021 mov ebp, esp */
  EBP = (ESP);
  /* 11248023 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248026 push ebx */
  push32((uint32_t)(EBX));
  /* 11248027 push esi */
  push32((uint32_t)(ESI));
  /* 11248028 push edi */
  push32((uint32_t)(EDI));
  /* 11248029 push ecx */
  push32((uint32_t)(ECX));
  /* 1124802a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1124802d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11248032 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11248037 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11248039 pop ecx */
  ECX = (pop32());
  /* 1124803a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124803d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248040 call 0x11241055 */
  push32(0x11248045u); f_11241055();
  /* 11248045 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124804a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124804c je 0x112481c4 */
  if (C.zf) goto L_112481c4;
  /* 11248052 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248055 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11248058 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1124805b cmp byte ptr [ebp - 8], 1 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1124805f je 0x11248119 */
  if (C.zf) goto L_11248119;
  /* 11248065 cmp byte ptr [ebp - 8], 2 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11248069 je 0x11248070 */
  if (C.zf) goto L_11248070;
  /* 1124806b jmp 0x1124816f */
  goto L_1124816f;
L_11248070:;
  /* 11248070 cmp dword ptr [0x112813ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112813ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248077 je 0x112480bf */
  if (C.zf) goto L_112480bf;
  /* 11248079 mov esi, esp */
  ESI = (ESP);
  /* 1124807b push 3 */
  push32((uint32_t)(0x3u));
  /* 1124807d mov edx, dword ptr [0x112813ac] */
  EDX = (r32((uint32_t)(0x112813ac)));
  /* 11248083 push edx */
  push32((uint32_t)(EDX));
  /* 11248084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248087 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124808a push eax */
  push32((uint32_t)(EAX));
  /* 1124808b call dword ptr [0x112835b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b0))), 0x11248091u);
  /* 11248091 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248094 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248096 call 0x1124a480 */
  push32(0x1124809bu); f_1124a480();
  /* 1124809b mov esi, esp */
  ESI = (ESP);
  /* 1124809d push 0 */
  push32((uint32_t)(0x0u));
  /* 1124809f mov ecx, dword ptr [0x112813ac] */
  ECX = (r32((uint32_t)(0x112813ac)));
  /* 112480a5 push ecx */
  push32((uint32_t)(ECX));
  /* 112480a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112480a9 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112480ac push edx */
  push32((uint32_t)(EDX));
  /* 112480ad call dword ptr [0x112835b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b0))), 0x112480b3u);
  /* 112480b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112480b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112480b8 call 0x1124a480 */
  push32(0x112480bdu); f_1124a480();
  /* 112480bd jmp 0x11248114 */
  goto L_11248114;
L_112480bf:;
  /* 112480bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112480c2 call 0x112410a5 */
  push32(0x112480c7u); f_112410a5();
  /* 112480c7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112480cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112480ce jne 0x11248114 */
  if (!C.zf) goto L_11248114;
  /* 112480d0 mov esi, esp */
  ESI = (ESP);
  /* 112480d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112480d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112480d7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112480da push eax */
  push32((uint32_t)(EAX));
  /* 112480db call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x112480e1u);
  /* 112480e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112480e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112480e6 call 0x1124a480 */
  push32(0x112480ebu); f_1124a480();
  /* 112480eb mov esi, esp */
  ESI = (ESP);
  /* 112480ed push 0 */
  push32((uint32_t)(0x0u));
  /* 112480ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112480f2 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 112480f5 push edx */
  push32((uint32_t)(EDX));
  /* 112480f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112480f9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112480fc push eax */
  push32((uint32_t)(EAX));
  /* 112480fd mov cl, byte ptr [0x112813a8] */
  CL = (r8((uint32_t)(0x112813a8)));
  /* 11248103 push ecx */
  push32((uint32_t)(ECX));
  /* 11248104 call dword ptr [0x112835a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a0))), 0x1124810au);
  /* 1124810a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124810d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124810f call 0x1124a480 */
  push32(0x11248114u); f_1124a480();
L_11248114:;
  /* 11248114 jmp 0x112481c4 */
  goto L_112481c4;
L_11248119:;
  /* 11248119 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124811c call 0x112410a5 */
  push32(0x11248121u); f_112410a5();
  /* 11248121 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11248126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11248128 jne 0x1124816d */
  if (!C.zf) goto L_1124816d;
  /* 1124812a mov esi, esp */
  ESI = (ESP);
  /* 1124812c push 0 */
  push32((uint32_t)(0x0u));
  /* 1124812e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248131 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248134 push edx */
  push32((uint32_t)(EDX));
  /* 11248135 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x1124813bu);
  /* 1124813b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124813e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248140 call 0x1124a480 */
  push32(0x11248145u); f_1124a480();
  /* 11248145 mov esi, esp */
  ESI = (ESP);
  /* 11248147 push 0 */
  push32((uint32_t)(0x0u));
  /* 11248149 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124814c mov cl, byte ptr [eax + 8] */
  CL = (r8((uint32_t)(EAX + 0x8)));
  /* 1124814f push ecx */
  push32((uint32_t)(ECX));
  /* 11248150 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248153 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248156 push edx */
  push32((uint32_t)(EDX));
  /* 11248157 mov al, byte ptr [0x112813a8] */
  AL = (r8((uint32_t)(0x112813a8)));
  /* 1124815c push eax */
  push32((uint32_t)(EAX));
  /* 1124815d call dword ptr [0x112835a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a0))), 0x11248163u);
  /* 11248163 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248166 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248168 call 0x1124a480 */
  push32(0x1124816du); f_1124a480();
L_1124816d:;
  /* 1124816d jmp 0x112481c4 */
  goto L_112481c4;
L_1124816f:;
  /* 1124816f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248172 call 0x112410a5 */
  push32(0x11248177u); f_112410a5();
  /* 11248177 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124817c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124817e jne 0x112481c4 */
  if (!C.zf) goto L_112481c4;
  /* 11248180 mov esi, esp */
  ESI = (ESP);
  /* 11248182 push 0 */
  push32((uint32_t)(0x0u));
  /* 11248184 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248187 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124818a push ecx */
  push32((uint32_t)(ECX));
  /* 1124818b call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x11248191u);
  /* 11248191 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248194 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248196 call 0x1124a480 */
  push32(0x1124819bu); f_1124a480();
  /* 1124819b mov esi, esp */
  ESI = (ESP);
  /* 1124819d push 0 */
  push32((uint32_t)(0x0u));
  /* 1124819f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112481a2 mov al, byte ptr [edx + 8] */
  AL = (r8((uint32_t)(EDX + 0x8)));
  /* 112481a5 push eax */
  push32((uint32_t)(EAX));
  /* 112481a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112481a9 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112481ac push ecx */
  push32((uint32_t)(ECX));
  /* 112481ad mov dl, byte ptr [0x112813a8] */
  DL = (r8((uint32_t)(0x112813a8)));
  /* 112481b3 push edx */
  push32((uint32_t)(EDX));
  /* 112481b4 call dword ptr [0x112835b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b4))), 0x112481bau);
  /* 112481ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112481bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112481bf call 0x1124a480 */
  push32(0x112481c4u); f_1124a480();
L_112481c4:;
  /* 112481c4 pop edi */
  EDI = (pop32());
  /* 112481c5 pop esi */
  ESI = (pop32());
  /* 112481c6 pop ebx */
  EBX = (pop32());
  /* 112481c7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112481ca cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112481cc call 0x1124a480 */
  push32(0x112481d1u); f_1124a480();
  /* 112481d1 mov esp, ebp */
  ESP = (EBP);
  /* 112481d3 pop ebp */
  EBP = (pop32());
  /* 112481d4 ret  */
  ESPCHK(0x11248020u, _esp0);
  ESP += 4; return;
}

/* FUN_10008250 @ 0x11248250 (235 bytes, 78 insns) */
void f_11248250(void) {
  FTRACE(0x11248250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248250 push ebp */
  push32((uint32_t)(EBP));
  /* 11248251 mov ebp, esp */
  EBP = (ESP);
  /* 11248253 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248259 push ebx */
  push32((uint32_t)(EBX));
  /* 1124825a push esi */
  push32((uint32_t)(ESI));
  /* 1124825b push edi */
  push32((uint32_t)(EDI));
  /* 1124825c push ecx */
  push32((uint32_t)(ECX));
  /* 1124825d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11248263 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11248268 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 1124826d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1124826f pop ecx */
  ECX = (pop32());
  /* 11248270 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11248273 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 1124827a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11248281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248284 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248287 mov esi, esp */
  ESI = (ESP);
  /* 11248289 push eax */
  push32((uint32_t)(EAX));
  /* 1124828a call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x11248290u);
  /* 11248290 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248293 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248295 call 0x1124a480 */
  push32(0x1124829au); f_1124a480();
  /* 1124829a mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 1124829d cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112482a1 jle 0x11248314 */
  if ((C.zf||C.sf!=C.of)) goto L_11248314;
  /* 112482a3 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 112482aa mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 112482b1 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 112482b8 jmp 0x112482c3 */
  goto L_112482c3;
L_112482ba:;
  /* 112482ba mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 112482bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112482c0 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_112482c3:;
  /* 112482c3 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 112482c6 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112482c9 jge 0x11248300 */
  if ((C.sf==C.of)) goto L_11248300;
  /* 112482cb mov esi, esp */
  ESI = (ESP);
  /* 112482cd lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 112482d0 push eax */
  push32((uint32_t)(EAX));
  /* 112482d1 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 112482d4 push ecx */
  push32((uint32_t)(ECX));
  /* 112482d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112482d8 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112482db push edx */
  push32((uint32_t)(EDX));
  /* 112482dc call dword ptr [0x112835c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c4))), 0x112482e2u);
  /* 112482e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112482e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112482e7 call 0x1124a480 */
  push32(0x112482ecu); f_1124a480();
  /* 112482ec mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 112482ef add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112482f2 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 112482f5 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 112482f8 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112482fb mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 112482fe jmp 0x112482ba */
  goto L_112482ba;
L_11248300:;
  /* 11248300 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11248303 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11248304 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11248307 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 1124830a mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 1124830d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1124830e idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11248311 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11248314:;
  /* 11248314 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11248317 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1124831a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1124831c mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1124831f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11248322 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11248325 pop edi */
  EDI = (pop32());
  /* 11248326 pop esi */
  ESI = (pop32());
  /* 11248327 pop ebx */
  EBX = (pop32());
  /* 11248328 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124832e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248330 call 0x1124a480 */
  push32(0x11248335u); f_1124a480();
  /* 11248335 mov esp, ebp */
  ESP = (EBP);
  /* 11248337 pop ebp */
  EBP = (pop32());
  /* 11248338 ret 4 */
  ESPCHK(0x11248250u, _esp0);
  ESP += 8; return;
}

/* FUN_10008380 @ 0x11248380 (120 bytes, 47 insns) */
void f_11248380(void) {
  FTRACE(0x11248380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248380 push ebp */
  push32((uint32_t)(EBP));
  /* 11248381 mov ebp, esp */
  EBP = (ESP);
  /* 11248383 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248386 push ebx */
  push32((uint32_t)(EBX));
  /* 11248387 push esi */
  push32((uint32_t)(ESI));
  /* 11248388 push edi */
  push32((uint32_t)(EDI));
  /* 11248389 push ecx */
  push32((uint32_t)(ECX));
  /* 1124838a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1124838d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11248392 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11248397 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11248399 pop ecx */
  ECX = (pop32());
  /* 1124839a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124839d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 112483a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112483a4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112483a7 mov esi, esp */
  ESI = (ESP);
  /* 112483a9 push eax */
  push32((uint32_t)(EAX));
  /* 112483aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112483ad add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112483b0 push ecx */
  push32((uint32_t)(ECX));
  /* 112483b1 call dword ptr [0x112835ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835ac))), 0x112483b7u);
  /* 112483b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112483ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112483bc call 0x1124a480 */
  push32(0x112483c1u); f_1124a480();
  /* 112483c1 mov esi, eax */
  ESI = (EAX);
  /* 112483c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112483c6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112483c9 mov edi, esp */
  EDI = (ESP);
  /* 112483cb push edx */
  push32((uint32_t)(EDX));
  /* 112483cc call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x112483d2u);
  /* 112483d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112483d5 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112483d7 call 0x1124a480 */
  push32(0x112483dcu); f_1124a480();
  /* 112483dc cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112483de jne 0x112483e4 */
  if (!C.zf) goto L_112483e4;
  /* 112483e0 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_112483e4:;
  /* 112483e4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 112483e7 pop edi */
  EDI = (pop32());
  /* 112483e8 pop esi */
  ESI = (pop32());
  /* 112483e9 pop ebx */
  EBX = (pop32());
  /* 112483ea add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112483ed cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112483ef call 0x1124a480 */
  push32(0x112483f4u); f_1124a480();
  /* 112483f4 mov esp, ebp */
  ESP = (EBP);
  /* 112483f6 pop ebp */
  EBP = (pop32());
  /* 112483f7 ret  */
  ESPCHK(0x11248380u, _esp0);
  ESP += 4; return;
}

/* FUN_10008420 @ 0x11248420 (86 bytes, 35 insns) */
void f_11248420(void) {
  FTRACE(0x11248420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248420 push ebp */
  push32((uint32_t)(EBP));
  /* 11248421 mov ebp, esp */
  EBP = (ESP);
  /* 11248423 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248426 push ebx */
  push32((uint32_t)(EBX));
  /* 11248427 push esi */
  push32((uint32_t)(ESI));
  /* 11248428 push edi */
  push32((uint32_t)(EDI));
  /* 11248429 push ecx */
  push32((uint32_t)(ECX));
  /* 1124842a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1124842d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11248432 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11248437 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11248439 pop ecx */
  ECX = (pop32());
  /* 1124843a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124843d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11248441 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248444 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248447 mov esi, esp */
  ESI = (ESP);
  /* 11248449 push eax */
  push32((uint32_t)(EAX));
  /* 1124844a call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x11248450u);
  /* 11248450 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248453 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248455 call 0x1124a480 */
  push32(0x1124845au); f_1124a480();
  /* 1124845a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124845c jle 0x11248462 */
  if ((C.zf||C.sf!=C.of)) goto L_11248462;
  /* 1124845e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11248462:;
  /* 11248462 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11248465 pop edi */
  EDI = (pop32());
  /* 11248466 pop esi */
  ESI = (pop32());
  /* 11248467 pop ebx */
  EBX = (pop32());
  /* 11248468 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124846b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124846d call 0x1124a480 */
  push32(0x11248472u); f_1124a480();
  /* 11248472 mov esp, ebp */
  ESP = (EBP);
  /* 11248474 pop ebp */
  EBP = (pop32());
  /* 11248475 ret  */
  ESPCHK(0x11248420u, _esp0);
  ESP += 4; return;
}

/* FUN_10008490 @ 0x11248490 (42 bytes, 21 insns) */
void f_11248490(void) {
  FTRACE(0x11248490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248490 push ebp */
  push32((uint32_t)(EBP));
  /* 11248491 mov ebp, esp */
  EBP = (ESP);
  /* 11248493 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248496 push ebx */
  push32((uint32_t)(EBX));
  /* 11248497 push esi */
  push32((uint32_t)(ESI));
  /* 11248498 push edi */
  push32((uint32_t)(EDI));
  /* 11248499 push ecx */
  push32((uint32_t)(ECX));
  /* 1124849a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124849d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112484a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112484a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112484a9 pop ecx */
  ECX = (pop32());
  /* 112484aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112484ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112484b0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112484b3 pop edi */
  EDI = (pop32());
  /* 112484b4 pop esi */
  ESI = (pop32());
  /* 112484b5 pop ebx */
  EBX = (pop32());
  /* 112484b6 mov esp, ebp */
  ESP = (EBP);
  /* 112484b8 pop ebp */
  EBP = (pop32());
  /* 112484b9 ret  */
  ESPCHK(0x11248490u, _esp0);
  ESP += 4; return;
}

/* FUN_100084d0 @ 0x112484d0 (77 bytes, 32 insns) */
void f_112484d0(void) {
  FTRACE(0x112484d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112484d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112484d1 mov ebp, esp */
  EBP = (ESP);
  /* 112484d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112484d6 push ebx */
  push32((uint32_t)(EBX));
  /* 112484d7 push esi */
  push32((uint32_t)(ESI));
  /* 112484d8 push edi */
  push32((uint32_t)(EDI));
  /* 112484d9 push ecx */
  push32((uint32_t)(ECX));
  /* 112484da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112484dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112484e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112484e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112484e9 pop ecx */
  ECX = (pop32());
  /* 112484ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112484ed mov esi, esp */
  ESI = (ESP);
  /* 112484ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112484f2 push eax */
  push32((uint32_t)(EAX));
  /* 112484f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112484f6 add ecx, 0xd */
  { uint32_t _a=(ECX),_b=(0xdu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112484f9 push ecx */
  push32((uint32_t)(ECX));
  /* 112484fa call dword ptr [0x1128358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128358c))), 0x11248500u);
  /* 11248500 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248503 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248505 call 0x1124a480 */
  push32(0x1124850au); f_1124a480();
  /* 1124850a pop edi */
  EDI = (pop32());
  /* 1124850b pop esi */
  ESI = (pop32());
  /* 1124850c pop ebx */
  EBX = (pop32());
  /* 1124850d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248510 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248512 call 0x1124a480 */
  push32(0x11248517u); f_1124a480();
  /* 11248517 mov esp, ebp */
  ESP = (EBP);
  /* 11248519 pop ebp */
  EBP = (pop32());
  /* 1124851a ret 4 */
  ESPCHK(0x112484d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008530 @ 0x11248530 (413 bytes, 143 insns) */
void f_11248530(void) {
  FTRACE(0x11248530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248530 push ebp */
  push32((uint32_t)(EBP));
  /* 11248531 mov ebp, esp */
  EBP = (ESP);
  /* 11248533 sub esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248536 push ebx */
  push32((uint32_t)(EBX));
  /* 11248537 push esi */
  push32((uint32_t)(ESI));
  /* 11248538 push edi */
  push32((uint32_t)(EDI));
  /* 11248539 push ecx */
  push32((uint32_t)(ECX));
  /* 1124853a lea edi, [ebp - 0x54] */
  EDI = ((uint32_t)(EBP + -0x54));
  /* 1124853d mov ecx, 0x15 */
  ECX = (0x15u);
  /* 11248542 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11248547 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11248549 pop ecx */
  ECX = (pop32());
  /* 1124854a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124854d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248550 call 0x112410dc */
  push32(0x11248555u); f_112410dc();
  /* 11248555 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124855a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124855c je 0x112486bc */
  if (C.zf) goto L_112486bc;
  /* 11248562 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248565 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11248567 mov cl, byte ptr [eax + 0xc] */
  CL = (r8((uint32_t)(EAX + 0xc)));
  /* 1124856a cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124856d jne 0x11248618 */
  if (!C.zf) goto L_11248618;
  /* 11248573 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11248578 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1124857b push edx */
  push32((uint32_t)(EDX));
  /* 1124857c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124857f call 0x112410c3 */
  push32(0x11248584u); f_112410c3();
  /* 11248584 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11248587 push ecx */
  push32((uint32_t)(ECX));
  /* 11248588 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1124858a push edx */
  push32((uint32_t)(EDX));
  /* 1124858b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124858e add eax, 0x15 */
  { uint32_t _a=(EAX),_b=(0x15u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248591 push eax */
  push32((uint32_t)(EAX));
  /* 11248592 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248595 call 0x112412e4 */
  push32(0x1124859au); f_112412e4();
  /* 1124859a mov esi, esp */
  ESI = (ESP);
  /* 1124859c push 0 */
  push32((uint32_t)(0x0u));
  /* 1124859e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112485a1 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112485a4 push ecx */
  push32((uint32_t)(ECX));
  /* 112485a5 call dword ptr [0x11283594] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283594))), 0x112485abu);
  /* 112485ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112485ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112485b0 call 0x1124a480 */
  push32(0x112485b5u); f_1124a480();
  /* 112485b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112485b8 jge 0x112485c3 */
  if ((C.sf==C.of)) goto L_112485c3;
  /* 112485ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112485bd mov byte ptr [edx + 0xc], 2 */
  w8((uint32_t)(EDX + 0xc), (0x2u));
  /* 112485c1 jmp 0x11248618 */
  goto L_11248618;
L_112485c3:;
  /* 112485c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112485c6 call 0x1124118b */
  push32(0x112485cbu); f_1124118b();
  /* 112485cb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112485d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112485d2 jne 0x11248618 */
  if (!C.zf) goto L_11248618;
  /* 112485d4 mov esi, esp */
  ESI = (ESP);
  /* 112485d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112485d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112485db add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112485de push eax */
  push32((uint32_t)(EAX));
  /* 112485df call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x112485e5u);
  /* 112485e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112485e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112485ea call 0x1124a480 */
  push32(0x112485efu); f_1124a480();
  /* 112485ef mov esi, esp */
  ESI = (ESP);
  /* 112485f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112485f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112485f6 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 112485f9 push edx */
  push32((uint32_t)(EDX));
  /* 112485fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112485fd add eax, 0x1d */
  { uint32_t _a=(EAX),_b=(0x1du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248600 push eax */
  push32((uint32_t)(EAX));
  /* 11248601 mov cl, byte ptr [0x1127ed60] */
  CL = (r8((uint32_t)(0x1127ed60)));
  /* 11248607 push ecx */
  push32((uint32_t)(ECX));
  /* 11248608 call dword ptr [0x112835b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b4))), 0x1124860eu);
  /* 1124860e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248611 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248613 call 0x1124a480 */
  push32(0x11248618u); f_1124a480();
L_11248618:;
  /* 11248618 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124861b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124861d mov al, byte ptr [edx + 0xc] */
  AL = (r8((uint32_t)(EDX + 0xc)));
  /* 11248620 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248623 jne 0x112486bc */
  if (!C.zf) goto L_112486bc;
  /* 11248629 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 1124862e lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11248631 push ecx */
  push32((uint32_t)(ECX));
  /* 11248632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248635 call 0x112410c3 */
  push32(0x1124863au); f_112410c3();
  /* 1124863a mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1124863d push edx */
  push32((uint32_t)(EDX));
  /* 1124863e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11248640 push eax */
  push32((uint32_t)(EAX));
  /* 11248641 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248644 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248647 push ecx */
  push32((uint32_t)(ECX));
  /* 11248648 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124864b call 0x112412e4 */
  push32(0x11248650u); f_112412e4();
  /* 11248650 mov esi, esp */
  ESI = (ESP);
  /* 11248652 push 0 */
  push32((uint32_t)(0x0u));
  /* 11248654 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248657 add edx, 0x15 */
  { uint32_t _a=(EDX),_b=(0x15u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124865a push edx */
  push32((uint32_t)(EDX));
  /* 1124865b call dword ptr [0x11283594] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283594))), 0x11248661u);
  /* 11248661 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248664 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248666 call 0x1124a480 */
  push32(0x1124866bu); f_1124a480();
  /* 1124866b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124866e jge 0x112486b5 */
  if ((C.sf==C.of)) goto L_112486b5;
  /* 11248670 mov esi, esp */
  ESI = (ESP);
  /* 11248672 push 0 */
  push32((uint32_t)(0x0u));
  /* 11248674 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248677 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124867a push eax */
  push32((uint32_t)(EAX));
  /* 1124867b call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x11248681u);
  /* 11248681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248684 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248686 call 0x1124a480 */
  push32(0x1124868bu); f_1124a480();
  /* 1124868b mov esi, esp */
  ESI = (ESP);
  /* 1124868d push 0 */
  push32((uint32_t)(0x0u));
  /* 1124868f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248692 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11248695 push edx */
  push32((uint32_t)(EDX));
  /* 11248696 mov eax, dword ptr [0x112813b0] */
  EAX = (r32((uint32_t)(0x112813b0)));
  /* 1124869b push eax */
  push32((uint32_t)(EAX));
  /* 1124869c mov cl, byte ptr [0x1127ed60] */
  CL = (r8((uint32_t)(0x1127ed60)));
  /* 112486a2 push ecx */
  push32((uint32_t)(ECX));
  /* 112486a3 call dword ptr [0x112835b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b4))), 0x112486a9u);
  /* 112486a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112486ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112486ae call 0x1124a480 */
  push32(0x112486b3u); f_1124a480();
  /* 112486b3 jmp 0x112486bc */
  goto L_112486bc;
L_112486b5:;
  /* 112486b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112486b8 mov byte ptr [edx + 0xc], 1 */
  w8((uint32_t)(EDX + 0xc), (0x1u));
L_112486bc:;
  /* 112486bc pop edi */
  EDI = (pop32());
  /* 112486bd pop esi */
  ESI = (pop32());
  /* 112486be pop ebx */
  EBX = (pop32());
  /* 112486bf add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112486c2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112486c4 call 0x1124a480 */
  push32(0x112486c9u); f_1124a480();
  /* 112486c9 mov esp, ebp */
  ESP = (EBP);
  /* 112486cb pop ebp */
  EBP = (pop32());
  /* 112486cc ret  */
  ESPCHK(0x11248530u, _esp0);
  ESP += 4; return;
}

/* FUN_10008740 @ 0x11248740 (311 bytes, 104 insns) */
void f_11248740(void) {
  FTRACE(0x11248740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248740 push ebp */
  push32((uint32_t)(EBP));
  /* 11248741 mov ebp, esp */
  EBP = (ESP);
  /* 11248743 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248749 push ebx */
  push32((uint32_t)(EBX));
  /* 1124874a push esi */
  push32((uint32_t)(ESI));
  /* 1124874b push edi */
  push32((uint32_t)(EDI));
  /* 1124874c push ecx */
  push32((uint32_t)(ECX));
  /* 1124874d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11248753 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11248758 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 1124875d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1124875f pop ecx */
  ECX = (pop32());
  /* 11248760 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11248763 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11248766 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11248769 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124876c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1124876f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11248772 push edx */
  push32((uint32_t)(EDX));
  /* 11248773 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248776 call 0x112410c3 */
  push32(0x1124877bu); f_112410c3();
  /* 1124877b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1124877d mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11248780 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11248783 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11248786 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11248789 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1124878c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124878f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11248792 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11248795 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248798 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1124879b fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 1124879e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 112487a1 sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112487a4 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 112487a7 fild dword ptr [ebp - 0x38] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 112487aa fdivp st(1) */
  FPU_ST(1) = FPU_ST(1) / FPU_ST(0);
  (void)fpu_pop();
  /* 112487ac sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112487af fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 112487b2 call 0x1124a634 */
  push32(0x112487b7u); f_1124a634();
  /* 112487b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112487ba fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
  /* 112487bd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 112487c0 sub ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112487c3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112487c5 jge 0x112487d3 */
  if ((C.sf==C.of)) goto L_112487d3;
  /* 112487c7 fld qword ptr [0x1127b040] */
  fpu_push(rf64((uint32_t)(0x1127b040)));
  /* 112487cd fadd qword ptr [ebp - 0x24] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + -0x24)));
  /* 112487d0 fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
L_112487d3:;
  /* 112487d3 fld qword ptr [ebp - 0x24] */
  fpu_push(rf64((uint32_t)(EBP + -0x24)));
  /* 112487d6 fmul qword ptr [0x1127b030] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x1127b030)));
  /* 112487dc fdiv qword ptr [0x1127b020] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(0x1127b020)));
  /* 112487e2 call 0x1124a76c */
  push32(0x112487e7u); f_1124a76c();
  /* 112487e7 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 112487ea fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 112487ed fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
  /* 112487f0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 112487f3 push edx */
  push32((uint32_t)(EDX));
  /* 112487f4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 112487f7 push eax */
  push32((uint32_t)(EAX));
  /* 112487f8 call 0x1124a584 */
  push32(0x112487fdu); f_1124a584();
  /* 112487fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248800 fmul qword ptr [ebp - 0x40] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x40)));
  /* 11248803 fiadd dword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0x8)));
  /* 11248806 call 0x1124a76c */
  push32(0x1124880bu); f_1124a76c();
  /* 1124880b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1124880e fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 11248811 fstp qword ptr [ebp - 0x48] */
  wf64((uint32_t)(EBP + -0x48), FPU_ST(0));
  (void)fpu_pop();
  /* 11248814 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11248817 push ecx */
  push32((uint32_t)(ECX));
  /* 11248818 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1124881b push edx */
  push32((uint32_t)(EDX));
  /* 1124881c call 0x1124a4d4 */
  push32(0x11248821u); f_1124a4d4();
  /* 11248821 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248824 fmul qword ptr [ebp - 0x48] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x48)));
  /* 11248827 fiadd dword ptr [ebp - 0xc] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0xc)));
  /* 1124882a call 0x1124a76c */
  push32(0x1124882fu); f_1124a76c();
  /* 1124882f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11248832 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11248834 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11248837 push eax */
  push32((uint32_t)(EAX));
  /* 11248838 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1124883b push ecx */
  push32((uint32_t)(ECX));
  /* 1124883c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124883f add edx, 0x1d */
  { uint32_t _a=(EDX),_b=(0x1du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248842 push edx */
  push32((uint32_t)(EDX));
  /* 11248843 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248846 call 0x112412e4 */
  push32(0x1124884bu); f_112412e4();
  /* 1124884b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1124884e add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248853 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248856 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11248859 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124885c call 0x1124122b */
  push32(0x11248861u); f_1124122b();
  /* 11248861 pop edi */
  EDI = (pop32());
  /* 11248862 pop esi */
  ESI = (pop32());
  /* 11248863 pop ebx */
  EBX = (pop32());
  /* 11248864 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124886a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124886c call 0x1124a480 */
  push32(0x11248871u); f_1124a480();
  /* 11248871 mov esp, ebp */
  ESP = (EBP);
  /* 11248873 pop ebp */
  EBP = (pop32());
  /* 11248874 ret 0xc */
  ESPCHK(0x11248740u, _esp0);
  ESP += 16; return;
}

/* FUN_100088d0 @ 0x112488d0 (198 bytes, 71 insns) */
void f_112488d0(void) {
  FTRACE(0x112488d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112488d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112488d1 mov ebp, esp */
  EBP = (ESP);
  /* 112488d3 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112488d6 push ebx */
  push32((uint32_t)(EBX));
  /* 112488d7 push esi */
  push32((uint32_t)(ESI));
  /* 112488d8 push edi */
  push32((uint32_t)(EDI));
  /* 112488d9 push ecx */
  push32((uint32_t)(ECX));
  /* 112488da lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 112488dd mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 112488e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112488e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112488e9 pop ecx */
  ECX = (pop32());
  /* 112488ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112488ed mov esi, esp */
  ESI = (ESP);
  /* 112488ef lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 112488f2 push eax */
  push32((uint32_t)(EAX));
  /* 112488f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112488f5 mov ecx, dword ptr [0x112813b4] */
  ECX = (r32((uint32_t)(0x112813b4)));
  /* 112488fb push ecx */
  push32((uint32_t)(ECX));
  /* 112488fc call dword ptr [0x112835c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c4))), 0x11248902u);
  /* 11248902 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248905 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248907 call 0x1124a480 */
  push32(0x1124890cu); f_1124a480();
  /* 1124890c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124890f mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11248912 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11248915 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11248918 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124891b mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 1124891e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11248921 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11248924 mov esi, esp */
  ESI = (ESP);
  /* 11248926 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11248929 push eax */
  push32((uint32_t)(EAX));
  /* 1124892a call dword ptr [0x11283500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283500))), 0x11248930u);
  /* 11248930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248933 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248935 call 0x1124a480 */
  push32(0x1124893au); f_1124a480();
  /* 1124893a mov esi, esp */
  ESI = (ESP);
  /* 1124893c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124893f push ecx */
  push32((uint32_t)(ECX));
  /* 11248940 mov edx, dword ptr [0x112813b4] */
  EDX = (r32((uint32_t)(0x112813b4)));
  /* 11248946 push edx */
  push32((uint32_t)(EDX));
  /* 11248947 mov eax, dword ptr [0x112813b0] */
  EAX = (r32((uint32_t)(0x112813b0)));
  /* 1124894c push eax */
  push32((uint32_t)(EAX));
  /* 1124894d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11248950 push ecx */
  push32((uint32_t)(ECX));
  /* 11248951 call dword ptr [0x112834f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834f8))), 0x11248957u);
  /* 11248957 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124895a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124895c call 0x1124a480 */
  push32(0x11248961u); f_1124a480();
  /* 11248961 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11248964 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11248967 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1124896a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1124896d mov esi, esp */
  ESI = (ESP);
  /* 1124896f lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11248972 push ecx */
  push32((uint32_t)(ECX));
  /* 11248973 call dword ptr [0x11283500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283500))), 0x11248979u);
  /* 11248979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124897c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124897e call 0x1124a480 */
  push32(0x11248983u); f_1124a480();
  /* 11248983 pop edi */
  EDI = (pop32());
  /* 11248984 pop esi */
  ESI = (pop32());
  /* 11248985 pop ebx */
  EBX = (pop32());
  /* 11248986 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248989 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124898b call 0x1124a480 */
  push32(0x11248990u); f_1124a480();
  /* 11248990 mov esp, ebp */
  ESP = (EBP);
  /* 11248992 pop ebp */
  EBP = (pop32());
  /* 11248993 ret 0x10 */
  ESPCHK(0x112488d0u, _esp0);
  ESP += 20; return;
}

/* FUN_100089d0 @ 0x112489d0 (120 bytes, 47 insns) */
void f_112489d0(void) {
  FTRACE(0x112489d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112489d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112489d1 mov ebp, esp */
  EBP = (ESP);
  /* 112489d3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112489d6 push ebx */
  push32((uint32_t)(EBX));
  /* 112489d7 push esi */
  push32((uint32_t)(ESI));
  /* 112489d8 push edi */
  push32((uint32_t)(EDI));
  /* 112489d9 push ecx */
  push32((uint32_t)(ECX));
  /* 112489da lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 112489dd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 112489e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112489e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112489e9 pop ecx */
  ECX = (pop32());
  /* 112489ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112489ed mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 112489f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112489f4 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112489f7 mov esi, esp */
  ESI = (ESP);
  /* 112489f9 push eax */
  push32((uint32_t)(EAX));
  /* 112489fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112489fd add ecx, 0x1d */
  { uint32_t _a=(ECX),_b=(0x1du),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248a00 push ecx */
  push32((uint32_t)(ECX));
  /* 11248a01 call dword ptr [0x112835ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835ac))), 0x11248a07u);
  /* 11248a07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248a0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248a0c call 0x1124a480 */
  push32(0x11248a11u); f_1124a480();
  /* 11248a11 mov esi, eax */
  ESI = (EAX);
  /* 11248a13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248a16 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248a19 mov edi, esp */
  EDI = (ESP);
  /* 11248a1b push edx */
  push32((uint32_t)(EDX));
  /* 11248a1c call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x11248a22u);
  /* 11248a22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248a25 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248a27 call 0x1124a480 */
  push32(0x11248a2cu); f_1124a480();
  /* 11248a2c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248a2e jne 0x11248a34 */
  if (!C.zf) goto L_11248a34;
  /* 11248a30 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11248a34:;
  /* 11248a34 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11248a37 pop edi */
  EDI = (pop32());
  /* 11248a38 pop esi */
  ESI = (pop32());
  /* 11248a39 pop ebx */
  EBX = (pop32());
  /* 11248a3a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248a3d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248a3f call 0x1124a480 */
  push32(0x11248a44u); f_1124a480();
  /* 11248a44 mov esp, ebp */
  ESP = (EBP);
  /* 11248a46 pop ebp */
  EBP = (pop32());
  /* 11248a47 ret  */
  ESPCHK(0x112489d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a70 @ 0x11248a70 (86 bytes, 35 insns) */
void f_11248a70(void) {
  FTRACE(0x11248a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11248a71 mov ebp, esp */
  EBP = (ESP);
  /* 11248a73 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248a76 push ebx */
  push32((uint32_t)(EBX));
  /* 11248a77 push esi */
  push32((uint32_t)(ESI));
  /* 11248a78 push edi */
  push32((uint32_t)(EDI));
  /* 11248a79 push ecx */
  push32((uint32_t)(ECX));
  /* 11248a7a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11248a7d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11248a82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11248a87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11248a89 pop ecx */
  ECX = (pop32());
  /* 11248a8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11248a8d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11248a91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248a94 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248a97 mov esi, esp */
  ESI = (ESP);
  /* 11248a99 push eax */
  push32((uint32_t)(EAX));
  /* 11248a9a call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x11248aa0u);
  /* 11248aa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248aa3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248aa5 call 0x1124a480 */
  push32(0x11248aaau); f_1124a480();
  /* 11248aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11248aac jle 0x11248ab2 */
  if ((C.zf||C.sf!=C.of)) goto L_11248ab2;
  /* 11248aae mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11248ab2:;
  /* 11248ab2 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11248ab5 pop edi */
  EDI = (pop32());
  /* 11248ab6 pop esi */
  ESI = (pop32());
  /* 11248ab7 pop ebx */
  EBX = (pop32());
  /* 11248ab8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248abb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248abd call 0x1124a480 */
  push32(0x11248ac2u); f_1124a480();
  /* 11248ac2 mov esp, ebp */
  ESP = (EBP);
  /* 11248ac4 pop ebp */
  EBP = (pop32());
  /* 11248ac5 ret  */
  ESPCHK(0x11248a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ae0 @ 0x11248ae0 (42 bytes, 21 insns) */
void f_11248ae0(void) {
  FTRACE(0x11248ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11248ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11248ae3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248ae6 push ebx */
  push32((uint32_t)(EBX));
  /* 11248ae7 push esi */
  push32((uint32_t)(ESI));
  /* 11248ae8 push edi */
  push32((uint32_t)(EDI));
  /* 11248ae9 push ecx */
  push32((uint32_t)(ECX));
  /* 11248aea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11248aed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11248af2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11248af7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11248af9 pop ecx */
  ECX = (pop32());
  /* 11248afa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11248afd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248b00 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248b03 pop edi */
  EDI = (pop32());
  /* 11248b04 pop esi */
  ESI = (pop32());
  /* 11248b05 pop ebx */
  EBX = (pop32());
  /* 11248b06 mov esp, ebp */
  ESP = (EBP);
  /* 11248b08 pop ebp */
  EBP = (pop32());
  /* 11248b09 ret  */
  ESPCHK(0x11248ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b20 @ 0x11248b20 (235 bytes, 78 insns) */
void f_11248b20(void) {
  FTRACE(0x11248b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11248b21 mov ebp, esp */
  EBP = (ESP);
  /* 11248b23 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248b29 push ebx */
  push32((uint32_t)(EBX));
  /* 11248b2a push esi */
  push32((uint32_t)(ESI));
  /* 11248b2b push edi */
  push32((uint32_t)(EDI));
  /* 11248b2c push ecx */
  push32((uint32_t)(ECX));
  /* 11248b2d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11248b33 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11248b38 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11248b3d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11248b3f pop ecx */
  ECX = (pop32());
  /* 11248b40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11248b43 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 11248b4a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11248b51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248b54 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248b57 mov esi, esp */
  ESI = (ESP);
  /* 11248b59 push eax */
  push32((uint32_t)(EAX));
  /* 11248b5a call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x11248b60u);
  /* 11248b60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248b63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248b65 call 0x1124a480 */
  push32(0x11248b6au); f_1124a480();
  /* 11248b6a mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11248b6d cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248b71 jle 0x11248be4 */
  if ((C.zf||C.sf!=C.of)) goto L_11248be4;
  /* 11248b73 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11248b7a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11248b81 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11248b88 jmp 0x11248b93 */
  goto L_11248b93;
L_11248b8a:;
  /* 11248b8a mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11248b8d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248b90 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11248b93:;
  /* 11248b93 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11248b96 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248b99 jge 0x11248bd0 */
  if ((C.sf==C.of)) goto L_11248bd0;
  /* 11248b9b mov esi, esp */
  ESI = (ESP);
  /* 11248b9d lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11248ba0 push eax */
  push32((uint32_t)(EAX));
  /* 11248ba1 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11248ba4 push ecx */
  push32((uint32_t)(ECX));
  /* 11248ba5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248ba8 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248bab push edx */
  push32((uint32_t)(EDX));
  /* 11248bac call dword ptr [0x112835c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c4))), 0x11248bb2u);
  /* 11248bb2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248bb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248bb7 call 0x1124a480 */
  push32(0x11248bbcu); f_1124a480();
  /* 11248bbc mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11248bbf add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248bc2 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11248bc5 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11248bc8 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248bcb mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11248bce jmp 0x11248b8a */
  goto L_11248b8a;
L_11248bd0:;
  /* 11248bd0 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11248bd3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11248bd4 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11248bd7 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11248bda mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11248bdd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11248bde idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11248be1 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11248be4:;
  /* 11248be4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11248be7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11248bea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11248bec mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11248bef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11248bf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11248bf5 pop edi */
  EDI = (pop32());
  /* 11248bf6 pop esi */
  ESI = (pop32());
  /* 11248bf7 pop ebx */
  EBX = (pop32());
  /* 11248bf8 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248bfe cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248c00 call 0x1124a480 */
  push32(0x11248c05u); f_1124a480();
  /* 11248c05 mov esp, ebp */
  ESP = (EBP);
  /* 11248c07 pop ebp */
  EBP = (pop32());
  /* 11248c08 ret 4 */
  ESPCHK(0x11248b20u, _esp0);
  ESP += 8; return;
}

/* FUN_10008c50 @ 0x11248c50 (250 bytes, 89 insns) */
void f_11248c50(void) {
  FTRACE(0x11248c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11248c51 mov ebp, esp */
  EBP = (ESP);
  /* 11248c53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248c56 push ebx */
  push32((uint32_t)(EBX));
  /* 11248c57 push esi */
  push32((uint32_t)(ESI));
  /* 11248c58 push edi */
  push32((uint32_t)(EDI));
  /* 11248c59 push ecx */
  push32((uint32_t)(ECX));
  /* 11248c5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11248c5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11248c62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11248c67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11248c69 pop ecx */
  ECX = (pop32());
  /* 11248c6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11248c6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248c70 call 0x11241118 */
  push32(0x11248c75u); f_11241118();
  /* 11248c75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11248c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11248c7c je 0x11248d39 */
  if (C.zf) goto L_11248d39;
  /* 11248c82 mov esi, esp */
  ESI = (ESP);
  /* 11248c84 mov eax, dword ptr [0x1127ed64] */
  EAX = (r32((uint32_t)(0x1127ed64)));
  /* 11248c89 push eax */
  push32((uint32_t)(EAX));
  /* 11248c8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248c8d push ecx */
  push32((uint32_t)(ECX));
  /* 11248c8e mov edx, dword ptr [0x112813b8] */
  EDX = (r32((uint32_t)(0x112813b8)));
  /* 11248c94 push edx */
  push32((uint32_t)(EDX));
  /* 11248c95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248c98 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248c9b push eax */
  push32((uint32_t)(EAX));
  /* 11248c9c call dword ptr [0x112834f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834f8))), 0x11248ca2u);
  /* 11248ca2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248ca5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248ca7 call 0x1124a480 */
  push32(0x11248cacu); f_1124a480();
  /* 11248cac mov esi, esp */
  ESI = (ESP);
  /* 11248cae push 0 */
  push32((uint32_t)(0x0u));
  /* 11248cb0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248cb3 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248cb6 push ecx */
  push32((uint32_t)(ECX));
  /* 11248cb7 call dword ptr [0x11283594] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283594))), 0x11248cbdu);
  /* 11248cbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248cc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248cc2 call 0x1124a480 */
  push32(0x11248cc7u); f_1124a480();
  /* 11248cc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11248cc9 jle 0x11248cec */
  if ((C.zf||C.sf!=C.of)) goto L_11248cec;
  /* 11248ccb mov esi, esp */
  ESI = (ESP);
  /* 11248ccd push 0 */
  push32((uint32_t)(0x0u));
  /* 11248ccf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248cd2 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248cd5 push edx */
  push32((uint32_t)(EDX));
  /* 11248cd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248cd9 push eax */
  push32((uint32_t)(EAX));
  /* 11248cda call dword ptr [0x112835b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b0))), 0x11248ce0u);
  /* 11248ce0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248ce3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248ce5 call 0x1124a480 */
  push32(0x11248ceau); f_1124a480();
  /* 11248cea jmp 0x11248d39 */
  goto L_11248d39;
L_11248cec:;
  /* 11248cec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248cef call 0x1124123f */
  push32(0x11248cf4u); f_1124123f();
  /* 11248cf4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11248cf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11248cfb jne 0x11248d39 */
  if (!C.zf) goto L_11248d39;
  /* 11248cfd mov esi, esp */
  ESI = (ESP);
  /* 11248cff push 0 */
  push32((uint32_t)(0x0u));
  /* 11248d01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248d04 push ecx */
  push32((uint32_t)(ECX));
  /* 11248d05 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x11248d0bu);
  /* 11248d0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248d0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248d10 call 0x1124a480 */
  push32(0x11248d15u); f_1124a480();
  /* 11248d15 mov esi, esp */
  ESI = (ESP);
  /* 11248d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11248d19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11248d1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248d1e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11248d21 push eax */
  push32((uint32_t)(EAX));
  /* 11248d22 mov cl, byte ptr [0x1127ed68] */
  CL = (r8((uint32_t)(0x1127ed68)));
  /* 11248d28 push ecx */
  push32((uint32_t)(ECX));
  /* 11248d29 call dword ptr [0x112835a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a0))), 0x11248d2fu);
  /* 11248d2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248d32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248d34 call 0x1124a480 */
  push32(0x11248d39u); f_1124a480();
L_11248d39:;
  /* 11248d39 pop edi */
  EDI = (pop32());
  /* 11248d3a pop esi */
  ESI = (pop32());
  /* 11248d3b pop ebx */
  EBX = (pop32());
  /* 11248d3c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248d3f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248d41 call 0x1124a480 */
  push32(0x11248d46u); f_1124a480();
  /* 11248d46 mov esp, ebp */
  ESP = (EBP);
  /* 11248d48 pop ebp */
  EBP = (pop32());
  /* 11248d49 ret  */
  ESPCHK(0x11248c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d90 @ 0x11248d90 (74 bytes, 31 insns) */
void f_11248d90(void) {
  FTRACE(0x11248d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11248d91 mov ebp, esp */
  EBP = (ESP);
  /* 11248d93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248d96 push ebx */
  push32((uint32_t)(EBX));
  /* 11248d97 push esi */
  push32((uint32_t)(ESI));
  /* 11248d98 push edi */
  push32((uint32_t)(EDI));
  /* 11248d99 push ecx */
  push32((uint32_t)(ECX));
  /* 11248d9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11248d9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11248da2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11248da7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11248da9 pop ecx */
  ECX = (pop32());
  /* 11248daa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11248dad mov esi, esp */
  ESI = (ESP);
  /* 11248daf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11248db2 push eax */
  push32((uint32_t)(EAX));
  /* 11248db3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248db6 push ecx */
  push32((uint32_t)(ECX));
  /* 11248db7 call dword ptr [0x1128358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128358c))), 0x11248dbdu);
  /* 11248dbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248dc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248dc2 call 0x1124a480 */
  push32(0x11248dc7u); f_1124a480();
  /* 11248dc7 pop edi */
  EDI = (pop32());
  /* 11248dc8 pop esi */
  ESI = (pop32());
  /* 11248dc9 pop ebx */
  EBX = (pop32());
  /* 11248dca add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248dcd cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248dcf call 0x1124a480 */
  push32(0x11248dd4u); f_1124a480();
  /* 11248dd4 mov esp, ebp */
  ESP = (EBP);
  /* 11248dd6 pop ebp */
  EBP = (pop32());
  /* 11248dd7 ret 4 */
  ESPCHK(0x11248d90u, _esp0);
  ESP += 8; return;
}

/* FUN_10008df0 @ 0x11248df0 (114 bytes, 45 insns) */
void f_11248df0(void) {
  FTRACE(0x11248df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11248df1 mov ebp, esp */
  EBP = (ESP);
  /* 11248df3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248df6 push ebx */
  push32((uint32_t)(EBX));
  /* 11248df7 push esi */
  push32((uint32_t)(ESI));
  /* 11248df8 push edi */
  push32((uint32_t)(EDI));
  /* 11248df9 push ecx */
  push32((uint32_t)(ECX));
  /* 11248dfa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11248dfd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11248e02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11248e07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11248e09 pop ecx */
  ECX = (pop32());
  /* 11248e0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11248e0d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11248e11 mov esi, esp */
  ESI = (ESP);
  /* 11248e13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248e16 push eax */
  push32((uint32_t)(EAX));
  /* 11248e17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248e1a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11248e1d push edx */
  push32((uint32_t)(EDX));
  /* 11248e1e call dword ptr [0x112835ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835ac))), 0x11248e24u);
  /* 11248e24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248e27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248e29 call 0x1124a480 */
  push32(0x11248e2eu); f_1124a480();
  /* 11248e2e mov esi, eax */
  ESI = (EAX);
  /* 11248e30 mov edi, esp */
  EDI = (ESP);
  /* 11248e32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248e35 push eax */
  push32((uint32_t)(EAX));
  /* 11248e36 call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x11248e3cu);
  /* 11248e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248e3f cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248e41 call 0x1124a480 */
  push32(0x11248e46u); f_1124a480();
  /* 11248e46 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248e48 jne 0x11248e4e */
  if (!C.zf) goto L_11248e4e;
  /* 11248e4a mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11248e4e:;
  /* 11248e4e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11248e51 pop edi */
  EDI = (pop32());
  /* 11248e52 pop esi */
  ESI = (pop32());
  /* 11248e53 pop ebx */
  EBX = (pop32());
  /* 11248e54 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248e57 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248e59 call 0x1124a480 */
  push32(0x11248e5eu); f_1124a480();
  /* 11248e5e mov esp, ebp */
  ESP = (EBP);
  /* 11248e60 pop ebp */
  EBP = (pop32());
  /* 11248e61 ret  */
  ESPCHK(0x11248df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e80 @ 0x11248e80 (83 bytes, 34 insns) */
void f_11248e80(void) {
  FTRACE(0x11248e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11248e81 mov ebp, esp */
  EBP = (ESP);
  /* 11248e83 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248e86 push ebx */
  push32((uint32_t)(EBX));
  /* 11248e87 push esi */
  push32((uint32_t)(ESI));
  /* 11248e88 push edi */
  push32((uint32_t)(EDI));
  /* 11248e89 push ecx */
  push32((uint32_t)(ECX));
  /* 11248e8a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11248e8d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11248e92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11248e97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11248e99 pop ecx */
  ECX = (pop32());
  /* 11248e9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11248e9d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11248ea1 mov esi, esp */
  ESI = (ESP);
  /* 11248ea3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248ea6 push eax */
  push32((uint32_t)(EAX));
  /* 11248ea7 call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x11248eadu);
  /* 11248ead add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248eb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248eb2 call 0x1124a480 */
  push32(0x11248eb7u); f_1124a480();
  /* 11248eb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11248eb9 jle 0x11248ebf */
  if ((C.zf||C.sf!=C.of)) goto L_11248ebf;
  /* 11248ebb mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11248ebf:;
  /* 11248ebf mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11248ec2 pop edi */
  EDI = (pop32());
  /* 11248ec3 pop esi */
  ESI = (pop32());
  /* 11248ec4 pop ebx */
  EBX = (pop32());
  /* 11248ec5 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248ec8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248eca call 0x1124a480 */
  push32(0x11248ecfu); f_1124a480();
  /* 11248ecf mov esp, ebp */
  ESP = (EBP);
  /* 11248ed1 pop ebp */
  EBP = (pop32());
  /* 11248ed2 ret  */
  ESPCHK(0x11248e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ef0 @ 0x11248ef0 (126 bytes, 48 insns) */
void f_11248ef0(void) {
  FTRACE(0x11248ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11248ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11248ef3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 11248ef7 push esi */
  push32((uint32_t)(ESI));
  /* 11248ef8 push edi */
  push32((uint32_t)(EDI));
  /* 11248ef9 push ecx */
  push32((uint32_t)(ECX));
  /* 11248efa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11248efd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11248f02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11248f07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11248f09 pop ecx */
  ECX = (pop32());
  /* 11248f0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11248f0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248f10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11248f13 mov dword ptr [eax + 6], ecx */
  w32((uint32_t)(EAX + 0x6), (ECX));
  /* 11248f16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248f19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11248f1c mov dword ptr [edx + 0xa], eax */
  w32((uint32_t)(EDX + 0xa), (EAX));
  /* 11248f1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11248f22 push ecx */
  push32((uint32_t)(ECX));
  /* 11248f23 call 0x112410d2 */
  push32(0x11248f28u); f_112410d2();
  /* 11248f28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248f2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248f2e mov byte ptr [edx + 1], al */
  w8((uint32_t)(EDX + 0x1), (AL));
  /* 11248f31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248f34 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11248f37 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11248f39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248f3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11248f3f mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11248f42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248f45 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248f48 mov esi, esp */
  ESI = (ESP);
  /* 11248f4a push ecx */
  push32((uint32_t)(ECX));
  /* 11248f4b call dword ptr [0x112835c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c0))), 0x11248f51u);
  /* 11248f51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248f54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248f56 call 0x1124a480 */
  push32(0x11248f5bu); f_1124a480();
  /* 11248f5b pop edi */
  EDI = (pop32());
  /* 11248f5c pop esi */
  ESI = (pop32());
  /* 11248f5d pop ebx */
  EBX = (pop32());
  /* 11248f5e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248f61 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248f63 call 0x1124a480 */
  push32(0x11248f68u); f_1124a480();
  /* 11248f68 mov esp, ebp */
  ESP = (EBP);
  /* 11248f6a pop ebp */
  EBP = (pop32());
  /* 11248f6b ret 0x10 */
  ESPCHK(0x11248ef0u, _esp0);
  ESP += 20; return;
}

/* FUN_10008f90 @ 0x11248f90 (136 bytes, 54 insns) */
void f_11248f90(void) {
  FTRACE(0x11248f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11248f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11248f91 mov ebp, esp */
  EBP = (ESP);
  /* 11248f93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11248f96 push ebx */
  push32((uint32_t)(EBX));
  /* 11248f97 push esi */
  push32((uint32_t)(ESI));
  /* 11248f98 push edi */
  push32((uint32_t)(EDI));
  /* 11248f99 push ecx */
  push32((uint32_t)(ECX));
  /* 11248f9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11248f9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11248fa2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11248fa7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11248fa9 pop ecx */
  ECX = (pop32());
  /* 11248faa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11248fad mov esi, esp */
  ESI = (ESP);
  /* 11248faf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11248fb2 push eax */
  push32((uint32_t)(EAX));
  /* 11248fb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248fb6 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248fb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11248fba call dword ptr [0x1128358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128358c))), 0x11248fc0u);
  /* 11248fc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248fc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248fc5 call 0x1124a480 */
  push32(0x11248fcau); f_1124a480();
  /* 11248fca mov esi, esp */
  ESI = (ESP);
  /* 11248fcc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11248fcf push edx */
  push32((uint32_t)(EDX));
  /* 11248fd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248fd3 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248fd6 push eax */
  push32((uint32_t)(EAX));
  /* 11248fd7 call dword ptr [0x1128357c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128357c))), 0x11248fddu);
  /* 11248fdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11248fe0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11248fe2 call 0x1124a480 */
  push32(0x11248fe7u); f_1124a480();
  /* 11248fe7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11248fea push ecx */
  push32((uint32_t)(ECX));
  /* 11248feb mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 11248fee push edx */
  push32((uint32_t)(EDX));
  /* 11248fef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248ff2 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248ff5 push eax */
  push32((uint32_t)(EAX));
  /* 11248ff6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11248ff9 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11248ffc push ecx */
  push32((uint32_t)(ECX));
  /* 11248ffd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249000 call 0x11241078 */
  push32(0x11249005u); f_11241078();
  /* 11249005 pop edi */
  EDI = (pop32());
  /* 11249006 pop esi */
  ESI = (pop32());
  /* 11249007 pop ebx */
  EBX = (pop32());
  /* 11249008 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124900b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124900d call 0x1124a480 */
  push32(0x11249012u); f_1124a480();
  /* 11249012 mov esp, ebp */
  ESP = (EBP);
  /* 11249014 pop ebp */
  EBP = (pop32());
  /* 11249015 ret 0x10 */
  ESPCHK(0x11248f90u, _esp0);
  ESP += 20; return;
}

/* FUN_10009040 @ 0x11249040 (150 bytes, 58 insns) */
void f_11249040(void) {
  FTRACE(0x11249040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249040 push ebp */
  push32((uint32_t)(EBP));
  /* 11249041 mov ebp, esp */
  EBP = (ESP);
  /* 11249043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249046 push ebx */
  push32((uint32_t)(EBX));
  /* 11249047 push esi */
  push32((uint32_t)(ESI));
  /* 11249048 push edi */
  push32((uint32_t)(EDI));
  /* 11249049 push ecx */
  push32((uint32_t)(ECX));
  /* 1124904a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124904d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249052 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249057 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249059 pop ecx */
  ECX = (pop32());
  /* 1124905a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124905d mov esi, esp */
  ESI = (ESP);
  /* 1124905f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11249062 push eax */
  push32((uint32_t)(EAX));
  /* 11249063 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249066 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11249069 push ecx */
  push32((uint32_t)(ECX));
  /* 1124906a call dword ptr [0x1128358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128358c))), 0x11249070u);
  /* 11249070 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249073 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249075 call 0x1124a480 */
  push32(0x1124907au); f_1124a480();
  /* 1124907a mov esi, esp */
  ESI = (ESP);
  /* 1124907c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11249081 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249084 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11249087 push edx */
  push32((uint32_t)(EDX));
  /* 11249088 mov eax, dword ptr [0x112813bc] */
  EAX = (r32((uint32_t)(0x112813bc)));
  /* 1124908d push eax */
  push32((uint32_t)(EAX));
  /* 1124908e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249091 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11249094 push ecx */
  push32((uint32_t)(ECX));
  /* 11249095 call dword ptr [0x112834f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834f8))), 0x1124909bu);
  /* 1124909b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124909e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112490a0 call 0x1124a480 */
  push32(0x112490a5u); f_1124a480();
  /* 112490a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112490a8 push edx */
  push32((uint32_t)(EDX));
  /* 112490a9 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 112490ac push eax */
  push32((uint32_t)(EAX));
  /* 112490ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112490b0 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112490b3 push ecx */
  push32((uint32_t)(ECX));
  /* 112490b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112490b7 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112490ba push edx */
  push32((uint32_t)(EDX));
  /* 112490bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112490be call 0x11241078 */
  push32(0x112490c3u); f_11241078();
  /* 112490c3 pop edi */
  EDI = (pop32());
  /* 112490c4 pop esi */
  ESI = (pop32());
  /* 112490c5 pop ebx */
  EBX = (pop32());
  /* 112490c6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112490c9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112490cb call 0x1124a480 */
  push32(0x112490d0u); f_1124a480();
  /* 112490d0 mov esp, ebp */
  ESP = (EBP);
  /* 112490d2 pop ebp */
  EBP = (pop32());
  /* 112490d3 ret 0xc */
  ESPCHK(0x11249040u, _esp0);
  ESP += 16; return;
}

/* FUN_10009100 @ 0x11249100 (255 bytes, 92 insns) */
void f_11249100(void) {
  FTRACE(0x11249100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249100 push ebp */
  push32((uint32_t)(EBP));
  /* 11249101 mov ebp, esp */
  EBP = (ESP);
  /* 11249103 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249106 push ebx */
  push32((uint32_t)(EBX));
  /* 11249107 push esi */
  push32((uint32_t)(ESI));
  /* 11249108 push edi */
  push32((uint32_t)(EDI));
  /* 11249109 push ecx */
  push32((uint32_t)(ECX));
  /* 1124910a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124910d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249112 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249117 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249119 pop ecx */
  ECX = (pop32());
  /* 1124911a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124911d mov esi, esp */
  ESI = (ESP);
  /* 1124911f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249122 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11249125 push ecx */
  push32((uint32_t)(ECX));
  /* 11249126 call dword ptr [0x11283504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283504))), 0x1124912cu);
  /* 1124912c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124912f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249131 call 0x1124a480 */
  push32(0x11249136u); f_1124a480();
  /* 11249136 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124913b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124913d je 0x11249185 */
  if (C.zf) goto L_11249185;
  /* 1124913f mov esi, esp */
  ESI = (ESP);
  /* 11249141 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249144 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11249146 push eax */
  push32((uint32_t)(EAX));
  /* 11249147 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124914a mov edx, dword ptr [ecx + 0xa] */
  EDX = (r32((uint32_t)(ECX + 0xa)));
  /* 1124914d push edx */
  push32((uint32_t)(EDX));
  /* 1124914e call dword ptr [0x11283594] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283594))), 0x11249154u);
  /* 11249154 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249157 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249159 call 0x1124a480 */
  push32(0x1124915eu); f_1124a480();
  /* 1124915e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11249160 jle 0x11249185 */
  if ((C.zf||C.sf!=C.of)) goto L_11249185;
  /* 11249162 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249165 call 0x112412d0 */
  push32(0x1124916au); f_112412d0();
  /* 1124916a mov esi, esp */
  ESI = (ESP);
  /* 1124916c push 0 */
  push32((uint32_t)(0x0u));
  /* 1124916e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249171 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11249174 push ecx */
  push32((uint32_t)(ECX));
  /* 11249175 call dword ptr [0x11283530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283530))), 0x1124917bu);
  /* 1124917b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124917e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249180 call 0x1124a480 */
  push32(0x11249185u); f_1124a480();
L_11249185:;
  /* 11249185 mov esi, esp */
  ESI = (ESP);
  /* 11249187 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124918a mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 1124918d push eax */
  push32((uint32_t)(EAX));
  /* 1124918e call dword ptr [0x11283504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283504))), 0x11249194u);
  /* 11249194 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249197 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249199 call 0x1124a480 */
  push32(0x1124919eu); f_1124a480();
  /* 1124919e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112491a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112491a5 jne 0x112491ee */
  if (!C.zf) goto L_112491ee;
  /* 112491a7 mov esi, esp */
  ESI = (ESP);
  /* 112491a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112491ac mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112491ae push edx */
  push32((uint32_t)(EDX));
  /* 112491af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112491b2 mov ecx, dword ptr [eax + 0xa] */
  ECX = (r32((uint32_t)(EAX + 0xa)));
  /* 112491b5 push ecx */
  push32((uint32_t)(ECX));
  /* 112491b6 call dword ptr [0x11283594] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283594))), 0x112491bcu);
  /* 112491bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112491bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112491c1 call 0x1124a480 */
  push32(0x112491c6u); f_1124a480();
  /* 112491c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112491c9 jge 0x112491ee */
  if ((C.sf==C.of)) goto L_112491ee;
  /* 112491cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112491ce call 0x112410e6 */
  push32(0x112491d3u); f_112410e6();
  /* 112491d3 mov esi, esp */
  ESI = (ESP);
  /* 112491d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 112491d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112491da mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 112491dd push eax */
  push32((uint32_t)(EAX));
  /* 112491de call dword ptr [0x11283530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283530))), 0x112491e4u);
  /* 112491e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112491e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112491e9 call 0x1124a480 */
  push32(0x112491eeu); f_1124a480();
L_112491ee:;
  /* 112491ee pop edi */
  EDI = (pop32());
  /* 112491ef pop esi */
  ESI = (pop32());
  /* 112491f0 pop ebx */
  EBX = (pop32());
  /* 112491f1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112491f4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112491f6 call 0x1124a480 */
  push32(0x112491fbu); f_1124a480();
  /* 112491fb mov esp, ebp */
  ESP = (EBP);
  /* 112491fd pop ebp */
  EBP = (pop32());
  /* 112491fe ret  */
  ESPCHK(0x11249100u, _esp0);
  ESP += 4; return;
}

/* FUN_10009240 @ 0x11249240 (158 bytes, 60 insns) */
void f_11249240(void) {
  FTRACE(0x11249240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249240 push ebp */
  push32((uint32_t)(EBP));
  /* 11249241 mov ebp, esp */
  EBP = (ESP);
  /* 11249243 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249246 push ebx */
  push32((uint32_t)(EBX));
  /* 11249247 push esi */
  push32((uint32_t)(ESI));
  /* 11249248 push edi */
  push32((uint32_t)(EDI));
  /* 11249249 push ecx */
  push32((uint32_t)(ECX));
  /* 1124924a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124924d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249252 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249257 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249259 pop ecx */
  ECX = (pop32());
  /* 1124925a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124925d mov esi, esp */
  ESI = (ESP);
  /* 1124925f push 0 */
  push32((uint32_t)(0x0u));
  /* 11249261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249264 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11249267 push eax */
  push32((uint32_t)(EAX));
  /* 11249268 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124926b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1124926d push edx */
  push32((uint32_t)(EDX));
  /* 1124926e call dword ptr [0x112835c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c8))), 0x11249274u);
  /* 11249274 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249277 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249279 call 0x1124a480 */
  push32(0x1124927eu); f_1124a480();
  /* 1124927e mov esi, esp */
  ESI = (ESP);
  /* 11249280 push 0 */
  push32((uint32_t)(0x0u));
  /* 11249282 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249285 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11249288 push ecx */
  push32((uint32_t)(ECX));
  /* 11249289 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x1124928fu);
  /* 1124928f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249292 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249294 call 0x1124a480 */
  push32(0x11249299u); f_1124a480();
  /* 11249299 mov esi, esp */
  ESI = (ESP);
  /* 1124929b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124929e mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 112492a1 push eax */
  push32((uint32_t)(EAX));
  /* 112492a2 call dword ptr [0x112834d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834d4))), 0x112492a8u);
  /* 112492a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112492ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112492ad call 0x1124a480 */
  push32(0x112492b2u); f_1124a480();
  /* 112492b2 mov esi, esp */
  ESI = (ESP);
  /* 112492b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112492b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112492b9 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112492bc push ecx */
  push32((uint32_t)(ECX));
  /* 112492bd call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x112492c3u);
  /* 112492c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112492c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112492c8 call 0x1124a480 */
  push32(0x112492cdu); f_1124a480();
  /* 112492cd pop edi */
  EDI = (pop32());
  /* 112492ce pop esi */
  ESI = (pop32());
  /* 112492cf pop ebx */
  EBX = (pop32());
  /* 112492d0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112492d3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112492d5 call 0x1124a480 */
  push32(0x112492dau); f_1124a480();
  /* 112492da mov esp, ebp */
  ESP = (EBP);
  /* 112492dc pop ebp */
  EBP = (pop32());
  /* 112492dd ret  */
  ESPCHK(0x11249240u, _esp0);
  ESP += 4; return;
}

/* FUN_10009310 @ 0x11249310 (158 bytes, 60 insns) */
void f_11249310(void) {
  FTRACE(0x11249310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249310 push ebp */
  push32((uint32_t)(EBP));
  /* 11249311 mov ebp, esp */
  EBP = (ESP);
  /* 11249313 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249316 push ebx */
  push32((uint32_t)(EBX));
  /* 11249317 push esi */
  push32((uint32_t)(ESI));
  /* 11249318 push edi */
  push32((uint32_t)(EDI));
  /* 11249319 push ecx */
  push32((uint32_t)(ECX));
  /* 1124931a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124931d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249322 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249327 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249329 pop ecx */
  ECX = (pop32());
  /* 1124932a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124932d mov esi, esp */
  ESI = (ESP);
  /* 1124932f push 0 */
  push32((uint32_t)(0x0u));
  /* 11249331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249334 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11249337 push eax */
  push32((uint32_t)(EAX));
  /* 11249338 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124933b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1124933d push edx */
  push32((uint32_t)(EDX));
  /* 1124933e call dword ptr [0x112835c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c8))), 0x11249344u);
  /* 11249344 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249347 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249349 call 0x1124a480 */
  push32(0x1124934eu); f_1124a480();
  /* 1124934e mov esi, esp */
  ESI = (ESP);
  /* 11249350 push 0 */
  push32((uint32_t)(0x0u));
  /* 11249352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249355 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11249358 push ecx */
  push32((uint32_t)(ECX));
  /* 11249359 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x1124935fu);
  /* 1124935f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249362 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249364 call 0x1124a480 */
  push32(0x11249369u); f_1124a480();
  /* 11249369 mov esi, esp */
  ESI = (ESP);
  /* 1124936b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124936e mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11249371 push eax */
  push32((uint32_t)(EAX));
  /* 11249372 call dword ptr [0x112834dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834dc))), 0x11249378u);
  /* 11249378 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124937b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124937d call 0x1124a480 */
  push32(0x11249382u); f_1124a480();
  /* 11249382 mov esi, esp */
  ESI = (ESP);
  /* 11249384 push 0 */
  push32((uint32_t)(0x0u));
  /* 11249386 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249389 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124938c push ecx */
  push32((uint32_t)(ECX));
  /* 1124938d call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x11249393u);
  /* 11249393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249396 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249398 call 0x1124a480 */
  push32(0x1124939du); f_1124a480();
  /* 1124939d pop edi */
  EDI = (pop32());
  /* 1124939e pop esi */
  ESI = (pop32());
  /* 1124939f pop ebx */
  EBX = (pop32());
  /* 112493a0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112493a3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112493a5 call 0x1124a480 */
  push32(0x112493aau); f_1124a480();
  /* 112493aa mov esp, ebp */
  ESP = (EBP);
  /* 112493ac pop ebp */
  EBP = (pop32());
  /* 112493ad ret  */
  ESPCHK(0x11249310u, _esp0);
  ESP += 4; return;
}

/* FUN_100093e0 @ 0x112493e0 (49 bytes, 22 insns) */
void f_112493e0(void) {
  FTRACE(0x112493e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112493e0 push ebp */
  push32((uint32_t)(EBP));
  /* 112493e1 mov ebp, esp */
  EBP = (ESP);
  /* 112493e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112493e6 push ebx */
  push32((uint32_t)(EBX));
  /* 112493e7 push esi */
  push32((uint32_t)(ESI));
  /* 112493e8 push edi */
  push32((uint32_t)(EDI));
  /* 112493e9 push ecx */
  push32((uint32_t)(ECX));
  /* 112493ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112493ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112493f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112493f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112493f9 pop ecx */
  ECX = (pop32());
  /* 112493fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112493fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249400 mov dword ptr [eax + 0x2c], 0xffffffff */
  w32((uint32_t)(EAX + 0x2c), (0xffffffffu));
  /* 11249407 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124940a pop edi */
  EDI = (pop32());
  /* 1124940b pop esi */
  ESI = (pop32());
  /* 1124940c pop ebx */
  EBX = (pop32());
  /* 1124940d mov esp, ebp */
  ESP = (EBP);
  /* 1124940f pop ebp */
  EBP = (pop32());
  /* 11249410 ret  */
  ESPCHK(0x112493e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009420 @ 0x11249420 (77 bytes, 32 insns) */
void f_11249420(void) {
  FTRACE(0x11249420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249420 push ebp */
  push32((uint32_t)(EBP));
  /* 11249421 mov ebp, esp */
  EBP = (ESP);
  /* 11249423 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249426 push ebx */
  push32((uint32_t)(EBX));
  /* 11249427 push esi */
  push32((uint32_t)(ESI));
  /* 11249428 push edi */
  push32((uint32_t)(EDI));
  /* 11249429 push ecx */
  push32((uint32_t)(ECX));
  /* 1124942a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124942d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249432 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249437 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249439 pop ecx */
  ECX = (pop32());
  /* 1124943a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124943d mov esi, esp */
  ESI = (ESP);
  /* 1124943f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11249442 push eax */
  push32((uint32_t)(EAX));
  /* 11249443 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249446 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11249449 push ecx */
  push32((uint32_t)(ECX));
  /* 1124944a call dword ptr [0x1128358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128358c))), 0x11249450u);
  /* 11249450 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249453 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249455 call 0x1124a480 */
  push32(0x1124945au); f_1124a480();
  /* 1124945a pop edi */
  EDI = (pop32());
  /* 1124945b pop esi */
  ESI = (pop32());
  /* 1124945c pop ebx */
  EBX = (pop32());
  /* 1124945d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249460 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249462 call 0x1124a480 */
  push32(0x11249467u); f_1124a480();
  /* 11249467 mov esp, ebp */
  ESP = (EBP);
  /* 11249469 pop ebp */
  EBP = (pop32());
  /* 1124946a ret 4 */
  ESPCHK(0x11249420u, _esp0);
  ESP += 8; return;
}

/* FUN_10009480 @ 0x11249480 (102 bytes, 40 insns) */
void f_11249480(void) {
  FTRACE(0x11249480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249480 push ebp */
  push32((uint32_t)(EBP));
  /* 11249481 mov ebp, esp */
  EBP = (ESP);
  /* 11249483 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249486 push ebx */
  push32((uint32_t)(EBX));
  /* 11249487 push esi */
  push32((uint32_t)(ESI));
  /* 11249488 push edi */
  push32((uint32_t)(EDI));
  /* 11249489 push ecx */
  push32((uint32_t)(ECX));
  /* 1124948a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124948d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249492 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249497 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249499 pop ecx */
  ECX = (pop32());
  /* 1124949a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124949d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112494a0 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112494a3 mov esi, esp */
  ESI = (ESP);
  /* 112494a5 push eax */
  push32((uint32_t)(EAX));
  /* 112494a6 call dword ptr [0x112835c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c0))), 0x112494acu);
  /* 112494ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112494af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112494b1 call 0x1124a480 */
  push32(0x112494b6u); f_1124a480();
  /* 112494b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112494b9 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112494bc mov esi, esp */
  ESI = (ESP);
  /* 112494be push ecx */
  push32((uint32_t)(ECX));
  /* 112494bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112494c2 push edx */
  push32((uint32_t)(EDX));
  /* 112494c3 call dword ptr [0x11283540] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283540))), 0x112494c9u);
  /* 112494c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112494cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112494ce call 0x1124a480 */
  push32(0x112494d3u); f_1124a480();
  /* 112494d3 pop edi */
  EDI = (pop32());
  /* 112494d4 pop esi */
  ESI = (pop32());
  /* 112494d5 pop ebx */
  EBX = (pop32());
  /* 112494d6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112494d9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112494db call 0x1124a480 */
  push32(0x112494e0u); f_1124a480();
  /* 112494e0 mov esp, ebp */
  ESP = (EBP);
  /* 112494e2 pop ebp */
  EBP = (pop32());
  /* 112494e3 ret 4 */
  ESPCHK(0x11249480u, _esp0);
  ESP += 8; return;
}

/* FUN_10009500 @ 0x11249500 (184 bytes, 69 insns) */
void f_11249500(void) {
  FTRACE(0x11249500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249500 push ebp */
  push32((uint32_t)(EBP));
  /* 11249501 mov ebp, esp */
  EBP = (ESP);
  /* 11249503 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249506 push ebx */
  push32((uint32_t)(EBX));
  /* 11249507 push esi */
  push32((uint32_t)(ESI));
  /* 11249508 push edi */
  push32((uint32_t)(EDI));
  /* 11249509 push ecx */
  push32((uint32_t)(ECX));
  /* 1124950a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 1124950d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11249512 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249517 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249519 pop ecx */
  ECX = (pop32());
  /* 1124951a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124951d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11249521 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249524 cmp dword ptr [eax + 0x2c], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x2c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249528 jne 0x11249557 */
  if (!C.zf) goto L_11249557;
  /* 1124952a mov esi, esp */
  ESI = (ESP);
  /* 1124952c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124952f push ecx */
  push32((uint32_t)(ECX));
  /* 11249530 push 0 */
  push32((uint32_t)(0x0u));
  /* 11249532 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249535 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11249538 push edx */
  push32((uint32_t)(EDX));
  /* 11249539 call dword ptr [0x112835c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c4))), 0x1124953fu);
  /* 1124953f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249542 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249544 call 0x1124a480 */
  push32(0x11249549u); f_1124a480();
  /* 11249549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124954c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124954e mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11249551 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249554 mov dword ptr [edx + 0x2c], ecx */
  w32((uint32_t)(EDX + 0x2c), (ECX));
L_11249557:;
  /* 11249557 mov esi, esp */
  ESI = (ESP);
  /* 11249559 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124955c push eax */
  push32((uint32_t)(EAX));
  /* 1124955d call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x11249563u);
  /* 11249563 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249566 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249568 call 0x1124a480 */
  push32(0x1124956du); f_1124a480();
  /* 1124956d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249570 jne 0x112495a2 */
  if (!C.zf) goto L_112495a2;
  /* 11249572 mov esi, esp */
  ESI = (ESP);
  /* 11249574 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249577 push ecx */
  push32((uint32_t)(ECX));
  /* 11249578 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124957a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124957d push edx */
  push32((uint32_t)(EDX));
  /* 1124957e call dword ptr [0x112835c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c4))), 0x11249584u);
  /* 11249584 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249587 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249589 call 0x1124a480 */
  push32(0x1124958eu); f_1124a480();
  /* 1124958e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249591 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11249593 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11249596 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249599 cmp ecx, dword ptr [edx + 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124959c jne 0x112495a2 */
  if (!C.zf) goto L_112495a2;
  /* 1124959e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_112495a2:;
  /* 112495a2 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 112495a5 pop edi */
  EDI = (pop32());
  /* 112495a6 pop esi */
  ESI = (pop32());
  /* 112495a7 pop ebx */
  EBX = (pop32());
  /* 112495a8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112495ab cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112495ad call 0x1124a480 */
  push32(0x112495b2u); f_1124a480();
  /* 112495b2 mov esp, ebp */
  ESP = (EBP);
  /* 112495b4 pop ebp */
  EBP = (pop32());
  /* 112495b5 ret 4 */
  ESPCHK(0x11249500u, _esp0);
  ESP += 8; return;
}

/* FUN_100095f0 @ 0x112495f0 (110 bytes, 43 insns) */
void f_112495f0(void) {
  FTRACE(0x112495f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112495f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112495f1 mov ebp, esp */
  EBP = (ESP);
  /* 112495f3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112495f6 push ebx */
  push32((uint32_t)(EBX));
  /* 112495f7 push esi */
  push32((uint32_t)(ESI));
  /* 112495f8 push edi */
  push32((uint32_t)(EDI));
  /* 112495f9 push ecx */
  push32((uint32_t)(ECX));
  /* 112495fa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 112495fd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11249602 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249607 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249609 pop ecx */
  ECX = (pop32());
  /* 1124960a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124960d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11249611 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11249614 push eax */
  push32((uint32_t)(EAX));
  /* 11249615 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249618 call 0x1124100a */
  push32(0x1124961du); f_1124100a();
  /* 1124961d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11249622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11249624 je 0x11249648 */
  if (C.zf) goto L_11249648;
  /* 11249626 mov esi, esp */
  ESI = (ESP);
  /* 11249628 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124962b push ecx */
  push32((uint32_t)(ECX));
  /* 1124962c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124962f push edx */
  push32((uint32_t)(EDX));
  /* 11249630 call dword ptr [0x112835ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835ac))), 0x11249636u);
  /* 11249636 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249639 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124963b call 0x1124a480 */
  push32(0x11249640u); f_1124a480();
  /* 11249640 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11249642 jle 0x11249648 */
  if ((C.zf||C.sf!=C.of)) goto L_11249648;
  /* 11249644 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11249648:;
  /* 11249648 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1124964b pop edi */
  EDI = (pop32());
  /* 1124964c pop esi */
  ESI = (pop32());
  /* 1124964d pop ebx */
  EBX = (pop32());
  /* 1124964e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249651 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249653 call 0x1124a480 */
  push32(0x11249658u); f_1124a480();
  /* 11249658 mov esp, ebp */
  ESP = (EBP);
  /* 1124965a pop ebp */
  EBP = (pop32());
  /* 1124965b ret 8 */
  ESPCHK(0x112495f0u, _esp0);
  ESP += 12; return;
}

/* FUN_10009680 @ 0x11249680 (42 bytes, 21 insns) */
void f_11249680(void) {
  FTRACE(0x11249680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249680 push ebp */
  push32((uint32_t)(EBP));
  /* 11249681 mov ebp, esp */
  EBP = (ESP);
  /* 11249683 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249686 push ebx */
  push32((uint32_t)(EBX));
  /* 11249687 push esi */
  push32((uint32_t)(ESI));
  /* 11249688 push edi */
  push32((uint32_t)(EDI));
  /* 11249689 push ecx */
  push32((uint32_t)(ECX));
  /* 1124968a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124968d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249692 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249697 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249699 pop ecx */
  ECX = (pop32());
  /* 1124969a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124969d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112496a0 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112496a3 pop edi */
  EDI = (pop32());
  /* 112496a4 pop esi */
  ESI = (pop32());
  /* 112496a5 pop ebx */
  EBX = (pop32());
  /* 112496a6 mov esp, ebp */
  ESP = (EBP);
  /* 112496a8 pop ebp */
  EBP = (pop32());
  /* 112496a9 ret  */
  ESPCHK(0x11249680u, _esp0);
  ESP += 4; return;
}

/* FUN_100096c0 @ 0x112496c0 (155 bytes, 58 insns) */
void f_112496c0(void) {
  FTRACE(0x112496c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112496c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112496c1 mov ebp, esp */
  EBP = (ESP);
  /* 112496c3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112496c6 push ebx */
  push32((uint32_t)(EBX));
  /* 112496c7 push esi */
  push32((uint32_t)(ESI));
  /* 112496c8 push edi */
  push32((uint32_t)(EDI));
  /* 112496c9 push ecx */
  push32((uint32_t)(ECX));
  /* 112496ca lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 112496cd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 112496d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112496d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112496d9 pop ecx */
  ECX = (pop32());
  /* 112496da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112496dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112496e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112496e3 mov dword ptr [eax + 0x45], ecx */
  w32((uint32_t)(EAX + 0x45), (ECX));
  /* 112496e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112496e9 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 112496ec mov byte ptr [edx + 0x38], al */
  w8((uint32_t)(EDX + 0x38), (AL));
  /* 112496ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112496f2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112496f5 mov dword ptr [ecx + 0x39], edx */
  w32((uint32_t)(ECX + 0x39), (EDX));
  /* 112496f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112496fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 112496fe mov dword ptr [eax + 0x3d], ecx */
  w32((uint32_t)(EAX + 0x3d), (ECX));
  /* 11249701 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249704 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11249707 mov dword ptr [edx + 0x41], eax */
  w32((uint32_t)(EDX + 0x41), (EAX));
  /* 1124970a mov esi, esp */
  ESI = (ESP);
  /* 1124970c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11249711 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249714 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 11249717 push edx */
  push32((uint32_t)(EDX));
  /* 11249718 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1124971b push eax */
  push32((uint32_t)(EAX));
  /* 1124971c call dword ptr [0x112835bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835bc))), 0x11249722u);
  /* 11249722 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249725 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249727 call 0x1124a480 */
  push32(0x1124972cu); f_1124a480();
  /* 1124972c mov esi, esp */
  ESI = (ESP);
  /* 1124972e push 0 */
  push32((uint32_t)(0x0u));
  /* 11249730 push 0 */
  push32((uint32_t)(0x0u));
  /* 11249732 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11249735 push ecx */
  push32((uint32_t)(ECX));
  /* 11249736 push 0 */
  push32((uint32_t)(0x0u));
  /* 11249738 call dword ptr [0x112835b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b4))), 0x1124973eu);
  /* 1124973e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249741 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249743 call 0x1124a480 */
  push32(0x11249748u); f_1124a480();
  /* 11249748 pop edi */
  EDI = (pop32());
  /* 11249749 pop esi */
  ESI = (pop32());
  /* 1124974a pop ebx */
  EBX = (pop32());
  /* 1124974b add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124974e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249750 call 0x1124a480 */
  push32(0x11249755u); f_1124a480();
  /* 11249755 mov esp, ebp */
  ESP = (EBP);
  /* 11249757 pop ebp */
  EBP = (pop32());
  /* 11249758 ret 0x14 */
  ESPCHK(0x112496c0u, _esp0);
  ESP += 24; return;
}

/* FUN_10009790 @ 0x11249790 (252 bytes, 91 insns) */
void f_11249790(void) {
  FTRACE(0x11249790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249790 push ebp */
  push32((uint32_t)(EBP));
  /* 11249791 mov ebp, esp */
  EBP = (ESP);
  /* 11249793 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249796 push ebx */
  push32((uint32_t)(EBX));
  /* 11249797 push esi */
  push32((uint32_t)(ESI));
  /* 11249798 push edi */
  push32((uint32_t)(EDI));
  /* 11249799 push ecx */
  push32((uint32_t)(ECX));
  /* 1124979a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 1124979d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 112497a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112497a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112497a9 pop ecx */
  ECX = (pop32());
  /* 112497aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112497ad mov esi, esp */
  ESI = (ESP);
  /* 112497af push 0 */
  push32((uint32_t)(0x0u));
  /* 112497b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112497b4 mov ecx, dword ptr [eax + 0x45] */
  ECX = (r32((uint32_t)(EAX + 0x45)));
  /* 112497b7 push ecx */
  push32((uint32_t)(ECX));
  /* 112497b8 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x112497beu);
  /* 112497be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112497c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112497c3 call 0x1124a480 */
  push32(0x112497c8u); f_1124a480();
  /* 112497c8 mov esi, esp */
  ESI = (ESP);
  /* 112497ca push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 112497cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112497d2 mov eax, dword ptr [edx + 0x45] */
  EAX = (r32((uint32_t)(EDX + 0x45)));
  /* 112497d5 push eax */
  push32((uint32_t)(EAX));
  /* 112497d6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 112497d9 push ecx */
  push32((uint32_t)(ECX));
  /* 112497da call dword ptr [0x112835bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835bc))), 0x112497e0u);
  /* 112497e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112497e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112497e5 call 0x1124a480 */
  push32(0x112497eau); f_1124a480();
  /* 112497ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112497ed cmp dword ptr [edx + 0x39], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x39))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112497f1 je 0x11249802 */
  if (C.zf) goto L_11249802;
  /* 112497f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112497f6 mov cx, word ptr [ebp - 0xc] */
  CX = (r16((uint32_t)(EBP + -0xc)));
  /* 112497fa add cx, word ptr [eax + 0x39] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EAX + 0x39))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 112497fe mov word ptr [ebp - 0xc], cx */
  w16((uint32_t)(EBP + -0xc), (CX));
L_11249802:;
  /* 11249802 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249805 cmp dword ptr [edx + 0x3d], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x3d))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249809 je 0x11249816 */
  if (C.zf) goto L_11249816;
  /* 1124980b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124980e mov cx, word ptr [eax + 0x3d] */
  CX = (r16((uint32_t)(EAX + 0x3d)));
  /* 11249812 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11249816:;
  /* 11249816 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249819 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124981b mov al, byte ptr [edx + 0x38] */
  AL = (r8((uint32_t)(EDX + 0x38)));
  /* 1124981e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11249820 jne 0x11249843 */
  if (!C.zf) goto L_11249843;
  /* 11249822 mov esi, esp */
  ESI = (ESP);
  /* 11249824 push 0 */
  push32((uint32_t)(0x0u));
  /* 11249826 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249829 mov dl, byte ptr [ecx + 0x41] */
  DL = (r8((uint32_t)(ECX + 0x41)));
  /* 1124982c push edx */
  push32((uint32_t)(EDX));
  /* 1124982d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11249830 push eax */
  push32((uint32_t)(EAX));
  /* 11249831 push 3 */
  push32((uint32_t)(0x3u));
  /* 11249833 call dword ptr [0x112835b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b4))), 0x11249839u);
  /* 11249839 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124983c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124983e call 0x1124a480 */
  push32(0x11249843u); f_1124a480();
L_11249843:;
  /* 11249843 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249846 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11249848 mov dl, byte ptr [ecx + 0x38] */
  DL = (r8((uint32_t)(ECX + 0x38)));
  /* 1124984b cmp edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124984e jne 0x11249871 */
  if (!C.zf) goto L_11249871;
  /* 11249850 mov esi, esp */
  ESI = (ESP);
  /* 11249852 push 0 */
  push32((uint32_t)(0x0u));
  /* 11249854 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249857 mov cl, byte ptr [eax + 0x41] */
  CL = (r8((uint32_t)(EAX + 0x41)));
  /* 1124985a push ecx */
  push32((uint32_t)(ECX));
  /* 1124985b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1124985e push edx */
  push32((uint32_t)(EDX));
  /* 1124985f push 3 */
  push32((uint32_t)(0x3u));
  /* 11249861 call dword ptr [0x112835a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a0))), 0x11249867u);
  /* 11249867 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124986a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124986c call 0x1124a480 */
  push32(0x11249871u); f_1124a480();
L_11249871:;
  /* 11249871 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249874 mov dword ptr [eax + 0x45], 0 */
  w32((uint32_t)(EAX + 0x45), (0x0u));
  /* 1124987b pop edi */
  EDI = (pop32());
  /* 1124987c pop esi */
  ESI = (pop32());
  /* 1124987d pop ebx */
  EBX = (pop32());
  /* 1124987e add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249881 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249883 call 0x1124a480 */
  push32(0x11249888u); f_1124a480();
  /* 11249888 mov esp, ebp */
  ESP = (EBP);
  /* 1124988a pop ebp */
  EBP = (pop32());
  /* 1124988b ret  */
  ESPCHK(0x11249790u, _esp0);
  ESP += 4; return;
}

/* FUN_100098d0 @ 0x112498d0 (143 bytes, 53 insns) */
void f_112498d0(void) {
  FTRACE(0x112498d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112498d0 push ebp */
  push32((uint32_t)(EBP));
  /* 112498d1 mov ebp, esp */
  EBP = (ESP);
  /* 112498d3 sub esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112498d6 push ebx */
  push32((uint32_t)(EBX));
  /* 112498d7 push esi */
  push32((uint32_t)(ESI));
  /* 112498d8 push edi */
  push32((uint32_t)(EDI));
  /* 112498d9 push ecx */
  push32((uint32_t)(ECX));
  /* 112498da lea edi, [ebp - 0x50] */
  EDI = ((uint32_t)(EBP + -0x50));
  /* 112498dd mov ecx, 0x14 */
  ECX = (0x14u);
  /* 112498e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112498e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112498e9 pop ecx */
  ECX = (pop32());
  /* 112498ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112498ed mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 112498f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112498f4 cmp dword ptr [eax + 0x45], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x45))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112498f8 je 0x1124994b */
  if (C.zf) goto L_1124994b;
  /* 112498fa mov esi, esp */
  ESI = (ESP);
  /* 112498fc push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11249901 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249904 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 11249907 push edx */
  push32((uint32_t)(EDX));
  /* 11249908 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1124990b push eax */
  push32((uint32_t)(EAX));
  /* 1124990c call dword ptr [0x112835bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835bc))), 0x11249912u);
  /* 11249912 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249915 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249917 call 0x1124a480 */
  push32(0x1124991cu); f_1124a480();
  /* 1124991c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124991f call 0x11241258 */
  push32(0x11249924u); f_11241258();
  /* 11249924 mov esi, esp */
  ESI = (ESP);
  /* 11249926 push eax */
  push32((uint32_t)(EAX));
  /* 11249927 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 1124992a push ecx */
  push32((uint32_t)(ECX));
  /* 1124992b call dword ptr [0x112835ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835ac))), 0x11249931u);
  /* 11249931 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249934 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249936 call 0x1124a480 */
  push32(0x1124993bu); f_1124a480();
  /* 1124993b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124993d jle 0x1124994b */
  if ((C.zf||C.sf!=C.of)) goto L_1124994b;
  /* 1124993f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249942 call 0x112410a0 */
  push32(0x11249947u); f_112410a0();
  /* 11249947 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_1124994b:;
  /* 1124994b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1124994e pop edi */
  EDI = (pop32());
  /* 1124994f pop esi */
  ESI = (pop32());
  /* 11249950 pop ebx */
  EBX = (pop32());
  /* 11249951 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249954 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249956 call 0x1124a480 */
  push32(0x1124995bu); f_1124a480();
  /* 1124995b mov esp, ebp */
  ESP = (EBP);
  /* 1124995d pop ebp */
  EBP = (pop32());
  /* 1124995e ret  */
  ESPCHK(0x112498d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009990 @ 0x11249990 (39 bytes, 20 insns) */
void f_11249990(void) {
  FTRACE(0x11249990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249990 push ebp */
  push32((uint32_t)(EBP));
  /* 11249991 mov ebp, esp */
  EBP = (ESP);
  /* 11249993 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249996 push ebx */
  push32((uint32_t)(EBX));
  /* 11249997 push esi */
  push32((uint32_t)(ESI));
  /* 11249998 push edi */
  push32((uint32_t)(EDI));
  /* 11249999 push ecx */
  push32((uint32_t)(ECX));
  /* 1124999a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124999d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112499a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112499a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112499a9 pop ecx */
  ECX = (pop32());
  /* 112499aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112499ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112499b0 pop edi */
  EDI = (pop32());
  /* 112499b1 pop esi */
  ESI = (pop32());
  /* 112499b2 pop ebx */
  EBX = (pop32());
  /* 112499b3 mov esp, ebp */
  ESP = (EBP);
  /* 112499b5 pop ebp */
  EBP = (pop32());
  /* 112499b6 ret  */
  ESPCHK(0x11249990u, _esp0);
  ESP += 4; return;
}

/* FUN_100099c0 @ 0x112499c0 (98 bytes, 39 insns) */
void f_112499c0(void) {
  FTRACE(0x112499c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112499c0 push ebp */
  push32((uint32_t)(EBP));
  /* 112499c1 mov ebp, esp */
  EBP = (ESP);
  /* 112499c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112499c6 push ebx */
  push32((uint32_t)(EBX));
  /* 112499c7 push esi */
  push32((uint32_t)(ESI));
  /* 112499c8 push edi */
  push32((uint32_t)(EDI));
  /* 112499c9 push ecx */
  push32((uint32_t)(ECX));
  /* 112499ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 112499cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 112499d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 112499d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112499d9 pop ecx */
  ECX = (pop32());
  /* 112499da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112499dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112499e0 call 0x112412ad */
  push32(0x112499e5u); f_112412ad();
  /* 112499e5 mov esi, esp */
  ESI = (ESP);
  /* 112499e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112499ea push eax */
  push32((uint32_t)(EAX));
  /* 112499eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112499ee mov dl, byte ptr [ecx + 0x3c] */
  DL = (r8((uint32_t)(ECX + 0x3c)));
  /* 112499f1 push edx */
  push32((uint32_t)(EDX));
  /* 112499f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112499f5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112499f8 push eax */
  push32((uint32_t)(EAX));
  /* 112499f9 call dword ptr [0x11283574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283574))), 0x112499ffu);
  /* 112499ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249a02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249a04 call 0x1124a480 */
  push32(0x11249a09u); f_1124a480();
  /* 11249a09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249a0c add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11249a0f pop edi */
  EDI = (pop32());
  /* 11249a10 pop esi */
  ESI = (pop32());
  /* 11249a11 pop ebx */
  EBX = (pop32());
  /* 11249a12 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249a15 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249a17 call 0x1124a480 */
  push32(0x11249a1cu); f_1124a480();
  /* 11249a1c mov esp, ebp */
  ESP = (EBP);
  /* 11249a1e pop ebp */
  EBP = (pop32());
  /* 11249a1f ret 4 */
  ESPCHK(0x112499c0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009a40 @ 0x11249a40 (59 bytes, 25 insns) */
void f_11249a40(void) {
  FTRACE(0x11249a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11249a41 mov ebp, esp */
  EBP = (ESP);
  /* 11249a43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249a46 push ebx */
  push32((uint32_t)(EBX));
  /* 11249a47 push esi */
  push32((uint32_t)(ESI));
  /* 11249a48 push edi */
  push32((uint32_t)(EDI));
  /* 11249a49 push ecx */
  push32((uint32_t)(ECX));
  /* 11249a4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11249a4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249a52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249a57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249a59 pop ecx */
  ECX = (pop32());
  /* 11249a5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11249a5d push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11249a62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249a65 call 0x11241113 */
  push32(0x11249a6au); f_11241113();
  /* 11249a6a pop edi */
  EDI = (pop32());
  /* 11249a6b pop esi */
  ESI = (pop32());
  /* 11249a6c pop ebx */
  EBX = (pop32());
  /* 11249a6d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249a70 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249a72 call 0x1124a480 */
  push32(0x11249a77u); f_1124a480();
  /* 11249a77 mov esp, ebp */
  ESP = (EBP);
  /* 11249a79 pop ebp */
  EBP = (pop32());
  /* 11249a7a ret  */
  ESPCHK(0x11249a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a90 @ 0x11249a90 (97 bytes, 38 insns) */
void f_11249a90(void) {
  FTRACE(0x11249a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11249a91 mov ebp, esp */
  EBP = (ESP);
  /* 11249a93 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249a96 push ebx */
  push32((uint32_t)(EBX));
  /* 11249a97 push esi */
  push32((uint32_t)(ESI));
  /* 11249a98 push edi */
  push32((uint32_t)(EDI));
  /* 11249a99 push ecx */
  push32((uint32_t)(ECX));
  /* 11249a9a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11249a9d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11249aa2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249aa7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249aa9 pop ecx */
  ECX = (pop32());
  /* 11249aaa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11249aad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249ab0 call 0x112411cc */
  push32(0x11249ab5u); f_112411cc();
  /* 11249ab5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249ab8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11249aba mov cx, word ptr [eax + 8] */
  CX = (r16((uint32_t)(EAX + 0x8)));
  /* 11249abe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11249ac1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249ac4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11249ac6 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11249aca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11249acd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11249ad0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11249ad3 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11249ad5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11249ad8 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11249adb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11249ade pop edi */
  EDI = (pop32());
  /* 11249adf pop esi */
  ESI = (pop32());
  /* 11249ae0 pop ebx */
  EBX = (pop32());
  /* 11249ae1 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249ae4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249ae6 call 0x1124a480 */
  push32(0x11249aebu); f_1124a480();
  /* 11249aeb mov esp, ebp */
  ESP = (EBP);
  /* 11249aed pop ebp */
  EBP = (pop32());
  /* 11249aee ret 4 */
  ESPCHK(0x11249a90u, _esp0);
  ESP += 8; return;
}

/* FUN_10009b10 @ 0x11249b10 (89 bytes, 36 insns) */
void f_11249b10(void) {
  FTRACE(0x11249b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11249b11 mov ebp, esp */
  EBP = (ESP);
  /* 11249b13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249b16 push ebx */
  push32((uint32_t)(EBX));
  /* 11249b17 push esi */
  push32((uint32_t)(ESI));
  /* 11249b18 push edi */
  push32((uint32_t)(EDI));
  /* 11249b19 push ecx */
  push32((uint32_t)(ECX));
  /* 11249b1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11249b1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249b22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249b27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249b29 pop ecx */
  ECX = (pop32());
  /* 11249b2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11249b2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249b30 call 0x112412ad */
  push32(0x11249b35u); f_112412ad();
  /* 11249b35 mov esi, esp */
  ESI = (ESP);
  /* 11249b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11249b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11249b3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11249b3e push eax */
  push32((uint32_t)(EAX));
  /* 11249b3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249b42 mov dl, byte ptr [ecx + 0x3c] */
  DL = (r8((uint32_t)(ECX + 0x3c)));
  /* 11249b45 push edx */
  push32((uint32_t)(EDX));
  /* 11249b46 call dword ptr [0x112835a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a0))), 0x11249b4cu);
  /* 11249b4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249b4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249b51 call 0x1124a480 */
  push32(0x11249b56u); f_1124a480();
  /* 11249b56 pop edi */
  EDI = (pop32());
  /* 11249b57 pop esi */
  ESI = (pop32());
  /* 11249b58 pop ebx */
  EBX = (pop32());
  /* 11249b59 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249b5c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249b5e call 0x1124a480 */
  push32(0x11249b63u); f_1124a480();
  /* 11249b63 mov esp, ebp */
  ESP = (EBP);
  /* 11249b65 pop ebp */
  EBP = (pop32());
  /* 11249b66 ret 4 */
  ESPCHK(0x11249b10u, _esp0);
  ESP += 8; return;
}

/* FUN_10009b80 @ 0x11249b80 (103 bytes, 41 insns) */
void f_11249b80(void) {
  FTRACE(0x11249b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11249b81 mov ebp, esp */
  EBP = (ESP);
  /* 11249b83 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249b86 push ebx */
  push32((uint32_t)(EBX));
  /* 11249b87 push esi */
  push32((uint32_t)(ESI));
  /* 11249b88 push edi */
  push32((uint32_t)(EDI));
  /* 11249b89 push ecx */
  push32((uint32_t)(ECX));
  /* 11249b8a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11249b8d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249b92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249b97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249b99 pop ecx */
  ECX = (pop32());
  /* 11249b9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11249b9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249ba0 call 0x112412ad */
  push32(0x11249ba5u); f_112412ad();
  /* 11249ba5 mov esi, esp */
  ESI = (ESP);
  /* 11249ba7 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 11249baa push eax */
  push32((uint32_t)(EAX));
  /* 11249bab call 0x1124ae80 */
  push32(0x11249bb0u); f_1124ae80();
  /* 11249bb0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11249bb1 mov ecx, 0xff */
  ECX = (0xffu);
  /* 11249bb6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11249bb8 push edx */
  push32((uint32_t)(EDX));
  /* 11249bb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11249bbc push edx */
  push32((uint32_t)(EDX));
  /* 11249bbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249bc0 mov cl, byte ptr [eax + 0x3c] */
  CL = (r8((uint32_t)(EAX + 0x3c)));
  /* 11249bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11249bc4 call dword ptr [0x112835b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b4))), 0x11249bcau);
  /* 11249bca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249bcd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249bcf call 0x1124a480 */
  push32(0x11249bd4u); f_1124a480();
  /* 11249bd4 pop edi */
  EDI = (pop32());
  /* 11249bd5 pop esi */
  ESI = (pop32());
  /* 11249bd6 pop ebx */
  EBX = (pop32());
  /* 11249bd7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249bda cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249bdc call 0x1124a480 */
  push32(0x11249be1u); f_1124a480();
  /* 11249be1 mov esp, ebp */
  ESP = (EBP);
  /* 11249be3 pop ebp */
  EBP = (pop32());
  /* 11249be4 ret 8 */
  ESPCHK(0x11249b80u, _esp0);
  ESP += 12; return;
}

/* FUN_10009c00 @ 0x11249c00 (62 bytes, 27 insns) */
void f_11249c00(void) {
  FTRACE(0x11249c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11249c01 mov ebp, esp */
  EBP = (ESP);
  /* 11249c03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249c06 push ebx */
  push32((uint32_t)(EBX));
  /* 11249c07 push esi */
  push32((uint32_t)(ESI));
  /* 11249c08 push edi */
  push32((uint32_t)(EDI));
  /* 11249c09 push ecx */
  push32((uint32_t)(ECX));
  /* 11249c0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11249c0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249c12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249c17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249c19 pop ecx */
  ECX = (pop32());
  /* 11249c1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11249c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11249c1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11249c22 push eax */
  push32((uint32_t)(EAX));
  /* 11249c23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249c26 call 0x11241217 */
  push32(0x11249c2bu); f_11241217();
  /* 11249c2b pop edi */
  EDI = (pop32());
  /* 11249c2c pop esi */
  ESI = (pop32());
  /* 11249c2d pop ebx */
  EBX = (pop32());
  /* 11249c2e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249c31 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249c33 call 0x1124a480 */
  push32(0x11249c38u); f_1124a480();
  /* 11249c38 mov esp, ebp */
  ESP = (EBP);
  /* 11249c3a pop ebp */
  EBP = (pop32());
  /* 11249c3b ret 4 */
  ESPCHK(0x11249c00u, _esp0);
  ESP += 8; return;
}

/* FUN_10009c50 @ 0x11249c50 (39 bytes, 20 insns) */
void f_11249c50(void) {
  FTRACE(0x11249c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11249c51 mov ebp, esp */
  EBP = (ESP);
  /* 11249c53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249c56 push ebx */
  push32((uint32_t)(EBX));
  /* 11249c57 push esi */
  push32((uint32_t)(ESI));
  /* 11249c58 push edi */
  push32((uint32_t)(EDI));
  /* 11249c59 push ecx */
  push32((uint32_t)(ECX));
  /* 11249c5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11249c5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249c62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249c67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249c69 pop ecx */
  ECX = (pop32());
  /* 11249c6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11249c6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249c70 pop edi */
  EDI = (pop32());
  /* 11249c71 pop esi */
  ESI = (pop32());
  /* 11249c72 pop ebx */
  EBX = (pop32());
  /* 11249c73 mov esp, ebp */
  ESP = (EBP);
  /* 11249c75 pop ebp */
  EBP = (pop32());
  /* 11249c76 ret  */
  ESPCHK(0x11249c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c80 @ 0x11249c80 (70 bytes, 30 insns) */
void f_11249c80(void) {
  FTRACE(0x11249c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11249c81 mov ebp, esp */
  EBP = (ESP);
  /* 11249c83 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249c86 push ebx */
  push32((uint32_t)(EBX));
  /* 11249c87 push esi */
  push32((uint32_t)(ESI));
  /* 11249c88 push edi */
  push32((uint32_t)(EDI));
  /* 11249c89 push ecx */
  push32((uint32_t)(ECX));
  /* 11249c8a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11249c8d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249c92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249c97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249c99 pop ecx */
  ECX = (pop32());
  /* 11249c9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11249c9d mov esi, esp */
  ESI = (ESP);
  /* 11249c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11249ca1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249ca4 push eax */
  push32((uint32_t)(EAX));
  /* 11249ca5 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x11249cabu);
  /* 11249cab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249cae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249cb0 call 0x1124a480 */
  push32(0x11249cb5u); f_1124a480();
  /* 11249cb5 pop edi */
  EDI = (pop32());
  /* 11249cb6 pop esi */
  ESI = (pop32());
  /* 11249cb7 pop ebx */
  EBX = (pop32());
  /* 11249cb8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249cbb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249cbd call 0x1124a480 */
  push32(0x11249cc2u); f_1124a480();
  /* 11249cc2 mov esp, ebp */
  ESP = (EBP);
  /* 11249cc4 pop ebp */
  EBP = (pop32());
  /* 11249cc5 ret  */
  ESPCHK(0x11249c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ce0 @ 0x11249ce0 (123 bytes, 48 insns) */
void f_11249ce0(void) {
  FTRACE(0x11249ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11249ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11249ce3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249ce6 push ebx */
  push32((uint32_t)(EBX));
  /* 11249ce7 push esi */
  push32((uint32_t)(ESI));
  /* 11249ce8 push edi */
  push32((uint32_t)(EDI));
  /* 11249ce9 push ecx */
  push32((uint32_t)(ECX));
  /* 11249cea lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11249ced mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11249cf2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249cf7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249cf9 pop ecx */
  ECX = (pop32());
  /* 11249cfa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11249cfd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11249d01 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11249d05 jmp 0x11249d0f */
  goto L_11249d0f;
L_11249d07:;
  /* 11249d07 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11249d0a add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11249d0c mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11249d0f:;
  /* 11249d0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11249d12 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11249d18 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249d1b jge 0x11249d47 */
  if ((C.sf==C.of)) goto L_11249d47;
  /* 11249d1d mov esi, esp */
  ESI = (ESP);
  /* 11249d1f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11249d22 push edx */
  push32((uint32_t)(EDX));
  /* 11249d23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249d26 push eax */
  push32((uint32_t)(EAX));
  /* 11249d27 call dword ptr [0x11283564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283564))), 0x11249d2du);
  /* 11249d2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249d30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249d32 call 0x1124a480 */
  push32(0x11249d37u); f_1124a480();
  /* 11249d37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11249d39 jle 0x11249d45 */
  if ((C.zf||C.sf!=C.of)) goto L_11249d45;
  /* 11249d3b mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11249d3e mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11249d41 mov byte ptr [ebp - 0xc], 8 */
  w8((uint32_t)(EBP + -0xc), (0x8u));
L_11249d45:;
  /* 11249d45 jmp 0x11249d07 */
  goto L_11249d07;
L_11249d47:;
  /* 11249d47 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11249d4a pop edi */
  EDI = (pop32());
  /* 11249d4b pop esi */
  ESI = (pop32());
  /* 11249d4c pop ebx */
  EBX = (pop32());
  /* 11249d4d add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249d50 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249d52 call 0x1124a480 */
  push32(0x11249d57u); f_1124a480();
  /* 11249d57 mov esp, ebp */
  ESP = (EBP);
  /* 11249d59 pop ebp */
  EBP = (pop32());
  /* 11249d5a ret  */
  ESPCHK(0x11249ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d80 @ 0x11249d80 (68 bytes, 29 insns) */
void f_11249d80(void) {
  FTRACE(0x11249d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11249d81 mov ebp, esp */
  EBP = (ESP);
  /* 11249d83 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249d86 push ebx */
  push32((uint32_t)(EBX));
  /* 11249d87 push esi */
  push32((uint32_t)(ESI));
  /* 11249d88 push edi */
  push32((uint32_t)(EDI));
  /* 11249d89 push ecx */
  push32((uint32_t)(ECX));
  /* 11249d8a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11249d8d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249d92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249d97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249d99 pop ecx */
  ECX = (pop32());
  /* 11249d9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11249d9d mov esi, esp */
  ESI = (ESP);
  /* 11249d9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249da2 push eax */
  push32((uint32_t)(EAX));
  /* 11249da3 call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x11249da9u);
  /* 11249da9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249dac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249dae call 0x1124a480 */
  push32(0x11249db3u); f_1124a480();
  /* 11249db3 pop edi */
  EDI = (pop32());
  /* 11249db4 pop esi */
  ESI = (pop32());
  /* 11249db5 pop ebx */
  EBX = (pop32());
  /* 11249db6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249db9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249dbb call 0x1124a480 */
  push32(0x11249dc0u); f_1124a480();
  /* 11249dc0 mov esp, ebp */
  ESP = (EBP);
  /* 11249dc2 pop ebp */
  EBP = (pop32());
  /* 11249dc3 ret  */
  ESPCHK(0x11249d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009de0 @ 0x11249de0 (69 bytes, 29 insns) */
void f_11249de0(void) {
  FTRACE(0x11249de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11249de1 mov ebp, esp */
  EBP = (ESP);
  /* 11249de3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249de6 push ebx */
  push32((uint32_t)(EBX));
  /* 11249de7 push esi */
  push32((uint32_t)(ESI));
  /* 11249de8 push edi */
  push32((uint32_t)(EDI));
  /* 11249de9 push ecx */
  push32((uint32_t)(ECX));
  /* 11249dea lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11249ded mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11249df2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249df7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249df9 pop ecx */
  ECX = (pop32());
  /* 11249dfa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11249dfd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11249e01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249e04 call 0x1124123a */
  push32(0x11249e09u); f_1124123a();
  /* 11249e09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11249e0b jle 0x11249e11 */
  if ((C.zf||C.sf!=C.of)) goto L_11249e11;
  /* 11249e0d mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11249e11:;
  /* 11249e11 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11249e14 pop edi */
  EDI = (pop32());
  /* 11249e15 pop esi */
  ESI = (pop32());
  /* 11249e16 pop ebx */
  EBX = (pop32());
  /* 11249e17 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249e1a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249e1c call 0x1124a480 */
  push32(0x11249e21u); f_1124a480();
  /* 11249e21 mov esp, ebp */
  ESP = (EBP);
  /* 11249e23 pop ebp */
  EBP = (pop32());
  /* 11249e24 ret  */
  ESPCHK(0x11249de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e40 @ 0x11249e40 (88 bytes, 35 insns) */
void f_11249e40(void) {
  FTRACE(0x11249e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11249e41 mov ebp, esp */
  EBP = (ESP);
  /* 11249e43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249e46 push ebx */
  push32((uint32_t)(EBX));
  /* 11249e47 push esi */
  push32((uint32_t)(ESI));
  /* 11249e48 push edi */
  push32((uint32_t)(EDI));
  /* 11249e49 push ecx */
  push32((uint32_t)(ECX));
  /* 11249e4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11249e4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249e52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249e57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249e59 pop ecx */
  ECX = (pop32());
  /* 11249e5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11249e5d mov esi, esp */
  ESI = (ESP);
  /* 11249e5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11249e62 push eax */
  push32((uint32_t)(EAX));
  /* 11249e63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249e66 push ecx */
  push32((uint32_t)(ECX));
  /* 11249e67 call dword ptr [0x1128358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128358c))), 0x11249e6du);
  /* 11249e6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249e70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249e72 call 0x1124a480 */
  push32(0x11249e77u); f_1124a480();
  /* 11249e77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249e7a call 0x11241294 */
  push32(0x11249e7fu); f_11241294();
  /* 11249e7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249e82 mov byte ptr [edx + 0x3c], al */
  w8((uint32_t)(EDX + 0x3c), (AL));
  /* 11249e85 pop edi */
  EDI = (pop32());
  /* 11249e86 pop esi */
  ESI = (pop32());
  /* 11249e87 pop ebx */
  EBX = (pop32());
  /* 11249e88 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249e8b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249e8d call 0x1124a480 */
  push32(0x11249e92u); f_1124a480();
  /* 11249e92 mov esp, ebp */
  ESP = (EBP);
  /* 11249e94 pop ebp */
  EBP = (pop32());
  /* 11249e95 ret 4 */
  ESPCHK(0x11249e40u, _esp0);
  ESP += 8; return;
}

/* FUN_10009eb0 @ 0x11249eb0 (110 bytes, 42 insns) */
void f_11249eb0(void) {
  FTRACE(0x11249eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11249eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11249eb3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11249eb7 push esi */
  push32((uint32_t)(ESI));
  /* 11249eb8 push edi */
  push32((uint32_t)(EDI));
  /* 11249eb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11249eba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11249ebd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249ec2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249ec7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249ec9 pop ecx */
  ECX = (pop32());
  /* 11249eca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11249ecd mov esi, esp */
  ESI = (ESP);
  /* 11249ecf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249ed2 push eax */
  push32((uint32_t)(EAX));
  /* 11249ed3 call dword ptr [0x112835c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c0))), 0x11249ed9u);
  /* 11249ed9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249edc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249ede call 0x1124a480 */
  push32(0x11249ee3u); f_1124a480();
  /* 11249ee3 mov esi, esp */
  ESI = (ESP);
  /* 11249ee5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249ee8 push ecx */
  push32((uint32_t)(ECX));
  /* 11249ee9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11249eec push edx */
  push32((uint32_t)(EDX));
  /* 11249eed call dword ptr [0x11283540] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283540))), 0x11249ef3u);
  /* 11249ef3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249ef6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249ef8 call 0x1124a480 */
  push32(0x11249efdu); f_1124a480();
  /* 11249efd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249f00 call 0x11241294 */
  push32(0x11249f05u); f_11241294();
  /* 11249f05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249f08 mov byte ptr [ecx + 0x3c], al */
  w8((uint32_t)(ECX + 0x3c), (AL));
  /* 11249f0b pop edi */
  EDI = (pop32());
  /* 11249f0c pop esi */
  ESI = (pop32());
  /* 11249f0d pop ebx */
  EBX = (pop32());
  /* 11249f0e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249f11 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249f13 call 0x1124a480 */
  push32(0x11249f18u); f_1124a480();
  /* 11249f18 mov esp, ebp */
  ESP = (EBP);
  /* 11249f1a pop ebp */
  EBP = (pop32());
  /* 11249f1b ret 4 */
  ESPCHK(0x11249eb0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009f40 @ 0x11249f40 (113 bytes, 44 insns) */
void f_11249f40(void) {
  FTRACE(0x11249f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11249f41 mov ebp, esp */
  EBP = (ESP);
  /* 11249f43 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249f46 push ebx */
  push32((uint32_t)(EBX));
  /* 11249f47 push esi */
  push32((uint32_t)(ESI));
  /* 11249f48 push edi */
  push32((uint32_t)(EDI));
  /* 11249f49 push ecx */
  push32((uint32_t)(ECX));
  /* 11249f4a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11249f4d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11249f52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249f57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249f59 pop ecx */
  ECX = (pop32());
  /* 11249f5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11249f5d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11249f61 mov esi, esp */
  ESI = (ESP);
  /* 11249f63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249f66 push eax */
  push32((uint32_t)(EAX));
  /* 11249f67 call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x11249f6du);
  /* 11249f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249f70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249f72 call 0x1124a480 */
  push32(0x11249f77u); f_1124a480();
  /* 11249f77 mov esi, eax */
  ESI = (EAX);
  /* 11249f79 mov edi, esp */
  EDI = (ESP);
  /* 11249f7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249f7e push ecx */
  push32((uint32_t)(ECX));
  /* 11249f7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11249f82 push edx */
  push32((uint32_t)(EDX));
  /* 11249f83 call dword ptr [0x112835ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835ac))), 0x11249f89u);
  /* 11249f89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249f8c cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249f8e call 0x1124a480 */
  push32(0x11249f93u); f_1124a480();
  /* 11249f93 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249f95 jne 0x11249f9b */
  if (!C.zf) goto L_11249f9b;
  /* 11249f97 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11249f9b:;
  /* 11249f9b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11249f9e pop edi */
  EDI = (pop32());
  /* 11249f9f pop esi */
  ESI = (pop32());
  /* 11249fa0 pop ebx */
  EBX = (pop32());
  /* 11249fa1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11249fa4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11249fa6 call 0x1124a480 */
  push32(0x11249fabu); f_1124a480();
  /* 11249fab mov esp, ebp */
  ESP = (EBP);
  /* 11249fad pop ebp */
  EBP = (pop32());
  /* 11249fae ret 4 */
  ESPCHK(0x11249f40u, _esp0);
  ESP += 8; return;
}

/* FUN_10009fd0 @ 0x11249fd0 (47 bytes, 22 insns) */
void f_11249fd0(void) {
  FTRACE(0x11249fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11249fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11249fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11249fd3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11249fd6 push ebx */
  push32((uint32_t)(EBX));
  /* 11249fd7 push esi */
  push32((uint32_t)(ESI));
  /* 11249fd8 push edi */
  push32((uint32_t)(EDI));
  /* 11249fd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11249fda lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11249fdd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11249fe2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11249fe7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11249fe9 pop ecx */
  ECX = (pop32());
  /* 11249fea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11249fed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11249ff0 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11249ff3 mov byte ptr [eax + 0x3c], cl */
  w8((uint32_t)(EAX + 0x3c), (CL));
  /* 11249ff6 pop edi */
  EDI = (pop32());
  /* 11249ff7 pop esi */
  ESI = (pop32());
  /* 11249ff8 pop ebx */
  EBX = (pop32());
  /* 11249ff9 mov esp, ebp */
  ESP = (EBP);
  /* 11249ffb pop ebp */
  EBP = (pop32());
  /* 11249ffc ret 4 */
  ESPCHK(0x11249fd0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a010 @ 0x1124a010 (38 bytes, 19 insns) */
void f_1124a010(void) {
  FTRACE(0x1124a010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a010 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a011 mov ebp, esp */
  EBP = (ESP);
  /* 1124a013 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124a016 push ebx */
  push32((uint32_t)(EBX));
  /* 1124a017 push esi */
  push32((uint32_t)(ESI));
  /* 1124a018 push edi */
  push32((uint32_t)(EDI));
  /* 1124a019 push ecx */
  push32((uint32_t)(ECX));
  /* 1124a01a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124a01d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 1124a022 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 1124a027 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1124a029 pop ecx */
  ECX = (pop32());
  /* 1124a02a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124a02d pop edi */
  EDI = (pop32());
  /* 1124a02e pop esi */
  ESI = (pop32());
  /* 1124a02f pop ebx */
  EBX = (pop32());
  /* 1124a030 mov esp, ebp */
  ESP = (EBP);
  /* 1124a032 pop ebp */
  EBP = (pop32());
  /* 1124a033 ret 4 */
  ESPCHK(0x1124a010u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a040 @ 0x1124a040 (127 bytes, 48 insns) */
void f_1124a040(void) {
  FTRACE(0x1124a040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a040 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a041 mov ebp, esp */
  EBP = (ESP);
  /* 1124a043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124a046 push ebx */
  push32((uint32_t)(EBX));
  /* 1124a047 push esi */
  push32((uint32_t)(ESI));
  /* 1124a048 push edi */
  push32((uint32_t)(EDI));
  /* 1124a049 push ecx */
  push32((uint32_t)(ECX));
  /* 1124a04a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124a04d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 1124a052 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 1124a057 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1124a059 pop ecx */
  ECX = (pop32());
  /* 1124a05a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124a05d mov esi, esp */
  ESI = (ESP);
  /* 1124a05f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124a062 push eax */
  push32((uint32_t)(EAX));
  /* 1124a063 call dword ptr [0x112835cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835cc))), 0x1124a069u);
  /* 1124a069 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a06c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a06e call 0x1124a480 */
  push32(0x1124a073u); f_1124a480();
  /* 1124a073 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124a075 jle 0x1124a0ac */
  if ((C.zf||C.sf!=C.of)) goto L_1124a0ac;
  /* 1124a077 mov esi, esp */
  ESI = (ESP);
  /* 1124a079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124a07b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a07e call 0x112411f4 */
  push32(0x1124a083u); f_112411f4();
  /* 1124a083 push eax */
  push32((uint32_t)(EAX));
  /* 1124a084 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x1124a08au);
  /* 1124a08a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a08d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a08f call 0x1124a480 */
  push32(0x1124a094u); f_1124a480();
  /* 1124a094 mov esi, esp */
  ESI = (ESP);
  /* 1124a096 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124a099 push ecx */
  push32((uint32_t)(ECX));
  /* 1124a09a push 1 */
  push32((uint32_t)(0x1u));
  /* 1124a09c call dword ptr [0x112834d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112834d8))), 0x1124a0a2u);
  /* 1124a0a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a0a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a0a7 call 0x1124a480 */
  push32(0x1124a0acu); f_1124a480();
L_1124a0ac:;
  /* 1124a0ac pop edi */
  EDI = (pop32());
  /* 1124a0ad pop esi */
  ESI = (pop32());
  /* 1124a0ae pop ebx */
  EBX = (pop32());
  /* 1124a0af add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a0b2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a0b4 call 0x1124a480 */
  push32(0x1124a0b9u); f_1124a480();
  /* 1124a0b9 mov esp, ebp */
  ESP = (EBP);
  /* 1124a0bb pop ebp */
  EBP = (pop32());
  /* 1124a0bc ret 4 */
  ESPCHK(0x1124a040u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a0e0 @ 0x1124a0e0 (181 bytes, 65 insns) */
void f_1124a0e0(void) {
  FTRACE(0x1124a0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a0e1 mov ebp, esp */
  EBP = (ESP);
  /* 1124a0e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124a0e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1124a0e7 push esi */
  push32((uint32_t)(ESI));
  /* 1124a0e8 push edi */
  push32((uint32_t)(EDI));
  /* 1124a0e9 push ecx */
  push32((uint32_t)(ECX));
  /* 1124a0ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124a0ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 1124a0f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 1124a0f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1124a0f9 pop ecx */
  ECX = (pop32());
  /* 1124a0fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124a0fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a100 call 0x1124120d */
  push32(0x1124a105u); f_1124120d();
  /* 1124a105 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124a10a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124a10c je 0x1124a184 */
  if (C.zf) goto L_1124a184;
  /* 1124a10e mov esi, esp */
  ESI = (ESP);
  /* 1124a110 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124a112 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1124a117 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a11a call 0x11241113 */
  push32(0x1124a11fu); f_11241113();
  /* 1124a11f push eax */
  push32((uint32_t)(EAX));
  /* 1124a120 call dword ptr [0x11283594] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283594))), 0x1124a126u);
  /* 1124a126 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a129 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a12b call 0x1124a480 */
  push32(0x1124a130u); f_1124a480();
  /* 1124a130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124a132 jle 0x1124a184 */
  if ((C.zf||C.sf!=C.of)) goto L_1124a184;
  /* 1124a134 mov esi, esp */
  ESI = (ESP);
  /* 1124a136 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124a138 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124a13a push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1124a13f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a142 call 0x11241113 */
  push32(0x1124a147u); f_11241113();
  /* 1124a147 push eax */
  push32((uint32_t)(EAX));
  /* 1124a148 call dword ptr [0x112835b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835b8))), 0x1124a14eu);
  /* 1124a14e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a151 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a153 call 0x1124a480 */
  push32(0x1124a158u); f_1124a480();
  /* 1124a158 mov esi, esp */
  ESI = (ESP);
  /* 1124a15a push 0 */
  push32((uint32_t)(0x0u));
  /* 1124a15c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a15f add eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a162 push eax */
  push32((uint32_t)(EAX));
  /* 1124a163 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124a165 call dword ptr [0x112835c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c8))), 0x1124a16bu);
  /* 1124a16b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a16e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a170 call 0x1124a480 */
  push32(0x1124a175u); f_1124a480();
  /* 1124a175 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a178 add ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a17b push ecx */
  push32((uint32_t)(ECX));
  /* 1124a17c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a17f call 0x11241050 */
  push32(0x1124a184u); f_11241050();
L_1124a184:;
  /* 1124a184 pop edi */
  EDI = (pop32());
  /* 1124a185 pop esi */
  ESI = (pop32());
  /* 1124a186 pop ebx */
  EBX = (pop32());
  /* 1124a187 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a18a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a18c call 0x1124a480 */
  push32(0x1124a191u); f_1124a480();
  /* 1124a191 mov esp, ebp */
  ESP = (EBP);
  /* 1124a193 pop ebp */
  EBP = (pop32());
  /* 1124a194 ret  */
  ESPCHK(0x1124a0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1d0 @ 0x1124a1d0 (98 bytes, 38 insns) */
void f_1124a1d0(void) {
  FTRACE(0x1124a1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a1d1 mov ebp, esp */
  EBP = (ESP);
  /* 1124a1d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124a1d6 push ebx */
  push32((uint32_t)(EBX));
  /* 1124a1d7 push esi */
  push32((uint32_t)(ESI));
  /* 1124a1d8 push edi */
  push32((uint32_t)(EDI));
  /* 1124a1d9 push ecx */
  push32((uint32_t)(ECX));
  /* 1124a1da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1124a1dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 1124a1e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 1124a1e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1124a1e9 pop ecx */
  ECX = (pop32());
  /* 1124a1ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124a1ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a1f0 call 0x112411f4 */
  push32(0x1124a1f5u); f_112411f4();
  /* 1124a1f5 mov esi, esp */
  ESI = (ESP);
  /* 1124a1f7 push eax */
  push32((uint32_t)(EAX));
  /* 1124a1f8 call dword ptr [0x112835c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c0))), 0x1124a1feu);
  /* 1124a1fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a203 call 0x1124a480 */
  push32(0x1124a208u); f_1124a480();
  /* 1124a208 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a20b add eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a20e mov esi, esp */
  ESI = (ESP);
  /* 1124a210 push eax */
  push32((uint32_t)(EAX));
  /* 1124a211 call dword ptr [0x112835c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835c0))), 0x1124a217u);
  /* 1124a217 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a21a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a21c call 0x1124a480 */
  push32(0x1124a221u); f_1124a480();
  /* 1124a221 pop edi */
  EDI = (pop32());
  /* 1124a222 pop esi */
  ESI = (pop32());
  /* 1124a223 pop ebx */
  EBX = (pop32());
  /* 1124a224 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a227 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a229 call 0x1124a480 */
  push32(0x1124a22eu); f_1124a480();
  /* 1124a22e mov esp, ebp */
  ESP = (EBP);
  /* 1124a230 pop ebp */
  EBP = (pop32());
  /* 1124a231 ret  */
  ESPCHK(0x1124a1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a250 @ 0x1124a250 (139 bytes, 53 insns) */
void f_1124a250(void) {
  FTRACE(0x1124a250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a250 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a251 mov ebp, esp */
  EBP = (ESP);
  /* 1124a253 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124a256 push ebx */
  push32((uint32_t)(EBX));
  /* 1124a257 push esi */
  push32((uint32_t)(ESI));
  /* 1124a258 push edi */
  push32((uint32_t)(EDI));
  /* 1124a259 push ecx */
  push32((uint32_t)(ECX));
  /* 1124a25a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 1124a25d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 1124a262 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 1124a267 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1124a269 pop ecx */
  ECX = (pop32());
  /* 1124a26a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124a26d mov esi, esp */
  ESI = (ESP);
  /* 1124a26f push 0 */
  push32((uint32_t)(0x0u));
  /* 1124a271 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a274 push eax */
  push32((uint32_t)(EAX));
  /* 1124a275 call dword ptr [0x112835a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a4))), 0x1124a27bu);
  /* 1124a27b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a27e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a280 call 0x1124a480 */
  push32(0x1124a285u); f_1124a480();
  /* 1124a285 mov esi, esp */
  ESI = (ESP);
  /* 1124a287 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 1124a28c push 1 */
  push32((uint32_t)(0x1u));
  /* 1124a28e lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 1124a291 push ecx */
  push32((uint32_t)(ECX));
  /* 1124a292 call dword ptr [0x11283574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283574))), 0x1124a298u);
  /* 1124a298 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a29b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a29d call 0x1124a480 */
  push32(0x1124a2a2u); f_1124a480();
  /* 1124a2a2 mov esi, esp */
  ESI = (ESP);
  /* 1124a2a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124a2a6 call 0x1124ae80 */
  push32(0x1124a2abu); f_1124ae80();
  /* 1124a2ab cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1124a2ac mov ecx, 0xff */
  ECX = (0xffu);
  /* 1124a2b1 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1124a2b3 push edx */
  push32((uint32_t)(EDX));
  /* 1124a2b4 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1124a2b7 push edx */
  push32((uint32_t)(EDX));
  /* 1124a2b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124a2ba call dword ptr [0x112835a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112835a0))), 0x1124a2c0u);
  /* 1124a2c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a2c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a2c5 call 0x1124a480 */
  push32(0x1124a2cau); f_1124a480();
  /* 1124a2ca pop edi */
  EDI = (pop32());
  /* 1124a2cb pop esi */
  ESI = (pop32());
  /* 1124a2cc pop ebx */
  EBX = (pop32());
  /* 1124a2cd add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a2d0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a2d2 call 0x1124a480 */
  push32(0x1124a2d7u); f_1124a480();
  /* 1124a2d7 mov esp, ebp */
  ESP = (EBP);
  /* 1124a2d9 pop ebp */
  EBP = (pop32());
  /* 1124a2da ret  */
  ESPCHK(0x1124a250u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x1124a480 (56 bytes, 28 insns) */
void f_1124a480(void) {
  FTRACE(0x1124a480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a480 jne 0x1124a483 */
  if (!C.zf) goto L_1124a483;
  /* 1124a482 ret  */
  ESPCHK(0x1124a480u, _esp0);
  ESP += 4; return;
L_1124a483:;
  /* 1124a483 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a484 mov ebp, esp */
  EBP = (ESP);
  /* 1124a486 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124a489 push eax */
  push32((uint32_t)(EAX));
  /* 1124a48a push edx */
  push32((uint32_t)(EDX));
  /* 1124a48b push ebx */
  push32((uint32_t)(EBX));
  /* 1124a48c push esi */
  push32((uint32_t)(ESI));
  /* 1124a48d push edi */
  push32((uint32_t)(EDI));
  /* 1124a48e push 0x1127b200 */
  push32((uint32_t)(0x1127b200u));
  /* 1124a493 push 0x1127b1fc */
  push32((uint32_t)(0x1127b1fcu));
  /* 1124a498 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1124a49a push 0x1127b1ec */
  push32((uint32_t)(0x1127b1ecu));
  /* 1124a49f push 1 */
  push32((uint32_t)(0x1u));
  /* 1124a4a1 call 0x1124b3e0 */
  push32(0x1124a4a6u); f_1124b3e0();
  /* 1124a4a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a4a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a4ac jne 0x1124a4af */
  if (!C.zf) goto L_1124a4af;
  /* 1124a4ae int3  */
  x86_unimpl("int3 @ 0x1124a4ae");
L_1124a4af:;
  /* 1124a4af pop edi */
  EDI = (pop32());
  /* 1124a4b0 pop esi */
  ESI = (pop32());
  /* 1124a4b1 pop ebx */
  EBX = (pop32());
  /* 1124a4b2 pop edx */
  EDX = (pop32());
  /* 1124a4b3 pop eax */
  EAX = (pop32());
  /* 1124a4b4 mov esp, ebp */
  ESP = (EBP);
  /* 1124a4b6 pop ebp */
  EBP = (pop32());
  /* 1124a4b7 ret  */
  ESPCHK(0x1124a480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4c0 @ 0x1124a4c0 (20 bytes, 6 insns) */
void f_1124a4c0(void) {
  FTRACE(0x1124a4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a4c0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124a4c3 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 1124a4c6 call 0x1124bcd8 */
  push32(0x1124a4cbu); f_1124bcd8();
  /* 1124a4cb call 0x1124a4dd */
  push32(0x1124a4d0u); f_1124a4dd();
  /* 1124a4d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a4d3 ret  */
  ESPCHK(0x1124a4c0u, _esp0);
  ESP += 4; return;
}

