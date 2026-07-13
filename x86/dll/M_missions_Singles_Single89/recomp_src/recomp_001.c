#include "recomp.h"

/* FUN_10003880 @ 0x11ef3880 (57 bytes, 25 insns) */
void f_11ef3880(void) {
  FTRACE(0x11ef3880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef3880 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef3881 mov ebp, esp */
  EBP = (ESP);
  /* 11ef3883 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef3886 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef3887 push esi */
  push32((uint32_t)(ESI));
  /* 11ef3888 push edi */
  push32((uint32_t)(EDI));
  /* 11ef3889 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef388a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef388d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef3892 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef3897 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef3899 pop ecx */
  ECX = (pop32());
  /* 11ef389a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef389d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef38a0 call 0x11ef11cc */
  push32(0x11ef38a5u); f_11ef11cc();
  /* 11ef38a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef38a8 pop edi */
  EDI = (pop32());
  /* 11ef38a9 pop esi */
  ESI = (pop32());
  /* 11ef38aa pop ebx */
  EBX = (pop32());
  /* 11ef38ab add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef38ae cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef38b0 call 0x11ef9720 */
  push32(0x11ef38b5u); f_11ef9720();
  /* 11ef38b5 mov esp, ebp */
  ESP = (EBP);
  /* 11ef38b7 pop ebp */
  EBP = (pop32());
  /* 11ef38b8 ret  */
  ESPCHK(0x11ef3880u, _esp0);
  ESP += 4; return;
}

/* FUN_100038d0 @ 0x11ef38d0 (84 bytes, 33 insns) */
void f_11ef38d0(void) {
  FTRACE(0x11ef38d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef38d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef38d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef38d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef38d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef38d7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef38d8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef38d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11ef38dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11ef38e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef38e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_11ef38e8:;
  /* 11ef38e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef38eb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef38ee mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11ef38f1 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef38f5 jl 0x11ef3911 */
  if ((C.sf!=C.of)) goto L_11ef3911;
  /* 11ef38f7 mov esi, esp */
  ESI = (ESP);
  /* 11ef38f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef38fc call dword ptr [ebp + 0x14] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x14))), 0x11ef38ffu);
  /* 11ef38ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3901 call 0x11ef9720 */
  push32(0x11ef3906u); f_11ef9720();
  /* 11ef3906 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef3909 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef390c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ef390f jmp 0x11ef38e8 */
  goto L_11ef38e8;
L_11ef3911:;
  /* 11ef3911 pop edi */
  EDI = (pop32());
  /* 11ef3912 pop esi */
  ESI = (pop32());
  /* 11ef3913 pop ebx */
  EBX = (pop32());
  /* 11ef3914 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3917 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3919 call 0x11ef9720 */
  push32(0x11ef391eu); f_11ef9720();
  /* 11ef391e mov esp, ebp */
  ESP = (EBP);
  /* 11ef3920 pop ebp */
  EBP = (pop32());
  /* 11ef3921 ret 0x10 */
  ESPCHK(0x11ef38d0u, _esp0);
  ESP += 20; return;
}

/* FUN_10003940 @ 0x11ef3940 (1001 bytes, 270 insns) */
void f_11ef3940(void) {
  FTRACE(0x11ef3940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef3940 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef3941 mov ebp, esp */
  EBP = (ESP);
  /* 11ef3943 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef3946 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef3947 push esi */
  push32((uint32_t)(ESI));
  /* 11ef3948 push edi */
  push32((uint32_t)(EDI));
  /* 11ef3949 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef394c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef3951 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef3956 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef3958 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef395a call 0x11efa160 */
  push32(0x11ef395fu); f_11efa160();
  /* 11ef395f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3962 push eax */
  push32((uint32_t)(EAX));
  /* 11ef3963 call 0x11efa110 */
  push32(0x11ef3968u); f_11efa110();
  /* 11ef3968 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef396b mov esi, esp */
  ESI = (ESP);
  /* 11ef396d push 0x11f2a2a4 */
  push32((uint32_t)(0x11f2a2a4u));
  /* 11ef3972 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef3974 call dword ptr [0x11f3354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3354c))), 0x11ef397au);
  /* 11ef397a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef397d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef397f call 0x11ef9720 */
  push32(0x11ef3984u); f_11ef9720();
  /* 11ef3984 mov esi, esp */
  ESI = (ESP);
  /* 11ef3986 push 0x11f2a298 */
  push32((uint32_t)(0x11f2a298u));
  /* 11ef398b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef398d call dword ptr [0x11f3354c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3354c))), 0x11ef3993u);
  /* 11ef3993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3996 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3998 call 0x11ef9720 */
  push32(0x11ef399du); f_11ef9720();
  /* 11ef399d mov esi, esp */
  ESI = (ESP);
  /* 11ef399f push 0x11f2a294 */
  push32((uint32_t)(0x11f2a294u));
  /* 11ef39a4 push 0x11f2fe38 */
  push32((uint32_t)(0x11f2fe38u));
  /* 11ef39a9 call dword ptr [0x11f33550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33550))), 0x11ef39afu);
  /* 11ef39af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef39b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef39b4 call 0x11ef9720 */
  push32(0x11ef39b9u); f_11ef9720();
  /* 11ef39b9 mov esi, esp */
  ESI = (ESP);
  /* 11ef39bb push 0x11f2a290 */
  push32((uint32_t)(0x11f2a290u));
  /* 11ef39c0 push 0x11f2fdf8 */
  push32((uint32_t)(0x11f2fdf8u));
  /* 11ef39c5 call dword ptr [0x11f33550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33550))), 0x11ef39cbu);
  /* 11ef39cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef39ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef39d0 call 0x11ef9720 */
  push32(0x11ef39d5u); f_11ef9720();
  /* 11ef39d5 mov esi, esp */
  ESI = (ESP);
  /* 11ef39d7 push 0x11f2a28c */
  push32((uint32_t)(0x11f2a28cu));
  /* 11ef39dc push 0x11f2fe00 */
  push32((uint32_t)(0x11f2fe00u));
  /* 11ef39e1 call dword ptr [0x11f33550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33550))), 0x11ef39e7u);
  /* 11ef39e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef39ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef39ec call 0x11ef9720 */
  push32(0x11ef39f1u); f_11ef9720();
  /* 11ef39f1 mov esi, esp */
  ESI = (ESP);
  /* 11ef39f3 push 0x11f2a288 */
  push32((uint32_t)(0x11f2a288u));
  /* 11ef39f8 push 0x11f2fe08 */
  push32((uint32_t)(0x11f2fe08u));
  /* 11ef39fd call dword ptr [0x11f33550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33550))), 0x11ef3a03u);
  /* 11ef3a03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3a06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3a08 call 0x11ef9720 */
  push32(0x11ef3a0du); f_11ef9720();
  /* 11ef3a0d mov esi, esp */
  ESI = (ESP);
  /* 11ef3a0f push 0x11f2a284 */
  push32((uint32_t)(0x11f2a284u));
  /* 11ef3a14 push 0x11f2fe10 */
  push32((uint32_t)(0x11f2fe10u));
  /* 11ef3a19 call dword ptr [0x11f33550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33550))), 0x11ef3a1fu);
  /* 11ef3a1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3a22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3a24 call 0x11ef9720 */
  push32(0x11ef3a29u); f_11ef9720();
  /* 11ef3a29 mov esi, esp */
  ESI = (ESP);
  /* 11ef3a2b push 0x11f2a27c */
  push32((uint32_t)(0x11f2a27cu));
  /* 11ef3a30 push 0x11f2fed0 */
  push32((uint32_t)(0x11f2fed0u));
  /* 11ef3a35 call dword ptr [0x11f33554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33554))), 0x11ef3a3bu);
  /* 11ef3a3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3a3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3a40 call 0x11ef9720 */
  push32(0x11ef3a45u); f_11ef9720();
  /* 11ef3a45 mov esi, esp */
  ESI = (ESP);
  /* 11ef3a47 push 0x11f2a26c */
  push32((uint32_t)(0x11f2a26cu));
  /* 11ef3a4c push 0x11f2ff98 */
  push32((uint32_t)(0x11f2ff98u));
  /* 11ef3a51 call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3a57u);
  /* 11ef3a57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3a5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3a5c call 0x11ef9720 */
  push32(0x11ef3a61u); f_11ef9720();
  /* 11ef3a61 mov esi, esp */
  ESI = (ESP);
  /* 11ef3a63 push 0x11f2a25c */
  push32((uint32_t)(0x11f2a25cu));
  /* 11ef3a68 push 0x11f2fea8 */
  push32((uint32_t)(0x11f2fea8u));
  /* 11ef3a6d call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3a73u);
  /* 11ef3a73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3a76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3a78 call 0x11ef9720 */
  push32(0x11ef3a7du); f_11ef9720();
  /* 11ef3a7d mov esi, esp */
  ESI = (ESP);
  /* 11ef3a7f push 0x11f2a250 */
  push32((uint32_t)(0x11f2a250u));
  /* 11ef3a84 push 0x11f2feb0 */
  push32((uint32_t)(0x11f2feb0u));
  /* 11ef3a89 call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3a8fu);
  /* 11ef3a8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3a92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3a94 call 0x11ef9720 */
  push32(0x11ef3a99u); f_11ef9720();
  /* 11ef3a99 mov esi, esp */
  ESI = (ESP);
  /* 11ef3a9b push 0x11f2a240 */
  push32((uint32_t)(0x11f2a240u));
  /* 11ef3aa0 push 0x11f2feb8 */
  push32((uint32_t)(0x11f2feb8u));
  /* 11ef3aa5 call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3aabu);
  /* 11ef3aab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3aae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3ab0 call 0x11ef9720 */
  push32(0x11ef3ab5u); f_11ef9720();
  /* 11ef3ab5 mov esi, esp */
  ESI = (ESP);
  /* 11ef3ab7 push 0x11f2a26c */
  push32((uint32_t)(0x11f2a26cu));
  /* 11ef3abc push 0x11f2fec0 */
  push32((uint32_t)(0x11f2fec0u));
  /* 11ef3ac1 call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3ac7u);
  /* 11ef3ac7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3aca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3acc call 0x11ef9720 */
  push32(0x11ef3ad1u); f_11ef9720();
  /* 11ef3ad1 mov esi, esp */
  ESI = (ESP);
  /* 11ef3ad3 push 0x11f2a234 */
  push32((uint32_t)(0x11f2a234u));
  /* 11ef3ad8 push 0x11f2fe60 */
  push32((uint32_t)(0x11f2fe60u));
  /* 11ef3add call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3ae3u);
  /* 11ef3ae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3ae6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3ae8 call 0x11ef9720 */
  push32(0x11ef3aedu); f_11ef9720();
  /* 11ef3aed mov esi, esp */
  ESI = (ESP);
  /* 11ef3aef push 0x11f2a224 */
  push32((uint32_t)(0x11f2a224u));
  /* 11ef3af4 push 0x11f2fe68 */
  push32((uint32_t)(0x11f2fe68u));
  /* 11ef3af9 call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3affu);
  /* 11ef3aff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3b02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3b04 call 0x11ef9720 */
  push32(0x11ef3b09u); f_11ef9720();
  /* 11ef3b09 mov esi, esp */
  ESI = (ESP);
  /* 11ef3b0b push 0x11f2a214 */
  push32((uint32_t)(0x11f2a214u));
  /* 11ef3b10 push 0x11f2fe70 */
  push32((uint32_t)(0x11f2fe70u));
  /* 11ef3b15 call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3b1bu);
  /* 11ef3b1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3b1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3b20 call 0x11ef9720 */
  push32(0x11ef3b25u); f_11ef9720();
  /* 11ef3b25 mov esi, esp */
  ESI = (ESP);
  /* 11ef3b27 push 0x11f2a204 */
  push32((uint32_t)(0x11f2a204u));
  /* 11ef3b2c push 0x11f2fe78 */
  push32((uint32_t)(0x11f2fe78u));
  /* 11ef3b31 call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3b37u);
  /* 11ef3b37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3b3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3b3c call 0x11ef9720 */
  push32(0x11ef3b41u); f_11ef9720();
  /* 11ef3b41 mov esi, esp */
  ESI = (ESP);
  /* 11ef3b43 push 0x11f2a1f4 */
  push32((uint32_t)(0x11f2a1f4u));
  /* 11ef3b48 push 0x11f2fe80 */
  push32((uint32_t)(0x11f2fe80u));
  /* 11ef3b4d call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3b53u);
  /* 11ef3b53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3b56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3b58 call 0x11ef9720 */
  push32(0x11ef3b5du); f_11ef9720();
  /* 11ef3b5d mov esi, esp */
  ESI = (ESP);
  /* 11ef3b5f push 0x11f2a1e4 */
  push32((uint32_t)(0x11f2a1e4u));
  /* 11ef3b64 push 0x11f2fe88 */
  push32((uint32_t)(0x11f2fe88u));
  /* 11ef3b69 call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3b6fu);
  /* 11ef3b6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3b72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3b74 call 0x11ef9720 */
  push32(0x11ef3b79u); f_11ef9720();
  /* 11ef3b79 mov esi, esp */
  ESI = (ESP);
  /* 11ef3b7b push 0x11f2a1d8 */
  push32((uint32_t)(0x11f2a1d8u));
  /* 11ef3b80 push 0x11f2fe90 */
  push32((uint32_t)(0x11f2fe90u));
  /* 11ef3b85 call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3b8bu);
  /* 11ef3b8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3b8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3b90 call 0x11ef9720 */
  push32(0x11ef3b95u); f_11ef9720();
  /* 11ef3b95 mov esi, esp */
  ESI = (ESP);
  /* 11ef3b97 push 0x11f2a1c8 */
  push32((uint32_t)(0x11f2a1c8u));
  /* 11ef3b9c push 0x11f2fe98 */
  push32((uint32_t)(0x11f2fe98u));
  /* 11ef3ba1 call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3ba7u);
  /* 11ef3ba7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3baa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3bac call 0x11ef9720 */
  push32(0x11ef3bb1u); f_11ef9720();
  /* 11ef3bb1 mov esi, esp */
  ESI = (ESP);
  /* 11ef3bb3 push 0x11f2a1b8 */
  push32((uint32_t)(0x11f2a1b8u));
  /* 11ef3bb8 push 0x11f2fea0 */
  push32((uint32_t)(0x11f2fea0u));
  /* 11ef3bbd call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3bc3u);
  /* 11ef3bc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3bc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3bc8 call 0x11ef9720 */
  push32(0x11ef3bcdu); f_11ef9720();
  /* 11ef3bcd mov esi, esp */
  ESI = (ESP);
  /* 11ef3bcf push 0x11f2a184 */
  push32((uint32_t)(0x11f2a184u));
  /* 11ef3bd4 push 0x11f2ff90 */
  push32((uint32_t)(0x11f2ff90u));
  /* 11ef3bd9 call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3bdfu);
  /* 11ef3bdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3be2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3be4 call 0x11ef9720 */
  push32(0x11ef3be9u); f_11ef9720();
  /* 11ef3be9 mov esi, esp */
  ESI = (ESP);
  /* 11ef3beb push 0x11f2fd48 */
  push32((uint32_t)(0x11f2fd48u));
  /* 11ef3bf0 call dword ptr [0x11f33580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33580))), 0x11ef3bf6u);
  /* 11ef3bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3bf9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3bfb call 0x11ef9720 */
  push32(0x11ef3c00u); f_11ef9720();
  /* 11ef3c00 mov esi, esp */
  ESI = (ESP);
  /* 11ef3c02 push 0x11f2fed8 */
  push32((uint32_t)(0x11f2fed8u));
  /* 11ef3c07 call dword ptr [0x11f33580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33580))), 0x11ef3c0du);
  /* 11ef3c0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3c10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3c12 call 0x11ef9720 */
  push32(0x11ef3c17u); f_11ef9720();
  /* 11ef3c17 mov esi, esp */
  ESI = (ESP);
  /* 11ef3c19 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ef3c1b push 0x11f2fd48 */
  push32((uint32_t)(0x11f2fd48u));
  /* 11ef3c20 call dword ptr [0x11f3355c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3355c))), 0x11ef3c26u);
  /* 11ef3c26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3c29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3c2b call 0x11ef9720 */
  push32(0x11ef3c30u); f_11ef9720();
  /* 11ef3c30 mov esi, esp */
  ESI = (ESP);
  /* 11ef3c32 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ef3c34 push 0x11f2fed8 */
  push32((uint32_t)(0x11f2fed8u));
  /* 11ef3c39 call dword ptr [0x11f3355c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3355c))), 0x11ef3c3fu);
  /* 11ef3c3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3c42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3c44 call 0x11ef9720 */
  push32(0x11ef3c49u); f_11ef9720();
  /* 11ef3c49 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ef3c50 jmp 0x11ef3c5b */
  goto L_11ef3c5b;
L_11ef3c52:;
  /* 11ef3c52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef3c55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3c58 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ef3c5b:;
  /* 11ef3c5b cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3c5f jge 0x11ef3c8b */
  if ((C.sf==C.of)) goto L_11ef3c8b;
  /* 11ef3c61 mov esi, esp */
  ESI = (ESP);
  /* 11ef3c63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef3c66 mov edx, dword ptr [ecx*4 + 0x11f2dd6c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11f2dd6c)));
  /* 11ef3c6d push edx */
  push32((uint32_t)(EDX));
  /* 11ef3c6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef3c71 lea ecx, [eax*8 + 0x11f2fd58] */
  ECX = ((uint32_t)(EAX*8 + 0x11f2fd58));
  /* 11ef3c78 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef3c79 call dword ptr [0x11f33558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33558))), 0x11ef3c7fu);
  /* 11ef3c7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3c82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3c84 call 0x11ef9720 */
  push32(0x11ef3c89u); f_11ef9720();
  /* 11ef3c89 jmp 0x11ef3c52 */
  goto L_11ef3c52;
L_11ef3c8b:;
  /* 11ef3c8b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ef3c92 jmp 0x11ef3c9d */
  goto L_11ef3c9d;
L_11ef3c94:;
  /* 11ef3c94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef3c97 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3c9a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ef3c9d:;
  /* 11ef3c9d cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3ca1 jge 0x11ef3cff */
  if ((C.sf==C.of)) goto L_11ef3cff;
  /* 11ef3ca3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef3ca6 imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef3ca9 add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3caf call 0x11ef12b2 */
  push32(0x11ef3cb4u); f_11ef12b2();
  /* 11ef3cb4 push 0x11f2fd48 */
  push32((uint32_t)(0x11f2fd48u));
  /* 11ef3cb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef3cbc imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef3cbf add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3cc5 call 0x11ef119a */
  push32(0x11ef3ccau); f_11ef119a();
  /* 11ef3cca push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef3ccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef3ccf imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef3cd2 add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3cd8 call 0x11ef1096 */
  push32(0x11ef3cddu); f_11ef1096();
  /* 11ef3cdd mov esi, esp */
  ESI = (ESP);
  /* 11ef3cdf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11ef3ce1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef3ce4 imul eax, eax, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x41u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef3ce7 add eax, 0x11f2ffa0 */
  { uint32_t _a=(EAX),_b=(0x11f2ffa0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3cec push eax */
  push32((uint32_t)(EAX));
  /* 11ef3ced call dword ptr [0x11f3355c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3355c))), 0x11ef3cf3u);
  /* 11ef3cf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3cf6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3cf8 call 0x11ef9720 */
  push32(0x11ef3cfdu); f_11ef9720();
  /* 11ef3cfd jmp 0x11ef3c94 */
  goto L_11ef3c94;
L_11ef3cff:;
  /* 11ef3cff mov esi, esp */
  ESI = (ESP);
  /* 11ef3d01 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ef3d03 push 0x11f2ff88 */
  push32((uint32_t)(0x11f2ff88u));
  /* 11ef3d08 call dword ptr [0x11f3355c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3355c))), 0x11ef3d0eu);
  /* 11ef3d0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3d11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3d13 call 0x11ef9720 */
  push32(0x11ef3d18u); f_11ef9720();
  /* 11ef3d18 pop edi */
  EDI = (pop32());
  /* 11ef3d19 pop esi */
  ESI = (pop32());
  /* 11ef3d1a pop ebx */
  EBX = (pop32());
  /* 11ef3d1b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3d1e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3d20 call 0x11ef9720 */
  push32(0x11ef3d25u); f_11ef9720();
  /* 11ef3d25 mov esp, ebp */
  ESP = (EBP);
  /* 11ef3d27 pop ebp */
  EBP = (pop32());
  /* 11ef3d28 ret  */
  ESPCHK(0x11ef3940u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e30 @ 0x11ef3e30 (255 bytes, 78 insns) */
void f_11ef3e30(void) {
  FTRACE(0x11ef3e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef3e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef3e31 mov ebp, esp */
  EBP = (ESP);
  /* 11ef3e33 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef3e36 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef3e37 push esi */
  push32((uint32_t)(ESI));
  /* 11ef3e38 push edi */
  push32((uint32_t)(EDI));
  /* 11ef3e39 lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11ef3e3c mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11ef3e41 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef3e46 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef3e48 mov byte ptr [ebp - 4], 0 */
  w8((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ef3e4c jmp 0x11ef3e56 */
  goto L_11ef3e56;
L_11ef3e4e:;
  /* 11ef3e4e mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 11ef3e51 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ef3e53 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
L_11ef3e56:;
  /* 11ef3e56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef3e59 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ef3e5f cmp ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3e62 jge 0x11ef3f1e */
  if ((C.sf==C.of)) goto L_11ef3f1e;
  /* 11ef3e68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef3e6b and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ef3e71 imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef3e74 add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3e7a call 0x11ef1217 */
  push32(0x11ef3e7fu); f_11ef1217();
  /* 11ef3e7f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef3e84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef3e86 jne 0x11ef3f19 */
  if (!C.zf) goto L_11ef3f19;
  /* 11ef3e8c call 0x11efa120 */
  push32(0x11ef3e91u); f_11efa120();
  /* 11ef3e91 and eax, 0x80000003 */
  { uint32_t _r=(EAX)&(0x80000003u); EAX = (_r); fl_logic(_r,32); }
  /* 11ef3e96 jns 0x11ef3e9d */
  if (!C.sf) goto L_11ef3e9d;
  /* 11ef3e98 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ef3e99 or eax, 0xfffffffc */
  { uint32_t _r=(EAX)|(0xfffffffcu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef3e9c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ef3e9d:;
  /* 11ef3e9d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11ef3ea0 call 0x11efa120 */
  push32(0x11ef3ea5u); f_11efa120();
  /* 11ef3ea5 and eax, 0x80000003 */
  { uint32_t _r=(EAX)&(0x80000003u); EAX = (_r); fl_logic(_r,32); }
  /* 11ef3eaa jns 0x11ef3eb1 */
  if (!C.sf) goto L_11ef3eb1;
  /* 11ef3eac dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ef3ead or eax, 0xfffffffc */
  { uint32_t _r=(EAX)|(0xfffffffcu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef3eb0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ef3eb1:;
  /* 11ef3eb1 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11ef3eb4 call 0x11efa120 */
  push32(0x11ef3eb9u); f_11efa120();
  /* 11ef3eb9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ef3eba mov ecx, 0xff */
  ECX = (0xffu);
  /* 11ef3ebf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ef3ec1 mov esi, esp */
  ESI = (ESP);
  /* 11ef3ec3 push edx */
  push32((uint32_t)(EDX));
  /* 11ef3ec4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef3ec7 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ef3ecd lea eax, [edx*8 + 0x11f2fdf8] */
  EAX = ((uint32_t)(EDX*8 + 0x11f2fdf8));
  /* 11ef3ed4 push eax */
  push32((uint32_t)(EAX));
  /* 11ef3ed5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef3ed7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef3eda and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ef3ee0 lea edx, [ecx*8 + 0x11f2fea8] */
  EDX = ((uint32_t)(ECX*8 + 0x11f2fea8));
  /* 11ef3ee7 push edx */
  push32((uint32_t)(EDX));
  /* 11ef3ee8 push 0x11f2fed0 */
  push32((uint32_t)(0x11f2fed0u));
  /* 11ef3eed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef3ef0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ef3ef6 imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef3ef9 add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3eff call 0x11ef11f9 */
  push32(0x11ef3f04u); f_11ef11f9();
  /* 11ef3f04 push eax */
  push32((uint32_t)(EAX));
  /* 11ef3f05 call dword ptr [0x11f33548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33548))), 0x11ef3f0bu);
  /* 11ef3f0b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3f0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3f10 call 0x11ef9720 */
  push32(0x11ef3f15u); f_11ef9720();
  /* 11ef3f15 mov byte ptr [ebp - 4], 0x14 */
  w8((uint32_t)(EBP + -0x4), (0x14u));
L_11ef3f19:;
  /* 11ef3f19 jmp 0x11ef3e4e */
  goto L_11ef3e4e;
L_11ef3f1e:;
  /* 11ef3f1e pop edi */
  EDI = (pop32());
  /* 11ef3f1f pop esi */
  ESI = (pop32());
  /* 11ef3f20 pop ebx */
  EBX = (pop32());
  /* 11ef3f21 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3f24 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3f26 call 0x11ef9720 */
  push32(0x11ef3f2bu); f_11ef9720();
  /* 11ef3f2b mov esp, ebp */
  ESP = (EBP);
  /* 11ef3f2d pop ebp */
  EBP = (pop32());
  /* 11ef3f2e ret  */
  ESPCHK(0x11ef3e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f70 @ 0x11ef3f70 (293 bytes, 97 insns) */
void f_11ef3f70(void) {
  FTRACE(0x11ef3f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef3f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef3f71 mov ebp, esp */
  EBP = (ESP);
  /* 11ef3f73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef3f76 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef3f77 push esi */
  push32((uint32_t)(ESI));
  /* 11ef3f78 push edi */
  push32((uint32_t)(EDI));
  /* 11ef3f79 lea edi, [ebp - 0x7c] */
  EDI = ((uint32_t)(EBP + -0x7c));
  /* 11ef3f7c mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11ef3f81 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef3f86 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef3f88 mov esi, esp */
  ESI = (ESP);
  /* 11ef3f8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef3f8d push eax */
  push32((uint32_t)(EAX));
  /* 11ef3f8e call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef3f94u);
  /* 11ef3f94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3f97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3f99 call 0x11ef9720 */
  push32(0x11ef3f9eu); f_11ef9720();
  /* 11ef3f9e mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11ef3fa1 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3fa5 jle 0x11ef4081 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef4081;
  /* 11ef3fab mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11ef3fb2 mov esi, esp */
  ESI = (ESP);
  /* 11ef3fb4 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11ef3fb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef3fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef3fba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef3fbd push edx */
  push32((uint32_t)(EDX));
  /* 11ef3fbe call dword ptr [0x11f33590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33590))), 0x11ef3fc4u);
  /* 11ef3fc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3fc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3fc9 call 0x11ef9720 */
  push32(0x11ef3fceu); f_11ef9720();
  /* 11ef3fce mov eax, dword ptr [ebp - 0x26] */
  EAX = (r32((uint32_t)(EBP + -0x26)));
  /* 11ef3fd1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef3fd6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ef3fd9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ef3fdf sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef3fe1 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11ef3fe4 mov dword ptr [ebp - 0x3c], 1 */
  w32((uint32_t)(EBP + -0x3c), (0x1u));
  /* 11ef3feb jmp 0x11ef3ff6 */
  goto L_11ef3ff6;
L_11ef3fed:;
  /* 11ef3fed mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ef3ff0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef3ff3 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
L_11ef3ff6:;
  /* 11ef3ff6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ef3ff9 cmp eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef3ffc jge 0x11ef4059 */
  if ((C.sf==C.of)) goto L_11ef4059;
  /* 11ef3ffe mov esi, esp */
  ESI = (ESP);
  /* 11ef4000 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11ef4003 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef4004 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ef4007 push edx */
  push32((uint32_t)(EDX));
  /* 11ef4008 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef400b push eax */
  push32((uint32_t)(EAX));
  /* 11ef400c call dword ptr [0x11f33590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33590))), 0x11ef4012u);
  /* 11ef4012 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4015 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4017 call 0x11ef9720 */
  push32(0x11ef401cu); f_11ef9720();
  /* 11ef401c mov ecx, dword ptr [ebp - 0x26] */
  ECX = (r32((uint32_t)(EBP + -0x26)));
  /* 11ef401f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ef4025 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ef4028 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ef402e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4030 cmp ecx, dword ptr [ebp - 0x38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4033 jle 0x11ef4057 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef4057;
  /* 11ef4035 mov eax, dword ptr [ebp - 0x26] */
  EAX = (r32((uint32_t)(EBP + -0x26)));
  /* 11ef4038 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef403d mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ef4040 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ef4046 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4048 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11ef404b mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ef404e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ef4054 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
L_11ef4057:;
  /* 11ef4057 jmp 0x11ef3fed */
  goto L_11ef3fed;
L_11ef4059:;
  /* 11ef4059 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef405c push eax */
  push32((uint32_t)(EAX));
  /* 11ef405d call 0x11ef1253 */
  push32(0x11ef4062u); f_11ef1253();
  /* 11ef4062 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4065 mov esi, esp */
  ESI = (ESP);
  /* 11ef4067 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ef406a push ecx */
  push32((uint32_t)(ECX));
  /* 11ef406b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef406e push edx */
  push32((uint32_t)(EDX));
  /* 11ef406f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4071 call dword ptr [0x11f33544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33544))), 0x11ef4077u);
  /* 11ef4077 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef407a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef407c call 0x11ef9720 */
  push32(0x11ef4081u); f_11ef9720();
L_11ef4081:;
  /* 11ef4081 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef4084 pop edi */
  EDI = (pop32());
  /* 11ef4085 pop esi */
  ESI = (pop32());
  /* 11ef4086 pop ebx */
  EBX = (pop32());
  /* 11ef4087 add esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef408a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef408c call 0x11ef9720 */
  push32(0x11ef4091u); f_11ef9720();
  /* 11ef4091 mov esp, ebp */
  ESP = (EBP);
  /* 11ef4093 pop ebp */
  EBP = (pop32());
  /* 11ef4094 ret  */
  ESPCHK(0x11ef3f70u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e0 @ 0x11ef40e0 (146 bytes, 52 insns) */
void f_11ef40e0(void) {
  FTRACE(0x11ef40e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef40e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef40e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef40e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef40e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef40e7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef40e8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef40e9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef40ec mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef40f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef40f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef40f8 mov esi, esp */
  ESI = (ESP);
  /* 11ef40fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef40fc call dword ptr [0x11f3353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3353c))), 0x11ef4102u);
  /* 11ef4102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4107 call 0x11ef9720 */
  push32(0x11ef410cu); f_11ef9720();
  /* 11ef410c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ef4113 jmp 0x11ef411e */
  goto L_11ef411e;
L_11ef4115:;
  /* 11ef4115 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef4118 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef411b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ef411e:;
  /* 11ef411e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4122 jge 0x11ef4147 */
  if ((C.sf==C.of)) goto L_11ef4147;
  /* 11ef4124 mov esi, esp */
  ESI = (ESP);
  /* 11ef4126 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef4128 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef412a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef412d lea edx, [ecx*8 + 0x11f2fd58] */
  EDX = ((uint32_t)(ECX*8 + 0x11f2fd58));
  /* 11ef4134 push edx */
  push32((uint32_t)(EDX));
  /* 11ef4135 call dword ptr [0x11f33540] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33540))), 0x11ef413bu);
  /* 11ef413b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef413e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4140 call 0x11ef9720 */
  push32(0x11ef4145u); f_11ef9720();
  /* 11ef4145 jmp 0x11ef4115 */
  goto L_11ef4115;
L_11ef4147:;
  /* 11ef4147 mov esi, esp */
  ESI = (ESP);
  /* 11ef4149 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef414b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef414e push eax */
  push32((uint32_t)(EAX));
  /* 11ef414f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4151 call dword ptr [0x11f33588] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33588))), 0x11ef4157u);
  /* 11ef4157 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef415a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef415c call 0x11ef9720 */
  push32(0x11ef4161u); f_11ef9720();
  /* 11ef4161 pop edi */
  EDI = (pop32());
  /* 11ef4162 pop esi */
  ESI = (pop32());
  /* 11ef4163 pop ebx */
  EBX = (pop32());
  /* 11ef4164 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4167 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4169 call 0x11ef9720 */
  push32(0x11ef416eu); f_11ef9720();
  /* 11ef416e mov esp, ebp */
  ESP = (EBP);
  /* 11ef4170 pop ebp */
  EBP = (pop32());
  /* 11ef4171 ret  */
  ESPCHK(0x11ef40e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041a0 @ 0x11ef41a0 (295 bytes, 98 insns) */
void f_11ef41a0(void) {
  FTRACE(0x11ef41a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef41a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef41a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef41a3 sub esp, 0x90 */
  { uint32_t _a=(ESP),_b=(0x90u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef41a9 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef41aa push esi */
  push32((uint32_t)(ESI));
  /* 11ef41ab push edi */
  push32((uint32_t)(EDI));
  /* 11ef41ac lea edi, [ebp - 0x90] */
  EDI = ((uint32_t)(EBP + -0x90));
  /* 11ef41b2 mov ecx, 0x24 */
  ECX = (0x24u);
  /* 11ef41b7 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef41bc rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef41be mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef41c1 push eax */
  push32((uint32_t)(EAX));
  /* 11ef41c2 call 0x11ef120d */
  push32(0x11ef41c7u); f_11ef120d();
  /* 11ef41c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef41ca mov esi, esp */
  ESI = (ESP);
  /* 11ef41cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef41cf push ecx */
  push32((uint32_t)(ECX));
  /* 11ef41d0 call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef41d6u);
  /* 11ef41d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef41d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef41db call 0x11ef9720 */
  push32(0x11ef41e0u); f_11ef9720();
  /* 11ef41e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ef41e3 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef41ea mov dword ptr [ebp - 0xc], 0xfffa */
  w32((uint32_t)(EBP + -0xc), (0xfffau));
  /* 11ef41f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef41f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ef41f6 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11ef41f9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ef41fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef41ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ef4201 mov dx, word ptr [ecx + 2] */
  DX = (r16((uint32_t)(ECX + 0x2)));
  /* 11ef4205 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ef4208 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef420c jle 0x11ef42b3 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef42b3;
  /* 11ef4212 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11ef4219 jmp 0x11ef4224 */
  goto L_11ef4224;
L_11ef421b:;
  /* 11ef421b mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ef421e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4221 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
L_11ef4224:;
  /* 11ef4224 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ef4227 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef422a jge 0x11ef428b */
  if ((C.sf==C.of)) goto L_11ef428b;
  /* 11ef422c mov esi, esp */
  ESI = (ESP);
  /* 11ef422e lea edx, [ebp - 0x40] */
  EDX = ((uint32_t)(EBP + -0x40));
  /* 11ef4231 push edx */
  push32((uint32_t)(EDX));
  /* 11ef4232 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ef4235 push eax */
  push32((uint32_t)(EAX));
  /* 11ef4236 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef4239 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef423a call dword ptr [0x11f33590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33590))), 0x11ef4240u);
  /* 11ef4240 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4243 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4245 call 0x11ef9720 */
  push32(0x11ef424au); f_11ef9720();
  /* 11ef424a mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ef424d sub edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4250 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 11ef4253 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ef4256 sub eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4259 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11ef425c mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11ef425f push ecx */
  push32((uint32_t)(ECX));
  /* 11ef4260 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ef4263 push edx */
  push32((uint32_t)(EDX));
  /* 11ef4264 call 0x11ef1212 */
  push32(0x11ef4269u); f_11ef1212();
  /* 11ef4269 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef426c mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11ef426f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ef4272 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4275 jge 0x11ef4289 */
  if ((C.sf==C.of)) goto L_11ef4289;
  /* 11ef4277 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ef427a and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ef4280 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ef4283 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ef4286 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ef4289:;
  /* 11ef4289 jmp 0x11ef421b */
  goto L_11ef421b;
L_11ef428b:;
  /* 11ef428b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef428e push eax */
  push32((uint32_t)(EAX));
  /* 11ef428f call 0x11ef1253 */
  push32(0x11ef4294u); f_11ef1253();
  /* 11ef4294 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4297 mov esi, esp */
  ESI = (ESP);
  /* 11ef4299 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef429c push ecx */
  push32((uint32_t)(ECX));
  /* 11ef429d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef42a0 push edx */
  push32((uint32_t)(EDX));
  /* 11ef42a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef42a3 call dword ptr [0x11f33544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33544))), 0x11ef42a9u);
  /* 11ef42a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef42ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef42ae call 0x11ef9720 */
  push32(0x11ef42b3u); f_11ef9720();
L_11ef42b3:;
  /* 11ef42b3 pop edi */
  EDI = (pop32());
  /* 11ef42b4 pop esi */
  ESI = (pop32());
  /* 11ef42b5 pop ebx */
  EBX = (pop32());
  /* 11ef42b6 add esp, 0x90 */
  { uint32_t _a=(ESP),_b=(0x90u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef42bc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef42be call 0x11ef9720 */
  push32(0x11ef42c3u); f_11ef9720();
  /* 11ef42c3 mov esp, ebp */
  ESP = (EBP);
  /* 11ef42c5 pop ebp */
  EBP = (pop32());
  /* 11ef42c6 ret  */
  ESPCHK(0x11ef41a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004310 @ 0x11ef4310 (327 bytes, 100 insns) */
void f_11ef4310(void) {
  FTRACE(0x11ef4310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef4310 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef4311 mov ebp, esp */
  EBP = (ESP);
  /* 11ef4313 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4316 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef4317 push esi */
  push32((uint32_t)(ESI));
  /* 11ef4318 push edi */
  push32((uint32_t)(EDI));
  /* 11ef4319 lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11ef431c mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11ef4321 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef4326 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef4328 mov esi, esp */
  ESI = (ESP);
  /* 11ef432a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef432c call dword ptr [0x11f3353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3353c))), 0x11ef4332u);
  /* 11ef4332 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4337 call 0x11ef9720 */
  push32(0x11ef433cu); f_11ef9720();
  /* 11ef433c mov esi, esp */
  ESI = (ESP);
  /* 11ef433e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef4340 push 0x11f2fd50 */
  push32((uint32_t)(0x11f2fd50u));
  /* 11ef4345 call dword ptr [0x11f33560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33560))), 0x11ef434bu);
  /* 11ef434b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef434e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4350 call 0x11ef9720 */
  push32(0x11ef4355u); f_11ef9720();
  /* 11ef4355 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ef4357 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4359 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11ef435c mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11ef435f mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef4363 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ef436a jmp 0x11ef4375 */
  goto L_11ef4375;
L_11ef436c:;
  /* 11ef436c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef436f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4372 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ef4375:;
  /* 11ef4375 cmp dword ptr [ebp - 0xc], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4379 jge 0x11ef441b */
  if ((C.sf==C.of)) goto L_11ef441b;
  /* 11ef437f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef4382 imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4385 add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef438b call 0x11ef1217 */
  push32(0x11ef4390u); f_11ef1217();
  /* 11ef4390 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef4395 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4397 je 0x11ef4416 */
  if (C.zf) goto L_11ef4416;
  /* 11ef4399 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef439c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef43a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef43a3 je 0x11ef43ec */
  if (C.zf) goto L_11ef43ec;
  /* 11ef43a5 push 0x11f2fd50 */
  push32((uint32_t)(0x11f2fd50u));
  /* 11ef43aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef43ad imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef43b0 add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef43b6 call 0x11ef104b */
  push32(0x11ef43bbu); f_11ef104b();
  /* 11ef43bb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef43c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef43c2 je 0x11ef43ea */
  if (C.zf) goto L_11ef43ea;
  /* 11ef43c4 mov esi, esp */
  ESI = (ESP);
  /* 11ef43c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef43c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef43cb imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef43ce add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef43d4 call 0x11ef11f9 */
  push32(0x11ef43d9u); f_11ef11f9();
  /* 11ef43d9 push eax */
  push32((uint32_t)(EAX));
  /* 11ef43da call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef43e0u);
  /* 11ef43e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef43e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef43e5 call 0x11ef9720 */
  push32(0x11ef43eau); f_11ef9720();
L_11ef43ea:;
  /* 11ef43ea jmp 0x11ef4412 */
  goto L_11ef4412;
L_11ef43ec:;
  /* 11ef43ec mov esi, esp */
  ESI = (ESP);
  /* 11ef43ee push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef43f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef43f3 imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef43f6 add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef43fc call 0x11ef11f9 */
  push32(0x11ef4401u); f_11ef11f9();
  /* 11ef4401 push eax */
  push32((uint32_t)(EAX));
  /* 11ef4402 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef4408u);
  /* 11ef4408 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef440b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef440d call 0x11ef9720 */
  push32(0x11ef4412u); f_11ef9720();
L_11ef4412:;
  /* 11ef4412 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef4416:;
  /* 11ef4416 jmp 0x11ef436c */
  goto L_11ef436c;
L_11ef441b:;
  /* 11ef441b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef441e and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ef4424 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ef4426 je 0x11ef4446 */
  if (C.zf) goto L_11ef4446;
  /* 11ef4428 mov esi, esp */
  ESI = (ESP);
  /* 11ef442a push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11ef442f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef4431 push 0x11f2fd50 */
  push32((uint32_t)(0x11f2fd50u));
  /* 11ef4436 call dword ptr [0x11f33538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33538))), 0x11ef443cu);
  /* 11ef443c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef443f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4441 call 0x11ef9720 */
  push32(0x11ef4446u); f_11ef9720();
L_11ef4446:;
  /* 11ef4446 pop edi */
  EDI = (pop32());
  /* 11ef4447 pop esi */
  ESI = (pop32());
  /* 11ef4448 pop ebx */
  EBX = (pop32());
  /* 11ef4449 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef444c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef444e call 0x11ef9720 */
  push32(0x11ef4453u); f_11ef9720();
  /* 11ef4453 mov esp, ebp */
  ESP = (EBP);
  /* 11ef4455 pop ebp */
  EBP = (pop32());
  /* 11ef4456 ret  */
  ESPCHK(0x11ef4310u, _esp0);
  ESP += 4; return;
}

/* FUN_100044b0 @ 0x11ef44b0 (166 bytes, 56 insns) */
void f_11ef44b0(void) {
  FTRACE(0x11ef44b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef44b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef44b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef44b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef44b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef44b7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef44b8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef44b9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef44bc mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef44c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef44c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef44c8 mov byte ptr [ebp - 4], 0 */
  w8((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ef44cc mov esi, esp */
  ESI = (ESP);
  /* 11ef44ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef44d0 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11ef44d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef44d8 call 0x11ef11c7 */
  push32(0x11ef44ddu); f_11ef11c7();
  /* 11ef44dd push eax */
  push32((uint32_t)(EAX));
  /* 11ef44de call dword ptr [0x11f33560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33560))), 0x11ef44e4u);
  /* 11ef44e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef44e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef44e9 call 0x11ef9720 */
  push32(0x11ef44eeu); f_11ef9720();
  /* 11ef44ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef44f0 jle 0x11ef4542 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef4542;
  /* 11ef44f2 mov esi, esp */
  ESI = (ESP);
  /* 11ef44f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef44f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef44f8 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11ef44fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef4500 call 0x11ef11c7 */
  push32(0x11ef4505u); f_11ef11c7();
  /* 11ef4505 push eax */
  push32((uint32_t)(EAX));
  /* 11ef4506 call dword ptr [0x11f33584] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33584))), 0x11ef450cu);
  /* 11ef450c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef450f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4511 call 0x11ef9720 */
  push32(0x11ef4516u); f_11ef9720();
  /* 11ef4516 mov esi, esp */
  ESI = (ESP);
  /* 11ef4518 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef451a push 0x11f2fd48 */
  push32((uint32_t)(0x11f2fd48u));
  /* 11ef451f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4521 call dword ptr [0x11f33588] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33588))), 0x11ef4527u);
  /* 11ef4527 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef452a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef452c call 0x11ef9720 */
  push32(0x11ef4531u); f_11ef9720();
  /* 11ef4531 push 0x11f2fd48 */
  push32((uint32_t)(0x11f2fd48u));
  /* 11ef4536 call 0x11ef105a */
  push32(0x11ef453bu); f_11ef105a();
  /* 11ef453b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef453e mov byte ptr [ebp - 4], 1 */
  w8((uint32_t)(EBP + -0x4), (0x1u));
L_11ef4542:;
  /* 11ef4542 mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 11ef4545 pop edi */
  EDI = (pop32());
  /* 11ef4546 pop esi */
  ESI = (pop32());
  /* 11ef4547 pop ebx */
  EBX = (pop32());
  /* 11ef4548 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef454b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef454d call 0x11ef9720 */
  push32(0x11ef4552u); f_11ef9720();
  /* 11ef4552 mov esp, ebp */
  ESP = (EBP);
  /* 11ef4554 pop ebp */
  EBP = (pop32());
  /* 11ef4555 ret  */
  ESPCHK(0x11ef44b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004580 @ 0x11ef4580 (146 bytes, 47 insns) */
void f_11ef4580(void) {
  FTRACE(0x11ef4580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef4580 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef4581 mov ebp, esp */
  EBP = (ESP);
  /* 11ef4583 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4586 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef4587 push esi */
  push32((uint32_t)(ESI));
  /* 11ef4588 push edi */
  push32((uint32_t)(EDI));
  /* 11ef4589 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef458c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef4591 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef4596 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef4598 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ef459f jmp 0x11ef45aa */
  goto L_11ef45aa;
L_11ef45a1:;
  /* 11ef45a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef45a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef45a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ef45aa:;
  /* 11ef45aa cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef45ae jge 0x11ef4601 */
  if ((C.sf==C.of)) goto L_11ef4601;
  /* 11ef45b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef45b3 imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef45b6 add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef45bc call 0x11ef1217 */
  push32(0x11ef45c1u); f_11ef1217();
  /* 11ef45c1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef45c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef45c8 je 0x11ef45ff */
  if (C.zf) goto L_11ef45ff;
  /* 11ef45ca push 0x11f2fd50 */
  push32((uint32_t)(0x11f2fd50u));
  /* 11ef45cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef45d2 imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef45d5 add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef45db call 0x11ef104b */
  push32(0x11ef45e0u); f_11ef104b();
  /* 11ef45e0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef45e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef45e7 jne 0x11ef45ff */
  if (!C.zf) goto L_11ef45ff;
  /* 11ef45e9 push 0x11f2fd50 */
  push32((uint32_t)(0x11f2fd50u));
  /* 11ef45ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef45f1 imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef45f4 add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef45fa call 0x11ef11db */
  push32(0x11ef45ffu); f_11ef11db();
L_11ef45ff:;
  /* 11ef45ff jmp 0x11ef45a1 */
  goto L_11ef45a1;
L_11ef4601:;
  /* 11ef4601 pop edi */
  EDI = (pop32());
  /* 11ef4602 pop esi */
  ESI = (pop32());
  /* 11ef4603 pop ebx */
  EBX = (pop32());
  /* 11ef4604 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4607 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4609 call 0x11ef9720 */
  push32(0x11ef460eu); f_11ef9720();
  /* 11ef460e mov esp, ebp */
  ESP = (EBP);
  /* 11ef4610 pop ebp */
  EBP = (pop32());
  /* 11ef4611 ret  */
  ESPCHK(0x11ef4580u, _esp0);
  ESP += 4; return;
}

/* FUN_10004640 @ 0x11ef4640 (214 bytes, 74 insns) */
void f_11ef4640(void) {
  FTRACE(0x11ef4640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef4640 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef4641 mov ebp, esp */
  EBP = (ESP);
  /* 11ef4643 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4646 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef4647 push esi */
  push32((uint32_t)(ESI));
  /* 11ef4648 push edi */
  push32((uint32_t)(EDI));
  /* 11ef4649 lea edi, [ebp - 0x60] */
  EDI = ((uint32_t)(EBP + -0x60));
  /* 11ef464c mov ecx, 0x18 */
  ECX = (0x18u);
  /* 11ef4651 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef4656 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef4658 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef465b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ef465d mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11ef4660 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef4663 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef4666 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ef4668 mov ax, word ptr [edx + 2] */
  AX = (r16((uint32_t)(EDX + 0x2)));
  /* 11ef466c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ef466f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef4672 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ef4675 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef4678 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ef467b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ef467e sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4681 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ef4684 fild dword ptr [ebp - 0x1c] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x1c)));
  /* 11ef4687 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef468a sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef468d mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ef4690 fild dword ptr [ebp - 0x20] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x20)));
  /* 11ef4693 fdivp st(1) */
  FPU_ST(1) = FPU_ST(1) / FPU_ST(0);
  (void)fpu_pop();
  /* 11ef4695 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4698 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11ef469b call 0x11ef98d4 */
  push32(0x11ef46a0u); f_11ef98d4();
  /* 11ef46a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef46a3 fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 11ef46a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef46a9 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef46ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ef46ae jge 0x11ef46bc */
  if ((C.sf==C.of)) goto L_11ef46bc;
  /* 11ef46b0 fld qword ptr [0x11f2a040] */
  fpu_push(rf64((uint32_t)(0x11f2a040)));
  /* 11ef46b6 fadd qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + -0x18)));
  /* 11ef46b9 fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
L_11ef46bc:;
  /* 11ef46bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ef46bf push eax */
  push32((uint32_t)(EAX));
  /* 11ef46c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ef46c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef46c4 call 0x11ef9824 */
  push32(0x11ef46c9u); f_11ef9824();
  /* 11ef46c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef46cc fmul qword ptr [0x11f2a2b0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11f2a2b0)));
  /* 11ef46d2 fiadd dword ptr [ebp - 0xc] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0xc)));
  /* 11ef46d5 call 0x11ef9a0c */
  push32(0x11ef46dau); f_11ef9a0c();
  /* 11ef46da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef46dd mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11ef46e0 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ef46e3 push eax */
  push32((uint32_t)(EAX));
  /* 11ef46e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ef46e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef46e8 call 0x11ef9774 */
  push32(0x11ef46edu); f_11ef9774();
  /* 11ef46ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef46f0 fmul qword ptr [0x11f2a2b0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11f2a2b0)));
  /* 11ef46f6 fiadd dword ptr [ebp - 0x10] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0x10)));
  /* 11ef46f9 call 0x11ef9a0c */
  push32(0x11ef46feu); f_11ef9a0c();
  /* 11ef46fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef4701 mov word ptr [edx + 2], ax */
  w16((uint32_t)(EDX + 0x2), (AX));
  /* 11ef4705 pop edi */
  EDI = (pop32());
  /* 11ef4706 pop esi */
  ESI = (pop32());
  /* 11ef4707 pop ebx */
  EBX = (pop32());
  /* 11ef4708 add esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef470b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef470d call 0x11ef9720 */
  push32(0x11ef4712u); f_11ef9720();
  /* 11ef4712 mov esp, ebp */
  ESP = (EBP);
  /* 11ef4714 pop ebp */
  EBP = (pop32());
  /* 11ef4715 ret  */
  ESPCHK(0x11ef4640u, _esp0);
  ESP += 4; return;
}

/* FUN_10004750 @ 0x11ef4750 (530 bytes, 155 insns) */
void f_11ef4750(void) {
  FTRACE(0x11ef4750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef4750 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef4751 mov ebp, esp */
  EBP = (ESP);
  /* 11ef4753 sub esp, 0x84 */
  { uint32_t _a=(ESP),_b=(0x84u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4759 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef475a push esi */
  push32((uint32_t)(ESI));
  /* 11ef475b push edi */
  push32((uint32_t)(EDI));
  /* 11ef475c lea edi, [ebp - 0x84] */
  EDI = ((uint32_t)(EBP + -0x84));
  /* 11ef4762 mov ecx, 0x21 */
  ECX = (0x21u);
  /* 11ef4767 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef476c rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef476e mov byte ptr [ebp - 4], 0 */
  w8((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ef4772 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef4779 jmp 0x11ef4784 */
  goto L_11ef4784;
L_11ef477b:;
  /* 11ef477b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef477e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4781 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ef4784:;
  /* 11ef4784 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4788 jge 0x11ef47d5 */
  if ((C.sf==C.of)) goto L_11ef47d5;
  /* 11ef478a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef478d and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ef4793 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ef4795 jne 0x11ef47d5 */
  if (!C.zf) goto L_11ef47d5;
  /* 11ef4797 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef479a imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef479d add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef47a3 call 0x11ef1217 */
  push32(0x11ef47a8u); f_11ef1217();
  /* 11ef47a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef47ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef47af je 0x11ef47d3 */
  if (C.zf) goto L_11ef47d3;
  /* 11ef47b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef47b4 imul edx, edx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x41u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef47b7 add edx, 0x11f2ffa0 */
  { uint32_t _a=(EDX),_b=(0x11f2ffa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef47bd push edx */
  push32((uint32_t)(EDX));
  /* 11ef47be call 0x11ef100a */
  push32(0x11ef47c3u); f_11ef100a();
  /* 11ef47c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef47c6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef47cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef47cd je 0x11ef47d3 */
  if (C.zf) goto L_11ef47d3;
  /* 11ef47cf mov byte ptr [ebp - 4], 1 */
  w8((uint32_t)(EBP + -0x4), (0x1u));
L_11ef47d3:;
  /* 11ef47d3 jmp 0x11ef477b */
  goto L_11ef477b;
L_11ef47d5:;
  /* 11ef47d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ef47d7 mov al, byte ptr [0x11f304b8] */
  AL = (r8((uint32_t)(0x11f304b8)));
  /* 11ef47dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef47de je 0x11ef485c */
  if (C.zf) goto L_11ef485c;
  /* 11ef47e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef47e3 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ef47e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ef47eb je 0x11ef485c */
  if (C.zf) goto L_11ef485c;
  /* 11ef47ed mov byte ptr [0x11f304b8], 0 */
  w8((uint32_t)(0x11f304b8), (0x0u));
  /* 11ef47f4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ef47fb jmp 0x11ef4806 */
  goto L_11ef4806;
L_11ef47fd:;
  /* 11ef47fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef4800 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4803 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ef4806:;
  /* 11ef4806 cmp dword ptr [ebp - 0xc], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef480a jge 0x11ef485c */
  if ((C.sf==C.of)) goto L_11ef485c;
  /* 11ef480c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef480f imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4812 add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4818 call 0x11ef1217 */
  push32(0x11ef481du); f_11ef1217();
  /* 11ef481d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef4822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4824 je 0x11ef485a */
  if (C.zf) goto L_11ef485a;
  /* 11ef4826 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef4829 imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef482c add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4832 call 0x11ef10aa */
  push32(0x11ef4837u); f_11ef10aa();
  /* 11ef4837 push eax */
  push32((uint32_t)(EAX));
  /* 11ef4838 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef483b imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef483e add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4844 call 0x11ef11db */
  push32(0x11ef4849u); f_11ef11db();
  /* 11ef4849 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef484c imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef484f add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4855 call 0x11ef121c */
  push32(0x11ef485au); f_11ef121c();
L_11ef485a:;
  /* 11ef485a jmp 0x11ef47fd */
  goto L_11ef47fd;
L_11ef485c:;
  /* 11ef485c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef485f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef4864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4866 jne 0x11ef4949 */
  if (!C.zf) goto L_11ef4949;
  /* 11ef486c mov byte ptr [0x11f304b8], 1 */
  w8((uint32_t)(0x11f304b8), (0x1u));
  /* 11ef4873 push 0x11f2fd48 */
  push32((uint32_t)(0x11f2fd48u));
  /* 11ef4878 push 0x11f2fd50 */
  push32((uint32_t)(0x11f2fd50u));
  /* 11ef487d call 0x11ef1195 */
  push32(0x11ef4882u); f_11ef1195();
  /* 11ef4882 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4885 mov esi, esp */
  ESI = (ESP);
  /* 11ef4887 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11ef488a push ecx */
  push32((uint32_t)(ECX));
  /* 11ef488b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef488d push 0x11f2fd48 */
  push32((uint32_t)(0x11f2fd48u));
  /* 11ef4892 call dword ptr [0x11f33590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33590))), 0x11ef4898u);
  /* 11ef4898 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef489b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef489d call 0x11ef9720 */
  push32(0x11ef48a2u); f_11ef9720();
  /* 11ef48a2 mov dword ptr [ebp - 0x3c], 0 */
  w32((uint32_t)(EBP + -0x3c), (0x0u));
  /* 11ef48a9 jmp 0x11ef48b4 */
  goto L_11ef48b4;
L_11ef48ab:;
  /* 11ef48ab mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ef48ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef48b1 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
L_11ef48b4:;
  /* 11ef48b4 cmp dword ptr [ebp - 0x3c], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef48b8 jge 0x11ef4947 */
  if ((C.sf==C.of)) goto L_11ef4947;
  /* 11ef48be mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ef48c1 imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef48c4 add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef48ca call 0x11ef1217 */
  push32(0x11ef48cfu); f_11ef1217();
  /* 11ef48cf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef48d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef48d6 je 0x11ef4942 */
  if (C.zf) goto L_11ef4942;
  /* 11ef48d8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ef48db imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef48de add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef48e4 call 0x11ef10aa */
  push32(0x11ef48e9u); f_11ef10aa();
  /* 11ef48e9 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11ef48ec mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ef48ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ef48f1 mov cx, word ptr [eax + 2] */
  CX = (r16((uint32_t)(EAX + 0x2)));
  /* 11ef48f5 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef48f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef48f9 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ef48fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ef48fe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11ef4901 sub eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4904 push eax */
  push32((uint32_t)(EAX));
  /* 11ef4905 call 0x11ef1212 */
  push32(0x11ef490au); f_11ef1212();
  /* 11ef490a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef490d mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 11ef4910 cmp dword ptr [ebp - 0x44], 0x1388 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4917 jle 0x11ef4942 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef4942;
  /* 11ef4919 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ef491c push ecx */
  push32((uint32_t)(ECX));
  /* 11ef491d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ef4920 push edx */
  push32((uint32_t)(EDX));
  /* 11ef4921 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ef4924 push eax */
  push32((uint32_t)(EAX));
  /* 11ef4925 call 0x11ef11c2 */
  push32(0x11ef492au); f_11ef11c2();
  /* 11ef492a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef492d mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ef4930 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef4931 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ef4934 imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4937 add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef493d call 0x11ef11db */
  push32(0x11ef4942u); f_11ef11db();
L_11ef4942:;
  /* 11ef4942 jmp 0x11ef48ab */
  goto L_11ef48ab;
L_11ef4947:;
  /* 11ef4947 jmp 0x11ef494e */
  goto L_11ef494e;
L_11ef4949:;
  /* 11ef4949 call 0x11ef114a */
  push32(0x11ef494eu); f_11ef114a();
L_11ef494e:;
  /* 11ef494e pop edi */
  EDI = (pop32());
  /* 11ef494f pop esi */
  ESI = (pop32());
  /* 11ef4950 pop ebx */
  EBX = (pop32());
  /* 11ef4951 add esp, 0x84 */
  { uint32_t _a=(ESP),_b=(0x84u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4957 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4959 call 0x11ef9720 */
  push32(0x11ef495eu); f_11ef9720();
  /* 11ef495e mov esp, ebp */
  ESP = (EBP);
  /* 11ef4960 pop ebp */
  EBP = (pop32());
  /* 11ef4961 ret  */
  ESPCHK(0x11ef4750u, _esp0);
  ESP += 4; return;
}

/* FUN_100049f0 @ 0x11ef49f0 (1571 bytes, 446 insns) */
void f_11ef49f0(void) {
  FTRACE(0x11ef49f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef49f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef49f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef49f3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef49f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef49f7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef49f8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef49f9 lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11ef49fc mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11ef4a01 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef4a06 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef4a08 mov esi, esp */
  ESI = (ESP);
  /* 11ef4a0a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11ef4a0c call dword ptr [0x11f33500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33500))), 0x11ef4a12u);
  /* 11ef4a12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4a15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4a17 call 0x11ef9720 */
  push32(0x11ef4a1cu); f_11ef9720();
  /* 11ef4a1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef4a21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4a23 je 0x11ef4c17 */
  if (C.zf) goto L_11ef4c17;
  /* 11ef4a29 mov esi, esp */
  ESI = (ESP);
  /* 11ef4a2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4a2d call dword ptr [0x11f33504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33504))), 0x11ef4a33u);
  /* 11ef4a33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4a36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4a38 call 0x11ef9720 */
  push32(0x11ef4a3du); f_11ef9720();
  /* 11ef4a3d mov dword ptr [0x11f2ff88], eax */
  w32((uint32_t)(0x11f2ff88), (EAX));
  /* 11ef4a42 mov eax, dword ptr [0x11f2ff88] */
  EAX = (r32((uint32_t)(0x11f2ff88)));
  /* 11ef4a47 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4a4d mov ecx, 0x36b0 */
  ECX = (0x36b0u);
  /* 11ef4a52 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4a54 mov esi, esp */
  ESI = (ESP);
  /* 11ef4a56 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef4a57 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ef4a59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4a5b call dword ptr [0x11f33508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33508))), 0x11ef4a61u);
  /* 11ef4a61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4a64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4a66 call 0x11ef9720 */
  push32(0x11ef4a6bu); f_11ef9720();
  /* 11ef4a6b mov edx, dword ptr [0x11f2ff88] */
  EDX = (r32((uint32_t)(0x11f2ff88)));
  /* 11ef4a71 imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4a77 mov eax, 0x36b0 */
  EAX = (0x36b0u);
  /* 11ef4a7c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4a7e mov esi, esp */
  ESI = (ESP);
  /* 11ef4a80 push eax */
  push32((uint32_t)(EAX));
  /* 11ef4a81 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef4a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4a85 call dword ptr [0x11f33508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33508))), 0x11ef4a8bu);
  /* 11ef4a8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4a8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4a90 call 0x11ef9720 */
  push32(0x11ef4a95u); f_11ef9720();
  /* 11ef4a95 mov ecx, dword ptr [0x11f2ff88] */
  ECX = (r32((uint32_t)(0x11f2ff88)));
  /* 11ef4a9b imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4aa1 mov edx, 0x36b0 */
  EDX = (0x36b0u);
  /* 11ef4aa6 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4aa8 mov esi, esp */
  ESI = (ESP);
  /* 11ef4aaa push edx */
  push32((uint32_t)(EDX));
  /* 11ef4aab push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4aad push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4aaf call dword ptr [0x11f33508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33508))), 0x11ef4ab5u);
  /* 11ef4ab5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4ab8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4aba call 0x11ef9720 */
  push32(0x11ef4abfu); f_11ef9720();
  /* 11ef4abf mov eax, dword ptr [0x11f2ff88] */
  EAX = (r32((uint32_t)(0x11f2ff88)));
  /* 11ef4ac4 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4aca mov ecx, 0x36b0 */
  ECX = (0x36b0u);
  /* 11ef4acf sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4ad1 mov esi, esp */
  ESI = (ESP);
  /* 11ef4ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef4ad4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ef4ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4ad8 call dword ptr [0x11f33508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33508))), 0x11ef4adeu);
  /* 11ef4ade add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4ae1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4ae3 call 0x11ef9720 */
  push32(0x11ef4ae8u); f_11ef9720();
  /* 11ef4ae8 mov edx, dword ptr [0x11f2ff88] */
  EDX = (r32((uint32_t)(0x11f2ff88)));
  /* 11ef4aee imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4af4 mov eax, 0x36b0 */
  EAX = (0x36b0u);
  /* 11ef4af9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4afb mov esi, esp */
  ESI = (ESP);
  /* 11ef4afd push eax */
  push32((uint32_t)(EAX));
  /* 11ef4afe push 5 */
  push32((uint32_t)(0x5u));
  /* 11ef4b00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4b02 call dword ptr [0x11f33508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33508))), 0x11ef4b08u);
  /* 11ef4b08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4b0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4b0d call 0x11ef9720 */
  push32(0x11ef4b12u); f_11ef9720();
  /* 11ef4b12 mov ecx, dword ptr [0x11f2ff88] */
  ECX = (r32((uint32_t)(0x11f2ff88)));
  /* 11ef4b18 imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4b1e mov edx, 0x36b0 */
  EDX = (0x36b0u);
  /* 11ef4b23 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4b25 mov esi, esp */
  ESI = (ESP);
  /* 11ef4b27 push edx */
  push32((uint32_t)(EDX));
  /* 11ef4b28 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ef4b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4b2c call dword ptr [0x11f33508] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33508))), 0x11ef4b32u);
  /* 11ef4b32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4b35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4b37 call 0x11ef9720 */
  push32(0x11ef4b3cu); f_11ef9720();
  /* 11ef4b3c mov word ptr [0x11f2fd50], 0xbb8 */
  w16((uint32_t)(0x11f2fd50), (0xbb8u));
  /* 11ef4b45 mov word ptr [0x11f2fd52], 0xbb8 */
  w16((uint32_t)(0x11f2fd52), (0xbb8u));
  /* 11ef4b4e mov dword ptr [0x11f2fd54], 0x40000000 */
  w32((uint32_t)(0x11f2fd54), (0x40000000u));
  /* 11ef4b58 mov eax, dword ptr [0x11f2fd54] */
  EAX = (r32((uint32_t)(0x11f2fd54)));
  /* 11ef4b5d add eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4b60 mov dword ptr [0x11f2fd54], eax */
  w32((uint32_t)(0x11f2fd54), (EAX));
  /* 11ef4b65 mov esi, esp */
  ESI = (ESP);
  /* 11ef4b67 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ef4b69 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef4b6b call dword ptr [0x11f3350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3350c))), 0x11ef4b71u);
  /* 11ef4b71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4b74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4b76 call 0x11ef9720 */
  push32(0x11ef4b7bu); f_11ef9720();
  /* 11ef4b7b mov esi, esp */
  ESI = (ESP);
  /* 11ef4b7d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11ef4b7f push 2 */
  push32((uint32_t)(0x2u));
  /* 11ef4b81 call dword ptr [0x11f3350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3350c))), 0x11ef4b87u);
  /* 11ef4b87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4b8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4b8c call 0x11ef9720 */
  push32(0x11ef4b91u); f_11ef9720();
  /* 11ef4b91 mov esi, esp */
  ESI = (ESP);
  /* 11ef4b93 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11ef4b95 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ef4b97 call dword ptr [0x11f3350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3350c))), 0x11ef4b9du);
  /* 11ef4b9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4ba0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4ba2 call 0x11ef9720 */
  push32(0x11ef4ba7u); f_11ef9720();
  /* 11ef4ba7 mov ecx, 4 */
  ECX = (0x4u);
  /* 11ef4bac sub ecx, dword ptr [0x11f2ff88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11f2ff88))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4bb2 imul ecx, ecx, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7d0u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4bb8 mov esi, esp */
  ESI = (ESP);
  /* 11ef4bba push ecx */
  push32((uint32_t)(ECX));
  /* 11ef4bbb push 5 */
  push32((uint32_t)(0x5u));
  /* 11ef4bbd call dword ptr [0x11f3350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3350c))), 0x11ef4bc3u);
  /* 11ef4bc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4bc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4bc8 call 0x11ef9720 */
  push32(0x11ef4bcdu); f_11ef9720();
  /* 11ef4bcd mov esi, esp */
  ESI = (ESP);
  /* 11ef4bcf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4bd1 push 0x11f2ff90 */
  push32((uint32_t)(0x11f2ff90u));
  /* 11ef4bd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4bd8 call dword ptr [0x11f33510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33510))), 0x11ef4bdeu);
  /* 11ef4bde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4be1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4be3 call 0x11ef9720 */
  push32(0x11ef4be8u); f_11ef9720();
  /* 11ef4be8 mov esi, esp */
  ESI = (ESP);
  /* 11ef4bea push 0x96 */
  push32((uint32_t)(0x96u));
  /* 11ef4bef push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11ef4bf1 call dword ptr [0x11f3350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3350c))), 0x11ef4bf7u);
  /* 11ef4bf7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4bfa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4bfc call 0x11ef9720 */
  push32(0x11ef4c01u); f_11ef9720();
  /* 11ef4c01 mov esi, esp */
  ESI = (ESP);
  /* 11ef4c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4c05 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11ef4c07 call dword ptr [0x11f33514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33514))), 0x11ef4c0du);
  /* 11ef4c0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4c10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4c12 call 0x11ef9720 */
  push32(0x11ef4c17u); f_11ef9720();
L_11ef4c17:;
  /* 11ef4c17 mov esi, esp */
  ESI = (ESP);
  /* 11ef4c19 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11ef4c1b call dword ptr [0x11f33518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33518))), 0x11ef4c21u);
  /* 11ef4c21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4c24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4c26 call 0x11ef9720 */
  push32(0x11ef4c2bu); f_11ef9720();
  /* 11ef4c2b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef4c30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4c32 je 0x11ef4c6f */
  if (C.zf) goto L_11ef4c6f;
  /* 11ef4c34 mov esi, esp */
  ESI = (ESP);
  /* 11ef4c36 push 0x11f2a2e8 */
  push32((uint32_t)(0x11f2a2e8u));
  /* 11ef4c3b call dword ptr [0x11f3351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3351c))), 0x11ef4c41u);
  /* 11ef4c41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4c44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4c46 call 0x11ef9720 */
  push32(0x11ef4c4bu); f_11ef9720();
  /* 11ef4c4b cmp dword ptr [0x11f2ff88], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11f2ff88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4c52 jge 0x11ef4c6f */
  if ((C.sf==C.of)) goto L_11ef4c6f;
  /* 11ef4c54 mov esi, esp */
  ESI = (ESP);
  /* 11ef4c56 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef4c58 push 6 */
  push32((uint32_t)(0x6u));
  /* 11ef4c5a push 0x11f2fe38 */
  push32((uint32_t)(0x11f2fe38u));
  /* 11ef4c5f call dword ptr [0x11f33520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33520))), 0x11ef4c65u);
  /* 11ef4c65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4c68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4c6a call 0x11ef9720 */
  push32(0x11ef4c6fu); f_11ef9720();
L_11ef4c6f:;
  /* 11ef4c6f mov esi, esp */
  ESI = (ESP);
  /* 11ef4c71 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ef4c73 call dword ptr [0x11f33518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33518))), 0x11ef4c79u);
  /* 11ef4c79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4c7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4c7e call 0x11ef9720 */
  push32(0x11ef4c83u); f_11ef9720();
  /* 11ef4c83 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef4c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4c8a je 0x11ef4d23 */
  if (C.zf) goto L_11ef4d23;
  /* 11ef4c90 cmp dword ptr [0x11f2ff88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f2ff88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4c97 jle 0x11ef4c9e */
  if ((C.zf||C.sf!=C.of)) goto L_11ef4c9e;
  /* 11ef4c99 call 0x11ef1168 */
  push32(0x11ef4c9eu); f_11ef1168();
L_11ef4c9e:;
  /* 11ef4c9e cmp dword ptr [0x11f2ff88], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11f2ff88))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4ca5 jle 0x11ef4cc8 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef4cc8;
  /* 11ef4ca7 call 0x11ef1168 */
  push32(0x11ef4cacu); f_11ef1168();
  /* 11ef4cac mov esi, esp */
  ESI = (ESP);
  /* 11ef4cae push 0x11f2a2dc */
  push32((uint32_t)(0x11f2a2dcu));
  /* 11ef4cb3 push 0x11f2a2d8 */
  push32((uint32_t)(0x11f2a2d8u));
  /* 11ef4cb8 call dword ptr [0x11f33524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33524))), 0x11ef4cbeu);
  /* 11ef4cbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4cc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4cc3 call 0x11ef9720 */
  push32(0x11ef4cc8u); f_11ef9720();
L_11ef4cc8:;
  /* 11ef4cc8 cmp dword ptr [0x11f2ff88], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11f2ff88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4ccf jle 0x11ef4cf2 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef4cf2;
  /* 11ef4cd1 call 0x11ef1168 */
  push32(0x11ef4cd6u); f_11ef1168();
  /* 11ef4cd6 mov esi, esp */
  ESI = (ESP);
  /* 11ef4cd8 push 0x11f2a2cc */
  push32((uint32_t)(0x11f2a2ccu));
  /* 11ef4cdd push 0x11f2a2d8 */
  push32((uint32_t)(0x11f2a2d8u));
  /* 11ef4ce2 call dword ptr [0x11f33524] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33524))), 0x11ef4ce8u);
  /* 11ef4ce8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4ceb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4ced call 0x11ef9720 */
  push32(0x11ef4cf2u); f_11ef9720();
L_11ef4cf2:;
  /* 11ef4cf2 call 0x11ef114a */
  push32(0x11ef4cf7u); f_11ef114a();
  /* 11ef4cf7 mov edx, 3 */
  EDX = (0x3u);
  /* 11ef4cfc sub edx, dword ptr [0x11f2ff88] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11f2ff88))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4d02 imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4d08 add edx, 0x1388 */
  { uint32_t _a=(EDX),_b=(0x1388u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4d0e mov esi, esp */
  ESI = (ESP);
  /* 11ef4d10 push edx */
  push32((uint32_t)(EDX));
  /* 11ef4d11 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ef4d13 call dword ptr [0x11f3350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3350c))), 0x11ef4d19u);
  /* 11ef4d19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4d1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4d1e call 0x11ef9720 */
  push32(0x11ef4d23u); f_11ef9720();
L_11ef4d23:;
  /* 11ef4d23 mov esi, esp */
  ESI = (ESP);
  /* 11ef4d25 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ef4d27 call dword ptr [0x11f33500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33500))), 0x11ef4d2du);
  /* 11ef4d2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4d30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4d32 call 0x11ef9720 */
  push32(0x11ef4d37u); f_11ef9720();
  /* 11ef4d37 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef4d3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4d3e je 0x11ef5002 */
  if (C.zf) goto L_11ef5002;
  /* 11ef4d44 mov esi, esp */
  ESI = (ESP);
  /* 11ef4d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4d48 push 0x11f2fed8 */
  push32((uint32_t)(0x11f2fed8u));
  /* 11ef4d4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4d4f call dword ptr [0x11f33588] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33588))), 0x11ef4d55u);
  /* 11ef4d55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4d58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4d5a call 0x11ef9720 */
  push32(0x11ef4d5fu); f_11ef9720();
  /* 11ef4d5f mov esi, esp */
  ESI = (ESP);
  /* 11ef4d61 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef4d63 call dword ptr [0x11f33518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33518))), 0x11ef4d69u);
  /* 11ef4d69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4d6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4d6e call 0x11ef9720 */
  push32(0x11ef4d73u); f_11ef9720();
  /* 11ef4d73 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef4d78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4d7a je 0x11ef4d97 */
  if (C.zf) goto L_11ef4d97;
  /* 11ef4d7c call 0x11ef12a8 */
  push32(0x11ef4d81u); f_11ef12a8();
  /* 11ef4d81 mov esi, esp */
  ESI = (ESP);
  /* 11ef4d83 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11ef4d85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef4d87 call dword ptr [0x11f3350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3350c))), 0x11ef4d8du);
  /* 11ef4d8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4d90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4d92 call 0x11ef9720 */
  push32(0x11ef4d97u); f_11ef9720();
L_11ef4d97:;
  /* 11ef4d97 mov esi, esp */
  ESI = (ESP);
  /* 11ef4d99 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ef4d9b call dword ptr [0x11f33518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33518))), 0x11ef4da1u);
  /* 11ef4da1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4da4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4da6 call 0x11ef9720 */
  push32(0x11ef4dabu); f_11ef9720();
  /* 11ef4dab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef4db0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4db2 je 0x11ef4dcf */
  if (C.zf) goto L_11ef4dcf;
  /* 11ef4db4 call 0x11ef114a */
  push32(0x11ef4db9u); f_11ef114a();
  /* 11ef4db9 mov esi, esp */
  ESI = (ESP);
  /* 11ef4dbb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ef4dbd push 2 */
  push32((uint32_t)(0x2u));
  /* 11ef4dbf call dword ptr [0x11f3350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3350c))), 0x11ef4dc5u);
  /* 11ef4dc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4dc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4dca call 0x11ef9720 */
  push32(0x11ef4dcfu); f_11ef9720();
L_11ef4dcf:;
  /* 11ef4dcf mov esi, esp */
  ESI = (ESP);
  /* 11ef4dd1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ef4dd3 call dword ptr [0x11f33518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33518))), 0x11ef4dd9u);
  /* 11ef4dd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4ddc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4dde call 0x11ef9720 */
  push32(0x11ef4de3u); f_11ef9720();
  /* 11ef4de3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef4de8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4dea je 0x11ef4e68 */
  if (C.zf) goto L_11ef4e68;
  /* 11ef4dec mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ef4df3 jmp 0x11ef4dfe */
  goto L_11ef4dfe;
L_11ef4df5:;
  /* 11ef4df5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef4df8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4dfb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ef4dfe:;
  /* 11ef4dfe cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4e02 jge 0x11ef4e52 */
  if ((C.sf==C.of)) goto L_11ef4e52;
  /* 11ef4e04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef4e07 imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4e0a add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4e10 call 0x11ef1217 */
  push32(0x11ef4e15u); f_11ef1217();
  /* 11ef4e15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef4e1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4e1c je 0x11ef4e50 */
  if (C.zf) goto L_11ef4e50;
  /* 11ef4e1e push 0x11f2fd50 */
  push32((uint32_t)(0x11f2fd50u));
  /* 11ef4e23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef4e26 imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4e29 add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4e2f call 0x11ef104b */
  push32(0x11ef4e34u); f_11ef104b();
  /* 11ef4e34 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef4e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4e3b jne 0x11ef4e3f */
  if (!C.zf) goto L_11ef4e3f;
  /* 11ef4e3d jmp 0x11ef4e50 */
  goto L_11ef4e50;
L_11ef4e3f:;
  /* 11ef4e3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef4e42 imul ecx, ecx, 0x41 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x41u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4e45 add ecx, 0x11f2ffa0 */
  { uint32_t _a=(ECX),_b=(0x11f2ffa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4e4b call 0x11ef121c */
  push32(0x11ef4e50u); f_11ef121c();
L_11ef4e50:;
  /* 11ef4e50 jmp 0x11ef4df5 */
  goto L_11ef4df5;
L_11ef4e52:;
  /* 11ef4e52 mov esi, esp */
  ESI = (ESP);
  /* 11ef4e54 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11ef4e56 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ef4e58 call dword ptr [0x11f3350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3350c))), 0x11ef4e5eu);
  /* 11ef4e5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4e61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4e63 call 0x11ef9720 */
  push32(0x11ef4e68u); f_11ef9720();
L_11ef4e68:;
  /* 11ef4e68 mov esi, esp */
  ESI = (ESP);
  /* 11ef4e6a push 4 */
  push32((uint32_t)(0x4u));
  /* 11ef4e6c call dword ptr [0x11f33518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33518))), 0x11ef4e72u);
  /* 11ef4e72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4e75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4e77 call 0x11ef9720 */
  push32(0x11ef4e7cu); f_11ef9720();
  /* 11ef4e7c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef4e81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4e83 je 0x11ef4f23 */
  if (C.zf) goto L_11ef4f23;
  /* 11ef4e89 call 0x11ef1168 */
  push32(0x11ef4e8eu); f_11ef1168();
  /* 11ef4e8e call 0x11ef114a */
  push32(0x11ef4e93u); f_11ef114a();
  /* 11ef4e93 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef4e9a mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ef4ea1 jmp 0x11ef4eac */
  goto L_11ef4eac;
L_11ef4ea3:;
  /* 11ef4ea3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef4ea6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4ea9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11ef4eac:;
  /* 11ef4eac cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4eb0 jge 0x11ef4edb */
  if ((C.sf==C.of)) goto L_11ef4edb;
  /* 11ef4eb2 mov esi, esp */
  ESI = (ESP);
  /* 11ef4eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4eb6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef4eb9 lea eax, [edx*8 + 0x11f2fe60] */
  EAX = ((uint32_t)(EDX*8 + 0x11f2fe60));
  /* 11ef4ec0 push eax */
  push32((uint32_t)(EAX));
  /* 11ef4ec1 call dword ptr [0x11f33528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33528))), 0x11ef4ec7u);
  /* 11ef4ec7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4eca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4ecc call 0x11ef9720 */
  push32(0x11ef4ed1u); f_11ef9720();
  /* 11ef4ed1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef4ed4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4ed6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ef4ed9 jmp 0x11ef4ea3 */
  goto L_11ef4ea3;
L_11ef4edb:;
  /* 11ef4edb mov edx, 4 */
  EDX = (0x4u);
  /* 11ef4ee0 sub edx, dword ptr [0x11f2ff88] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11f2ff88))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4ee6 imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4eec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef4eef imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4ef2 imul eax, dword ptr [0x11f2ff88] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(0x11f2ff88)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ef4ef9 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef4efb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ef4efe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4f02 jg 0x11ef4f0b */
  if ((!C.zf&&C.sf==C.of)) goto L_11ef4f0b;
  /* 11ef4f04 mov dword ptr [ebp - 8], 0xa */
  w32((uint32_t)(EBP + -0x8), (0xau));
L_11ef4f0b:;
  /* 11ef4f0b mov esi, esp */
  ESI = (ESP);
  /* 11ef4f0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef4f10 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef4f11 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ef4f13 call dword ptr [0x11f3350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3350c))), 0x11ef4f19u);
  /* 11ef4f19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4f1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4f1e call 0x11ef9720 */
  push32(0x11ef4f23u); f_11ef9720();
L_11ef4f23:;
  /* 11ef4f23 mov esi, esp */
  ESI = (ESP);
  /* 11ef4f25 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef4f27 call dword ptr [0x11f3352c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3352c))), 0x11ef4f2du);
  /* 11ef4f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4f30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4f32 call 0x11ef9720 */
  push32(0x11ef4f37u); f_11ef9720();
  /* 11ef4f37 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef4f3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4f3e je 0x11ef4f7c */
  if (C.zf) goto L_11ef4f7c;
  /* 11ef4f40 mov esi, esp */
  ESI = (ESP);
  /* 11ef4f42 push 0x11f2a2c4 */
  push32((uint32_t)(0x11f2a2c4u));
  /* 11ef4f47 call dword ptr [0x11f3351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3351c))), 0x11ef4f4du);
  /* 11ef4f4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4f50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4f52 call 0x11ef9720 */
  push32(0x11ef4f57u); f_11ef9720();
  /* 11ef4f57 mov esi, esp */
  ESI = (ESP);
  /* 11ef4f59 call dword ptr [0x11f33530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33530))), 0x11ef4f5fu);
  /* 11ef4f5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4f61 call 0x11ef9720 */
  push32(0x11ef4f66u); f_11ef9720();
  /* 11ef4f66 mov esi, esp */
  ESI = (ESP);
  /* 11ef4f68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4f6a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ef4f6c call dword ptr [0x11f33514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33514))), 0x11ef4f72u);
  /* 11ef4f72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4f75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4f77 call 0x11ef9720 */
  push32(0x11ef4f7cu); f_11ef9720();
L_11ef4f7c:;
  /* 11ef4f7c mov esi, esp */
  ESI = (ESP);
  /* 11ef4f7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4f80 push 0x11f2fd58 */
  push32((uint32_t)(0x11f2fd58u));
  /* 11ef4f85 call dword ptr [0x11f33528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33528))), 0x11ef4f8bu);
  /* 11ef4f8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4f8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4f90 call 0x11ef9720 */
  push32(0x11ef4f95u); f_11ef9720();
  /* 11ef4f95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef4f97 jne 0x11ef4fd5 */
  if (!C.zf) goto L_11ef4fd5;
  /* 11ef4f99 mov esi, esp */
  ESI = (ESP);
  /* 11ef4f9b push 0x11f2a2bc */
  push32((uint32_t)(0x11f2a2bcu));
  /* 11ef4fa0 call dword ptr [0x11f3351c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3351c))), 0x11ef4fa6u);
  /* 11ef4fa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4fa9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4fab call 0x11ef9720 */
  push32(0x11ef4fb0u); f_11ef9720();
  /* 11ef4fb0 mov esi, esp */
  ESI = (ESP);
  /* 11ef4fb2 call dword ptr [0x11f33534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33534))), 0x11ef4fb8u);
  /* 11ef4fb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4fba call 0x11ef9720 */
  push32(0x11ef4fbfu); f_11ef9720();
  /* 11ef4fbf mov esi, esp */
  ESI = (ESP);
  /* 11ef4fc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4fc3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ef4fc5 call dword ptr [0x11f33514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33514))), 0x11ef4fcbu);
  /* 11ef4fcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4fce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4fd0 call 0x11ef9720 */
  push32(0x11ef4fd5u); f_11ef9720();
L_11ef4fd5:;
  /* 11ef4fd5 mov esi, esp */
  ESI = (ESP);
  /* 11ef4fd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4fd9 call dword ptr [0x11f3353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3353c))), 0x11ef4fdfu);
  /* 11ef4fdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4fe2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4fe4 call 0x11ef9720 */
  push32(0x11ef4fe9u); f_11ef9720();
  /* 11ef4fe9 mov esi, esp */
  ESI = (ESP);
  /* 11ef4feb push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef4fed push 0x11f2fed8 */
  push32((uint32_t)(0x11f2fed8u));
  /* 11ef4ff2 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef4ff8u);
  /* 11ef4ff8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef4ffb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef4ffd call 0x11ef9720 */
  push32(0x11ef5002u); f_11ef9720();
L_11ef5002:;
  /* 11ef5002 pop edi */
  EDI = (pop32());
  /* 11ef5003 pop esi */
  ESI = (pop32());
  /* 11ef5004 pop ebx */
  EBX = (pop32());
  /* 11ef5005 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5008 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef500a call 0x11ef9720 */
  push32(0x11ef500fu); f_11ef9720();
  /* 11ef500f mov esp, ebp */
  ESP = (EBP);
  /* 11ef5011 pop ebp */
  EBP = (pop32());
  /* 11ef5012 ret  */
  ESPCHK(0x11ef49f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100051a0 @ 0x11ef51a0 (118 bytes, 45 insns) */
void f_11ef51a0(void) {
  FTRACE(0x11ef51a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef51a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef51a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef51a3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef51a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef51a7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef51a8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef51a9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef51ac mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef51b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef51b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef51b8 mov byte ptr [ebp - 4], 0 */
  w8((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ef51bc mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef51c0 jmp 0x11ef51ca */
  goto L_11ef51ca;
L_11ef51c2:;
  /* 11ef51c2 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef51c5 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ef51c7 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11ef51ca:;
  /* 11ef51ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef51cd and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ef51d3 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef51d6 jge 0x11ef5202 */
  if ((C.sf==C.of)) goto L_11ef5202;
  /* 11ef51d8 mov esi, esp */
  ESI = (ESP);
  /* 11ef51da mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef51dd push edx */
  push32((uint32_t)(EDX));
  /* 11ef51de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef51e1 push eax */
  push32((uint32_t)(EAX));
  /* 11ef51e2 call dword ptr [0x11f334fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334fc))), 0x11ef51e8u);
  /* 11ef51e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef51eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef51ed call 0x11ef9720 */
  push32(0x11ef51f2u); f_11ef9720();
  /* 11ef51f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef51f4 jle 0x11ef5200 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef5200;
  /* 11ef51f6 mov cl, byte ptr [ebp - 8] */
  CL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef51f9 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11ef51fc mov byte ptr [ebp - 8], 8 */
  w8((uint32_t)(EBP + -0x8), (0x8u));
L_11ef5200:;
  /* 11ef5200 jmp 0x11ef51c2 */
  goto L_11ef51c2;
L_11ef5202:;
  /* 11ef5202 mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 11ef5205 pop edi */
  EDI = (pop32());
  /* 11ef5206 pop esi */
  ESI = (pop32());
  /* 11ef5207 pop ebx */
  EBX = (pop32());
  /* 11ef5208 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef520b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef520d call 0x11ef9720 */
  push32(0x11ef5212u); f_11ef9720();
  /* 11ef5212 mov esp, ebp */
  ESP = (EBP);
  /* 11ef5214 pop ebp */
  EBP = (pop32());
  /* 11ef5215 ret  */
  ESPCHK(0x11ef51a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005240 @ 0x11ef5240 (120 bytes, 47 insns) */
void f_11ef5240(void) {
  FTRACE(0x11ef5240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5240 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5241 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5243 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5246 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5247 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5248 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5249 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11ef524c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11ef5251 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5256 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_11ef5258:;
  /* 11ef5258 mov esi, esp */
  ESI = (ESP);
  /* 11ef525a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef525d push eax */
  push32((uint32_t)(EAX));
  /* 11ef525e call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef5264u);
  /* 11ef5264 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5267 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5269 call 0x11ef9720 */
  push32(0x11ef526eu); f_11ef9720();
  /* 11ef526e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef5270 je 0x11ef528c */
  if (C.zf) goto L_11ef528c;
  /* 11ef5272 mov esi, esp */
  ESI = (ESP);
  /* 11ef5274 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef5276 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef5279 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef527a call dword ptr [0x11f334f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334f8))), 0x11ef5280u);
  /* 11ef5280 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5283 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5285 call 0x11ef9720 */
  push32(0x11ef528au); f_11ef9720();
  /* 11ef528a jmp 0x11ef5258 */
  goto L_11ef5258;
L_11ef528c:;
  /* 11ef528c mov esi, esp */
  ESI = (ESP);
  /* 11ef528e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef5291 push edx */
  push32((uint32_t)(EDX));
  /* 11ef5292 call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef5298u);
  /* 11ef5298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef529b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef529d call 0x11ef9720 */
  push32(0x11ef52a2u); f_11ef9720();
  /* 11ef52a2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ef52a4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef52a6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ef52a7 pop edi */
  EDI = (pop32());
  /* 11ef52a8 pop esi */
  ESI = (pop32());
  /* 11ef52a9 pop ebx */
  EBX = (pop32());
  /* 11ef52aa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef52ad cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef52af call 0x11ef9720 */
  push32(0x11ef52b4u); f_11ef9720();
  /* 11ef52b4 mov esp, ebp */
  ESP = (EBP);
  /* 11ef52b6 pop ebp */
  EBP = (pop32());
  /* 11ef52b7 ret  */
  ESPCHK(0x11ef5240u, _esp0);
  ESP += 4; return;
}

/* FUN_100052e0 @ 0x11ef52e0 (77 bytes, 35 insns) */
void f_11ef52e0(void) {
  FTRACE(0x11ef52e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef52e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef52e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef52e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef52e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef52e7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef52e8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef52e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11ef52ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11ef52f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef52f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef52f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef52fb cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef52fe jge 0x11ef5302 */
  if ((C.sf==C.of)) goto L_11ef5302;
  /* 11ef5300 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11ef5302:;
  /* 11ef5302 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef5305 cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5308 jge 0x11ef530c */
  if ((C.sf==C.of)) goto L_11ef530c;
  /* 11ef530a neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_11ef530c:;
  /* 11ef530c mov ecx, eax */
  ECX = (EAX);
  /* 11ef530e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5310 ja 0x11ef5314 */
  if ((!C.cf&&!C.zf)) goto L_11ef5314;
  /* 11ef5312 mov ecx, ebx */
  ECX = (EBX);
L_11ef5314:;
  /* 11ef5314 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5316 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5318 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ef531a mov eax, ecx */
  EAX = (ECX);
  /* 11ef531c pop edi */
  EDI = (pop32());
  /* 11ef531d pop esi */
  ESI = (pop32());
  /* 11ef531e pop ebx */
  EBX = (pop32());
  /* 11ef531f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5322 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5324 call 0x11ef9720 */
  push32(0x11ef5329u); f_11ef9720();
  /* 11ef5329 mov esp, ebp */
  ESP = (EBP);
  /* 11ef532b pop ebp */
  EBP = (pop32());
  /* 11ef532c ret  */
  ESPCHK(0x11ef52e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005340 @ 0x11ef5340 (70 bytes, 30 insns) */
void f_11ef5340(void) {
  FTRACE(0x11ef5340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5340 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5341 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5343 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5346 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5347 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5348 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5349 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef534a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef534d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5352 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5357 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5359 pop ecx */
  ECX = (pop32());
  /* 11ef535a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef535d mov esi, esp */
  ESI = (ESP);
  /* 11ef535f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef5361 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5364 push eax */
  push32((uint32_t)(EAX));
  /* 11ef5365 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef536bu);
  /* 11ef536b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef536e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5370 call 0x11ef9720 */
  push32(0x11ef5375u); f_11ef9720();
  /* 11ef5375 pop edi */
  EDI = (pop32());
  /* 11ef5376 pop esi */
  ESI = (pop32());
  /* 11ef5377 pop ebx */
  EBX = (pop32());
  /* 11ef5378 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef537b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef537d call 0x11ef9720 */
  push32(0x11ef5382u); f_11ef9720();
  /* 11ef5382 mov esp, ebp */
  ESP = (EBP);
  /* 11ef5384 pop ebp */
  EBP = (pop32());
  /* 11ef5385 ret  */
  ESPCHK(0x11ef5340u, _esp0);
  ESP += 4; return;
}

/* FUN_100053a0 @ 0x11ef53a0 (79 bytes, 32 insns) */
void f_11ef53a0(void) {
  FTRACE(0x11ef53a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef53a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef53a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef53a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef53a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef53a7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef53a8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef53a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef53aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef53ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef53b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef53b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef53b9 pop ecx */
  ECX = (pop32());
  /* 11ef53ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef53bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef53c0 call 0x11ef119f */
  push32(0x11ef53c5u); f_11ef119f();
  /* 11ef53c5 mov esi, esp */
  ESI = (ESP);
  /* 11ef53c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef53ca mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11ef53cd push ecx */
  push32((uint32_t)(ECX));
  /* 11ef53ce call dword ptr [0x11f334f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334f4))), 0x11ef53d4u);
  /* 11ef53d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef53d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef53d9 call 0x11ef9720 */
  push32(0x11ef53deu); f_11ef9720();
  /* 11ef53de pop edi */
  EDI = (pop32());
  /* 11ef53df pop esi */
  ESI = (pop32());
  /* 11ef53e0 pop ebx */
  EBX = (pop32());
  /* 11ef53e1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef53e4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef53e6 call 0x11ef9720 */
  push32(0x11ef53ebu); f_11ef9720();
  /* 11ef53eb mov esp, ebp */
  ESP = (EBP);
  /* 11ef53ed pop ebp */
  EBP = (pop32());
  /* 11ef53ee ret  */
  ESPCHK(0x11ef53a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005410 @ 0x11ef5410 (68 bytes, 29 insns) */
void f_11ef5410(void) {
  FTRACE(0x11ef5410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5410 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5411 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5413 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5416 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5417 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5418 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5419 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef541a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef541d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5422 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5427 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5429 pop ecx */
  ECX = (pop32());
  /* 11ef542a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef542d mov esi, esp */
  ESI = (ESP);
  /* 11ef542f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5432 push eax */
  push32((uint32_t)(EAX));
  /* 11ef5433 call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef5439u);
  /* 11ef5439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef543c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef543e call 0x11ef9720 */
  push32(0x11ef5443u); f_11ef9720();
  /* 11ef5443 pop edi */
  EDI = (pop32());
  /* 11ef5444 pop esi */
  ESI = (pop32());
  /* 11ef5445 pop ebx */
  EBX = (pop32());
  /* 11ef5446 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5449 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef544b call 0x11ef9720 */
  push32(0x11ef5450u); f_11ef9720();
  /* 11ef5450 mov esp, ebp */
  ESP = (EBP);
  /* 11ef5452 pop ebp */
  EBP = (pop32());
  /* 11ef5453 ret  */
  ESPCHK(0x11ef5410u, _esp0);
  ESP += 4; return;
}

/* FUN_10005470 @ 0x11ef5470 (69 bytes, 29 insns) */
void f_11ef5470(void) {
  FTRACE(0x11ef5470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5470 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5471 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5473 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5476 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5477 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5478 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5479 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef547a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef547d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef5482 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5487 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5489 pop ecx */
  ECX = (pop32());
  /* 11ef548a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef548d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef5491 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5494 call 0x11ef11a4 */
  push32(0x11ef5499u); f_11ef11a4();
  /* 11ef5499 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef549b jle 0x11ef54a1 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef54a1;
  /* 11ef549d mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef54a1:;
  /* 11ef54a1 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef54a4 pop edi */
  EDI = (pop32());
  /* 11ef54a5 pop esi */
  ESI = (pop32());
  /* 11ef54a6 pop ebx */
  EBX = (pop32());
  /* 11ef54a7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef54aa cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef54ac call 0x11ef9720 */
  push32(0x11ef54b1u); f_11ef9720();
  /* 11ef54b1 mov esp, ebp */
  ESP = (EBP);
  /* 11ef54b3 pop ebp */
  EBP = (pop32());
  /* 11ef54b4 ret  */
  ESPCHK(0x11ef5470u, _esp0);
  ESP += 4; return;
}

/* FUN_100054d0 @ 0x11ef54d0 (39 bytes, 20 insns) */
void f_11ef54d0(void) {
  FTRACE(0x11ef54d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef54d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef54d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef54d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef54d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef54d7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef54d8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef54d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef54da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef54dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef54e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef54e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef54e9 pop ecx */
  ECX = (pop32());
  /* 11ef54ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef54ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef54f0 pop edi */
  EDI = (pop32());
  /* 11ef54f1 pop esi */
  ESI = (pop32());
  /* 11ef54f2 pop ebx */
  EBX = (pop32());
  /* 11ef54f3 mov esp, ebp */
  ESP = (EBP);
  /* 11ef54f5 pop ebp */
  EBP = (pop32());
  /* 11ef54f6 ret  */
  ESPCHK(0x11ef54d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005500 @ 0x11ef5500 (71 bytes, 30 insns) */
void f_11ef5500(void) {
  FTRACE(0x11ef5500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5500 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5501 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5503 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5506 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5507 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5508 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5509 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef550a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef550d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5512 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5517 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5519 pop ecx */
  ECX = (pop32());
  /* 11ef551a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef551d mov esi, esp */
  ESI = (ESP);
  /* 11ef551f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5522 push eax */
  push32((uint32_t)(EAX));
  /* 11ef5523 call dword ptr [0x11f33580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33580))), 0x11ef5529u);
  /* 11ef5529 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef552c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef552e call 0x11ef9720 */
  push32(0x11ef5533u); f_11ef9720();
  /* 11ef5533 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5536 pop edi */
  EDI = (pop32());
  /* 11ef5537 pop esi */
  ESI = (pop32());
  /* 11ef5538 pop ebx */
  EBX = (pop32());
  /* 11ef5539 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef553c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef553e call 0x11ef9720 */
  push32(0x11ef5543u); f_11ef9720();
  /* 11ef5543 mov esp, ebp */
  ESP = (EBP);
  /* 11ef5545 pop ebp */
  EBP = (pop32());
  /* 11ef5546 ret  */
  ESPCHK(0x11ef5500u, _esp0);
  ESP += 4; return;
}

/* FUN_10005560 @ 0x11ef5560 (47 bytes, 22 insns) */
void f_11ef5560(void) {
  FTRACE(0x11ef5560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5560 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5561 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5563 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5566 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5567 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5568 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5569 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef556a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef556d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5572 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5577 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5579 pop ecx */
  ECX = (pop32());
  /* 11ef557a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef557d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5580 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef5583 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11ef5586 pop edi */
  EDI = (pop32());
  /* 11ef5587 pop esi */
  ESI = (pop32());
  /* 11ef5588 pop ebx */
  EBX = (pop32());
  /* 11ef5589 mov esp, ebp */
  ESP = (EBP);
  /* 11ef558b pop ebp */
  EBP = (pop32());
  /* 11ef558c ret 4 */
  ESPCHK(0x11ef5560u, _esp0);
  ESP += 8; return;
}

/* FUN_100055a0 @ 0x11ef55a0 (94 bytes, 39 insns) */
void f_11ef55a0(void) {
  FTRACE(0x11ef55a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef55a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef55a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef55a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef55a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef55a7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef55a8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef55a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef55aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef55ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef55b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef55b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef55b9 pop ecx */
  ECX = (pop32());
  /* 11ef55ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef55bd mov esi, esp */
  ESI = (ESP);
  /* 11ef55bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef55c2 push eax */
  push32((uint32_t)(EAX));
  /* 11ef55c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef55c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef55c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef55ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ef55cd push eax */
  push32((uint32_t)(EAX));
  /* 11ef55ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef55d1 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef55d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef55d5 call dword ptr [0x11f334f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334f0))), 0x11ef55dbu);
  /* 11ef55db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef55de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef55e0 call 0x11ef9720 */
  push32(0x11ef55e5u); f_11ef9720();
  /* 11ef55e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef55e8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef55eb pop edi */
  EDI = (pop32());
  /* 11ef55ec pop esi */
  ESI = (pop32());
  /* 11ef55ed pop ebx */
  EBX = (pop32());
  /* 11ef55ee add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef55f1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef55f3 call 0x11ef9720 */
  push32(0x11ef55f8u); f_11ef9720();
  /* 11ef55f8 mov esp, ebp */
  ESP = (EBP);
  /* 11ef55fa pop ebp */
  EBP = (pop32());
  /* 11ef55fb ret 4 */
  ESPCHK(0x11ef55a0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005620 @ 0x11ef5620 (221 bytes, 81 insns) */
void f_11ef5620(void) {
  FTRACE(0x11ef5620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5620 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5621 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5623 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5626 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5627 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5628 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5629 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef562a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef562d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef5632 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5637 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5639 pop ecx */
  ECX = (pop32());
  /* 11ef563a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef563d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5640 call 0x11ef11a4 */
  push32(0x11ef5645u); f_11ef11a4();
  /* 11ef5645 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef5647 jne 0x11ef56ea */
  if (!C.zf) goto L_11ef56ea;
  /* 11ef564d mov esi, esp */
  ESI = (ESP);
  /* 11ef564f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5652 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11ef5655 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5656 call dword ptr [0x11f3353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3353c))), 0x11ef565cu);
  /* 11ef565c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef565f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5661 call 0x11ef9720 */
  push32(0x11ef5666u); f_11ef9720();
  /* 11ef5666 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef566d jmp 0x11ef5678 */
  goto L_11ef5678;
L_11ef566f:;
  /* 11ef566f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef5672 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5675 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ef5678:;
  /* 11ef5678 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef567b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef567e jge 0x11ef56cb */
  if ((C.sf==C.of)) goto L_11ef56cb;
  /* 11ef5680 mov esi, esp */
  ESI = (ESP);
  /* 11ef5682 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef5684 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef5687 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5688 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef568b mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 11ef568e push eax */
  push32((uint32_t)(EAX));
  /* 11ef568f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5692 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ef5695 push edx */
  push32((uint32_t)(EDX));
  /* 11ef5696 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5699 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ef569c push ecx */
  push32((uint32_t)(ECX));
  /* 11ef569d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef56a0 push edx */
  push32((uint32_t)(EDX));
  /* 11ef56a1 call dword ptr [0x11f33548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33548))), 0x11ef56a7u);
  /* 11ef56a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef56aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef56ac call 0x11ef9720 */
  push32(0x11ef56b1u); f_11ef9720();
  /* 11ef56b1 mov esi, esp */
  ESI = (ESP);
  /* 11ef56b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef56b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef56b8 push eax */
  push32((uint32_t)(EAX));
  /* 11ef56b9 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef56bfu);
  /* 11ef56bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef56c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef56c4 call 0x11ef9720 */
  push32(0x11ef56c9u); f_11ef9720();
  /* 11ef56c9 jmp 0x11ef566f */
  goto L_11ef566f;
L_11ef56cb:;
  /* 11ef56cb mov esi, esp */
  ESI = (ESP);
  /* 11ef56cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef56cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef56d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef56d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef56d6 mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 11ef56d9 push eax */
  push32((uint32_t)(EAX));
  /* 11ef56da call dword ptr [0x11f33588] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33588))), 0x11ef56e0u);
  /* 11ef56e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef56e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef56e5 call 0x11ef9720 */
  push32(0x11ef56eau); f_11ef9720();
L_11ef56ea:;
  /* 11ef56ea pop edi */
  EDI = (pop32());
  /* 11ef56eb pop esi */
  ESI = (pop32());
  /* 11ef56ec pop ebx */
  EBX = (pop32());
  /* 11ef56ed add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef56f0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef56f2 call 0x11ef9720 */
  push32(0x11ef56f7u); f_11ef9720();
  /* 11ef56f7 mov esp, ebp */
  ESP = (EBP);
  /* 11ef56f9 pop ebp */
  EBP = (pop32());
  /* 11ef56fa ret 8 */
  ESPCHK(0x11ef5620u, _esp0);
  ESP += 12; return;
}

/* FUN_10005740 @ 0x11ef5740 (47 bytes, 22 insns) */
void f_11ef5740(void) {
  FTRACE(0x11ef5740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5740 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5741 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5743 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5746 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5747 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5748 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5749 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef574a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef574d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5752 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5757 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5759 pop ecx */
  ECX = (pop32());
  /* 11ef575a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef575d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5760 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef5763 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 11ef5766 pop edi */
  EDI = (pop32());
  /* 11ef5767 pop esi */
  ESI = (pop32());
  /* 11ef5768 pop ebx */
  EBX = (pop32());
  /* 11ef5769 mov esp, ebp */
  ESP = (EBP);
  /* 11ef576b pop ebp */
  EBP = (pop32());
  /* 11ef576c ret 4 */
  ESPCHK(0x11ef5740u, _esp0);
  ESP += 8; return;
}

/* FUN_10005780 @ 0x11ef5780 (47 bytes, 22 insns) */
void f_11ef5780(void) {
  FTRACE(0x11ef5780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5780 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5781 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5783 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5786 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5787 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5788 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5789 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef578a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef578d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5792 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5797 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5799 pop ecx */
  ECX = (pop32());
  /* 11ef579a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef579d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef57a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef57a3 mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 11ef57a6 pop edi */
  EDI = (pop32());
  /* 11ef57a7 pop esi */
  ESI = (pop32());
  /* 11ef57a8 pop ebx */
  EBX = (pop32());
  /* 11ef57a9 mov esp, ebp */
  ESP = (EBP);
  /* 11ef57ab pop ebp */
  EBP = (pop32());
  /* 11ef57ac ret 4 */
  ESPCHK(0x11ef5780u, _esp0);
  ESP += 8; return;
}

/* FUN_100057c0 @ 0x11ef57c0 (131 bytes, 48 insns) */
void f_11ef57c0(void) {
  FTRACE(0x11ef57c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef57c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef57c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef57c3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef57c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef57c7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef57c8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef57c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef57ca lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11ef57cd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11ef57d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef57d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef57d9 pop ecx */
  ECX = (pop32());
  /* 11ef57da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef57dd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef57e4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ef57eb jmp 0x11ef57f6 */
  goto L_11ef57f6;
L_11ef57ed:;
  /* 11ef57ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef57f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef57f3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ef57f6:;
  /* 11ef57f6 cmp dword ptr [ebp - 0xc], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef57fa jge 0x11ef5829 */
  if ((C.sf==C.of)) goto L_11ef5829;
  /* 11ef57fc mov esi, esp */
  ESI = (ESP);
  /* 11ef57fe mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ef5801 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5802 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5805 push edx */
  push32((uint32_t)(EDX));
  /* 11ef5806 call dword ptr [0x11f334fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334fc))), 0x11ef580cu);
  /* 11ef580c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef580f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5811 call 0x11ef9720 */
  push32(0x11ef5816u); f_11ef9720();
  /* 11ef5816 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef5818 jle 0x11ef5827 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef5827;
  /* 11ef581a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef581d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ef5820 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
L_11ef5827:;
  /* 11ef5827 jmp 0x11ef57ed */
  goto L_11ef57ed;
L_11ef5829:;
  /* 11ef5829 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef582c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef582f mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11ef5832 pop edi */
  EDI = (pop32());
  /* 11ef5833 pop esi */
  ESI = (pop32());
  /* 11ef5834 pop ebx */
  EBX = (pop32());
  /* 11ef5835 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5838 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef583a call 0x11ef9720 */
  push32(0x11ef583fu); f_11ef9720();
  /* 11ef583f mov esp, ebp */
  ESP = (EBP);
  /* 11ef5841 pop ebp */
  EBP = (pop32());
  /* 11ef5842 ret  */
  ESPCHK(0x11ef57c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005870 @ 0x11ef5870 (47 bytes, 22 insns) */
void f_11ef5870(void) {
  FTRACE(0x11ef5870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5870 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5871 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5873 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5876 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5877 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5878 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5879 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef587a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef587d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5882 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5887 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5889 pop ecx */
  ECX = (pop32());
  /* 11ef588a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef588d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5890 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef5893 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11ef5896 pop edi */
  EDI = (pop32());
  /* 11ef5897 pop esi */
  ESI = (pop32());
  /* 11ef5898 pop ebx */
  EBX = (pop32());
  /* 11ef5899 mov esp, ebp */
  ESP = (EBP);
  /* 11ef589b pop ebp */
  EBP = (pop32());
  /* 11ef589c ret 4 */
  ESPCHK(0x11ef5870u, _esp0);
  ESP += 8; return;
}

/* FUN_100058b0 @ 0x11ef58b0 (65 bytes, 28 insns) */
void f_11ef58b0(void) {
  FTRACE(0x11ef58b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef58b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef58b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef58b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef58b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef58b7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef58b8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef58b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef58ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef58bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef58c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef58c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef58c9 pop ecx */
  ECX = (pop32());
  /* 11ef58ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef58cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef58d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef58d3 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 11ef58d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef58d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef58dc mov dword ptr [edx + 0x1c], eax */
  w32((uint32_t)(EDX + 0x1c), (EAX));
  /* 11ef58df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef58e2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef58e5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11ef58e8 pop edi */
  EDI = (pop32());
  /* 11ef58e9 pop esi */
  ESI = (pop32());
  /* 11ef58ea pop ebx */
  EBX = (pop32());
  /* 11ef58eb mov esp, ebp */
  ESP = (EBP);
  /* 11ef58ed pop ebp */
  EBP = (pop32());
  /* 11ef58ee ret 0xc */
  ESPCHK(0x11ef58b0u, _esp0);
  ESP += 16; return;
}

/* FUN_10005910 @ 0x11ef5910 (166 bytes, 58 insns) */
void f_11ef5910(void) {
  FTRACE(0x11ef5910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5910 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5911 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5913 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5916 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5917 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5918 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5919 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef591a lea edi, [ebp - 0x70] */
  EDI = ((uint32_t)(EBP + -0x70));
  /* 11ef591d mov ecx, 0x1c */
  ECX = (0x1cu);
  /* 11ef5922 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5927 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5929 pop ecx */
  ECX = (pop32());
  /* 11ef592a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef592d mov esi, esp */
  ESI = (ESP);
  /* 11ef592f lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11ef5932 push eax */
  push32((uint32_t)(EAX));
  /* 11ef5933 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef5935 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5938 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5939 call dword ptr [0x11f33590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33590))), 0x11ef593fu);
  /* 11ef593f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5942 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5944 call 0x11ef9720 */
  push32(0x11ef5949u); f_11ef9720();
  /* 11ef5949 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ef594c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ef5952 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5955 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 11ef5958 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef595d cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef595f jge 0x11ef596d */
  if ((C.sf==C.of)) goto L_11ef596d;
  /* 11ef5961 mov cx, word ptr [ebp - 0x2c] */
  CX = (r16((uint32_t)(EBP + -0x2c)));
  /* 11ef5965 add cx, word ptr [ebp + 8] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EBP + 0x8))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11ef5969 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_11ef596d:;
  /* 11ef596d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ef5970 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ef5976 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5979 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 11ef597c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef5981 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5983 jl 0x11ef598d */
  if ((C.sf!=C.of)) goto L_11ef598d;
  /* 11ef5985 mov cx, word ptr [ebp - 0x2a] */
  CX = (r16((uint32_t)(EBP + -0x2a)));
  /* 11ef5989 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_11ef598d:;
  /* 11ef598d mov esi, esp */
  ESI = (ESP);
  /* 11ef598f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11ef5992 push edx */
  push32((uint32_t)(EDX));
  /* 11ef5993 call dword ptr [0x11f334ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334ec))), 0x11ef5999u);
  /* 11ef5999 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef599c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef599e call 0x11ef9720 */
  push32(0x11ef59a3u); f_11ef9720();
  /* 11ef59a3 pop edi */
  EDI = (pop32());
  /* 11ef59a4 pop esi */
  ESI = (pop32());
  /* 11ef59a5 pop ebx */
  EBX = (pop32());
  /* 11ef59a6 add esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef59a9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef59ab call 0x11ef9720 */
  push32(0x11ef59b0u); f_11ef9720();
  /* 11ef59b0 mov esp, ebp */
  ESP = (EBP);
  /* 11ef59b2 pop ebp */
  EBP = (pop32());
  /* 11ef59b3 ret 4 */
  ESPCHK(0x11ef5910u, _esp0);
  ESP += 8; return;
}

/* FUN_100059e0 @ 0x11ef59e0 (114 bytes, 42 insns) */
void f_11ef59e0(void) {
  FTRACE(0x11ef59e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef59e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef59e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef59e3 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef59e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef59e7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef59e8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef59e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef59ea lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 11ef59ed mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 11ef59f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef59f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef59f9 pop ecx */
  ECX = (pop32());
  /* 11ef59fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef59fd mov esi, esp */
  ESI = (ESP);
  /* 11ef59ff lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11ef5a02 push eax */
  push32((uint32_t)(EAX));
  /* 11ef5a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef5a05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5a08 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5a09 call dword ptr [0x11f33590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33590))), 0x11ef5a0fu);
  /* 11ef5a0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5a12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5a14 call 0x11ef9720 */
  push32(0x11ef5a19u); f_11ef9720();
  /* 11ef5a19 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ef5a1c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ef5a22 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11ef5a25 fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 11ef5a28 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 11ef5a2b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef5a30 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11ef5a33 fidiv dword ptr [ebp - 0x38] */
  FPU_ST(0) = FPU_ST(0) / ((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 11ef5a36 fmul dword ptr [0x11f2a050] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(0x11f2a050)));
  /* 11ef5a3c call 0x11ef9a0c */
  push32(0x11ef5a41u); f_11ef9a0c();
  /* 11ef5a41 pop edi */
  EDI = (pop32());
  /* 11ef5a42 pop esi */
  ESI = (pop32());
  /* 11ef5a43 pop ebx */
  EBX = (pop32());
  /* 11ef5a44 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5a47 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5a49 call 0x11ef9720 */
  push32(0x11ef5a4eu); f_11ef9720();
  /* 11ef5a4e mov esp, ebp */
  ESP = (EBP);
  /* 11ef5a50 pop ebp */
  EBP = (pop32());
  /* 11ef5a51 ret  */
  ESPCHK(0x11ef59e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a70 @ 0x11ef5a70 (94 bytes, 37 insns) */
void f_11ef5a70(void) {
  FTRACE(0x11ef5a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5a71 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5a73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5a76 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5a77 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5a78 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5a79 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5a7a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef5a7d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5a82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5a87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5a89 pop ecx */
  ECX = (pop32());
  /* 11ef5a8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef5a8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5a90 call 0x11ef119f */
  push32(0x11ef5a95u); f_11ef119f();
  /* 11ef5a95 mov esi, esp */
  ESI = (ESP);
  /* 11ef5a97 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ef5a9a push eax */
  push32((uint32_t)(EAX));
  /* 11ef5a9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5a9e mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11ef5aa1 push edx */
  push32((uint32_t)(EDX));
  /* 11ef5aa2 call dword ptr [0x11f334e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334e8))), 0x11ef5aa8u);
  /* 11ef5aa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5aab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5aad call 0x11ef9720 */
  push32(0x11ef5ab2u); f_11ef9720();
  /* 11ef5ab2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5ab5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef5ab8 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11ef5abb pop edi */
  EDI = (pop32());
  /* 11ef5abc pop esi */
  ESI = (pop32());
  /* 11ef5abd pop ebx */
  EBX = (pop32());
  /* 11ef5abe add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5ac1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5ac3 call 0x11ef9720 */
  push32(0x11ef5ac8u); f_11ef9720();
  /* 11ef5ac8 mov esp, ebp */
  ESP = (EBP);
  /* 11ef5aca pop ebp */
  EBP = (pop32());
  /* 11ef5acb ret 4 */
  ESPCHK(0x11ef5a70u, _esp0);
  ESP += 8; return;
}

/* FUN_10005af0 @ 0x11ef5af0 (39 bytes, 20 insns) */
void f_11ef5af0(void) {
  FTRACE(0x11ef5af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5af1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5af3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5af6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5af7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5af8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5af9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5afa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef5afd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5b02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5b07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5b09 pop ecx */
  ECX = (pop32());
  /* 11ef5b0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef5b0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5b10 pop edi */
  EDI = (pop32());
  /* 11ef5b11 pop esi */
  ESI = (pop32());
  /* 11ef5b12 pop ebx */
  EBX = (pop32());
  /* 11ef5b13 mov esp, ebp */
  ESP = (EBP);
  /* 11ef5b15 pop ebp */
  EBP = (pop32());
  /* 11ef5b16 ret  */
  ESPCHK(0x11ef5af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b20 @ 0x11ef5b20 (98 bytes, 39 insns) */
void f_11ef5b20(void) {
  FTRACE(0x11ef5b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5b21 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5b23 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5b26 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5b27 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5b28 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5b29 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5b2a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef5b2d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5b32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5b37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5b39 pop ecx */
  ECX = (pop32());
  /* 11ef5b3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef5b3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5b40 call 0x11ef119f */
  push32(0x11ef5b45u); f_11ef119f();
  /* 11ef5b45 mov esi, esp */
  ESI = (ESP);
  /* 11ef5b47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef5b49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef5b4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef5b4e push eax */
  push32((uint32_t)(EAX));
  /* 11ef5b4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5b52 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11ef5b55 push edx */
  push32((uint32_t)(EDX));
  /* 11ef5b56 call dword ptr [0x11f33574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33574))), 0x11ef5b5cu);
  /* 11ef5b5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5b5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5b61 call 0x11ef9720 */
  push32(0x11ef5b66u); f_11ef9720();
  /* 11ef5b66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5b69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef5b6c mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 11ef5b6f pop edi */
  EDI = (pop32());
  /* 11ef5b70 pop esi */
  ESI = (pop32());
  /* 11ef5b71 pop ebx */
  EBX = (pop32());
  /* 11ef5b72 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5b75 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5b77 call 0x11ef9720 */
  push32(0x11ef5b7cu); f_11ef9720();
  /* 11ef5b7c mov esp, ebp */
  ESP = (EBP);
  /* 11ef5b7e pop ebp */
  EBP = (pop32());
  /* 11ef5b7f ret 4 */
  ESPCHK(0x11ef5b20u, _esp0);
  ESP += 8; return;
}

/* FUN_10005ba0 @ 0x11ef5ba0 (87 bytes, 35 insns) */
void f_11ef5ba0(void) {
  FTRACE(0x11ef5ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5ba3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5ba7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5ba8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5ba9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5baa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef5bad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5bb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5bb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5bb9 pop ecx */
  ECX = (pop32());
  /* 11ef5bba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef5bbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5bc0 call 0x11ef119f */
  push32(0x11ef5bc5u); f_11ef119f();
  /* 11ef5bc5 mov esi, esp */
  ESI = (ESP);
  /* 11ef5bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef5bc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef5bcc push eax */
  push32((uint32_t)(EAX));
  /* 11ef5bcd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5bd0 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11ef5bd3 push edx */
  push32((uint32_t)(EDX));
  /* 11ef5bd4 call dword ptr [0x11f334e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334e4))), 0x11ef5bdau);
  /* 11ef5bda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5bdd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5bdf call 0x11ef9720 */
  push32(0x11ef5be4u); f_11ef9720();
  /* 11ef5be4 pop edi */
  EDI = (pop32());
  /* 11ef5be5 pop esi */
  ESI = (pop32());
  /* 11ef5be6 pop ebx */
  EBX = (pop32());
  /* 11ef5be7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5bea cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5bec call 0x11ef9720 */
  push32(0x11ef5bf1u); f_11ef9720();
  /* 11ef5bf1 mov esp, ebp */
  ESP = (EBP);
  /* 11ef5bf3 pop ebp */
  EBP = (pop32());
  /* 11ef5bf4 ret 4 */
  ESPCHK(0x11ef5ba0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005c10 @ 0x11ef5c10 (90 bytes, 37 insns) */
void f_11ef5c10(void) {
  FTRACE(0x11ef5c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5c11 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5c13 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5c16 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5c17 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5c18 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5c19 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5c1a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef5c1d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef5c22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5c27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5c29 pop ecx */
  ECX = (pop32());
  /* 11ef5c2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef5c2d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef5c31 mov esi, esp */
  ESI = (ESP);
  /* 11ef5c33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5c36 push eax */
  push32((uint32_t)(EAX));
  /* 11ef5c37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5c3a mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11ef5c3d push edx */
  push32((uint32_t)(EDX));
  /* 11ef5c3e call dword ptr [0x11f33578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33578))), 0x11ef5c44u);
  /* 11ef5c44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5c47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5c49 call 0x11ef9720 */
  push32(0x11ef5c4eu); f_11ef9720();
  /* 11ef5c4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef5c50 jle 0x11ef5c56 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef5c56;
  /* 11ef5c52 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef5c56:;
  /* 11ef5c56 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef5c59 pop edi */
  EDI = (pop32());
  /* 11ef5c5a pop esi */
  ESI = (pop32());
  /* 11ef5c5b pop ebx */
  EBX = (pop32());
  /* 11ef5c5c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5c5f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5c61 call 0x11ef9720 */
  push32(0x11ef5c66u); f_11ef9720();
  /* 11ef5c66 mov esp, ebp */
  ESP = (EBP);
  /* 11ef5c68 pop ebp */
  EBP = (pop32());
  /* 11ef5c69 ret  */
  ESPCHK(0x11ef5c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c80 @ 0x11ef5c80 (89 bytes, 36 insns) */
void f_11ef5c80(void) {
  FTRACE(0x11ef5c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5c81 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5c83 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5c86 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5c87 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5c88 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5c89 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5c8a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef5c8d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef5c92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5c97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5c99 pop ecx */
  ECX = (pop32());
  /* 11ef5c9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef5c9d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef5ca1 mov esi, esp */
  ESI = (ESP);
  /* 11ef5ca3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5ca6 push eax */
  push32((uint32_t)(EAX));
  /* 11ef5ca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef5caa push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5cab call dword ptr [0x11f33578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33578))), 0x11ef5cb1u);
  /* 11ef5cb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5cb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5cb6 call 0x11ef9720 */
  push32(0x11ef5cbbu); f_11ef9720();
  /* 11ef5cbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef5cbd jle 0x11ef5cc3 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef5cc3;
  /* 11ef5cbf mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef5cc3:;
  /* 11ef5cc3 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef5cc6 pop edi */
  EDI = (pop32());
  /* 11ef5cc7 pop esi */
  ESI = (pop32());
  /* 11ef5cc8 pop ebx */
  EBX = (pop32());
  /* 11ef5cc9 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5ccc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5cce call 0x11ef9720 */
  push32(0x11ef5cd3u); f_11ef9720();
  /* 11ef5cd3 mov esp, ebp */
  ESP = (EBP);
  /* 11ef5cd5 pop ebp */
  EBP = (pop32());
  /* 11ef5cd6 ret 4 */
  ESPCHK(0x11ef5c80u, _esp0);
  ESP += 8; return;
}

/* FUN_10005cf0 @ 0x11ef5cf0 (47 bytes, 22 insns) */
void f_11ef5cf0(void) {
  FTRACE(0x11ef5cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5cf3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5cf6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5cf7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5cf8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5cf9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5cfa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef5cfd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5d02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5d07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5d09 pop ecx */
  ECX = (pop32());
  /* 11ef5d0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef5d0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5d10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef5d13 mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 11ef5d16 pop edi */
  EDI = (pop32());
  /* 11ef5d17 pop esi */
  ESI = (pop32());
  /* 11ef5d18 pop ebx */
  EBX = (pop32());
  /* 11ef5d19 mov esp, ebp */
  ESP = (EBP);
  /* 11ef5d1b pop ebp */
  EBP = (pop32());
  /* 11ef5d1c ret 4 */
  ESPCHK(0x11ef5cf0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005d30 @ 0x11ef5d30 (81 bytes, 33 insns) */
void f_11ef5d30(void) {
  FTRACE(0x11ef5d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5d31 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5d33 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5d36 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5d37 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5d38 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5d39 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5d3a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef5d3d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5d42 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5d47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5d49 pop ecx */
  ECX = (pop32());
  /* 11ef5d4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef5d4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5d50 call 0x11ef119f */
  push32(0x11ef5d55u); f_11ef119f();
  /* 11ef5d55 mov esi, esp */
  ESI = (ESP);
  /* 11ef5d57 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef5d59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5d5c mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11ef5d5f push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5d60 call dword ptr [0x11f33568] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33568))), 0x11ef5d66u);
  /* 11ef5d66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5d69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5d6b call 0x11ef9720 */
  push32(0x11ef5d70u); f_11ef9720();
  /* 11ef5d70 pop edi */
  EDI = (pop32());
  /* 11ef5d71 pop esi */
  ESI = (pop32());
  /* 11ef5d72 pop ebx */
  EBX = (pop32());
  /* 11ef5d73 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5d76 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5d78 call 0x11ef9720 */
  push32(0x11ef5d7du); f_11ef9720();
  /* 11ef5d7d mov esp, ebp */
  ESP = (EBP);
  /* 11ef5d7f pop ebp */
  EBP = (pop32());
  /* 11ef5d80 ret  */
  ESPCHK(0x11ef5d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005da0 @ 0x11ef5da0 (99 bytes, 38 insns) */
void f_11ef5da0(void) {
  FTRACE(0x11ef5da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5da1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5da3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5da6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5da7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5da8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5da9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5daa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef5dad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5db2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5db7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5db9 pop ecx */
  ECX = (pop32());
  /* 11ef5dba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef5dbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5dc0 call 0x11ef1028 */
  push32(0x11ef5dc5u); f_11ef1028();
  /* 11ef5dc5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef5dca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef5dcc je 0x11ef5df2 */
  if (C.zf) goto L_11ef5df2;
  /* 11ef5dce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5dd1 call 0x11ef128a */
  push32(0x11ef5dd6u); f_11ef128a();
  /* 11ef5dd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5dd9 call 0x11ef10a5 */
  push32(0x11ef5ddeu); f_11ef10a5();
  /* 11ef5dde cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5de1 jge 0x11ef5df2 */
  if ((C.sf==C.of)) goto L_11ef5df2;
  /* 11ef5de3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5de6 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11ef5de9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5dea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5ded call 0x11ef122b */
  push32(0x11ef5df2u); f_11ef122b();
L_11ef5df2:;
  /* 11ef5df2 pop edi */
  EDI = (pop32());
  /* 11ef5df3 pop esi */
  ESI = (pop32());
  /* 11ef5df4 pop ebx */
  EBX = (pop32());
  /* 11ef5df5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5df8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5dfa call 0x11ef9720 */
  push32(0x11ef5dffu); f_11ef9720();
  /* 11ef5dff mov esp, ebp */
  ESP = (EBP);
  /* 11ef5e01 pop ebp */
  EBP = (pop32());
  /* 11ef5e02 ret  */
  ESPCHK(0x11ef5da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e20 @ 0x11ef5e20 (76 bytes, 32 insns) */
void f_11ef5e20(void) {
  FTRACE(0x11ef5e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5e21 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5e23 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5e26 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5e27 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5e28 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5e29 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5e2a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef5e2d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5e32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5e37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5e39 pop ecx */
  ECX = (pop32());
  /* 11ef5e3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef5e3d mov esi, esp */
  ESI = (ESP);
  /* 11ef5e3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef5e41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef5e44 push eax */
  push32((uint32_t)(EAX));
  /* 11ef5e45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5e48 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5e49 call dword ptr [0x11f33570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33570))), 0x11ef5e4fu);
  /* 11ef5e4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5e52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5e54 call 0x11ef9720 */
  push32(0x11ef5e59u); f_11ef9720();
  /* 11ef5e59 pop edi */
  EDI = (pop32());
  /* 11ef5e5a pop esi */
  ESI = (pop32());
  /* 11ef5e5b pop ebx */
  EBX = (pop32());
  /* 11ef5e5c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5e5f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5e61 call 0x11ef9720 */
  push32(0x11ef5e66u); f_11ef9720();
  /* 11ef5e66 mov esp, ebp */
  ESP = (EBP);
  /* 11ef5e68 pop ebp */
  EBP = (pop32());
  /* 11ef5e69 ret 4 */
  ESPCHK(0x11ef5e20u, _esp0);
  ESP += 8; return;
}

/* FUN_10005e80 @ 0x11ef5e80 (95 bytes, 37 insns) */
void f_11ef5e80(void) {
  FTRACE(0x11ef5e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5e81 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5e83 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5e86 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5e87 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5e88 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5e89 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5e8a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef5e8d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef5e92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5e97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5e99 pop ecx */
  ECX = (pop32());
  /* 11ef5e9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef5e9d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef5ea1 mov esi, esp */
  ESI = (ESP);
  /* 11ef5ea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef5ea5 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11ef5eaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5ead call 0x11ef12e4 */
  push32(0x11ef5eb2u); f_11ef12e4();
  /* 11ef5eb2 push eax */
  push32((uint32_t)(EAX));
  /* 11ef5eb3 call dword ptr [0x11f33560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33560))), 0x11ef5eb9u);
  /* 11ef5eb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5ebc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5ebe call 0x11ef9720 */
  push32(0x11ef5ec3u); f_11ef9720();
  /* 11ef5ec3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef5ec5 jle 0x11ef5ecb */
  if ((C.zf||C.sf!=C.of)) goto L_11ef5ecb;
  /* 11ef5ec7 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef5ecb:;
  /* 11ef5ecb mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef5ece pop edi */
  EDI = (pop32());
  /* 11ef5ecf pop esi */
  ESI = (pop32());
  /* 11ef5ed0 pop ebx */
  EBX = (pop32());
  /* 11ef5ed1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5ed4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5ed6 call 0x11ef9720 */
  push32(0x11ef5edbu); f_11ef9720();
  /* 11ef5edb mov esp, ebp */
  ESP = (EBP);
  /* 11ef5edd pop ebp */
  EBP = (pop32());
  /* 11ef5ede ret  */
  ESPCHK(0x11ef5e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f00 @ 0x11ef5f00 (47 bytes, 22 insns) */
void f_11ef5f00(void) {
  FTRACE(0x11ef5f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5f01 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5f03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5f06 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5f07 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5f08 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5f09 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5f0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef5f0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5f12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5f17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5f19 pop ecx */
  ECX = (pop32());
  /* 11ef5f1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef5f1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5f20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef5f23 mov dword ptr [eax + 0x2c], ecx */
  w32((uint32_t)(EAX + 0x2c), (ECX));
  /* 11ef5f26 pop edi */
  EDI = (pop32());
  /* 11ef5f27 pop esi */
  ESI = (pop32());
  /* 11ef5f28 pop ebx */
  EBX = (pop32());
  /* 11ef5f29 mov esp, ebp */
  ESP = (EBP);
  /* 11ef5f2b pop ebp */
  EBP = (pop32());
  /* 11ef5f2c ret 4 */
  ESPCHK(0x11ef5f00u, _esp0);
  ESP += 8; return;
}

/* FUN_10005f40 @ 0x11ef5f40 (64 bytes, 27 insns) */
void f_11ef5f40(void) {
  FTRACE(0x11ef5f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5f41 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5f43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5f46 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5f47 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5f48 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5f49 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5f4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef5f4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5f52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5f57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5f59 pop ecx */
  ECX = (pop32());
  /* 11ef5f5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef5f5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5f60 call 0x11ef11fe */
  push32(0x11ef5f65u); f_11ef11fe();
  /* 11ef5f65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5f68 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 11ef5f6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5f6f pop edi */
  EDI = (pop32());
  /* 11ef5f70 pop esi */
  ESI = (pop32());
  /* 11ef5f71 pop ebx */
  EBX = (pop32());
  /* 11ef5f72 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5f75 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5f77 call 0x11ef9720 */
  push32(0x11ef5f7cu); f_11ef9720();
  /* 11ef5f7c mov esp, ebp */
  ESP = (EBP);
  /* 11ef5f7e pop ebp */
  EBP = (pop32());
  /* 11ef5f7f ret  */
  ESPCHK(0x11ef5f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f90 @ 0x11ef5f90 (57 bytes, 25 insns) */
void f_11ef5f90(void) {
  FTRACE(0x11ef5f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5f91 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5f93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5f96 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5f97 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5f98 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5f99 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5f9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef5f9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5fa2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5fa7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5fa9 pop ecx */
  ECX = (pop32());
  /* 11ef5faa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef5fad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5fb0 call 0x11ef1294 */
  push32(0x11ef5fb5u); f_11ef1294();
  /* 11ef5fb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef5fb8 pop edi */
  EDI = (pop32());
  /* 11ef5fb9 pop esi */
  ESI = (pop32());
  /* 11ef5fba pop ebx */
  EBX = (pop32());
  /* 11ef5fbb add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef5fbe cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef5fc0 call 0x11ef9720 */
  push32(0x11ef5fc5u); f_11ef9720();
  /* 11ef5fc5 mov esp, ebp */
  ESP = (EBP);
  /* 11ef5fc7 pop ebp */
  EBP = (pop32());
  /* 11ef5fc8 ret  */
  ESPCHK(0x11ef5f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fe0 @ 0x11ef5fe0 (56 bytes, 25 insns) */
void f_11ef5fe0(void) {
  FTRACE(0x11ef5fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef5fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef5fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef5fe3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef5fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef5fe7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef5fe8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef5fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef5fea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef5fed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef5ff2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef5ff7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef5ff9 pop ecx */
  ECX = (pop32());
  /* 11ef5ffa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef5ffd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6000 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef6003 mov dword ptr [eax + 0x24], ecx */
  w32((uint32_t)(EAX + 0x24), (ECX));
  /* 11ef6006 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6009 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef600c mov dword ptr [edx + 0x28], eax */
  w32((uint32_t)(EDX + 0x28), (EAX));
  /* 11ef600f pop edi */
  EDI = (pop32());
  /* 11ef6010 pop esi */
  ESI = (pop32());
  /* 11ef6011 pop ebx */
  EBX = (pop32());
  /* 11ef6012 mov esp, ebp */
  ESP = (EBP);
  /* 11ef6014 pop ebp */
  EBP = (pop32());
  /* 11ef6015 ret 8 */
  ESPCHK(0x11ef5fe0u, _esp0);
  ESP += 12; return;
}

/* FUN_10006030 @ 0x11ef6030 (566 bytes, 177 insns) [1 switch table(s)] */
void f_11ef6030(void) {
  FTRACE(0x11ef6030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6030 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6031 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6033 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6036 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6037 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6038 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6039 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef603a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11ef603d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11ef6042 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6047 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6049 pop ecx */
  ECX = (pop32());
  /* 11ef604a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef604d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6050 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ef6052 mov cl, byte ptr [eax + 0x2c] */
  CL = (r8((uint32_t)(EAX + 0x2c)));
  /* 11ef6055 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ef6057 je 0x11ef6255 */
  if (C.zf) goto L_11ef6255;
  /* 11ef605d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6060 call 0x11ef1028 */
  push32(0x11ef6065u); f_11ef1028();
  /* 11ef6065 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef606a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef606c je 0x11ef6255 */
  if (C.zf) goto L_11ef6255;
  /* 11ef6072 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6075 cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6079 je 0x11ef6255 */
  if (C.zf) goto L_11ef6255;
  /* 11ef607f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6082 cmp dword ptr [eax + 0x10], 6 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6086 je 0x11ef60cd */
  if (C.zf) goto L_11ef60cd;
  /* 11ef6088 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef608b call 0x11ef10a5 */
  push32(0x11ef6090u); f_11ef10a5();
  /* 11ef6090 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6093 jge 0x11ef609d */
  if ((C.sf==C.of)) goto L_11ef609d;
  /* 11ef6095 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6098 call 0x11ef12ad */
  push32(0x11ef609du); f_11ef12ad();
L_11ef609d:;
  /* 11ef609d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef60a0 call 0x11ef12b7 */
  push32(0x11ef60a5u); f_11ef12b7();
  /* 11ef60a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef60aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef60ac je 0x11ef60c8 */
  if (C.zf) goto L_11ef60c8;
  /* 11ef60ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef60b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef60b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef60b5 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11ef60b8 push eax */
  push32((uint32_t)(EAX));
  /* 11ef60b9 call 0x11ef12df */
  push32(0x11ef60beu); f_11ef12df();
  /* 11ef60be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef60c1 mov ecx, eax */
  ECX = (EAX);
  /* 11ef60c3 call 0x11ef11f4 */
  push32(0x11ef60c8u); f_11ef11f4();
L_11ef60c8:;
  /* 11ef60c8 jmp 0x11ef6255 */
  goto L_11ef6255;
L_11ef60cd:;
  /* 11ef60cd mov esi, esp */
  ESI = (ESP);
  /* 11ef60cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef60d1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 11ef60d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef60d9 call 0x11ef12e4 */
  push32(0x11ef60deu); f_11ef12e4();
  /* 11ef60de push eax */
  push32((uint32_t)(EAX));
  /* 11ef60df call dword ptr [0x11f33560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33560))), 0x11ef60e5u);
  /* 11ef60e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef60e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef60ea call 0x11ef9720 */
  push32(0x11ef60efu); f_11ef9720();
  /* 11ef60ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef60f1 jle 0x11ef6255 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef6255;
  /* 11ef60f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef60fa cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef60fe je 0x11ef6255 */
  if (C.zf) goto L_11ef6255;
  /* 11ef6104 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6107 mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11ef610a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ef610d cmp dword ptr [ebp - 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6111 ja 0x11ef61e2 */
  if ((!C.cf&&!C.zf)) goto L_11ef61e2;
  /* 11ef6117 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef611a jmp dword ptr [ecx*4 + 0x11ef6266] */
  switch (ECX) {
    case 0: goto L_11ef6121;
    case 1: goto L_11ef6144;
    case 2: goto L_11ef6164;
    case 3: goto L_11ef6184;
    case 4: goto L_11ef61a4;
    case 5: goto L_11ef61c4;
    default: x86_unimpl("switch@0x11ef611a out of table"); return;
  }
L_11ef6121:;
  /* 11ef6121 mov esi, esp */
  ESI = (ESP);
  /* 11ef6123 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6126 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11ef6129 push eax */
  push32((uint32_t)(EAX));
  /* 11ef612a push 0x11f2a344 */
  push32((uint32_t)(0x11f2a344u));
  /* 11ef612f call dword ptr [0x11f334d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334d8))), 0x11ef6135u);
  /* 11ef6135 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6138 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef613a call 0x11ef9720 */
  push32(0x11ef613fu); f_11ef9720();
  /* 11ef613f jmp 0x11ef61e2 */
  goto L_11ef61e2;
L_11ef6144:;
  /* 11ef6144 mov esi, esp */
  ESI = (ESP);
  /* 11ef6146 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6149 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 11ef614c push edx */
  push32((uint32_t)(EDX));
  /* 11ef614d push 0x11f2a338 */
  push32((uint32_t)(0x11f2a338u));
  /* 11ef6152 call dword ptr [0x11f334d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334d8))), 0x11ef6158u);
  /* 11ef6158 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef615b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef615d call 0x11ef9720 */
  push32(0x11ef6162u); f_11ef9720();
  /* 11ef6162 jmp 0x11ef61e2 */
  goto L_11ef61e2;
L_11ef6164:;
  /* 11ef6164 mov esi, esp */
  ESI = (ESP);
  /* 11ef6166 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6169 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11ef616c push ecx */
  push32((uint32_t)(ECX));
  /* 11ef616d push 0x11f2a32c */
  push32((uint32_t)(0x11f2a32cu));
  /* 11ef6172 call dword ptr [0x11f334d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334d8))), 0x11ef6178u);
  /* 11ef6178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef617b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef617d call 0x11ef9720 */
  push32(0x11ef6182u); f_11ef9720();
  /* 11ef6182 jmp 0x11ef61e2 */
  goto L_11ef61e2;
L_11ef6184:;
  /* 11ef6184 mov esi, esp */
  ESI = (ESP);
  /* 11ef6186 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6189 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11ef618c push eax */
  push32((uint32_t)(EAX));
  /* 11ef618d push 0x11f2a320 */
  push32((uint32_t)(0x11f2a320u));
  /* 11ef6192 call dword ptr [0x11f334d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334d8))), 0x11ef6198u);
  /* 11ef6198 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef619b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef619d call 0x11ef9720 */
  push32(0x11ef61a2u); f_11ef9720();
  /* 11ef61a2 jmp 0x11ef61e2 */
  goto L_11ef61e2;
L_11ef61a4:;
  /* 11ef61a4 mov esi, esp */
  ESI = (ESP);
  /* 11ef61a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef61a9 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 11ef61ac push edx */
  push32((uint32_t)(EDX));
  /* 11ef61ad push 0x11f2a314 */
  push32((uint32_t)(0x11f2a314u));
  /* 11ef61b2 call dword ptr [0x11f334d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334d8))), 0x11ef61b8u);
  /* 11ef61b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef61bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef61bd call 0x11ef9720 */
  push32(0x11ef61c2u); f_11ef9720();
  /* 11ef61c2 jmp 0x11ef61e2 */
  goto L_11ef61e2;
L_11ef61c4:;
  /* 11ef61c4 mov esi, esp */
  ESI = (ESP);
  /* 11ef61c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef61c9 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11ef61cc push ecx */
  push32((uint32_t)(ECX));
  /* 11ef61cd push 0x11f2a308 */
  push32((uint32_t)(0x11f2a308u));
  /* 11ef61d2 call dword ptr [0x11f334d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334d8))), 0x11ef61d8u);
  /* 11ef61d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef61db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef61dd call 0x11ef9720 */
  push32(0x11ef61e2u); f_11ef9720();
L_11ef61e2:;
  /* 11ef61e2 mov esi, esp */
  ESI = (ESP);
  /* 11ef61e4 push 0x11f2a2f8 */
  push32((uint32_t)(0x11f2a2f8u));
  /* 11ef61e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef61eb push 0x11f2a2f0 */
  push32((uint32_t)(0x11f2a2f0u));
  /* 11ef61f0 push 7 */
  push32((uint32_t)(0x7u));
  /* 11ef61f2 call dword ptr [0x11f334dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334dc))), 0x11ef61f8u);
  /* 11ef61f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef61fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef61fd call 0x11ef9720 */
  push32(0x11ef6202u); f_11ef9720();
  /* 11ef6202 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ef6205 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6209 je 0x11ef6213 */
  if (C.zf) goto L_11ef6213;
  /* 11ef620b cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef620f je 0x11ef621f */
  if (C.zf) goto L_11ef621f;
  /* 11ef6211 jmp 0x11ef6227 */
  goto L_11ef6227;
L_11ef6213:;
  /* 11ef6213 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef6215 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6218 call 0x11ef1122 */
  push32(0x11ef621du); f_11ef1122();
  /* 11ef621d jmp 0x11ef6227 */
  goto L_11ef6227;
L_11ef621f:;
  /* 11ef621f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6222 call 0x11ef1154 */
  push32(0x11ef6227u); f_11ef1154();
L_11ef6227:;
  /* 11ef6227 mov esi, esp */
  ESI = (ESP);
  /* 11ef6229 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef622c mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11ef622f push eax */
  push32((uint32_t)(EAX));
  /* 11ef6230 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6233 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 11ef6236 push edx */
  push32((uint32_t)(EDX));
  /* 11ef6237 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef6239 call dword ptr [0x11f334e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334e0))), 0x11ef623fu);
  /* 11ef623f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6242 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6244 call 0x11ef9720 */
  push32(0x11ef6249u); f_11ef9720();
  /* 11ef6249 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef624b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef624d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6250 call 0x11ef11d1 */
  push32(0x11ef6255u); f_11ef11d1();
L_11ef6255:;
  /* 11ef6255 pop edi */
  EDI = (pop32());
  /* 11ef6256 pop esi */
  ESI = (pop32());
  /* 11ef6257 pop ebx */
  EBX = (pop32());
  /* 11ef6258 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef625b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef625d call 0x11ef9720 */
  push32(0x11ef6262u); f_11ef9720();
  /* 11ef6262 mov esp, ebp */
  ESP = (EBP);
  /* 11ef6264 pop ebp */
  EBP = (pop32());
  /* 11ef6265 ret  */
  ESPCHK(0x11ef6030u, _esp0);
  ESP += 4; return;
}

/* FUN_10006320 @ 0x11ef6320 (112 bytes, 43 insns) */
void f_11ef6320(void) {
  FTRACE(0x11ef6320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6320 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6321 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6323 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6326 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6327 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6328 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6329 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef632a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef632d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef6332 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6337 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6339 pop ecx */
  ECX = (pop32());
  /* 11ef633a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef633d push 6 */
  push32((uint32_t)(0x6u));
  /* 11ef633f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6342 call 0x11ef1122 */
  push32(0x11ef6347u); f_11ef1122();
  /* 11ef6347 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef634a call 0x11ef119f */
  push32(0x11ef634fu); f_11ef119f();
  /* 11ef634f mov esi, esp */
  ESI = (ESP);
  /* 11ef6351 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef6353 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef6355 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ef6357 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef635a call 0x11ef12e4 */
  push32(0x11ef635fu); f_11ef12e4();
  /* 11ef635f push eax */
  push32((uint32_t)(EAX));
  /* 11ef6360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6363 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11ef6366 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6367 call dword ptr [0x11f33574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33574))), 0x11ef636du);
  /* 11ef636d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6370 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6372 call 0x11ef9720 */
  push32(0x11ef6377u); f_11ef9720();
  /* 11ef6377 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef637a call 0x11ef12d5 */
  push32(0x11ef637fu); f_11ef12d5();
  /* 11ef637f pop edi */
  EDI = (pop32());
  /* 11ef6380 pop esi */
  ESI = (pop32());
  /* 11ef6381 pop ebx */
  EBX = (pop32());
  /* 11ef6382 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6385 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6387 call 0x11ef9720 */
  push32(0x11ef638cu); f_11ef9720();
  /* 11ef638c mov esp, ebp */
  ESP = (EBP);
  /* 11ef638e pop ebp */
  EBP = (pop32());
  /* 11ef638f ret  */
  ESPCHK(0x11ef6320u, _esp0);
  ESP += 4; return;
}

/* FUN_100063b0 @ 0x11ef63b0 (75 bytes, 32 insns) */
void f_11ef63b0(void) {
  FTRACE(0x11ef63b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef63b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef63b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef63b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef63b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef63b7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef63b8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef63b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef63ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef63bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef63c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef63c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef63c9 pop ecx */
  ECX = (pop32());
  /* 11ef63ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef63cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef63d0 push eax */
  push32((uint32_t)(EAX));
  /* 11ef63d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef63d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef63d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef63d8 push edx */
  push32((uint32_t)(EDX));
  /* 11ef63d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef63dc call 0x11ef101e */
  push32(0x11ef63e1u); f_11ef101e();
  /* 11ef63e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef63e4 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 11ef63e8 pop edi */
  EDI = (pop32());
  /* 11ef63e9 pop esi */
  ESI = (pop32());
  /* 11ef63ea pop ebx */
  EBX = (pop32());
  /* 11ef63eb add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef63ee cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef63f0 call 0x11ef9720 */
  push32(0x11ef63f5u); f_11ef9720();
  /* 11ef63f5 mov esp, ebp */
  ESP = (EBP);
  /* 11ef63f7 pop ebp */
  EBP = (pop32());
  /* 11ef63f8 ret 0xc */
  ESPCHK(0x11ef63b0u, _esp0);
  ESP += 16; return;
}

/* FUN_10006410 @ 0x11ef6410 (95 bytes, 37 insns) */
void f_11ef6410(void) {
  FTRACE(0x11ef6410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6410 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6411 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6413 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6416 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6417 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6418 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6419 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef641a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef641d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef6422 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6427 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6429 pop ecx */
  ECX = (pop32());
  /* 11ef642a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef642d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef6431 mov esi, esp */
  ESI = (ESP);
  /* 11ef6433 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef6435 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11ef643a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef643d call 0x11ef12e4 */
  push32(0x11ef6442u); f_11ef12e4();
  /* 11ef6442 push eax */
  push32((uint32_t)(EAX));
  /* 11ef6443 call dword ptr [0x11f33560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33560))), 0x11ef6449u);
  /* 11ef6449 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef644c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef644e call 0x11ef9720 */
  push32(0x11ef6453u); f_11ef9720();
  /* 11ef6453 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef6455 jle 0x11ef645b */
  if ((C.zf||C.sf!=C.of)) goto L_11ef645b;
  /* 11ef6457 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef645b:;
  /* 11ef645b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef645e pop edi */
  EDI = (pop32());
  /* 11ef645f pop esi */
  ESI = (pop32());
  /* 11ef6460 pop ebx */
  EBX = (pop32());
  /* 11ef6461 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6464 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6466 call 0x11ef9720 */
  push32(0x11ef646bu); f_11ef9720();
  /* 11ef646b mov esp, ebp */
  ESP = (EBP);
  /* 11ef646d pop ebp */
  EBP = (pop32());
  /* 11ef646e ret  */
  ESPCHK(0x11ef6410u, _esp0);
  ESP += 4; return;
}

/* FUN_10006490 @ 0x11ef6490 (78 bytes, 28 insns) */
void f_11ef6490(void) {
  FTRACE(0x11ef6490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6490 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6491 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6493 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6496 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6497 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6498 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6499 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef649a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef649d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef64a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef64a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef64a9 pop ecx */
  ECX = (pop32());
  /* 11ef64aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef64ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef64b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef64b3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ef64b6 mov edx, dword ptr [0x11f30688] */
  EDX = (r32((uint32_t)(0x11f30688)));
  /* 11ef64bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef64bf mov dword ptr [edx*4 + 0x11f30638], eax */
  w32((uint32_t)(EDX*4 + 0x11f30638), (EAX));
  /* 11ef64c6 mov ecx, dword ptr [0x11f30688] */
  ECX = (r32((uint32_t)(0x11f30688)));
  /* 11ef64cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef64cf mov dword ptr [0x11f30688], ecx */
  w32((uint32_t)(0x11f30688), (ECX));
  /* 11ef64d5 pop edi */
  EDI = (pop32());
  /* 11ef64d6 pop esi */
  ESI = (pop32());
  /* 11ef64d7 pop ebx */
  EBX = (pop32());
  /* 11ef64d8 mov esp, ebp */
  ESP = (EBP);
  /* 11ef64da pop ebp */
  EBP = (pop32());
  /* 11ef64db ret 4 */
  ESPCHK(0x11ef6490u, _esp0);
  ESP += 8; return;
}

/* FUN_10006500 @ 0x11ef6500 (128 bytes, 44 insns) */
void f_11ef6500(void) {
  FTRACE(0x11ef6500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6500 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6501 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6503 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6506 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6507 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6508 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6509 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef650c mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef6511 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6516 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6518 mov eax, dword ptr [0x11f30638] */
  EAX = (r32((uint32_t)(0x11f30638)));
  /* 11ef651d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ef6520 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef6527 jmp 0x11ef6532 */
  goto L_11ef6532;
L_11ef6529:;
  /* 11ef6529 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef652c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef652f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ef6532:;
  /* 11ef6532 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef6535 cmp edx, dword ptr [0x11f30688] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11f30688))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef653b jge 0x11ef656c */
  if ((C.sf==C.of)) goto L_11ef656c;
  /* 11ef653d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef6540 mov ecx, dword ptr [eax*4 + 0x11f30638] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11f30638)));
  /* 11ef6547 call 0x11ef1131 */
  push32(0x11ef654cu); f_11ef1131();
  /* 11ef654c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ef654e mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11ef6551 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef6554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ef6556 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11ef6559 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef655b jne 0x11ef656a */
  if (!C.zf) goto L_11ef656a;
  /* 11ef655d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef6560 mov edx, dword ptr [ecx*4 + 0x11f30638] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11f30638)));
  /* 11ef6567 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ef656a:;
  /* 11ef656a jmp 0x11ef6529 */
  goto L_11ef6529;
L_11ef656c:;
  /* 11ef656c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef656f pop edi */
  EDI = (pop32());
  /* 11ef6570 pop esi */
  ESI = (pop32());
  /* 11ef6571 pop ebx */
  EBX = (pop32());
  /* 11ef6572 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6575 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6577 call 0x11ef9720 */
  push32(0x11ef657cu); f_11ef9720();
  /* 11ef657c mov esp, ebp */
  ESP = (EBP);
  /* 11ef657e pop ebp */
  EBP = (pop32());
  /* 11ef657f ret  */
  ESPCHK(0x11ef6500u, _esp0);
  ESP += 4; return;
}

/* FUN_100065a0 @ 0x11ef65a0 (47 bytes, 22 insns) */
void f_11ef65a0(void) {
  FTRACE(0x11ef65a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef65a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef65a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef65a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef65a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef65a7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef65a8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef65a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef65aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef65ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef65b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef65b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef65b9 pop ecx */
  ECX = (pop32());
  /* 11ef65ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef65bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef65c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef65c3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11ef65c6 pop edi */
  EDI = (pop32());
  /* 11ef65c7 pop esi */
  ESI = (pop32());
  /* 11ef65c8 pop ebx */
  EBX = (pop32());
  /* 11ef65c9 mov esp, ebp */
  ESP = (EBP);
  /* 11ef65cb pop ebp */
  EBP = (pop32());
  /* 11ef65cc ret 4 */
  ESPCHK(0x11ef65a0u, _esp0);
  ESP += 8; return;
}

/* FUN_100065e0 @ 0x11ef65e0 (47 bytes, 22 insns) */
void f_11ef65e0(void) {
  FTRACE(0x11ef65e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef65e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef65e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef65e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef65e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef65e7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef65e8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef65e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef65ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef65ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef65f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef65f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef65f9 pop ecx */
  ECX = (pop32());
  /* 11ef65fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef65fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6600 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef6603 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11ef6606 pop edi */
  EDI = (pop32());
  /* 11ef6607 pop esi */
  ESI = (pop32());
  /* 11ef6608 pop ebx */
  EBX = (pop32());
  /* 11ef6609 mov esp, ebp */
  ESP = (EBP);
  /* 11ef660b pop ebp */
  EBP = (pop32());
  /* 11ef660c ret 4 */
  ESPCHK(0x11ef65e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006620 @ 0x11ef6620 (47 bytes, 22 insns) */
void f_11ef6620(void) {
  FTRACE(0x11ef6620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6620 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6621 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6623 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6626 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6627 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6628 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6629 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef662a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef662d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef6632 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6637 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6639 pop ecx */
  ECX = (pop32());
  /* 11ef663a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef663d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6640 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef6643 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11ef6646 pop edi */
  EDI = (pop32());
  /* 11ef6647 pop esi */
  ESI = (pop32());
  /* 11ef6648 pop ebx */
  EBX = (pop32());
  /* 11ef6649 mov esp, ebp */
  ESP = (EBP);
  /* 11ef664b pop ebp */
  EBP = (pop32());
  /* 11ef664c ret 4 */
  ESPCHK(0x11ef6620u, _esp0);
  ESP += 8; return;
}

/* FUN_10006660 @ 0x11ef6660 (85 bytes, 35 insns) */
void f_11ef6660(void) {
  FTRACE(0x11ef6660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6660 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6661 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6663 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6666 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6667 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6668 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6669 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef666a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef666d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef6672 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6677 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6679 pop ecx */
  ECX = (pop32());
  /* 11ef667a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef667d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6680 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ef6683 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6684 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6687 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ef668a push eax */
  push32((uint32_t)(EAX));
  /* 11ef668b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef668e call 0x11ef11d1 */
  push32(0x11ef6693u); f_11ef11d1();
  /* 11ef6693 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6696 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ef6699 push edx */
  push32((uint32_t)(EDX));
  /* 11ef669a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef669d call 0x11ef122b */
  push32(0x11ef66a2u); f_11ef122b();
  /* 11ef66a2 pop edi */
  EDI = (pop32());
  /* 11ef66a3 pop esi */
  ESI = (pop32());
  /* 11ef66a4 pop ebx */
  EBX = (pop32());
  /* 11ef66a5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef66a8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef66aa call 0x11ef9720 */
  push32(0x11ef66afu); f_11ef9720();
  /* 11ef66af mov esp, ebp */
  ESP = (EBP);
  /* 11ef66b1 pop ebp */
  EBP = (pop32());
  /* 11ef66b2 ret 4 */
  ESPCHK(0x11ef6660u, _esp0);
  ESP += 8; return;
}

/* FUN_100066d0 @ 0x11ef66d0 (42 bytes, 21 insns) */
void f_11ef66d0(void) {
  FTRACE(0x11ef66d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef66d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef66d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef66d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef66d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef66d7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef66d8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef66d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef66da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef66dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef66e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef66e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef66e9 pop ecx */
  ECX = (pop32());
  /* 11ef66ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef66ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef66f0 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ef66f3 pop edi */
  EDI = (pop32());
  /* 11ef66f4 pop esi */
  ESI = (pop32());
  /* 11ef66f5 pop ebx */
  EBX = (pop32());
  /* 11ef66f6 mov esp, ebp */
  ESP = (EBP);
  /* 11ef66f8 pop ebp */
  EBP = (pop32());
  /* 11ef66f9 ret  */
  ESPCHK(0x11ef66d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006710 @ 0x11ef6710 (39 bytes, 20 insns) */
void f_11ef6710(void) {
  FTRACE(0x11ef6710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6710 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6711 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6713 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6716 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6717 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6718 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6719 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef671a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef671d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef6722 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6727 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6729 pop ecx */
  ECX = (pop32());
  /* 11ef672a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef672d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6730 pop edi */
  EDI = (pop32());
  /* 11ef6731 pop esi */
  ESI = (pop32());
  /* 11ef6732 pop ebx */
  EBX = (pop32());
  /* 11ef6733 mov esp, ebp */
  ESP = (EBP);
  /* 11ef6735 pop ebp */
  EBP = (pop32());
  /* 11ef6736 ret  */
  ESPCHK(0x11ef6710u, _esp0);
  ESP += 4; return;
}

/* FUN_10006740 @ 0x11ef6740 (518 bytes, 176 insns) */
void f_11ef6740(void) {
  FTRACE(0x11ef6740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6740 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6741 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6743 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6746 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6747 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6748 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6749 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef674a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef674d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef6752 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6757 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6759 pop ecx */
  ECX = (pop32());
  /* 11ef675a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef675d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6760 call 0x11ef11b3 */
  push32(0x11ef6765u); f_11ef11b3();
  /* 11ef6765 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef6767 jle 0x11ef6935 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef6935;
  /* 11ef676d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6770 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ef6773 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6776 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6779 cmp ecx, dword ptr [edx + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef677c jge 0x11ef6935 */
  if ((C.sf==C.of)) goto L_11ef6935;
  /* 11ef6782 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6785 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ef6788 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef678b cmp dword ptr [edx + ecx*8 + 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6790 jne 0x11ef6859 */
  if (!C.zf) goto L_11ef6859;
  /* 11ef6796 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6799 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ef679c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef679f mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 11ef67a3 push eax */
  push32((uint32_t)(EAX));
  /* 11ef67a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef67a7 call 0x11ef10cd */
  push32(0x11ef67acu); f_11ef10cd();
  /* 11ef67ac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef67b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef67b3 je 0x11ef67e0 */
  if (C.zf) goto L_11ef67e0;
  /* 11ef67b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef67b8 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ef67bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef67be mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 11ef67c2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef67c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef67c6 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ef67c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef67cc mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 11ef67d0 push edx */
  push32((uint32_t)(EDX));
  /* 11ef67d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef67d4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef67d7 push eax */
  push32((uint32_t)(EAX));
  /* 11ef67d8 call 0x11ef106e */
  push32(0x11ef67ddu); f_11ef106e();
  /* 11ef67dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ef67e0:;
  /* 11ef67e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef67e3 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ef67e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef67e9 mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 11ef67ed push ecx */
  push32((uint32_t)(ECX));
  /* 11ef67ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef67f1 call 0x11ef10cd */
  push32(0x11ef67f6u); f_11ef10cd();
  /* 11ef67f6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef67fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef67fd je 0x11ef6854 */
  if (C.zf) goto L_11ef6854;
  /* 11ef67ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6802 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ef6805 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6808 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef680b mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 11ef680e mov esi, esp */
  ESI = (ESP);
  /* 11ef6810 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef6812 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6815 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6818 push edx */
  push32((uint32_t)(EDX));
  /* 11ef6819 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef681fu);
  /* 11ef681f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6822 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6824 call 0x11ef9720 */
  push32(0x11ef6829u); f_11ef9720();
  /* 11ef6829 mov esi, esp */
  ESI = (ESP);
  /* 11ef682b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef682d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef682f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6832 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ef6835 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6838 mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 11ef683c push eax */
  push32((uint32_t)(EAX));
  /* 11ef683d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6840 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 11ef6843 push edx */
  push32((uint32_t)(EDX));
  /* 11ef6844 call dword ptr [0x11f33574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33574))), 0x11ef684au);
  /* 11ef684a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef684d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef684f call 0x11ef9720 */
  push32(0x11ef6854u); f_11ef9720();
L_11ef6854:;
  /* 11ef6854 jmp 0x11ef6935 */
  goto L_11ef6935;
L_11ef6859:;
  /* 11ef6859 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef685c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ef685f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6862 cmp dword ptr [edx + ecx*8 + 0x34], 2 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6867 je 0x11ef6879 */
  if (C.zf) goto L_11ef6879;
  /* 11ef6869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef686c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ef686f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6872 cmp dword ptr [edx + ecx*8 + 0x34], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6877 jne 0x11ef68d0 */
  if (!C.zf) goto L_11ef68d0;
L_11ef6879:;
  /* 11ef6879 mov esi, esp */
  ESI = (ESP);
  /* 11ef687b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef687d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6880 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6883 push eax */
  push32((uint32_t)(EAX));
  /* 11ef6884 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef688au);
  /* 11ef688a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef688d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef688f call 0x11ef9720 */
  push32(0x11ef6894u); f_11ef9720();
  /* 11ef6894 mov esi, esp */
  ESI = (ESP);
  /* 11ef6896 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ef6898 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef689a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef689d mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ef68a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef68a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef68a6 mov dword ptr [eax + 0x1c], edx */
  w32((uint32_t)(EAX + 0x1c), (EDX));
  /* 11ef68a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef68ac mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ef68af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef68b2 mov ecx, dword ptr [eax + edx*8 + 0x28] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x28)));
  /* 11ef68b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef68b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef68ba mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11ef68bd push eax */
  push32((uint32_t)(EAX));
  /* 11ef68be call dword ptr [0x11f33574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33574))), 0x11ef68c4u);
  /* 11ef68c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef68c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef68c9 call 0x11ef9720 */
  push32(0x11ef68ceu); f_11ef9720();
  /* 11ef68ce jmp 0x11ef6935 */
  goto L_11ef6935;
L_11ef68d0:;
  /* 11ef68d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef68d3 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ef68d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef68d9 cmp dword ptr [eax + edx*8 + 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*8 + 0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef68de jne 0x11ef6935 */
  if (!C.zf) goto L_11ef6935;
  /* 11ef68e0 mov esi, esp */
  ESI = (ESP);
  /* 11ef68e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef68e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef68e7 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef68ea push ecx */
  push32((uint32_t)(ECX));
  /* 11ef68eb call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef68f1u);
  /* 11ef68f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef68f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef68f6 call 0x11ef9720 */
  push32(0x11ef68fbu); f_11ef9720();
  /* 11ef68fb mov esi, esp */
  ESI = (ESP);
  /* 11ef68fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef68ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef6901 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6904 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ef6907 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef690a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef690d mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 11ef6910 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6913 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ef6916 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6919 mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 11ef691d push edx */
  push32((uint32_t)(EDX));
  /* 11ef691e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6921 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11ef6924 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6925 call dword ptr [0x11f33574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33574))), 0x11ef692bu);
  /* 11ef692b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef692e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6930 call 0x11ef9720 */
  push32(0x11ef6935u); f_11ef9720();
L_11ef6935:;
  /* 11ef6935 pop edi */
  EDI = (pop32());
  /* 11ef6936 pop esi */
  ESI = (pop32());
  /* 11ef6937 pop ebx */
  EBX = (pop32());
  /* 11ef6938 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef693b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef693d call 0x11ef9720 */
  push32(0x11ef6942u); f_11ef9720();
  /* 11ef6942 mov esp, ebp */
  ESP = (EBP);
  /* 11ef6944 pop ebp */
  EBP = (pop32());
  /* 11ef6945 ret  */
  ESPCHK(0x11ef6740u, _esp0);
  ESP += 4; return;
}

/* FUN_100069d0 @ 0x11ef69d0 (38 bytes, 20 insns) */
void f_11ef69d0(void) {
  FTRACE(0x11ef69d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef69d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef69d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef69d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef69d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef69d7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef69d8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef69d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef69da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef69dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef69e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef69e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef69e9 pop ecx */
  ECX = (pop32());
  /* 11ef69ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef69ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ef69ef pop edi */
  EDI = (pop32());
  /* 11ef69f0 pop esi */
  ESI = (pop32());
  /* 11ef69f1 pop ebx */
  EBX = (pop32());
  /* 11ef69f2 mov esp, ebp */
  ESP = (EBP);
  /* 11ef69f4 pop ebp */
  EBP = (pop32());
  /* 11ef69f5 ret  */
  ESPCHK(0x11ef69d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a00 @ 0x11ef6a00 (85 bytes, 34 insns) */
void f_11ef6a00(void) {
  FTRACE(0x11ef6a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6a01 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6a03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6a06 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6a07 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6a08 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6a09 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6a0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef6a0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef6a12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6a17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6a19 pop ecx */
  ECX = (pop32());
  /* 11ef6a1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef6a1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6a20 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11ef6a23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef6a29 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 11ef6a2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6a30 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11ef6a33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6a36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef6a39 mov dword ptr [eax + edx*8 + 0x2c], ecx */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (ECX));
  /* 11ef6a3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6a40 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11ef6a43 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6a46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6a49 mov dword ptr [ecx + 0x20], eax */
  w32((uint32_t)(ECX + 0x20), (EAX));
  /* 11ef6a4c pop edi */
  EDI = (pop32());
  /* 11ef6a4d pop esi */
  ESI = (pop32());
  /* 11ef6a4e pop ebx */
  EBX = (pop32());
  /* 11ef6a4f mov esp, ebp */
  ESP = (EBP);
  /* 11ef6a51 pop ebp */
  EBP = (pop32());
  /* 11ef6a52 ret 8 */
  ESPCHK(0x11ef6a00u, _esp0);
  ESP += 12; return;
}

/* FUN_10006a70 @ 0x11ef6a70 (86 bytes, 33 insns) */
void f_11ef6a70(void) {
  FTRACE(0x11ef6a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6a71 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6a73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6a76 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6a77 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6a78 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6a79 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6a7a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef6a7d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef6a82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6a87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6a89 pop ecx */
  ECX = (pop32());
  /* 11ef6a8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef6a8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6a90 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11ef6a93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6a96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef6a99 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 11ef6a9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6aa0 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11ef6aa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6aa6 mov dword ptr [eax + edx*8 + 0x2c], 2 */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (0x2u));
  /* 11ef6aae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6ab1 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11ef6ab4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6ab7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6aba mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11ef6abd pop edi */
  EDI = (pop32());
  /* 11ef6abe pop esi */
  ESI = (pop32());
  /* 11ef6abf pop ebx */
  EBX = (pop32());
  /* 11ef6ac0 mov esp, ebp */
  ESP = (EBP);
  /* 11ef6ac2 pop ebp */
  EBP = (pop32());
  /* 11ef6ac3 ret 4 */
  ESPCHK(0x11ef6a70u, _esp0);
  ESP += 8; return;
}

/* FUN_10006ae0 @ 0x11ef6ae0 (119 bytes, 43 insns) */
void f_11ef6ae0(void) {
  FTRACE(0x11ef6ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6ae3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6ae6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6ae7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6ae8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6ae9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6aea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef6aed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef6af2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6af7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6af9 pop ecx */
  ECX = (pop32());
  /* 11ef6afa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef6afd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6b00 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6b03 mov esi, esp */
  ESI = (ESP);
  /* 11ef6b05 push eax */
  push32((uint32_t)(EAX));
  /* 11ef6b06 call dword ptr [0x11f33580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33580))), 0x11ef6b0cu);
  /* 11ef6b0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6b0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6b11 call 0x11ef9720 */
  push32(0x11ef6b16u); f_11ef9720();
  /* 11ef6b16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6b19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef6b1c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ef6b1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6b21 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef6b24 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ef6b27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6b2a mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
  /* 11ef6b31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6b34 mov dword ptr [eax + 0x20], 0 */
  w32((uint32_t)(EAX + 0x20), (0x0u));
  /* 11ef6b3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6b3e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef6b41 mov dword ptr [ecx + 0x24], edx */
  w32((uint32_t)(ECX + 0x24), (EDX));
  /* 11ef6b44 pop edi */
  EDI = (pop32());
  /* 11ef6b45 pop esi */
  ESI = (pop32());
  /* 11ef6b46 pop ebx */
  EBX = (pop32());
  /* 11ef6b47 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6b4a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6b4c call 0x11ef9720 */
  push32(0x11ef6b51u); f_11ef9720();
  /* 11ef6b51 mov esp, ebp */
  ESP = (EBP);
  /* 11ef6b53 pop ebp */
  EBP = (pop32());
  /* 11ef6b54 ret 0xc */
  ESPCHK(0x11ef6ae0u, _esp0);
  ESP += 16; return;
}

/* FUN_10006b80 @ 0x11ef6b80 (263 bytes, 93 insns) */
void f_11ef6b80(void) {
  FTRACE(0x11ef6b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6b81 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6b83 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6b86 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6b87 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6b88 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6b89 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6b8a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef6b8d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef6b92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6b97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6b99 pop ecx */
  ECX = (pop32());
  /* 11ef6b9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef6b9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6ba0 call 0x11ef11b3 */
  push32(0x11ef6ba5u); f_11ef11b3();
  /* 11ef6ba5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef6ba7 jne 0x11ef6c74 */
  if (!C.zf) goto L_11ef6c74;
  /* 11ef6bad mov esi, esp */
  ESI = (ESP);
  /* 11ef6baf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6bb2 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11ef6bb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6bb6 call dword ptr [0x11f3353c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3353c))), 0x11ef6bbcu);
  /* 11ef6bbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6bbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6bc1 call 0x11ef9720 */
  push32(0x11ef6bc6u); f_11ef9720();
  /* 11ef6bc6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef6bcd jmp 0x11ef6bd8 */
  goto L_11ef6bd8;
L_11ef6bcf:;
  /* 11ef6bcf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef6bd2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6bd5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ef6bd8:;
  /* 11ef6bd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef6bdb cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6bde jge 0x11ef6c30 */
  if ((C.sf==C.of)) goto L_11ef6c30;
  /* 11ef6be0 mov esi, esp */
  ESI = (ESP);
  /* 11ef6be2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef6be4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef6be7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6be8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6beb mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11ef6bee push eax */
  push32((uint32_t)(EAX));
  /* 11ef6bef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6bf2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ef6bf4 push edx */
  push32((uint32_t)(EDX));
  /* 11ef6bf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6bf8 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ef6bfb push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6bfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6bff add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6c02 push edx */
  push32((uint32_t)(EDX));
  /* 11ef6c03 call dword ptr [0x11f33548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33548))), 0x11ef6c09u);
  /* 11ef6c09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6c0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6c0e call 0x11ef9720 */
  push32(0x11ef6c13u); f_11ef9720();
  /* 11ef6c13 mov esi, esp */
  ESI = (ESP);
  /* 11ef6c15 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef6c17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6c1a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6c1d push eax */
  push32((uint32_t)(EAX));
  /* 11ef6c1e call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef6c24u);
  /* 11ef6c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6c27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6c29 call 0x11ef9720 */
  push32(0x11ef6c2eu); f_11ef9720();
  /* 11ef6c2e jmp 0x11ef6bcf */
  goto L_11ef6bcf;
L_11ef6c30:;
  /* 11ef6c30 mov esi, esp */
  ESI = (ESP);
  /* 11ef6c32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef6c34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6c37 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6c3a push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6c3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6c3e mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11ef6c41 push eax */
  push32((uint32_t)(EAX));
  /* 11ef6c42 call dword ptr [0x11f33588] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33588))), 0x11ef6c48u);
  /* 11ef6c48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6c4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6c4d call 0x11ef9720 */
  push32(0x11ef6c52u); f_11ef9720();
  /* 11ef6c52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6c55 mov dword ptr [ecx + 0x20], 0 */
  w32((uint32_t)(ECX + 0x20), (0x0u));
  /* 11ef6c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef6c5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef6c61 push edx */
  push32((uint32_t)(EDX));
  /* 11ef6c62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6c65 call 0x11ef1064 */
  push32(0x11ef6c6au); f_11ef1064();
  /* 11ef6c6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6c6d mov dword ptr [eax + 0x1c], 0 */
  w32((uint32_t)(EAX + 0x1c), (0x0u));
L_11ef6c74:;
  /* 11ef6c74 pop edi */
  EDI = (pop32());
  /* 11ef6c75 pop esi */
  ESI = (pop32());
  /* 11ef6c76 pop ebx */
  EBX = (pop32());
  /* 11ef6c77 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6c7a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6c7c call 0x11ef9720 */
  push32(0x11ef6c81u); f_11ef9720();
  /* 11ef6c81 mov esp, ebp */
  ESP = (EBP);
  /* 11ef6c83 pop ebp */
  EBP = (pop32());
  /* 11ef6c84 ret 8 */
  ESPCHK(0x11ef6b80u, _esp0);
  ESP += 12; return;
}

/* FUN_10006cd0 @ 0x11ef6cd0 (42 bytes, 21 insns) */
void f_11ef6cd0(void) {
  FTRACE(0x11ef6cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6cd3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6cd6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6cd7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6cd8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6cd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6cda lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef6cdd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef6ce2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6ce7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6ce9 pop ecx */
  ECX = (pop32());
  /* 11ef6cea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef6ced mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6cf0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6cf3 pop edi */
  EDI = (pop32());
  /* 11ef6cf4 pop esi */
  ESI = (pop32());
  /* 11ef6cf5 pop ebx */
  EBX = (pop32());
  /* 11ef6cf6 mov esp, ebp */
  ESP = (EBP);
  /* 11ef6cf8 pop ebp */
  EBP = (pop32());
  /* 11ef6cf9 ret  */
  ESPCHK(0x11ef6cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d10 @ 0x11ef6d10 (78 bytes, 33 insns) */
void f_11ef6d10(void) {
  FTRACE(0x11ef6d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6d11 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6d13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6d16 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6d17 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6d18 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6d19 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6d1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef6d1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef6d22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6d27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6d29 pop ecx */
  ECX = (pop32());
  /* 11ef6d2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef6d2d mov esi, esp */
  ESI = (ESP);
  /* 11ef6d2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6d32 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11ef6d35 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6d36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6d39 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6d3c push edx */
  push32((uint32_t)(EDX));
  /* 11ef6d3d call dword ptr [0x11f334fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334fc))), 0x11ef6d43u);
  /* 11ef6d43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6d46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6d48 call 0x11ef9720 */
  push32(0x11ef6d4du); f_11ef9720();
  /* 11ef6d4d pop edi */
  EDI = (pop32());
  /* 11ef6d4e pop esi */
  ESI = (pop32());
  /* 11ef6d4f pop ebx */
  EBX = (pop32());
  /* 11ef6d50 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6d53 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6d55 call 0x11ef9720 */
  push32(0x11ef6d5au); f_11ef9720();
  /* 11ef6d5a mov esp, ebp */
  ESP = (EBP);
  /* 11ef6d5c pop ebp */
  EBP = (pop32());
  /* 11ef6d5d ret  */
  ESPCHK(0x11ef6d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d80 @ 0x11ef6d80 (102 bytes, 40 insns) */
void f_11ef6d80(void) {
  FTRACE(0x11ef6d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6d81 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6d83 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6d86 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6d87 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6d88 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6d89 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6d8a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef6d8d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef6d92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6d97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6d99 pop ecx */
  ECX = (pop32());
  /* 11ef6d9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef6d9d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef6da1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6da4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6da7 mov esi, esp */
  ESI = (ESP);
  /* 11ef6da9 push eax */
  push32((uint32_t)(EAX));
  /* 11ef6daa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef6dad push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6dae call dword ptr [0x11f33578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33578))), 0x11ef6db4u);
  /* 11ef6db4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6db7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6db9 call 0x11ef9720 */
  push32(0x11ef6dbeu); f_11ef9720();
  /* 11ef6dbe mov esi, eax */
  ESI = (EAX);
  /* 11ef6dc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6dc3 call 0x11ef11b3 */
  push32(0x11ef6dc8u); f_11ef11b3();
  /* 11ef6dc8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6dca jne 0x11ef6dd0 */
  if (!C.zf) goto L_11ef6dd0;
  /* 11ef6dcc mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef6dd0:;
  /* 11ef6dd0 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef6dd3 pop edi */
  EDI = (pop32());
  /* 11ef6dd4 pop esi */
  ESI = (pop32());
  /* 11ef6dd5 pop ebx */
  EBX = (pop32());
  /* 11ef6dd6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6dd9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6ddb call 0x11ef9720 */
  push32(0x11ef6de0u); f_11ef9720();
  /* 11ef6de0 mov esp, ebp */
  ESP = (EBP);
  /* 11ef6de2 pop ebp */
  EBP = (pop32());
  /* 11ef6de3 ret 4 */
  ESPCHK(0x11ef6d80u, _esp0);
  ESP += 8; return;
}

/* FUN_10006e00 @ 0x11ef6e00 (122 bytes, 45 insns) */
void f_11ef6e00(void) {
  FTRACE(0x11ef6e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6e01 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6e03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6e06 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6e07 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6e08 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6e09 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6e0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef6e0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef6e12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6e17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6e19 pop ecx */
  ECX = (pop32());
  /* 11ef6e1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef6e1d mov esi, esp */
  ESI = (ESP);
  /* 11ef6e1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef6e22 push eax */
  push32((uint32_t)(EAX));
  /* 11ef6e23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6e26 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6e29 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6e2a call dword ptr [0x11f334d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334d4))), 0x11ef6e30u);
  /* 11ef6e30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6e33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6e35 call 0x11ef9720 */
  push32(0x11ef6e3au); f_11ef9720();
  /* 11ef6e3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6e3d add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6e40 push edx */
  push32((uint32_t)(EDX));
  /* 11ef6e41 call 0x11ef10d2 */
  push32(0x11ef6e46u); f_11ef10d2();
  /* 11ef6e46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6e49 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef6e4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6e51 mov dword ptr [ecx + 0x18], eax */
  w32((uint32_t)(ECX + 0x18), (EAX));
  /* 11ef6e54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6e57 mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
  /* 11ef6e5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6e61 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef6e64 mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 11ef6e67 pop edi */
  EDI = (pop32());
  /* 11ef6e68 pop esi */
  ESI = (pop32());
  /* 11ef6e69 pop ebx */
  EBX = (pop32());
  /* 11ef6e6a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6e6d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6e6f call 0x11ef9720 */
  push32(0x11ef6e74u); f_11ef9720();
  /* 11ef6e74 mov esp, ebp */
  ESP = (EBP);
  /* 11ef6e76 pop ebp */
  EBP = (pop32());
  /* 11ef6e77 ret 8 */
  ESPCHK(0x11ef6e00u, _esp0);
  ESP += 12; return;
}

/* FUN_10006ea0 @ 0x11ef6ea0 (56 bytes, 25 insns) */
void f_11ef6ea0(void) {
  FTRACE(0x11ef6ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6ea3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6ea6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6ea7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6ea8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6eaa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef6ead mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef6eb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6eb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6eb9 pop ecx */
  ECX = (pop32());
  /* 11ef6eba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef6ebd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef6ec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6ec4 cmp dword ptr [eax + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6ec8 jne 0x11ef6ece */
  if (!C.zf) goto L_11ef6ece;
  /* 11ef6eca mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef6ece:;
  /* 11ef6ece mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef6ed1 pop edi */
  EDI = (pop32());
  /* 11ef6ed2 pop esi */
  ESI = (pop32());
  /* 11ef6ed3 pop ebx */
  EBX = (pop32());
  /* 11ef6ed4 mov esp, ebp */
  ESP = (EBP);
  /* 11ef6ed6 pop ebp */
  EBP = (pop32());
  /* 11ef6ed7 ret  */
  ESPCHK(0x11ef6ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ef0 @ 0x11ef6ef0 (163 bytes, 60 insns) */
void f_11ef6ef0(void) {
  FTRACE(0x11ef6ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6ef3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6ef7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6ef8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6ef9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6efa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef6efd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef6f02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6f07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6f09 pop ecx */
  ECX = (pop32());
  /* 11ef6f0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef6f0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6f10 call 0x11ef10eb */
  push32(0x11ef6f15u); f_11ef10eb();
  /* 11ef6f15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef6f1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef6f1c je 0x11ef6f80 */
  if (C.zf) goto L_11ef6f80;
  /* 11ef6f1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6f21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef6f24 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11ef6f27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6f2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef6f2d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ef6f2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6f32 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef6f35 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ef6f38 mov esi, esp */
  ESI = (ESP);
  /* 11ef6f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef6f3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6f3f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6f42 push eax */
  push32((uint32_t)(EAX));
  /* 11ef6f43 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef6f49u);
  /* 11ef6f49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6f4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6f4e call 0x11ef9720 */
  push32(0x11ef6f53u); f_11ef9720();
  /* 11ef6f53 mov esi, esp */
  ESI = (ESP);
  /* 11ef6f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef6f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef6f59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6f5c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ef6f5e push edx */
  push32((uint32_t)(EDX));
  /* 11ef6f5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6f62 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11ef6f65 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6f66 call dword ptr [0x11f33574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33574))), 0x11ef6f6cu);
  /* 11ef6f6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6f6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6f71 call 0x11ef9720 */
  push32(0x11ef6f76u); f_11ef9720();
  /* 11ef6f76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6f79 mov dword ptr [edx + 0x14], 1 */
  w32((uint32_t)(EDX + 0x14), (0x1u));
L_11ef6f80:;
  /* 11ef6f80 pop edi */
  EDI = (pop32());
  /* 11ef6f81 pop esi */
  ESI = (pop32());
  /* 11ef6f82 pop ebx */
  EBX = (pop32());
  /* 11ef6f83 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6f86 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6f88 call 0x11ef9720 */
  push32(0x11ef6f8du); f_11ef9720();
  /* 11ef6f8d mov esp, ebp */
  ESP = (EBP);
  /* 11ef6f8f pop ebp */
  EBP = (pop32());
  /* 11ef6f90 ret 0xc */
  ESPCHK(0x11ef6ef0u, _esp0);
  ESP += 16; return;
}

/* FUN_10006fc0 @ 0x11ef6fc0 (140 bytes, 53 insns) */
void f_11ef6fc0(void) {
  FTRACE(0x11ef6fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef6fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef6fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef6fc3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef6fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef6fc7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef6fc8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef6fc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef6fca lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef6fcd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef6fd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef6fd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef6fd9 pop ecx */
  ECX = (pop32());
  /* 11ef6fda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef6fdd mov esi, esp */
  ESI = (ESP);
  /* 11ef6fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef6fe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef6fe4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6fe7 push eax */
  push32((uint32_t)(EAX));
  /* 11ef6fe8 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef6feeu);
  /* 11ef6fee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef6ff1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef6ff3 call 0x11ef9720 */
  push32(0x11ef6ff8u); f_11ef9720();
  /* 11ef6ff8 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef6ffc mov esi, esp */
  ESI = (ESP);
  /* 11ef6ffe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7001 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ef7004 push edx */
  push32((uint32_t)(EDX));
  /* 11ef7005 call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef700bu);
  /* 11ef700b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef700e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7010 call 0x11ef9720 */
  push32(0x11ef7015u); f_11ef9720();
  /* 11ef7015 mov esi, eax */
  ESI = (EAX);
  /* 11ef7017 mov edi, esp */
  EDI = (ESP);
  /* 11ef7019 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef701c mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11ef701f push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7020 call dword ptr [0x11f334d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334d0))), 0x11ef7026u);
  /* 11ef7026 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7029 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef702b call 0x11ef9720 */
  push32(0x11ef7030u); f_11ef9720();
  /* 11ef7030 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7032 jne 0x11ef7038 */
  if (!C.zf) goto L_11ef7038;
  /* 11ef7034 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef7038:;
  /* 11ef7038 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef703b pop edi */
  EDI = (pop32());
  /* 11ef703c pop esi */
  ESI = (pop32());
  /* 11ef703d pop ebx */
  EBX = (pop32());
  /* 11ef703e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7041 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7043 call 0x11ef9720 */
  push32(0x11ef7048u); f_11ef9720();
  /* 11ef7048 mov esp, ebp */
  ESP = (EBP);
  /* 11ef704a pop ebp */
  EBP = (pop32());
  /* 11ef704b ret  */
  ESPCHK(0x11ef6fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007070 @ 0x11ef7070 (125 bytes, 48 insns) */
void f_11ef7070(void) {
  FTRACE(0x11ef7070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef7070 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef7071 mov ebp, esp */
  EBP = (ESP);
  /* 11ef7073 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7076 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef7077 push esi */
  push32((uint32_t)(ESI));
  /* 11ef7078 push edi */
  push32((uint32_t)(EDI));
  /* 11ef7079 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef707a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef707d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef7082 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef7087 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef7089 pop ecx */
  ECX = (pop32());
  /* 11ef708a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef708d mov esi, esp */
  ESI = (ESP);
  /* 11ef708f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef7091 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7094 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7097 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7098 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef709eu);
  /* 11ef709e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef70a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef70a3 call 0x11ef9720 */
  push32(0x11ef70a8u); f_11ef9720();
  /* 11ef70a8 mov esi, esp */
  ESI = (ESP);
  /* 11ef70aa push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef70ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef70af mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ef70b2 push edx */
  push32((uint32_t)(EDX));
  /* 11ef70b3 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef70b9u);
  /* 11ef70b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef70bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef70be call 0x11ef9720 */
  push32(0x11ef70c3u); f_11ef9720();
  /* 11ef70c3 mov esi, esp */
  ESI = (ESP);
  /* 11ef70c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef70c8 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11ef70cb push ecx */
  push32((uint32_t)(ECX));
  /* 11ef70cc call dword ptr [0x11f334cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334cc))), 0x11ef70d2u);
  /* 11ef70d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef70d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef70d7 call 0x11ef9720 */
  push32(0x11ef70dcu); f_11ef9720();
  /* 11ef70dc pop edi */
  EDI = (pop32());
  /* 11ef70dd pop esi */
  ESI = (pop32());
  /* 11ef70de pop ebx */
  EBX = (pop32());
  /* 11ef70df add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef70e2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef70e4 call 0x11ef9720 */
  push32(0x11ef70e9u); f_11ef9720();
  /* 11ef70e9 mov esp, ebp */
  ESP = (EBP);
  /* 11ef70eb pop ebp */
  EBP = (pop32());
  /* 11ef70ec ret  */
  ESPCHK(0x11ef7070u, _esp0);
  ESP += 4; return;
}

/* FUN_10007110 @ 0x11ef7110 (98 bytes, 39 insns) */
void f_11ef7110(void) {
  FTRACE(0x11ef7110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef7110 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef7111 mov ebp, esp */
  EBP = (ESP);
  /* 11ef7113 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7116 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef7117 push esi */
  push32((uint32_t)(ESI));
  /* 11ef7118 push edi */
  push32((uint32_t)(EDI));
  /* 11ef7119 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef711a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef711d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef7122 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef7127 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef7129 pop ecx */
  ECX = (pop32());
  /* 11ef712a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef712d mov esi, esp */
  ESI = (ESP);
  /* 11ef712f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef7131 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7134 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7137 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7138 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef713eu);
  /* 11ef713e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7141 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7143 call 0x11ef9720 */
  push32(0x11ef7148u); f_11ef9720();
  /* 11ef7148 mov esi, esp */
  ESI = (ESP);
  /* 11ef714a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef714d mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11ef7150 push edx */
  push32((uint32_t)(EDX));
  /* 11ef7151 call dword ptr [0x11f334c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334c8))), 0x11ef7157u);
  /* 11ef7157 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef715a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef715c call 0x11ef9720 */
  push32(0x11ef7161u); f_11ef9720();
  /* 11ef7161 pop edi */
  EDI = (pop32());
  /* 11ef7162 pop esi */
  ESI = (pop32());
  /* 11ef7163 pop ebx */
  EBX = (pop32());
  /* 11ef7164 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7167 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7169 call 0x11ef9720 */
  push32(0x11ef716eu); f_11ef9720();
  /* 11ef716e mov esp, ebp */
  ESP = (EBP);
  /* 11ef7170 pop ebp */
  EBP = (pop32());
  /* 11ef7171 ret  */
  ESPCHK(0x11ef7110u, _esp0);
  ESP += 4; return;
}

/* FUN_10007190 @ 0x11ef7190 (402 bytes, 129 insns) [1 switch table(s)] */
void f_11ef7190(void) {
  FTRACE(0x11ef7190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef7190 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef7191 mov ebp, esp */
  EBP = (ESP);
  /* 11ef7193 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7196 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef7197 push esi */
  push32((uint32_t)(ESI));
  /* 11ef7198 push edi */
  push32((uint32_t)(EDI));
  /* 11ef7199 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef719a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef719d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef71a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef71a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef71a9 pop ecx */
  ECX = (pop32());
  /* 11ef71aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef71ad mov esi, esp */
  ESI = (ESP);
  /* 11ef71af push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef71b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef71b4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef71b7 push eax */
  push32((uint32_t)(EAX));
  /* 11ef71b8 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef71beu);
  /* 11ef71be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef71c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef71c3 call 0x11ef9720 */
  push32(0x11ef71c8u); f_11ef9720();
  /* 11ef71c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef71cb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11ef71ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ef71d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef71d4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef71d7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ef71da cmp dword ptr [ebp - 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef71de ja 0x11ef7311 */
  if ((!C.cf&&!C.zf)) goto L_11ef7311;
  /* 11ef71e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef71e7 jmp dword ptr [ecx*4 + 0x11ef7322] */
  switch (ECX) {
    case 0: goto L_11ef71ee;
    case 1: goto L_11ef7227;
    case 2: goto L_11ef726b;
    case 3: goto L_11ef72a1;
    case 4: goto L_11ef72e5;
    default: x86_unimpl("switch@0x11ef71e7 out of table"); return;
  }
L_11ef71ee:;
  /* 11ef71ee mov esi, esp */
  ESI = (ESP);
  /* 11ef71f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef71f3 mov al, byte ptr [edx + 0x18] */
  AL = (r8((uint32_t)(EDX + 0x18)));
  /* 11ef71f6 push eax */
  push32((uint32_t)(EAX));
  /* 11ef71f7 call dword ptr [0x11f334c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334c4))), 0x11ef71fdu);
  /* 11ef71fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7200 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7202 call 0x11ef9720 */
  push32(0x11ef7207u); f_11ef9720();
  /* 11ef7207 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef720c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef720e je 0x11ef7222 */
  if (C.zf) goto L_11ef7222;
  /* 11ef7210 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7213 call 0x11ef1226 */
  push32(0x11ef7218u); f_11ef1226();
  /* 11ef7218 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef721b mov dword ptr [ecx + 0x14], 2 */
  w32((uint32_t)(ECX + 0x14), (0x2u));
L_11ef7222:;
  /* 11ef7222 jmp 0x11ef7311 */
  goto L_11ef7311;
L_11ef7227:;
  /* 11ef7227 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef722a call 0x11ef1140 */
  push32(0x11ef722fu); f_11ef1140();
  /* 11ef722f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef7234 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef7236 je 0x11ef7266 */
  if (C.zf) goto L_11ef7266;
  /* 11ef7238 mov esi, esp */
  ESI = (ESP);
  /* 11ef723a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef723c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef723e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7241 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ef7244 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7245 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7248 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11ef724b push edx */
  push32((uint32_t)(EDX));
  /* 11ef724c call dword ptr [0x11f33574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33574))), 0x11ef7252u);
  /* 11ef7252 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7257 call 0x11ef9720 */
  push32(0x11ef725cu); f_11ef9720();
  /* 11ef725c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef725f mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
L_11ef7266:;
  /* 11ef7266 jmp 0x11ef7311 */
  goto L_11ef7311;
L_11ef726b:;
  /* 11ef726b mov esi, esp */
  ESI = (ESP);
  /* 11ef726d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7270 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11ef7273 push edx */
  push32((uint32_t)(EDX));
  /* 11ef7274 call dword ptr [0x11f334c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334c4))), 0x11ef727au);
  /* 11ef727a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef727d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef727f call 0x11ef9720 */
  push32(0x11ef7284u); f_11ef9720();
  /* 11ef7284 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef7289 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef728b je 0x11ef729f */
  if (C.zf) goto L_11ef729f;
  /* 11ef728d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7290 call 0x11ef107d */
  push32(0x11ef7295u); f_11ef107d();
  /* 11ef7295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7298 mov dword ptr [eax + 0x14], 4 */
  w32((uint32_t)(EAX + 0x14), (0x4u));
L_11ef729f:;
  /* 11ef729f jmp 0x11ef7311 */
  goto L_11ef7311;
L_11ef72a1:;
  /* 11ef72a1 mov esi, esp */
  ESI = (ESP);
  /* 11ef72a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef72a6 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11ef72a9 push edx */
  push32((uint32_t)(EDX));
  /* 11ef72aa call dword ptr [0x11f334d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334d0))), 0x11ef72b0u);
  /* 11ef72b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef72b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef72b5 call 0x11ef9720 */
  push32(0x11ef72bau); f_11ef9720();
  /* 11ef72ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef72bc jne 0x11ef72e3 */
  if (!C.zf) goto L_11ef72e3;
  /* 11ef72be mov esi, esp */
  ESI = (ESP);
  /* 11ef72c0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ef72c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef72c5 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11ef72c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef72c9 call dword ptr [0x11f3350c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3350c))), 0x11ef72cfu);
  /* 11ef72cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef72d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef72d4 call 0x11ef9720 */
  push32(0x11ef72d9u); f_11ef9720();
  /* 11ef72d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef72dc mov dword ptr [edx + 0x14], 5 */
  w32((uint32_t)(EDX + 0x14), (0x5u));
L_11ef72e3:;
  /* 11ef72e3 jmp 0x11ef7311 */
  goto L_11ef7311;
L_11ef72e5:;
  /* 11ef72e5 mov esi, esp */
  ESI = (ESP);
  /* 11ef72e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef72ea mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11ef72ed push ecx */
  push32((uint32_t)(ECX));
  /* 11ef72ee call dword ptr [0x11f33518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33518))), 0x11ef72f4u);
  /* 11ef72f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef72f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef72f9 call 0x11ef9720 */
  push32(0x11ef72feu); f_11ef9720();
  /* 11ef72fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef7303 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef7305 je 0x11ef7311 */
  if (C.zf) goto L_11ef7311;
  /* 11ef7307 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef730a mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
L_11ef7311:;
  /* 11ef7311 pop edi */
  EDI = (pop32());
  /* 11ef7312 pop esi */
  ESI = (pop32());
  /* 11ef7313 pop ebx */
  EBX = (pop32());
  /* 11ef7314 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7317 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7319 call 0x11ef9720 */
  push32(0x11ef731eu); f_11ef9720();
  /* 11ef731e mov esp, ebp */
  ESP = (EBP);
  /* 11ef7320 pop ebp */
  EBP = (pop32());
  /* 11ef7321 ret  */
  ESPCHK(0x11ef7190u, _esp0);
  ESP += 4; return;
}

/* FUN_100073a0 @ 0x11ef73a0 (39 bytes, 18 insns) */
void f_11ef73a0(void) {
  FTRACE(0x11ef73a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef73a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef73a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef73a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef73a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef73a7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef73a8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef73a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11ef73ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11ef73b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef73b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef73b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef73bb mov dword ptr [0x11f3068c], eax */
  w32((uint32_t)(0x11f3068c), (EAX));
  /* 11ef73c0 pop edi */
  EDI = (pop32());
  /* 11ef73c1 pop esi */
  ESI = (pop32());
  /* 11ef73c2 pop ebx */
  EBX = (pop32());
  /* 11ef73c3 mov esp, ebp */
  ESP = (EBP);
  /* 11ef73c5 pop ebp */
  EBP = (pop32());
  /* 11ef73c6 ret  */
  ESPCHK(0x11ef73a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100073d0 @ 0x11ef73d0 (93 bytes, 34 insns) */
void f_11ef73d0(void) {
  FTRACE(0x11ef73d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef73d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef73d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef73d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef73d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef73d7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef73d8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef73d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11ef73dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11ef73e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef73e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef73e8 cmp dword ptr [0x11f3068c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f3068c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef73ef je 0x11ef741c */
  if (C.zf) goto L_11ef741c;
  /* 11ef73f1 mov ecx, dword ptr [0x11f3068c] */
  ECX = (r32((uint32_t)(0x11f3068c)));
  /* 11ef73f7 call 0x11ef10eb */
  push32(0x11ef73fcu); f_11ef10eb();
  /* 11ef73fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef7401 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef7403 je 0x11ef741c */
  if (C.zf) goto L_11ef741c;
  /* 11ef7405 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef7408 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7409 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef740c push ecx */
  push32((uint32_t)(ECX));
  /* 11ef740d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef7410 push edx */
  push32((uint32_t)(EDX));
  /* 11ef7411 mov ecx, dword ptr [0x11f3068c] */
  ECX = (r32((uint32_t)(0x11f3068c)));
  /* 11ef7417 call 0x11ef111d */
  push32(0x11ef741cu); f_11ef111d();
L_11ef741c:;
  /* 11ef741c pop edi */
  EDI = (pop32());
  /* 11ef741d pop esi */
  ESI = (pop32());
  /* 11ef741e pop ebx */
  EBX = (pop32());
  /* 11ef741f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7422 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7424 call 0x11ef9720 */
  push32(0x11ef7429u); f_11ef9720();
  /* 11ef7429 mov esp, ebp */
  ESP = (EBP);
  /* 11ef742b pop ebp */
  EBP = (pop32());
  /* 11ef742c ret  */
  ESPCHK(0x11ef73d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007450 @ 0x11ef7450 (437 bytes, 146 insns) */
void f_11ef7450(void) {
  FTRACE(0x11ef7450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef7450 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef7451 mov ebp, esp */
  EBP = (ESP);
  /* 11ef7453 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7456 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef7457 push esi */
  push32((uint32_t)(ESI));
  /* 11ef7458 push edi */
  push32((uint32_t)(EDI));
  /* 11ef7459 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef745a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef745d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef7462 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef7467 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef7469 pop ecx */
  ECX = (pop32());
  /* 11ef746a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef746d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7470 call 0x11ef105f */
  push32(0x11ef7475u); f_11ef105f();
  /* 11ef7475 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef747a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef747c je 0x11ef75f4 */
  if (C.zf) goto L_11ef75f4;
  /* 11ef7482 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7485 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11ef7488 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11ef748b cmp byte ptr [ebp - 8], 1 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ef748f je 0x11ef7549 */
  if (C.zf) goto L_11ef7549;
  /* 11ef7495 cmp byte ptr [ebp - 8], 2 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ef7499 je 0x11ef74a0 */
  if (C.zf) goto L_11ef74a0;
  /* 11ef749b jmp 0x11ef759f */
  goto L_11ef759f;
L_11ef74a0:;
  /* 11ef74a0 cmp dword ptr [0x11f30694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11f30694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef74a7 je 0x11ef74ef */
  if (C.zf) goto L_11ef74ef;
  /* 11ef74a9 mov esi, esp */
  ESI = (ESP);
  /* 11ef74ab push 3 */
  push32((uint32_t)(0x3u));
  /* 11ef74ad mov edx, dword ptr [0x11f30694] */
  EDX = (r32((uint32_t)(0x11f30694)));
  /* 11ef74b3 push edx */
  push32((uint32_t)(EDX));
  /* 11ef74b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef74b7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef74ba push eax */
  push32((uint32_t)(EAX));
  /* 11ef74bb call dword ptr [0x11f33570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33570))), 0x11ef74c1u);
  /* 11ef74c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef74c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef74c6 call 0x11ef9720 */
  push32(0x11ef74cbu); f_11ef9720();
  /* 11ef74cb mov esi, esp */
  ESI = (ESP);
  /* 11ef74cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef74cf mov ecx, dword ptr [0x11f30694] */
  ECX = (r32((uint32_t)(0x11f30694)));
  /* 11ef74d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef74d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef74d9 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef74dc push edx */
  push32((uint32_t)(EDX));
  /* 11ef74dd call dword ptr [0x11f33570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33570))), 0x11ef74e3u);
  /* 11ef74e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef74e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef74e8 call 0x11ef9720 */
  push32(0x11ef74edu); f_11ef9720();
  /* 11ef74ed jmp 0x11ef7544 */
  goto L_11ef7544;
L_11ef74ef:;
  /* 11ef74ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef74f2 call 0x11ef10a0 */
  push32(0x11ef74f7u); f_11ef10a0();
  /* 11ef74f7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef74fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef74fe jne 0x11ef7544 */
  if (!C.zf) goto L_11ef7544;
  /* 11ef7500 mov esi, esp */
  ESI = (ESP);
  /* 11ef7502 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef7504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7507 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef750a push eax */
  push32((uint32_t)(EAX));
  /* 11ef750b call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef7511u);
  /* 11ef7511 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7514 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7516 call 0x11ef9720 */
  push32(0x11ef751bu); f_11ef9720();
  /* 11ef751b mov esi, esp */
  ESI = (ESP);
  /* 11ef751d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef751f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7522 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11ef7525 push edx */
  push32((uint32_t)(EDX));
  /* 11ef7526 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7529 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef752c push eax */
  push32((uint32_t)(EAX));
  /* 11ef752d mov cl, byte ptr [0x11f30690] */
  CL = (r8((uint32_t)(0x11f30690)));
  /* 11ef7533 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7534 call dword ptr [0x11f3356c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3356c))), 0x11ef753au);
  /* 11ef753a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef753d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef753f call 0x11ef9720 */
  push32(0x11ef7544u); f_11ef9720();
L_11ef7544:;
  /* 11ef7544 jmp 0x11ef75f4 */
  goto L_11ef75f4;
L_11ef7549:;
  /* 11ef7549 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef754c call 0x11ef10a0 */
  push32(0x11ef7551u); f_11ef10a0();
  /* 11ef7551 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef7556 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef7558 jne 0x11ef759d */
  if (!C.zf) goto L_11ef759d;
  /* 11ef755a mov esi, esp */
  ESI = (ESP);
  /* 11ef755c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef755e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7561 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7564 push edx */
  push32((uint32_t)(EDX));
  /* 11ef7565 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef756bu);
  /* 11ef756b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef756e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7570 call 0x11ef9720 */
  push32(0x11ef7575u); f_11ef9720();
  /* 11ef7575 mov esi, esp */
  ESI = (ESP);
  /* 11ef7577 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef7579 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef757c mov cl, byte ptr [eax + 8] */
  CL = (r8((uint32_t)(EAX + 0x8)));
  /* 11ef757f push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7580 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7583 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7586 push edx */
  push32((uint32_t)(EDX));
  /* 11ef7587 mov al, byte ptr [0x11f30690] */
  AL = (r8((uint32_t)(0x11f30690)));
  /* 11ef758c push eax */
  push32((uint32_t)(EAX));
  /* 11ef758d call dword ptr [0x11f3356c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3356c))), 0x11ef7593u);
  /* 11ef7593 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7596 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7598 call 0x11ef9720 */
  push32(0x11ef759du); f_11ef9720();
L_11ef759d:;
  /* 11ef759d jmp 0x11ef75f4 */
  goto L_11ef75f4;
L_11ef759f:;
  /* 11ef759f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef75a2 call 0x11ef10a0 */
  push32(0x11ef75a7u); f_11ef10a0();
  /* 11ef75a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef75ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef75ae jne 0x11ef75f4 */
  if (!C.zf) goto L_11ef75f4;
  /* 11ef75b0 mov esi, esp */
  ESI = (ESP);
  /* 11ef75b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef75b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef75b7 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef75ba push ecx */
  push32((uint32_t)(ECX));
  /* 11ef75bb call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef75c1u);
  /* 11ef75c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef75c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef75c6 call 0x11ef9720 */
  push32(0x11ef75cbu); f_11ef9720();
  /* 11ef75cb mov esi, esp */
  ESI = (ESP);
  /* 11ef75cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef75cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef75d2 mov al, byte ptr [edx + 8] */
  AL = (r8((uint32_t)(EDX + 0x8)));
  /* 11ef75d5 push eax */
  push32((uint32_t)(EAX));
  /* 11ef75d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef75d9 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef75dc push ecx */
  push32((uint32_t)(ECX));
  /* 11ef75dd mov dl, byte ptr [0x11f30690] */
  DL = (r8((uint32_t)(0x11f30690)));
  /* 11ef75e3 push edx */
  push32((uint32_t)(EDX));
  /* 11ef75e4 call dword ptr [0x11f33574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33574))), 0x11ef75eau);
  /* 11ef75ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef75ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef75ef call 0x11ef9720 */
  push32(0x11ef75f4u); f_11ef9720();
L_11ef75f4:;
  /* 11ef75f4 pop edi */
  EDI = (pop32());
  /* 11ef75f5 pop esi */
  ESI = (pop32());
  /* 11ef75f6 pop ebx */
  EBX = (pop32());
  /* 11ef75f7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef75fa cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef75fc call 0x11ef9720 */
  push32(0x11ef7601u); f_11ef9720();
  /* 11ef7601 mov esp, ebp */
  ESP = (EBP);
  /* 11ef7603 pop ebp */
  EBP = (pop32());
  /* 11ef7604 ret  */
  ESPCHK(0x11ef7450u, _esp0);
  ESP += 4; return;
}

/* FUN_10007680 @ 0x11ef7680 (235 bytes, 78 insns) */
void f_11ef7680(void) {
  FTRACE(0x11ef7680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef7680 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef7681 mov ebp, esp */
  EBP = (ESP);
  /* 11ef7683 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7689 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef768a push esi */
  push32((uint32_t)(ESI));
  /* 11ef768b push edi */
  push32((uint32_t)(EDI));
  /* 11ef768c push ecx */
  push32((uint32_t)(ECX));
  /* 11ef768d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11ef7693 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11ef7698 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef769d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef769f pop ecx */
  ECX = (pop32());
  /* 11ef76a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef76a3 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 11ef76aa mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11ef76b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef76b4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef76b7 mov esi, esp */
  ESI = (ESP);
  /* 11ef76b9 push eax */
  push32((uint32_t)(EAX));
  /* 11ef76ba call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef76c0u);
  /* 11ef76c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef76c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef76c5 call 0x11ef9720 */
  push32(0x11ef76cau); f_11ef9720();
  /* 11ef76ca mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11ef76cd cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef76d1 jle 0x11ef7744 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef7744;
  /* 11ef76d3 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11ef76da mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11ef76e1 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11ef76e8 jmp 0x11ef76f3 */
  goto L_11ef76f3;
L_11ef76ea:;
  /* 11ef76ea mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ef76ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef76f0 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11ef76f3:;
  /* 11ef76f3 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ef76f6 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef76f9 jge 0x11ef7730 */
  if ((C.sf==C.of)) goto L_11ef7730;
  /* 11ef76fb mov esi, esp */
  ESI = (ESP);
  /* 11ef76fd lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11ef7700 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7701 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ef7704 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7705 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7708 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef770b push edx */
  push32((uint32_t)(EDX));
  /* 11ef770c call dword ptr [0x11f33590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33590))), 0x11ef7712u);
  /* 11ef7712 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7715 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7717 call 0x11ef9720 */
  push32(0x11ef771cu); f_11ef9720();
  /* 11ef771c mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ef771f add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7722 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11ef7725 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ef7728 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef772b mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11ef772e jmp 0x11ef76ea */
  goto L_11ef76ea;
L_11ef7730:;
  /* 11ef7730 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ef7733 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ef7734 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ef7737 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11ef773a mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ef773d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ef773e idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ef7741 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11ef7744:;
  /* 11ef7744 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef7747 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ef774a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ef774c mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ef774f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ef7752 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef7755 pop edi */
  EDI = (pop32());
  /* 11ef7756 pop esi */
  ESI = (pop32());
  /* 11ef7757 pop ebx */
  EBX = (pop32());
  /* 11ef7758 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef775e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7760 call 0x11ef9720 */
  push32(0x11ef7765u); f_11ef9720();
  /* 11ef7765 mov esp, ebp */
  ESP = (EBP);
  /* 11ef7767 pop ebp */
  EBP = (pop32());
  /* 11ef7768 ret 4 */
  ESPCHK(0x11ef7680u, _esp0);
  ESP += 8; return;
}

/* FUN_100077b0 @ 0x11ef77b0 (120 bytes, 47 insns) */
void f_11ef77b0(void) {
  FTRACE(0x11ef77b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef77b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef77b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef77b3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef77b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef77b7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef77b8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef77b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef77ba lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef77bd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef77c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef77c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef77c9 pop ecx */
  ECX = (pop32());
  /* 11ef77ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef77cd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef77d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef77d4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef77d7 mov esi, esp */
  ESI = (ESP);
  /* 11ef77d9 push eax */
  push32((uint32_t)(EAX));
  /* 11ef77da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef77dd add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef77e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef77e1 call dword ptr [0x11f33578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33578))), 0x11ef77e7u);
  /* 11ef77e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef77ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef77ec call 0x11ef9720 */
  push32(0x11ef77f1u); f_11ef9720();
  /* 11ef77f1 mov esi, eax */
  ESI = (EAX);
  /* 11ef77f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef77f6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef77f9 mov edi, esp */
  EDI = (ESP);
  /* 11ef77fb push edx */
  push32((uint32_t)(EDX));
  /* 11ef77fc call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef7802u);
  /* 11ef7802 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7805 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7807 call 0x11ef9720 */
  push32(0x11ef780cu); f_11ef9720();
  /* 11ef780c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef780e jne 0x11ef7814 */
  if (!C.zf) goto L_11ef7814;
  /* 11ef7810 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef7814:;
  /* 11ef7814 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef7817 pop edi */
  EDI = (pop32());
  /* 11ef7818 pop esi */
  ESI = (pop32());
  /* 11ef7819 pop ebx */
  EBX = (pop32());
  /* 11ef781a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef781d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef781f call 0x11ef9720 */
  push32(0x11ef7824u); f_11ef9720();
  /* 11ef7824 mov esp, ebp */
  ESP = (EBP);
  /* 11ef7826 pop ebp */
  EBP = (pop32());
  /* 11ef7827 ret  */
  ESPCHK(0x11ef77b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007850 @ 0x11ef7850 (86 bytes, 35 insns) */
void f_11ef7850(void) {
  FTRACE(0x11ef7850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef7850 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef7851 mov ebp, esp */
  EBP = (ESP);
  /* 11ef7853 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7856 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef7857 push esi */
  push32((uint32_t)(ESI));
  /* 11ef7858 push edi */
  push32((uint32_t)(EDI));
  /* 11ef7859 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef785a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef785d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef7862 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef7867 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef7869 pop ecx */
  ECX = (pop32());
  /* 11ef786a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef786d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef7871 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7874 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7877 mov esi, esp */
  ESI = (ESP);
  /* 11ef7879 push eax */
  push32((uint32_t)(EAX));
  /* 11ef787a call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef7880u);
  /* 11ef7880 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7883 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7885 call 0x11ef9720 */
  push32(0x11ef788au); f_11ef9720();
  /* 11ef788a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef788c jle 0x11ef7892 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef7892;
  /* 11ef788e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef7892:;
  /* 11ef7892 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef7895 pop edi */
  EDI = (pop32());
  /* 11ef7896 pop esi */
  ESI = (pop32());
  /* 11ef7897 pop ebx */
  EBX = (pop32());
  /* 11ef7898 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef789b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef789d call 0x11ef9720 */
  push32(0x11ef78a2u); f_11ef9720();
  /* 11ef78a2 mov esp, ebp */
  ESP = (EBP);
  /* 11ef78a4 pop ebp */
  EBP = (pop32());
  /* 11ef78a5 ret  */
  ESPCHK(0x11ef7850u, _esp0);
  ESP += 4; return;
}

/* FUN_100078c0 @ 0x11ef78c0 (42 bytes, 21 insns) */
void f_11ef78c0(void) {
  FTRACE(0x11ef78c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef78c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef78c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef78c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef78c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef78c7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef78c8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef78c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef78ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef78cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef78d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef78d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef78d9 pop ecx */
  ECX = (pop32());
  /* 11ef78da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef78dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef78e0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef78e3 pop edi */
  EDI = (pop32());
  /* 11ef78e4 pop esi */
  ESI = (pop32());
  /* 11ef78e5 pop ebx */
  EBX = (pop32());
  /* 11ef78e6 mov esp, ebp */
  ESP = (EBP);
  /* 11ef78e8 pop ebp */
  EBP = (pop32());
  /* 11ef78e9 ret  */
  ESPCHK(0x11ef78c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007900 @ 0x11ef7900 (77 bytes, 32 insns) */
void f_11ef7900(void) {
  FTRACE(0x11ef7900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef7900 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef7901 mov ebp, esp */
  EBP = (ESP);
  /* 11ef7903 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7906 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef7907 push esi */
  push32((uint32_t)(ESI));
  /* 11ef7908 push edi */
  push32((uint32_t)(EDI));
  /* 11ef7909 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef790a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef790d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef7912 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef7917 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef7919 pop ecx */
  ECX = (pop32());
  /* 11ef791a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef791d mov esi, esp */
  ESI = (ESP);
  /* 11ef791f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef7922 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7923 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7926 add ecx, 0xd */
  { uint32_t _a=(ECX),_b=(0xdu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7929 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef792a call dword ptr [0x11f334d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334d4))), 0x11ef7930u);
  /* 11ef7930 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7933 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7935 call 0x11ef9720 */
  push32(0x11ef793au); f_11ef9720();
  /* 11ef793a pop edi */
  EDI = (pop32());
  /* 11ef793b pop esi */
  ESI = (pop32());
  /* 11ef793c pop ebx */
  EBX = (pop32());
  /* 11ef793d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7940 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7942 call 0x11ef9720 */
  push32(0x11ef7947u); f_11ef9720();
  /* 11ef7947 mov esp, ebp */
  ESP = (EBP);
  /* 11ef7949 pop ebp */
  EBP = (pop32());
  /* 11ef794a ret 4 */
  ESPCHK(0x11ef7900u, _esp0);
  ESP += 8; return;
}

/* FUN_10007960 @ 0x11ef7960 (413 bytes, 143 insns) */
void f_11ef7960(void) {
  FTRACE(0x11ef7960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef7960 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef7961 mov ebp, esp */
  EBP = (ESP);
  /* 11ef7963 sub esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7966 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef7967 push esi */
  push32((uint32_t)(ESI));
  /* 11ef7968 push edi */
  push32((uint32_t)(EDI));
  /* 11ef7969 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef796a lea edi, [ebp - 0x54] */
  EDI = ((uint32_t)(EBP + -0x54));
  /* 11ef796d mov ecx, 0x15 */
  ECX = (0x15u);
  /* 11ef7972 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef7977 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef7979 pop ecx */
  ECX = (pop32());
  /* 11ef797a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef797d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7980 call 0x11ef10dc */
  push32(0x11ef7985u); f_11ef10dc();
  /* 11ef7985 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef798a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef798c je 0x11ef7aec */
  if (C.zf) goto L_11ef7aec;
  /* 11ef7992 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7995 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ef7997 mov cl, byte ptr [eax + 0xc] */
  CL = (r8((uint32_t)(EAX + 0xc)));
  /* 11ef799a cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef799d jne 0x11ef7a48 */
  if (!C.zf) goto L_11ef7a48;
  /* 11ef79a3 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11ef79a8 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ef79ab push edx */
  push32((uint32_t)(EDX));
  /* 11ef79ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef79af call 0x11ef10c3 */
  push32(0x11ef79b4u); f_11ef10c3();
  /* 11ef79b4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ef79b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef79b8 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11ef79ba push edx */
  push32((uint32_t)(EDX));
  /* 11ef79bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef79be add eax, 0x15 */
  { uint32_t _a=(EAX),_b=(0x15u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef79c1 push eax */
  push32((uint32_t)(EAX));
  /* 11ef79c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef79c5 call 0x11ef12e9 */
  push32(0x11ef79cau); f_11ef12e9();
  /* 11ef79ca mov esi, esp */
  ESI = (ESP);
  /* 11ef79cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef79ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef79d1 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef79d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef79d5 call dword ptr [0x11f33560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33560))), 0x11ef79dbu);
  /* 11ef79db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef79de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef79e0 call 0x11ef9720 */
  push32(0x11ef79e5u); f_11ef9720();
  /* 11ef79e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef79e8 jge 0x11ef79f3 */
  if ((C.sf==C.of)) goto L_11ef79f3;
  /* 11ef79ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef79ed mov byte ptr [edx + 0xc], 2 */
  w8((uint32_t)(EDX + 0xc), (0x2u));
  /* 11ef79f1 jmp 0x11ef7a48 */
  goto L_11ef7a48;
L_11ef79f3:;
  /* 11ef79f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef79f6 call 0x11ef1186 */
  push32(0x11ef79fbu); f_11ef1186();
  /* 11ef79fb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef7a00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef7a02 jne 0x11ef7a48 */
  if (!C.zf) goto L_11ef7a48;
  /* 11ef7a04 mov esi, esp */
  ESI = (ESP);
  /* 11ef7a06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef7a08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7a0b add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7a0e push eax */
  push32((uint32_t)(EAX));
  /* 11ef7a0f call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef7a15u);
  /* 11ef7a15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7a18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7a1a call 0x11ef9720 */
  push32(0x11ef7a1fu); f_11ef9720();
  /* 11ef7a1f mov esi, esp */
  ESI = (ESP);
  /* 11ef7a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef7a23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7a26 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11ef7a29 push edx */
  push32((uint32_t)(EDX));
  /* 11ef7a2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7a2d add eax, 0x1d */
  { uint32_t _a=(EAX),_b=(0x1du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7a30 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7a31 mov cl, byte ptr [0x11f2ddcc] */
  CL = (r8((uint32_t)(0x11f2ddcc)));
  /* 11ef7a37 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7a38 call dword ptr [0x11f33574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33574))), 0x11ef7a3eu);
  /* 11ef7a3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7a41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7a43 call 0x11ef9720 */
  push32(0x11ef7a48u); f_11ef9720();
L_11ef7a48:;
  /* 11ef7a48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7a4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ef7a4d mov al, byte ptr [edx + 0xc] */
  AL = (r8((uint32_t)(EDX + 0xc)));
  /* 11ef7a50 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7a53 jne 0x11ef7aec */
  if (!C.zf) goto L_11ef7aec;
  /* 11ef7a59 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 11ef7a5e lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11ef7a61 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7a62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7a65 call 0x11ef10c3 */
  push32(0x11ef7a6au); f_11ef10c3();
  /* 11ef7a6a mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ef7a6d push edx */
  push32((uint32_t)(EDX));
  /* 11ef7a6e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11ef7a70 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7a71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7a74 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7a77 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7a78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7a7b call 0x11ef12e9 */
  push32(0x11ef7a80u); f_11ef12e9();
  /* 11ef7a80 mov esi, esp */
  ESI = (ESP);
  /* 11ef7a82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef7a84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7a87 add edx, 0x15 */
  { uint32_t _a=(EDX),_b=(0x15u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7a8a push edx */
  push32((uint32_t)(EDX));
  /* 11ef7a8b call dword ptr [0x11f33560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33560))), 0x11ef7a91u);
  /* 11ef7a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7a96 call 0x11ef9720 */
  push32(0x11ef7a9bu); f_11ef9720();
  /* 11ef7a9b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7a9e jge 0x11ef7ae5 */
  if ((C.sf==C.of)) goto L_11ef7ae5;
  /* 11ef7aa0 mov esi, esp */
  ESI = (ESP);
  /* 11ef7aa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef7aa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7aa7 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7aaa push eax */
  push32((uint32_t)(EAX));
  /* 11ef7aab call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef7ab1u);
  /* 11ef7ab1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7ab4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7ab6 call 0x11ef9720 */
  push32(0x11ef7abbu); f_11ef9720();
  /* 11ef7abb mov esi, esp */
  ESI = (ESP);
  /* 11ef7abd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef7abf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7ac2 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11ef7ac5 push edx */
  push32((uint32_t)(EDX));
  /* 11ef7ac6 mov eax, dword ptr [0x11f30698] */
  EAX = (r32((uint32_t)(0x11f30698)));
  /* 11ef7acb push eax */
  push32((uint32_t)(EAX));
  /* 11ef7acc mov cl, byte ptr [0x11f2ddcc] */
  CL = (r8((uint32_t)(0x11f2ddcc)));
  /* 11ef7ad2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7ad3 call dword ptr [0x11f33574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33574))), 0x11ef7ad9u);
  /* 11ef7ad9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7adc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7ade call 0x11ef9720 */
  push32(0x11ef7ae3u); f_11ef9720();
  /* 11ef7ae3 jmp 0x11ef7aec */
  goto L_11ef7aec;
L_11ef7ae5:;
  /* 11ef7ae5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7ae8 mov byte ptr [edx + 0xc], 1 */
  w8((uint32_t)(EDX + 0xc), (0x1u));
L_11ef7aec:;
  /* 11ef7aec pop edi */
  EDI = (pop32());
  /* 11ef7aed pop esi */
  ESI = (pop32());
  /* 11ef7aee pop ebx */
  EBX = (pop32());
  /* 11ef7aef add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7af2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7af4 call 0x11ef9720 */
  push32(0x11ef7af9u); f_11ef9720();
  /* 11ef7af9 mov esp, ebp */
  ESP = (EBP);
  /* 11ef7afb pop ebp */
  EBP = (pop32());
  /* 11ef7afc ret  */
  ESPCHK(0x11ef7960u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b70 @ 0x11ef7b70 (311 bytes, 104 insns) */
void f_11ef7b70(void) {
  FTRACE(0x11ef7b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef7b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef7b71 mov ebp, esp */
  EBP = (ESP);
  /* 11ef7b73 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7b79 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef7b7a push esi */
  push32((uint32_t)(ESI));
  /* 11ef7b7b push edi */
  push32((uint32_t)(EDI));
  /* 11ef7b7c push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7b7d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11ef7b83 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11ef7b88 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef7b8d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef7b8f pop ecx */
  ECX = (pop32());
  /* 11ef7b90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef7b93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef7b96 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ef7b99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef7b9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ef7b9f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11ef7ba2 push edx */
  push32((uint32_t)(EDX));
  /* 11ef7ba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7ba6 call 0x11ef10c3 */
  push32(0x11ef7babu); f_11ef10c3();
  /* 11ef7bab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ef7bad mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ef7bb0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ef7bb3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ef7bb6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ef7bb9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ef7bbc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ef7bbf mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11ef7bc2 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ef7bc5 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7bc8 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11ef7bcb fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 11ef7bce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ef7bd1 sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7bd4 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11ef7bd7 fild dword ptr [ebp - 0x38] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 11ef7bda fdivp st(1) */
  FPU_ST(1) = FPU_ST(1) / FPU_ST(0);
  (void)fpu_pop();
  /* 11ef7bdc sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7bdf fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11ef7be2 call 0x11ef98d4 */
  push32(0x11ef7be7u); f_11ef98d4();
  /* 11ef7be7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7bea fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
  /* 11ef7bed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ef7bf0 sub ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7bf3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ef7bf5 jge 0x11ef7c03 */
  if ((C.sf==C.of)) goto L_11ef7c03;
  /* 11ef7bf7 fld qword ptr [0x11f2a040] */
  fpu_push(rf64((uint32_t)(0x11f2a040)));
  /* 11ef7bfd fadd qword ptr [ebp - 0x24] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + -0x24)));
  /* 11ef7c00 fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
L_11ef7c03:;
  /* 11ef7c03 fld qword ptr [ebp - 0x24] */
  fpu_push(rf64((uint32_t)(EBP + -0x24)));
  /* 11ef7c06 fmul qword ptr [0x11f2a030] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11f2a030)));
  /* 11ef7c0c fdiv qword ptr [0x11f2a020] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(0x11f2a020)));
  /* 11ef7c12 call 0x11ef9a0c */
  push32(0x11ef7c17u); f_11ef9a0c();
  /* 11ef7c17 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ef7c1a fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 11ef7c1d fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
  /* 11ef7c20 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ef7c23 push edx */
  push32((uint32_t)(EDX));
  /* 11ef7c24 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ef7c27 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7c28 call 0x11ef9824 */
  push32(0x11ef7c2du); f_11ef9824();
  /* 11ef7c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7c30 fmul qword ptr [ebp - 0x40] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x40)));
  /* 11ef7c33 fiadd dword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0x8)));
  /* 11ef7c36 call 0x11ef9a0c */
  push32(0x11ef7c3bu); f_11ef9a0c();
  /* 11ef7c3b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ef7c3e fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 11ef7c41 fstp qword ptr [ebp - 0x48] */
  wf64((uint32_t)(EBP + -0x48), FPU_ST(0));
  (void)fpu_pop();
  /* 11ef7c44 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ef7c47 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7c48 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ef7c4b push edx */
  push32((uint32_t)(EDX));
  /* 11ef7c4c call 0x11ef9774 */
  push32(0x11ef7c51u); f_11ef9774();
  /* 11ef7c51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7c54 fmul qword ptr [ebp - 0x48] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x48)));
  /* 11ef7c57 fiadd dword ptr [ebp - 0xc] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0xc)));
  /* 11ef7c5a call 0x11ef9a0c */
  push32(0x11ef7c5fu); f_11ef9a0c();
  /* 11ef7c5f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ef7c62 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ef7c64 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ef7c67 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7c68 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ef7c6b push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7c6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7c6f add edx, 0x1d */
  { uint32_t _a=(EDX),_b=(0x1du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7c72 push edx */
  push32((uint32_t)(EDX));
  /* 11ef7c73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7c76 call 0x11ef12e9 */
  push32(0x11ef7c7bu); f_11ef12e9();
  /* 11ef7c7b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ef7c7e add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7c83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7c86 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11ef7c89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7c8c call 0x11ef1230 */
  push32(0x11ef7c91u); f_11ef1230();
  /* 11ef7c91 pop edi */
  EDI = (pop32());
  /* 11ef7c92 pop esi */
  ESI = (pop32());
  /* 11ef7c93 pop ebx */
  EBX = (pop32());
  /* 11ef7c94 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7c9a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7c9c call 0x11ef9720 */
  push32(0x11ef7ca1u); f_11ef9720();
  /* 11ef7ca1 mov esp, ebp */
  ESP = (EBP);
  /* 11ef7ca3 pop ebp */
  EBP = (pop32());
  /* 11ef7ca4 ret 0xc */
  ESPCHK(0x11ef7b70u, _esp0);
  ESP += 16; return;
}

/* FUN_10007d00 @ 0x11ef7d00 (198 bytes, 71 insns) */
void f_11ef7d00(void) {
  FTRACE(0x11ef7d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef7d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef7d01 mov ebp, esp */
  EBP = (ESP);
  /* 11ef7d03 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7d06 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef7d07 push esi */
  push32((uint32_t)(ESI));
  /* 11ef7d08 push edi */
  push32((uint32_t)(EDI));
  /* 11ef7d09 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7d0a lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 11ef7d0d mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 11ef7d12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef7d17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef7d19 pop ecx */
  ECX = (pop32());
  /* 11ef7d1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef7d1d mov esi, esp */
  ESI = (ESP);
  /* 11ef7d1f lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11ef7d22 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef7d25 mov ecx, dword ptr [0x11f3069c] */
  ECX = (r32((uint32_t)(0x11f3069c)));
  /* 11ef7d2b push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7d2c call dword ptr [0x11f33590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33590))), 0x11ef7d32u);
  /* 11ef7d32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7d35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7d37 call 0x11ef9720 */
  push32(0x11ef7d3cu); f_11ef9720();
  /* 11ef7d3c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ef7d3f mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11ef7d42 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ef7d45 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11ef7d48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef7d4b mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11ef7d4e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef7d51 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ef7d54 mov esi, esp */
  ESI = (ESP);
  /* 11ef7d56 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11ef7d59 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7d5a call dword ptr [0x11f334ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334ec))), 0x11ef7d60u);
  /* 11ef7d60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7d63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7d65 call 0x11ef9720 */
  push32(0x11ef7d6au); f_11ef9720();
  /* 11ef7d6a mov esi, esp */
  ESI = (ESP);
  /* 11ef7d6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ef7d6f push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7d70 mov edx, dword ptr [0x11f3069c] */
  EDX = (r32((uint32_t)(0x11f3069c)));
  /* 11ef7d76 push edx */
  push32((uint32_t)(EDX));
  /* 11ef7d77 mov eax, dword ptr [0x11f30698] */
  EAX = (r32((uint32_t)(0x11f30698)));
  /* 11ef7d7c push eax */
  push32((uint32_t)(EAX));
  /* 11ef7d7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef7d80 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7d81 call dword ptr [0x11f334f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334f0))), 0x11ef7d87u);
  /* 11ef7d87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7d8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7d8c call 0x11ef9720 */
  push32(0x11ef7d91u); f_11ef9720();
  /* 11ef7d91 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ef7d94 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ef7d97 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ef7d9a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ef7d9d mov esi, esp */
  ESI = (ESP);
  /* 11ef7d9f lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11ef7da2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7da3 call dword ptr [0x11f334ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334ec))), 0x11ef7da9u);
  /* 11ef7da9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7dac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7dae call 0x11ef9720 */
  push32(0x11ef7db3u); f_11ef9720();
  /* 11ef7db3 pop edi */
  EDI = (pop32());
  /* 11ef7db4 pop esi */
  ESI = (pop32());
  /* 11ef7db5 pop ebx */
  EBX = (pop32());
  /* 11ef7db6 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7db9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7dbb call 0x11ef9720 */
  push32(0x11ef7dc0u); f_11ef9720();
  /* 11ef7dc0 mov esp, ebp */
  ESP = (EBP);
  /* 11ef7dc2 pop ebp */
  EBP = (pop32());
  /* 11ef7dc3 ret 0x10 */
  ESPCHK(0x11ef7d00u, _esp0);
  ESP += 20; return;
}

/* FUN_10007e00 @ 0x11ef7e00 (120 bytes, 47 insns) */
void f_11ef7e00(void) {
  FTRACE(0x11ef7e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef7e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef7e01 mov ebp, esp */
  EBP = (ESP);
  /* 11ef7e03 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7e06 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef7e07 push esi */
  push32((uint32_t)(ESI));
  /* 11ef7e08 push edi */
  push32((uint32_t)(EDI));
  /* 11ef7e09 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7e0a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef7e0d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef7e12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef7e17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef7e19 pop ecx */
  ECX = (pop32());
  /* 11ef7e1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef7e1d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef7e21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7e24 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7e27 mov esi, esp */
  ESI = (ESP);
  /* 11ef7e29 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7e2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7e2d add ecx, 0x1d */
  { uint32_t _a=(ECX),_b=(0x1du),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7e30 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7e31 call dword ptr [0x11f33578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33578))), 0x11ef7e37u);
  /* 11ef7e37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7e3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7e3c call 0x11ef9720 */
  push32(0x11ef7e41u); f_11ef9720();
  /* 11ef7e41 mov esi, eax */
  ESI = (EAX);
  /* 11ef7e43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7e46 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7e49 mov edi, esp */
  EDI = (ESP);
  /* 11ef7e4b push edx */
  push32((uint32_t)(EDX));
  /* 11ef7e4c call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef7e52u);
  /* 11ef7e52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7e55 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7e57 call 0x11ef9720 */
  push32(0x11ef7e5cu); f_11ef9720();
  /* 11ef7e5c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7e5e jne 0x11ef7e64 */
  if (!C.zf) goto L_11ef7e64;
  /* 11ef7e60 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef7e64:;
  /* 11ef7e64 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef7e67 pop edi */
  EDI = (pop32());
  /* 11ef7e68 pop esi */
  ESI = (pop32());
  /* 11ef7e69 pop ebx */
  EBX = (pop32());
  /* 11ef7e6a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7e6d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7e6f call 0x11ef9720 */
  push32(0x11ef7e74u); f_11ef9720();
  /* 11ef7e74 mov esp, ebp */
  ESP = (EBP);
  /* 11ef7e76 pop ebp */
  EBP = (pop32());
  /* 11ef7e77 ret  */
  ESPCHK(0x11ef7e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea0 @ 0x11ef7ea0 (86 bytes, 35 insns) */
void f_11ef7ea0(void) {
  FTRACE(0x11ef7ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef7ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef7ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef7ea3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7ea6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef7ea7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef7ea8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef7ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7eaa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef7ead mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef7eb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef7eb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef7eb9 pop ecx */
  ECX = (pop32());
  /* 11ef7eba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef7ebd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef7ec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7ec4 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7ec7 mov esi, esp */
  ESI = (ESP);
  /* 11ef7ec9 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7eca call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef7ed0u);
  /* 11ef7ed0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7ed3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7ed5 call 0x11ef9720 */
  push32(0x11ef7edau); f_11ef9720();
  /* 11ef7eda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef7edc jle 0x11ef7ee2 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef7ee2;
  /* 11ef7ede mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef7ee2:;
  /* 11ef7ee2 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef7ee5 pop edi */
  EDI = (pop32());
  /* 11ef7ee6 pop esi */
  ESI = (pop32());
  /* 11ef7ee7 pop ebx */
  EBX = (pop32());
  /* 11ef7ee8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7eeb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7eed call 0x11ef9720 */
  push32(0x11ef7ef2u); f_11ef9720();
  /* 11ef7ef2 mov esp, ebp */
  ESP = (EBP);
  /* 11ef7ef4 pop ebp */
  EBP = (pop32());
  /* 11ef7ef5 ret  */
  ESPCHK(0x11ef7ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f10 @ 0x11ef7f10 (42 bytes, 21 insns) */
void f_11ef7f10(void) {
  FTRACE(0x11ef7f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef7f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef7f11 mov ebp, esp */
  EBP = (ESP);
  /* 11ef7f13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7f16 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef7f17 push esi */
  push32((uint32_t)(ESI));
  /* 11ef7f18 push edi */
  push32((uint32_t)(EDI));
  /* 11ef7f19 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7f1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef7f1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef7f22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef7f27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef7f29 pop ecx */
  ECX = (pop32());
  /* 11ef7f2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef7f2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7f30 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7f33 pop edi */
  EDI = (pop32());
  /* 11ef7f34 pop esi */
  ESI = (pop32());
  /* 11ef7f35 pop ebx */
  EBX = (pop32());
  /* 11ef7f36 mov esp, ebp */
  ESP = (EBP);
  /* 11ef7f38 pop ebp */
  EBP = (pop32());
  /* 11ef7f39 ret  */
  ESPCHK(0x11ef7f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f50 @ 0x11ef7f50 (235 bytes, 78 insns) */
void f_11ef7f50(void) {
  FTRACE(0x11ef7f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef7f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef7f51 mov ebp, esp */
  EBP = (ESP);
  /* 11ef7f53 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef7f59 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef7f5a push esi */
  push32((uint32_t)(ESI));
  /* 11ef7f5b push edi */
  push32((uint32_t)(EDI));
  /* 11ef7f5c push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7f5d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11ef7f63 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11ef7f68 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef7f6d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef7f6f pop ecx */
  ECX = (pop32());
  /* 11ef7f70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef7f73 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 11ef7f7a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11ef7f81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7f84 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7f87 mov esi, esp */
  ESI = (ESP);
  /* 11ef7f89 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7f8a call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef7f90u);
  /* 11ef7f90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7f93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7f95 call 0x11ef9720 */
  push32(0x11ef7f9au); f_11ef9720();
  /* 11ef7f9a mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11ef7f9d cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7fa1 jle 0x11ef8014 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef8014;
  /* 11ef7fa3 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11ef7faa mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11ef7fb1 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11ef7fb8 jmp 0x11ef7fc3 */
  goto L_11ef7fc3;
L_11ef7fba:;
  /* 11ef7fba mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ef7fbd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7fc0 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11ef7fc3:;
  /* 11ef7fc3 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ef7fc6 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7fc9 jge 0x11ef8000 */
  if ((C.sf==C.of)) goto L_11ef8000;
  /* 11ef7fcb mov esi, esp */
  ESI = (ESP);
  /* 11ef7fcd lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11ef7fd0 push eax */
  push32((uint32_t)(EAX));
  /* 11ef7fd1 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ef7fd4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef7fd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef7fd8 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7fdb push edx */
  push32((uint32_t)(EDX));
  /* 11ef7fdc call dword ptr [0x11f33590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33590))), 0x11ef7fe2u);
  /* 11ef7fe2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7fe5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef7fe7 call 0x11ef9720 */
  push32(0x11ef7fecu); f_11ef9720();
  /* 11ef7fec mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ef7fef add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7ff2 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11ef7ff5 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ef7ff8 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef7ffb mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11ef7ffe jmp 0x11ef7fba */
  goto L_11ef7fba;
L_11ef8000:;
  /* 11ef8000 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ef8003 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ef8004 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ef8007 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11ef800a mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ef800d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ef800e idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ef8011 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11ef8014:;
  /* 11ef8014 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef8017 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ef801a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ef801c mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ef801f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ef8022 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef8025 pop edi */
  EDI = (pop32());
  /* 11ef8026 pop esi */
  ESI = (pop32());
  /* 11ef8027 pop ebx */
  EBX = (pop32());
  /* 11ef8028 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef802e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8030 call 0x11ef9720 */
  push32(0x11ef8035u); f_11ef9720();
  /* 11ef8035 mov esp, ebp */
  ESP = (EBP);
  /* 11ef8037 pop ebp */
  EBP = (pop32());
  /* 11ef8038 ret 4 */
  ESPCHK(0x11ef7f50u, _esp0);
  ESP += 8; return;
}

/* FUN_10008080 @ 0x11ef8080 (250 bytes, 89 insns) */
void f_11ef8080(void) {
  FTRACE(0x11ef8080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8080 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8081 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8083 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8086 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8087 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8088 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8089 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef808a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef808d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef8092 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8097 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8099 pop ecx */
  ECX = (pop32());
  /* 11ef809a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef809d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef80a0 call 0x11ef1109 */
  push32(0x11ef80a5u); f_11ef1109();
  /* 11ef80a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef80aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef80ac je 0x11ef8169 */
  if (C.zf) goto L_11ef8169;
  /* 11ef80b2 mov esi, esp */
  ESI = (ESP);
  /* 11ef80b4 mov eax, dword ptr [0x11f2ddd0] */
  EAX = (r32((uint32_t)(0x11f2ddd0)));
  /* 11ef80b9 push eax */
  push32((uint32_t)(EAX));
  /* 11ef80ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef80bd push ecx */
  push32((uint32_t)(ECX));
  /* 11ef80be mov edx, dword ptr [0x11f306a0] */
  EDX = (r32((uint32_t)(0x11f306a0)));
  /* 11ef80c4 push edx */
  push32((uint32_t)(EDX));
  /* 11ef80c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef80c8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef80cb push eax */
  push32((uint32_t)(EAX));
  /* 11ef80cc call dword ptr [0x11f334f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334f0))), 0x11ef80d2u);
  /* 11ef80d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef80d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef80d7 call 0x11ef9720 */
  push32(0x11ef80dcu); f_11ef9720();
  /* 11ef80dc mov esi, esp */
  ESI = (ESP);
  /* 11ef80de push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef80e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef80e3 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef80e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef80e7 call dword ptr [0x11f33560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33560))), 0x11ef80edu);
  /* 11ef80ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef80f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef80f2 call 0x11ef9720 */
  push32(0x11ef80f7u); f_11ef9720();
  /* 11ef80f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef80f9 jle 0x11ef811c */
  if ((C.zf||C.sf!=C.of)) goto L_11ef811c;
  /* 11ef80fb mov esi, esp */
  ESI = (ESP);
  /* 11ef80fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef80ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8102 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8105 push edx */
  push32((uint32_t)(EDX));
  /* 11ef8106 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8109 push eax */
  push32((uint32_t)(EAX));
  /* 11ef810a call dword ptr [0x11f33570] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33570))), 0x11ef8110u);
  /* 11ef8110 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8113 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8115 call 0x11ef9720 */
  push32(0x11ef811au); f_11ef9720();
  /* 11ef811a jmp 0x11ef8169 */
  goto L_11ef8169;
L_11ef811c:;
  /* 11ef811c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef811f call 0x11ef1244 */
  push32(0x11ef8124u); f_11ef1244();
  /* 11ef8124 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef8129 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef812b jne 0x11ef8169 */
  if (!C.zf) goto L_11ef8169;
  /* 11ef812d mov esi, esp */
  ESI = (ESP);
  /* 11ef812f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef8131 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8134 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8135 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef813bu);
  /* 11ef813b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef813e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8140 call 0x11ef9720 */
  push32(0x11ef8145u); f_11ef9720();
  /* 11ef8145 mov esi, esp */
  ESI = (ESP);
  /* 11ef8147 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef8149 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef814b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef814e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ef8151 push eax */
  push32((uint32_t)(EAX));
  /* 11ef8152 mov cl, byte ptr [0x11f2ddd4] */
  CL = (r8((uint32_t)(0x11f2ddd4)));
  /* 11ef8158 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8159 call dword ptr [0x11f3356c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3356c))), 0x11ef815fu);
  /* 11ef815f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8162 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8164 call 0x11ef9720 */
  push32(0x11ef8169u); f_11ef9720();
L_11ef8169:;
  /* 11ef8169 pop edi */
  EDI = (pop32());
  /* 11ef816a pop esi */
  ESI = (pop32());
  /* 11ef816b pop ebx */
  EBX = (pop32());
  /* 11ef816c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef816f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8171 call 0x11ef9720 */
  push32(0x11ef8176u); f_11ef9720();
  /* 11ef8176 mov esp, ebp */
  ESP = (EBP);
  /* 11ef8178 pop ebp */
  EBP = (pop32());
  /* 11ef8179 ret  */
  ESPCHK(0x11ef8080u, _esp0);
  ESP += 4; return;
}

/* FUN_100081c0 @ 0x11ef81c0 (74 bytes, 31 insns) */
void f_11ef81c0(void) {
  FTRACE(0x11ef81c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef81c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef81c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef81c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef81c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef81c7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef81c8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef81c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef81ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef81cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef81d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef81d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef81d9 pop ecx */
  ECX = (pop32());
  /* 11ef81da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef81dd mov esi, esp */
  ESI = (ESP);
  /* 11ef81df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef81e2 push eax */
  push32((uint32_t)(EAX));
  /* 11ef81e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef81e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef81e7 call dword ptr [0x11f334d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334d4))), 0x11ef81edu);
  /* 11ef81ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef81f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef81f2 call 0x11ef9720 */
  push32(0x11ef81f7u); f_11ef9720();
  /* 11ef81f7 pop edi */
  EDI = (pop32());
  /* 11ef81f8 pop esi */
  ESI = (pop32());
  /* 11ef81f9 pop ebx */
  EBX = (pop32());
  /* 11ef81fa add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef81fd cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef81ff call 0x11ef9720 */
  push32(0x11ef8204u); f_11ef9720();
  /* 11ef8204 mov esp, ebp */
  ESP = (EBP);
  /* 11ef8206 pop ebp */
  EBP = (pop32());
  /* 11ef8207 ret 4 */
  ESPCHK(0x11ef81c0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008220 @ 0x11ef8220 (114 bytes, 45 insns) */
void f_11ef8220(void) {
  FTRACE(0x11ef8220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8220 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8221 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8223 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8226 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8227 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8228 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8229 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef822a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef822d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef8232 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8237 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8239 pop ecx */
  ECX = (pop32());
  /* 11ef823a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef823d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef8241 mov esi, esp */
  ESI = (ESP);
  /* 11ef8243 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8246 push eax */
  push32((uint32_t)(EAX));
  /* 11ef8247 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef824a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ef824d push edx */
  push32((uint32_t)(EDX));
  /* 11ef824e call dword ptr [0x11f33578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33578))), 0x11ef8254u);
  /* 11ef8254 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8257 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8259 call 0x11ef9720 */
  push32(0x11ef825eu); f_11ef9720();
  /* 11ef825e mov esi, eax */
  ESI = (EAX);
  /* 11ef8260 mov edi, esp */
  EDI = (ESP);
  /* 11ef8262 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8265 push eax */
  push32((uint32_t)(EAX));
  /* 11ef8266 call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef826cu);
  /* 11ef826c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef826f cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8271 call 0x11ef9720 */
  push32(0x11ef8276u); f_11ef9720();
  /* 11ef8276 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8278 jne 0x11ef827e */
  if (!C.zf) goto L_11ef827e;
  /* 11ef827a mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef827e:;
  /* 11ef827e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef8281 pop edi */
  EDI = (pop32());
  /* 11ef8282 pop esi */
  ESI = (pop32());
  /* 11ef8283 pop ebx */
  EBX = (pop32());
  /* 11ef8284 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8287 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8289 call 0x11ef9720 */
  push32(0x11ef828eu); f_11ef9720();
  /* 11ef828e mov esp, ebp */
  ESP = (EBP);
  /* 11ef8290 pop ebp */
  EBP = (pop32());
  /* 11ef8291 ret  */
  ESPCHK(0x11ef8220u, _esp0);
  ESP += 4; return;
}

/* FUN_100082b0 @ 0x11ef82b0 (83 bytes, 34 insns) */
void f_11ef82b0(void) {
  FTRACE(0x11ef82b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef82b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef82b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef82b3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef82b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef82b7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef82b8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef82b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef82ba lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef82bd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef82c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef82c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef82c9 pop ecx */
  ECX = (pop32());
  /* 11ef82ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef82cd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef82d1 mov esi, esp */
  ESI = (ESP);
  /* 11ef82d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef82d6 push eax */
  push32((uint32_t)(EAX));
  /* 11ef82d7 call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef82ddu);
  /* 11ef82dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef82e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef82e2 call 0x11ef9720 */
  push32(0x11ef82e7u); f_11ef9720();
  /* 11ef82e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef82e9 jle 0x11ef82ef */
  if ((C.zf||C.sf!=C.of)) goto L_11ef82ef;
  /* 11ef82eb mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef82ef:;
  /* 11ef82ef mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef82f2 pop edi */
  EDI = (pop32());
  /* 11ef82f3 pop esi */
  ESI = (pop32());
  /* 11ef82f4 pop ebx */
  EBX = (pop32());
  /* 11ef82f5 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef82f8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef82fa call 0x11ef9720 */
  push32(0x11ef82ffu); f_11ef9720();
  /* 11ef82ff mov esp, ebp */
  ESP = (EBP);
  /* 11ef8301 pop ebp */
  EBP = (pop32());
  /* 11ef8302 ret  */
  ESPCHK(0x11ef82b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008320 @ 0x11ef8320 (126 bytes, 48 insns) */
void f_11ef8320(void) {
  FTRACE(0x11ef8320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8320 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8321 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8323 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8326 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8327 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8328 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8329 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef832a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef832d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef8332 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8337 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8339 pop ecx */
  ECX = (pop32());
  /* 11ef833a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef833d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8340 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef8343 mov dword ptr [eax + 6], ecx */
  w32((uint32_t)(EAX + 0x6), (ECX));
  /* 11ef8346 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8349 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef834c mov dword ptr [edx + 0xa], eax */
  w32((uint32_t)(EDX + 0xa), (EAX));
  /* 11ef834f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef8352 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8353 call 0x11ef10d2 */
  push32(0x11ef8358u); f_11ef10d2();
  /* 11ef8358 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef835b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef835e mov byte ptr [edx + 1], al */
  w8((uint32_t)(EDX + 0x1), (AL));
  /* 11ef8361 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8364 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11ef8367 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11ef8369 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef836c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ef836f mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11ef8372 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8375 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8378 mov esi, esp */
  ESI = (ESP);
  /* 11ef837a push ecx */
  push32((uint32_t)(ECX));
  /* 11ef837b call dword ptr [0x11f33580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33580))), 0x11ef8381u);
  /* 11ef8381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8384 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8386 call 0x11ef9720 */
  push32(0x11ef838bu); f_11ef9720();
  /* 11ef838b pop edi */
  EDI = (pop32());
  /* 11ef838c pop esi */
  ESI = (pop32());
  /* 11ef838d pop ebx */
  EBX = (pop32());
  /* 11ef838e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8391 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8393 call 0x11ef9720 */
  push32(0x11ef8398u); f_11ef9720();
  /* 11ef8398 mov esp, ebp */
  ESP = (EBP);
  /* 11ef839a pop ebp */
  EBP = (pop32());
  /* 11ef839b ret 0x10 */
  ESPCHK(0x11ef8320u, _esp0);
  ESP += 20; return;
}

/* FUN_100083c0 @ 0x11ef83c0 (136 bytes, 54 insns) */
void f_11ef83c0(void) {
  FTRACE(0x11ef83c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef83c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef83c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef83c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef83c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef83c7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef83c8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef83c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef83ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef83cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef83d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef83d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef83d9 pop ecx */
  ECX = (pop32());
  /* 11ef83da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef83dd mov esi, esp */
  ESI = (ESP);
  /* 11ef83df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef83e2 push eax */
  push32((uint32_t)(EAX));
  /* 11ef83e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef83e6 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef83e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef83ea call dword ptr [0x11f334d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334d4))), 0x11ef83f0u);
  /* 11ef83f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef83f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef83f5 call 0x11ef9720 */
  push32(0x11ef83fau); f_11ef9720();
  /* 11ef83fa mov esi, esp */
  ESI = (ESP);
  /* 11ef83fc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef83ff push edx */
  push32((uint32_t)(EDX));
  /* 11ef8400 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8403 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8406 push eax */
  push32((uint32_t)(EAX));
  /* 11ef8407 call dword ptr [0x11f33550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33550))), 0x11ef840du);
  /* 11ef840d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8410 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8412 call 0x11ef9720 */
  push32(0x11ef8417u); f_11ef9720();
  /* 11ef8417 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ef841a push ecx */
  push32((uint32_t)(ECX));
  /* 11ef841b mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 11ef841e push edx */
  push32((uint32_t)(EDX));
  /* 11ef841f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8422 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8425 push eax */
  push32((uint32_t)(EAX));
  /* 11ef8426 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8429 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef842c push ecx */
  push32((uint32_t)(ECX));
  /* 11ef842d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8430 call 0x11ef1078 */
  push32(0x11ef8435u); f_11ef1078();
  /* 11ef8435 pop edi */
  EDI = (pop32());
  /* 11ef8436 pop esi */
  ESI = (pop32());
  /* 11ef8437 pop ebx */
  EBX = (pop32());
  /* 11ef8438 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef843b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef843d call 0x11ef9720 */
  push32(0x11ef8442u); f_11ef9720();
  /* 11ef8442 mov esp, ebp */
  ESP = (EBP);
  /* 11ef8444 pop ebp */
  EBP = (pop32());
  /* 11ef8445 ret 0x10 */
  ESPCHK(0x11ef83c0u, _esp0);
  ESP += 20; return;
}

/* FUN_10008470 @ 0x11ef8470 (150 bytes, 58 insns) */
void f_11ef8470(void) {
  FTRACE(0x11ef8470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8470 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8471 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8473 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8476 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8477 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8478 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8479 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef847a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef847d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef8482 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8487 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8489 pop ecx */
  ECX = (pop32());
  /* 11ef848a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef848d mov esi, esp */
  ESI = (ESP);
  /* 11ef848f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef8492 push eax */
  push32((uint32_t)(EAX));
  /* 11ef8493 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8496 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8499 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef849a call dword ptr [0x11f334d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334d4))), 0x11ef84a0u);
  /* 11ef84a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef84a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef84a5 call 0x11ef9720 */
  push32(0x11ef84aau); f_11ef9720();
  /* 11ef84aa mov esi, esp */
  ESI = (ESP);
  /* 11ef84ac push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11ef84b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef84b4 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef84b7 push edx */
  push32((uint32_t)(EDX));
  /* 11ef84b8 mov eax, dword ptr [0x11f306a4] */
  EAX = (r32((uint32_t)(0x11f306a4)));
  /* 11ef84bd push eax */
  push32((uint32_t)(EAX));
  /* 11ef84be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef84c1 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef84c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef84c5 call dword ptr [0x11f334f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334f0))), 0x11ef84cbu);
  /* 11ef84cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef84ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef84d0 call 0x11ef9720 */
  push32(0x11ef84d5u); f_11ef9720();
  /* 11ef84d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef84d8 push edx */
  push32((uint32_t)(EDX));
  /* 11ef84d9 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 11ef84dc push eax */
  push32((uint32_t)(EAX));
  /* 11ef84dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef84e0 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef84e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef84e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef84e7 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef84ea push edx */
  push32((uint32_t)(EDX));
  /* 11ef84eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef84ee call 0x11ef1078 */
  push32(0x11ef84f3u); f_11ef1078();
  /* 11ef84f3 pop edi */
  EDI = (pop32());
  /* 11ef84f4 pop esi */
  ESI = (pop32());
  /* 11ef84f5 pop ebx */
  EBX = (pop32());
  /* 11ef84f6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef84f9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef84fb call 0x11ef9720 */
  push32(0x11ef8500u); f_11ef9720();
  /* 11ef8500 mov esp, ebp */
  ESP = (EBP);
  /* 11ef8502 pop ebp */
  EBP = (pop32());
  /* 11ef8503 ret 0xc */
  ESPCHK(0x11ef8470u, _esp0);
  ESP += 16; return;
}

/* FUN_10008530 @ 0x11ef8530 (255 bytes, 92 insns) */
void f_11ef8530(void) {
  FTRACE(0x11ef8530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8530 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8531 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8533 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8536 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8537 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8538 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8539 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef853a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef853d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef8542 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8547 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8549 pop ecx */
  ECX = (pop32());
  /* 11ef854a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef854d mov esi, esp */
  ESI = (ESP);
  /* 11ef854f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8552 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11ef8555 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8556 call dword ptr [0x11f33500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33500))), 0x11ef855cu);
  /* 11ef855c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef855f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8561 call 0x11ef9720 */
  push32(0x11ef8566u); f_11ef9720();
  /* 11ef8566 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef856b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef856d je 0x11ef85b5 */
  if (C.zf) goto L_11ef85b5;
  /* 11ef856f mov esi, esp */
  ESI = (ESP);
  /* 11ef8571 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8574 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ef8576 push eax */
  push32((uint32_t)(EAX));
  /* 11ef8577 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef857a mov edx, dword ptr [ecx + 0xa] */
  EDX = (r32((uint32_t)(ECX + 0xa)));
  /* 11ef857d push edx */
  push32((uint32_t)(EDX));
  /* 11ef857e call dword ptr [0x11f33560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33560))), 0x11ef8584u);
  /* 11ef8584 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8587 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8589 call 0x11ef9720 */
  push32(0x11ef858eu); f_11ef9720();
  /* 11ef858e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef8590 jle 0x11ef85b5 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef85b5;
  /* 11ef8592 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8595 call 0x11ef12da */
  push32(0x11ef859au); f_11ef12da();
  /* 11ef859a mov esi, esp */
  ESI = (ESP);
  /* 11ef859c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef859e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef85a1 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11ef85a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef85a5 call dword ptr [0x11f33514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33514))), 0x11ef85abu);
  /* 11ef85ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef85ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef85b0 call 0x11ef9720 */
  push32(0x11ef85b5u); f_11ef9720();
L_11ef85b5:;
  /* 11ef85b5 mov esi, esp */
  ESI = (ESP);
  /* 11ef85b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef85ba mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 11ef85bd push eax */
  push32((uint32_t)(EAX));
  /* 11ef85be call dword ptr [0x11f33500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33500))), 0x11ef85c4u);
  /* 11ef85c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef85c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef85c9 call 0x11ef9720 */
  push32(0x11ef85ceu); f_11ef9720();
  /* 11ef85ce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef85d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef85d5 jne 0x11ef861e */
  if (!C.zf) goto L_11ef861e;
  /* 11ef85d7 mov esi, esp */
  ESI = (ESP);
  /* 11ef85d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef85dc mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ef85de push edx */
  push32((uint32_t)(EDX));
  /* 11ef85df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef85e2 mov ecx, dword ptr [eax + 0xa] */
  ECX = (r32((uint32_t)(EAX + 0xa)));
  /* 11ef85e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef85e6 call dword ptr [0x11f33560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33560))), 0x11ef85ecu);
  /* 11ef85ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef85ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef85f1 call 0x11ef9720 */
  push32(0x11ef85f6u); f_11ef9720();
  /* 11ef85f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef85f9 jge 0x11ef861e */
  if ((C.sf==C.of)) goto L_11ef861e;
  /* 11ef85fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef85fe call 0x11ef10e6 */
  push32(0x11ef8603u); f_11ef10e6();
  /* 11ef8603 mov esi, esp */
  ESI = (ESP);
  /* 11ef8605 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ef8607 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef860a mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 11ef860d push eax */
  push32((uint32_t)(EAX));
  /* 11ef860e call dword ptr [0x11f33514] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33514))), 0x11ef8614u);
  /* 11ef8614 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8617 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8619 call 0x11ef9720 */
  push32(0x11ef861eu); f_11ef9720();
L_11ef861e:;
  /* 11ef861e pop edi */
  EDI = (pop32());
  /* 11ef861f pop esi */
  ESI = (pop32());
  /* 11ef8620 pop ebx */
  EBX = (pop32());
  /* 11ef8621 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8624 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8626 call 0x11ef9720 */
  push32(0x11ef862bu); f_11ef9720();
  /* 11ef862b mov esp, ebp */
  ESP = (EBP);
  /* 11ef862d pop ebp */
  EBP = (pop32());
  /* 11ef862e ret  */
  ESPCHK(0x11ef8530u, _esp0);
  ESP += 4; return;
}

/* FUN_10008670 @ 0x11ef8670 (158 bytes, 60 insns) */
void f_11ef8670(void) {
  FTRACE(0x11ef8670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8670 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8671 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8673 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8676 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8677 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8678 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8679 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef867a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef867d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef8682 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8687 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8689 pop ecx */
  ECX = (pop32());
  /* 11ef868a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef868d mov esi, esp */
  ESI = (ESP);
  /* 11ef868f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef8691 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8694 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8697 push eax */
  push32((uint32_t)(EAX));
  /* 11ef8698 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef869b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ef869d push edx */
  push32((uint32_t)(EDX));
  /* 11ef869e call dword ptr [0x11f33588] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33588))), 0x11ef86a4u);
  /* 11ef86a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef86a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef86a9 call 0x11ef9720 */
  push32(0x11ef86aeu); f_11ef9720();
  /* 11ef86ae mov esi, esp */
  ESI = (ESP);
  /* 11ef86b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef86b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef86b5 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11ef86b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef86b9 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef86bfu);
  /* 11ef86bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef86c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef86c4 call 0x11ef9720 */
  push32(0x11ef86c9u); f_11ef9720();
  /* 11ef86c9 mov esi, esp */
  ESI = (ESP);
  /* 11ef86cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef86ce mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ef86d1 push eax */
  push32((uint32_t)(EAX));
  /* 11ef86d2 call dword ptr [0x11f334c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334c0))), 0x11ef86d8u);
  /* 11ef86d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef86db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef86dd call 0x11ef9720 */
  push32(0x11ef86e2u); f_11ef9720();
  /* 11ef86e2 mov esi, esp */
  ESI = (ESP);
  /* 11ef86e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef86e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef86e9 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef86ec push ecx */
  push32((uint32_t)(ECX));
  /* 11ef86ed call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef86f3u);
  /* 11ef86f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef86f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef86f8 call 0x11ef9720 */
  push32(0x11ef86fdu); f_11ef9720();
  /* 11ef86fd pop edi */
  EDI = (pop32());
  /* 11ef86fe pop esi */
  ESI = (pop32());
  /* 11ef86ff pop ebx */
  EBX = (pop32());
  /* 11ef8700 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8703 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8705 call 0x11ef9720 */
  push32(0x11ef870au); f_11ef9720();
  /* 11ef870a mov esp, ebp */
  ESP = (EBP);
  /* 11ef870c pop ebp */
  EBP = (pop32());
  /* 11ef870d ret  */
  ESPCHK(0x11ef8670u, _esp0);
  ESP += 4; return;
}

/* FUN_10008740 @ 0x11ef8740 (158 bytes, 60 insns) */
void f_11ef8740(void) {
  FTRACE(0x11ef8740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8740 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8741 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8743 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8746 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8747 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8748 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8749 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef874a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef874d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef8752 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8757 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8759 pop ecx */
  ECX = (pop32());
  /* 11ef875a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef875d mov esi, esp */
  ESI = (ESP);
  /* 11ef875f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef8761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8764 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8767 push eax */
  push32((uint32_t)(EAX));
  /* 11ef8768 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef876b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ef876d push edx */
  push32((uint32_t)(EDX));
  /* 11ef876e call dword ptr [0x11f33588] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33588))), 0x11ef8774u);
  /* 11ef8774 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8777 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8779 call 0x11ef9720 */
  push32(0x11ef877eu); f_11ef9720();
  /* 11ef877e mov esi, esp */
  ESI = (ESP);
  /* 11ef8780 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef8782 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8785 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11ef8788 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8789 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef878fu);
  /* 11ef878f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8792 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8794 call 0x11ef9720 */
  push32(0x11ef8799u); f_11ef9720();
  /* 11ef8799 mov esi, esp */
  ESI = (ESP);
  /* 11ef879b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef879e mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ef87a1 push eax */
  push32((uint32_t)(EAX));
  /* 11ef87a2 call dword ptr [0x11f334bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334bc))), 0x11ef87a8u);
  /* 11ef87a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef87ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef87ad call 0x11ef9720 */
  push32(0x11ef87b2u); f_11ef9720();
  /* 11ef87b2 mov esi, esp */
  ESI = (ESP);
  /* 11ef87b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef87b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef87b9 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef87bc push ecx */
  push32((uint32_t)(ECX));
  /* 11ef87bd call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef87c3u);
  /* 11ef87c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef87c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef87c8 call 0x11ef9720 */
  push32(0x11ef87cdu); f_11ef9720();
  /* 11ef87cd pop edi */
  EDI = (pop32());
  /* 11ef87ce pop esi */
  ESI = (pop32());
  /* 11ef87cf pop ebx */
  EBX = (pop32());
  /* 11ef87d0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef87d3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef87d5 call 0x11ef9720 */
  push32(0x11ef87dau); f_11ef9720();
  /* 11ef87da mov esp, ebp */
  ESP = (EBP);
  /* 11ef87dc pop ebp */
  EBP = (pop32());
  /* 11ef87dd ret  */
  ESPCHK(0x11ef8740u, _esp0);
  ESP += 4; return;
}

/* FUN_10008810 @ 0x11ef8810 (49 bytes, 22 insns) */
void f_11ef8810(void) {
  FTRACE(0x11ef8810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8810 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8811 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8813 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8816 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8817 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8818 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8819 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef881a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef881d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef8822 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8827 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8829 pop ecx */
  ECX = (pop32());
  /* 11ef882a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef882d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8830 mov dword ptr [eax + 0x2c], 0xffffffff */
  w32((uint32_t)(EAX + 0x2c), (0xffffffffu));
  /* 11ef8837 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef883a pop edi */
  EDI = (pop32());
  /* 11ef883b pop esi */
  ESI = (pop32());
  /* 11ef883c pop ebx */
  EBX = (pop32());
  /* 11ef883d mov esp, ebp */
  ESP = (EBP);
  /* 11ef883f pop ebp */
  EBP = (pop32());
  /* 11ef8840 ret  */
  ESPCHK(0x11ef8810u, _esp0);
  ESP += 4; return;
}

/* FUN_10008850 @ 0x11ef8850 (77 bytes, 32 insns) */
void f_11ef8850(void) {
  FTRACE(0x11ef8850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8850 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8851 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8853 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8856 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8857 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8858 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8859 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef885a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef885d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef8862 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8867 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8869 pop ecx */
  ECX = (pop32());
  /* 11ef886a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef886d mov esi, esp */
  ESI = (ESP);
  /* 11ef886f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef8872 push eax */
  push32((uint32_t)(EAX));
  /* 11ef8873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8876 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8879 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef887a call dword ptr [0x11f334d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334d4))), 0x11ef8880u);
  /* 11ef8880 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8883 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8885 call 0x11ef9720 */
  push32(0x11ef888au); f_11ef9720();
  /* 11ef888a pop edi */
  EDI = (pop32());
  /* 11ef888b pop esi */
  ESI = (pop32());
  /* 11ef888c pop ebx */
  EBX = (pop32());
  /* 11ef888d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8890 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8892 call 0x11ef9720 */
  push32(0x11ef8897u); f_11ef9720();
  /* 11ef8897 mov esp, ebp */
  ESP = (EBP);
  /* 11ef8899 pop ebp */
  EBP = (pop32());
  /* 11ef889a ret 4 */
  ESPCHK(0x11ef8850u, _esp0);
  ESP += 8; return;
}

/* FUN_100088b0 @ 0x11ef88b0 (102 bytes, 40 insns) */
void f_11ef88b0(void) {
  FTRACE(0x11ef88b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef88b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef88b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef88b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef88b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef88b7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef88b8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef88b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef88ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef88bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef88c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef88c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef88c9 pop ecx */
  ECX = (pop32());
  /* 11ef88ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef88cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef88d0 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef88d3 mov esi, esp */
  ESI = (ESP);
  /* 11ef88d5 push eax */
  push32((uint32_t)(EAX));
  /* 11ef88d6 call dword ptr [0x11f33580] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33580))), 0x11ef88dcu);
  /* 11ef88dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef88df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef88e1 call 0x11ef9720 */
  push32(0x11ef88e6u); f_11ef9720();
  /* 11ef88e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef88e9 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef88ec mov esi, esp */
  ESI = (ESP);
  /* 11ef88ee push ecx */
  push32((uint32_t)(ECX));
  /* 11ef88ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef88f2 push edx */
  push32((uint32_t)(EDX));
  /* 11ef88f3 call dword ptr [0x11f334b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334b8))), 0x11ef88f9u);
  /* 11ef88f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef88fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef88fe call 0x11ef9720 */
  push32(0x11ef8903u); f_11ef9720();
  /* 11ef8903 pop edi */
  EDI = (pop32());
  /* 11ef8904 pop esi */
  ESI = (pop32());
  /* 11ef8905 pop ebx */
  EBX = (pop32());
  /* 11ef8906 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8909 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef890b call 0x11ef9720 */
  push32(0x11ef8910u); f_11ef9720();
  /* 11ef8910 mov esp, ebp */
  ESP = (EBP);
  /* 11ef8912 pop ebp */
  EBP = (pop32());
  /* 11ef8913 ret 4 */
  ESPCHK(0x11ef88b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008930 @ 0x11ef8930 (184 bytes, 69 insns) */
void f_11ef8930(void) {
  FTRACE(0x11ef8930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8930 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8931 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8933 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8936 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8937 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8938 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8939 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef893a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef893d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef8942 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8947 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8949 pop ecx */
  ECX = (pop32());
  /* 11ef894a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef894d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef8951 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8954 cmp dword ptr [eax + 0x2c], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x2c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8958 jne 0x11ef8987 */
  if (!C.zf) goto L_11ef8987;
  /* 11ef895a mov esi, esp */
  ESI = (ESP);
  /* 11ef895c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef895f push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8960 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef8962 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8965 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8968 push edx */
  push32((uint32_t)(EDX));
  /* 11ef8969 call dword ptr [0x11f33590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33590))), 0x11ef896fu);
  /* 11ef896f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8972 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8974 call 0x11ef9720 */
  push32(0x11ef8979u); f_11ef9720();
  /* 11ef8979 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef897c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ef897e mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11ef8981 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8984 mov dword ptr [edx + 0x2c], ecx */
  w32((uint32_t)(EDX + 0x2c), (ECX));
L_11ef8987:;
  /* 11ef8987 mov esi, esp */
  ESI = (ESP);
  /* 11ef8989 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef898c push eax */
  push32((uint32_t)(EAX));
  /* 11ef898d call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef8993u);
  /* 11ef8993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8996 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8998 call 0x11ef9720 */
  push32(0x11ef899du); f_11ef9720();
  /* 11ef899d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef89a0 jne 0x11ef89d2 */
  if (!C.zf) goto L_11ef89d2;
  /* 11ef89a2 mov esi, esp */
  ESI = (ESP);
  /* 11ef89a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef89a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef89a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef89aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef89ad push edx */
  push32((uint32_t)(EDX));
  /* 11ef89ae call dword ptr [0x11f33590] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33590))), 0x11ef89b4u);
  /* 11ef89b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef89b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef89b9 call 0x11ef9720 */
  push32(0x11ef89beu); f_11ef9720();
  /* 11ef89be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef89c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ef89c3 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11ef89c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef89c9 cmp ecx, dword ptr [edx + 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef89cc jne 0x11ef89d2 */
  if (!C.zf) goto L_11ef89d2;
  /* 11ef89ce mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef89d2:;
  /* 11ef89d2 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef89d5 pop edi */
  EDI = (pop32());
  /* 11ef89d6 pop esi */
  ESI = (pop32());
  /* 11ef89d7 pop ebx */
  EBX = (pop32());
  /* 11ef89d8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef89db cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef89dd call 0x11ef9720 */
  push32(0x11ef89e2u); f_11ef9720();
  /* 11ef89e2 mov esp, ebp */
  ESP = (EBP);
  /* 11ef89e4 pop ebp */
  EBP = (pop32());
  /* 11ef89e5 ret 4 */
  ESPCHK(0x11ef8930u, _esp0);
  ESP += 8; return;
}

/* FUN_10008a20 @ 0x11ef8a20 (110 bytes, 43 insns) */
void f_11ef8a20(void) {
  FTRACE(0x11ef8a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8a21 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8a23 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8a26 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8a27 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8a28 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8a29 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8a2a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ef8a2d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ef8a32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8a37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8a39 pop ecx */
  ECX = (pop32());
  /* 11ef8a3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef8a3d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef8a41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef8a44 push eax */
  push32((uint32_t)(EAX));
  /* 11ef8a45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8a48 call 0x11ef100f */
  push32(0x11ef8a4du); f_11ef100f();
  /* 11ef8a4d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ef8a52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef8a54 je 0x11ef8a78 */
  if (C.zf) goto L_11ef8a78;
  /* 11ef8a56 mov esi, esp */
  ESI = (ESP);
  /* 11ef8a58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef8a5b push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8a5c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ef8a5f push edx */
  push32((uint32_t)(EDX));
  /* 11ef8a60 call dword ptr [0x11f33578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33578))), 0x11ef8a66u);
  /* 11ef8a66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8a69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8a6b call 0x11ef9720 */
  push32(0x11ef8a70u); f_11ef9720();
  /* 11ef8a70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef8a72 jle 0x11ef8a78 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef8a78;
  /* 11ef8a74 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef8a78:;
  /* 11ef8a78 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef8a7b pop edi */
  EDI = (pop32());
  /* 11ef8a7c pop esi */
  ESI = (pop32());
  /* 11ef8a7d pop ebx */
  EBX = (pop32());
  /* 11ef8a7e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8a81 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8a83 call 0x11ef9720 */
  push32(0x11ef8a88u); f_11ef9720();
  /* 11ef8a88 mov esp, ebp */
  ESP = (EBP);
  /* 11ef8a8a pop ebp */
  EBP = (pop32());
  /* 11ef8a8b ret 8 */
  ESPCHK(0x11ef8a20u, _esp0);
  ESP += 12; return;
}

/* FUN_10008ab0 @ 0x11ef8ab0 (42 bytes, 21 insns) */
void f_11ef8ab0(void) {
  FTRACE(0x11ef8ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8ab3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8ab6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8ab7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8ab8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8aba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef8abd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef8ac2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8ac7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8ac9 pop ecx */
  ECX = (pop32());
  /* 11ef8aca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef8acd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8ad0 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8ad3 pop edi */
  EDI = (pop32());
  /* 11ef8ad4 pop esi */
  ESI = (pop32());
  /* 11ef8ad5 pop ebx */
  EBX = (pop32());
  /* 11ef8ad6 mov esp, ebp */
  ESP = (EBP);
  /* 11ef8ad8 pop ebp */
  EBP = (pop32());
  /* 11ef8ad9 ret  */
  ESPCHK(0x11ef8ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008af0 @ 0x11ef8af0 (155 bytes, 58 insns) */
void f_11ef8af0(void) {
  FTRACE(0x11ef8af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8af1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8af3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8af6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8af7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8af8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8af9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8afa lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11ef8afd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11ef8b02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8b07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8b09 pop ecx */
  ECX = (pop32());
  /* 11ef8b0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef8b0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8b10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef8b13 mov dword ptr [eax + 0x45], ecx */
  w32((uint32_t)(EAX + 0x45), (ECX));
  /* 11ef8b16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8b19 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 11ef8b1c mov byte ptr [edx + 0x38], al */
  w8((uint32_t)(EDX + 0x38), (AL));
  /* 11ef8b1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8b22 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ef8b25 mov dword ptr [ecx + 0x39], edx */
  w32((uint32_t)(ECX + 0x39), (EDX));
  /* 11ef8b28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8b2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ef8b2e mov dword ptr [eax + 0x3d], ecx */
  w32((uint32_t)(EAX + 0x3d), (ECX));
  /* 11ef8b31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8b34 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ef8b37 mov dword ptr [edx + 0x41], eax */
  w32((uint32_t)(EDX + 0x41), (EAX));
  /* 11ef8b3a mov esi, esp */
  ESI = (ESP);
  /* 11ef8b3c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11ef8b41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8b44 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 11ef8b47 push edx */
  push32((uint32_t)(EDX));
  /* 11ef8b48 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11ef8b4b push eax */
  push32((uint32_t)(EAX));
  /* 11ef8b4c call dword ptr [0x11f3357c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3357c))), 0x11ef8b52u);
  /* 11ef8b52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8b55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8b57 call 0x11ef9720 */
  push32(0x11ef8b5cu); f_11ef9720();
  /* 11ef8b5c mov esi, esp */
  ESI = (ESP);
  /* 11ef8b5e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef8b60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef8b62 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11ef8b65 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef8b68 call dword ptr [0x11f33574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33574))), 0x11ef8b6eu);
  /* 11ef8b6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8b71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8b73 call 0x11ef9720 */
  push32(0x11ef8b78u); f_11ef9720();
  /* 11ef8b78 pop edi */
  EDI = (pop32());
  /* 11ef8b79 pop esi */
  ESI = (pop32());
  /* 11ef8b7a pop ebx */
  EBX = (pop32());
  /* 11ef8b7b add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8b7e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8b80 call 0x11ef9720 */
  push32(0x11ef8b85u); f_11ef9720();
  /* 11ef8b85 mov esp, ebp */
  ESP = (EBP);
  /* 11ef8b87 pop ebp */
  EBP = (pop32());
  /* 11ef8b88 ret 0x14 */
  ESPCHK(0x11ef8af0u, _esp0);
  ESP += 24; return;
}

/* FUN_10008bc0 @ 0x11ef8bc0 (252 bytes, 91 insns) */
void f_11ef8bc0(void) {
  FTRACE(0x11ef8bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8bc3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8bc7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8bc8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8bca lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11ef8bcd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11ef8bd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8bd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8bd9 pop ecx */
  ECX = (pop32());
  /* 11ef8bda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef8bdd mov esi, esp */
  ESI = (ESP);
  /* 11ef8bdf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef8be1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8be4 mov ecx, dword ptr [eax + 0x45] */
  ECX = (r32((uint32_t)(EAX + 0x45)));
  /* 11ef8be7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8be8 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef8beeu);
  /* 11ef8bee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8bf1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8bf3 call 0x11ef9720 */
  push32(0x11ef8bf8u); f_11ef9720();
  /* 11ef8bf8 mov esi, esp */
  ESI = (ESP);
  /* 11ef8bfa push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 11ef8bff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8c02 mov eax, dword ptr [edx + 0x45] */
  EAX = (r32((uint32_t)(EDX + 0x45)));
  /* 11ef8c05 push eax */
  push32((uint32_t)(EAX));
  /* 11ef8c06 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11ef8c09 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8c0a call dword ptr [0x11f3357c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3357c))), 0x11ef8c10u);
  /* 11ef8c10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8c13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8c15 call 0x11ef9720 */
  push32(0x11ef8c1au); f_11ef9720();
  /* 11ef8c1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8c1d cmp dword ptr [edx + 0x39], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x39))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8c21 je 0x11ef8c32 */
  if (C.zf) goto L_11ef8c32;
  /* 11ef8c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8c26 mov cx, word ptr [ebp - 0xc] */
  CX = (r16((uint32_t)(EBP + -0xc)));
  /* 11ef8c2a add cx, word ptr [eax + 0x39] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EAX + 0x39))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11ef8c2e mov word ptr [ebp - 0xc], cx */
  w16((uint32_t)(EBP + -0xc), (CX));
L_11ef8c32:;
  /* 11ef8c32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8c35 cmp dword ptr [edx + 0x3d], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x3d))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8c39 je 0x11ef8c46 */
  if (C.zf) goto L_11ef8c46;
  /* 11ef8c3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8c3e mov cx, word ptr [eax + 0x3d] */
  CX = (r16((uint32_t)(EAX + 0x3d)));
  /* 11ef8c42 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11ef8c46:;
  /* 11ef8c46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8c49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ef8c4b mov al, byte ptr [edx + 0x38] */
  AL = (r8((uint32_t)(EDX + 0x38)));
  /* 11ef8c4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef8c50 jne 0x11ef8c73 */
  if (!C.zf) goto L_11ef8c73;
  /* 11ef8c52 mov esi, esp */
  ESI = (ESP);
  /* 11ef8c54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef8c56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8c59 mov dl, byte ptr [ecx + 0x41] */
  DL = (r8((uint32_t)(ECX + 0x41)));
  /* 11ef8c5c push edx */
  push32((uint32_t)(EDX));
  /* 11ef8c5d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11ef8c60 push eax */
  push32((uint32_t)(EAX));
  /* 11ef8c61 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ef8c63 call dword ptr [0x11f33574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33574))), 0x11ef8c69u);
  /* 11ef8c69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8c6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8c6e call 0x11ef9720 */
  push32(0x11ef8c73u); f_11ef9720();
L_11ef8c73:;
  /* 11ef8c73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8c76 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ef8c78 mov dl, byte ptr [ecx + 0x38] */
  DL = (r8((uint32_t)(ECX + 0x38)));
  /* 11ef8c7b cmp edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8c7e jne 0x11ef8ca1 */
  if (!C.zf) goto L_11ef8ca1;
  /* 11ef8c80 mov esi, esp */
  ESI = (ESP);
  /* 11ef8c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef8c84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8c87 mov cl, byte ptr [eax + 0x41] */
  CL = (r8((uint32_t)(EAX + 0x41)));
  /* 11ef8c8a push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8c8b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ef8c8e push edx */
  push32((uint32_t)(EDX));
  /* 11ef8c8f push 3 */
  push32((uint32_t)(0x3u));
  /* 11ef8c91 call dword ptr [0x11f3356c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3356c))), 0x11ef8c97u);
  /* 11ef8c97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8c9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8c9c call 0x11ef9720 */
  push32(0x11ef8ca1u); f_11ef9720();
L_11ef8ca1:;
  /* 11ef8ca1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8ca4 mov dword ptr [eax + 0x45], 0 */
  w32((uint32_t)(EAX + 0x45), (0x0u));
  /* 11ef8cab pop edi */
  EDI = (pop32());
  /* 11ef8cac pop esi */
  ESI = (pop32());
  /* 11ef8cad pop ebx */
  EBX = (pop32());
  /* 11ef8cae add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8cb1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8cb3 call 0x11ef9720 */
  push32(0x11ef8cb8u); f_11ef9720();
  /* 11ef8cb8 mov esp, ebp */
  ESP = (EBP);
  /* 11ef8cba pop ebp */
  EBP = (pop32());
  /* 11ef8cbb ret  */
  ESPCHK(0x11ef8bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d00 @ 0x11ef8d00 (143 bytes, 53 insns) */
void f_11ef8d00(void) {
  FTRACE(0x11ef8d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8d01 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8d03 sub esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8d06 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8d07 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8d08 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8d09 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8d0a lea edi, [ebp - 0x50] */
  EDI = ((uint32_t)(EBP + -0x50));
  /* 11ef8d0d mov ecx, 0x14 */
  ECX = (0x14u);
  /* 11ef8d12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8d17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8d19 pop ecx */
  ECX = (pop32());
  /* 11ef8d1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef8d1d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef8d21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8d24 cmp dword ptr [eax + 0x45], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x45))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8d28 je 0x11ef8d7b */
  if (C.zf) goto L_11ef8d7b;
  /* 11ef8d2a mov esi, esp */
  ESI = (ESP);
  /* 11ef8d2c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11ef8d31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8d34 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 11ef8d37 push edx */
  push32((uint32_t)(EDX));
  /* 11ef8d38 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11ef8d3b push eax */
  push32((uint32_t)(EAX));
  /* 11ef8d3c call dword ptr [0x11f3357c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3357c))), 0x11ef8d42u);
  /* 11ef8d42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8d45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8d47 call 0x11ef9720 */
  push32(0x11ef8d4cu); f_11ef9720();
  /* 11ef8d4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8d4f call 0x11ef125d */
  push32(0x11ef8d54u); f_11ef125d();
  /* 11ef8d54 mov esi, esp */
  ESI = (ESP);
  /* 11ef8d56 push eax */
  push32((uint32_t)(EAX));
  /* 11ef8d57 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11ef8d5a push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8d5b call dword ptr [0x11f33578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33578))), 0x11ef8d61u);
  /* 11ef8d61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8d64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8d66 call 0x11ef9720 */
  push32(0x11ef8d6bu); f_11ef9720();
  /* 11ef8d6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef8d6d jle 0x11ef8d7b */
  if ((C.zf||C.sf!=C.of)) goto L_11ef8d7b;
  /* 11ef8d6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8d72 call 0x11ef109b */
  push32(0x11ef8d77u); f_11ef109b();
  /* 11ef8d77 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ef8d7b:;
  /* 11ef8d7b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef8d7e pop edi */
  EDI = (pop32());
  /* 11ef8d7f pop esi */
  ESI = (pop32());
  /* 11ef8d80 pop ebx */
  EBX = (pop32());
  /* 11ef8d81 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8d84 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8d86 call 0x11ef9720 */
  push32(0x11ef8d8bu); f_11ef9720();
  /* 11ef8d8b mov esp, ebp */
  ESP = (EBP);
  /* 11ef8d8d pop ebp */
  EBP = (pop32());
  /* 11ef8d8e ret  */
  ESPCHK(0x11ef8d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dc0 @ 0x11ef8dc0 (39 bytes, 20 insns) */
void f_11ef8dc0(void) {
  FTRACE(0x11ef8dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8dc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8dc7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8dc8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8dc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8dca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef8dcd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef8dd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8dd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8dd9 pop ecx */
  ECX = (pop32());
  /* 11ef8dda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef8ddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8de0 pop edi */
  EDI = (pop32());
  /* 11ef8de1 pop esi */
  ESI = (pop32());
  /* 11ef8de2 pop ebx */
  EBX = (pop32());
  /* 11ef8de3 mov esp, ebp */
  ESP = (EBP);
  /* 11ef8de5 pop ebp */
  EBP = (pop32());
  /* 11ef8de6 ret  */
  ESPCHK(0x11ef8dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008df0 @ 0x11ef8df0 (88 bytes, 36 insns) */
void f_11ef8df0(void) {
  FTRACE(0x11ef8df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8df1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8df3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8df6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8df7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8df8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8df9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8dfa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef8dfd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef8e02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8e07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8e09 pop ecx */
  ECX = (pop32());
  /* 11ef8e0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef8e0d mov esi, esp */
  ESI = (ESP);
  /* 11ef8e0f mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11ef8e13 push eax */
  push32((uint32_t)(EAX));
  /* 11ef8e14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8e17 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8e18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8e1b add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8e1e push edx */
  push32((uint32_t)(EDX));
  /* 11ef8e1f call dword ptr [0x11f3357c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3357c))), 0x11ef8e25u);
  /* 11ef8e25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8e28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8e2a call 0x11ef9720 */
  push32(0x11ef8e2fu); f_11ef9720();
  /* 11ef8e2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8e32 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8e35 pop edi */
  EDI = (pop32());
  /* 11ef8e36 pop esi */
  ESI = (pop32());
  /* 11ef8e37 pop ebx */
  EBX = (pop32());
  /* 11ef8e38 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8e3b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8e3d call 0x11ef9720 */
  push32(0x11ef8e42u); f_11ef9720();
  /* 11ef8e42 mov esp, ebp */
  ESP = (EBP);
  /* 11ef8e44 pop ebp */
  EBP = (pop32());
  /* 11ef8e45 ret 4 */
  ESPCHK(0x11ef8df0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008e60 @ 0x11ef8e60 (59 bytes, 25 insns) */
void f_11ef8e60(void) {
  FTRACE(0x11ef8e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8e61 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8e63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8e66 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8e67 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8e68 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8e69 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8e6a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef8e6d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef8e72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8e77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8e79 pop ecx */
  ECX = (pop32());
  /* 11ef8e7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef8e7d push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11ef8e82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8e85 call 0x11ef11c7 */
  push32(0x11ef8e8au); f_11ef11c7();
  /* 11ef8e8a pop edi */
  EDI = (pop32());
  /* 11ef8e8b pop esi */
  ESI = (pop32());
  /* 11ef8e8c pop ebx */
  EBX = (pop32());
  /* 11ef8e8d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8e90 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8e92 call 0x11ef9720 */
  push32(0x11ef8e97u); f_11ef9720();
  /* 11ef8e97 mov esp, ebp */
  ESP = (EBP);
  /* 11ef8e99 pop ebp */
  EBP = (pop32());
  /* 11ef8e9a ret  */
  ESPCHK(0x11ef8e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008eb0 @ 0x11ef8eb0 (97 bytes, 38 insns) */
void f_11ef8eb0(void) {
  FTRACE(0x11ef8eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8eb3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8eb7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8eb8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8eb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8eba lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11ef8ebd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11ef8ec2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8ec7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8ec9 pop ecx */
  ECX = (pop32());
  /* 11ef8eca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef8ecd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8ed0 call 0x11ef10aa */
  push32(0x11ef8ed5u); f_11ef10aa();
  /* 11ef8ed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8ed8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ef8eda mov cx, word ptr [eax + 8] */
  CX = (r16((uint32_t)(EAX + 0x8)));
  /* 11ef8ede mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ef8ee1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8ee4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ef8ee6 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11ef8eea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ef8eed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef8ef0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef8ef3 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ef8ef5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ef8ef8 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ef8efb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef8efe pop edi */
  EDI = (pop32());
  /* 11ef8eff pop esi */
  ESI = (pop32());
  /* 11ef8f00 pop ebx */
  EBX = (pop32());
  /* 11ef8f01 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8f04 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8f06 call 0x11ef9720 */
  push32(0x11ef8f0bu); f_11ef9720();
  /* 11ef8f0b mov esp, ebp */
  ESP = (EBP);
  /* 11ef8f0d pop ebp */
  EBP = (pop32());
  /* 11ef8f0e ret 4 */
  ESPCHK(0x11ef8eb0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008f30 @ 0x11ef8f30 (89 bytes, 36 insns) */
void f_11ef8f30(void) {
  FTRACE(0x11ef8f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8f31 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8f33 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8f36 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8f37 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8f38 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8f39 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8f3a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef8f3d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef8f42 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8f47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8f49 pop ecx */
  ECX = (pop32());
  /* 11ef8f4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef8f4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8f50 call 0x11ef12bc */
  push32(0x11ef8f55u); f_11ef12bc();
  /* 11ef8f55 mov esi, esp */
  ESI = (ESP);
  /* 11ef8f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef8f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef8f5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef8f5e push eax */
  push32((uint32_t)(EAX));
  /* 11ef8f5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8f62 mov dl, byte ptr [ecx + 0x3c] */
  DL = (r8((uint32_t)(ECX + 0x3c)));
  /* 11ef8f65 push edx */
  push32((uint32_t)(EDX));
  /* 11ef8f66 call dword ptr [0x11f3356c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3356c))), 0x11ef8f6cu);
  /* 11ef8f6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8f6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8f71 call 0x11ef9720 */
  push32(0x11ef8f76u); f_11ef9720();
  /* 11ef8f76 pop edi */
  EDI = (pop32());
  /* 11ef8f77 pop esi */
  ESI = (pop32());
  /* 11ef8f78 pop ebx */
  EBX = (pop32());
  /* 11ef8f79 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8f7c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8f7e call 0x11ef9720 */
  push32(0x11ef8f83u); f_11ef9720();
  /* 11ef8f83 mov esp, ebp */
  ESP = (EBP);
  /* 11ef8f85 pop ebp */
  EBP = (pop32());
  /* 11ef8f86 ret 4 */
  ESPCHK(0x11ef8f30u, _esp0);
  ESP += 8; return;
}

/* FUN_10008fa0 @ 0x11ef8fa0 (103 bytes, 41 insns) */
void f_11ef8fa0(void) {
  FTRACE(0x11ef8fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef8fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef8fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef8fa3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef8fa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef8fa7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef8fa8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef8fa9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8faa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef8fad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef8fb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef8fb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef8fb9 pop ecx */
  ECX = (pop32());
  /* 11ef8fba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef8fbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8fc0 call 0x11ef12bc */
  push32(0x11ef8fc5u); f_11ef12bc();
  /* 11ef8fc5 mov esi, esp */
  ESI = (ESP);
  /* 11ef8fc7 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 11ef8fca push eax */
  push32((uint32_t)(EAX));
  /* 11ef8fcb call 0x11efa120 */
  push32(0x11ef8fd0u); f_11efa120();
  /* 11ef8fd0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ef8fd1 mov ecx, 0xff */
  ECX = (0xffu);
  /* 11ef8fd6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ef8fd8 push edx */
  push32((uint32_t)(EDX));
  /* 11ef8fd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef8fdc push edx */
  push32((uint32_t)(EDX));
  /* 11ef8fdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef8fe0 mov cl, byte ptr [eax + 0x3c] */
  CL = (r8((uint32_t)(EAX + 0x3c)));
  /* 11ef8fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef8fe4 call dword ptr [0x11f33574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33574))), 0x11ef8feau);
  /* 11ef8fea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8fed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8fef call 0x11ef9720 */
  push32(0x11ef8ff4u); f_11ef9720();
  /* 11ef8ff4 pop edi */
  EDI = (pop32());
  /* 11ef8ff5 pop esi */
  ESI = (pop32());
  /* 11ef8ff6 pop ebx */
  EBX = (pop32());
  /* 11ef8ff7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef8ffa cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef8ffc call 0x11ef9720 */
  push32(0x11ef9001u); f_11ef9720();
  /* 11ef9001 mov esp, ebp */
  ESP = (EBP);
  /* 11ef9003 pop ebp */
  EBP = (pop32());
  /* 11ef9004 ret 8 */
  ESPCHK(0x11ef8fa0u, _esp0);
  ESP += 12; return;
}

/* FUN_10009020 @ 0x11ef9020 (62 bytes, 27 insns) */
void f_11ef9020(void) {
  FTRACE(0x11ef9020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9020 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9021 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9023 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9026 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9027 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9028 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9029 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef902a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef902d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef9032 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef9037 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef9039 pop ecx */
  ECX = (pop32());
  /* 11ef903a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef903d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef903f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ef9042 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9043 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9046 call 0x11ef1046 */
  push32(0x11ef904bu); f_11ef1046();
  /* 11ef904b pop edi */
  EDI = (pop32());
  /* 11ef904c pop esi */
  ESI = (pop32());
  /* 11ef904d pop ebx */
  EBX = (pop32());
  /* 11ef904e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9051 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9053 call 0x11ef9720 */
  push32(0x11ef9058u); f_11ef9720();
  /* 11ef9058 mov esp, ebp */
  ESP = (EBP);
  /* 11ef905a pop ebp */
  EBP = (pop32());
  /* 11ef905b ret 4 */
  ESPCHK(0x11ef9020u, _esp0);
  ESP += 8; return;
}

/* FUN_10009070 @ 0x11ef9070 (39 bytes, 20 insns) */
void f_11ef9070(void) {
  FTRACE(0x11ef9070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9070 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9071 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9073 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9076 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9077 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9078 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9079 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef907a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef907d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef9082 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef9087 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef9089 pop ecx */
  ECX = (pop32());
  /* 11ef908a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef908d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9090 pop edi */
  EDI = (pop32());
  /* 11ef9091 pop esi */
  ESI = (pop32());
  /* 11ef9092 pop ebx */
  EBX = (pop32());
  /* 11ef9093 mov esp, ebp */
  ESP = (EBP);
  /* 11ef9095 pop ebp */
  EBP = (pop32());
  /* 11ef9096 ret  */
  ESPCHK(0x11ef9070u, _esp0);
  ESP += 4; return;
}

/* FUN_100090a0 @ 0x11ef90a0 (70 bytes, 30 insns) */
void f_11ef90a0(void) {
  FTRACE(0x11ef90a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef90a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef90a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef90a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef90a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef90a7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef90a8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef90a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef90aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef90ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef90b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef90b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef90b9 pop ecx */
  ECX = (pop32());
  /* 11ef90ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef90bd mov esi, esp */
  ESI = (ESP);
  /* 11ef90bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ef90c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef90c4 push eax */
  push32((uint32_t)(EAX));
  /* 11ef90c5 call dword ptr [0x11f33564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f33564))), 0x11ef90cbu);
  /* 11ef90cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef90ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef90d0 call 0x11ef9720 */
  push32(0x11ef90d5u); f_11ef9720();
  /* 11ef90d5 pop edi */
  EDI = (pop32());
  /* 11ef90d6 pop esi */
  ESI = (pop32());
  /* 11ef90d7 pop ebx */
  EBX = (pop32());
  /* 11ef90d8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef90db cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef90dd call 0x11ef9720 */
  push32(0x11ef90e2u); f_11ef9720();
  /* 11ef90e2 mov esp, ebp */
  ESP = (EBP);
  /* 11ef90e4 pop ebp */
  EBP = (pop32());
  /* 11ef90e5 ret  */
  ESPCHK(0x11ef90a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009100 @ 0x11ef9100 (123 bytes, 48 insns) */
void f_11ef9100(void) {
  FTRACE(0x11ef9100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef9100 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef9101 mov ebp, esp */
  EBP = (ESP);
  /* 11ef9103 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef9106 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef9107 push esi */
  push32((uint32_t)(ESI));
  /* 11ef9108 push edi */
  push32((uint32_t)(EDI));
  /* 11ef9109 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef910a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11ef910d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11ef9112 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef9117 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef9119 pop ecx */
  ECX = (pop32());
  /* 11ef911a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef911d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ef9121 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ef9125 jmp 0x11ef912f */
  goto L_11ef912f;
L_11ef9127:;
  /* 11ef9127 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ef912a add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ef912c mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11ef912f:;
  /* 11ef912f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ef9132 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ef9138 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef913b jge 0x11ef9167 */
  if ((C.sf==C.of)) goto L_11ef9167;
  /* 11ef913d mov esi, esp */
  ESI = (ESP);
  /* 11ef913f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ef9142 push edx */
  push32((uint32_t)(EDX));
  /* 11ef9143 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef9146 push eax */
  push32((uint32_t)(EAX));
  /* 11ef9147 call dword ptr [0x11f334fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f334fc))), 0x11ef914du);
  /* 11ef914d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9152 call 0x11ef9720 */
  push32(0x11ef9157u); f_11ef9720();
  /* 11ef9157 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ef9159 jle 0x11ef9165 */
  if ((C.zf||C.sf!=C.of)) goto L_11ef9165;
  /* 11ef915b mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ef915e mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11ef9161 mov byte ptr [ebp - 0xc], 8 */
  w8((uint32_t)(EBP + -0xc), (0x8u));
L_11ef9165:;
  /* 11ef9165 jmp 0x11ef9127 */
  goto L_11ef9127;
L_11ef9167:;
  /* 11ef9167 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ef916a pop edi */
  EDI = (pop32());
  /* 11ef916b pop esi */
  ESI = (pop32());
  /* 11ef916c pop ebx */
  EBX = (pop32());
  /* 11ef916d add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef9170 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef9172 call 0x11ef9720 */
  push32(0x11ef9177u); f_11ef9720();
  /* 11ef9177 mov esp, ebp */
  ESP = (EBP);
  /* 11ef9179 pop ebp */
  EBP = (pop32());
  /* 11ef917a ret  */
  ESPCHK(0x11ef9100u, _esp0);
  ESP += 4; return;
}

/* FUN_100091a0 @ 0x11ef91a0 (68 bytes, 29 insns) */
void f_11ef91a0(void) {
  FTRACE(0x11ef91a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ef91a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ef91a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ef91a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ef91a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ef91a7 push esi */
  push32((uint32_t)(ESI));
  /* 11ef91a8 push edi */
  push32((uint32_t)(EDI));
  /* 11ef91a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ef91aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ef91ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ef91b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ef91b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ef91b9 pop ecx */
  ECX = (pop32());
  /* 11ef91ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ef91bd mov esi, esp */
  ESI = (ESP);
  /* 11ef91bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ef91c2 push eax */
  push32((uint32_t)(EAX));
  /* 11ef91c3 call dword ptr [0x11f3358c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11f3358c))), 0x11ef91c9u);
  /* 11ef91c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef91cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef91ce call 0x11ef9720 */
  push32(0x11ef91d3u); f_11ef9720();
  /* 11ef91d3 pop edi */
  EDI = (pop32());
  /* 11ef91d4 pop esi */
  ESI = (pop32());
  /* 11ef91d5 pop ebx */
  EBX = (pop32());
  /* 11ef91d6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ef91d9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ef91db call 0x11ef9720 */
  push32(0x11ef91e0u); f_11ef9720();
  /* 11ef91e0 mov esp, ebp */
  ESP = (EBP);
  /* 11ef91e2 pop ebp */
  EBP = (pop32());
  /* 11ef91e3 ret  */
  ESPCHK(0x11ef91a0u, _esp0);
  ESP += 4; return;
}

