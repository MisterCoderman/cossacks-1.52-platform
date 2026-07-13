#include "recomp.h"

/* FUN_100068ba @ 0x11de68ba (781 bytes, 277 insns) */
void f_11de68ba(void) {
  FTRACE(0x11de68bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de68ba push ebp */
  push32((uint32_t)(EBP));
  /* 11de68bb mov ebp, esp */
  EBP = (ESP);
  /* 11de68bd push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11de68bf push 0x11de85c8 */
  push32((uint32_t)(0x11de85c8u));
  /* 11de68c4 push 0x11de5780 */
  push32((uint32_t)(0x11de5780u));
  /* 11de68c9 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11de68cf push eax */
  push32((uint32_t)(EAX));
  /* 11de68d0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11de68d7 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de68da push ebx */
  push32((uint32_t)(EBX));
  /* 11de68db push esi */
  push32((uint32_t)(ESI));
  /* 11de68dc push edi */
  push32((uint32_t)(EDI));
  /* 11de68dd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de68e0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11de68e2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de68e4 jne 0x11de68f4 */
  if (!C.zf) goto L_11de68f4;
  /* 11de68e6 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11de68e9 call 0x11de34b1 */
  push32(0x11de68eeu); f_11de34b1();
  /* 11de68ee pop ecx */
  ECX = (pop32());
  /* 11de68ef jmp 0x11de6bda */
  jmp_ind(0x11de6bdau); return;
L_11de68f4:;
  /* 11de68f4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de68f7 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de68f9 jne 0x11de6907 */
  if (!C.zf) goto L_11de6907;
  /* 11de68fb push ebx */
  push32((uint32_t)(EBX));
  /* 11de68fc call 0x11de2e06 */
  push32(0x11de6901u); f_11de2e06();
  /* 11de6901 pop ecx */
  ECX = (pop32());
  /* 11de6902 jmp 0x11de6bd8 */
  jmp_ind(0x11de6bd8u); return;
L_11de6907:;
  /* 11de6907 mov eax, dword ptr [0x11dec4ac] */
  EAX = (r32((uint32_t)(0x11dec4ac)));
  /* 11de690c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de690f jne 0x11de6a4e */
  if (!C.zf) goto L_11de6a4e;
L_11de6915:;
  /* 11de6915 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11de6918 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de691b ja 0x11de6a12 */
  if ((!C.cf&&!C.zf)) goto L_11de6a12;
  /* 11de6921 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de6923 call 0x11de2d90 */
  push32(0x11de6928u); f_11de2d90();
  /* 11de6928 pop ecx */
  ECX = (pop32());
  /* 11de6929 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11de692c push ebx */
  push32((uint32_t)(EBX));
  /* 11de692d call 0x11de42b7 */
  push32(0x11de6932u); f_11de42b7();
  /* 11de6932 pop ecx */
  ECX = (pop32());
  /* 11de6933 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11de6936 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6938 je 0x11de69e2 */
  if (C.zf) goto L_11de69e2;
  /* 11de693e cmp esi, dword ptr [0x11dec26c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11dec26c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6944 ja 0x11de6992 */
  if ((!C.cf&&!C.zf)) goto L_11de6992;
  /* 11de6946 push esi */
  push32((uint32_t)(ESI));
  /* 11de6947 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6948 push eax */
  push32((uint32_t)(EAX));
  /* 11de6949 call 0x11de4ac0 */
  push32(0x11de694eu); f_11de4ac0();
  /* 11de694e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6951 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de6953 je 0x11de695a */
  if (C.zf) goto L_11de695a;
  /* 11de6955 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11de6958 jmp 0x11de6992 */
  goto L_11de6992;
L_11de695a:;
  /* 11de695a push esi */
  push32((uint32_t)(ESI));
  /* 11de695b call 0x11de460b */
  push32(0x11de6960u); f_11de460b();
  /* 11de6960 pop ecx */
  ECX = (pop32());
  /* 11de6961 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11de6964 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6966 je 0x11de6992 */
  if (C.zf) goto L_11de6992;
  /* 11de6968 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11de696b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11de696c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11de696f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6971 jb 0x11de6975 */
  if (C.cf) goto L_11de6975;
  /* 11de6973 mov eax, esi */
  EAX = (ESI);
L_11de6975:;
  /* 11de6975 push eax */
  push32((uint32_t)(EAX));
  /* 11de6976 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6977 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11de697a call 0x11de3b50 */
  push32(0x11de697fu); f_11de3b50();
  /* 11de697f push ebx */
  push32((uint32_t)(EBX));
  /* 11de6980 call 0x11de42b7 */
  push32(0x11de6985u); f_11de42b7();
  /* 11de6985 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11de6988 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6989 push eax */
  push32((uint32_t)(EAX));
  /* 11de698a call 0x11de42e2 */
  push32(0x11de698fu); f_11de42e2();
  /* 11de698f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de6992:;
  /* 11de6992 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6995 jne 0x11de69e2 */
  if (!C.zf) goto L_11de69e2;
  /* 11de6997 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6999 jne 0x11de69a1 */
  if (!C.zf) goto L_11de69a1;
  /* 11de699b push 1 */
  push32((uint32_t)(0x1u));
  /* 11de699d pop esi */
  ESI = (pop32());
  /* 11de699e mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11de69a1:;
  /* 11de69a1 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de69a4 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11de69a7 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11de69aa push esi */
  push32((uint32_t)(ESI));
  /* 11de69ab push edi */
  push32((uint32_t)(EDI));
  /* 11de69ac push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de69b2 call dword ptr [0x11de8054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8054))), 0x11de69b8u);
  /* 11de69b8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11de69bb cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de69bd je 0x11de69e2 */
  if (C.zf) goto L_11de69e2;
  /* 11de69bf mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11de69c2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11de69c3 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11de69c6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de69c8 jb 0x11de69cc */
  if (C.cf) goto L_11de69cc;
  /* 11de69ca mov eax, esi */
  EAX = (ESI);
L_11de69cc:;
  /* 11de69cc push eax */
  push32((uint32_t)(EAX));
  /* 11de69cd push ebx */
  push32((uint32_t)(EBX));
  /* 11de69ce push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11de69d1 call 0x11de3b50 */
  push32(0x11de69d6u); f_11de3b50();
  /* 11de69d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11de69d7 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11de69da call 0x11de42e2 */
  push32(0x11de69dfu); f_11de42e2();
  /* 11de69df add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de69e2:;
  /* 11de69e2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de69e6 call 0x11de6a45 */
  push32(0x11de69ebu); f_11de6a45();
  /* 11de69eb cmp dword ptr [ebp - 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de69ee jne 0x11de6a12 */
  if (!C.zf) goto L_11de6a12;
  /* 11de69f0 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de69f2 jne 0x11de69f7 */
  if (!C.zf) goto L_11de69f7;
  /* 11de69f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de69f6 pop esi */
  ESI = (pop32());
L_11de69f7:;
  /* 11de69f7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de69fa and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11de69fd mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11de6a00 push esi */
  push32((uint32_t)(ESI));
  /* 11de6a01 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6a02 push edi */
  push32((uint32_t)(EDI));
  /* 11de6a03 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de6a09 call dword ptr [0x11de8038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8038))), 0x11de6a0fu);
  /* 11de6a0f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11de6a12:;
  /* 11de6a12 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11de6a15 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6a17 jne 0x11de6bda */
  if (!C.zf) { jmp_ind(0x11de6bdau); return; }
  /* 11de6a1d cmp dword ptr [0x11dec194], edi */
  { uint32_t _a=(r32((uint32_t)(0x11dec194))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6a23 je 0x11de6bda */
  if (C.zf) { jmp_ind(0x11de6bdau); return; }
  /* 11de6a29 push esi */
  push32((uint32_t)(ESI));
  /* 11de6a2a call 0x11de560e */
  push32(0x11de6a2fu); f_11de560e();
  /* 11de6a2f pop ecx */
  ECX = (pop32());
  /* 11de6a30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de6a32 jne 0x11de6915 */
  if (!C.zf) goto L_11de6915;
  /* 11de6a38 jmp 0x11de6bd8 */
  jmp_ind(0x11de6bd8u); return;
  /* 11de6a3d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de6a40 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de6a43 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11de6a45 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de6a47 call 0x11de2df1 */
  push32(0x11de6a4cu); f_11de2df1();
  /* 11de6a4c pop ecx */
  ECX = (pop32());
  /* 11de6a4d ret  */
  ESPCHK(0x11de68bau, _esp0);
  ESP += 4; return;
L_11de6a4e:;
  /* 11de6a4e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6a51 jne 0x11de6b9e */
  if (!C.zf) goto L_11de6b9e;
  /* 11de6a57 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6a5a ja 0x11de6a6e */
  if ((!C.cf&&!C.zf)) goto L_11de6a6e;
  /* 11de6a5c cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6a5e jbe 0x11de6a68 */
  if ((C.cf||C.zf)) goto L_11de6a68;
  /* 11de6a60 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6a63 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11de6a66 jmp 0x11de6a6b */
  goto L_11de6a6b;
L_11de6a68:;
  /* 11de6a68 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11de6a6a pop esi */
  ESI = (pop32());
L_11de6a6b:;
  /* 11de6a6b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11de6a6e:;
  /* 11de6a6e mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11de6a71 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6a74 ja 0x11de6b6d */
  if ((!C.cf&&!C.zf)) goto L_11de6b6d;
  /* 11de6a7a push 9 */
  push32((uint32_t)(0x9u));
  /* 11de6a7c call 0x11de2d90 */
  push32(0x11de6a81u); f_11de2d90();
  /* 11de6a81 pop ecx */
  ECX = (pop32());
  /* 11de6a82 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11de6a89 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 11de6a8c push eax */
  push32((uint32_t)(EAX));
  /* 11de6a8d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11de6a90 push eax */
  push32((uint32_t)(EAX));
  /* 11de6a91 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6a92 call 0x11de5012 */
  push32(0x11de6a97u); f_11de5012();
  /* 11de6a97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6a9a mov edi, eax */
  EDI = (EAX);
  /* 11de6a9c mov dword ptr [ebp - 0x30], edi */
  w32((uint32_t)(EBP + -0x30), (EDI));
  /* 11de6a9f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11de6aa1 je 0x11de6b51 */
  if (C.zf) goto L_11de6b51;
  /* 11de6aa7 cmp esi, dword ptr [0x11deb714] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11deb714))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6aad jae 0x11de6b0b */
  if (!C.cf) goto L_11de6b0b;
  /* 11de6aaf mov ebx, esi */
  EBX = (ESI);
  /* 11de6ab1 shr ebx, 4 */
  EBX = (sh_shr((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11de6ab4 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6ab5 push edi */
  push32((uint32_t)(EDI));
  /* 11de6ab6 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11de6ab9 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11de6abc call 0x11de53da */
  push32(0x11de6ac1u); f_11de53da();
  /* 11de6ac1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6ac4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de6ac6 je 0x11de6ad0 */
  if (C.zf) goto L_11de6ad0;
  /* 11de6ac8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de6acb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11de6ace jmp 0x11de6b08 */
  goto L_11de6b08;
L_11de6ad0:;
  /* 11de6ad0 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6ad1 call 0x11de50ae */
  push32(0x11de6ad6u); f_11de50ae();
  /* 11de6ad6 pop ecx */
  ECX = (pop32());
  /* 11de6ad7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11de6ada test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de6adc je 0x11de6b08 */
  if (C.zf) goto L_11de6b08;
  /* 11de6ade movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11de6ae1 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11de6ae4 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11de6ae7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6ae9 jb 0x11de6aed */
  if (C.cf) goto L_11de6aed;
  /* 11de6aeb mov eax, esi */
  EAX = (ESI);
L_11de6aed:;
  /* 11de6aed push eax */
  push32((uint32_t)(EAX));
  /* 11de6aee push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de6af1 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11de6af4 call 0x11de3b50 */
  push32(0x11de6af9u); f_11de3b50();
  /* 11de6af9 push edi */
  push32((uint32_t)(EDI));
  /* 11de6afa push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11de6afd push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11de6b00 call 0x11de5069 */
  push32(0x11de6b05u); f_11de5069();
  /* 11de6b05 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de6b08:;
  /* 11de6b08 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11de6b0b:;
  /* 11de6b0b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6b0f jne 0x11de6b64 */
  if (!C.zf) goto L_11de6b64;
  /* 11de6b11 push esi */
  push32((uint32_t)(ESI));
  /* 11de6b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de6b14 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de6b1a call dword ptr [0x11de8054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8054))), 0x11de6b20u);
  /* 11de6b20 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11de6b23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de6b25 je 0x11de6b64 */
  if (C.zf) goto L_11de6b64;
  /* 11de6b27 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11de6b2a shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11de6b2d mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11de6b30 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6b32 jb 0x11de6b36 */
  if (C.cf) goto L_11de6b36;
  /* 11de6b34 mov eax, esi */
  EAX = (ESI);
L_11de6b36:;
  /* 11de6b36 push eax */
  push32((uint32_t)(EAX));
  /* 11de6b37 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6b38 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11de6b3b call 0x11de3b50 */
  push32(0x11de6b40u); f_11de3b50();
  /* 11de6b40 push edi */
  push32((uint32_t)(EDI));
  /* 11de6b41 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11de6b44 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11de6b47 call 0x11de5069 */
  push32(0x11de6b4cu); f_11de5069();
  /* 11de6b4c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6b4f jmp 0x11de6b64 */
  goto L_11de6b64;
L_11de6b51:;
  /* 11de6b51 push esi */
  push32((uint32_t)(ESI));
  /* 11de6b52 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de6b55 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de6b5b call dword ptr [0x11de8038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8038))), 0x11de6b61u);
  /* 11de6b61 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11de6b64:;
  /* 11de6b64 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11de6b68 call 0x11de6b93 */
  push32(0x11de6b6du); f_11de6b93();
L_11de6b6d:;
  /* 11de6b6d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11de6b70 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6b72 jne 0x11de6bda */
  if (!C.zf) { jmp_ind(0x11de6bdau); return; }
  /* 11de6b74 cmp dword ptr [0x11dec194], edi */
  { uint32_t _a=(r32((uint32_t)(0x11dec194))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6b7a je 0x11de6bda */
  if (C.zf) { jmp_ind(0x11de6bdau); return; }
  /* 11de6b7c push esi */
  push32((uint32_t)(ESI));
  /* 11de6b7d call 0x11de560e */
  push32(0x11de6b82u); f_11de560e();
  /* 11de6b82 pop ecx */
  ECX = (pop32());
  /* 11de6b83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de6b85 jne 0x11de6a6e */
  if (!C.zf) goto L_11de6a6e;
  /* 11de6b8b jmp 0x11de6bd8 */
  jmp_ind(0x11de6bd8u); return;
  /* 11de6b8d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de6b90 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de6b93 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de6b95 call 0x11de2df1 */
  push32(0x11de6b9au); f_11de2df1();
  /* 11de6b9a pop ecx */
  ECX = (pop32());
  /* 11de6b9b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11de6b9d ret  */
  ESPCHK(0x11de68bau, _esp0);
  ESP += 4; return;
L_11de6b9e:;
  /* 11de6b9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de6ba0 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6ba3 ja 0x11de6bc1 */
  if ((!C.cf&&!C.zf)) goto L_11de6bc1;
  /* 11de6ba5 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6ba7 jne 0x11de6bac */
  if (!C.zf) goto L_11de6bac;
  /* 11de6ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11de6bab pop esi */
  ESI = (pop32());
L_11de6bac:;
  /* 11de6bac add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6baf and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11de6bb2 push esi */
  push32((uint32_t)(ESI));
  /* 11de6bb3 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6bb4 push edi */
  push32((uint32_t)(EDI));
  /* 11de6bb5 push dword ptr [0x11dec4a8] */
  push32((uint32_t)(r32((uint32_t)(0x11dec4a8))));
  /* 11de6bbb call dword ptr [0x11de8038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11de8038))), 0x11de6bc1u);
L_11de6bc1:;
  /* 11de6bc1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6bc3 jne 0x11de6bda */
  if (!C.zf) { jmp_ind(0x11de6bdau); return; }
}

/* FUN_10006a45 @ 0x11de6a45 (9 bytes, 4 insns) */
void f_11de6a45(void) {
  FTRACE(0x11de6a45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de6a45 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de6a47 call 0x11de2df1 */
  push32(0x11de6a4cu); f_11de2df1();
  /* 11de6a4c pop ecx */
  ECX = (pop32());
  /* 11de6a4d ret  */
  ESPCHK(0x11de6a45u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b93 @ 0x11de6b93 (11 bytes, 5 insns) */
void f_11de6b93(void) {
  FTRACE(0x11de6b93u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de6b93 push 9 */
  push32((uint32_t)(0x9u));
  /* 11de6b95 call 0x11de2df1 */
  push32(0x11de6b9au); f_11de2df1();
  /* 11de6b9a pop ecx */
  ECX = (pop32());
  /* 11de6b9b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11de6b9d ret  */
  ESPCHK(0x11de6b93u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be9 @ 0x11de6be9 (151 bytes, 62 insns) */
void f_11de6be9(void) {
  FTRACE(0x11de6be9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de6be9 push ebp */
  push32((uint32_t)(EBP));
  /* 11de6bea mov ebp, esp */
  EBP = (ESP);
  /* 11de6bec cmp dword ptr [0x11dec28c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dec28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6bf3 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6bf4 push esi */
  push32((uint32_t)(ESI));
  /* 11de6bf5 jne 0x11de6c06 */
  if (!C.zf) goto L_11de6c06;
  /* 11de6bf7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11de6bfa push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11de6bfd call 0x11de40c0 */
  push32(0x11de6c02u); f_11de40c0();
  /* 11de6c02 pop ecx */
  ECX = (pop32());
  /* 11de6c03 pop ecx */
  ECX = (pop32());
  /* 11de6c04 jmp 0x11de6c7c */
  goto L_11de6c7c;
L_11de6c06:;
  /* 11de6c06 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11de6c08 call 0x11de2d90 */
  push32(0x11de6c0du); f_11de2d90();
  /* 11de6c0d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11de6c10 pop ecx */
  ECX = (pop32());
L_11de6c11:;
  /* 11de6c11 movzx bx, byte ptr [esi] */
  BX = ((uint32_t)(r8((uint32_t)(ESI))));
  /* 11de6c15 test bx, bx */
  { uint32_t _r=(BX)&(BX); fl_logic(_r,16); }
  /* 11de6c18 je 0x11de6c64 */
  if (C.zf) goto L_11de6c64;
  /* 11de6c1a movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11de6c1d test byte ptr [eax + 0x11dec3a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11dec3a1)))&(0x4u); fl_logic(_r,8); }
  /* 11de6c24 je 0x11de6c40 */
  if (C.zf) goto L_11de6c40;
  /* 11de6c26 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11de6c29 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de6c2a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11de6c2c je 0x11de6c4b */
  if (C.zf) goto L_11de6c4b;
  /* 11de6c2e movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11de6c31 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11de6c34 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11de6c37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11de6c39 cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6c3c je 0x11de6c57 */
  if (C.zf) goto L_11de6c57;
  /* 11de6c3e jmp 0x11de6c48 */
  goto L_11de6c48;
L_11de6c40:;
  /* 11de6c40 movzx eax, bx */
  EAX = ((uint32_t)(BX));
  /* 11de6c43 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6c46 je 0x11de6c64 */
  if (C.zf) goto L_11de6c64;
L_11de6c48:;
  /* 11de6c48 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de6c49 jmp 0x11de6c11 */
  goto L_11de6c11;
L_11de6c4b:;
  /* 11de6c4b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11de6c4d call 0x11de2df1 */
  push32(0x11de6c52u); f_11de2df1();
  /* 11de6c52 pop ecx */
  ECX = (pop32());
  /* 11de6c53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de6c55 jmp 0x11de6c7c */
  goto L_11de6c7c;
L_11de6c57:;
  /* 11de6c57 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11de6c59 call 0x11de2df1 */
  push32(0x11de6c5eu); f_11de2df1();
  /* 11de6c5e pop ecx */
  ECX = (pop32());
  /* 11de6c5f lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
  /* 11de6c62 jmp 0x11de6c7c */
  goto L_11de6c7c;
L_11de6c64:;
  /* 11de6c64 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11de6c66 call 0x11de2df1 */
  push32(0x11de6c6bu); f_11de2df1();
  /* 11de6c6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11de6c6e pop ecx */
  ECX = (pop32());
  /* 11de6c6f movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11de6c72 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de6c74 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11de6c76 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de6c78 not eax */
  EAX = (~(EAX));
  /* 11de6c7a and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11de6c7c:;
  /* 11de6c7c pop esi */
  ESI = (pop32());
  /* 11de6c7d pop ebx */
  EBX = (pop32());
  /* 11de6c7e pop ebp */
  EBP = (pop32());
  /* 11de6c7f ret  */
  ESPCHK(0x11de6be9u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c80 @ 0x11de6c80 (43 bytes, 23 insns) */
void f_11de6c80(void) {
  FTRACE(0x11de6c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de6c80 push esi */
  push32((uint32_t)(ESI));
  /* 11de6c81 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11de6c85 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11de6c87 je 0x11de6ca7 */
  if (C.zf) goto L_11de6ca7;
  /* 11de6c89 push esi */
  push32((uint32_t)(ESI));
  /* 11de6c8a call 0x11de36e0 */
  push32(0x11de6c8fu); f_11de36e0();
  /* 11de6c8f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11de6c90 push eax */
  push32((uint32_t)(EAX));
  /* 11de6c91 call 0x11de34b1 */
  push32(0x11de6c96u); f_11de34b1();
  /* 11de6c96 pop ecx */
  ECX = (pop32());
  /* 11de6c97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de6c99 pop ecx */
  ECX = (pop32());
  /* 11de6c9a je 0x11de6ca7 */
  if (C.zf) goto L_11de6ca7;
  /* 11de6c9c push esi */
  push32((uint32_t)(ESI));
  /* 11de6c9d push eax */
  push32((uint32_t)(EAX));
  /* 11de6c9e call 0x11de35f0 */
  push32(0x11de6ca3u); f_11de35f0();
  /* 11de6ca3 pop ecx */
  ECX = (pop32());
  /* 11de6ca4 pop ecx */
  ECX = (pop32());
  /* 11de6ca5 pop esi */
  ESI = (pop32());
  /* 11de6ca6 ret  */
  ESPCHK(0x11de6c80u, _esp0);
  ESP += 4; return;
L_11de6ca7:;
  /* 11de6ca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de6ca9 pop esi */
  ESI = (pop32());
  /* 11de6caa ret  */
  ESPCHK(0x11de6c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cb0 @ 0x11de6cb0 (208 bytes, 85 insns) */
void f_11de6cb0(void) {
  FTRACE(0x11de6cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de6cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11de6cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11de6cb3 push edi */
  push32((uint32_t)(EDI));
  /* 11de6cb4 push esi */
  push32((uint32_t)(ESI));
  /* 11de6cb5 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6cb6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de6cb9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11de6cbc lea eax, [0x11dec198] */
  EAX = ((uint32_t)(0x11dec198));
  /* 11de6cc2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6cc6 jne 0x11de6d03 */
  if (!C.zf) goto L_11de6d03;
  /* 11de6cc8 mov al, 0xff */
  AL = (0xffu);
  /* 11de6cca mov edi, edi */
  EDI = (EDI);
L_11de6ccc:;
  /* 11de6ccc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11de6cce je 0x11de6cfe */
  if (C.zf) goto L_11de6cfe;
  /* 11de6cd0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de6cd2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de6cd3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11de6cd5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de6cd6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de6cd8 je 0x11de6ccc */
  if (C.zf) goto L_11de6ccc;
  /* 11de6cda sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11de6cdc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de6cde sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11de6ce0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11de6ce3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11de6ce5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11de6ce7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11de6ce9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11de6ceb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de6ced sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11de6cef and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11de6cf2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11de6cf4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11de6cf6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de6cf8 je 0x11de6ccc */
  if (C.zf) goto L_11de6ccc;
  /* 11de6cfa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11de6cfc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11de6cfe:;
  /* 11de6cfe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11de6d01 jmp 0x11de6d7b */
  goto L_11de6d7b;
L_11de6d03:;
  /* 11de6d03 lock inc dword ptr [0x11dec250] */
  x86_unimpl("lock inc @ 0x11de6d03");
  /* 11de6d0a cmp dword ptr [0x11dec24c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dec24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6d11 jg 0x11de6d17 */
  if ((!C.zf&&C.sf==C.of)) goto L_11de6d17;
  /* 11de6d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de6d15 jmp 0x11de6d2c */
  goto L_11de6d2c;
L_11de6d17:;
  /* 11de6d17 lock dec dword ptr [0x11dec250] */
  x86_unimpl("lock dec @ 0x11de6d17");
  /* 11de6d1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11de6d20 call 0x11de2d90 */
  push32(0x11de6d25u); f_11de2d90();
  /* 11de6d25 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11de6d2c:;
  /* 11de6d2c mov eax, 0xff */
  EAX = (0xffu);
  /* 11de6d31 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de6d33 nop  */
  /* nop */
L_11de6d34:;
  /* 11de6d34 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11de6d36 je 0x11de6d5f */
  if (C.zf) goto L_11de6d5f;
  /* 11de6d38 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de6d3a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de6d3b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11de6d3d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de6d3e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de6d40 je 0x11de6d34 */
  if (C.zf) goto L_11de6d34;
  /* 11de6d42 push eax */
  push32((uint32_t)(EAX));
  /* 11de6d43 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6d44 call 0x11de6f75 */
  push32(0x11de6d49u); f_11de6f75();
  /* 11de6d49 mov ebx, eax */
  EBX = (EAX);
  /* 11de6d4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6d4e call 0x11de6f75 */
  push32(0x11de6d53u); f_11de6f75();
  /* 11de6d53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6d56 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de6d58 je 0x11de6d34 */
  if (C.zf) goto L_11de6d34;
  /* 11de6d5a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11de6d5c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11de6d5f:;
  /* 11de6d5f mov ebx, eax */
  EBX = (EAX);
  /* 11de6d61 pop eax */
  EAX = (pop32());
  /* 11de6d62 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de6d64 jne 0x11de6d6f */
  if (!C.zf) goto L_11de6d6f;
  /* 11de6d66 lock dec dword ptr [0x11dec250] */
  x86_unimpl("lock dec @ 0x11de6d66");
  /* 11de6d6d jmp 0x11de6d79 */
  goto L_11de6d79;
L_11de6d6f:;
  /* 11de6d6f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11de6d71 call 0x11de2df1 */
  push32(0x11de6d76u); f_11de2df1();
  /* 11de6d76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11de6d79:;
  /* 11de6d79 mov eax, ebx */
  EAX = (EBX);
L_11de6d7b:;
  /* 11de6d7b pop ebx */
  EBX = (pop32());
  /* 11de6d7c pop esi */
  ESI = (pop32());
  /* 11de6d7d pop edi */
  EDI = (pop32());
  /* 11de6d7e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de6d7f ret  */
  ESPCHK(0x11de6cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d80 @ 0x11de6d80 (257 bytes, 103 insns) */
void f_11de6d80(void) {
  FTRACE(0x11de6d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de6d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11de6d81 mov ebp, esp */
  EBP = (ESP);
  /* 11de6d83 push edi */
  push32((uint32_t)(EDI));
  /* 11de6d84 push esi */
  push32((uint32_t)(ESI));
  /* 11de6d85 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6d86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11de6d89 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11de6d8b je 0x11de6e7a */
  if (C.zf) goto L_11de6e7a;
  /* 11de6d91 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11de6d94 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11de6d97 lea eax, [0x11dec198] */
  EAX = ((uint32_t)(0x11dec198));
  /* 11de6d9d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6da1 jne 0x11de6df1 */
  if (!C.zf) goto L_11de6df1;
  /* 11de6da3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11de6da5 mov bl, 0x5a */
  BL = (0x5au);
  /* 11de6da7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11de6da9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11de6dac:;
  /* 11de6dac mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11de6dae or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11de6db0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11de6db2 je 0x11de6dd5 */
  if (C.zf) goto L_11de6dd5;
  /* 11de6db4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11de6db6 je 0x11de6dd5 */
  if (C.zf) goto L_11de6dd5;
  /* 11de6db8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de6db9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de6dba cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de6dbc jb 0x11de6dc4 */
  if (C.cf) goto L_11de6dc4;
  /* 11de6dbe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de6dc0 ja 0x11de6dc4 */
  if ((!C.cf&&!C.zf)) goto L_11de6dc4;
  /* 11de6dc2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11de6dc4:;
  /* 11de6dc4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de6dc6 jb 0x11de6dce */
  if (C.cf) goto L_11de6dce;
  /* 11de6dc8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de6dca ja 0x11de6dce */
  if ((!C.cf&&!C.zf)) goto L_11de6dce;
  /* 11de6dcc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11de6dce:;
  /* 11de6dce cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de6dd0 jne 0x11de6ddf */
  if (!C.zf) goto L_11de6ddf;
  /* 11de6dd2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11de6dd3 jne 0x11de6dac */
  if (!C.zf) goto L_11de6dac;
L_11de6dd5:;
  /* 11de6dd5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11de6dd7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11de6dd9 je 0x11de6e7a */
  if (C.zf) goto L_11de6e7a;
L_11de6ddf:;
  /* 11de6ddf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11de6de4 jb 0x11de6e7a */
  if (C.cf) goto L_11de6e7a;
  /* 11de6dea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11de6dec jmp 0x11de6e7a */
  goto L_11de6e7a;
L_11de6df1:;
  /* 11de6df1 lock inc dword ptr [0x11dec250] */
  x86_unimpl("lock inc @ 0x11de6df1");
  /* 11de6df8 cmp dword ptr [0x11dec24c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dec24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6dff jg 0x11de6e05 */
  if ((!C.zf&&C.sf==C.of)) goto L_11de6e05;
  /* 11de6e01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de6e03 jmp 0x11de6e1e */
  goto L_11de6e1e;
L_11de6e05:;
  /* 11de6e05 lock dec dword ptr [0x11dec250] */
  x86_unimpl("lock dec @ 0x11de6e05");
  /* 11de6e0c mov ebx, ecx */
  EBX = (ECX);
  /* 11de6e0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11de6e10 call 0x11de2d90 */
  push32(0x11de6e15u); f_11de2d90();
  /* 11de6e15 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11de6e1c mov ecx, ebx */
  ECX = (EBX);
L_11de6e1e:;
  /* 11de6e1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de6e20 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de6e22 mov edi, edi */
  EDI = (EDI);
L_11de6e24:;
  /* 11de6e24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11de6e26 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de6e28 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11de6e2a je 0x11de6e4f */
  if (C.zf) goto L_11de6e4f;
  /* 11de6e2c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11de6e2e je 0x11de6e4f */
  if (C.zf) goto L_11de6e4f;
  /* 11de6e30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11de6e31 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11de6e32 push ecx */
  push32((uint32_t)(ECX));
  /* 11de6e33 push eax */
  push32((uint32_t)(EAX));
  /* 11de6e34 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6e35 call 0x11de6f75 */
  push32(0x11de6e3au); f_11de6f75();
  /* 11de6e3a mov ebx, eax */
  EBX = (EAX);
  /* 11de6e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6e3f call 0x11de6f75 */
  push32(0x11de6e44u); f_11de6f75();
  /* 11de6e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6e47 pop ecx */
  ECX = (pop32());
  /* 11de6e48 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6e4a jne 0x11de6e55 */
  if (!C.zf) goto L_11de6e55;
  /* 11de6e4c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11de6e4d jne 0x11de6e24 */
  if (!C.zf) goto L_11de6e24;
L_11de6e4f:;
  /* 11de6e4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11de6e51 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6e53 je 0x11de6e5e */
  if (C.zf) goto L_11de6e5e;
L_11de6e55:;
  /* 11de6e55 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11de6e5a jb 0x11de6e5e */
  if (C.cf) goto L_11de6e5e;
  /* 11de6e5c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11de6e5e:;
  /* 11de6e5e pop eax */
  EAX = (pop32());
  /* 11de6e5f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11de6e61 jne 0x11de6e6c */
  if (!C.zf) goto L_11de6e6c;
  /* 11de6e63 lock dec dword ptr [0x11dec250] */
  x86_unimpl("lock dec @ 0x11de6e63");
  /* 11de6e6a jmp 0x11de6e7a */
  goto L_11de6e7a;
L_11de6e6c:;
  /* 11de6e6c mov ebx, ecx */
  EBX = (ECX);
  /* 11de6e6e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11de6e70 call 0x11de2df1 */
  push32(0x11de6e75u); f_11de2df1();
  /* 11de6e75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6e78 mov ecx, ebx */
  ECX = (EBX);
L_11de6e7a:;
  /* 11de6e7a mov eax, ecx */
  EAX = (ECX);
  /* 11de6e7c pop ebx */
  EBX = (pop32());
  /* 11de6e7d pop esi */
  ESI = (pop32());
  /* 11de6e7e pop edi */
  EDI = (pop32());
  /* 11de6e7f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de6e80 ret  */
  ESPCHK(0x11de6d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f75 @ 0x11de6f75 (203 bytes, 78 insns) */
void f_11de6f75(void) {
  FTRACE(0x11de6f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de6f75 push ebp */
  push32((uint32_t)(EBP));
  /* 11de6f76 mov ebp, esp */
  EBP = (ESP);
  /* 11de6f78 push ecx */
  push32((uint32_t)(ECX));
  /* 11de6f79 cmp dword ptr [0x11dec1a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11dec1a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6f80 push ebx */
  push32((uint32_t)(EBX));
  /* 11de6f81 push esi */
  push32((uint32_t)(ESI));
  /* 11de6f82 push edi */
  push32((uint32_t)(EDI));
  /* 11de6f83 jne 0x11de6fa2 */
  if (!C.zf) goto L_11de6fa2;
  /* 11de6f85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de6f88 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6f8b jl 0x11de703b */
  if ((C.sf!=C.of)) goto L_11de703b;
  /* 11de6f91 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6f94 jg 0x11de703b */
  if ((!C.zf&&C.sf==C.of)) goto L_11de703b;
  /* 11de6f9a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11de6f9d jmp 0x11de703b */
  goto L_11de703b;
L_11de6fa2:;
  /* 11de6fa2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11de6fa5 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11de6faa push 1 */
  push32((uint32_t)(0x1u));
  /* 11de6fac cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6fae pop esi */
  ESI = (pop32());
  /* 11de6faf jge 0x11de6fd6 */
  if ((C.sf==C.of)) goto L_11de6fd6;
  /* 11de6fb1 cmp dword ptr [0x11debaa4], esi */
  { uint32_t _a=(r32((uint32_t)(0x11debaa4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de6fb7 jle 0x11de6fc4 */
  if ((C.zf||C.sf!=C.of)) goto L_11de6fc4;
  /* 11de6fb9 push esi */
  push32((uint32_t)(ESI));
  /* 11de6fba push ebx */
  push32((uint32_t)(EBX));
  /* 11de6fbb call 0x11de5ecd */
  push32(0x11de6fc0u); f_11de5ecd();
  /* 11de6fc0 pop ecx */
  ECX = (pop32());
  /* 11de6fc1 pop ecx */
  ECX = (pop32());
  /* 11de6fc2 jmp 0x11de6fce */
  goto L_11de6fce;
L_11de6fc4:;
  /* 11de6fc4 mov eax, dword ptr [0x11deb898] */
  EAX = (r32((uint32_t)(0x11deb898)));
  /* 11de6fc9 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11de6fcc and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11de6fce:;
  /* 11de6fce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de6fd0 jne 0x11de6fd6 */
  if (!C.zf) goto L_11de6fd6;
L_11de6fd2:;
  /* 11de6fd2 mov eax, ebx */
  EAX = (EBX);
  /* 11de6fd4 jmp 0x11de703b */
  goto L_11de703b;
L_11de6fd6:;
  /* 11de6fd6 mov edx, dword ptr [0x11deb898] */
  EDX = (r32((uint32_t)(0x11deb898)));
  /* 11de6fdc mov eax, ebx */
  EAX = (EBX);
  /* 11de6fde sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11de6fe1 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11de6fe4 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11de6fe9 je 0x11de6ffa */
  if (C.zf) goto L_11de6ffa;
  /* 11de6feb and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11de6fef push 2 */
  push32((uint32_t)(0x2u));
  /* 11de6ff1 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11de6ff4 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11de6ff7 pop eax */
  EAX = (pop32());
  /* 11de6ff8 jmp 0x11de7003 */
  goto L_11de7003;
L_11de6ffa:;
  /* 11de6ffa and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11de6ffe mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11de7001 mov eax, esi */
  EAX = (ESI);
L_11de7003:;
  /* 11de7003 push esi */
  push32((uint32_t)(ESI));
  /* 11de7004 push 0 */
  push32((uint32_t)(0x0u));
  /* 11de7006 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11de7009 push 3 */
  push32((uint32_t)(0x3u));
  /* 11de700b push ecx */
  push32((uint32_t)(ECX));
  /* 11de700c push eax */
  push32((uint32_t)(EAX));
  /* 11de700d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11de7010 push eax */
  push32((uint32_t)(EAX));
  /* 11de7011 push edi */
  push32((uint32_t)(EDI));
  /* 11de7012 push dword ptr [0x11dec1a0] */
  push32((uint32_t)(r32((uint32_t)(0x11dec1a0))));
  /* 11de7018 call 0x11de59f1 */
  push32(0x11de701du); f_11de59f1();
  /* 11de701d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11de7020 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11de7022 je 0x11de6fd2 */
  if (C.zf) goto L_11de6fd2;
  /* 11de7024 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11de7026 jne 0x11de702e */
  if (!C.zf) goto L_11de702e;
  /* 11de7028 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11de702c jmp 0x11de703b */
  goto L_11de703b;
L_11de702e:;
  /* 11de702e movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11de7032 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11de7036 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11de7039 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11de703b:;
  /* 11de703b pop edi */
  EDI = (pop32());
  /* 11de703c pop esi */
  ESI = (pop32());
  /* 11de703d pop ebx */
  EBX = (pop32());
  /* 11de703e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11de703f ret  */
  ESPCHK(0x11de6f75u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11de7040 (6 bytes, 1 insns) */
void f_11de7040(void) {
  FTRACE(0x11de7040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11de7040 jmp dword ptr [0x11de8034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11de8034)))); return;
}

