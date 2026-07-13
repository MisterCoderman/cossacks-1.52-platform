#include "recomp.h"

/* _strcmp @ 0x11686830 (129 bytes, 56 insns) */
void f_11686830(void) {
  FTRACE(0x11686830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11686830 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11686834 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11686838 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1168683e jne 0x1168687c */
  if (!C.zf) goto L_1168687c;
L_11686840:;
  /* 11686840 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11686842 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686844 jne 0x11686874 */
  if (!C.zf) goto L_11686874;
  /* 11686846 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11686848 je 0x11686870 */
  if (C.zf) goto L_11686870;
  /* 1168684a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168684d jne 0x11686874 */
  if (!C.zf) goto L_11686874;
  /* 1168684f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11686851 je 0x11686870 */
  if (C.zf) goto L_11686870;
  /* 11686853 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11686856 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686859 jne 0x11686874 */
  if (!C.zf) goto L_11686874;
  /* 1168685b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1168685d je 0x11686870 */
  if (C.zf) goto L_11686870;
  /* 1168685f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686862 jne 0x11686874 */
  if (!C.zf) goto L_11686874;
  /* 11686864 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11686867 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168686a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1168686c jne 0x11686840 */
  if (!C.zf) goto L_11686840;
  /* 1168686e mov edi, edi */
  EDI = (EDI);
L_11686870:;
  /* 11686870 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11686872 ret  */
  ESPCHK(0x11686830u, _esp0);
  ESP += 4; return;
  /* 11686873 nop  */
  /* nop */
L_11686874:;
  /* 11686874 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11686876 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11686878 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11686879 ret  */
  ESPCHK(0x11686830u, _esp0);
  ESP += 4; return;
  /* 1168687a mov edi, edi */
  EDI = (EDI);
L_1168687c:;
  /* 1168687c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11686882 je 0x11686898 */
  if (C.zf) goto L_11686898;
  /* 11686884 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11686886 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11686887 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686889 jne 0x11686874 */
  if (!C.zf) goto L_11686874;
  /* 1168688b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1168688c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1168688e je 0x11686870 */
  if (C.zf) goto L_11686870;
  /* 11686890 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11686896 je 0x11686840 */
  if (C.zf) goto L_11686840;
L_11686898:;
  /* 11686898 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1168689b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168689e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116868a0 jne 0x11686874 */
  if (!C.zf) goto L_11686874;
  /* 116868a2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 116868a4 je 0x11686870 */
  if (C.zf) goto L_11686870;
  /* 116868a6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116868a9 jne 0x11686874 */
  if (!C.zf) goto L_11686874;
  /* 116868ab or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 116868ad je 0x11686870 */
  if (C.zf) goto L_11686870;
  /* 116868af add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116868b2 jmp 0x11686840 */
  goto L_11686840;
}

/* FUN_100068b4 @ 0x116868b4 (125 bytes, 51 insns) */
void f_116868b4(void) {
  FTRACE(0x116868b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116868b4 cmp dword ptr [0x1168a6a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1168a6a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116868bb push ebx */
  push32((uint32_t)(EBX));
  /* 116868bc push esi */
  push32((uint32_t)(ESI));
  /* 116868bd mov esi, dword ptr [0x1168a00c] */
  ESI = (r32((uint32_t)(0x1168a00c)));
  /* 116868c3 push edi */
  push32((uint32_t)(EDI));
  /* 116868c4 je 0x1168692b */
  if (C.zf) goto L_1168692b;
  /* 116868c6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 116868c8 jne 0x116868e5 */
  if (!C.zf) goto L_116868e5;
  /* 116868ca cmp dword ptr [0x1168a014], esi */
  { uint32_t _a=(r32((uint32_t)(0x1168a014))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116868d0 je 0x1168692b */
  if (C.zf) goto L_1168692b;
  /* 116868d2 call 0x11686f13 */
  push32(0x116868d7u); f_11686f13();
  /* 116868d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116868d9 jne 0x1168692b */
  if (!C.zf) goto L_1168692b;
  /* 116868db mov esi, dword ptr [0x1168a00c] */
  ESI = (r32((uint32_t)(0x1168a00c)));
  /* 116868e1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 116868e3 je 0x1168692b */
  if (C.zf) goto L_1168692b;
L_116868e5:;
  /* 116868e5 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 116868e9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 116868eb je 0x1168692b */
  if (C.zf) goto L_1168692b;
  /* 116868ed push ebx */
  push32((uint32_t)(EBX));
  /* 116868ee call 0x11684c30 */
  push32(0x116868f3u); f_11684c30();
  /* 116868f3 pop ecx */
  ECX = (pop32());
  /* 116868f4 mov edi, eax */
  EDI = (EAX);
L_116868f6:;
  /* 116868f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 116868f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116868fa je 0x1168692b */
  if (C.zf) goto L_1168692b;
  /* 116868fc push eax */
  push32((uint32_t)(EAX));
  /* 116868fd call 0x11684c30 */
  push32(0x11686902u); f_11684c30();
  /* 11686902 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686904 pop ecx */
  ECX = (pop32());
  /* 11686905 jbe 0x1168691e */
  if ((C.cf||C.zf)) goto L_1168691e;
  /* 11686907 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11686909 cmp byte ptr [eax + edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*1))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168690d jne 0x1168691e */
  if (!C.zf) goto L_1168691e;
  /* 1168690f push edi */
  push32((uint32_t)(EDI));
  /* 11686910 push ebx */
  push32((uint32_t)(EBX));
  /* 11686911 push eax */
  push32((uint32_t)(EAX));
  /* 11686912 call 0x11686ed4 */
  push32(0x11686917u); f_11686ed4();
  /* 11686917 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168691a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168691c je 0x11686923 */
  if (C.zf) goto L_11686923;
L_1168691e:;
  /* 1168691e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11686921 jmp 0x116868f6 */
  goto L_116868f6;
L_11686923:;
  /* 11686923 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11686925 lea eax, [eax + edi + 1] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0x1));
  /* 11686929 jmp 0x1168692d */
  goto L_1168692d;
L_1168692b:;
  /* 1168692b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1168692d:;
  /* 1168692d pop edi */
  EDI = (pop32());
  /* 1168692e pop esi */
  ESI = (pop32());
  /* 1168692f pop ebx */
  EBX = (pop32());
  /* 11686930 ret  */
  ESPCHK(0x116868b4u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11686934 (32 bytes, 18 insns) */
void f_11686934(void) {
  FTRACE(0x11686934u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11686934 push ebp */
  push32((uint32_t)(EBP));
  /* 11686935 mov ebp, esp */
  EBP = (ESP);
  /* 11686937 push ebx */
  push32((uint32_t)(EBX));
  /* 11686938 push esi */
  push32((uint32_t)(ESI));
  /* 11686939 push edi */
  push32((uint32_t)(EDI));
  /* 1168693a push ebp */
  push32((uint32_t)(EBP));
  /* 1168693b push 0 */
  push32((uint32_t)(0x0u));
  /* 1168693d push 0 */
  push32((uint32_t)(0x0u));
  /* 1168693f push 0x1168694c */
  push32((uint32_t)(0x1168694cu));
  /* 11686944 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11686947 call 0x116879fc */
  push32(0x1168694cu); f_116879fc();
  /* 1168694c pop ebp */
  EBP = (pop32());
  /* 1168694d pop edi */
  EDI = (pop32());
  /* 1168694e pop esi */
  ESI = (pop32());
  /* 1168694f pop ebx */
  EBX = (pop32());
  /* 11686950 mov esp, ebp */
  ESP = (EBP);
  /* 11686952 pop ebp */
  EBP = (pop32());
  /* 11686953 ret  */
  ESPCHK(0x11686934u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11686976 (104 bytes, 33 insns) */
void f_11686976(void) {
  FTRACE(0x11686976u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11686976 push ebx */
  push32((uint32_t)(EBX));
  /* 11686977 push esi */
  push32((uint32_t)(ESI));
  /* 11686978 push edi */
  push32((uint32_t)(EDI));
  /* 11686979 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1168697d push eax */
  push32((uint32_t)(EAX));
  /* 1168697e push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11686980 push 0x11686954 */
  push32((uint32_t)(0x11686954u));
  /* 11686985 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1168698c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11686993:;
  /* 11686993 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11686997 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1168699a mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1168699d cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116869a0 je 0x116869d0 */
  if (C.zf) goto L_116869d0;
  /* 116869a2 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116869a6 je 0x116869d0 */
  if (C.zf) goto L_116869d0;
  /* 116869a8 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 116869ab mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 116869ae mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 116869b2 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 116869b5 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116869ba jne 0x116869ce */
  if (!C.zf) goto L_116869ce;
  /* 116869bc push 0x101 */
  push32((uint32_t)(0x101u));
  /* 116869c1 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 116869c5 call 0x11686a0a */
  push32(0x116869cau); f_11686a0a();
  /* 116869ca call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x116869ceu);
L_116869ce:;
  /* 116869ce jmp 0x11686993 */
  goto L_11686993;
L_116869d0:;
  /* 116869d0 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 116869d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116869da pop edi */
  EDI = (pop32());
  /* 116869db pop esi */
  ESI = (pop32());
  /* 116869dc pop ebx */
  EBX = (pop32());
  /* 116869dd ret  */
  ESPCHK(0x11686976u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a0a @ 0x11686a0a (24 bytes, 10 insns) */
void f_11686a0a(void) {
  FTRACE(0x11686a0au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11686a0a push ebx */
  push32((uint32_t)(EBX));
  /* 11686a0b push ecx */
  push32((uint32_t)(ECX));
  /* 11686a0c mov ebx, 0x11689aa8 */
  EBX = (0x11689aa8u);
  /* 11686a11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11686a14 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11686a17 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11686a1a mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11686a1d pop ecx */
  ECX = (pop32());
  /* 11686a1e pop ebx */
  EBX = (pop32());
  /* 11686a1f ret 4 */
  ESPCHK(0x11686a0au, _esp0);
  ESP += 8; return;
}

/* FUN_10006ae9 @ 0x11686ae9 (27 bytes, 11 insns) */
void f_11686ae9(void) {
  FTRACE(0x11686ae9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11686ae9 push ebp */
  push32((uint32_t)(EBP));
  /* 11686aea mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11686aee mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11686af0 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11686af3 push eax */
  push32((uint32_t)(EAX));
  /* 11686af4 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11686af7 push eax */
  push32((uint32_t)(EAX));
  /* 11686af8 call 0x11686976 */
  push32(0x11686afdu); f_11686976();
  /* 11686afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11686b00 pop ebp */
  EBP = (pop32());
  /* 11686b01 ret 4 */
  ESPCHK(0x11686ae9u, _esp0);
  ESP += 8; return;
}

/* FUN_10006b10 @ 0x11686b10 (47 bytes, 17 insns) */
void f_11686b10(void) {
  FTRACE(0x11686b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11686b10 push ecx */
  push32((uint32_t)(ECX));
  /* 11686b11 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686b16 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11686b1a jb 0x11686b30 */
  if (C.cf) goto L_11686b30;
L_11686b1c:;
  /* 11686b1c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11686b22 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11686b27 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11686b29 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686b2e jae 0x11686b1c */
  if (!C.cf) goto L_11686b1c;
L_11686b30:;
  /* 11686b30 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11686b32 mov eax, esp */
  EAX = (ESP);
  /* 11686b34 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11686b36 mov esp, ecx */
  ESP = (ECX);
  /* 11686b38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11686b3a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11686b3d push eax */
  push32((uint32_t)(EAX));
  /* 11686b3e ret  */
  ESPCHK(0x11686b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b40 @ 0x11686b40 (62 bytes, 35 insns) */
void f_11686b40(void) {
  FTRACE(0x11686b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11686b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11686b41 mov ebp, esp */
  EBP = (ESP);
  /* 11686b43 push esi */
  push32((uint32_t)(ESI));
  /* 11686b44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11686b46 push eax */
  push32((uint32_t)(EAX));
  /* 11686b47 push eax */
  push32((uint32_t)(EAX));
  /* 11686b48 push eax */
  push32((uint32_t)(EAX));
  /* 11686b49 push eax */
  push32((uint32_t)(EAX));
  /* 11686b4a push eax */
  push32((uint32_t)(EAX));
  /* 11686b4b push eax */
  push32((uint32_t)(EAX));
  /* 11686b4c push eax */
  push32((uint32_t)(EAX));
  /* 11686b4d push eax */
  push32((uint32_t)(EAX));
  /* 11686b4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11686b51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11686b54:;
  /* 11686b54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11686b56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11686b58 je 0x11686b61 */
  if (C.zf) goto L_11686b61;
  /* 11686b5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11686b5b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11686b5b");
  /* 11686b5f jmp 0x11686b54 */
  goto L_11686b54;
L_11686b61:;
  /* 11686b61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11686b64 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11686b67 nop  */
  /* nop */
L_11686b68:;
  /* 11686b68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11686b69 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11686b6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11686b6d je 0x11686b76 */
  if (C.zf) goto L_11686b76;
  /* 11686b6f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11686b70 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11686b70");
  /* 11686b74 jae 0x11686b68 */
  if (!C.cf) goto L_11686b68;
L_11686b76:;
  /* 11686b76 mov eax, ecx */
  EAX = (ECX);
  /* 11686b78 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11686b7b pop esi */
  ESI = (pop32());
  /* 11686b7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11686b7d ret  */
  ESPCHK(0x11686b40u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11686b80 (56 bytes, 31 insns) */
void f_11686b80(void) {
  FTRACE(0x11686b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11686b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11686b81 mov ebp, esp */
  EBP = (ESP);
  /* 11686b83 push edi */
  push32((uint32_t)(EDI));
  /* 11686b84 push esi */
  push32((uint32_t)(ESI));
  /* 11686b85 push ebx */
  push32((uint32_t)(EBX));
  /* 11686b86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11686b89 jecxz 0x11686bb1 */
  x86_unimpl("jecxz @ 0x11686b89");
  /* 11686b8b mov ebx, ecx */
  EBX = (ECX);
  /* 11686b8d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11686b90 mov esi, edi */
  ESI = (EDI);
  /* 11686b92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11686b94 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11686b96 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11686b98 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11686b9a mov edi, esi */
  EDI = (ESI);
  /* 11686b9c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11686b9f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11686ba1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11686ba4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11686ba6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686ba9 ja 0x11686baf */
  if ((!C.cf&&!C.zf)) goto L_11686baf;
  /* 11686bab je 0x11686bb1 */
  if (C.zf) goto L_11686bb1;
  /* 11686bad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11686bae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11686baf:;
  /* 11686baf not ecx */
  ECX = (~(ECX));
L_11686bb1:;
  /* 11686bb1 mov eax, ecx */
  EAX = (ECX);
  /* 11686bb3 pop ebx */
  EBX = (pop32());
  /* 11686bb4 pop esi */
  ESI = (pop32());
  /* 11686bb5 pop edi */
  EDI = (pop32());
  /* 11686bb6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11686bb7 ret  */
  ESPCHK(0x11686b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bc0 @ 0x11686bc0 (58 bytes, 32 insns) */
void f_11686bc0(void) {
  FTRACE(0x11686bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11686bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11686bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11686bc3 push esi */
  push32((uint32_t)(ESI));
  /* 11686bc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11686bc6 push eax */
  push32((uint32_t)(EAX));
  /* 11686bc7 push eax */
  push32((uint32_t)(EAX));
  /* 11686bc8 push eax */
  push32((uint32_t)(EAX));
  /* 11686bc9 push eax */
  push32((uint32_t)(EAX));
  /* 11686bca push eax */
  push32((uint32_t)(EAX));
  /* 11686bcb push eax */
  push32((uint32_t)(EAX));
  /* 11686bcc push eax */
  push32((uint32_t)(EAX));
  /* 11686bcd push eax */
  push32((uint32_t)(EAX));
  /* 11686bce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11686bd1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11686bd4:;
  /* 11686bd4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11686bd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11686bd8 je 0x11686be1 */
  if (C.zf) goto L_11686be1;
  /* 11686bda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11686bdb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11686bdb");
  /* 11686bdf jmp 0x11686bd4 */
  goto L_11686bd4;
L_11686be1:;
  /* 11686be1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11686be4:;
  /* 11686be4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11686be6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11686be8 je 0x11686bf4 */
  if (C.zf) goto L_11686bf4;
  /* 11686bea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11686beb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11686beb");
  /* 11686bef jae 0x11686be4 */
  if (!C.cf) goto L_11686be4;
  /* 11686bf1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11686bf4:;
  /* 11686bf4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11686bf7 pop esi */
  ESI = (pop32());
  /* 11686bf8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11686bf9 ret  */
  ESPCHK(0x11686bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bfa @ 0x11686bfa (544 bytes, 177 insns) */
void f_11686bfa(void) {
  FTRACE(0x11686bfau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11686bfa push ebp */
  push32((uint32_t)(EBP));
  /* 11686bfb mov ebp, esp */
  EBP = (ESP);
  /* 11686bfd sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11686c00 push ebx */
  push32((uint32_t)(EBX));
  /* 11686c01 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11686c04 push esi */
  push32((uint32_t)(ESI));
  /* 11686c05 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11686c08 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 11686c0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11686c0e push edi */
  push32((uint32_t)(EDI));
  /* 11686c0f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11686c12 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11686c15 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11686c18 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11686c1b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 11686c1f mov edi, ecx */
  EDI = (ECX);
  /* 11686c21 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 11686c26 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 11686c28 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11686c2a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11686c2c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 11686c32 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11686c36 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 11686c39 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11686c3c jae 0x11686dfa */
  if (!C.cf) goto L_11686dfa;
  /* 11686c42 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11686c47 jae 0x11686dfa */
  if (!C.cf) goto L_11686dfa;
  /* 11686c4d cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11686c52 ja 0x11686dfa */
  if ((!C.cf&&!C.zf)) goto L_11686dfa;
  /* 11686c58 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11686c5d ja 0x11686c63 */
  if ((!C.cf&&!C.zf)) goto L_11686c63;
  /* 11686c5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11686c61 jmp 0x11686c9d */
  goto L_11686c9d;
L_11686c63:;
  /* 11686c63 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 11686c66 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 11686c6b jne 0x11686c85 */
  if (!C.zf) goto L_11686c85;
  /* 11686c6d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11686c70 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 11686c73 jne 0x11686c85 */
  if (!C.zf) goto L_11686c85;
  /* 11686c75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11686c77 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686c7a jne 0x11686c87 */
  if (!C.zf) goto L_11686c87;
  /* 11686c7c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686c7e jne 0x11686c87 */
  if (!C.zf) goto L_11686c87;
  /* 11686c80 jmp 0x11686df4 */
  goto L_11686df4;
L_11686c85:;
  /* 11686c85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11686c87:;
  /* 11686c87 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11686c8a jne 0x11686caa */
  if (!C.zf) goto L_11686caa;
  /* 11686c8c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11686c8f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 11686c92 jne 0x11686caa */
  if (!C.zf) goto L_11686caa;
  /* 11686c94 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686c97 jne 0x11686caa */
  if (!C.zf) goto L_11686caa;
  /* 11686c99 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686c9b jne 0x11686caa */
  if (!C.zf) goto L_11686caa;
L_11686c9d:;
  /* 11686c9d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11686ca0 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11686ca3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11686ca5 jmp 0x11686e15 */
  goto L_11686e15;
L_11686caa:;
  /* 11686caa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11686cad lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11686cb0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11686cb3 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_11686cba:;
  /* 11686cba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11686cbd add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11686cbf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686cc3 jle 0x11686d0e */
  if ((C.zf||C.sf!=C.of)) goto L_11686d0e;
  /* 11686cc5 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11686cc7 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 11686cca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11686ccd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11686cd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11686cd3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11686cd6:;
  /* 11686cd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11686cd9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11686cdc movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 11686cdf movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 11686ce2 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11686ce5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11686ce8 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11686ceb push ecx */
  push32((uint32_t)(ECX));
  /* 11686cec push eax */
  push32((uint32_t)(EAX));
  /* 11686ced push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 11686cef call 0x11685e9b */
  push32(0x11686cf4u); f_11685e9b();
  /* 11686cf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11686cf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11686cf9 je 0x11686d01 */
  if (C.zf) goto L_11686d01;
  /* 11686cfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11686cfe inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_11686d01:;
  /* 11686d01 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11686d05 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11686d09 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 11686d0c jne 0x11686cd6 */
  if (!C.zf) goto L_11686cd6;
L_11686d0e:;
  /* 11686d0e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11686d12 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11686d15 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 11686d18 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686d1c jg 0x11686cba */
  if ((!C.zf&&C.sf==C.of)) goto L_11686cba;
  /* 11686d1e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11686d25 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11686d2a jle 0x11686d51 */
  if ((C.zf||C.sf!=C.of)) goto L_11686d51;
L_11686d2c:;
  /* 11686d2c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 11686d30 jne 0x11686d4a */
  if (!C.zf) goto L_11686d4a;
  /* 11686d32 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11686d35 push eax */
  push32((uint32_t)(EAX));
  /* 11686d36 call 0x11685f1a */
  push32(0x11686d3bu); f_11685f1a();
  /* 11686d3b add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11686d42 pop ecx */
  ECX = (pop32());
  /* 11686d43 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11686d48 jg 0x11686d2c */
  if ((!C.zf&&C.sf==C.of)) goto L_11686d2c;
L_11686d4a:;
  /* 11686d4a cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11686d4f jg 0x11686d8a */
  if ((!C.zf&&C.sf==C.of)) goto L_11686d8a;
L_11686d51:;
  /* 11686d51 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11686d58 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11686d5d jge 0x11686d8a */
  if ((C.sf==C.of)) goto L_11686d8a;
  /* 11686d5f movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 11686d63 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11686d65 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11686d68 mov ebx, eax */
  EBX = (EAX);
L_11686d6a:;
  /* 11686d6a test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 11686d6e je 0x11686d73 */
  if (C.zf) goto L_11686d73;
  /* 11686d70 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_11686d73:;
  /* 11686d73 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11686d76 push eax */
  push32((uint32_t)(EAX));
  /* 11686d77 call 0x11685f48 */
  push32(0x11686d7cu); f_11685f48();
  /* 11686d7c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11686d7d pop ecx */
  ECX = (pop32());
  /* 11686d7e jne 0x11686d6a */
  if (!C.zf) goto L_11686d6a;
  /* 11686d80 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686d84 je 0x11686d8a */
  if (C.zf) goto L_11686d8a;
  /* 11686d86 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_11686d8a:;
  /* 11686d8a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11686d90 ja 0x11686da1 */
  if ((!C.cf&&!C.zf)) goto L_11686da1;
  /* 11686d92 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11686d95 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11686d9a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686d9f jne 0x11686dd6 */
  if (!C.zf) goto L_11686dd6;
L_11686da1:;
  /* 11686da1 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686da5 jne 0x11686dd3 */
  if (!C.zf) goto L_11686dd3;
  /* 11686da7 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 11686dab cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686daf jne 0x11686dce */
  if (!C.zf) goto L_11686dce;
  /* 11686db1 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 11686db5 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11686dbb jne 0x11686dc8 */
  if (!C.zf) goto L_11686dc8;
  /* 11686dbd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11686dc0 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 11686dc6 jmp 0x11686dd6 */
  goto L_11686dd6;
L_11686dc8:;
  /* 11686dc8 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 11686dcc jmp 0x11686dd6 */
  goto L_11686dd6;
L_11686dce:;
  /* 11686dce inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 11686dd1 jmp 0x11686dd6 */
  goto L_11686dd6;
L_11686dd3:;
  /* 11686dd3 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_11686dd6:;
  /* 11686dd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11686dd9 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11686ddd jae 0x11686dfa */
  if (!C.cf) goto L_11686dfa;
  /* 11686ddf mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 11686de3 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11686de5 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 11686de8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11686deb mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 11686dee mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11686df1 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_11686df4:;
  /* 11686df4 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 11686df8 jmp 0x11686e15 */
  goto L_11686e15;
L_11686dfa:;
  /* 11686dfa neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 11686dfd sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11686dff and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11686e03 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 11686e09 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11686e0f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11686e12 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_11686e15:;
  /* 11686e15 pop edi */
  EDI = (pop32());
  /* 11686e16 pop esi */
  ESI = (pop32());
  /* 11686e17 pop ebx */
  EBX = (pop32());
  /* 11686e18 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11686e19 ret  */
  ESPCHK(0x11686bfau, _esp0);
  ESP += 4; return;
}

/* FUN_10006e1a @ 0x11686e1a (124 bytes, 52 insns) */
void f_11686e1a(void) {
  FTRACE(0x11686e1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11686e1a push ebp */
  push32((uint32_t)(EBP));
  /* 11686e1b mov ebp, esp */
  EBP = (ESP);
  /* 11686e1d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11686e20 push ebx */
  push32((uint32_t)(EBX));
  /* 11686e21 mov ebx, 0x11689bc0 */
  EBX = (0x11689bc0u);
  /* 11686e26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11686e28 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11686e2b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686e2e je 0x11686e93 */
  if (C.zf) goto L_11686e93;
  /* 11686e30 jge 0x11686e42 */
  if ((C.sf==C.of)) goto L_11686e42;
  /* 11686e32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11686e35 mov ebx, 0x11689d20 */
  EBX = (0x11689d20u);
  /* 11686e3a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11686e3c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11686e3f sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_11686e42:;
  /* 11686e42 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686e45 jne 0x11686e4d */
  if (!C.zf) goto L_11686e4d;
  /* 11686e47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11686e4a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_11686e4d:;
  /* 11686e4d cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686e50 je 0x11686e93 */
  if (C.zf) goto L_11686e93;
  /* 11686e52 push esi */
  push32((uint32_t)(ESI));
  /* 11686e53 push edi */
  push32((uint32_t)(EDI));
L_11686e54:;
  /* 11686e54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11686e57 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11686e5a sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 11686e5e and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11686e61 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686e63 je 0x11686e8c */
  if (C.zf) goto L_11686e8c;
  /* 11686e65 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11686e68 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11686e6e lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 11686e71 jb 0x11686e7f */
  if (C.cf) goto L_11686e7f;
  /* 11686e73 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 11686e76 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11686e77 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11686e78 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11686e79 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 11686e7c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_11686e7f:;
  /* 11686e7f push esi */
  push32((uint32_t)(ESI));
  /* 11686e80 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11686e83 call 0x11686bfa */
  push32(0x11686e88u); f_11686bfa();
  /* 11686e88 pop ecx */
  ECX = (pop32());
  /* 11686e89 pop ecx */
  ECX = (pop32());
  /* 11686e8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_11686e8c:;
  /* 11686e8c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686e8f jne 0x11686e54 */
  if (!C.zf) goto L_11686e54;
  /* 11686e91 pop edi */
  EDI = (pop32());
  /* 11686e92 pop esi */
  ESI = (pop32());
L_11686e93:;
  /* 11686e93 pop ebx */
  EBX = (pop32());
  /* 11686e94 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11686e95 ret  */
  ESPCHK(0x11686e1au, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11686ed4 (63 bytes, 24 insns) */
void f_11686ed4(void) {
  FTRACE(0x11686ed4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11686ed4 push ebp */
  push32((uint32_t)(EBP));
  /* 11686ed5 mov ebp, esp */
  EBP = (ESP);
  /* 11686ed7 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686edb jne 0x11686ee1 */
  if (!C.zf) goto L_11686ee1;
  /* 11686edd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11686edf pop ebp */
  EBP = (pop32());
  /* 11686ee0 ret  */
  ESPCHK(0x11686ed4u, _esp0);
  ESP += 4; return;
L_11686ee1:;
  /* 11686ee1 push dword ptr [0x1168a344] */
  push32((uint32_t)(r32((uint32_t)(0x1168a344))));
  /* 11686ee7 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11686eea push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11686eed push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11686ef0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11686ef3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11686ef5 push dword ptr [0x1168a564] */
  push32((uint32_t)(r32((uint32_t)(0x1168a564))));
  /* 11686efb call 0x11687161 */
  push32(0x11686f00u); f_11687161();
  /* 11686f00 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11686f03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11686f05 jne 0x11686f0e */
  if (!C.zf) goto L_11686f0e;
  /* 11686f07 mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11686f0c pop ebp */
  EBP = (pop32());
  /* 11686f0d ret  */
  ESPCHK(0x11686ed4u, _esp0);
  ESP += 4; return;
L_11686f0e:;
  /* 11686f0e add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11686f11 pop ebp */
  EBP = (pop32());
  /* 11686f12 ret  */
  ESPCHK(0x11686ed4u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f13 @ 0x11686f13 (110 bytes, 58 insns) */
void f_11686f13(void) {
  FTRACE(0x11686f13u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11686f13 push ecx */
  push32((uint32_t)(ECX));
  /* 11686f14 push ebx */
  push32((uint32_t)(EBX));
  /* 11686f15 push ebp */
  push32((uint32_t)(EBP));
  /* 11686f16 push esi */
  push32((uint32_t)(ESI));
  /* 11686f17 mov esi, dword ptr [0x1168a014] */
  ESI = (r32((uint32_t)(0x1168a014)));
  /* 11686f1d push edi */
  push32((uint32_t)(EDI));
  /* 11686f1e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11686f20 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11686f22 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686f24 je 0x11686f74 */
  if (C.zf) goto L_11686f74;
  /* 11686f26 mov ebx, dword ptr [0x116880c8] */
  EBX = (r32((uint32_t)(0x116880c8)));
L_11686f2c:;
  /* 11686f2c push edi */
  push32((uint32_t)(EDI));
  /* 11686f2d push edi */
  push32((uint32_t)(EDI));
  /* 11686f2e push edi */
  push32((uint32_t)(EDI));
  /* 11686f2f push edi */
  push32((uint32_t)(EDI));
  /* 11686f30 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11686f32 push eax */
  push32((uint32_t)(EAX));
  /* 11686f33 push edi */
  push32((uint32_t)(EDI));
  /* 11686f34 push 1 */
  push32((uint32_t)(0x1u));
  /* 11686f36 call ebx */
  call_ind((uint32_t)(EBX), 0x11686f38u);
  /* 11686f38 mov ebp, eax */
  EBP = (EAX);
  /* 11686f3a cmp ebp, edi */
  { uint32_t _a=(EBP),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686f3c je 0x11686f7c */
  if (C.zf) goto L_11686f7c;
  /* 11686f3e push ebp */
  push32((uint32_t)(EBP));
  /* 11686f3f call 0x116820fc */
  push32(0x11686f44u); f_116820fc();
  /* 11686f44 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686f46 pop ecx */
  ECX = (pop32());
  /* 11686f47 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11686f4b je 0x11686f7c */
  if (C.zf) goto L_11686f7c;
  /* 11686f4d push edi */
  push32((uint32_t)(EDI));
  /* 11686f4e push edi */
  push32((uint32_t)(EDI));
  /* 11686f4f push ebp */
  push32((uint32_t)(EBP));
  /* 11686f50 push eax */
  push32((uint32_t)(EAX));
  /* 11686f51 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11686f53 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11686f55 push edi */
  push32((uint32_t)(EDI));
  /* 11686f56 push 1 */
  push32((uint32_t)(0x1u));
  /* 11686f58 call ebx */
  call_ind((uint32_t)(EBX), 0x11686f5au);
  /* 11686f5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11686f5c je 0x11686f7c */
  if (C.zf) goto L_11686f7c;
  /* 11686f5e push edi */
  push32((uint32_t)(EDI));
  /* 11686f5f push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11686f63 call 0x11687409 */
  push32(0x11686f68u); f_11687409();
  /* 11686f68 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11686f6b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11686f6e pop ecx */
  ECX = (pop32());
  /* 11686f6f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686f71 pop ecx */
  ECX = (pop32());
  /* 11686f72 jne 0x11686f2c */
  if (!C.zf) goto L_11686f2c;
L_11686f74:;
  /* 11686f74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11686f76:;
  /* 11686f76 pop edi */
  EDI = (pop32());
  /* 11686f77 pop esi */
  ESI = (pop32());
  /* 11686f78 pop ebp */
  EBP = (pop32());
  /* 11686f79 pop ebx */
  EBX = (pop32());
  /* 11686f7a pop ecx */
  ECX = (pop32());
  /* 11686f7b ret  */
  ESPCHK(0x11686f13u, _esp0);
  ESP += 4; return;
L_11686f7c:;
  /* 11686f7c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11686f7f jmp 0x11686f76 */
  goto L_11686f76;
}

/* FUN_10006f90 @ 0x11686f90 (208 bytes, 85 insns) */
void f_11686f90(void) {
  FTRACE(0x11686f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11686f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11686f91 mov ebp, esp */
  EBP = (ESP);
  /* 11686f93 push edi */
  push32((uint32_t)(EDI));
  /* 11686f94 push esi */
  push32((uint32_t)(ESI));
  /* 11686f95 push ebx */
  push32((uint32_t)(EBX));
  /* 11686f96 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11686f99 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11686f9c lea eax, [0x1168a298] */
  EAX = ((uint32_t)(0x1168a298));
  /* 11686fa2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686fa6 jne 0x11686fe3 */
  if (!C.zf) goto L_11686fe3;
  /* 11686fa8 mov al, 0xff */
  AL = (0xffu);
  /* 11686faa mov edi, edi */
  EDI = (EDI);
L_11686fac:;
  /* 11686fac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11686fae je 0x11686fde */
  if (C.zf) goto L_11686fde;
  /* 11686fb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11686fb2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11686fb3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11686fb5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11686fb6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686fb8 je 0x11686fac */
  if (C.zf) goto L_11686fac;
  /* 11686fba sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11686fbc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686fbe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11686fc0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11686fc3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11686fc5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11686fc7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11686fc9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11686fcb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686fcd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11686fcf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11686fd2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11686fd4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11686fd6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686fd8 je 0x11686fac */
  if (C.zf) goto L_11686fac;
  /* 11686fda sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11686fdc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11686fde:;
  /* 11686fde movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11686fe1 jmp 0x1168705b */
  goto L_1168705b;
L_11686fe3:;
  /* 11686fe3 lock inc dword ptr [0x1168a340] */
  x86_unimpl("lock inc @ 0x11686fe3");
  /* 11686fea cmp dword ptr [0x1168a33c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1168a33c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686ff1 jg 0x11686ff7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11686ff7;
  /* 11686ff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11686ff5 jmp 0x1168700c */
  goto L_1168700c;
L_11686ff7:;
  /* 11686ff7 lock dec dword ptr [0x1168a340] */
  x86_unimpl("lock dec @ 0x11686ff7");
  /* 11686ffe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11687000 call 0x116832ad */
  push32(0x11687005u); f_116832ad();
  /* 11687005 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1168700c:;
  /* 1168700c mov eax, 0xff */
  EAX = (0xffu);
  /* 11687011 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11687013 nop  */
  /* nop */
L_11687014:;
  /* 11687014 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11687016 je 0x1168703f */
  if (C.zf) goto L_1168703f;
  /* 11687018 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1168701a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1168701b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1168701d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1168701e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11687020 je 0x11687014 */
  if (C.zf) goto L_11687014;
  /* 11687022 push eax */
  push32((uint32_t)(EAX));
  /* 11687023 push ebx */
  push32((uint32_t)(EBX));
  /* 11687024 call 0x11684154 */
  push32(0x11687029u); f_11684154();
  /* 11687029 mov ebx, eax */
  EBX = (EAX);
  /* 1168702b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168702e call 0x11684154 */
  push32(0x11687033u); f_11684154();
  /* 11687033 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11687036 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11687038 je 0x11687014 */
  if (C.zf) goto L_11687014;
  /* 1168703a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168703c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1168703f:;
  /* 1168703f mov ebx, eax */
  EBX = (EAX);
  /* 11687041 pop eax */
  EAX = (pop32());
  /* 11687042 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11687044 jne 0x1168704f */
  if (!C.zf) goto L_1168704f;
  /* 11687046 lock dec dword ptr [0x1168a340] */
  x86_unimpl("lock dec @ 0x11687046");
  /* 1168704d jmp 0x11687059 */
  goto L_11687059;
L_1168704f:;
  /* 1168704f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11687051 call 0x1168330e */
  push32(0x11687056u); f_1168330e();
  /* 11687056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11687059:;
  /* 11687059 mov eax, ebx */
  EAX = (EBX);
L_1168705b:;
  /* 1168705b pop ebx */
  EBX = (pop32());
  /* 1168705c pop esi */
  ESI = (pop32());
  /* 1168705d pop edi */
  EDI = (pop32());
  /* 1168705e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1168705f ret  */
  ESPCHK(0x11686f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007060 @ 0x11687060 (257 bytes, 103 insns) */
void f_11687060(void) {
  FTRACE(0x11687060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11687060 push ebp */
  push32((uint32_t)(EBP));
  /* 11687061 mov ebp, esp */
  EBP = (ESP);
  /* 11687063 push edi */
  push32((uint32_t)(EDI));
  /* 11687064 push esi */
  push32((uint32_t)(ESI));
  /* 11687065 push ebx */
  push32((uint32_t)(EBX));
  /* 11687066 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11687069 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1168706b je 0x1168715a */
  if (C.zf) goto L_1168715a;
  /* 11687071 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11687074 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11687077 lea eax, [0x1168a298] */
  EAX = ((uint32_t)(0x1168a298));
  /* 1168707d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687081 jne 0x116870d1 */
  if (!C.zf) goto L_116870d1;
  /* 11687083 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11687085 mov bl, 0x5a */
  BL = (0x5au);
  /* 11687087 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11687089 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1168708c:;
  /* 1168708c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1168708e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11687090 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11687092 je 0x116870b5 */
  if (C.zf) goto L_116870b5;
  /* 11687094 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11687096 je 0x116870b5 */
  if (C.zf) goto L_116870b5;
  /* 11687098 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11687099 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1168709a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168709c jb 0x116870a4 */
  if (C.cf) goto L_116870a4;
  /* 1168709e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116870a0 ja 0x116870a4 */
  if ((!C.cf&&!C.zf)) goto L_116870a4;
  /* 116870a2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_116870a4:;
  /* 116870a4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116870a6 jb 0x116870ae */
  if (C.cf) goto L_116870ae;
  /* 116870a8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116870aa ja 0x116870ae */
  if ((!C.cf&&!C.zf)) goto L_116870ae;
  /* 116870ac add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_116870ae:;
  /* 116870ae cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116870b0 jne 0x116870bf */
  if (!C.zf) goto L_116870bf;
  /* 116870b2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116870b3 jne 0x1168708c */
  if (!C.zf) goto L_1168708c;
L_116870b5:;
  /* 116870b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116870b7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116870b9 je 0x1168715a */
  if (C.zf) goto L_1168715a;
L_116870bf:;
  /* 116870bf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 116870c4 jb 0x1168715a */
  if (C.cf) goto L_1168715a;
  /* 116870ca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116870cc jmp 0x1168715a */
  goto L_1168715a;
L_116870d1:;
  /* 116870d1 lock inc dword ptr [0x1168a340] */
  x86_unimpl("lock inc @ 0x116870d1");
  /* 116870d8 cmp dword ptr [0x1168a33c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1168a33c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116870df jg 0x116870e5 */
  if ((!C.zf&&C.sf==C.of)) goto L_116870e5;
  /* 116870e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116870e3 jmp 0x116870fe */
  goto L_116870fe;
L_116870e5:;
  /* 116870e5 lock dec dword ptr [0x1168a340] */
  x86_unimpl("lock dec @ 0x116870e5");
  /* 116870ec mov ebx, ecx */
  EBX = (ECX);
  /* 116870ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116870f0 call 0x116832ad */
  push32(0x116870f5u); f_116832ad();
  /* 116870f5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 116870fc mov ecx, ebx */
  ECX = (EBX);
L_116870fe:;
  /* 116870fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11687100 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11687102 mov edi, edi */
  EDI = (EDI);
L_11687104:;
  /* 11687104 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11687106 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11687108 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1168710a je 0x1168712f */
  if (C.zf) goto L_1168712f;
  /* 1168710c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1168710e je 0x1168712f */
  if (C.zf) goto L_1168712f;
  /* 11687110 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11687111 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11687112 push ecx */
  push32((uint32_t)(ECX));
  /* 11687113 push eax */
  push32((uint32_t)(EAX));
  /* 11687114 push ebx */
  push32((uint32_t)(EBX));
  /* 11687115 call 0x11684154 */
  push32(0x1168711au); f_11684154();
  /* 1168711a mov ebx, eax */
  EBX = (EAX);
  /* 1168711c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168711f call 0x11684154 */
  push32(0x11687124u); f_11684154();
  /* 11687124 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11687127 pop ecx */
  ECX = (pop32());
  /* 11687128 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168712a jne 0x11687135 */
  if (!C.zf) goto L_11687135;
  /* 1168712c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1168712d jne 0x11687104 */
  if (!C.zf) goto L_11687104;
L_1168712f:;
  /* 1168712f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11687131 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687133 je 0x1168713e */
  if (C.zf) goto L_1168713e;
L_11687135:;
  /* 11687135 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1168713a jb 0x1168713e */
  if (C.cf) goto L_1168713e;
  /* 1168713c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1168713e:;
  /* 1168713e pop eax */
  EAX = (pop32());
  /* 1168713f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11687141 jne 0x1168714c */
  if (!C.zf) goto L_1168714c;
  /* 11687143 lock dec dword ptr [0x1168a340] */
  x86_unimpl("lock dec @ 0x11687143");
  /* 1168714a jmp 0x1168715a */
  goto L_1168715a;
L_1168714c:;
  /* 1168714c mov ebx, ecx */
  EBX = (ECX);
  /* 1168714e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11687150 call 0x1168330e */
  push32(0x11687155u); f_1168330e();
  /* 11687155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11687158 mov ecx, ebx */
  ECX = (EBX);
L_1168715a:;
  /* 1168715a mov eax, ecx */
  EAX = (ECX);
  /* 1168715c pop ebx */
  EBX = (pop32());
  /* 1168715d pop esi */
  ESI = (pop32());
  /* 1168715e pop edi */
  EDI = (pop32());
  /* 1168715f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11687160 ret  */
  ESPCHK(0x11687060u, _esp0);
  ESP += 4; return;
}

/* FUN_10007161 @ 0x11687161 (597 bytes, 239 insns) */
void f_11687161(void) {
  FTRACE(0x11687161u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11687161 push ebp */
  push32((uint32_t)(EBP));
  /* 11687162 mov ebp, esp */
  EBP = (ESP);
  /* 11687164 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11687166 push 0x116886b8 */
  push32((uint32_t)(0x116886b8u));
  /* 1168716b push 0x11686a2c */
  push32((uint32_t)(0x11686a2cu));
  /* 11687170 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11687176 push eax */
  push32((uint32_t)(EAX));
  /* 11687177 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1168717e sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11687181 push ebx */
  push32((uint32_t)(EBX));
  /* 11687182 push esi */
  push32((uint32_t)(ESI));
  /* 11687183 push edi */
  push32((uint32_t)(EDI));
  /* 11687184 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11687187 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11687189 cmp dword ptr [0x1168a330], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1168a330))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168718f push 1 */
  push32((uint32_t)(0x1u));
  /* 11687191 pop edi */
  EDI = (pop32());
  /* 11687192 jne 0x116871d4 */
  if (!C.zf) goto L_116871d4;
  /* 11687194 push edi */
  push32((uint32_t)(EDI));
  /* 11687195 mov eax, 0x11688544 */
  EAX = (0x11688544u);
  /* 1168719a push eax */
  push32((uint32_t)(EAX));
  /* 1168719b push edi */
  push32((uint32_t)(EDI));
  /* 1168719c push eax */
  push32((uint32_t)(EAX));
  /* 1168719d push ebx */
  push32((uint32_t)(EBX));
  /* 1168719e push ebx */
  push32((uint32_t)(EBX));
  /* 1168719f call dword ptr [0x11688010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688010))), 0x116871a5u);
  /* 116871a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116871a7 je 0x116871b1 */
  if (C.zf) goto L_116871b1;
  /* 116871a9 mov dword ptr [0x1168a330], edi */
  w32((uint32_t)(0x1168a330), (EDI));
  /* 116871af jmp 0x116871d4 */
  goto L_116871d4;
L_116871b1:;
  /* 116871b1 push edi */
  push32((uint32_t)(EDI));
  /* 116871b2 mov eax, 0x11688540 */
  EAX = (0x11688540u);
  /* 116871b7 push eax */
  push32((uint32_t)(EAX));
  /* 116871b8 push edi */
  push32((uint32_t)(EDI));
  /* 116871b9 push eax */
  push32((uint32_t)(EAX));
  /* 116871ba push ebx */
  push32((uint32_t)(EBX));
  /* 116871bb push ebx */
  push32((uint32_t)(EBX));
  /* 116871bc call dword ptr [0x1168800c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168800c))), 0x116871c2u);
  /* 116871c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116871c4 je 0x116873ca */
  if (C.zf) goto L_116873ca;
  /* 116871ca mov dword ptr [0x1168a330], 2 */
  w32((uint32_t)(0x1168a330), (0x2u));
L_116871d4:;
  /* 116871d4 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 116871d7 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116871d9 jle 0x116871eb */
  if ((C.zf||C.sf!=C.of)) goto L_116871eb;
  /* 116871db push esi */
  push32((uint32_t)(ESI));
  /* 116871dc push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 116871df call 0x116873de */
  push32(0x116871e4u); f_116873de();
  /* 116871e4 pop ecx */
  ECX = (pop32());
  /* 116871e5 pop ecx */
  ECX = (pop32());
  /* 116871e6 mov esi, eax */
  ESI = (EAX);
  /* 116871e8 mov dword ptr [ebp + 0x14], esi */
  w32((uint32_t)(EBP + 0x14), (ESI));
L_116871eb:;
  /* 116871eb cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116871ee jle 0x11687200 */
  if ((C.zf||C.sf!=C.of)) goto L_11687200;
  /* 116871f0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 116871f3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 116871f6 call 0x116873de */
  push32(0x116871fbu); f_116873de();
  /* 116871fb pop ecx */
  ECX = (pop32());
  /* 116871fc pop ecx */
  ECX = (pop32());
  /* 116871fd mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11687200:;
  /* 11687200 mov eax, dword ptr [0x1168a330] */
  EAX = (r32((uint32_t)(0x1168a330)));
  /* 11687205 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687208 jne 0x11687225 */
  if (!C.zf) goto L_11687225;
  /* 1168720a push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1168720d push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11687210 push esi */
  push32((uint32_t)(ESI));
  /* 11687211 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11687214 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11687217 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1168721a call dword ptr [0x1168800c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168800c))), 0x11687220u);
  /* 11687220 jmp 0x116873cc */
  goto L_116873cc;
L_11687225:;
  /* 11687225 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687227 jne 0x116873ca */
  if (!C.zf) goto L_116873ca;
  /* 1168722d cmp dword ptr [ebp + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687230 jne 0x1168723a */
  if (!C.zf) goto L_1168723a;
  /* 11687232 mov eax, dword ptr [0x1168a2b0] */
  EAX = (r32((uint32_t)(0x1168a2b0)));
  /* 11687237 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1168723a:;
  /* 1168723a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168723c je 0x11687247 */
  if (C.zf) goto L_11687247;
  /* 1168723e cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687241 jne 0x116872df */
  if (!C.zf) goto L_116872df;
L_11687247:;
  /* 11687247 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168724a jne 0x11687254 */
  if (!C.zf) goto L_11687254;
L_1168724c:;
  /* 1168724c push 2 */
  push32((uint32_t)(0x2u));
L_1168724e:;
  /* 1168724e pop eax */
  EAX = (pop32());
  /* 1168724f jmp 0x116873cc */
  goto L_116873cc;
L_11687254:;
  /* 11687254 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687257 jle 0x11687260 */
  if ((C.zf||C.sf!=C.of)) goto L_11687260;
L_11687259:;
  /* 11687259 mov eax, edi */
  EAX = (EDI);
  /* 1168725b jmp 0x116873cc */
  goto L_116873cc;
L_11687260:;
  /* 11687260 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687262 jg 0x116872a5 */
  if ((!C.zf&&C.sf==C.of)) goto L_116872a5;
  /* 11687264 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11687267 push eax */
  push32((uint32_t)(EAX));
  /* 11687268 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1168726b call dword ptr [0x11688034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688034))), 0x11687271u);
  /* 11687271 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11687273 je 0x116873ca */
  if (C.zf) goto L_116873ca;
  /* 11687279 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168727b jle 0x116872a9 */
  if ((C.zf||C.sf!=C.of)) goto L_116872a9;
  /* 1168727d cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687281 jb 0x116872a5 */
  if (C.cf) goto L_116872a5;
  /* 11687283 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11687286 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11687289 je 0x116872a5 */
  if (C.zf) goto L_116872a5;
L_1168728b:;
  /* 1168728b mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 1168728e cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11687290 je 0x116872a5 */
  if (C.zf) goto L_116872a5;
  /* 11687292 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11687295 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11687297 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11687299 jb 0x1168729f */
  if (C.cf) goto L_1168729f;
  /* 1168729b cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168729d jbe 0x1168724c */
  if ((C.cf||C.zf)) goto L_1168724c;
L_1168729f:;
  /* 1168729f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116872a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116872a1 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116872a3 jne 0x1168728b */
  if (!C.zf) goto L_1168728b;
L_116872a5:;
  /* 116872a5 push 3 */
  push32((uint32_t)(0x3u));
  /* 116872a7 jmp 0x1168724e */
  goto L_1168724e;
L_116872a9:;
  /* 116872a9 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116872ac jle 0x116872df */
  if ((C.zf||C.sf!=C.of)) goto L_116872df;
  /* 116872ae cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116872b2 jb 0x11687259 */
  if (C.cf) goto L_11687259;
  /* 116872b4 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 116872b7 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116872ba je 0x11687259 */
  if (C.zf) goto L_11687259;
L_116872bc:;
  /* 116872bc mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 116872bf cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116872c1 je 0x11687259 */
  if (C.zf) goto L_11687259;
  /* 116872c3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116872c6 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 116872c8 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116872ca jb 0x116872d4 */
  if (C.cf) goto L_116872d4;
  /* 116872cc cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116872ce jbe 0x1168724c */
  if ((C.cf||C.zf)) goto L_1168724c;
L_116872d4:;
  /* 116872d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116872d5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116872d6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116872d8 jne 0x116872bc */
  if (!C.zf) goto L_116872bc;
  /* 116872da jmp 0x11687259 */
  goto L_11687259;
L_116872df:;
  /* 116872df push ebx */
  push32((uint32_t)(EBX));
  /* 116872e0 push ebx */
  push32((uint32_t)(EBX));
  /* 116872e1 push esi */
  push32((uint32_t)(ESI));
  /* 116872e2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 116872e5 push 9 */
  push32((uint32_t)(0x9u));
  /* 116872e7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 116872ea call dword ptr [0x11688024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688024))), 0x116872f0u);
  /* 116872f0 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116872f3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116872f5 je 0x116873ca */
  if (C.zf) goto L_116873ca;
  /* 116872fb mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 116872fe add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11687300 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11687303 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11687305 call 0x11686b10 */
  push32(0x1168730au); f_11686b10();
  /* 1168730a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1168730d mov eax, esp */
  EAX = (ESP);
  /* 1168730f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11687312 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11687316 jmp 0x1168732e */
  goto L_1168732e;
  /* 11687318 push 1 */
  push32((uint32_t)(0x1u));
  /* 1168731a pop eax */
  EAX = (pop32());
  /* 1168731b ret  */
  ESPCHK(0x11687161u, _esp0);
  ESP += 4; return;
  /* 1168731c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1168731f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11687321 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11687324 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11687328 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 1168732b push 1 */
  push32((uint32_t)(0x1u));
  /* 1168732d pop edi */
  EDI = (pop32());
L_1168732e:;
  /* 1168732e cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687331 je 0x116873ca */
  if (C.zf) goto L_116873ca;
  /* 11687337 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1168733a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1168733d push esi */
  push32((uint32_t)(ESI));
  /* 1168733e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11687341 push edi */
  push32((uint32_t)(EDI));
  /* 11687342 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11687345 mov esi, dword ptr [0x11688024] */
  ESI = (r32((uint32_t)(0x11688024)));
  /* 1168734b call esi */
  call_ind((uint32_t)(ESI), 0x1168734du);
  /* 1168734d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168734f je 0x116873ca */
  if (C.zf) goto L_116873ca;
  /* 11687351 push ebx */
  push32((uint32_t)(EBX));
  /* 11687352 push ebx */
  push32((uint32_t)(EBX));
  /* 11687353 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11687356 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11687359 push 9 */
  push32((uint32_t)(0x9u));
  /* 1168735b push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1168735e call esi */
  call_ind((uint32_t)(ESI), 0x11687360u);
  /* 11687360 mov esi, eax */
  ESI = (EAX);
  /* 11687362 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 11687365 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687367 je 0x116873ca */
  if (C.zf) goto L_116873ca;
  /* 11687369 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1168736c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1168736f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11687372 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11687374 call 0x11686b10 */
  push32(0x11687379u); f_11686b10();
  /* 11687379 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1168737c mov edi, esp */
  EDI = (ESP);
  /* 1168737e mov dword ptr [ebp - 0x28], edi */
  w32((uint32_t)(EBP + -0x28), (EDI));
  /* 11687381 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11687385 jmp 0x11687399 */
  goto L_11687399;
  /* 11687387 push 1 */
  push32((uint32_t)(0x1u));
  /* 11687389 pop eax */
  EAX = (pop32());
  /* 1168738a ret  */
  ESPCHK(0x11687161u, _esp0);
  ESP += 4; return;
  /* 1168738b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1168738e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11687390 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11687392 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11687396 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_11687399:;
  /* 11687399 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168739b je 0x116873ca */
  if (C.zf) goto L_116873ca;
  /* 1168739d push esi */
  push32((uint32_t)(ESI));
  /* 1168739e push edi */
  push32((uint32_t)(EDI));
  /* 1168739f push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 116873a2 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 116873a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 116873a7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 116873aa call dword ptr [0x11688024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688024))), 0x116873b0u);
  /* 116873b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116873b2 je 0x116873ca */
  if (C.zf) goto L_116873ca;
  /* 116873b4 push esi */
  push32((uint32_t)(ESI));
  /* 116873b5 push edi */
  push32((uint32_t)(EDI));
  /* 116873b6 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 116873b9 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 116873bc push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 116873bf push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 116873c2 call dword ptr [0x11688010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688010))), 0x116873c8u);
  /* 116873c8 jmp 0x116873cc */
  goto L_116873cc;
L_116873ca:;
  /* 116873ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116873cc:;
  /* 116873cc lea esp, [ebp - 0x4c] */
  ESP = ((uint32_t)(EBP + -0x4c));
  /* 116873cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116873d2 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 116873d9 pop edi */
  EDI = (pop32());
  /* 116873da pop esi */
  ESI = (pop32());
  /* 116873db pop ebx */
  EBX = (pop32());
  /* 116873dc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116873dd ret  */
  ESPCHK(0x11687161u, _esp0);
  ESP += 4; return;
}

/* FUN_100073de @ 0x116873de (43 bytes, 20 insns) */
void f_116873de(void) {
  FTRACE(0x116873deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116873de mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 116873e2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 116873e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116873e8 push esi */
  push32((uint32_t)(ESI));
  /* 116873e9 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 116873ec je 0x116873fb */
  if (C.zf) goto L_116873fb;
L_116873ee:;
  /* 116873ee cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116873f1 je 0x116873fb */
  if (C.zf) goto L_116873fb;
  /* 116873f3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116873f4 mov esi, ecx */
  ESI = (ECX);
  /* 116873f6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116873f7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 116873f9 jne 0x116873ee */
  if (!C.zf) goto L_116873ee;
L_116873fb:;
  /* 116873fb cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116873fe pop esi */
  ESI = (pop32());
  /* 116873ff jne 0x11687406 */
  if (!C.zf) goto L_11687406;
  /* 11687401 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11687405 ret  */
  ESPCHK(0x116873deu, _esp0);
  ESP += 4; return;
L_11687406:;
  /* 11687406 mov eax, edx */
  EAX = (EDX);
  /* 11687408 ret  */
  ESPCHK(0x116873deu, _esp0);
  ESP += 4; return;
}

/* FUN_10007409 @ 0x11687409 (391 bytes, 155 insns) */
void f_11687409(void) {
  FTRACE(0x11687409u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11687409 push ebp */
  push32((uint32_t)(EBP));
  /* 1168740a mov ebp, esp */
  EBP = (ESP);
  /* 1168740c push ecx */
  push32((uint32_t)(ECX));
  /* 1168740d push ecx */
  push32((uint32_t)(ECX));
  /* 1168740e push ebx */
  push32((uint32_t)(EBX));
  /* 1168740f push esi */
  push32((uint32_t)(ESI));
  /* 11687410 push edi */
  push32((uint32_t)(EDI));
  /* 11687411 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11687413 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687416 je 0x1168746d */
  if (C.zf) goto L_1168746d;
  /* 11687418 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1168741a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1168741d call 0x1168786d */
  push32(0x11687422u); f_1168786d();
  /* 11687422 mov esi, eax */
  ESI = (EAX);
  /* 11687424 pop ecx */
  ECX = (pop32());
  /* 11687425 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687427 pop ecx */
  ECX = (pop32());
  /* 11687428 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 1168742b je 0x1168746d */
  if (C.zf) goto L_1168746d;
  /* 1168742d cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687430 je 0x1168746d */
  if (C.zf) goto L_1168746d;
  /* 11687432 mov eax, dword ptr [0x1168a00c] */
  EAX = (r32((uint32_t)(0x1168a00c)));
  /* 11687437 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11687439 cmp byte ptr [esi + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x1))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168743c sete bl */
  BL = ((C.zf) ? 1u : 0u);
  /* 1168743f cmp eax, dword ptr [0x1168a010] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1168a010))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687445 jne 0x11687453 */
  if (!C.zf) goto L_11687453;
  /* 11687447 push eax */
  push32((uint32_t)(EAX));
  /* 11687448 call 0x116875e8 */
  push32(0x1168744du); f_116875e8();
  /* 1168744d pop ecx */
  ECX = (pop32());
  /* 1168744e mov dword ptr [0x1168a00c], eax */
  w32((uint32_t)(0x1168a00c), (EAX));
L_11687453:;
  /* 11687453 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687455 jne 0x116874ab */
  if (!C.zf) goto L_116874ab;
  /* 11687457 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168745a je 0x11687475 */
  if (C.zf) goto L_11687475;
  /* 1168745c cmp dword ptr [0x1168a014], edi */
  { uint32_t _a=(r32((uint32_t)(0x1168a014))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687462 je 0x11687475 */
  if (C.zf) goto L_11687475;
  /* 11687464 call 0x11686f13 */
  push32(0x11687469u); f_11686f13();
  /* 11687469 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168746b je 0x116874ab */
  if (C.zf) goto L_116874ab;
L_1168746d:;
  /* 1168746d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11687470:;
  /* 11687470 pop edi */
  EDI = (pop32());
  /* 11687471 pop esi */
  ESI = (pop32());
  /* 11687472 pop ebx */
  EBX = (pop32());
  /* 11687473 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11687474 ret  */
  ESPCHK(0x11687409u, _esp0);
  ESP += 4; return;
L_11687475:;
  /* 11687475 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687477 jne 0x11687589 */
  if (!C.zf) goto L_11687589;
  /* 1168747d push 4 */
  push32((uint32_t)(0x4u));
  /* 1168747f call 0x116820fc */
  push32(0x11687484u); f_116820fc();
  /* 11687484 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687486 pop ecx */
  ECX = (pop32());
  /* 11687487 mov dword ptr [0x1168a00c], eax */
  w32((uint32_t)(0x1168a00c), (EAX));
  /* 1168748c je 0x1168746d */
  if (C.zf) goto L_1168746d;
  /* 1168748e mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11687490 cmp dword ptr [0x1168a014], edi */
  { uint32_t _a=(r32((uint32_t)(0x1168a014))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687496 jne 0x116874ab */
  if (!C.zf) goto L_116874ab;
  /* 11687498 push 4 */
  push32((uint32_t)(0x4u));
  /* 1168749a call 0x116820fc */
  push32(0x1168749fu); f_116820fc();
  /* 1168749f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116874a1 pop ecx */
  ECX = (pop32());
  /* 116874a2 mov dword ptr [0x1168a014], eax */
  w32((uint32_t)(0x1168a014), (EAX));
  /* 116874a7 je 0x1168746d */
  if (C.zf) goto L_1168746d;
  /* 116874a9 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_116874ab:;
  /* 116874ab sub esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116874ae mov edi, dword ptr [0x1168a00c] */
  EDI = (r32((uint32_t)(0x1168a00c)));
  /* 116874b4 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 116874b7 push esi */
  push32((uint32_t)(ESI));
  /* 116874b8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 116874bb call 0x11687590 */
  push32(0x116874c0u); f_11687590();
  /* 116874c0 mov esi, eax */
  ESI = (EAX);
  /* 116874c2 pop ecx */
  ECX = (pop32());
  /* 116874c3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 116874c5 pop ecx */
  ECX = (pop32());
  /* 116874c6 jl 0x1168750b */
  if ((C.sf!=C.of)) goto L_1168750b;
  /* 116874c8 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116874cb je 0x1168750b */
  if (C.zf) goto L_1168750b;
  /* 116874cd test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 116874cf je 0x11687503 */
  if (C.zf) goto L_11687503;
  /* 116874d1 push dword ptr [edi + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EDI + ESI*4))));
  /* 116874d4 lea edi, [edi + esi*4] */
  EDI = ((uint32_t)(EDI + ESI*4));
  /* 116874d7 call 0x116820b4 */
  push32(0x116874dcu); f_116820b4();
  /* 116874dc pop ecx */
  ECX = (pop32());
L_116874dd:;
  /* 116874dd cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116874e0 je 0x116874ed */
  if (C.zf) goto L_116874ed;
  /* 116874e2 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 116874e5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116874e6 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 116874e8 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116874eb jmp 0x116874dd */
  goto L_116874dd;
L_116874ed:;
  /* 116874ed mov eax, esi */
  EAX = (ESI);
  /* 116874ef shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 116874f2 push eax */
  push32((uint32_t)(EAX));
  /* 116874f3 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 116874f6 call 0x11687735 */
  push32(0x116874fbu); f_11687735();
  /* 116874fb pop ecx */
  ECX = (pop32());
  /* 116874fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116874fe pop ecx */
  ECX = (pop32());
  /* 116874ff je 0x1168753d */
  if (C.zf) goto L_1168753d;
  /* 11687501 jmp 0x11687538 */
  goto L_11687538;
L_11687503:;
  /* 11687503 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11687506 mov dword ptr [edi + esi*4], eax */
  w32((uint32_t)(EDI + ESI*4), (EAX));
  /* 11687509 jmp 0x1168753d */
  goto L_1168753d;
L_1168750b:;
  /* 1168750b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1168750d jne 0x11687589 */
  if (!C.zf) goto L_11687589;
  /* 1168750f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11687511 jge 0x11687515 */
  if ((C.sf==C.of)) goto L_11687515;
  /* 11687513 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
L_11687515:;
  /* 11687515 lea eax, [esi*4 + 8] */
  EAX = ((uint32_t)(ESI*4 + 0x8));
  /* 1168751c push eax */
  push32((uint32_t)(EAX));
  /* 1168751d push edi */
  push32((uint32_t)(EDI));
  /* 1168751e call 0x11687735 */
  push32(0x11687523u); f_11687735();
  /* 11687523 pop ecx */
  ECX = (pop32());
  /* 11687524 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11687526 pop ecx */
  ECX = (pop32());
  /* 11687527 je 0x1168746d */
  if (C.zf) goto L_1168746d;
  /* 1168752d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11687530 mov dword ptr [eax + esi*4], ecx */
  w32((uint32_t)(EAX + ESI*4), (ECX));
  /* 11687533 and dword ptr [eax + esi*4 + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x4)))&(0x0u); w32((uint32_t)(EAX + ESI*4 + 0x4), (_r)); fl_logic(_r,32); }
L_11687538:;
  /* 11687538 mov dword ptr [0x1168a00c], eax */
  w32((uint32_t)(0x1168a00c), (EAX));
L_1168753d:;
  /* 1168753d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687541 je 0x11687589 */
  if (C.zf) goto L_11687589;
  /* 11687543 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11687546 call 0x11684c30 */
  push32(0x1168754bu); f_11684c30();
  /* 1168754b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1168754c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1168754d push eax */
  push32((uint32_t)(EAX));
  /* 1168754e call 0x116820fc */
  push32(0x11687553u); f_116820fc();
  /* 11687553 mov esi, eax */
  ESI = (EAX);
  /* 11687555 pop ecx */
  ECX = (pop32());
  /* 11687556 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11687558 pop ecx */
  ECX = (pop32());
  /* 11687559 je 0x11687589 */
  if (C.zf) goto L_11687589;
  /* 1168755b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1168755e push esi */
  push32((uint32_t)(ESI));
  /* 1168755f call 0x116847a0 */
  push32(0x11687564u); f_116847a0();
  /* 11687564 mov eax, esi */
  EAX = (ESI);
  /* 11687566 pop ecx */
  ECX = (pop32());
  /* 11687567 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168756a pop ecx */
  ECX = (pop32());
  /* 1168756b add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168756e and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11687571 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11687572 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11687574 sbb ebx, ebx */
  { uint32_t _a=(EBX),_b=(EBX),_r=_a-_b-C.cf; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11687576 not ebx */
  EBX = (~(EBX));
  /* 11687578 and ebx, eax */
  { uint32_t _r=(EBX)&(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1168757a push ebx */
  push32((uint32_t)(EBX));
  /* 1168757b push esi */
  push32((uint32_t)(ESI));
  /* 1168757c call dword ptr [0x11688008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688008))), 0x11687582u);
  /* 11687582 push esi */
  push32((uint32_t)(ESI));
  /* 11687583 call 0x116820b4 */
  push32(0x11687588u); f_116820b4();
  /* 11687588 pop ecx */
  ECX = (pop32());
L_11687589:;
  /* 11687589 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1168758b jmp 0x11687470 */
  goto L_11687470;
}

/* FUN_10007590 @ 0x11687590 (88 bytes, 35 insns) */
void f_11687590(void) {
  FTRACE(0x11687590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11687590 push esi */
  push32((uint32_t)(ESI));
  /* 11687591 mov esi, dword ptr [0x1168a00c] */
  ESI = (r32((uint32_t)(0x1168a00c)));
  /* 11687597 push edi */
  push32((uint32_t)(EDI));
  /* 11687598 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1168759a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168759c je 0x116875cb */
  if (C.zf) goto L_116875cb;
  /* 1168759e mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_116875a2:;
  /* 116875a2 push edi */
  push32((uint32_t)(EDI));
  /* 116875a3 push eax */
  push32((uint32_t)(EAX));
  /* 116875a4 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 116875a8 call 0x11686ed4 */
  push32(0x116875adu); f_11686ed4();
  /* 116875ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116875b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116875b2 jne 0x116875c1 */
  if (!C.zf) goto L_116875c1;
  /* 116875b4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 116875b6 mov al, byte ptr [eax + edi] */
  AL = (r8((uint32_t)(EAX + EDI*1)));
  /* 116875b9 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116875bb je 0x116875db */
  if (C.zf) goto L_116875db;
  /* 116875bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116875bf je 0x116875db */
  if (C.zf) goto L_116875db;
L_116875c1:;
  /* 116875c1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 116875c4 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116875c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116875c9 jne 0x116875a2 */
  if (!C.zf) goto L_116875a2;
L_116875cb:;
  /* 116875cb mov eax, esi */
  EAX = (ESI);
  /* 116875cd sub eax, dword ptr [0x1168a00c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1168a00c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116875d3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 116875d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_116875d8:;
  /* 116875d8 pop edi */
  EDI = (pop32());
  /* 116875d9 pop esi */
  ESI = (pop32());
  /* 116875da ret  */
  ESPCHK(0x11687590u, _esp0);
  ESP += 4; return;
L_116875db:;
  /* 116875db mov eax, esi */
  EAX = (ESI);
  /* 116875dd sub eax, dword ptr [0x1168a00c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1168a00c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116875e3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 116875e6 jmp 0x116875d8 */
  goto L_116875d8;
}

/* FUN_100075e8 @ 0x116875e8 (103 bytes, 49 insns) */
void f_116875e8(void) {
  FTRACE(0x116875e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116875e8 push edi */
  push32((uint32_t)(EDI));
  /* 116875e9 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 116875ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116875ef test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 116875f1 jne 0x116875f7 */
  if (!C.zf) goto L_116875f7;
  /* 116875f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116875f5 pop edi */
  EDI = (pop32());
  /* 116875f6 ret  */
  ESPCHK(0x116875e8u, _esp0);
  ESP += 4; return;
L_116875f7:;
  /* 116875f7 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116875fa lea eax, [edi + 4] */
  EAX = ((uint32_t)(EDI + 0x4));
  /* 116875fd je 0x11687609 */
  if (C.zf) goto L_11687609;
L_116875ff:;
  /* 116875ff mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11687601 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11687602 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11687605 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11687607 jne 0x116875ff */
  if (!C.zf) goto L_116875ff;
L_11687609:;
  /* 11687609 push ebx */
  push32((uint32_t)(EBX));
  /* 1168760a push ebp */
  push32((uint32_t)(EBP));
  /* 1168760b lea eax, [ecx*4 + 4] */
  EAX = ((uint32_t)(ECX*4 + 0x4));
  /* 11687612 push esi */
  push32((uint32_t)(ESI));
  /* 11687613 push eax */
  push32((uint32_t)(EAX));
  /* 11687614 call 0x116820fc */
  push32(0x11687619u); f_116820fc();
  /* 11687619 mov esi, eax */
  ESI = (EAX);
  /* 1168761b pop ecx */
  ECX = (pop32());
  /* 1168761c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1168761e mov ebp, esi */
  EBP = (ESI);
  /* 11687620 jne 0x1168762a */
  if (!C.zf) goto L_1168762a;
  /* 11687622 push 9 */
  push32((uint32_t)(0x9u));
  /* 11687624 call 0x11682081 */
  push32(0x11687629u); f_11682081();
  /* 11687629 pop ecx */
  ECX = (pop32());
L_1168762a:;
  /* 1168762a mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1168762c mov ebx, edi */
  EBX = (EDI);
L_1168762e:;
  /* 1168762e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11687630 je 0x11687645 */
  if (C.zf) goto L_11687645;
  /* 11687632 push eax */
  push32((uint32_t)(EAX));
  /* 11687633 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11687636 call 0x11687904 */
  push32(0x1168763bu); f_11687904();
  /* 1168763b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1168763d mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1168763f pop ecx */
  ECX = (pop32());
  /* 11687640 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11687643 jmp 0x1168762e */
  goto L_1168762e;
L_11687645:;
  /* 11687645 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11687648 mov eax, ebp */
  EAX = (EBP);
  /* 1168764a pop esi */
  ESI = (pop32());
  /* 1168764b pop ebp */
  EBP = (pop32());
  /* 1168764c pop ebx */
  EBX = (pop32());
  /* 1168764d pop edi */
  EDI = (pop32());
  /* 1168764e ret  */
  ESPCHK(0x116875e8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007735 @ 0x11687735 (312 bytes, 125 insns) */
void f_11687735(void) {
  FTRACE(0x11687735u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11687735 push ebp */
  push32((uint32_t)(EBP));
  /* 11687736 mov ebp, esp */
  EBP = (ESP);
  /* 11687738 push ebx */
  push32((uint32_t)(EBX));
  /* 11687739 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1168773c push esi */
  push32((uint32_t)(ESI));
  /* 1168773d push edi */
  push32((uint32_t)(EDI));
  /* 1168773e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11687740 jne 0x11687750 */
  if (!C.zf) goto L_11687750;
  /* 11687742 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11687745 call 0x116820fc */
  push32(0x1168774au); f_116820fc();
  /* 1168774a pop ecx */
  ECX = (pop32());
  /* 1168774b jmp 0x11687868 */
  goto L_11687868;
L_11687750:;
  /* 11687750 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11687753 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11687755 jne 0x11687765 */
  if (!C.zf) goto L_11687765;
  /* 11687757 push ebx */
  push32((uint32_t)(EBX));
  /* 11687758 call 0x116820b4 */
  push32(0x1168775du); f_116820b4();
  /* 1168775d pop ecx */
  ECX = (pop32());
L_1168775e:;
  /* 1168775e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11687760 jmp 0x11687868 */
  goto L_11687868;
L_11687765:;
  /* 11687765 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11687767 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168776a ja 0x11687849 */
  if ((!C.cf&&!C.zf)) goto L_11687849;
  /* 11687770 push 9 */
  push32((uint32_t)(0x9u));
  /* 11687772 call 0x116832ad */
  push32(0x11687777u); f_116832ad();
  /* 11687777 push ebx */
  push32((uint32_t)(EBX));
  /* 11687778 call 0x11683361 */
  push32(0x1168777du); f_11683361();
  /* 1168777d pop ecx */
  ECX = (pop32());
  /* 1168777e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11687781 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11687783 pop ecx */
  ECX = (pop32());
  /* 11687784 je 0x1168781e */
  if (C.zf) goto L_1168781e;
  /* 1168778a cmp esi, dword ptr [0x11689338] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11689338))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687790 ja 0x116877d4 */
  if ((!C.cf&&!C.zf)) goto L_116877d4;
  /* 11687792 push esi */
  push32((uint32_t)(ESI));
  /* 11687793 push ebx */
  push32((uint32_t)(EBX));
  /* 11687794 push eax */
  push32((uint32_t)(EAX));
  /* 11687795 call 0x11683b6c */
  push32(0x1168779au); f_11683b6c();
  /* 1168779a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168779d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168779f je 0x116877a5 */
  if (C.zf) goto L_116877a5;
  /* 116877a1 mov edi, ebx */
  EDI = (EBX);
  /* 116877a3 jmp 0x116877d0 */
  goto L_116877d0;
L_116877a5:;
  /* 116877a5 push esi */
  push32((uint32_t)(ESI));
  /* 116877a6 call 0x116836b7 */
  push32(0x116877abu); f_116836b7();
  /* 116877ab mov edi, eax */
  EDI = (EAX);
  /* 116877ad pop ecx */
  ECX = (pop32());
  /* 116877ae test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 116877b0 je 0x116877d4 */
  if (C.zf) goto L_116877d4;
  /* 116877b2 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 116877b5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 116877b6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116877b8 jb 0x116877bc */
  if (C.cf) goto L_116877bc;
  /* 116877ba mov eax, esi */
  EAX = (ESI);
L_116877bc:;
  /* 116877bc push eax */
  push32((uint32_t)(EAX));
  /* 116877bd push ebx */
  push32((uint32_t)(EBX));
  /* 116877be push edi */
  push32((uint32_t)(EDI));
  /* 116877bf call 0x11685670 */
  push32(0x116877c4u); f_11685670();
  /* 116877c4 push ebx */
  push32((uint32_t)(EBX));
  /* 116877c5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 116877c8 call 0x1168338c */
  push32(0x116877cdu); f_1168338c();
  /* 116877cd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116877d0:;
  /* 116877d0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 116877d2 jne 0x11687814 */
  if (!C.zf) goto L_11687814;
L_116877d4:;
  /* 116877d4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 116877d6 jne 0x116877db */
  if (!C.zf) goto L_116877db;
  /* 116877d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 116877da pop esi */
  ESI = (pop32());
L_116877db:;
  /* 116877db add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116877de and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 116877e1 push esi */
  push32((uint32_t)(ESI));
  /* 116877e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116877e4 push dword ptr [0x1168a580] */
  push32((uint32_t)(r32((uint32_t)(0x1168a580))));
  /* 116877ea call dword ptr [0x11688078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688078))), 0x116877f0u);
  /* 116877f0 mov edi, eax */
  EDI = (EAX);
  /* 116877f2 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 116877f4 je 0x11687814 */
  if (C.zf) goto L_11687814;
  /* 116877f6 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 116877f9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 116877fa cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116877fc jb 0x11687800 */
  if (C.cf) goto L_11687800;
  /* 116877fe mov eax, esi */
  EAX = (ESI);
L_11687800:;
  /* 11687800 push eax */
  push32((uint32_t)(EAX));
  /* 11687801 push ebx */
  push32((uint32_t)(EBX));
  /* 11687802 push edi */
  push32((uint32_t)(EDI));
  /* 11687803 call 0x11685670 */
  push32(0x11687808u); f_11685670();
  /* 11687808 push ebx */
  push32((uint32_t)(EBX));
  /* 11687809 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1168780c call 0x1168338c */
  push32(0x11687811u); f_1168338c();
  /* 11687811 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11687814:;
  /* 11687814 push 9 */
  push32((uint32_t)(0x9u));
  /* 11687816 call 0x1168330e */
  push32(0x1168781bu); f_1168330e();
  /* 1168781b pop ecx */
  ECX = (pop32());
  /* 1168781c jmp 0x11687845 */
  goto L_11687845;
L_1168781e:;
  /* 1168781e push 9 */
  push32((uint32_t)(0x9u));
  /* 11687820 call 0x1168330e */
  push32(0x11687825u); f_1168330e();
  /* 11687825 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11687827 pop ecx */
  ECX = (pop32());
  /* 11687828 jne 0x1168782d */
  if (!C.zf) goto L_1168782d;
  /* 1168782a push 1 */
  push32((uint32_t)(0x1u));
  /* 1168782c pop esi */
  ESI = (pop32());
L_1168782d:;
  /* 1168782d add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11687830 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11687833 push esi */
  push32((uint32_t)(ESI));
  /* 11687834 push ebx */
  push32((uint32_t)(EBX));
  /* 11687835 push 0 */
  push32((uint32_t)(0x0u));
  /* 11687837 push dword ptr [0x1168a580] */
  push32((uint32_t)(r32((uint32_t)(0x1168a580))));
  /* 1168783d call dword ptr [0x11688048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688048))), 0x11687843u);
  /* 11687843 mov edi, eax */
  EDI = (EAX);
L_11687845:;
  /* 11687845 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11687847 jne 0x11687866 */
  if (!C.zf) goto L_11687866;
L_11687849:;
  /* 11687849 cmp dword ptr [0x1168a1a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1168a1a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687850 je 0x11687866 */
  if (C.zf) goto L_11687866;
  /* 11687852 push esi */
  push32((uint32_t)(ESI));
  /* 11687853 call 0x11683e62 */
  push32(0x11687858u); f_11683e62();
  /* 11687858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168785a pop ecx */
  ECX = (pop32());
  /* 1168785b jne 0x11687765 */
  if (!C.zf) goto L_11687765;
  /* 11687861 jmp 0x1168775e */
  goto L_1168775e;
L_11687866:;
  /* 11687866 mov eax, edi */
  EAX = (EDI);
L_11687868:;
  /* 11687868 pop edi */
  EDI = (pop32());
  /* 11687869 pop esi */
  ESI = (pop32());
  /* 1168786a pop ebx */
  EBX = (pop32());
  /* 1168786b pop ebp */
  EBP = (pop32());
  /* 1168786c ret  */
  ESPCHK(0x11687735u, _esp0);
  ESP += 4; return;
}

/* FUN_1000786d @ 0x1168786d (151 bytes, 62 insns) */
void f_1168786d(void) {
  FTRACE(0x1168786du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168786d push ebp */
  push32((uint32_t)(EBP));
  /* 1168786e mov ebp, esp */
  EBP = (ESP);
  /* 11687870 cmp dword ptr [0x1168a35c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1168a35c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11687877 push ebx */
  push32((uint32_t)(EBX));
  /* 11687878 push esi */
  push32((uint32_t)(ESI));
  /* 11687879 jne 0x1168788a */
  if (!C.zf) goto L_1168788a;
  /* 1168787b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1168787e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11687881 call 0x11687940 */
  push32(0x11687886u); f_11687940();
  /* 11687886 pop ecx */
  ECX = (pop32());
  /* 11687887 pop ecx */
  ECX = (pop32());
  /* 11687888 jmp 0x11687900 */
  goto L_11687900;
L_1168788a:;
  /* 1168788a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1168788c call 0x116832ad */
  push32(0x11687891u); f_116832ad();
  /* 11687891 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11687894 pop ecx */
  ECX = (pop32());
L_11687895:;
  /* 11687895 movzx bx, byte ptr [esi] */
  BX = ((uint32_t)(r8((uint32_t)(ESI))));
  /* 11687899 test bx, bx */
  { uint32_t _r=(BX)&(BX); fl_logic(_r,16); }
  /* 1168789c je 0x116878e8 */
  if (C.zf) goto L_116878e8;
  /* 1168789e movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 116878a1 test byte ptr [eax + 0x1168a461], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1168a461)))&(0x4u); fl_logic(_r,8); }
  /* 116878a8 je 0x116878c4 */
  if (C.zf) goto L_116878c4;
  /* 116878aa mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116878ad inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116878ae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116878b0 je 0x116878cf */
  if (C.zf) goto L_116878cf;
  /* 116878b2 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 116878b5 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 116878b8 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 116878bb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116878bd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116878c0 je 0x116878db */
  if (C.zf) goto L_116878db;
  /* 116878c2 jmp 0x116878cc */
  goto L_116878cc;
L_116878c4:;
  /* 116878c4 movzx eax, bx */
  EAX = ((uint32_t)(BX));
  /* 116878c7 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116878ca je 0x116878e8 */
  if (C.zf) goto L_116878e8;
L_116878cc:;
  /* 116878cc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116878cd jmp 0x11687895 */
  goto L_11687895;
L_116878cf:;
  /* 116878cf push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116878d1 call 0x1168330e */
  push32(0x116878d6u); f_1168330e();
  /* 116878d6 pop ecx */
  ECX = (pop32());
  /* 116878d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116878d9 jmp 0x11687900 */
  goto L_11687900;
L_116878db:;
  /* 116878db push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116878dd call 0x1168330e */
  push32(0x116878e2u); f_1168330e();
  /* 116878e2 pop ecx */
  ECX = (pop32());
  /* 116878e3 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
  /* 116878e6 jmp 0x11687900 */
  goto L_11687900;
L_116878e8:;
  /* 116878e8 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 116878ea call 0x1168330e */
  push32(0x116878efu); f_1168330e();
  /* 116878ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116878f2 pop ecx */
  ECX = (pop32());
  /* 116878f3 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 116878f6 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116878f8 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116878fa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116878fc not eax */
  EAX = (~(EAX));
  /* 116878fe and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11687900:;
  /* 11687900 pop esi */
  ESI = (pop32());
  /* 11687901 pop ebx */
  EBX = (pop32());
  /* 11687902 pop ebp */
  EBP = (pop32());
  /* 11687903 ret  */
  ESPCHK(0x1168786du, _esp0);
  ESP += 4; return;
}

/* FUN_10007904 @ 0x11687904 (43 bytes, 23 insns) */
void f_11687904(void) {
  FTRACE(0x11687904u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11687904 push esi */
  push32((uint32_t)(ESI));
  /* 11687905 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11687909 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1168790b je 0x1168792b */
  if (C.zf) goto L_1168792b;
  /* 1168790d push esi */
  push32((uint32_t)(ESI));
  /* 1168790e call 0x11684c30 */
  push32(0x11687913u); f_11684c30();
  /* 11687913 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11687914 push eax */
  push32((uint32_t)(EAX));
  /* 11687915 call 0x116820fc */
  push32(0x1168791au); f_116820fc();
  /* 1168791a pop ecx */
  ECX = (pop32());
  /* 1168791b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168791d pop ecx */
  ECX = (pop32());
  /* 1168791e je 0x1168792b */
  if (C.zf) goto L_1168792b;
  /* 11687920 push esi */
  push32((uint32_t)(ESI));
  /* 11687921 push eax */
  push32((uint32_t)(EAX));
  /* 11687922 call 0x116847a0 */
  push32(0x11687927u); f_116847a0();
  /* 11687927 pop ecx */
  ECX = (pop32());
  /* 11687928 pop ecx */
  ECX = (pop32());
  /* 11687929 pop esi */
  ESI = (pop32());
  /* 1168792a ret  */
  ESPCHK(0x11687904u, _esp0);
  ESP += 4; return;
L_1168792b:;
  /* 1168792b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1168792d pop esi */
  ESI = (pop32());
  /* 1168792e ret  */
  ESPCHK(0x11687904u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11687940 (193 bytes, 87 insns) */
void f_11687940(void) {
  FTRACE(0x11687940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11687940 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11687942 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11687946 push ebx */
  push32((uint32_t)(EBX));
  /* 11687947 mov ebx, eax */
  EBX = (EAX);
  /* 11687949 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1168794c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11687950 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11687956 je 0x1168796b */
  if (C.zf) goto L_1168796b;
L_11687958:;
  /* 11687958 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1168795a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1168795b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168795d je 0x11687930 */
  if (C.zf) { jmp_ind(0x11687930u); return; }
  /* 1168795f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11687961 je 0x116879b4 */
  if (C.zf) goto L_116879b4;
  /* 11687963 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11687969 jne 0x11687958 */
  if (!C.zf) goto L_11687958;
L_1168796b:;
  /* 1168796b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1168796d push edi */
  push32((uint32_t)(EDI));
  /* 1168796e mov eax, ebx */
  EAX = (EBX);
  /* 11687970 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11687973 push esi */
  push32((uint32_t)(ESI));
  /* 11687974 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11687976:;
  /* 11687976 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11687978 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1168797d mov eax, ecx */
  EAX = (ECX);
  /* 1168797f mov esi, edi */
  ESI = (EDI);
  /* 11687981 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11687983 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11687985 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11687987 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1168798a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1168798d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1168798f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11687991 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11687994 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1168799a jne 0x116879b8 */
  if (!C.zf) goto L_116879b8;
  /* 1168799c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 116879a1 je 0x11687976 */
  if (C.zf) goto L_11687976;
  /* 116879a3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 116879a8 jne 0x116879b2 */
  if (!C.zf) goto L_116879b2;
  /* 116879aa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 116879b0 jne 0x11687976 */
  if (!C.zf) goto L_11687976;
L_116879b2:;
  /* 116879b2 pop esi */
  ESI = (pop32());
  /* 116879b3 pop edi */
  EDI = (pop32());
L_116879b4:;
  /* 116879b4 pop ebx */
  EBX = (pop32());
  /* 116879b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116879b7 ret  */
  ESPCHK(0x11687940u, _esp0);
  ESP += 4; return;
L_116879b8:;
  /* 116879b8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 116879bb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116879bd je 0x116879f5 */
  if (C.zf) goto L_116879f5;
  /* 116879bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116879c1 je 0x116879b2 */
  if (C.zf) goto L_116879b2;
  /* 116879c3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116879c5 je 0x116879ee */
  if (C.zf) goto L_116879ee;
  /* 116879c7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 116879c9 je 0x116879b2 */
  if (C.zf) goto L_116879b2;
  /* 116879cb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 116879ce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116879d0 je 0x116879e7 */
  if (C.zf) goto L_116879e7;
  /* 116879d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116879d4 je 0x116879b2 */
  if (C.zf) goto L_116879b2;
  /* 116879d6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116879d8 je 0x116879e0 */
  if (C.zf) goto L_116879e0;
  /* 116879da test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 116879dc je 0x116879b2 */
  if (C.zf) goto L_116879b2;
  /* 116879de jmp 0x11687976 */
  goto L_11687976;
L_116879e0:;
  /* 116879e0 pop esi */
  ESI = (pop32());
  /* 116879e1 pop edi */
  EDI = (pop32());
  /* 116879e2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 116879e5 pop ebx */
  EBX = (pop32());
  /* 116879e6 ret  */
  ESPCHK(0x11687940u, _esp0);
  ESP += 4; return;
L_116879e7:;
  /* 116879e7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 116879ea pop esi */
  ESI = (pop32());
  /* 116879eb pop edi */
  EDI = (pop32());
  /* 116879ec pop ebx */
  EBX = (pop32());
  /* 116879ed ret  */
  ESPCHK(0x11687940u, _esp0);
  ESP += 4; return;
L_116879ee:;
  /* 116879ee lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 116879f1 pop esi */
  ESI = (pop32());
  /* 116879f2 pop edi */
  EDI = (pop32());
  /* 116879f3 pop ebx */
  EBX = (pop32());
  /* 116879f4 ret  */
  ESPCHK(0x11687940u, _esp0);
  ESP += 4; return;
L_116879f5:;
  /* 116879f5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 116879f8 pop esi */
  ESI = (pop32());
  /* 116879f9 pop edi */
  EDI = (pop32());
  /* 116879fa pop ebx */
  EBX = (pop32());
  /* 116879fb ret  */
  ESPCHK(0x11687940u, _esp0);
  ESP += 4; return;
  /* 116879fe adc al, 0x80 */
  { uint32_t _a=(AL),_b=(0x80u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
}

/* RtlUnwind @ 0x116879fc (6 bytes, 1 insns) */
void f_116879fc(void) {
  FTRACE(0x116879fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116879fc jmp dword ptr [0x11688014] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11688014)))); return;
}

