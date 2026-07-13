#include "recomp.h"

/* FUN_1001a8f0 @ 0x11a9a8f0 (257 bytes, 103 insns) */
void f_11a9a8f0(void) {
  FTRACE(0x11a9a8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9a8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9a8f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a9a8f3 push edi */
  push32((uint32_t)(EDI));
  /* 11a9a8f4 push esi */
  push32((uint32_t)(ESI));
  /* 11a9a8f5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a9a8f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a8f9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9a8fb je 0x11a9a9ea */
  if (C.zf) goto L_11a9a9ea;
  /* 11a9a901 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9a907 lea eax, [0x11aba2c0] */
  EAX = ((uint32_t)(0x11aba2c0));
  /* 11a9a90d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a911 jne 0x11a9a961 */
  if (!C.zf) goto L_11a9a961;
  /* 11a9a913 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11a9a915 mov bl, 0x5a */
  BL = (0x5au);
  /* 11a9a917 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11a9a919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a9a91c:;
  /* 11a9a91c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11a9a91e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11a9a920 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11a9a922 je 0x11a9a945 */
  if (C.zf) goto L_11a9a945;
  /* 11a9a924 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a9a926 je 0x11a9a945 */
  if (C.zf) goto L_11a9a945;
  /* 11a9a928 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a9a929 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a9a92a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9a92c jb 0x11a9a934 */
  if (C.cf) goto L_11a9a934;
  /* 11a9a92e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9a930 ja 0x11a9a934 */
  if ((!C.cf&&!C.zf)) goto L_11a9a934;
  /* 11a9a932 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11a9a934:;
  /* 11a9a934 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9a936 jb 0x11a9a93e */
  if (C.cf) goto L_11a9a93e;
  /* 11a9a938 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9a93a ja 0x11a9a93e */
  if ((!C.cf&&!C.zf)) goto L_11a9a93e;
  /* 11a9a93c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11a9a93e:;
  /* 11a9a93e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9a940 jne 0x11a9a94f */
  if (!C.zf) goto L_11a9a94f;
  /* 11a9a942 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a9a943 jne 0x11a9a91c */
  if (!C.zf) goto L_11a9a91c;
L_11a9a945:;
  /* 11a9a945 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9a947 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9a949 je 0x11a9a9ea */
  if (C.zf) goto L_11a9a9ea;
L_11a9a94f:;
  /* 11a9a94f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11a9a954 jb 0x11a9a9ea */
  if (C.cf) goto L_11a9a9ea;
  /* 11a9a95a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a9a95c jmp 0x11a9a9ea */
  goto L_11a9a9ea;
L_11a9a961:;
  /* 11a9a961 lock inc dword ptr [0x11aba44c] */
  x86_unimpl("lock inc @ 0x11a9a961");
  /* 11a9a968 cmp dword ptr [0x11aba43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a96f jg 0x11a9a975 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a9a975;
  /* 11a9a971 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a973 jmp 0x11a9a98e */
  goto L_11a9a98e;
L_11a9a975:;
  /* 11a9a975 lock dec dword ptr [0x11aba44c] */
  x86_unimpl("lock dec @ 0x11a9a975");
  /* 11a9a97c mov ebx, ecx */
  EBX = (ECX);
  /* 11a9a97e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a9a980 call 0x11a8f2d0 */
  push32(0x11a9a985u); f_11a8f2d0();
  /* 11a9a985 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11a9a98c mov ecx, ebx */
  ECX = (EBX);
L_11a9a98e:;
  /* 11a9a98e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a990 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a9a992 mov edi, edi */
  EDI = (EDI);
L_11a9a994:;
  /* 11a9a994 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a9a996 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a998 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11a9a99a je 0x11a9a9bf */
  if (C.zf) goto L_11a9a9bf;
  /* 11a9a99c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a9a99e je 0x11a9a9bf */
  if (C.zf) goto L_11a9a9bf;
  /* 11a9a9a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a9a9a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a9a9a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a9a3 push eax */
  push32((uint32_t)(EAX));
  /* 11a9a9a4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a9a9a5 call 0x11a8e240 */
  push32(0x11a9a9aau); f_11a8e240();
  /* 11a9a9aa mov ebx, eax */
  EBX = (EAX);
  /* 11a9a9ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a9af call 0x11a8e240 */
  push32(0x11a9a9b4u); f_11a8e240();
  /* 11a9a9b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a9b7 pop ecx */
  ECX = (pop32());
  /* 11a9a9b8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a9ba jne 0x11a9a9c5 */
  if (!C.zf) goto L_11a9a9c5;
  /* 11a9a9bc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a9a9bd jne 0x11a9a994 */
  if (!C.zf) goto L_11a9a994;
L_11a9a9bf:;
  /* 11a9a9bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9a9c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a9c3 je 0x11a9a9ce */
  if (C.zf) goto L_11a9a9ce;
L_11a9a9c5:;
  /* 11a9a9c5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11a9a9ca jb 0x11a9a9ce */
  if (C.cf) goto L_11a9a9ce;
  /* 11a9a9cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11a9a9ce:;
  /* 11a9a9ce pop eax */
  EAX = (pop32());
  /* 11a9a9cf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a9d1 jne 0x11a9a9dc */
  if (!C.zf) goto L_11a9a9dc;
  /* 11a9a9d3 lock dec dword ptr [0x11aba44c] */
  x86_unimpl("lock dec @ 0x11a9a9d3");
  /* 11a9a9da jmp 0x11a9a9ea */
  goto L_11a9a9ea;
L_11a9a9dc:;
  /* 11a9a9dc mov ebx, ecx */
  EBX = (ECX);
  /* 11a9a9de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a9a9e0 call 0x11a8f370 */
  push32(0x11a9a9e5u); f_11a8f370();
  /* 11a9a9e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a9e8 mov ecx, ebx */
  ECX = (EBX);
L_11a9a9ea:;
  /* 11a9a9ea mov eax, ecx */
  EAX = (ECX);
  /* 11a9a9ec pop ebx */
  EBX = (pop32());
  /* 11a9a9ed pop esi */
  ESI = (pop32());
  /* 11a9a9ee pop edi */
  EDI = (pop32());
  /* 11a9a9ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a9a9f0 ret  */
  ESPCHK(0x11a9a8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aa00 @ 0x11a9aa00 (255 bytes, 88 insns) */
void f_11a9aa00(void) {
  FTRACE(0x11a9aa00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9aa00 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9aa01 mov ebp, esp */
  EBP = (ESP);
  /* 11a9aa03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11a9aa06:;
  /* 11a9aa06 cmp dword ptr [0x11ab80d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab80d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9aa0d jle 0x11a9aa26 */
  if ((C.zf||C.sf!=C.of)) goto L_11a9aa26;
  /* 11a9aa0f push 8 */
  push32((uint32_t)(0x8u));
  /* 11a9aa11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9aa14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9aa16 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a9aa18 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9aa19 call 0x11a8e0d0 */
  push32(0x11a9aa1eu); f_11a8e0d0();
  /* 11a9aa1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9aa21 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a9aa24 jmp 0x11a9aa3f */
  goto L_11a9aa3f;
L_11a9aa26:;
  /* 11a9aa26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9aa29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9aa2b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a9aa2d mov ecx, dword ptr [0x11ab7ec0] */
  ECX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a9aa33 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9aa35 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11a9aa39 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9aa3c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11a9aa3f:;
  /* 11a9aa3f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9aa43 je 0x11a9aa50 */
  if (C.zf) goto L_11a9aa50;
  /* 11a9aa45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9aa48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9aa4b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a9aa4e jmp 0x11a9aa06 */
  goto L_11a9aa06;
L_11a9aa50:;
  /* 11a9aa50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9aa53 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9aa55 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a9aa57 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a9aa5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9aa5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9aa60 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a9aa63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9aa66 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9aa69 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9aa6d je 0x11a9aa75 */
  if (C.zf) goto L_11a9aa75;
  /* 11a9aa6f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9aa73 jne 0x11a9aa88 */
  if (!C.zf) goto L_11a9aa88;
L_11a9aa75:;
  /* 11a9aa75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9aa78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9aa7a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a9aa7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a9aa7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9aa82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9aa85 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11a9aa88:;
  /* 11a9aa88 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11a9aa8f:;
  /* 11a9aa8f cmp dword ptr [0x11ab80d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab80d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9aa96 jle 0x11a9aaab */
  if ((C.zf||C.sf!=C.of)) goto L_11a9aaab;
  /* 11a9aa98 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a9aa9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9aa9d push edx */
  push32((uint32_t)(EDX));
  /* 11a9aa9e call 0x11a8e0d0 */
  push32(0x11a9aaa3u); f_11a8e0d0();
  /* 11a9aaa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9aaa6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a9aaa9 jmp 0x11a9aac0 */
  goto L_11a9aac0;
L_11a9aaab:;
  /* 11a9aaab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9aaae mov ecx, dword ptr [0x11ab7ec0] */
  ECX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a9aab4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9aab6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11a9aaba and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9aabd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11a9aac0:;
  /* 11a9aac0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9aac4 je 0x11a9aaeb */
  if (C.zf) goto L_11a9aaeb;
  /* 11a9aac6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9aac9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9aacc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9aacf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11a9aad3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a9aad6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9aad9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9aadb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a9aadd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a9aae0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9aae3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9aae6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11a9aae9 jmp 0x11a9aa8f */
  goto L_11a9aa8f;
L_11a9aaeb:;
  /* 11a9aaeb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9aaef jne 0x11a9aaf8 */
  if (!C.zf) goto L_11a9aaf8;
  /* 11a9aaf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9aaf4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a9aaf6 jmp 0x11a9aafb */
  goto L_11a9aafb;
L_11a9aaf8:;
  /* 11a9aaf8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11a9aafb:;
  /* 11a9aafb mov esp, ebp */
  ESP = (EBP);
  /* 11a9aafd pop ebp */
  EBP = (pop32());
  /* 11a9aafe ret  */
  ESPCHK(0x11a9aa00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ab00 @ 0x11a9ab00 (17 bytes, 8 insns) */
void f_11a9ab00(void) {
  FTRACE(0x11a9ab00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9ab00 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9ab01 mov ebp, esp */
  EBP = (ESP);
  /* 11a9ab03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9ab06 push eax */
  push32((uint32_t)(EAX));
  /* 11a9ab07 call 0x11a9aa00 */
  push32(0x11a9ab0cu); f_11a9aa00();
  /* 11a9ab0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ab0f pop ebp */
  EBP = (pop32());
  /* 11a9ab10 ret  */
  ESPCHK(0x11a9ab00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ab20 @ 0x11a9ab20 (297 bytes, 106 insns) */
void f_11a9ab20(void) {
  FTRACE(0x11a9ab20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9ab20 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9ab21 mov ebp, esp */
  EBP = (ESP);
  /* 11a9ab23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9ab26 push esi */
  push32((uint32_t)(ESI));
L_11a9ab27:;
  /* 11a9ab27 cmp dword ptr [0x11ab80d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab80d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9ab2e jle 0x11a9ab47 */
  if ((C.zf||C.sf!=C.of)) goto L_11a9ab47;
  /* 11a9ab30 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a9ab32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9ab35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9ab37 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a9ab39 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9ab3a call 0x11a8e0d0 */
  push32(0x11a9ab3fu); f_11a8e0d0();
  /* 11a9ab3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ab42 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a9ab45 jmp 0x11a9ab60 */
  goto L_11a9ab60;
L_11a9ab47:;
  /* 11a9ab47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9ab4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9ab4c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a9ab4e mov ecx, dword ptr [0x11ab7ec0] */
  ECX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a9ab54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9ab56 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11a9ab5a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9ab5d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11a9ab60:;
  /* 11a9ab60 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9ab64 je 0x11a9ab71 */
  if (C.zf) goto L_11a9ab71;
  /* 11a9ab66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9ab69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ab6c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a9ab6f jmp 0x11a9ab27 */
  goto L_11a9ab27;
L_11a9ab71:;
  /* 11a9ab71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9ab74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9ab76 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a9ab78 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a9ab7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9ab7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ab81 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a9ab84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9ab87 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a9ab8a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9ab8e je 0x11a9ab96 */
  if (C.zf) goto L_11a9ab96;
  /* 11a9ab90 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9ab94 jne 0x11a9aba9 */
  if (!C.zf) goto L_11a9aba9;
L_11a9ab96:;
  /* 11a9ab96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9ab99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9ab9b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a9ab9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a9aba0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9aba3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9aba6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11a9aba9:;
  /* 11a9aba9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a9abb0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11a9abb7:;
  /* 11a9abb7 cmp dword ptr [0x11ab80d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab80d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9abbe jle 0x11a9abd3 */
  if ((C.zf||C.sf!=C.of)) goto L_11a9abd3;
  /* 11a9abc0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a9abc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9abc5 push edx */
  push32((uint32_t)(EDX));
  /* 11a9abc6 call 0x11a8e0d0 */
  push32(0x11a9abcbu); f_11a8e0d0();
  /* 11a9abcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9abce mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a9abd1 jmp 0x11a9abe8 */
  goto L_11a9abe8;
L_11a9abd3:;
  /* 11a9abd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9abd6 mov ecx, dword ptr [0x11ab7ec0] */
  ECX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a9abdc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9abde mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11a9abe2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9abe5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11a9abe8:;
  /* 11a9abe8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9abec je 0x11a9ac29 */
  if (C.zf) goto L_11a9ac29;
  /* 11a9abee push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9abf0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a9abf2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9abf5 push eax */
  push32((uint32_t)(EAX));
  /* 11a9abf6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9abf9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9abfa call 0x11a9b8e0 */
  push32(0x11a9abffu); f_11a9b8e0();
  /* 11a9abff mov ecx, eax */
  ECX = (EAX);
  /* 11a9ac01 mov esi, edx */
  ESI = (EDX);
  /* 11a9ac03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9ac06 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9ac09 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a9ac0a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ac0c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ac0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9ac11 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11a9ac14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9ac17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9ac19 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a9ac1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a9ac1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9ac21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ac24 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11a9ac27 jmp 0x11a9abb7 */
  goto L_11a9abb7;
L_11a9ac29:;
  /* 11a9ac29 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9ac2d jne 0x11a9ac3e */
  if (!C.zf) goto L_11a9ac3e;
  /* 11a9ac2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9ac32 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a9ac34 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9ac37 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ac3a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a9ac3c jmp 0x11a9ac44 */
  goto L_11a9ac44;
L_11a9ac3e:;
  /* 11a9ac3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9ac41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11a9ac44:;
  /* 11a9ac44 pop esi */
  ESI = (pop32());
  /* 11a9ac45 mov esp, ebp */
  ESP = (EBP);
  /* 11a9ac47 pop ebp */
  EBP = (pop32());
  /* 11a9ac48 ret  */
  ESPCHK(0x11a9ab20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ac50 @ 0x11a9ac50 (61 bytes, 18 insns) */
void f_11a9ac50(void) {
  FTRACE(0x11a9ac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9ac50 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9ac51 mov ebp, esp */
  EBP = (ESP);
  /* 11a9ac53 cmp dword ptr [0x11aba418], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba418))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9ac5a jne 0x11a9ac8b */
  if (!C.zf) goto L_11a9ac8b;
  /* 11a9ac5c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a9ac5e call 0x11a8f2d0 */
  push32(0x11a9ac63u); f_11a8f2d0();
  /* 11a9ac63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ac66 cmp dword ptr [0x11aba418], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba418))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9ac6d jne 0x11a9ac81 */
  if (!C.zf) goto L_11a9ac81;
  /* 11a9ac6f call 0x11a9acb0 */
  push32(0x11a9ac74u); f_11a9acb0();
  /* 11a9ac74 mov eax, dword ptr [0x11aba418] */
  EAX = (r32((uint32_t)(0x11aba418)));
  /* 11a9ac79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ac7c mov dword ptr [0x11aba418], eax */
  w32((uint32_t)(0x11aba418), (EAX));
L_11a9ac81:;
  /* 11a9ac81 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a9ac83 call 0x11a8f370 */
  push32(0x11a9ac88u); f_11a8f370();
  /* 11a9ac88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a9ac8b:;
  /* 11a9ac8b pop ebp */
  EBP = (pop32());
  /* 11a9ac8c ret  */
  ESPCHK(0x11a9ac50u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ac90 @ 0x11a9ac90 (30 bytes, 11 insns) */
void f_11a9ac90(void) {
  FTRACE(0x11a9ac90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9ac90 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9ac91 mov ebp, esp */
  EBP = (ESP);
  /* 11a9ac93 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a9ac95 call 0x11a8f2d0 */
  push32(0x11a9ac9au); f_11a8f2d0();
  /* 11a9ac9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ac9d call 0x11a9acb0 */
  push32(0x11a9aca2u); f_11a9acb0();
  /* 11a9aca2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a9aca4 call 0x11a8f370 */
  push32(0x11a9aca9u); f_11a8f370();
  /* 11a9aca9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9acac pop ebp */
  EBP = (pop32());
  /* 11a9acad ret  */
  ESPCHK(0x11a9ac90u, _esp0);
  ESP += 4; return;
}

/* FUN_1001acb0 @ 0x11a9acb0 (939 bytes, 266 insns) */
void f_11a9acb0(void) {
  FTRACE(0x11a9acb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9acb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9acb1 mov ebp, esp */
  EBP = (ESP);
  /* 11a9acb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9acb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a9acbd push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a9acbf call 0x11a8f2d0 */
  push32(0x11a9acc4u); f_11a8f2d0();
  /* 11a9acc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9acc7 mov dword ptr [0x11aba360], 0 */
  w32((uint32_t)(0x11aba360), (0x0u));
  /* 11a9acd1 mov dword ptr [0x11ab9330], 0xffffffff */
  w32((uint32_t)(0x11ab9330), (0xffffffffu));
  /* 11a9acdb mov eax, dword ptr [0x11ab9330] */
  EAX = (r32((uint32_t)(0x11ab9330)));
  /* 11a9ace0 mov dword ptr [0x11ab9320], eax */
  w32((uint32_t)(0x11ab9320), (EAX));
  /* 11a9ace5 push 0x11ab5c80 */
  push32((uint32_t)(0x11ab5c80u));
  /* 11a9acea call 0x11a9b950 */
  push32(0x11a9acefu); f_11a9b950();
  /* 11a9acef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9acf2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a9acf5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9acf9 jne 0x11a9ae33 */
  if (!C.zf) goto L_11a9ae33;
  /* 11a9acff push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a9ad01 call 0x11a8f370 */
  push32(0x11a9ad06u); f_11a8f370();
  /* 11a9ad06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ad09 push 0x11aba368 */
  push32((uint32_t)(0x11aba368u));
  /* 11a9ad0e call dword ptr [0x11abc2e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2e0))), 0x11a9ad14u);
  /* 11a9ad14 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9ad17 je 0x11a9ae2e */
  if (C.zf) goto L_11a9ae2e;
  /* 11a9ad1d mov dword ptr [0x11aba360], 1 */
  w32((uint32_t)(0x11aba360), (0x1u));
  /* 11a9ad27 mov ecx, dword ptr [0x11aba368] */
  ECX = (r32((uint32_t)(0x11aba368)));
  /* 11a9ad2d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9ad30 mov dword ptr [0x11ab928c], ecx */
  w32((uint32_t)(0x11ab928c), (ECX));
  /* 11a9ad36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9ad38 mov dx, word ptr [0x11aba3ae] */
  DX = (r16((uint32_t)(0x11aba3ae)));
  /* 11a9ad3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9ad41 je 0x11a9ad59 */
  if (C.zf) goto L_11a9ad59;
  /* 11a9ad43 mov eax, dword ptr [0x11aba3bc] */
  EAX = (r32((uint32_t)(0x11aba3bc)));
  /* 11a9ad48 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9ad4b mov ecx, dword ptr [0x11ab928c] */
  ECX = (r32((uint32_t)(0x11ab928c)));
  /* 11a9ad51 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ad53 mov dword ptr [0x11ab928c], ecx */
  w32((uint32_t)(0x11ab928c), (ECX));
L_11a9ad59:;
  /* 11a9ad59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9ad5b mov dx, word ptr [0x11aba402] */
  DX = (r16((uint32_t)(0x11aba402)));
  /* 11a9ad62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9ad64 je 0x11a9ad8e */
  if (C.zf) goto L_11a9ad8e;
  /* 11a9ad66 cmp dword ptr [0x11aba410], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba410))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9ad6d je 0x11a9ad8e */
  if (C.zf) goto L_11a9ad8e;
  /* 11a9ad6f mov dword ptr [0x11ab9290], 1 */
  w32((uint32_t)(0x11ab9290), (0x1u));
  /* 11a9ad79 mov eax, dword ptr [0x11aba410] */
  EAX = (r32((uint32_t)(0x11aba410)));
  /* 11a9ad7e sub eax, dword ptr [0x11aba3bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11aba3bc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9ad84 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9ad87 mov dword ptr [0x11ab9294], eax */
  w32((uint32_t)(0x11ab9294), (EAX));
  /* 11a9ad8c jmp 0x11a9ada2 */
  goto L_11a9ada2;
L_11a9ad8e:;
  /* 11a9ad8e mov dword ptr [0x11ab9290], 0 */
  w32((uint32_t)(0x11ab9290), (0x0u));
  /* 11a9ad98 mov dword ptr [0x11ab9294], 0 */
  w32((uint32_t)(0x11ab9294), (0x0u));
L_11a9ada2:;
  /* 11a9ada2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11a9ada5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9ada6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9ada8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a9adaa mov edx, dword ptr [0x11ab9318] */
  EDX = (r32((uint32_t)(0x11ab9318)));
  /* 11a9adb0 push edx */
  push32((uint32_t)(EDX));
  /* 11a9adb1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a9adb3 push 0x11aba36c */
  push32((uint32_t)(0x11aba36cu));
  /* 11a9adb8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11a9adbd mov eax, dword ptr [0x11aba2d8] */
  EAX = (r32((uint32_t)(0x11aba2d8)));
  /* 11a9adc2 push eax */
  push32((uint32_t)(EAX));
  /* 11a9adc3 call dword ptr [0x11abc3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3bc))), 0x11a9adc9u);
  /* 11a9adc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9adcb je 0x11a9addf */
  if (C.zf) goto L_11a9addf;
  /* 11a9adcd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9add1 jne 0x11a9addf */
  if (!C.zf) goto L_11a9addf;
  /* 11a9add3 mov ecx, dword ptr [0x11ab9318] */
  ECX = (r32((uint32_t)(0x11ab9318)));
  /* 11a9add9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11a9addd jmp 0x11a9ade8 */
  goto L_11a9ade8;
L_11a9addf:;
  /* 11a9addf mov edx, dword ptr [0x11ab9318] */
  EDX = (r32((uint32_t)(0x11ab9318)));
  /* 11a9ade5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11a9ade8:;
  /* 11a9ade8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a9adeb push eax */
  push32((uint32_t)(EAX));
  /* 11a9adec push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9adee push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a9adf0 mov ecx, dword ptr [0x11ab931c] */
  ECX = (r32((uint32_t)(0x11ab931c)));
  /* 11a9adf6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9adf7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a9adf9 push 0x11aba3c0 */
  push32((uint32_t)(0x11aba3c0u));
  /* 11a9adfe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11a9ae03 mov edx, dword ptr [0x11aba2d8] */
  EDX = (r32((uint32_t)(0x11aba2d8)));
  /* 11a9ae09 push edx */
  push32((uint32_t)(EDX));
  /* 11a9ae0a call dword ptr [0x11abc3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3bc))), 0x11a9ae10u);
  /* 11a9ae10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9ae12 je 0x11a9ae25 */
  if (C.zf) goto L_11a9ae25;
  /* 11a9ae14 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9ae18 jne 0x11a9ae25 */
  if (!C.zf) goto L_11a9ae25;
  /* 11a9ae1a mov eax, dword ptr [0x11ab931c] */
  EAX = (r32((uint32_t)(0x11ab931c)));
  /* 11a9ae1f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11a9ae23 jmp 0x11a9ae2e */
  goto L_11a9ae2e;
L_11a9ae25:;
  /* 11a9ae25 mov ecx, dword ptr [0x11ab931c] */
  ECX = (r32((uint32_t)(0x11ab931c)));
  /* 11a9ae2b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11a9ae2e:;
  /* 11a9ae2e jmp 0x11a9b057 */
  goto L_11a9b057;
L_11a9ae33:;
  /* 11a9ae33 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9ae36 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a9ae39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9ae3b je 0x11a9ae5d */
  if (C.zf) goto L_11a9ae5d;
  /* 11a9ae3d cmp dword ptr [0x11aba414], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba414))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9ae44 je 0x11a9ae6c */
  if (C.zf) goto L_11a9ae6c;
  /* 11a9ae46 mov ecx, dword ptr [0x11aba414] */
  ECX = (r32((uint32_t)(0x11aba414)));
  /* 11a9ae4c push ecx */
  push32((uint32_t)(ECX));
  /* 11a9ae4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9ae50 push edx */
  push32((uint32_t)(EDX));
  /* 11a9ae51 call 0x11a97450 */
  push32(0x11a9ae56u); f_11a97450();
  /* 11a9ae56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ae59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9ae5b jne 0x11a9ae6c */
  if (!C.zf) goto L_11a9ae6c;
L_11a9ae5d:;
  /* 11a9ae5d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a9ae5f call 0x11a8f370 */
  push32(0x11a9ae64u); f_11a8f370();
  /* 11a9ae64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ae67 jmp 0x11a9b057 */
  goto L_11a9b057;
L_11a9ae6c:;
  /* 11a9ae6c push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9ae6e mov eax, dword ptr [0x11aba414] */
  EAX = (r32((uint32_t)(0x11aba414)));
  /* 11a9ae73 push eax */
  push32((uint32_t)(EAX));
  /* 11a9ae74 call 0x11a8a270 */
  push32(0x11a9ae79u); f_11a8a270();
  /* 11a9ae79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ae7c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11a9ae81 push 0x11ab5c78 */
  push32((uint32_t)(0x11ab5c78u));
  /* 11a9ae86 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9ae88 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9ae8b push ecx */
  push32((uint32_t)(ECX));
  /* 11a9ae8c call 0x11a8c610 */
  push32(0x11a9ae91u); f_11a8c610();
  /* 11a9ae91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ae94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ae97 push eax */
  push32((uint32_t)(EAX));
  /* 11a9ae98 call 0x11a897e0 */
  push32(0x11a9ae9du); f_11a897e0();
  /* 11a9ae9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9aea0 mov dword ptr [0x11aba414], eax */
  w32((uint32_t)(0x11aba414), (EAX));
  /* 11a9aea5 cmp dword ptr [0x11aba414], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba414))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9aeac jne 0x11a9aebd */
  if (!C.zf) goto L_11a9aebd;
  /* 11a9aeae push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a9aeb0 call 0x11a8f370 */
  push32(0x11a9aeb5u); f_11a8f370();
  /* 11a9aeb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9aeb8 jmp 0x11a9b057 */
  goto L_11a9b057;
L_11a9aebd:;
  /* 11a9aebd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9aec0 push edx */
  push32((uint32_t)(EDX));
  /* 11a9aec1 mov eax, dword ptr [0x11aba414] */
  EAX = (r32((uint32_t)(0x11aba414)));
  /* 11a9aec6 push eax */
  push32((uint32_t)(EAX));
  /* 11a9aec7 call 0x11a8c790 */
  push32(0x11a9aeccu); f_11a8c790();
  /* 11a9aecc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9aecf push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a9aed1 call 0x11a8f370 */
  push32(0x11a9aed6u); f_11a8f370();
  /* 11a9aed6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9aed9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a9aedb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9aede push ecx */
  push32((uint32_t)(ECX));
  /* 11a9aedf mov edx, dword ptr [0x11ab9318] */
  EDX = (r32((uint32_t)(0x11ab9318)));
  /* 11a9aee5 push edx */
  push32((uint32_t)(EDX));
  /* 11a9aee6 call 0x11a8d000 */
  push32(0x11a9aeebu); f_11a8d000();
  /* 11a9aeeb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9aeee mov eax, dword ptr [0x11ab9318] */
  EAX = (r32((uint32_t)(0x11ab9318)));
  /* 11a9aef3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11a9aef7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9aefa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9aefd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9af00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9af03 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a9af06 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9af09 jne 0x11a9af1d */
  if (!C.zf) goto L_11a9af1d;
  /* 11a9af0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9af0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9af11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a9af14 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9af17 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9af1a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11a9af1d:;
  /* 11a9af1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9af20 push eax */
  push32((uint32_t)(EAX));
  /* 11a9af21 call 0x11a9aa00 */
  push32(0x11a9af26u); f_11a9aa00();
  /* 11a9af26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9af29 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9af2f mov dword ptr [0x11ab928c], eax */
  w32((uint32_t)(0x11ab928c), (EAX));
L_11a9af34:;
  /* 11a9af34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9af37 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a9af3a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9af3d je 0x11a9af55 */
  if (C.zf) goto L_11a9af55;
  /* 11a9af3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9af42 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a9af45 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9af48 jl 0x11a9af60 */
  if ((C.sf!=C.of)) goto L_11a9af60;
  /* 11a9af4a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9af4d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a9af50 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9af53 jg 0x11a9af60 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a9af60;
L_11a9af55:;
  /* 11a9af55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9af58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9af5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9af5e jmp 0x11a9af34 */
  goto L_11a9af34;
L_11a9af60:;
  /* 11a9af60 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9af63 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a9af66 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9af69 jne 0x11a9b005 */
  if (!C.zf) goto L_11a9b005;
  /* 11a9af6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9af72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9af75 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9af78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9af7b push edx */
  push32((uint32_t)(EDX));
  /* 11a9af7c call 0x11a9aa00 */
  push32(0x11a9af81u); f_11a9aa00();
  /* 11a9af81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9af84 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9af87 mov ecx, dword ptr [0x11ab928c] */
  ECX = (r32((uint32_t)(0x11ab928c)));
  /* 11a9af8d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9af8f mov dword ptr [0x11ab928c], ecx */
  w32((uint32_t)(0x11ab928c), (ECX));
L_11a9af95:;
  /* 11a9af95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9af98 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a9af9b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9af9e jl 0x11a9afb6 */
  if ((C.sf!=C.of)) goto L_11a9afb6;
  /* 11a9afa0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9afa3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a9afa6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9afa9 jg 0x11a9afb6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a9afb6;
  /* 11a9afab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9afae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9afb1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a9afb4 jmp 0x11a9af95 */
  goto L_11a9af95;
L_11a9afb6:;
  /* 11a9afb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9afb9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a9afbc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9afbf jne 0x11a9b005 */
  if (!C.zf) goto L_11a9b005;
  /* 11a9afc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9afc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9afc7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a9afca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9afcd push ecx */
  push32((uint32_t)(ECX));
  /* 11a9afce call 0x11a9aa00 */
  push32(0x11a9afd3u); f_11a9aa00();
  /* 11a9afd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9afd6 mov edx, dword ptr [0x11ab928c] */
  EDX = (r32((uint32_t)(0x11ab928c)));
  /* 11a9afdc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9afde mov dword ptr [0x11ab928c], edx */
  w32((uint32_t)(0x11ab928c), (EDX));
L_11a9afe4:;
  /* 11a9afe4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9afe7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a9afea cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9afed jl 0x11a9b005 */
  if ((C.sf!=C.of)) goto L_11a9b005;
  /* 11a9afef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9aff2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a9aff5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9aff8 jg 0x11a9b005 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a9b005;
  /* 11a9affa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9affd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b000 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9b003 jmp 0x11a9afe4 */
  goto L_11a9afe4;
L_11a9b005:;
  /* 11a9b005 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b009 je 0x11a9b019 */
  if (C.zf) goto L_11a9b019;
  /* 11a9b00b mov edx, dword ptr [0x11ab928c] */
  EDX = (r32((uint32_t)(0x11ab928c)));
  /* 11a9b011 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a9b013 mov dword ptr [0x11ab928c], edx */
  w32((uint32_t)(0x11ab928c), (EDX));
L_11a9b019:;
  /* 11a9b019 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9b01c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a9b01f mov dword ptr [0x11ab9290], ecx */
  w32((uint32_t)(0x11ab9290), (ECX));
  /* 11a9b025 cmp dword ptr [0x11ab9290], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ab9290))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b02c je 0x11a9b04e */
  if (C.zf) goto L_11a9b04e;
  /* 11a9b02e push 3 */
  push32((uint32_t)(0x3u));
  /* 11a9b030 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9b033 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b034 mov eax, dword ptr [0x11ab931c] */
  EAX = (r32((uint32_t)(0x11ab931c)));
  /* 11a9b039 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b03a call 0x11a8d000 */
  push32(0x11a9b03fu); f_11a8d000();
  /* 11a9b03f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b042 mov ecx, dword ptr [0x11ab931c] */
  ECX = (r32((uint32_t)(0x11ab931c)));
  /* 11a9b048 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11a9b04c jmp 0x11a9b057 */
  goto L_11a9b057;
L_11a9b04e:;
  /* 11a9b04e mov edx, dword ptr [0x11ab931c] */
  EDX = (r32((uint32_t)(0x11ab931c)));
  /* 11a9b054 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11a9b057:;
  /* 11a9b057 mov esp, ebp */
  ESP = (EBP);
  /* 11a9b059 pop ebp */
  EBP = (pop32());
  /* 11a9b05a ret  */
  ESPCHK(0x11a9acb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b060 @ 0x11a9b060 (46 bytes, 18 insns) */
void f_11a9b060(void) {
  FTRACE(0x11a9b060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9b060 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9b061 mov ebp, esp */
  EBP = (ESP);
  /* 11a9b063 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b064 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a9b066 call 0x11a8f2d0 */
  push32(0x11a9b06bu); f_11a8f2d0();
  /* 11a9b06b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b06e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b071 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b072 call 0x11a9b090 */
  push32(0x11a9b077u); f_11a9b090();
  /* 11a9b077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b07a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a9b07d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a9b07f call 0x11a8f370 */
  push32(0x11a9b084u); f_11a8f370();
  /* 11a9b084 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9b08a mov esp, ebp */
  ESP = (EBP);
  /* 11a9b08c pop ebp */
  EBP = (pop32());
  /* 11a9b08d ret  */
  ESPCHK(0x11a9b060u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b090 @ 0x11a9b090 (762 bytes, 246 insns) */
void f_11a9b090(void) {
  FTRACE(0x11a9b090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9b090 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9b091 mov ebp, esp */
  EBP = (ESP);
  /* 11a9b093 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b094 cmp dword ptr [0x11ab9290], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ab9290))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b09b jne 0x11a9b0a4 */
  if (!C.zf) goto L_11a9b0a4;
  /* 11a9b09d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b09f jmp 0x11a9b386 */
  goto L_11a9b386;
L_11a9b0a4:;
  /* 11a9b0a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b0a7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11a9b0aa cmp ecx, dword ptr [0x11ab9320] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ab9320))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b0b0 jne 0x11a9b0c4 */
  if (!C.zf) goto L_11a9b0c4;
  /* 11a9b0b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b0b5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a9b0b8 cmp eax, dword ptr [0x11ab9330] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ab9330))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b0be je 0x11a9b28b */
  if (C.zf) goto L_11a9b28b;
L_11a9b0c4:;
  /* 11a9b0c4 cmp dword ptr [0x11aba360], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba360))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b0cb je 0x11a9b245 */
  if (C.zf) goto L_11a9b245;
  /* 11a9b0d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9b0d3 mov cx, word ptr [0x11aba400] */
  CX = (r16((uint32_t)(0x11aba400)));
  /* 11a9b0da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a9b0dc jne 0x11a9b139 */
  if (!C.zf) goto L_11a9b139;
  /* 11a9b0de xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9b0e0 mov dx, word ptr [0x11aba40e] */
  DX = (r16((uint32_t)(0x11aba40e)));
  /* 11a9b0e7 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b0e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b0ea mov ax, word ptr [0x11aba40c] */
  AX = (r16((uint32_t)(0x11aba40c)));
  /* 11a9b0f0 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b0f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9b0f3 mov cx, word ptr [0x11aba40a] */
  CX = (r16((uint32_t)(0x11aba40a)));
  /* 11a9b0fa push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b0fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9b0fd mov dx, word ptr [0x11aba408] */
  DX = (r16((uint32_t)(0x11aba408)));
  /* 11a9b104 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b105 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b107 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b109 mov ax, word ptr [0x11aba404] */
  AX = (r16((uint32_t)(0x11aba404)));
  /* 11a9b10f push eax */
  push32((uint32_t)(EAX));
  /* 11a9b110 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9b112 mov cx, word ptr [0x11aba406] */
  CX = (r16((uint32_t)(0x11aba406)));
  /* 11a9b119 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b11a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9b11c mov dx, word ptr [0x11aba402] */
  DX = (r16((uint32_t)(0x11aba402)));
  /* 11a9b123 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b127 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11a9b12a push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b12b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9b12d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9b12f call 0x11a9b390 */
  push32(0x11a9b134u); f_11a9b390();
  /* 11a9b134 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b137 jmp 0x11a9b18a */
  goto L_11a9b18a;
L_11a9b139:;
  /* 11a9b139 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9b13b mov dx, word ptr [0x11aba40e] */
  DX = (r16((uint32_t)(0x11aba40e)));
  /* 11a9b142 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b143 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b145 mov ax, word ptr [0x11aba40c] */
  AX = (r16((uint32_t)(0x11aba40c)));
  /* 11a9b14b push eax */
  push32((uint32_t)(EAX));
  /* 11a9b14c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9b14e mov cx, word ptr [0x11aba40a] */
  CX = (r16((uint32_t)(0x11aba40a)));
  /* 11a9b155 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b156 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9b158 mov dx, word ptr [0x11aba408] */
  DX = (r16((uint32_t)(0x11aba408)));
  /* 11a9b15f push edx */
  push32((uint32_t)(EDX));
  /* 11a9b160 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b162 mov ax, word ptr [0x11aba406] */
  AX = (r16((uint32_t)(0x11aba406)));
  /* 11a9b168 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b169 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b16b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b16d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9b16f mov cx, word ptr [0x11aba402] */
  CX = (r16((uint32_t)(0x11aba402)));
  /* 11a9b176 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b177 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b17a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a9b17d push eax */
  push32((uint32_t)(EAX));
  /* 11a9b17e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b180 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9b182 call 0x11a9b390 */
  push32(0x11a9b187u); f_11a9b390();
  /* 11a9b187 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a9b18a:;
  /* 11a9b18a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9b18c mov cx, word ptr [0x11aba3ac] */
  CX = (r16((uint32_t)(0x11aba3ac)));
  /* 11a9b193 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a9b195 jne 0x11a9b1f2 */
  if (!C.zf) goto L_11a9b1f2;
  /* 11a9b197 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9b199 mov dx, word ptr [0x11aba3ba] */
  DX = (r16((uint32_t)(0x11aba3ba)));
  /* 11a9b1a0 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b1a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b1a3 mov ax, word ptr [0x11aba3b8] */
  AX = (r16((uint32_t)(0x11aba3b8)));
  /* 11a9b1a9 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b1aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9b1ac mov cx, word ptr [0x11aba3b6] */
  CX = (r16((uint32_t)(0x11aba3b6)));
  /* 11a9b1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b1b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9b1b6 mov dx, word ptr [0x11aba3b4] */
  DX = (r16((uint32_t)(0x11aba3b4)));
  /* 11a9b1bd push edx */
  push32((uint32_t)(EDX));
  /* 11a9b1be push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b1c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b1c2 mov ax, word ptr [0x11aba3b0] */
  AX = (r16((uint32_t)(0x11aba3b0)));
  /* 11a9b1c8 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b1c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9b1cb mov cx, word ptr [0x11aba3b2] */
  CX = (r16((uint32_t)(0x11aba3b2)));
  /* 11a9b1d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b1d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9b1d5 mov dx, word ptr [0x11aba3ae] */
  DX = (r16((uint32_t)(0x11aba3ae)));
  /* 11a9b1dc push edx */
  push32((uint32_t)(EDX));
  /* 11a9b1dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b1e0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11a9b1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b1e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9b1e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b1e8 call 0x11a9b390 */
  push32(0x11a9b1edu); f_11a9b390();
  /* 11a9b1ed add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b1f0 jmp 0x11a9b243 */
  goto L_11a9b243;
L_11a9b1f2:;
  /* 11a9b1f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9b1f4 mov dx, word ptr [0x11aba3ba] */
  DX = (r16((uint32_t)(0x11aba3ba)));
  /* 11a9b1fb push edx */
  push32((uint32_t)(EDX));
  /* 11a9b1fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b1fe mov ax, word ptr [0x11aba3b8] */
  AX = (r16((uint32_t)(0x11aba3b8)));
  /* 11a9b204 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b205 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9b207 mov cx, word ptr [0x11aba3b6] */
  CX = (r16((uint32_t)(0x11aba3b6)));
  /* 11a9b20e push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b20f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9b211 mov dx, word ptr [0x11aba3b4] */
  DX = (r16((uint32_t)(0x11aba3b4)));
  /* 11a9b218 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b219 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b21b mov ax, word ptr [0x11aba3b2] */
  AX = (r16((uint32_t)(0x11aba3b2)));
  /* 11a9b221 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b222 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b224 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b226 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9b228 mov cx, word ptr [0x11aba3ae] */
  CX = (r16((uint32_t)(0x11aba3ae)));
  /* 11a9b22f push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b230 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b233 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a9b236 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b237 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b239 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b23b call 0x11a9b390 */
  push32(0x11a9b240u); f_11a9b390();
  /* 11a9b240 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a9b243:;
  /* 11a9b243 jmp 0x11a9b28b */
  goto L_11a9b28b;
L_11a9b245:;
  /* 11a9b245 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b247 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b249 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b24b push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9b24d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b24f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b251 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9b253 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a9b255 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b258 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11a9b25b push edx */
  push32((uint32_t)(EDX));
  /* 11a9b25c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9b25e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9b260 call 0x11a9b390 */
  push32(0x11a9b265u); f_11a9b390();
  /* 11a9b265 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b268 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b26a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b26c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b26e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9b270 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b272 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b274 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a9b276 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a9b278 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b27b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11a9b27e push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b27f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9b281 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b283 call 0x11a9b390 */
  push32(0x11a9b288u); f_11a9b390();
  /* 11a9b288 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a9b28b:;
  /* 11a9b28b mov edx, dword ptr [0x11ab9324] */
  EDX = (r32((uint32_t)(0x11ab9324)));
  /* 11a9b291 cmp edx, dword ptr [0x11ab9334] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ab9334))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b297 jge 0x11a9b2e4 */
  if ((C.sf==C.of)) goto L_11a9b2e4;
  /* 11a9b299 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b29c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11a9b29f cmp ecx, dword ptr [0x11ab9324] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ab9324))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b2a5 jl 0x11a9b2b5 */
  if ((C.sf!=C.of)) goto L_11a9b2b5;
  /* 11a9b2a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b2aa mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11a9b2ad cmp eax, dword ptr [0x11ab9334] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ab9334))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b2b3 jle 0x11a9b2bc */
  if ((C.zf||C.sf!=C.of)) goto L_11a9b2bc;
L_11a9b2b5:;
  /* 11a9b2b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b2b7 jmp 0x11a9b386 */
  goto L_11a9b386;
L_11a9b2bc:;
  /* 11a9b2bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b2bf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11a9b2c2 cmp edx, dword ptr [0x11ab9324] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ab9324))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b2c8 jle 0x11a9b2e2 */
  if ((C.zf||C.sf!=C.of)) goto L_11a9b2e2;
  /* 11a9b2ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b2cd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11a9b2d0 cmp ecx, dword ptr [0x11ab9334] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ab9334))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b2d6 jge 0x11a9b2e2 */
  if ((C.sf==C.of)) goto L_11a9b2e2;
  /* 11a9b2d8 mov eax, 1 */
  EAX = (0x1u);
  /* 11a9b2dd jmp 0x11a9b386 */
  goto L_11a9b386;
L_11a9b2e2:;
  /* 11a9b2e2 jmp 0x11a9b327 */
  goto L_11a9b327;
L_11a9b2e4:;
  /* 11a9b2e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b2e7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11a9b2ea cmp eax, dword ptr [0x11ab9334] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ab9334))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b2f0 jl 0x11a9b300 */
  if ((C.sf!=C.of)) goto L_11a9b300;
  /* 11a9b2f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b2f5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11a9b2f8 cmp edx, dword ptr [0x11ab9324] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ab9324))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b2fe jle 0x11a9b307 */
  if ((C.zf||C.sf!=C.of)) goto L_11a9b307;
L_11a9b300:;
  /* 11a9b300 mov eax, 1 */
  EAX = (0x1u);
  /* 11a9b305 jmp 0x11a9b386 */
  goto L_11a9b386;
L_11a9b307:;
  /* 11a9b307 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b30a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11a9b30d cmp ecx, dword ptr [0x11ab9334] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ab9334))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b313 jle 0x11a9b327 */
  if ((C.zf||C.sf!=C.of)) goto L_11a9b327;
  /* 11a9b315 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b318 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11a9b31b cmp eax, dword ptr [0x11ab9324] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ab9324))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b321 jge 0x11a9b327 */
  if ((C.sf==C.of)) goto L_11a9b327;
  /* 11a9b323 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b325 jmp 0x11a9b386 */
  goto L_11a9b386;
L_11a9b327:;
  /* 11a9b327 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b32a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a9b32d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9b330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b333 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a9b335 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b337 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b33a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a9b33d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9b343 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b345 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9b34b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a9b34e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b351 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11a9b354 cmp edx, dword ptr [0x11ab9324] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ab9324))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b35a jne 0x11a9b372 */
  if (!C.zf) goto L_11a9b372;
  /* 11a9b35c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9b35f cmp eax, dword ptr [0x11ab9328] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ab9328))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b365 jl 0x11a9b36e */
  if ((C.sf!=C.of)) goto L_11a9b36e;
  /* 11a9b367 mov eax, 1 */
  EAX = (0x1u);
  /* 11a9b36c jmp 0x11a9b386 */
  goto L_11a9b386;
L_11a9b36e:;
  /* 11a9b36e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b370 jmp 0x11a9b386 */
  goto L_11a9b386;
L_11a9b372:;
  /* 11a9b372 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9b375 cmp ecx, dword ptr [0x11ab9338] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ab9338))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b37b jge 0x11a9b384 */
  if ((C.sf==C.of)) goto L_11a9b384;
  /* 11a9b37d mov eax, 1 */
  EAX = (0x1u);
  /* 11a9b382 jmp 0x11a9b386 */
  goto L_11a9b386;
L_11a9b384:;
  /* 11a9b384 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a9b386:;
  /* 11a9b386 mov esp, ebp */
  ESP = (EBP);
  /* 11a9b388 pop ebp */
  EBP = (pop32());
  /* 11a9b389 ret  */
  ESPCHK(0x11a9b090u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b390 @ 0x11a9b390 (504 bytes, 145 insns) */
void f_11a9b390(void) {
  FTRACE(0x11a9b390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9b390 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9b391 mov ebp, esp */
  EBP = (ESP);
  /* 11a9b393 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9b396 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b39a jne 0x11a9b46c */
  if (!C.zf) goto L_11a9b46c;
  /* 11a9b3a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9b3a3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b3a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9b3a8 jne 0x11a9b3b9 */
  if (!C.zf) goto L_11a9b3b9;
  /* 11a9b3aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9b3ad mov edx, dword ptr [ecx*4 + 0x11ab933c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ab933c)));
  /* 11a9b3b4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a9b3b7 jmp 0x11a9b3c6 */
  goto L_11a9b3c6;
L_11a9b3b9:;
  /* 11a9b3b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9b3bc mov ecx, dword ptr [eax*4 + 0x11ab9370] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ab9370)));
  /* 11a9b3c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11a9b3c6:;
  /* 11a9b3c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9b3c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b3cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a9b3cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9b3d2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9b3d5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9b3db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9b3de add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b3e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9b3e3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9b3e6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11a9b3e9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11a9b3ed cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a9b3ee mov ecx, 7 */
  ECX = (0x7u);
  /* 11a9b3f3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a9b3f5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a9b3f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9b3fb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b3fe jge 0x11a9b419 */
  if ((C.sf==C.of)) goto L_11a9b419;
  /* 11a9b400 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a9b403 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9b406 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9b409 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9b40c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9b40f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b412 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b414 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a9b417 jmp 0x11a9b42d */
  goto L_11a9b42d;
L_11a9b419:;
  /* 11a9b419 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a9b41c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9b41f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9b422 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9b425 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b428 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b42a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a9b42d:;
  /* 11a9b42d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b431 jne 0x11a9b46a */
  if (!C.zf) goto L_11a9b46a;
  /* 11a9b433 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9b436 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a9b439 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a9b43b jne 0x11a9b44c */
  if (!C.zf) goto L_11a9b44c;
  /* 11a9b43d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9b440 mov eax, dword ptr [edx*4 + 0x11ab9340] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11ab9340)));
  /* 11a9b447 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a9b44a jmp 0x11a9b459 */
  goto L_11a9b459;
L_11a9b44c:;
  /* 11a9b44c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9b44f mov edx, dword ptr [ecx*4 + 0x11ab9374] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ab9374)));
  /* 11a9b456 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11a9b459:;
  /* 11a9b459 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9b45c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b45f jle 0x11a9b46a */
  if ((C.zf||C.sf!=C.of)) goto L_11a9b46a;
  /* 11a9b461 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9b464 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9b467 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11a9b46a:;
  /* 11a9b46a jmp 0x11a9b4a1 */
  goto L_11a9b4a1;
L_11a9b46c:;
  /* 11a9b46c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9b46f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9b472 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9b474 jne 0x11a9b485 */
  if (!C.zf) goto L_11a9b485;
  /* 11a9b476 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9b479 mov ecx, dword ptr [eax*4 + 0x11ab933c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ab933c)));
  /* 11a9b480 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a9b483 jmp 0x11a9b492 */
  goto L_11a9b492;
L_11a9b485:;
  /* 11a9b485 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9b488 mov eax, dword ptr [edx*4 + 0x11ab9370] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11ab9370)));
  /* 11a9b48f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11a9b492:;
  /* 11a9b492 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9b495 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a9b498 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9b49b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b49e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11a9b4a1:;
  /* 11a9b4a1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b4a5 jne 0x11a9b4e1 */
  if (!C.zf) goto L_11a9b4e1;
  /* 11a9b4a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9b4aa mov dword ptr [0x11ab9324], eax */
  w32((uint32_t)(0x11ab9324), (EAX));
  /* 11a9b4af mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11a9b4b2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9b4b5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11a9b4b8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b4ba imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9b4bd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11a9b4c0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b4c2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9b4c8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11a9b4cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b4cd mov dword ptr [0x11ab9328], ecx */
  w32((uint32_t)(0x11ab9328), (ECX));
  /* 11a9b4d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9b4d6 mov dword ptr [0x11ab9320], edx */
  w32((uint32_t)(0x11ab9320), (EDX));
  /* 11a9b4dc jmp 0x11a9b584 */
  goto L_11a9b584;
L_11a9b4e1:;
  /* 11a9b4e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9b4e4 mov dword ptr [0x11ab9334], eax */
  w32((uint32_t)(0x11ab9334), (EAX));
  /* 11a9b4e9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11a9b4ec imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9b4ef mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11a9b4f2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b4f4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9b4f7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11a9b4fa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b4fc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9b502 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11a9b505 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b507 mov dword ptr [0x11ab9338], ecx */
  w32((uint32_t)(0x11ab9338), (ECX));
  /* 11a9b50d mov edx, dword ptr [0x11ab9294] */
  EDX = (r32((uint32_t)(0x11ab9294)));
  /* 11a9b513 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9b519 mov eax, dword ptr [0x11ab9338] */
  EAX = (r32((uint32_t)(0x11ab9338)));
  /* 11a9b51e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b520 mov dword ptr [0x11ab9338], eax */
  w32((uint32_t)(0x11ab9338), (EAX));
  /* 11a9b525 cmp dword ptr [0x11ab9338], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ab9338))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b52c jge 0x11a9b551 */
  if ((C.sf==C.of)) goto L_11a9b551;
  /* 11a9b52e mov ecx, dword ptr [0x11ab9338] */
  ECX = (r32((uint32_t)(0x11ab9338)));
  /* 11a9b534 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b53a mov dword ptr [0x11ab9338], ecx */
  w32((uint32_t)(0x11ab9338), (ECX));
  /* 11a9b540 mov edx, dword ptr [0x11ab9334] */
  EDX = (r32((uint32_t)(0x11ab9334)));
  /* 11a9b546 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9b549 mov dword ptr [0x11ab9334], edx */
  w32((uint32_t)(0x11ab9334), (EDX));
  /* 11a9b54f jmp 0x11a9b57b */
  goto L_11a9b57b;
L_11a9b551:;
  /* 11a9b551 cmp dword ptr [0x11ab9338], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11ab9338))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b55b jl 0x11a9b57b */
  if ((C.sf!=C.of)) goto L_11a9b57b;
  /* 11a9b55d mov eax, dword ptr [0x11ab9338] */
  EAX = (r32((uint32_t)(0x11ab9338)));
  /* 11a9b562 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9b567 mov dword ptr [0x11ab9338], eax */
  w32((uint32_t)(0x11ab9338), (EAX));
  /* 11a9b56c mov ecx, dword ptr [0x11ab9334] */
  ECX = (r32((uint32_t)(0x11ab9334)));
  /* 11a9b572 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b575 mov dword ptr [0x11ab9334], ecx */
  w32((uint32_t)(0x11ab9334), (ECX));
L_11a9b57b:;
  /* 11a9b57b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9b57e mov dword ptr [0x11ab9330], edx */
  w32((uint32_t)(0x11ab9330), (EDX));
L_11a9b584:;
  /* 11a9b584 mov esp, ebp */
  ESP = (EBP);
  /* 11a9b586 pop ebp */
  EBP = (pop32());
  /* 11a9b587 ret  */
  ESPCHK(0x11a9b390u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b590 @ 0x11a9b590 (382 bytes, 135 insns) */
void f_11a9b590(void) {
  FTRACE(0x11a9b590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9b590 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9b591 mov ebp, esp */
  EBP = (ESP);
  /* 11a9b593 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a9b595 push 0x11ab5c88 */
  push32((uint32_t)(0x11ab5c88u));
  /* 11a9b59a push 0x11a986e4 */
  push32((uint32_t)(0x11a986e4u));
  /* 11a9b59f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a9b5a5 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b5a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a9b5ad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b5b0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a9b5b1 push esi */
  push32((uint32_t)(ESI));
  /* 11a9b5b2 push edi */
  push32((uint32_t)(EDI));
  /* 11a9b5b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a9b5b6 cmp dword ptr [0x11aba41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b5bd jne 0x11a9b602 */
  if (!C.zf) goto L_11a9b602;
  /* 11a9b5bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b5c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b5c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9b5c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b5c7 call dword ptr [0x11abc2dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2dc))), 0x11a9b5cdu);
  /* 11a9b5cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9b5cf je 0x11a9b5dd */
  if (C.zf) goto L_11a9b5dd;
  /* 11a9b5d1 mov dword ptr [0x11aba41c], 1 */
  w32((uint32_t)(0x11aba41c), (0x1u));
  /* 11a9b5db jmp 0x11a9b602 */
  goto L_11a9b602;
L_11a9b5dd:;
  /* 11a9b5dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b5df push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b5e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9b5e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b5e5 call dword ptr [0x11abc2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2f8))), 0x11a9b5ebu);
  /* 11a9b5eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9b5ed je 0x11a9b5fb */
  if (C.zf) goto L_11a9b5fb;
  /* 11a9b5ef mov dword ptr [0x11aba41c], 2 */
  w32((uint32_t)(0x11aba41c), (0x2u));
  /* 11a9b5f9 jmp 0x11a9b602 */
  goto L_11a9b602;
L_11a9b5fb:;
  /* 11a9b5fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b5fd jmp 0x11a9b711 */
  goto L_11a9b711;
L_11a9b602:;
  /* 11a9b602 cmp dword ptr [0x11aba41c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba41c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b609 jne 0x11a9b626 */
  if (!C.zf) goto L_11a9b626;
  /* 11a9b60b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9b60e push eax */
  push32((uint32_t)(EAX));
  /* 11a9b60f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9b612 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b613 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9b616 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b617 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b61a push eax */
  push32((uint32_t)(EAX));
  /* 11a9b61b call dword ptr [0x11abc2dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2dc))), 0x11a9b621u);
  /* 11a9b621 jmp 0x11a9b711 */
  goto L_11a9b711;
L_11a9b626:;
  /* 11a9b626 cmp dword ptr [0x11aba41c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11aba41c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b62d jne 0x11a9b70f */
  if (!C.zf) goto L_11a9b70f;
  /* 11a9b633 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b637 jne 0x11a9b642 */
  if (!C.zf) goto L_11a9b642;
  /* 11a9b639 mov ecx, dword ptr [0x11aba2d8] */
  ECX = (r32((uint32_t)(0x11aba2d8)));
  /* 11a9b63f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11a9b642:;
  /* 11a9b642 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b644 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b646 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9b649 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b64a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b64d push eax */
  push32((uint32_t)(EAX));
  /* 11a9b64e call dword ptr [0x11abc2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2f8))), 0x11a9b654u);
  /* 11a9b654 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a9b657 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b65b jne 0x11a9b664 */
  if (!C.zf) goto L_11a9b664;
  /* 11a9b65d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b65f jmp 0x11a9b711 */
  goto L_11a9b711;
L_11a9b664:;
  /* 11a9b664 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a9b66b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a9b66e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b671 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a9b673 call 0x11a8c980 */
  push32(0x11a9b678u); f_11a8c980();
  /* 11a9b678 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11a9b67b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a9b67e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a9b681 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11a9b684 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11a9b68b jmp 0x11a9b6a4 */
  goto L_11a9b6a4;
  /* 11a9b68d mov eax, 1 */
  EAX = (0x1u);
  /* 11a9b692 ret  */
  ESPCHK(0x11a9b590u, _esp0);
  ESP += 4; return;
  /* 11a9b693 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9b696 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11a9b69d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11a9b6a4:;
  /* 11a9b6a4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b6a8 jne 0x11a9b6ae */
  if (!C.zf) goto L_11a9b6ae;
  /* 11a9b6aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b6ac jmp 0x11a9b711 */
  goto L_11a9b711;
L_11a9b6ae:;
  /* 11a9b6ae mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a9b6b1 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b6b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9b6b5 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b6b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9b6b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b6ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b6bd push edx */
  push32((uint32_t)(EDX));
  /* 11a9b6be call dword ptr [0x11abc2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2f8))), 0x11a9b6c4u);
  /* 11a9b6c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9b6c6 jne 0x11a9b6cc */
  if (!C.zf) goto L_11a9b6cc;
  /* 11a9b6c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b6ca jmp 0x11a9b711 */
  goto L_11a9b711;
L_11a9b6cc:;
  /* 11a9b6cc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b6d0 jne 0x11a9b6ed */
  if (!C.zf) goto L_11a9b6ed;
  /* 11a9b6d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b6d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b6d6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a9b6d8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9b6db push eax */
  push32((uint32_t)(EAX));
  /* 11a9b6dc push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9b6de mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9b6e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b6e2 call dword ptr [0x11abc318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc318))), 0x11a9b6e8u);
  /* 11a9b6e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a9b6eb jmp 0x11a9b70a */
  goto L_11a9b70a;
L_11a9b6ed:;
  /* 11a9b6ed mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9b6f0 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b6f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9b6f4 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b6f5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a9b6f7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9b6fa push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b6fb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9b6fd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9b700 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b701 call dword ptr [0x11abc318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc318))), 0x11a9b707u);
  /* 11a9b707 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11a9b70a:;
  /* 11a9b70a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9b70d jmp 0x11a9b711 */
  goto L_11a9b711;
L_11a9b70f:;
  /* 11a9b70f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a9b711:;
  /* 11a9b711 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11a9b714 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9b717 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a9b71e pop edi */
  EDI = (pop32());
  /* 11a9b71f pop esi */
  ESI = (pop32());
  /* 11a9b720 pop ebx */
  EBX = (pop32());
  /* 11a9b721 mov esp, ebp */
  ESP = (EBP);
  /* 11a9b723 pop ebp */
  EBP = (pop32());
  /* 11a9b724 ret  */
  ESPCHK(0x11a9b590u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b730 @ 0x11a9b730 (398 bytes, 140 insns) */
void f_11a9b730(void) {
  FTRACE(0x11a9b730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9b730 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9b731 mov ebp, esp */
  EBP = (ESP);
  /* 11a9b733 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a9b735 push 0x11ab5c98 */
  push32((uint32_t)(0x11ab5c98u));
  /* 11a9b73a push 0x11a986e4 */
  push32((uint32_t)(0x11a986e4u));
  /* 11a9b73f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a9b745 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b746 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a9b74d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b750 push ebx */
  push32((uint32_t)(EBX));
  /* 11a9b751 push esi */
  push32((uint32_t)(ESI));
  /* 11a9b752 push edi */
  push32((uint32_t)(EDI));
  /* 11a9b753 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a9b756 cmp dword ptr [0x11aba420], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba420))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b75d jne 0x11a9b7a2 */
  if (!C.zf) goto L_11a9b7a2;
  /* 11a9b75f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b761 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b763 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9b765 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b767 call dword ptr [0x11abc2dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2dc))), 0x11a9b76du);
  /* 11a9b76d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9b76f je 0x11a9b77d */
  if (C.zf) goto L_11a9b77d;
  /* 11a9b771 mov dword ptr [0x11aba420], 1 */
  w32((uint32_t)(0x11aba420), (0x1u));
  /* 11a9b77b jmp 0x11a9b7a2 */
  goto L_11a9b7a2;
L_11a9b77d:;
  /* 11a9b77d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b77f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b781 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9b783 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b785 call dword ptr [0x11abc2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2f8))), 0x11a9b78bu);
  /* 11a9b78b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9b78d je 0x11a9b79b */
  if (C.zf) goto L_11a9b79b;
  /* 11a9b78f mov dword ptr [0x11aba420], 2 */
  w32((uint32_t)(0x11aba420), (0x2u));
  /* 11a9b799 jmp 0x11a9b7a2 */
  goto L_11a9b7a2;
L_11a9b79b:;
  /* 11a9b79b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b79d jmp 0x11a9b8c1 */
  goto L_11a9b8c1;
L_11a9b7a2:;
  /* 11a9b7a2 cmp dword ptr [0x11aba420], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11aba420))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b7a9 jne 0x11a9b7c6 */
  if (!C.zf) goto L_11a9b7c6;
  /* 11a9b7ab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9b7ae push eax */
  push32((uint32_t)(EAX));
  /* 11a9b7af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9b7b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b7b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9b7b6 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b7b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b7ba push eax */
  push32((uint32_t)(EAX));
  /* 11a9b7bb call dword ptr [0x11abc2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2f8))), 0x11a9b7c1u);
  /* 11a9b7c1 jmp 0x11a9b8c1 */
  goto L_11a9b8c1;
L_11a9b7c6:;
  /* 11a9b7c6 cmp dword ptr [0x11aba420], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba420))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b7cd jne 0x11a9b8bf */
  if (!C.zf) goto L_11a9b8bf;
  /* 11a9b7d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b7d7 jne 0x11a9b7e2 */
  if (!C.zf) goto L_11a9b7e2;
  /* 11a9b7d9 mov ecx, dword ptr [0x11aba2d8] */
  ECX = (r32((uint32_t)(0x11aba2d8)));
  /* 11a9b7df mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11a9b7e2:;
  /* 11a9b7e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b7e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b7e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9b7e9 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b7ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b7ed push eax */
  push32((uint32_t)(EAX));
  /* 11a9b7ee call dword ptr [0x11abc2dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2dc))), 0x11a9b7f4u);
  /* 11a9b7f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a9b7f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b7fb jne 0x11a9b804 */
  if (!C.zf) goto L_11a9b804;
  /* 11a9b7fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b7ff jmp 0x11a9b8c1 */
  goto L_11a9b8c1;
L_11a9b804:;
  /* 11a9b804 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a9b80b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a9b80e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a9b810 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b813 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a9b815 call 0x11a8c980 */
  push32(0x11a9b81au); f_11a8c980();
  /* 11a9b81a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11a9b81d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a9b820 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a9b823 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11a9b826 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11a9b82d jmp 0x11a9b846 */
  goto L_11a9b846;
  /* 11a9b82f mov eax, 1 */
  EAX = (0x1u);
  /* 11a9b834 ret  */
  ESPCHK(0x11a9b730u, _esp0);
  ESP += 4; return;
  /* 11a9b835 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9b838 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11a9b83f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11a9b846:;
  /* 11a9b846 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b84a jne 0x11a9b850 */
  if (!C.zf) goto L_11a9b850;
  /* 11a9b84c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b84e jmp 0x11a9b8c1 */
  goto L_11a9b8c1;
L_11a9b850:;
  /* 11a9b850 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a9b853 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b854 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9b857 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b858 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9b85b push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b85c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b85f push edx */
  push32((uint32_t)(EDX));
  /* 11a9b860 call dword ptr [0x11abc2dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2dc))), 0x11a9b866u);
  /* 11a9b866 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9b868 jne 0x11a9b86e */
  if (!C.zf) goto L_11a9b86e;
  /* 11a9b86a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b86c jmp 0x11a9b8c1 */
  goto L_11a9b8c1;
L_11a9b86e:;
  /* 11a9b86e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b872 jne 0x11a9b896 */
  if (!C.zf) goto L_11a9b896;
  /* 11a9b874 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b876 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b878 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b87a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b87c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a9b87e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9b881 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b882 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11a9b887 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9b88a push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b88b call dword ptr [0x11abc3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3bc))), 0x11a9b891u);
  /* 11a9b891 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a9b894 jmp 0x11a9b8ba */
  goto L_11a9b8ba;
L_11a9b896:;
  /* 11a9b896 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b898 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9b89a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9b89d push edx */
  push32((uint32_t)(EDX));
  /* 11a9b89e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9b8a1 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b8a2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a9b8a4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9b8a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b8a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11a9b8ad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9b8b0 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b8b1 call dword ptr [0x11abc3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3bc))), 0x11a9b8b7u);
  /* 11a9b8b7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11a9b8ba:;
  /* 11a9b8ba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9b8bd jmp 0x11a9b8c1 */
  goto L_11a9b8c1;
L_11a9b8bf:;
  /* 11a9b8bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a9b8c1:;
  /* 11a9b8c1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11a9b8c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9b8c7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a9b8ce pop edi */
  EDI = (pop32());
  /* 11a9b8cf pop esi */
  ESI = (pop32());
  /* 11a9b8d0 pop ebx */
  EBX = (pop32());
  /* 11a9b8d1 mov esp, ebp */
  ESP = (EBP);
  /* 11a9b8d3 pop ebp */
  EBP = (pop32());
  /* 11a9b8d4 ret  */
  ESPCHK(0x11a9b730u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11a9b8e0 (52 bytes, 19 insns) */
void f_11a9b8e0(void) {
  FTRACE(0x11a9b8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9b8e0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a9b8e4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a9b8e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9b8ea mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a9b8ee jne 0x11a9b8f9 */
  if (!C.zf) goto L_11a9b8f9;
  /* 11a9b8f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a9b8f4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11a9b8f6 ret 0x10 */
  ESPCHK(0x11a9b8e0u, _esp0);
  ESP += 20; return;
L_11a9b8f9:;
  /* 11a9b8f9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a9b8fa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11a9b8fc mov ebx, eax */
  EBX = (EAX);
  /* 11a9b8fe mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a9b902 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11a9b906 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b908 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a9b90c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11a9b90e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b910 pop ebx */
  EBX = (pop32());
  /* 11a9b911 ret 0x10 */
  ESPCHK(0x11a9b8e0u, _esp0);
  ESP += 20; return;
}

/* FUN_1001b920 @ 0x11a9b920 (46 bytes, 18 insns) */
void f_11a9b920(void) {
  FTRACE(0x11a9b920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9b920 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9b921 mov ebp, esp */
  EBP = (ESP);
  /* 11a9b923 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b924 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a9b926 call 0x11a8f2d0 */
  push32(0x11a9b92bu); f_11a8f2d0();
  /* 11a9b92b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b92e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b931 push eax */
  push32((uint32_t)(EAX));
  /* 11a9b932 call 0x11a9b950 */
  push32(0x11a9b937u); f_11a9b950();
  /* 11a9b937 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b93a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a9b93d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a9b93f call 0x11a8f370 */
  push32(0x11a9b944u); f_11a8f370();
  /* 11a9b944 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b947 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9b94a mov esp, ebp */
  ESP = (EBP);
  /* 11a9b94c pop ebp */
  EBP = (pop32());
  /* 11a9b94d ret  */
  ESPCHK(0x11a9b920u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11a9b950 (198 bytes, 69 insns) */
void f_11a9b950(void) {
  FTRACE(0x11a9b950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9b950 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9b951 mov ebp, esp */
  EBP = (ESP);
  /* 11a9b953 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9b956 mov eax, dword ptr [0x11aba0dc] */
  EAX = (r32((uint32_t)(0x11aba0dc)));
  /* 11a9b95b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a9b95e cmp dword ptr [0x11abbbc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11abbbc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b965 jne 0x11a9b96e */
  if (!C.zf) goto L_11a9b96e;
  /* 11a9b967 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b969 jmp 0x11a9ba12 */
  goto L_11a9ba12;
L_11a9b96e:;
  /* 11a9b96e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b972 jne 0x11a9b996 */
  if (!C.zf) goto L_11a9b996;
  /* 11a9b974 cmp dword ptr [0x11aba0e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b97b je 0x11a9b996 */
  if (C.zf) goto L_11a9b996;
  /* 11a9b97d call 0x11a9ba70 */
  push32(0x11a9b982u); f_11a9ba70();
  /* 11a9b982 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9b984 je 0x11a9b98d */
  if (C.zf) goto L_11a9b98d;
  /* 11a9b986 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9b988 jmp 0x11a9ba12 */
  goto L_11a9ba12;
L_11a9b98d:;
  /* 11a9b98d mov ecx, dword ptr [0x11aba0dc] */
  ECX = (r32((uint32_t)(0x11aba0dc)));
  /* 11a9b993 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11a9b996:;
  /* 11a9b996 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b99a je 0x11a9ba10 */
  if (C.zf) goto L_11a9ba10;
  /* 11a9b99c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b9a0 je 0x11a9ba10 */
  if (C.zf) goto L_11a9ba10;
  /* 11a9b9a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b9a5 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b9a6 call 0x11a8c610 */
  push32(0x11a9b9abu); f_11a8c610();
  /* 11a9b9ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b9ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a9b9b1:;
  /* 11a9b9b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9b9b4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b9b7 je 0x11a9ba10 */
  if (C.zf) goto L_11a9ba10;
  /* 11a9b9b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9b9bc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a9b9be push edx */
  push32((uint32_t)(EDX));
  /* 11a9b9bf call 0x11a8c610 */
  push32(0x11a9b9c4u); f_11a8c610();
  /* 11a9b9c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b9c7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b9ca jbe 0x11a9ba05 */
  if ((C.cf||C.zf)) goto L_11a9ba05;
  /* 11a9b9cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9b9cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a9b9d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9b9d4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11a9b9d8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9b9db jne 0x11a9ba05 */
  if (!C.zf) goto L_11a9ba05;
  /* 11a9b9dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9b9e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b9e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9b9e4 push edx */
  push32((uint32_t)(EDX));
  /* 11a9b9e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9b9e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a9b9ea push ecx */
  push32((uint32_t)(ECX));
  /* 11a9b9eb call 0x11a9ba20 */
  push32(0x11a9b9f0u); f_11a9ba20();
  /* 11a9b9f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9b9f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9b9f5 jne 0x11a9ba05 */
  if (!C.zf) goto L_11a9ba05;
  /* 11a9b9f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9b9fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a9b9fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9b9ff lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11a9ba03 jmp 0x11a9ba12 */
  goto L_11a9ba12;
L_11a9ba05:;
  /* 11a9ba05 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9ba08 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ba0b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a9ba0e jmp 0x11a9b9b1 */
  goto L_11a9b9b1;
L_11a9ba10:;
  /* 11a9ba10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a9ba12:;
  /* 11a9ba12 mov esp, ebp */
  ESP = (EBP);
  /* 11a9ba14 pop ebp */
  EBP = (pop32());
  /* 11a9ba15 ret  */
  ESPCHK(0x11a9b950u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11a9ba20 (79 bytes, 32 insns) */
void f_11a9ba20(void) {
  FTRACE(0x11a9ba20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9ba20 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9ba21 mov ebp, esp */
  EBP = (ESP);
  /* 11a9ba23 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9ba24 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9ba28 jne 0x11a9ba2e */
  if (!C.zf) goto L_11a9ba2e;
  /* 11a9ba2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9ba2c jmp 0x11a9ba6b */
  goto L_11a9ba6b;
L_11a9ba2e:;
  /* 11a9ba2e mov eax, dword ptr [0x11aba450] */
  EAX = (r32((uint32_t)(0x11aba450)));
  /* 11a9ba33 push eax */
  push32((uint32_t)(EAX));
  /* 11a9ba34 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9ba37 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9ba38 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9ba3b push edx */
  push32((uint32_t)(EDX));
  /* 11a9ba3c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9ba3f push eax */
  push32((uint32_t)(EAX));
  /* 11a9ba40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9ba43 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9ba44 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9ba46 mov edx, dword ptr [0x11aba6e4] */
  EDX = (r32((uint32_t)(0x11aba6e4)));
  /* 11a9ba4c push edx */
  push32((uint32_t)(EDX));
  /* 11a9ba4d call 0x11a9bb20 */
  push32(0x11a9ba52u); f_11a9bb20();
  /* 11a9ba52 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9ba55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a9ba58 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9ba5c jne 0x11a9ba65 */
  if (!C.zf) goto L_11a9ba65;
  /* 11a9ba5e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11a9ba63 jmp 0x11a9ba6b */
  goto L_11a9ba6b;
L_11a9ba65:;
  /* 11a9ba65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9ba68 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11a9ba6b:;
  /* 11a9ba6b mov esp, ebp */
  ESP = (EBP);
  /* 11a9ba6d pop ebp */
  EBP = (pop32());
  /* 11a9ba6e ret  */
  ESPCHK(0x11a9ba20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ba70 @ 0x11a9ba70 (174 bytes, 66 insns) */
void f_11a9ba70(void) {
  FTRACE(0x11a9ba70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9ba70 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9ba71 mov ebp, esp */
  EBP = (ESP);
  /* 11a9ba73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9ba76 mov eax, dword ptr [0x11aba0e4] */
  EAX = (r32((uint32_t)(0x11aba0e4)));
  /* 11a9ba7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a9ba7e:;
  /* 11a9ba7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9ba81 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9ba84 je 0x11a9bb18 */
  if (C.zf) goto L_11a9bb18;
  /* 11a9ba8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9ba8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9ba8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9ba90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9ba92 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a9ba94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9ba97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a9ba99 push eax */
  push32((uint32_t)(EAX));
  /* 11a9ba9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9ba9c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9ba9e call dword ptr [0x11abc3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3bc))), 0x11a9baa4u);
  /* 11a9baa4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a9baa7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9baab jne 0x11a9bab2 */
  if (!C.zf) goto L_11a9bab2;
  /* 11a9baad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9bab0 jmp 0x11a9bb1a */
  goto L_11a9bb1a;
L_11a9bab2:;
  /* 11a9bab2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11a9bab4 push 0x11ab5ca4 */
  push32((uint32_t)(0x11ab5ca4u));
  /* 11a9bab9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9babb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9babe push ecx */
  push32((uint32_t)(ECX));
  /* 11a9babf call 0x11a897e0 */
  push32(0x11a9bac4u); f_11a897e0();
  /* 11a9bac4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9bac7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a9baca cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bace jne 0x11a9bad5 */
  if (!C.zf) goto L_11a9bad5;
  /* 11a9bad0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9bad3 jmp 0x11a9bb1a */
  goto L_11a9bb1a;
L_11a9bad5:;
  /* 11a9bad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9bad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9bad9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9badc push edx */
  push32((uint32_t)(EDX));
  /* 11a9badd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9bae0 push eax */
  push32((uint32_t)(EAX));
  /* 11a9bae1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a9bae3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9bae6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a9bae8 push edx */
  push32((uint32_t)(EDX));
  /* 11a9bae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9baeb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9baed call dword ptr [0x11abc3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3bc))), 0x11a9baf3u);
  /* 11a9baf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9baf5 jne 0x11a9bafc */
  if (!C.zf) goto L_11a9bafc;
  /* 11a9baf7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9bafa jmp 0x11a9bb1a */
  goto L_11a9bb1a;
L_11a9bafc:;
  /* 11a9bafc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9bafe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9bb01 push eax */
  push32((uint32_t)(EAX));
  /* 11a9bb02 call 0x11a9bf70 */
  push32(0x11a9bb07u); f_11a9bf70();
  /* 11a9bb07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9bb0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9bb0d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9bb10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a9bb13 jmp 0x11a9ba7e */
  goto L_11a9ba7e;
L_11a9bb18:;
  /* 11a9bb18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a9bb1a:;
  /* 11a9bb1a mov esp, ebp */
  ESP = (EBP);
  /* 11a9bb1c pop ebp */
  EBP = (pop32());
  /* 11a9bb1d ret  */
  ESPCHK(0x11a9ba70u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bb20 @ 0x11a9bb20 (970 bytes, 340 insns) */
void f_11a9bb20(void) {
  FTRACE(0x11a9bb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9bb20 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9bb21 mov ebp, esp */
  EBP = (ESP);
  /* 11a9bb23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a9bb25 push 0x11ab5cf8 */
  push32((uint32_t)(0x11ab5cf8u));
  /* 11a9bb2a push 0x11a986e4 */
  push32((uint32_t)(0x11a986e4u));
  /* 11a9bb2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a9bb35 push eax */
  push32((uint32_t)(EAX));
  /* 11a9bb36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a9bb3d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9bb40 push ebx */
  push32((uint32_t)(EBX));
  /* 11a9bb41 push esi */
  push32((uint32_t)(ESI));
  /* 11a9bb42 push edi */
  push32((uint32_t)(EDI));
  /* 11a9bb43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a9bb46 cmp dword ptr [0x11aba424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bb4d jne 0x11a9bba6 */
  if (!C.zf) goto L_11a9bba6;
  /* 11a9bb4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9bb51 push 0x11ab53b4 */
  push32((uint32_t)(0x11ab53b4u));
  /* 11a9bb56 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9bb58 push 0x11ab53b4 */
  push32((uint32_t)(0x11ab53b4u));
  /* 11a9bb5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9bb5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9bb61 call dword ptr [0x11abc2d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2d8))), 0x11a9bb67u);
  /* 11a9bb67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9bb69 je 0x11a9bb77 */
  if (C.zf) goto L_11a9bb77;
  /* 11a9bb6b mov dword ptr [0x11aba424], 1 */
  w32((uint32_t)(0x11aba424), (0x1u));
  /* 11a9bb75 jmp 0x11a9bba6 */
  goto L_11a9bba6;
L_11a9bb77:;
  /* 11a9bb77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9bb79 push 0x11ab53b0 */
  push32((uint32_t)(0x11ab53b0u));
  /* 11a9bb7e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9bb80 push 0x11ab53b0 */
  push32((uint32_t)(0x11ab53b0u));
  /* 11a9bb85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9bb87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9bb89 call dword ptr [0x11abc2e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2e4))), 0x11a9bb8fu);
  /* 11a9bb8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9bb91 je 0x11a9bb9f */
  if (C.zf) goto L_11a9bb9f;
  /* 11a9bb93 mov dword ptr [0x11aba424], 2 */
  w32((uint32_t)(0x11aba424), (0x2u));
  /* 11a9bb9d jmp 0x11a9bba6 */
  goto L_11a9bba6;
L_11a9bb9f:;
  /* 11a9bb9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9bba1 jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bba6:;
  /* 11a9bba6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bbaa jle 0x11a9bbbf */
  if ((C.zf||C.sf!=C.of)) goto L_11a9bbbf;
  /* 11a9bbac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9bbaf push eax */
  push32((uint32_t)(EAX));
  /* 11a9bbb0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9bbb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9bbb4 call 0x11a9bf20 */
  push32(0x11a9bbb9u); f_11a9bf20();
  /* 11a9bbb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9bbbc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11a9bbbf:;
  /* 11a9bbbf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bbc3 jle 0x11a9bbd8 */
  if ((C.zf||C.sf!=C.of)) goto L_11a9bbd8;
  /* 11a9bbc5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a9bbc8 push edx */
  push32((uint32_t)(EDX));
  /* 11a9bbc9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9bbcc push eax */
  push32((uint32_t)(EAX));
  /* 11a9bbcd call 0x11a9bf20 */
  push32(0x11a9bbd2u); f_11a9bf20();
  /* 11a9bbd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9bbd5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11a9bbd8:;
  /* 11a9bbd8 cmp dword ptr [0x11aba424], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11aba424))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bbdf jne 0x11a9bc04 */
  if (!C.zf) goto L_11a9bc04;
  /* 11a9bbe1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a9bbe4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9bbe5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9bbe8 push edx */
  push32((uint32_t)(EDX));
  /* 11a9bbe9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9bbec push eax */
  push32((uint32_t)(EAX));
  /* 11a9bbed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9bbf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9bbf1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9bbf4 push edx */
  push32((uint32_t)(EDX));
  /* 11a9bbf5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9bbf8 push eax */
  push32((uint32_t)(EAX));
  /* 11a9bbf9 call dword ptr [0x11abc2e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2e4))), 0x11a9bbffu);
  /* 11a9bbff jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bc04:;
  /* 11a9bc04 cmp dword ptr [0x11aba424], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba424))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bc0b jne 0x11a9bf02 */
  if (!C.zf) goto L_11a9bf02;
  /* 11a9bc11 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bc15 jne 0x11a9bc20 */
  if (!C.zf) goto L_11a9bc20;
  /* 11a9bc17 mov ecx, dword ptr [0x11aba2d8] */
  ECX = (r32((uint32_t)(0x11aba2d8)));
  /* 11a9bc1d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11a9bc20:;
  /* 11a9bc20 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bc24 je 0x11a9bc30 */
  if (C.zf) goto L_11a9bc30;
  /* 11a9bc26 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bc2a jne 0x11a9bdac */
  if (!C.zf) goto L_11a9bdac;
L_11a9bc30:;
  /* 11a9bc30 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9bc33 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bc36 jne 0x11a9bc42 */
  if (!C.zf) goto L_11a9bc42;
  /* 11a9bc38 mov eax, 2 */
  EAX = (0x2u);
  /* 11a9bc3d jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bc42:;
  /* 11a9bc42 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bc46 jle 0x11a9bc52 */
  if ((C.zf||C.sf!=C.of)) goto L_11a9bc52;
  /* 11a9bc48 mov eax, 1 */
  EAX = (0x1u);
  /* 11a9bc4d jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bc52:;
  /* 11a9bc52 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bc56 jle 0x11a9bc62 */
  if ((C.zf||C.sf!=C.of)) goto L_11a9bc62;
  /* 11a9bc58 mov eax, 3 */
  EAX = (0x3u);
  /* 11a9bc5d jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bc62:;
  /* 11a9bc62 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11a9bc65 push eax */
  push32((uint32_t)(EAX));
  /* 11a9bc66 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a9bc69 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9bc6a call dword ptr [0x11abc330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc330))), 0x11a9bc70u);
  /* 11a9bc70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9bc72 jne 0x11a9bc7b */
  if (!C.zf) goto L_11a9bc7b;
  /* 11a9bc74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9bc76 jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bc7b:;
  /* 11a9bc7b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bc7f jne 0x11a9bc87 */
  if (!C.zf) goto L_11a9bc87;
  /* 11a9bc81 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bc85 je 0x11a9bcb4 */
  if (C.zf) goto L_11a9bcb4;
L_11a9bc87:;
  /* 11a9bc87 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bc8b jne 0x11a9bc93 */
  if (!C.zf) goto L_11a9bc93;
  /* 11a9bc8d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bc91 je 0x11a9bcb4 */
  if (C.zf) goto L_11a9bcb4;
L_11a9bc93:;
  /* 11a9bc93 push 0x11ab5cb8 */
  push32((uint32_t)(0x11ab5cb8u));
  /* 11a9bc98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9bc9a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11a9bc9f push 0x11ab5cb0 */
  push32((uint32_t)(0x11ab5cb0u));
  /* 11a9bca4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9bca6 call 0x11a868a0 */
  push32(0x11a9bcabu); f_11a868a0();
  /* 11a9bcab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9bcae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bcb1 jne 0x11a9bcb4 */
  if (!C.zf) goto L_11a9bcb4;
  /* 11a9bcb3 int3  */
  x86_unimpl("int3 @ 0x11a9bcb3");
L_11a9bcb4:;
  /* 11a9bcb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9bcb6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9bcb8 jne 0x11a9bc7b */
  if (!C.zf) goto L_11a9bc7b;
  /* 11a9bcba cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bcbe jle 0x11a9bd33 */
  if ((C.zf||C.sf!=C.of)) goto L_11a9bd33;
  /* 11a9bcc0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bcc4 jae 0x11a9bcd0 */
  if (!C.cf) goto L_11a9bcd0;
  /* 11a9bcc6 mov eax, 3 */
  EAX = (0x3u);
  /* 11a9bccb jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bcd0:;
  /* 11a9bcd0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11a9bcd3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11a9bcd6 jmp 0x11a9bce1 */
  goto L_11a9bce1;
L_11a9bcd8:;
  /* 11a9bcd8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a9bcdb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9bcde mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11a9bce1:;
  /* 11a9bce1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a9bce4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9bce6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a9bce8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9bcea je 0x11a9bd29 */
  if (C.zf) goto L_11a9bd29;
  /* 11a9bcec mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a9bcef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9bcf1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11a9bcf4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9bcf6 je 0x11a9bd29 */
  if (C.zf) goto L_11a9bd29;
  /* 11a9bcf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9bcfb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9bcfd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a9bcff mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a9bd02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9bd04 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a9bd06 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bd08 jl 0x11a9bd27 */
  if ((C.sf!=C.of)) goto L_11a9bd27;
  /* 11a9bd0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9bd0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9bd0f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a9bd11 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a9bd14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9bd16 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11a9bd19 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bd1b jg 0x11a9bd27 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a9bd27;
  /* 11a9bd1d mov eax, 2 */
  EAX = (0x2u);
  /* 11a9bd22 jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bd27:;
  /* 11a9bd27 jmp 0x11a9bcd8 */
  goto L_11a9bcd8;
L_11a9bd29:;
  /* 11a9bd29 mov eax, 3 */
  EAX = (0x3u);
  /* 11a9bd2e jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bd33:;
  /* 11a9bd33 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bd37 jle 0x11a9bdac */
  if ((C.zf||C.sf!=C.of)) goto L_11a9bdac;
  /* 11a9bd39 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bd3d jae 0x11a9bd49 */
  if (!C.cf) goto L_11a9bd49;
  /* 11a9bd3f mov eax, 1 */
  EAX = (0x1u);
  /* 11a9bd44 jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bd49:;
  /* 11a9bd49 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11a9bd4c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11a9bd4f jmp 0x11a9bd5a */
  goto L_11a9bd5a;
L_11a9bd51:;
  /* 11a9bd51 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a9bd54 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9bd57 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11a9bd5a:;
  /* 11a9bd5a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a9bd5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9bd5f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a9bd61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9bd63 je 0x11a9bda2 */
  if (C.zf) goto L_11a9bda2;
  /* 11a9bd65 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a9bd68 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9bd6a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11a9bd6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a9bd6f je 0x11a9bda2 */
  if (C.zf) goto L_11a9bda2;
  /* 11a9bd71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9bd74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9bd76 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a9bd78 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a9bd7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9bd7d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a9bd7f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bd81 jl 0x11a9bda0 */
  if ((C.sf!=C.of)) goto L_11a9bda0;
  /* 11a9bd83 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9bd86 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9bd88 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a9bd8a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a9bd8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9bd8f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11a9bd92 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bd94 jg 0x11a9bda0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a9bda0;
  /* 11a9bd96 mov eax, 2 */
  EAX = (0x2u);
  /* 11a9bd9b jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bda0:;
  /* 11a9bda0 jmp 0x11a9bd51 */
  goto L_11a9bd51;
L_11a9bda2:;
  /* 11a9bda2 mov eax, 1 */
  EAX = (0x1u);
  /* 11a9bda7 jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bdac:;
  /* 11a9bdac push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9bdae push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9bdb0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9bdb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9bdb4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9bdb7 push edx */
  push32((uint32_t)(EDX));
  /* 11a9bdb8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a9bdba mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a9bdbd push eax */
  push32((uint32_t)(EAX));
  /* 11a9bdbe call dword ptr [0x11abc318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc318))), 0x11a9bdc4u);
  /* 11a9bdc4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a9bdc7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bdcb jne 0x11a9bdd4 */
  if (!C.zf) goto L_11a9bdd4;
  /* 11a9bdcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9bdcf jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bdd4:;
  /* 11a9bdd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a9bddb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a9bdde shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a9bde0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9bde3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a9bde5 call 0x11a8c980 */
  push32(0x11a9bdeau); f_11a8c980();
  /* 11a9bdea mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11a9bded mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a9bdf0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11a9bdf3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11a9bdf6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11a9bdfd jmp 0x11a9be16 */
  goto L_11a9be16;
  /* 11a9bdff mov eax, 1 */
  EAX = (0x1u);
  /* 11a9be04 ret  */
  ESPCHK(0x11a9bb20u, _esp0);
  ESP += 4; return;
  /* 11a9be05 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9be08 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11a9be0f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11a9be16:;
  /* 11a9be16 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9be1a jne 0x11a9be23 */
  if (!C.zf) goto L_11a9be23;
  /* 11a9be1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9be1e jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9be23:;
  /* 11a9be23 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a9be26 push edx */
  push32((uint32_t)(EDX));
  /* 11a9be27 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9be2a push eax */
  push32((uint32_t)(EAX));
  /* 11a9be2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9be2e push ecx */
  push32((uint32_t)(ECX));
  /* 11a9be2f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9be32 push edx */
  push32((uint32_t)(EDX));
  /* 11a9be33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9be35 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a9be38 push eax */
  push32((uint32_t)(EAX));
  /* 11a9be39 call dword ptr [0x11abc318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc318))), 0x11a9be3fu);
  /* 11a9be3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9be41 jne 0x11a9be4a */
  if (!C.zf) goto L_11a9be4a;
  /* 11a9be43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9be45 jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9be4a:;
  /* 11a9be4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9be4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9be4e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a9be51 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9be52 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9be55 push edx */
  push32((uint32_t)(EDX));
  /* 11a9be56 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a9be58 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a9be5b push eax */
  push32((uint32_t)(EAX));
  /* 11a9be5c call dword ptr [0x11abc318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc318))), 0x11a9be62u);
  /* 11a9be62 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a9be65 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9be69 jne 0x11a9be72 */
  if (!C.zf) goto L_11a9be72;
  /* 11a9be6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9be6d jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9be72:;
  /* 11a9be72 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a9be79 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9be7c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a9be7e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9be81 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a9be83 call 0x11a8c980 */
  push32(0x11a9be88u); f_11a8c980();
  /* 11a9be88 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11a9be8b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a9be8e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11a9be91 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11a9be94 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11a9be9b jmp 0x11a9beb4 */
  goto L_11a9beb4;
  /* 11a9be9d mov eax, 1 */
  EAX = (0x1u);
  /* 11a9bea2 ret  */
  ESPCHK(0x11a9bb20u, _esp0);
  ESP += 4; return;
  /* 11a9bea3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9bea6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11a9bead mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11a9beb4:;
  /* 11a9beb4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9beb8 jne 0x11a9bebe */
  if (!C.zf) goto L_11a9bebe;
  /* 11a9beba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9bebc jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bebe:;
  /* 11a9bebe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9bec1 push edx */
  push32((uint32_t)(EDX));
  /* 11a9bec2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a9bec5 push eax */
  push32((uint32_t)(EAX));
  /* 11a9bec6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a9bec9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9beca mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9becd push edx */
  push32((uint32_t)(EDX));
  /* 11a9bece push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9bed0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a9bed3 push eax */
  push32((uint32_t)(EAX));
  /* 11a9bed4 call dword ptr [0x11abc318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc318))), 0x11a9bedau);
  /* 11a9beda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9bedc jne 0x11a9bee2 */
  if (!C.zf) goto L_11a9bee2;
  /* 11a9bede xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9bee0 jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bee2:;
  /* 11a9bee2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9bee5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9bee6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a9bee9 push edx */
  push32((uint32_t)(EDX));
  /* 11a9beea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a9beed push eax */
  push32((uint32_t)(EAX));
  /* 11a9beee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9bef1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9bef2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9bef5 push edx */
  push32((uint32_t)(EDX));
  /* 11a9bef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9bef9 push eax */
  push32((uint32_t)(EAX));
  /* 11a9befa call dword ptr [0x11abc2d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2d8))), 0x11a9bf00u);
  /* 11a9bf00 jmp 0x11a9bf04 */
  goto L_11a9bf04;
L_11a9bf02:;
  /* 11a9bf02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a9bf04:;
  /* 11a9bf04 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11a9bf07 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9bf0a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a9bf11 pop edi */
  EDI = (pop32());
  /* 11a9bf12 pop esi */
  ESI = (pop32());
  /* 11a9bf13 pop ebx */
  EBX = (pop32());
  /* 11a9bf14 mov esp, ebp */
  ESP = (EBP);
  /* 11a9bf16 pop ebp */
  EBP = (pop32());
  /* 11a9bf17 ret  */
  ESPCHK(0x11a9bb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bf20 @ 0x11a9bf20 (80 bytes, 32 insns) */
void f_11a9bf20(void) {
  FTRACE(0x11a9bf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9bf20 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9bf21 mov ebp, esp */
  EBP = (ESP);
  /* 11a9bf23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9bf26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9bf29 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a9bf2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9bf2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a9bf32:;
  /* 11a9bf32 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9bf35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9bf38 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9bf3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a9bf3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9bf40 je 0x11a9bf57 */
  if (C.zf) goto L_11a9bf57;
  /* 11a9bf42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9bf45 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a9bf48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9bf4a je 0x11a9bf57 */
  if (C.zf) goto L_11a9bf57;
  /* 11a9bf4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9bf4f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9bf52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a9bf55 jmp 0x11a9bf32 */
  goto L_11a9bf32;
L_11a9bf57:;
  /* 11a9bf57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9bf5a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a9bf5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9bf5f jne 0x11a9bf69 */
  if (!C.zf) goto L_11a9bf69;
  /* 11a9bf61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9bf64 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9bf67 jmp 0x11a9bf6c */
  goto L_11a9bf6c;
L_11a9bf69:;
  /* 11a9bf69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11a9bf6c:;
  /* 11a9bf6c mov esp, ebp */
  ESP = (EBP);
  /* 11a9bf6e pop ebp */
  EBP = (pop32());
  /* 11a9bf6f ret  */
  ESPCHK(0x11a9bf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bf70 @ 0x11a9bf70 (736 bytes, 224 insns) */
void f_11a9bf70(void) {
  FTRACE(0x11a9bf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9bf70 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9bf71 mov ebp, esp */
  EBP = (ESP);
  /* 11a9bf73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9bf76 push esi */
  push32((uint32_t)(ESI));
  /* 11a9bf77 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bf7b je 0x11a9bf9c */
  if (C.zf) goto L_11a9bf9c;
  /* 11a9bf7d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11a9bf7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9bf82 push eax */
  push32((uint32_t)(EAX));
  /* 11a9bf83 call 0x11a9c3c0 */
  push32(0x11a9bf88u); f_11a9c3c0();
  /* 11a9bf88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9bf8b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a9bf8e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bf92 je 0x11a9bf9c */
  if (C.zf) goto L_11a9bf9c;
  /* 11a9bf94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9bf97 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bf9a jne 0x11a9bfa4 */
  if (!C.zf) goto L_11a9bfa4;
L_11a9bf9c:;
  /* 11a9bf9c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9bf9f jmp 0x11a9c24b */
  goto L_11a9c24b;
L_11a9bfa4:;
  /* 11a9bfa4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9bfa7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11a9bfab neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a9bfad sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9bfaf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a9bfb0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a9bfb3 mov ecx, dword ptr [0x11aba0dc] */
  ECX = (r32((uint32_t)(0x11aba0dc)));
  /* 11a9bfb9 cmp ecx, dword ptr [0x11aba0e0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11aba0e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bfbf jne 0x11a9bfd5 */
  if (!C.zf) goto L_11a9bfd5;
  /* 11a9bfc1 mov edx, dword ptr [0x11aba0dc] */
  EDX = (r32((uint32_t)(0x11aba0dc)));
  /* 11a9bfc7 push edx */
  push32((uint32_t)(EDX));
  /* 11a9bfc8 call 0x11a9c2d0 */
  push32(0x11a9bfcdu); f_11a9c2d0();
  /* 11a9bfcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9bfd0 mov dword ptr [0x11aba0dc], eax */
  w32((uint32_t)(0x11aba0dc), (EAX));
L_11a9bfd5:;
  /* 11a9bfd5 cmp dword ptr [0x11aba0dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bfdc jne 0x11a9c095 */
  if (!C.zf) goto L_11a9c095;
  /* 11a9bfe2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bfe6 je 0x11a9c007 */
  if (C.zf) goto L_11a9c007;
  /* 11a9bfe8 cmp dword ptr [0x11aba0e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9bfef je 0x11a9c007 */
  if (C.zf) goto L_11a9c007;
  /* 11a9bff1 call 0x11a9ba70 */
  push32(0x11a9bff6u); f_11a9ba70();
  /* 11a9bff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9bff8 je 0x11a9c002 */
  if (C.zf) goto L_11a9c002;
  /* 11a9bffa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9bffd jmp 0x11a9c24b */
  goto L_11a9c24b;
L_11a9c002:;
  /* 11a9c002 jmp 0x11a9c095 */
  goto L_11a9c095;
L_11a9c007:;
  /* 11a9c007 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c00b je 0x11a9c014 */
  if (C.zf) goto L_11a9c014;
  /* 11a9c00d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9c00f jmp 0x11a9c24b */
  goto L_11a9c24b;
L_11a9c014:;
  /* 11a9c014 cmp dword ptr [0x11aba0dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c01b jne 0x11a9c054 */
  if (!C.zf) goto L_11a9c054;
  /* 11a9c01d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11a9c022 push 0x11ab5d10 */
  push32((uint32_t)(0x11ab5d10u));
  /* 11a9c027 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9c029 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a9c02b call 0x11a897e0 */
  push32(0x11a9c030u); f_11a897e0();
  /* 11a9c030 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c033 mov dword ptr [0x11aba0dc], eax */
  w32((uint32_t)(0x11aba0dc), (EAX));
  /* 11a9c038 cmp dword ptr [0x11aba0dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c03f jne 0x11a9c049 */
  if (!C.zf) goto L_11a9c049;
  /* 11a9c041 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9c044 jmp 0x11a9c24b */
  goto L_11a9c24b;
L_11a9c049:;
  /* 11a9c049 mov eax, dword ptr [0x11aba0dc] */
  EAX = (r32((uint32_t)(0x11aba0dc)));
  /* 11a9c04e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11a9c054:;
  /* 11a9c054 cmp dword ptr [0x11aba0e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c05b jne 0x11a9c095 */
  if (!C.zf) goto L_11a9c095;
  /* 11a9c05d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11a9c062 push 0x11ab5d10 */
  push32((uint32_t)(0x11ab5d10u));
  /* 11a9c067 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9c069 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a9c06b call 0x11a897e0 */
  push32(0x11a9c070u); f_11a897e0();
  /* 11a9c070 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c073 mov dword ptr [0x11aba0e4], eax */
  w32((uint32_t)(0x11aba0e4), (EAX));
  /* 11a9c078 cmp dword ptr [0x11aba0e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c07f jne 0x11a9c089 */
  if (!C.zf) goto L_11a9c089;
  /* 11a9c081 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9c084 jmp 0x11a9c24b */
  goto L_11a9c24b;
L_11a9c089:;
  /* 11a9c089 mov ecx, dword ptr [0x11aba0e4] */
  ECX = (r32((uint32_t)(0x11aba0e4)));
  /* 11a9c08f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11a9c095:;
  /* 11a9c095 mov edx, dword ptr [0x11aba0dc] */
  EDX = (r32((uint32_t)(0x11aba0dc)));
  /* 11a9c09b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a9c09e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9c0a1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9c0a4 push eax */
  push32((uint32_t)(EAX));
  /* 11a9c0a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c0a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9c0a9 call 0x11a9c250 */
  push32(0x11a9c0aeu); f_11a9c250();
  /* 11a9c0ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c0b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a9c0b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c0b8 jl 0x11a9c151 */
  if ((C.sf!=C.of)) goto L_11a9c151;
  /* 11a9c0be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c0c1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c0c4 je 0x11a9c151 */
  if (C.zf) goto L_11a9c151;
  /* 11a9c0ca cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c0ce je 0x11a9c143 */
  if (C.zf) goto L_11a9c143;
  /* 11a9c0d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9c0d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c0d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c0d8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11a9c0db push edx */
  push32((uint32_t)(EDX));
  /* 11a9c0dc call 0x11a8a270 */
  push32(0x11a9c0e1u); f_11a8a270();
  /* 11a9c0e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c0e4 jmp 0x11a9c0ef */
  goto L_11a9c0ef;
L_11a9c0e6:;
  /* 11a9c0e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c0e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c0ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a9c0ef:;
  /* 11a9c0ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c0f2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c0f5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c0f9 je 0x11a9c110 */
  if (C.zf) goto L_11a9c110;
  /* 11a9c0fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c0fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c101 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c104 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c107 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11a9c10b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11a9c10e jmp 0x11a9c0e6 */
  goto L_11a9c0e6;
L_11a9c110:;
  /* 11a9c110 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11a9c115 push 0x11ab5d10 */
  push32((uint32_t)(0x11ab5d10u));
  /* 11a9c11a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9c11c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c11f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a9c122 push eax */
  push32((uint32_t)(EAX));
  /* 11a9c123 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c126 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9c127 call 0x11a89c70 */
  push32(0x11a9c12cu); f_11a89c70();
  /* 11a9c12c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c12f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a9c132 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c136 je 0x11a9c141 */
  if (C.zf) goto L_11a9c141;
  /* 11a9c138 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c13b mov dword ptr [0x11aba0dc], edx */
  w32((uint32_t)(0x11aba0dc), (EDX));
L_11a9c141:;
  /* 11a9c141 jmp 0x11a9c14f */
  goto L_11a9c14f;
L_11a9c143:;
  /* 11a9c143 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c146 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c149 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c14c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11a9c14f:;
  /* 11a9c14f jmp 0x11a9c1c4 */
  goto L_11a9c1c4;
L_11a9c151:;
  /* 11a9c151 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c155 jne 0x11a9c1bd */
  if (!C.zf) goto L_11a9c1bd;
  /* 11a9c157 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c15b jge 0x11a9c165 */
  if ((C.sf==C.of)) goto L_11a9c165;
  /* 11a9c15d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c160 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a9c162 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a9c165:;
  /* 11a9c165 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11a9c16a push 0x11ab5d10 */
  push32((uint32_t)(0x11ab5d10u));
  /* 11a9c16f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9c171 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c174 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11a9c17b push edx */
  push32((uint32_t)(EDX));
  /* 11a9c17c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c17f push eax */
  push32((uint32_t)(EAX));
  /* 11a9c180 call 0x11a89c70 */
  push32(0x11a9c185u); f_11a89c70();
  /* 11a9c185 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c188 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a9c18b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c18f jne 0x11a9c199 */
  if (!C.zf) goto L_11a9c199;
  /* 11a9c191 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9c194 jmp 0x11a9c24b */
  goto L_11a9c24b;
L_11a9c199:;
  /* 11a9c199 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c19c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c19f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c1a2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11a9c1a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c1a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c1ab mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11a9c1b3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c1b6 mov dword ptr [0x11aba0dc], eax */
  w32((uint32_t)(0x11aba0dc), (EAX));
  /* 11a9c1bb jmp 0x11a9c1c4 */
  goto L_11a9c1c4;
L_11a9c1bd:;
  /* 11a9c1bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9c1bf jmp 0x11a9c24b */
  goto L_11a9c24b;
L_11a9c1c4:;
  /* 11a9c1c4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c1c8 je 0x11a9c249 */
  if (C.zf) goto L_11a9c249;
  /* 11a9c1ca push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11a9c1cf push 0x11ab5d10 */
  push32((uint32_t)(0x11ab5d10u));
  /* 11a9c1d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9c1d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c1d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9c1da call 0x11a8c610 */
  push32(0x11a9c1dfu); f_11a8c610();
  /* 11a9c1df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c1e2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c1e5 push eax */
  push32((uint32_t)(EAX));
  /* 11a9c1e6 call 0x11a897e0 */
  push32(0x11a9c1ebu); f_11a897e0();
  /* 11a9c1eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c1ee mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a9c1f1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c1f5 je 0x11a9c249 */
  if (C.zf) goto L_11a9c249;
  /* 11a9c1f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c1fa push edx */
  push32((uint32_t)(EDX));
  /* 11a9c1fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9c1fe push eax */
  push32((uint32_t)(EAX));
  /* 11a9c1ff call 0x11a8c790 */
  push32(0x11a9c204u); f_11a8c790();
  /* 11a9c204 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c207 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9c20a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9c20d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9c210 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c212 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a9c215 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9c218 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11a9c21b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9c21e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c221 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a9c224 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9c227 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a9c229 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9c22b not edx */
  EDX = (~(EDX));
  /* 11a9c22d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11a9c230 push edx */
  push32((uint32_t)(EDX));
  /* 11a9c231 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9c234 push eax */
  push32((uint32_t)(EAX));
  /* 11a9c235 call dword ptr [0x11abc2d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2d4))), 0x11a9c23bu);
  /* 11a9c23b push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9c23d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9c240 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9c241 call 0x11a8a270 */
  push32(0x11a9c246u); f_11a8a270();
  /* 11a9c246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a9c249:;
  /* 11a9c249 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a9c24b:;
  /* 11a9c24b pop esi */
  ESI = (pop32());
  /* 11a9c24c mov esp, ebp */
  ESP = (EBP);
  /* 11a9c24e pop ebp */
  EBP = (pop32());
  /* 11a9c24f ret  */
  ESPCHK(0x11a9bf70u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11a9c250 (124 bytes, 47 insns) */
void f_11a9c250(void) {
  FTRACE(0x11a9c250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9c250 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9c251 mov ebp, esp */
  EBP = (ESP);
  /* 11a9c253 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9c254 mov eax, dword ptr [0x11aba0dc] */
  EAX = (r32((uint32_t)(0x11aba0dc)));
  /* 11a9c259 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a9c25c jmp 0x11a9c267 */
  goto L_11a9c267;
L_11a9c25e:;
  /* 11a9c25e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9c261 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c264 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a9c267:;
  /* 11a9c267 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9c26a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c26d je 0x11a9c2ba */
  if (C.zf) goto L_11a9c2ba;
  /* 11a9c26f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9c272 push eax */
  push32((uint32_t)(EAX));
  /* 11a9c273 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9c276 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a9c278 push edx */
  push32((uint32_t)(EDX));
  /* 11a9c279 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c27c push eax */
  push32((uint32_t)(EAX));
  /* 11a9c27d call 0x11a9ba20 */
  push32(0x11a9c282u); f_11a9ba20();
  /* 11a9c282 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c285 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9c287 jne 0x11a9c2b8 */
  if (!C.zf) goto L_11a9c2b8;
  /* 11a9c289 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9c28c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a9c28e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9c291 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11a9c295 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c298 je 0x11a9c2aa */
  if (C.zf) goto L_11a9c2aa;
  /* 11a9c29a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9c29d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a9c29f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9c2a2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11a9c2a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9c2a8 jne 0x11a9c2b8 */
  if (!C.zf) goto L_11a9c2b8;
L_11a9c2aa:;
  /* 11a9c2aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9c2ad sub eax, dword ptr [0x11aba0dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11aba0dc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9c2b3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a9c2b6 jmp 0x11a9c2c8 */
  goto L_11a9c2c8;
L_11a9c2b8:;
  /* 11a9c2b8 jmp 0x11a9c25e */
  goto L_11a9c25e;
L_11a9c2ba:;
  /* 11a9c2ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9c2bd sub eax, dword ptr [0x11aba0dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11aba0dc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9c2c3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a9c2c6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11a9c2c8:;
  /* 11a9c2c8 mov esp, ebp */
  ESP = (EBP);
  /* 11a9c2ca pop ebp */
  EBP = (pop32());
  /* 11a9c2cb ret  */
  ESPCHK(0x11a9c250u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11a9c2d0 (238 bytes, 80 insns) */
void f_11a9c2d0(void) {
  FTRACE(0x11a9c2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9c2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9c2d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a9c2d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9c2d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11a9c2dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c2e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a9c2e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c2e7 jne 0x11a9c2f0 */
  if (!C.zf) goto L_11a9c2f0;
  /* 11a9c2e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9c2eb jmp 0x11a9c3ba */
  goto L_11a9c3ba;
L_11a9c2f0:;
  /* 11a9c2f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c2f3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a9c2f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c2f8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c2fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a9c2fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9c300 je 0x11a9c30d */
  if (C.zf) goto L_11a9c30d;
  /* 11a9c302 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9c305 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c308 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a9c30b jmp 0x11a9c2f0 */
  goto L_11a9c2f0;
L_11a9c30d:;
  /* 11a9c30d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11a9c312 push 0x11ab5d10 */
  push32((uint32_t)(0x11ab5d10u));
  /* 11a9c317 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9c319 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9c31c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11a9c323 push eax */
  push32((uint32_t)(EAX));
  /* 11a9c324 call 0x11a897e0 */
  push32(0x11a9c329u); f_11a897e0();
  /* 11a9c329 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c32c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a9c32f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c332 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a9c335 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c339 jne 0x11a9c345 */
  if (!C.zf) goto L_11a9c345;
  /* 11a9c33b push 9 */
  push32((uint32_t)(0x9u));
  /* 11a9c33d call 0x11a86750 */
  push32(0x11a9c342u); f_11a86750();
  /* 11a9c342 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a9c345:;
  /* 11a9c345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c348 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11a9c34b:;
  /* 11a9c34b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c34e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c351 je 0x11a9c3ae */
  if (C.zf) goto L_11a9c3ae;
  /* 11a9c353 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11a9c358 push 0x11ab5d10 */
  push32((uint32_t)(0x11ab5d10u));
  /* 11a9c35d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9c35f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c362 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a9c364 push edx */
  push32((uint32_t)(EDX));
  /* 11a9c365 call 0x11a8c610 */
  push32(0x11a9c36au); f_11a8c610();
  /* 11a9c36a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c36d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c370 push eax */
  push32((uint32_t)(EAX));
  /* 11a9c371 call 0x11a897e0 */
  push32(0x11a9c376u); f_11a897e0();
  /* 11a9c376 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c379 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c37c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a9c37e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c381 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c384 je 0x11a9c39a */
  if (C.zf) goto L_11a9c39a;
  /* 11a9c386 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c389 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a9c38b push ecx */
  push32((uint32_t)(ECX));
  /* 11a9c38c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c38f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a9c391 push eax */
  push32((uint32_t)(EAX));
  /* 11a9c392 call 0x11a8c790 */
  push32(0x11a9c397u); f_11a8c790();
  /* 11a9c397 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a9c39a:;
  /* 11a9c39a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9c39d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c3a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9c3a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c3a6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c3a9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a9c3ac jmp 0x11a9c34b */
  goto L_11a9c34b;
L_11a9c3ae:;
  /* 11a9c3ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9c3b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a9c3b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11a9c3ba:;
  /* 11a9c3ba mov esp, ebp */
  ESP = (EBP);
  /* 11a9c3bc pop ebp */
  EBP = (pop32());
  /* 11a9c3bd ret  */
  ESPCHK(0x11a9c2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c3c0 @ 0x11a9c3c0 (237 bytes, 81 insns) */
void f_11a9c3c0(void) {
  FTRACE(0x11a9c3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9c3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9c3c1 mov ebp, esp */
  EBP = (ESP);
  /* 11a9c3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9c3c4 cmp dword ptr [0x11aba4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c3cb jne 0x11a9c3e2 */
  if (!C.zf) goto L_11a9c3e2;
  /* 11a9c3cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9c3d0 push eax */
  push32((uint32_t)(EAX));
  /* 11a9c3d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c3d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9c3d5 call 0x11a9c4c0 */
  push32(0x11a9c3dau); f_11a9c4c0();
  /* 11a9c3da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c3dd jmp 0x11a9c4a9 */
  goto L_11a9c4a9;
L_11a9c3e2:;
  /* 11a9c3e2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a9c3e4 call 0x11a8f2d0 */
  push32(0x11a9c3e9u); f_11a8f2d0();
  /* 11a9c3e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c3ec jmp 0x11a9c3f7 */
  goto L_11a9c3f7;
L_11a9c3ee:;
  /* 11a9c3ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c3f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c3f4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11a9c3f7:;
  /* 11a9c3f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c3fa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11a9c3fe mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11a9c402 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9c405 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a9c40b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9c40d je 0x11a9c48b */
  if (C.zf) goto L_11a9c48b;
  /* 11a9c40f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9c412 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9c417 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9c419 mov cl, byte ptr [eax + 0x11aba5e1] */
  CL = (r8((uint32_t)(EAX + 0x11aba5e1)));
  /* 11a9c41f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a9c422 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a9c424 je 0x11a9c476 */
  if (C.zf) goto L_11a9c476;
  /* 11a9c426 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c429 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c42c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11a9c42f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c432 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9c434 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a9c436 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a9c438 jne 0x11a9c448 */
  if (!C.zf) goto L_11a9c448;
  /* 11a9c43a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a9c43c call 0x11a8f370 */
  push32(0x11a9c441u); f_11a8f370();
  /* 11a9c441 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c444 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9c446 jmp 0x11a9c4a9 */
  goto L_11a9c4a9;
L_11a9c448:;
  /* 11a9c448 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9c44b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a9c451 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11a9c454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c457 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9c459 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a9c45b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9c45d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c460 jne 0x11a9c474 */
  if (!C.zf) goto L_11a9c474;
  /* 11a9c462 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a9c464 call 0x11a8f370 */
  push32(0x11a9c469u); f_11a8f370();
  /* 11a9c469 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c46c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c46f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9c472 jmp 0x11a9c4a9 */
  goto L_11a9c4a9;
L_11a9c474:;
  /* 11a9c474 jmp 0x11a9c486 */
  goto L_11a9c486;
L_11a9c476:;
  /* 11a9c476 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9c479 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a9c47f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c482 jne 0x11a9c486 */
  if (!C.zf) goto L_11a9c486;
  /* 11a9c484 jmp 0x11a9c48b */
  goto L_11a9c48b;
L_11a9c486:;
  /* 11a9c486 jmp 0x11a9c3ee */
  goto L_11a9c3ee;
L_11a9c48b:;
  /* 11a9c48b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a9c48d call 0x11a8f370 */
  push32(0x11a9c492u); f_11a8f370();
  /* 11a9c492 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c495 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9c498 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9c49d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9c4a0 jne 0x11a9c4a7 */
  if (!C.zf) goto L_11a9c4a7;
  /* 11a9c4a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9c4a5 jmp 0x11a9c4a9 */
  goto L_11a9c4a9;
L_11a9c4a7:;
  /* 11a9c4a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a9c4a9:;
  /* 11a9c4a9 mov esp, ebp */
  ESP = (EBP);
  /* 11a9c4ab pop ebp */
  EBP = (pop32());
  /* 11a9c4ac ret  */
  ESPCHK(0x11a9c3c0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11a9c4c0 (193 bytes, 87 insns) */
void f_11a9c4c0(void) {
  FTRACE(0x11a9c4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9c4c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9c4c2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11a9c4c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a9c4c7 mov ebx, eax */
  EBX = (EAX);
  /* 11a9c4c9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a9c4cc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a9c4d0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11a9c4d6 je 0x11a9c4eb */
  if (C.zf) goto L_11a9c4eb;
L_11a9c4d8:;
  /* 11a9c4d8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11a9c4da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a9c4db cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9c4dd je 0x11a9c4b0 */
  if (C.zf) { jmp_ind(0x11a9c4b0u); return; }
  /* 11a9c4df test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11a9c4e1 je 0x11a9c534 */
  if (C.zf) goto L_11a9c534;
  /* 11a9c4e3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11a9c4e9 jne 0x11a9c4d8 */
  if (!C.zf) goto L_11a9c4d8;
L_11a9c4eb:;
  /* 11a9c4eb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11a9c4ed push edi */
  push32((uint32_t)(EDI));
  /* 11a9c4ee mov eax, ebx */
  EAX = (EBX);
  /* 11a9c4f0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11a9c4f3 push esi */
  push32((uint32_t)(ESI));
  /* 11a9c4f4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11a9c4f6:;
  /* 11a9c4f6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11a9c4f8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11a9c4fd mov eax, ecx */
  EAX = (ECX);
  /* 11a9c4ff mov esi, edi */
  ESI = (EDI);
  /* 11a9c501 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9c503 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c505 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c507 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a9c50a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9c50d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a9c50f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11a9c511 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9c514 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11a9c51a jne 0x11a9c538 */
  if (!C.zf) goto L_11a9c538;
  /* 11a9c51c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11a9c521 je 0x11a9c4f6 */
  if (C.zf) goto L_11a9c4f6;
  /* 11a9c523 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11a9c528 jne 0x11a9c532 */
  if (!C.zf) goto L_11a9c532;
  /* 11a9c52a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11a9c530 jne 0x11a9c4f6 */
  if (!C.zf) goto L_11a9c4f6;
L_11a9c532:;
  /* 11a9c532 pop esi */
  ESI = (pop32());
  /* 11a9c533 pop edi */
  EDI = (pop32());
L_11a9c534:;
  /* 11a9c534 pop ebx */
  EBX = (pop32());
  /* 11a9c535 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9c537 ret  */
  ESPCHK(0x11a9c4c0u, _esp0);
  ESP += 4; return;
L_11a9c538:;
  /* 11a9c538 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11a9c53b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9c53d je 0x11a9c575 */
  if (C.zf) goto L_11a9c575;
  /* 11a9c53f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a9c541 je 0x11a9c532 */
  if (C.zf) goto L_11a9c532;
  /* 11a9c543 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9c545 je 0x11a9c56e */
  if (C.zf) goto L_11a9c56e;
  /* 11a9c547 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a9c549 je 0x11a9c532 */
  if (C.zf) goto L_11a9c532;
  /* 11a9c54b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a9c54e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9c550 je 0x11a9c567 */
  if (C.zf) goto L_11a9c567;
  /* 11a9c552 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a9c554 je 0x11a9c532 */
  if (C.zf) goto L_11a9c532;
  /* 11a9c556 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9c558 je 0x11a9c560 */
  if (C.zf) goto L_11a9c560;
  /* 11a9c55a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a9c55c je 0x11a9c532 */
  if (C.zf) goto L_11a9c532;
  /* 11a9c55e jmp 0x11a9c4f6 */
  goto L_11a9c4f6;
L_11a9c560:;
  /* 11a9c560 pop esi */
  ESI = (pop32());
  /* 11a9c561 pop edi */
  EDI = (pop32());
  /* 11a9c562 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11a9c565 pop ebx */
  EBX = (pop32());
  /* 11a9c566 ret  */
  ESPCHK(0x11a9c4c0u, _esp0);
  ESP += 4; return;
L_11a9c567:;
  /* 11a9c567 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11a9c56a pop esi */
  ESI = (pop32());
  /* 11a9c56b pop edi */
  EDI = (pop32());
  /* 11a9c56c pop ebx */
  EBX = (pop32());
  /* 11a9c56d ret  */
  ESPCHK(0x11a9c4c0u, _esp0);
  ESP += 4; return;
L_11a9c56e:;
  /* 11a9c56e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11a9c571 pop esi */
  ESI = (pop32());
  /* 11a9c572 pop edi */
  EDI = (pop32());
  /* 11a9c573 pop ebx */
  EBX = (pop32());
  /* 11a9c574 ret  */
  ESPCHK(0x11a9c4c0u, _esp0);
  ESP += 4; return;
L_11a9c575:;
  /* 11a9c575 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11a9c578 pop esi */
  ESI = (pop32());
  /* 11a9c579 pop edi */
  EDI = (pop32());
  /* 11a9c57a pop ebx */
  EBX = (pop32());
  /* 11a9c57b ret  */
  ESPCHK(0x11a9c4c0u, _esp0);
  ESP += 4; return;
  /* 11a9c57c jmp dword ptr [0x11abc380] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11abc380)))); return;
}

/* RtlUnwind @ 0x11a9c70e (6 bytes, 1 insns) */
void f_11a9c70e(void) {
  FTRACE(0x11a9c70eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9c70e jmp dword ptr [0x11abc2e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11abc2e8)))); return;
}

