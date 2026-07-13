#include "recomp.h"

/* FUN_10001000 @ 0x11a61000 (20 bytes, 6 insns) */
void f_11a61000(void) {
  FTRACE(0x11a61000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a61000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a61004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a61005 jne 0x11a6100c */
  if (!C.zf) goto L_11a6100c;
  /* 11a61007 call 0x11a61690 */
  push32(0x11a6100cu); f_11a61690();
L_11a6100c:;
  /* 11a6100c mov eax, 1 */
  EAX = (0x1u);
  /* 11a61011 ret 0xc */
  ESPCHK(0x11a61000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001020 @ 0x11a61020 (202 bytes, 70 insns) */
void f_11a61020(void) {
  FTRACE(0x11a61020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a61020 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a61024 push ebx */
  push32((uint32_t)(EBX));
  /* 11a61025 push ebp */
  push32((uint32_t)(EBP));
  /* 11a61026 push esi */
  push32((uint32_t)(ESI));
  /* 11a61027 mov esi, ecx */
  ESI = (ECX);
  /* 11a61029 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 11a6102d mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 11a61031 mov ebp, dword ptr [0x11a68174] */
  EBP = (r32((uint32_t)(0x11a68174)));
  /* 11a61037 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11a6103a mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a6103e push edi */
  push32((uint32_t)(EDI));
  /* 11a6103f mov edi, dword ptr [esp + 0x20] */
  EDI = (r32((uint32_t)(ESP + 0x20)));
  /* 11a61043 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61045 push eax */
  push32((uint32_t)(EAX));
  /* 11a61046 push edi */
  push32((uint32_t)(EDI));
  /* 11a61047 push 0x11a6bff0 */
  push32((uint32_t)(0x11a6bff0u));
  /* 11a6104c push 0x11a6be18 */
  push32((uint32_t)(0x11a6be18u));
  /* 11a61051 push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a61056 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a61058 mov dword ptr [esi + 4], 0 */
  w32((uint32_t)(ESI + 0x4), (0x0u));
  /* 11a6105f mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11a61062 mov dword ptr [esi + 0x10], edx */
  w32((uint32_t)(ESI + 0x10), (EDX));
  /* 11a61065 mov byte ptr [esi + 0x14], 0 */
  w8((uint32_t)(ESI + 0x14), (0x0u));
  /* 11a61069 call ebp */
  call_ind((uint32_t)(EBP), 0x11a6106bu);
  /* 11a6106b mov ebx, dword ptr [0x11a68178] */
  EBX = (r32((uint32_t)(0x11a68178)));
  /* 11a61071 lea ecx, [esi + 0x15] */
  ECX = ((uint32_t)(ESI + 0x15));
  /* 11a61074 push ecx */
  push32((uint32_t)(ECX));
  /* 11a61075 push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a6107a call ebx */
  call_ind((uint32_t)(EBX), 0x11a6107cu);
  /* 11a6107c mov edx, dword ptr [esp + 0x38] */
  EDX = (r32((uint32_t)(ESP + 0x38)));
  /* 11a61080 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61082 push edx */
  push32((uint32_t)(EDX));
  /* 11a61083 push edi */
  push32((uint32_t)(EDI));
  /* 11a61084 push 0x11a6bff0 */
  push32((uint32_t)(0x11a6bff0u));
  /* 11a61089 push 0x11a6be18 */
  push32((uint32_t)(0x11a6be18u));
  /* 11a6108e push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a61093 call ebp */
  call_ind((uint32_t)(EBP), 0x11a61095u);
  /* 11a61095 lea eax, [esi + 0x1d] */
  EAX = ((uint32_t)(ESI + 0x1d));
  /* 11a61098 push eax */
  push32((uint32_t)(EAX));
  /* 11a61099 push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a6109e call ebx */
  call_ind((uint32_t)(EBX), 0x11a610a0u);
  /* 11a610a0 mov ecx, dword ptr [esp + 0x5c] */
  ECX = (r32((uint32_t)(ESP + 0x5c)));
  /* 11a610a4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a610a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a610a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a610aa push edi */
  push32((uint32_t)(EDI));
  /* 11a610ab push 0x11a6bff0 */
  push32((uint32_t)(0x11a6bff0u));
  /* 11a610b0 push 0x11a6be18 */
  push32((uint32_t)(0x11a6be18u));
  /* 11a610b5 push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a610ba call ebp */
  call_ind((uint32_t)(EBP), 0x11a610bcu);
  /* 11a610bc lea edx, [esi + 0x25] */
  EDX = ((uint32_t)(ESI + 0x25));
  /* 11a610bf push edx */
  push32((uint32_t)(EDX));
  /* 11a610c0 push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a610c5 call ebx */
  call_ind((uint32_t)(EBX), 0x11a610c7u);
  /* 11a610c7 mov al, byte ptr [esi + 0xc] */
  AL = (r8((uint32_t)(ESI + 0xc)));
  /* 11a610ca mov edi, dword ptr [0x11a6817c] */
  EDI = (r32((uint32_t)(0x11a6817c)));
  /* 11a610d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a610d2 push eax */
  push32((uint32_t)(EAX));
  /* 11a610d3 call edi */
  call_ind((uint32_t)(EDI), 0x11a610d5u);
  /* 11a610d5 mov ecx, dword ptr [esp + 0x4c] */
  ECX = (r32((uint32_t)(ESP + 0x4c)));
  /* 11a610d9 mov dl, byte ptr [esi + 0x10] */
  DL = (r8((uint32_t)(ESI + 0x10)));
  /* 11a610dc push ecx */
  push32((uint32_t)(ECX));
  /* 11a610dd push edx */
  push32((uint32_t)(EDX));
  /* 11a610de call edi */
  call_ind((uint32_t)(EDI), 0x11a610e0u);
  /* 11a610e0 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a610e3 pop edi */
  EDI = (pop32());
  /* 11a610e4 pop esi */
  ESI = (pop32());
  /* 11a610e5 pop ebp */
  EBP = (pop32());
  /* 11a610e6 pop ebx */
  EBX = (pop32());
  /* 11a610e7 ret 0x1c */
  ESPCHK(0x11a61020u, _esp0);
  ESP += 32; return;
}

/* FUN_100010f0 @ 0x11a610f0 (362 bytes, 125 insns) */
void f_11a610f0(void) {
  FTRACE(0x11a610f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a610f0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a610f1 push ebp */
  push32((uint32_t)(EBP));
  /* 11a610f2 push esi */
  push32((uint32_t)(ESI));
  /* 11a610f3 mov esi, ecx */
  ESI = (ECX);
  /* 11a610f5 push edi */
  push32((uint32_t)(EDI));
  /* 11a610f6 mov al, byte ptr [esi + 0xc] */
  AL = (r8((uint32_t)(ESI + 0xc)));
  /* 11a610f9 push eax */
  push32((uint32_t)(EAX));
  /* 11a610fa call dword ptr [0x11a68160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68160))), 0x11a61100u);
  /* 11a61100 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61103 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a61105 je 0x11a61253 */
  if (C.zf) goto L_11a61253;
  /* 11a6110b mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a6110e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a61110 je 0x11a61253 */
  if (C.zf) goto L_11a61253;
  /* 11a61116 mov cl, byte ptr [esi + 0xc] */
  CL = (r8((uint32_t)(ESI + 0xc)));
  /* 11a61119 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11a6111b push ecx */
  push32((uint32_t)(ECX));
  /* 11a6111c call dword ptr [0x11a6817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6817c))), 0x11a61122u);
  /* 11a61122 mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a61125 lea edx, [esi + 0x15] */
  EDX = ((uint32_t)(ESI + 0x15));
  /* 11a61128 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a61129 push edx */
  push32((uint32_t)(EDX));
  /* 11a6112a mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11a6112d call dword ptr [0x11a68164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68164))), 0x11a61133u);
  /* 11a61133 mov edi, dword ptr [esp + 0x2c] */
  EDI = (r32((uint32_t)(ESP + 0x2c)));
  /* 11a61137 mov ebx, dword ptr [0x11a68174] */
  EBX = (r32((uint32_t)(0x11a68174)));
  /* 11a6113d mov ebp, dword ptr [0x11a68168] */
  EBP = (r32((uint32_t)(0x11a68168)));
  /* 11a61143 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61146 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a61148 je 0x11a61197 */
  if (C.zf) goto L_11a61197;
  /* 11a6114a mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a6114e mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11a61150 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61152 push eax */
  push32((uint32_t)(EAX));
  /* 11a61153 push ecx */
  push32((uint32_t)(ECX));
  /* 11a61154 push 0x11a6bf88 */
  push32((uint32_t)(0x11a6bf88u));
  /* 11a61159 push 0x11a6be18 */
  push32((uint32_t)(0x11a6be18u));
  /* 11a6115e push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a61163 call ebx */
  call_ind((uint32_t)(EBX), 0x11a61165u);
  /* 11a61165 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61167 push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a6116c call ebp */
  call_ind((uint32_t)(EBP), 0x11a6116eu);
  /* 11a6116e mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11a61170 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61172 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61174 push edi */
  push32((uint32_t)(EDI));
  /* 11a61175 push edx */
  push32((uint32_t)(EDX));
  /* 11a61176 call dword ptr [0x11a6816c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6816c))), 0x11a6117cu);
  /* 11a6117c lea eax, [esi + 0x2d] */
  EAX = ((uint32_t)(ESI + 0x2d));
  /* 11a6117f push eax */
  push32((uint32_t)(EAX));
  /* 11a61180 push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a61185 call dword ptr [0x11a68178] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68178))), 0x11a6118bu);
  /* 11a6118b mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11a6118d push ecx */
  push32((uint32_t)(ECX));
  /* 11a6118e call dword ptr [0x11a68170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68170))), 0x11a61194u);
  /* 11a61194 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a61197:;
  /* 11a61197 lea edx, [esi + 0x1d] */
  EDX = ((uint32_t)(ESI + 0x1d));
  /* 11a6119a push edx */
  push32((uint32_t)(EDX));
  /* 11a6119b call dword ptr [0x11a68164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68164))), 0x11a611a1u);
  /* 11a611a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a611a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a611a6 je 0x11a611f5 */
  if (C.zf) goto L_11a611f5;
  /* 11a611a8 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a611ac mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11a611ae push 0 */
  push32((uint32_t)(0x0u));
  /* 11a611b0 push eax */
  push32((uint32_t)(EAX));
  /* 11a611b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a611b2 push 0x11a6bf88 */
  push32((uint32_t)(0x11a6bf88u));
  /* 11a611b7 push 0x11a6be18 */
  push32((uint32_t)(0x11a6be18u));
  /* 11a611bc push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a611c1 call ebx */
  call_ind((uint32_t)(EBX), 0x11a611c3u);
  /* 11a611c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a611c5 push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a611ca call ebp */
  call_ind((uint32_t)(EBP), 0x11a611ccu);
  /* 11a611cc mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11a611ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11a611d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a611d2 push edi */
  push32((uint32_t)(EDI));
  /* 11a611d3 push edx */
  push32((uint32_t)(EDX));
  /* 11a611d4 call dword ptr [0x11a6816c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6816c))), 0x11a611dau);
  /* 11a611da lea eax, [esi + 0x2d] */
  EAX = ((uint32_t)(ESI + 0x2d));
  /* 11a611dd push eax */
  push32((uint32_t)(EAX));
  /* 11a611de push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a611e3 call dword ptr [0x11a68178] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68178))), 0x11a611e9u);
  /* 11a611e9 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11a611eb push ecx */
  push32((uint32_t)(ECX));
  /* 11a611ec call dword ptr [0x11a68170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68170))), 0x11a611f2u);
  /* 11a611f2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a611f5:;
  /* 11a611f5 lea edx, [esi + 0x25] */
  EDX = ((uint32_t)(ESI + 0x25));
  /* 11a611f8 push edx */
  push32((uint32_t)(EDX));
  /* 11a611f9 call dword ptr [0x11a68164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68164))), 0x11a611ffu);
  /* 11a611ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a61204 je 0x11a61253 */
  if (C.zf) goto L_11a61253;
  /* 11a61206 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11a6120a mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11a6120c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a6120e push eax */
  push32((uint32_t)(EAX));
  /* 11a6120f push ecx */
  push32((uint32_t)(ECX));
  /* 11a61210 push 0x11a6bed0 */
  push32((uint32_t)(0x11a6bed0u));
  /* 11a61215 push 0x11a6be18 */
  push32((uint32_t)(0x11a6be18u));
  /* 11a6121a push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a6121f call ebx */
  call_ind((uint32_t)(EBX), 0x11a61221u);
  /* 11a61221 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61223 push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a61228 call ebp */
  call_ind((uint32_t)(EBP), 0x11a6122au);
  /* 11a6122a mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11a6122c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a6122e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61230 push edi */
  push32((uint32_t)(EDI));
  /* 11a61231 push edx */
  push32((uint32_t)(EDX));
  /* 11a61232 call dword ptr [0x11a6816c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6816c))), 0x11a61238u);
  /* 11a61238 lea eax, [esi + 0x35] */
  EAX = ((uint32_t)(ESI + 0x35));
  /* 11a6123b push eax */
  push32((uint32_t)(EAX));
  /* 11a6123c push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a61241 call dword ptr [0x11a68178] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68178))), 0x11a61247u);
  /* 11a61247 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11a61249 push ecx */
  push32((uint32_t)(ECX));
  /* 11a6124a call dword ptr [0x11a68170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68170))), 0x11a61250u);
  /* 11a61250 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a61253:;
  /* 11a61253 pop edi */
  EDI = (pop32());
  /* 11a61254 pop esi */
  ESI = (pop32());
  /* 11a61255 pop ebp */
  EBP = (pop32());
  /* 11a61256 pop ebx */
  EBX = (pop32());
  /* 11a61257 ret 0x10 */
  ESPCHK(0x11a610f0u, _esp0);
  ESP += 20; return;
}

/* FUN_10001260 @ 0x11a61260 (127 bytes, 51 insns) */
void f_11a61260(void) {
  FTRACE(0x11a61260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a61260 push ebx */
  push32((uint32_t)(EBX));
  /* 11a61261 push ebp */
  push32((uint32_t)(EBP));
  /* 11a61262 push esi */
  push32((uint32_t)(ESI));
  /* 11a61263 mov esi, ecx */
  ESI = (ECX);
  /* 11a61265 push edi */
  push32((uint32_t)(EDI));
  /* 11a61266 mov al, byte ptr [esi + 0x10] */
  AL = (r8((uint32_t)(ESI + 0x10)));
  /* 11a61269 push eax */
  push32((uint32_t)(EAX));
  /* 11a6126a call dword ptr [0x11a68160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68160))), 0x11a61270u);
  /* 11a61270 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61273 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a61275 je 0x11a612d8 */
  if (C.zf) goto L_11a612d8;
  /* 11a61277 mov ebp, dword ptr [0x11a68164] */
  EBP = (r32((uint32_t)(0x11a68164)));
  /* 11a6127d lea edi, [esi + 0x2d] */
  EDI = ((uint32_t)(ESI + 0x2d));
  /* 11a61280 push edi */
  push32((uint32_t)(EDI));
  /* 11a61281 call ebp */
  call_ind((uint32_t)(EBP), 0x11a61283u);
  /* 11a61283 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61286 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a61289 jg 0x11a612d8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a612d8;
  /* 11a6128b lea ebx, [esi + 0x35] */
  EBX = ((uint32_t)(ESI + 0x35));
  /* 11a6128e push ebx */
  push32((uint32_t)(EBX));
  /* 11a6128f call ebp */
  call_ind((uint32_t)(EBP), 0x11a61291u);
  /* 11a61291 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61294 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a61297 jg 0x11a612d8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a612d8;
  /* 11a61299 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a6129d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a6129f push edi */
  push32((uint32_t)(EDI));
  /* 11a612a0 mov edi, dword ptr [0x11a68168] */
  EDI = (r32((uint32_t)(0x11a68168)));
  /* 11a612a6 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11a612a9 mov byte ptr [esi + 0x14], 1 */
  w8((uint32_t)(ESI + 0x14), (0x1u));
  /* 11a612ad call edi */
  call_ind((uint32_t)(EDI), 0x11a612afu);
  /* 11a612af push 1 */
  push32((uint32_t)(0x1u));
  /* 11a612b1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a612b2 call edi */
  call_ind((uint32_t)(EDI), 0x11a612b4u);
  /* 11a612b4 mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11a612b6 push edx */
  push32((uint32_t)(EDX));
  /* 11a612b7 call 0x11a623b0 */
  push32(0x11a612bcu); f_11a623b0();
  /* 11a612bc mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11a612bf mov cl, byte ptr [esi + 0x10] */
  CL = (r8((uint32_t)(ESI + 0x10)));
  /* 11a612c2 push eax */
  push32((uint32_t)(EAX));
  /* 11a612c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a612c4 call dword ptr [0x11a6817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6817c))), 0x11a612cau);
  /* 11a612ca mov eax, dword ptr [0x11a6c000] */
  EAX = (r32((uint32_t)(0x11a6c000)));
  /* 11a612cf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a612d2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a612d3 mov dword ptr [0x11a6c000], eax */
  w32((uint32_t)(0x11a6c000), (EAX));
L_11a612d8:;
  /* 11a612d8 pop edi */
  EDI = (pop32());
  /* 11a612d9 pop esi */
  ESI = (pop32());
  /* 11a612da pop ebp */
  EBP = (pop32());
  /* 11a612db pop ebx */
  EBX = (pop32());
  /* 11a612dc ret 8 */
  ESPCHK(0x11a61260u, _esp0);
  ESP += 12; return;
}

/* FUN_100012e0 @ 0x11a612e0 (70 bytes, 34 insns) */
void f_11a612e0(void) {
  FTRACE(0x11a612e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a612e0 push esi */
  push32((uint32_t)(ESI));
  /* 11a612e1 mov esi, ecx */
  ESI = (ECX);
  /* 11a612e3 push edi */
  push32((uint32_t)(EDI));
  /* 11a612e4 mov edi, dword ptr [0x11a68164] */
  EDI = (r32((uint32_t)(0x11a68164)));
  /* 11a612ea lea eax, [esi + 0x15] */
  EAX = ((uint32_t)(ESI + 0x15));
  /* 11a612ed push eax */
  push32((uint32_t)(EAX));
  /* 11a612ee call edi */
  call_ind((uint32_t)(EDI), 0x11a612f0u);
  /* 11a612f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a612f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a612f5 je 0x11a612ff */
  if (C.zf) goto L_11a612ff;
  /* 11a612f7 pop edi */
  EDI = (pop32());
  /* 11a612f8 mov eax, 1 */
  EAX = (0x1u);
  /* 11a612fd pop esi */
  ESI = (pop32());
  /* 11a612fe ret  */
  ESPCHK(0x11a612e0u, _esp0);
  ESP += 4; return;
L_11a612ff:;
  /* 11a612ff lea ecx, [esi + 0x1d] */
  ECX = ((uint32_t)(ESI + 0x1d));
  /* 11a61302 push ecx */
  push32((uint32_t)(ECX));
  /* 11a61303 call edi */
  call_ind((uint32_t)(EDI), 0x11a61305u);
  /* 11a61305 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6130a je 0x11a61314 */
  if (C.zf) goto L_11a61314;
  /* 11a6130c pop edi */
  EDI = (pop32());
  /* 11a6130d mov eax, 1 */
  EAX = (0x1u);
  /* 11a61312 pop esi */
  ESI = (pop32());
  /* 11a61313 ret  */
  ESPCHK(0x11a612e0u, _esp0);
  ESP += 4; return;
L_11a61314:;
  /* 11a61314 add esi, 0x25 */
  { uint32_t _a=(ESI),_b=(0x25u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61317 push esi */
  push32((uint32_t)(ESI));
  /* 11a61318 call edi */
  call_ind((uint32_t)(EDI), 0x11a6131au);
  /* 11a6131a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6131d neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a6131f sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a61321 pop edi */
  EDI = (pop32());
  /* 11a61322 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a61324 pop esi */
  ESI = (pop32());
  /* 11a61325 ret  */
  ESPCHK(0x11a612e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001420 @ 0x11a61420 (28 bytes, 11 insns) */
void f_11a61420(void) {
  FTRACE(0x11a61420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a61420 push esi */
  push32((uint32_t)(ESI));
  /* 11a61421 mov esi, ecx */
  ESI = (ECX);
  /* 11a61423 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11a61426 push eax */
  push32((uint32_t)(EAX));
  /* 11a61427 call dword ptr [0x11a6815c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6815c))), 0x11a6142du);
  /* 11a6142d mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a61431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61434 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11a61436 mov eax, esi */
  EAX = (ESI);
  /* 11a61438 pop esi */
  ESI = (pop32());
  /* 11a61439 ret 4 */
  ESPCHK(0x11a61420u, _esp0);
  ESP += 8; return;
}

/* FUN_10001440 @ 0x11a61440 (31 bytes, 13 insns) */
void f_11a61440(void) {
  FTRACE(0x11a61440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a61440 push esi */
  push32((uint32_t)(ESI));
  /* 11a61441 mov esi, ecx */
  ESI = (ECX);
  /* 11a61443 cmp dword ptr [esi + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a61447 je 0x11a6145d */
  if (C.zf) goto L_11a6145d;
  /* 11a61449 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11a6144c push eax */
  push32((uint32_t)(EAX));
  /* 11a6144d call dword ptr [0x11a68164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68164))), 0x11a61453u);
  /* 11a61453 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61456 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a61458 jne 0x11a6145d */
  if (!C.zf) goto L_11a6145d;
  /* 11a6145a mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_11a6145d:;
  /* 11a6145d pop esi */
  ESI = (pop32());
  /* 11a6145e ret  */
  ESPCHK(0x11a61440u, _esp0);
  ESP += 4; return;
}

/* FUN_10001460 @ 0x11a61460 (72 bytes, 24 insns) */
void f_11a61460(void) {
  FTRACE(0x11a61460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a61460 push esi */
  push32((uint32_t)(ESI));
  /* 11a61461 mov esi, ecx */
  ESI = (ECX);
  /* 11a61463 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a61466 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a61468 jne 0x11a614a4 */
  if (!C.zf) goto L_11a614a4;
  /* 11a6146a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a6146c call dword ptr [0x11a68154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68154))), 0x11a61472u);
  /* 11a61472 mov ecx, 0xa */
  ECX = (0xau);
  /* 11a61477 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a6147b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6147d lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a61480 lea ecx, [esi + 4] */
  ECX = ((uint32_t)(ESI + 0x4));
  /* 11a61483 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a61486 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a61489 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11a6148c push eax */
  push32((uint32_t)(EAX));
  /* 11a6148d push ecx */
  push32((uint32_t)(ECX));
  /* 11a6148e push 0x11a6bf60 */
  push32((uint32_t)(0x11a6bf60u));
  /* 11a61493 push edx */
  push32((uint32_t)(EDX));
  /* 11a61494 call dword ptr [0x11a68158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68158))), 0x11a6149au);
  /* 11a6149a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6149d mov dword ptr [esi + 0xc], 1 */
  w32((uint32_t)(ESI + 0xc), (0x1u));
L_11a614a4:;
  /* 11a614a4 pop esi */
  ESI = (pop32());
  /* 11a614a5 ret 4 */
  ESPCHK(0x11a61460u, _esp0);
  ESP += 8; return;
}

/* FUN_100014b0 @ 0x11a614b0 (74 bytes, 28 insns) */
void f_11a614b0(void) {
  FTRACE(0x11a614b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a614b0 push esi */
  push32((uint32_t)(ESI));
  /* 11a614b1 mov esi, ecx */
  ESI = (ECX);
  /* 11a614b3 push edi */
  push32((uint32_t)(EDI));
  /* 11a614b4 cmp dword ptr [esi + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a614b8 jne 0x11a614f5 */
  if (!C.zf) goto L_11a614f5;
  /* 11a614ba mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a614be lea edi, [esi + 4] */
  EDI = ((uint32_t)(ESI + 0x4));
  /* 11a614c1 push edi */
  push32((uint32_t)(EDI));
  /* 11a614c2 push eax */
  push32((uint32_t)(EAX));
  /* 11a614c3 call dword ptr [0x11a6814c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6814c))), 0x11a614c9u);
  /* 11a614c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a614cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a614ce je 0x11a614f5 */
  if (C.zf) goto L_11a614f5;
  /* 11a614d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a614d2 push edi */
  push32((uint32_t)(EDI));
  /* 11a614d3 call dword ptr [0x11a68168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68168))), 0x11a614d9u);
  /* 11a614d9 mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a614dd mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11a614df push 0 */
  push32((uint32_t)(0x0u));
  /* 11a614e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a614e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a614e4 push edx */
  push32((uint32_t)(EDX));
  /* 11a614e5 call dword ptr [0x11a68150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68150))), 0x11a614ebu);
  /* 11a614eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a614ee mov dword ptr [esi + 0xc], 2 */
  w32((uint32_t)(ESI + 0xc), (0x2u));
L_11a614f5:;
  /* 11a614f5 pop edi */
  EDI = (pop32());
  /* 11a614f6 pop esi */
  ESI = (pop32());
  /* 11a614f7 ret 8 */
  ESPCHK(0x11a614b0u, _esp0);
  ESP += 12; return;
}

/* FUN_10001500 @ 0x11a61500 (72 bytes, 27 insns) */
void f_11a61500(void) {
  FTRACE(0x11a61500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a61500 push esi */
  push32((uint32_t)(ESI));
  /* 11a61501 mov esi, ecx */
  ESI = (ECX);
  /* 11a61503 push edi */
  push32((uint32_t)(EDI));
  /* 11a61504 cmp dword ptr [esi + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a61508 jne 0x11a61543 */
  if (!C.zf) goto L_11a61543;
  /* 11a6150a mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a6150e lea edi, [esi + 4] */
  EDI = ((uint32_t)(ESI + 0x4));
  /* 11a61511 push edi */
  push32((uint32_t)(EDI));
  /* 11a61512 push eax */
  push32((uint32_t)(EAX));
  /* 11a61513 call dword ptr [0x11a6814c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6814c))), 0x11a61519u);
  /* 11a61519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6151c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6151e je 0x11a61543 */
  if (C.zf) goto L_11a61543;
  /* 11a61520 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61522 push edi */
  push32((uint32_t)(EDI));
  /* 11a61523 call dword ptr [0x11a68168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68168))), 0x11a61529u);
  /* 11a61529 mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a6152d mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11a6152f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61531 push ecx */
  push32((uint32_t)(ECX));
  /* 11a61532 push edx */
  push32((uint32_t)(EDX));
  /* 11a61533 call dword ptr [0x11a68148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68148))), 0x11a61539u);
  /* 11a61539 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6153c mov dword ptr [esi + 0xc], 3 */
  w32((uint32_t)(ESI + 0xc), (0x3u));
L_11a61543:;
  /* 11a61543 pop edi */
  EDI = (pop32());
  /* 11a61544 pop esi */
  ESI = (pop32());
  /* 11a61545 ret 8 */
  ESPCHK(0x11a61500u, _esp0);
  ESP += 12; return;
}

/* FUN_10001550 @ 0x11a61550 (56 bytes, 22 insns) */
void f_11a61550(void) {
  FTRACE(0x11a61550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a61550 push esi */
  push32((uint32_t)(ESI));
  /* 11a61551 push edi */
  push32((uint32_t)(EDI));
  /* 11a61552 mov esi, ecx */
  ESI = (ECX);
  /* 11a61554 call 0x11a61440 */
  push32(0x11a61559u); f_11a61440();
  /* 11a61559 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a6155d mov ecx, esi */
  ECX = (ESI);
  /* 11a6155f push eax */
  push32((uint32_t)(EAX));
  /* 11a61560 call 0x11a61460 */
  push32(0x11a61565u); f_11a61460();
  /* 11a61565 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 11a61569 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a6156d push edi */
  push32((uint32_t)(EDI));
  /* 11a6156e push ecx */
  push32((uint32_t)(ECX));
  /* 11a6156f mov ecx, esi */
  ECX = (ESI);
  /* 11a61571 call 0x11a614b0 */
  push32(0x11a61576u); f_11a614b0();
  /* 11a61576 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a6157a mov ecx, esi */
  ECX = (ESI);
  /* 11a6157c push edx */
  push32((uint32_t)(EDX));
  /* 11a6157d push edi */
  push32((uint32_t)(EDI));
  /* 11a6157e call 0x11a61500 */
  push32(0x11a61583u); f_11a61500();
  /* 11a61583 pop edi */
  EDI = (pop32());
  /* 11a61584 pop esi */
  ESI = (pop32());
  /* 11a61585 ret 0x10 */
  ESPCHK(0x11a61550u, _esp0);
  ESP += 20; return;
}

/* OnInit @ 0x11a61690 (989 bytes, 266 insns) */
void f_11a61690(void) {
  FTRACE(0x11a61690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a61690 push ebx */
  push32((uint32_t)(EBX));
  /* 11a61691 push esi */
  push32((uint32_t)(ESI));
  /* 11a61692 push edi */
  push32((uint32_t)(EDI));
  /* 11a61693 mov edi, dword ptr [0x11a68130] */
  EDI = (r32((uint32_t)(0x11a68130)));
  /* 11a61699 push 0x11a69374 */
  push32((uint32_t)(0x11a69374u));
  /* 11a6169e push 0x11a6c008 */
  push32((uint32_t)(0x11a6c008u));
  /* 11a616a3 call edi */
  call_ind((uint32_t)(EDI), 0x11a616a5u);
  /* 11a616a5 push 0x11a69368 */
  push32((uint32_t)(0x11a69368u));
  /* 11a616aa push 0x11a6be30 */
  push32((uint32_t)(0x11a6be30u));
  /* 11a616af call edi */
  call_ind((uint32_t)(EDI), 0x11a616b1u);
  /* 11a616b1 push 0x11a69358 */
  push32((uint32_t)(0x11a69358u));
  /* 11a616b6 push 0x11a6bf80 */
  push32((uint32_t)(0x11a6bf80u));
  /* 11a616bb call edi */
  call_ind((uint32_t)(EDI), 0x11a616bdu);
  /* 11a616bd push 0x11a69348 */
  push32((uint32_t)(0x11a69348u));
  /* 11a616c2 push 0x11a6bdc0 */
  push32((uint32_t)(0x11a6bdc0u));
  /* 11a616c7 call edi */
  call_ind((uint32_t)(EDI), 0x11a616c9u);
  /* 11a616c9 push 0x11a6933c */
  push32((uint32_t)(0x11a6933cu));
  /* 11a616ce push 0x11a6bff8 */
  push32((uint32_t)(0x11a6bff8u));
  /* 11a616d3 call edi */
  call_ind((uint32_t)(EDI), 0x11a616d5u);
  /* 11a616d5 push 0x11a69330 */
  push32((uint32_t)(0x11a69330u));
  /* 11a616da push 0x11a6c0f8 */
  push32((uint32_t)(0x11a6c0f8u));
  /* 11a616df call edi */
  call_ind((uint32_t)(EDI), 0x11a616e1u);
  /* 11a616e1 push 0x11a69324 */
  push32((uint32_t)(0x11a69324u));
  /* 11a616e6 push 0x11a6be10 */
  push32((uint32_t)(0x11a6be10u));
  /* 11a616eb call edi */
  call_ind((uint32_t)(EDI), 0x11a616edu);
  /* 11a616ed push 0x11a69310 */
  push32((uint32_t)(0x11a69310u));
  /* 11a616f2 push 0x11a6bf00 */
  push32((uint32_t)(0x11a6bf00u));
  /* 11a616f7 call edi */
  call_ind((uint32_t)(EDI), 0x11a616f9u);
  /* 11a616f9 mov esi, dword ptr [0x11a68134] */
  ESI = (r32((uint32_t)(0x11a68134)));
  /* 11a616ff add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61702 push 0x11a69308 */
  push32((uint32_t)(0x11a69308u));
  /* 11a61707 push 0x11a6bdc8 */
  push32((uint32_t)(0x11a6bdc8u));
  /* 11a6170c call esi */
  call_ind((uint32_t)(ESI), 0x11a6170eu);
  /* 11a6170e push 0x11a692f8 */
  push32((uint32_t)(0x11a692f8u));
  /* 11a61713 push 0x11a6be68 */
  push32((uint32_t)(0x11a6be68u));
  /* 11a61718 call esi */
  call_ind((uint32_t)(ESI), 0x11a6171au);
  /* 11a6171a push 0x11a692e8 */
  push32((uint32_t)(0x11a692e8u));
  /* 11a6171f push 0x11a6be60 */
  push32((uint32_t)(0x11a6be60u));
  /* 11a61724 call esi */
  call_ind((uint32_t)(ESI), 0x11a61726u);
  /* 11a61726 push 0x11a692d8 */
  push32((uint32_t)(0x11a692d8u));
  /* 11a6172b push 0x11a6bea8 */
  push32((uint32_t)(0x11a6bea8u));
  /* 11a61730 call esi */
  call_ind((uint32_t)(ESI), 0x11a61732u);
  /* 11a61732 push 0x11a692c8 */
  push32((uint32_t)(0x11a692c8u));
  /* 11a61737 push 0x11a6bea0 */
  push32((uint32_t)(0x11a6bea0u));
  /* 11a6173c call esi */
  call_ind((uint32_t)(ESI), 0x11a6173eu);
  /* 11a6173e push 0x11a692b8 */
  push32((uint32_t)(0x11a692b8u));
  /* 11a61743 push 0x11a6be98 */
  push32((uint32_t)(0x11a6be98u));
  /* 11a61748 call esi */
  call_ind((uint32_t)(ESI), 0x11a6174au);
  /* 11a6174a push 0x11a692a8 */
  push32((uint32_t)(0x11a692a8u));
  /* 11a6174f push 0x11a6be88 */
  push32((uint32_t)(0x11a6be88u));
  /* 11a61754 call esi */
  call_ind((uint32_t)(ESI), 0x11a61756u);
  /* 11a61756 push 0x11a69298 */
  push32((uint32_t)(0x11a69298u));
  /* 11a6175b push 0x11a6bec8 */
  push32((uint32_t)(0x11a6bec8u));
  /* 11a61760 call esi */
  call_ind((uint32_t)(ESI), 0x11a61762u);
  /* 11a61762 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61765 push 0x11a69288 */
  push32((uint32_t)(0x11a69288u));
  /* 11a6176a push 0x11a6beb8 */
  push32((uint32_t)(0x11a6beb8u));
  /* 11a6176f call esi */
  call_ind((uint32_t)(ESI), 0x11a61771u);
  /* 11a61771 push 0x11a69278 */
  push32((uint32_t)(0x11a69278u));
  /* 11a61776 push 0x11a6beb0 */
  push32((uint32_t)(0x11a6beb0u));
  /* 11a6177b call esi */
  call_ind((uint32_t)(ESI), 0x11a6177du);
  /* 11a6177d push 0x11a69268 */
  push32((uint32_t)(0x11a69268u));
  /* 11a61782 push 0x11a6be90 */
  push32((uint32_t)(0x11a6be90u));
  /* 11a61787 call esi */
  call_ind((uint32_t)(ESI), 0x11a61789u);
  /* 11a61789 push 0x11a69258 */
  push32((uint32_t)(0x11a69258u));
  /* 11a6178e push 0x11a6be80 */
  push32((uint32_t)(0x11a6be80u));
  /* 11a61793 call esi */
  call_ind((uint32_t)(ESI), 0x11a61795u);
  /* 11a61795 push 0x11a69248 */
  push32((uint32_t)(0x11a69248u));
  /* 11a6179a push 0x11a6bec0 */
  push32((uint32_t)(0x11a6bec0u));
  /* 11a6179f call esi */
  call_ind((uint32_t)(ESI), 0x11a617a1u);
  /* 11a617a1 push 0x11a69240 */
  push32((uint32_t)(0x11a69240u));
  /* 11a617a6 push 0x11a6c010 */
  push32((uint32_t)(0x11a6c010u));
  /* 11a617ab call esi */
  call_ind((uint32_t)(ESI), 0x11a617adu);
  /* 11a617ad push 0x11a69234 */
  push32((uint32_t)(0x11a69234u));
  /* 11a617b2 push 0x11a6bfd8 */
  push32((uint32_t)(0x11a6bfd8u));
  /* 11a617b7 call esi */
  call_ind((uint32_t)(ESI), 0x11a617b9u);
  /* 11a617b9 push 0x11a69228 */
  push32((uint32_t)(0x11a69228u));
  /* 11a617be push 0x11a6bfd0 */
  push32((uint32_t)(0x11a6bfd0u));
  /* 11a617c3 call esi */
  call_ind((uint32_t)(ESI), 0x11a617c5u);
  /* 11a617c5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a617c8 push 0x11a6921c */
  push32((uint32_t)(0x11a6921cu));
  /* 11a617cd push 0x11a6bfc0 */
  push32((uint32_t)(0x11a6bfc0u));
  /* 11a617d2 call esi */
  call_ind((uint32_t)(ESI), 0x11a617d4u);
  /* 11a617d4 push 0x11a69210 */
  push32((uint32_t)(0x11a69210u));
  /* 11a617d9 push 0x11a6bfb8 */
  push32((uint32_t)(0x11a6bfb8u));
  /* 11a617de call esi */
  call_ind((uint32_t)(ESI), 0x11a617e0u);
  /* 11a617e0 push 0x11a69204 */
  push32((uint32_t)(0x11a69204u));
  /* 11a617e5 push 0x11a6bfb0 */
  push32((uint32_t)(0x11a6bfb0u));
  /* 11a617ea call esi */
  call_ind((uint32_t)(ESI), 0x11a617ecu);
  /* 11a617ec push 0x11a691f8 */
  push32((uint32_t)(0x11a691f8u));
  /* 11a617f1 push 0x11a6bfa8 */
  push32((uint32_t)(0x11a6bfa8u));
  /* 11a617f6 call esi */
  call_ind((uint32_t)(ESI), 0x11a617f8u);
  /* 11a617f8 push 0x11a691ec */
  push32((uint32_t)(0x11a691ecu));
  /* 11a617fd push 0x11a6be38 */
  push32((uint32_t)(0x11a6be38u));
  /* 11a61802 call esi */
  call_ind((uint32_t)(ESI), 0x11a61804u);
  /* 11a61804 push 0x11a691e4 */
  push32((uint32_t)(0x11a691e4u));
  /* 11a61809 push 0x11a6c018 */
  push32((uint32_t)(0x11a6c018u));
  /* 11a6180e call esi */
  call_ind((uint32_t)(ESI), 0x11a61810u);
  /* 11a61810 push 0x11a691d8 */
  push32((uint32_t)(0x11a691d8u));
  /* 11a61815 push 0x11a6be58 */
  push32((uint32_t)(0x11a6be58u));
  /* 11a6181a call esi */
  call_ind((uint32_t)(ESI), 0x11a6181cu);
  /* 11a6181c push 0x11a691cc */
  push32((uint32_t)(0x11a691ccu));
  /* 11a61821 push 0x11a6be78 */
  push32((uint32_t)(0x11a6be78u));
  /* 11a61826 call esi */
  call_ind((uint32_t)(ESI), 0x11a61828u);
  /* 11a61828 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6182b push 0x11a691c0 */
  push32((uint32_t)(0x11a691c0u));
  /* 11a61830 push 0x11a6be70 */
  push32((uint32_t)(0x11a6be70u));
  /* 11a61835 call esi */
  call_ind((uint32_t)(ESI), 0x11a61837u);
  /* 11a61837 push 0x11a691b4 */
  push32((uint32_t)(0x11a691b4u));
  /* 11a6183c push 0x11a6bdd0 */
  push32((uint32_t)(0x11a6bdd0u));
  /* 11a61841 call esi */
  call_ind((uint32_t)(ESI), 0x11a61843u);
  /* 11a61843 push 0x11a691a8 */
  push32((uint32_t)(0x11a691a8u));
  /* 11a61848 push 0x11a6bde0 */
  push32((uint32_t)(0x11a6bde0u));
  /* 11a6184d call esi */
  call_ind((uint32_t)(ESI), 0x11a6184fu);
  /* 11a6184f push 0x11a6919c */
  push32((uint32_t)(0x11a6919cu));
  /* 11a61854 push 0x11a6bdd8 */
  push32((uint32_t)(0x11a6bdd8u));
  /* 11a61859 call esi */
  call_ind((uint32_t)(ESI), 0x11a6185bu);
  /* 11a6185b push 0x11a69190 */
  push32((uint32_t)(0x11a69190u));
  /* 11a61860 push 0x11a6bef8 */
  push32((uint32_t)(0x11a6bef8u));
  /* 11a61865 call esi */
  call_ind((uint32_t)(ESI), 0x11a61867u);
  /* 11a61867 push 0x11a69188 */
  push32((uint32_t)(0x11a69188u));
  /* 11a6186c push 0x11a6c020 */
  push32((uint32_t)(0x11a6c020u));
  /* 11a61871 call esi */
  call_ind((uint32_t)(ESI), 0x11a61873u);
  /* 11a61873 push 0x11a6917c */
  push32((uint32_t)(0x11a6917cu));
  /* 11a61878 push 0x11a6bfa0 */
  push32((uint32_t)(0x11a6bfa0u));
  /* 11a6187d call esi */
  call_ind((uint32_t)(ESI), 0x11a6187fu);
  /* 11a6187f push 0x11a69170 */
  push32((uint32_t)(0x11a69170u));
  /* 11a61884 push 0x11a6bf98 */
  push32((uint32_t)(0x11a6bf98u));
  /* 11a61889 call esi */
  call_ind((uint32_t)(ESI), 0x11a6188bu);
  /* 11a6188b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6188e push 0x11a69164 */
  push32((uint32_t)(0x11a69164u));
  /* 11a61893 push 0x11a6bf90 */
  push32((uint32_t)(0x11a6bf90u));
  /* 11a61898 call esi */
  call_ind((uint32_t)(ESI), 0x11a6189au);
  /* 11a6189a push 0x11a69158 */
  push32((uint32_t)(0x11a69158u));
  /* 11a6189f push 0x11a6be50 */
  push32((uint32_t)(0x11a6be50u));
  /* 11a618a4 call esi */
  call_ind((uint32_t)(ESI), 0x11a618a6u);
  /* 11a618a6 push 0x11a6914c */
  push32((uint32_t)(0x11a6914cu));
  /* 11a618ab push 0x11a6be48 */
  push32((uint32_t)(0x11a6be48u));
  /* 11a618b0 call esi */
  call_ind((uint32_t)(ESI), 0x11a618b2u);
  /* 11a618b2 push 0x11a69140 */
  push32((uint32_t)(0x11a69140u));
  /* 11a618b7 push 0x11a6be40 */
  push32((uint32_t)(0x11a6be40u));
  /* 11a618bc call esi */
  call_ind((uint32_t)(ESI), 0x11a618beu);
  /* 11a618be push 0x11a69134 */
  push32((uint32_t)(0x11a69134u));
  /* 11a618c3 push 0x11a6bf48 */
  push32((uint32_t)(0x11a6bf48u));
  /* 11a618c8 call esi */
  call_ind((uint32_t)(ESI), 0x11a618cau);
  /* 11a618ca push 0x11a69128 */
  push32((uint32_t)(0x11a69128u));
  /* 11a618cf push 0x11a6be20 */
  push32((uint32_t)(0x11a6be20u));
  /* 11a618d4 call edi */
  call_ind((uint32_t)(EDI), 0x11a618d6u);
  /* 11a618d6 push 0x11a69118 */
  push32((uint32_t)(0x11a69118u));
  /* 11a618db push 0x11a6c0f0 */
  push32((uint32_t)(0x11a6c0f0u));
  /* 11a618e0 call esi */
  call_ind((uint32_t)(ESI), 0x11a618e2u);
  /* 11a618e2 push 0x11a6910c */
  push32((uint32_t)(0x11a6910cu));
  /* 11a618e7 push 0x11a6bdf8 */
  push32((uint32_t)(0x11a6bdf8u));
  /* 11a618ec call esi */
  call_ind((uint32_t)(ESI), 0x11a618eeu);
  /* 11a618ee add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a618f1 push 0x11a69100 */
  push32((uint32_t)(0x11a69100u));
  /* 11a618f6 push 0x11a6be08 */
  push32((uint32_t)(0x11a6be08u));
  /* 11a618fb call esi */
  call_ind((uint32_t)(ESI), 0x11a618fdu);
  /* 11a618fd push 0x11a690f4 */
  push32((uint32_t)(0x11a690f4u));
  /* 11a61902 push 0x11a6be00 */
  push32((uint32_t)(0x11a6be00u));
  /* 11a61907 call esi */
  call_ind((uint32_t)(ESI), 0x11a61909u);
  /* 11a61909 push 0x11a690e8 */
  push32((uint32_t)(0x11a690e8u));
  /* 11a6190e push 0x11a6bdf0 */
  push32((uint32_t)(0x11a6bdf0u));
  /* 11a61913 call esi */
  call_ind((uint32_t)(ESI), 0x11a61915u);
  /* 11a61915 push 0x11a690dc */
  push32((uint32_t)(0x11a690dcu));
  /* 11a6191a push 0x11a6bde8 */
  push32((uint32_t)(0x11a6bde8u));
  /* 11a6191f call esi */
  call_ind((uint32_t)(ESI), 0x11a61921u);
  /* 11a61921 mov esi, dword ptr [0x11a68138] */
  ESI = (r32((uint32_t)(0x11a68138)));
  /* 11a61927 push 0x11a690cc */
  push32((uint32_t)(0x11a690ccu));
  /* 11a6192c push 0x11a6be28 */
  push32((uint32_t)(0x11a6be28u));
  /* 11a61931 call esi */
  call_ind((uint32_t)(ESI), 0x11a61933u);
  /* 11a61933 push 0x11a690c0 */
  push32((uint32_t)(0x11a690c0u));
  /* 11a61938 push 0x11a6bff0 */
  push32((uint32_t)(0x11a6bff0u));
  /* 11a6193d call esi */
  call_ind((uint32_t)(ESI), 0x11a6193fu);
  /* 11a6193f push 0x11a690ac */
  push32((uint32_t)(0x11a690acu));
  /* 11a61944 push 0x11a6bf88 */
  push32((uint32_t)(0x11a6bf88u));
  /* 11a61949 call esi */
  call_ind((uint32_t)(ESI), 0x11a6194bu);
  /* 11a6194b push 0x11a690a0 */
  push32((uint32_t)(0x11a690a0u));
  /* 11a61950 push 0x11a6bed0 */
  push32((uint32_t)(0x11a6bed0u));
  /* 11a61955 call esi */
  call_ind((uint32_t)(ESI), 0x11a61957u);
  /* 11a61957 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6195a push 0x11a69094 */
  push32((uint32_t)(0x11a69094u));
  /* 11a6195f push 0x11a6bf60 */
  push32((uint32_t)(0x11a6bf60u));
  /* 11a61964 call esi */
  call_ind((uint32_t)(ESI), 0x11a61966u);
  /* 11a61966 push 0x11a69084 */
  push32((uint32_t)(0x11a69084u));
  /* 11a6196b push 0x11a6bfe0 */
  push32((uint32_t)(0x11a6bfe0u));
  /* 11a61970 call esi */
  call_ind((uint32_t)(ESI), 0x11a61972u);
  /* 11a61972 push 0x11a69078 */
  push32((uint32_t)(0x11a69078u));
  /* 11a61977 push 0x11a6bfe8 */
  push32((uint32_t)(0x11a6bfe8u));
  /* 11a6197c call esi */
  call_ind((uint32_t)(ESI), 0x11a6197eu);
  /* 11a6197e push 0x11a69070 */
  push32((uint32_t)(0x11a69070u));
  /* 11a61983 push 0x11a6be18 */
  push32((uint32_t)(0x11a6be18u));
  /* 11a61988 call dword ptr [0x11a6813c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6813c))), 0x11a6198eu);
  /* 11a6198e mov ebx, dword ptr [0x11a6815c] */
  EBX = (r32((uint32_t)(0x11a6815c)));
  /* 11a61994 push 0x11a6bfc8 */
  push32((uint32_t)(0x11a6bfc8u));
  /* 11a61999 call ebx */
  call_ind((uint32_t)(EBX), 0x11a6199bu);
  /* 11a6199b mov esi, dword ptr [0x11a68140] */
  ESI = (r32((uint32_t)(0x11a68140)));
  /* 11a619a1 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a619a3 push 0x11a6bfc8 */
  push32((uint32_t)(0x11a6bfc8u));
  /* 11a619a8 call esi */
  call_ind((uint32_t)(ESI), 0x11a619aau);
  /* 11a619aa push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a619af call ebx */
  call_ind((uint32_t)(EBX), 0x11a619b1u);
  /* 11a619b1 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a619b3 push 0x11a6bf78 */
  push32((uint32_t)(0x11a6bf78u));
  /* 11a619b8 call esi */
  call_ind((uint32_t)(ESI), 0x11a619bau);
  /* 11a619ba push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11a619bc push 0x11a6c030 */
  push32((uint32_t)(0x11a6c030u));
  /* 11a619c1 call esi */
  call_ind((uint32_t)(ESI), 0x11a619c3u);
  /* 11a619c3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a619c6 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11a619c8 push 0x11a6c070 */
  push32((uint32_t)(0x11a6c070u));
  /* 11a619cd call esi */
  call_ind((uint32_t)(ESI), 0x11a619cfu);
  /* 11a619cf push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11a619d1 push 0x11a6c0b0 */
  push32((uint32_t)(0x11a6c0b0u));
  /* 11a619d6 call esi */
  call_ind((uint32_t)(ESI), 0x11a619d8u);
  /* 11a619d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a619da push 0x11a6c104 */
  push32((uint32_t)(0x11a6c104u));
  /* 11a619df call esi */
  call_ind((uint32_t)(ESI), 0x11a619e1u);
  /* 11a619e1 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a619e3 push 0x11a6bed8 */
  push32((uint32_t)(0x11a6bed8u));
  /* 11a619e8 call esi */
  call_ind((uint32_t)(ESI), 0x11a619eau);
  /* 11a619ea push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a619ec push 0x11a6bee8 */
  push32((uint32_t)(0x11a6bee8u));
  /* 11a619f1 call esi */
  call_ind((uint32_t)(ESI), 0x11a619f3u);
  /* 11a619f3 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a619f5 push 0x11a6bf28 */
  push32((uint32_t)(0x11a6bf28u));
  /* 11a619fa call esi */
  call_ind((uint32_t)(ESI), 0x11a619fcu);
  /* 11a619fc push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a619fe push 0x11a6bf38 */
  push32((uint32_t)(0x11a6bf38u));
  /* 11a61a03 call esi */
  call_ind((uint32_t)(ESI), 0x11a61a05u);
  /* 11a61a05 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a61a07 push 0x11a6bf50 */
  push32((uint32_t)(0x11a6bf50u));
  /* 11a61a0c call esi */
  call_ind((uint32_t)(ESI), 0x11a61a0eu);
  /* 11a61a0e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61a11 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a61a13 push 0x11a6bf68 */
  push32((uint32_t)(0x11a6bf68u));
  /* 11a61a18 call esi */
  call_ind((uint32_t)(ESI), 0x11a61a1au);
  /* 11a61a1a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a61a1c push 0x11a6bf08 */
  push32((uint32_t)(0x11a6bf08u));
  /* 11a61a21 call esi */
  call_ind((uint32_t)(ESI), 0x11a61a23u);
  /* 11a61a23 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a61a25 push 0x11a6bf18 */
  push32((uint32_t)(0x11a6bf18u));
  /* 11a61a2a call esi */
  call_ind((uint32_t)(ESI), 0x11a61a2cu);
  /* 11a61a2c mov edi, dword ptr [0x11a68144] */
  EDI = (r32((uint32_t)(0x11a68144)));
  /* 11a61a32 push 0x11a69068 */
  push32((uint32_t)(0x11a69068u));
  /* 11a61a37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a61a39 call edi */
  call_ind((uint32_t)(EDI), 0x11a61a3bu);
  /* 11a61a3b push 0x11a69060 */
  push32((uint32_t)(0x11a69060u));
  /* 11a61a40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a61a42 call edi */
  call_ind((uint32_t)(EDI), 0x11a61a44u);
  /* 11a61a44 push 0x11a69058 */
  push32((uint32_t)(0x11a69058u));
  /* 11a61a49 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a61a4b call edi */
  call_ind((uint32_t)(EDI), 0x11a61a4du);
  /* 11a61a4d push 0x11a69050 */
  push32((uint32_t)(0x11a69050u));
  /* 11a61a52 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a61a54 call edi */
  call_ind((uint32_t)(EDI), 0x11a61a56u);
  /* 11a61a56 push 0x11a6c028 */
  push32((uint32_t)(0x11a6c028u));
  /* 11a61a5b call ebx */
  call_ind((uint32_t)(EBX), 0x11a61a5du);
  /* 11a61a5d push 8 */
  push32((uint32_t)(0x8u));
  /* 11a61a5f push 0x11a6c028 */
  push32((uint32_t)(0x11a6c028u));
  /* 11a61a64 call esi */
  call_ind((uint32_t)(ESI), 0x11a61a66u);
  /* 11a61a66 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61a69 pop edi */
  EDI = (pop32());
  /* 11a61a6a pop esi */
  ESI = (pop32());
  /* 11a61a6b pop ebx */
  EBX = (pop32());
  /* 11a61a6c ret  */
  ESPCHK(0x11a61690u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11a61a70 (2368 bytes, 740 insns) */
void f_11a61a70(void) {
  FTRACE(0x11a61a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a61a70 push ebx */
  push32((uint32_t)(EBX));
  /* 11a61a71 push ebp */
  push32((uint32_t)(EBP));
  /* 11a61a72 push esi */
  push32((uint32_t)(ESI));
  /* 11a61a73 push edi */
  push32((uint32_t)(EDI));
  /* 11a61a74 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a61a76 call dword ptr [0x11a680e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680e4))), 0x11a61a7cu);
  /* 11a61a7c mov ebp, dword ptr [0x11a68168] */
  EBP = (r32((uint32_t)(0x11a68168)));
  /* 11a61a82 mov esi, dword ptr [0x11a68154] */
  ESI = (r32((uint32_t)(0x11a68154)));
  /* 11a61a88 mov ebx, dword ptr [0x11a680e8] */
  EBX = (r32((uint32_t)(0x11a680e8)));
  /* 11a61a8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61a91 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a61a93 je 0x11a61cae */
  if (C.zf) goto L_11a61cae;
  /* 11a61a99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61a9b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a61a9d call dword ptr [0x11a680ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680ec))), 0x11a61aa3u);
  /* 11a61aa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61aa5 push 0x11a6c008 */
  push32((uint32_t)(0x11a6c008u));
  /* 11a61aaa call ebp */
  call_ind((uint32_t)(EBP), 0x11a61aacu);
  /* 11a61aac push 2 */
  push32((uint32_t)(0x2u));
  /* 11a61aae call dword ptr [0x11a680f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680f0))), 0x11a61ab4u);
  /* 11a61ab4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a61ab6 call dword ptr [0x11a68170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68170))), 0x11a61abcu);
  /* 11a61abc mov edi, dword ptr [0x11a680f4] */
  EDI = (r32((uint32_t)(0x11a680f4)));
  /* 11a61ac2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a61ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61ac6 call edi */
  call_ind((uint32_t)(EDI), 0x11a61ac8u);
  /* 11a61ac8 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11a61aca push 2 */
  push32((uint32_t)(0x2u));
  /* 11a61acc call edi */
  call_ind((uint32_t)(EDI), 0x11a61aceu);
  /* 11a61ace push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11a61ad0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a61ad2 call edi */
  call_ind((uint32_t)(EDI), 0x11a61ad4u);
  /* 11a61ad4 mov edi, dword ptr [0x11a680f8] */
  EDI = (r32((uint32_t)(0x11a680f8)));
  /* 11a61ada push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a61adf push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61ae1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a61ae3 call edi */
  call_ind((uint32_t)(EDI), 0x11a61ae5u);
  /* 11a61ae5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a61aea push 3 */
  push32((uint32_t)(0x3u));
  /* 11a61aec push 3 */
  push32((uint32_t)(0x3u));
  /* 11a61aee call edi */
  call_ind((uint32_t)(EDI), 0x11a61af0u);
  /* 11a61af0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61af3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a61af8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a61afa push 3 */
  push32((uint32_t)(0x3u));
  /* 11a61afc call edi */
  call_ind((uint32_t)(EDI), 0x11a61afeu);
  /* 11a61afe push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a61b03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a61b05 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a61b07 call edi */
  call_ind((uint32_t)(EDI), 0x11a61b09u);
  /* 11a61b09 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a61b0e push 4 */
  push32((uint32_t)(0x4u));
  /* 11a61b10 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a61b12 call edi */
  call_ind((uint32_t)(EDI), 0x11a61b14u);
  /* 11a61b14 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a61b19 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a61b1b push 3 */
  push32((uint32_t)(0x3u));
  /* 11a61b1d call edi */
  call_ind((uint32_t)(EDI), 0x11a61b1fu);
  /* 11a61b1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61b21 call esi */
  call_ind((uint32_t)(ESI), 0x11a61b23u);
  /* 11a61b23 push eax */
  push32((uint32_t)(EAX));
  /* 11a61b24 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a61b26 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a61b28 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a61b2a push 0x11a693bc */
  push32((uint32_t)(0x11a693bcu));
  /* 11a61b2f push 3 */
  push32((uint32_t)(0x3u));
  /* 11a61b31 call dword ptr [0x11a680fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680fc))), 0x11a61b37u);
  /* 11a61b37 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61b3a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a61b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61b41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61b43 call edi */
  call_ind((uint32_t)(EDI), 0x11a61b45u);
  /* 11a61b45 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a61b4a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a61b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61b4e call edi */
  call_ind((uint32_t)(EDI), 0x11a61b50u);
  /* 11a61b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61b52 call esi */
  call_ind((uint32_t)(ESI), 0x11a61b54u);
  /* 11a61b54 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a61b57 mov ecx, 0x7530 */
  ECX = (0x7530u);
  /* 11a61b5c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a61b5f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a61b62 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a61b65 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a61b67 push ecx */
  push32((uint32_t)(ECX));
  /* 11a61b68 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a61b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61b6c call edi */
  call_ind((uint32_t)(EDI), 0x11a61b6eu);
  /* 11a61b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61b70 call esi */
  call_ind((uint32_t)(ESI), 0x11a61b72u);
  /* 11a61b72 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11a61b75 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a61b78 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a61b7b lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11a61b7e mov eax, 0x4e20 */
  EAX = (0x4e20u);
  /* 11a61b83 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11a61b86 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a61b88 push eax */
  push32((uint32_t)(EAX));
  /* 11a61b89 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a61b8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61b8d call edi */
  call_ind((uint32_t)(EDI), 0x11a61b8fu);
  /* 11a61b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61b91 call esi */
  call_ind((uint32_t)(ESI), 0x11a61b93u);
  /* 11a61b93 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11a61b96 mov edx, 0x4e20 */
  EDX = (0x4e20u);
  /* 11a61b9b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a61b9e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a61ba1 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11a61ba4 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11a61ba7 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a61ba9 push edx */
  push32((uint32_t)(EDX));
  /* 11a61baa push 4 */
  push32((uint32_t)(0x4u));
  /* 11a61bac push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61bae call edi */
  call_ind((uint32_t)(EDI), 0x11a61bb0u);
  /* 11a61bb0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61bb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61bb5 call esi */
  call_ind((uint32_t)(ESI), 0x11a61bb7u);
  /* 11a61bb7 mov ecx, 5 */
  ECX = (0x5u);
  /* 11a61bbc sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a61bbe lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11a61bc1 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a61bc4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a61bc7 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a61bca push eax */
  push32((uint32_t)(EAX));
  /* 11a61bcb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a61bcd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61bcf call edi */
  call_ind((uint32_t)(EDI), 0x11a61bd1u);
  /* 11a61bd1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a61bd3 push edi */
  push32((uint32_t)(EDI));
  /* 11a61bd4 call esi */
  call_ind((uint32_t)(ESI), 0x11a61bd6u);
  /* 11a61bd6 mov ecx, 5 */
  ECX = (0x5u);
  /* 11a61bdb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61bde sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a61be0 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a61be2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a61be4 jle 0x11a61c19 */
  if ((C.zf||C.sf!=C.of)) goto L_11a61c19;
L_11a61be6:;
  /* 11a61be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61be8 push 0x11a6bea0 */
  push32((uint32_t)(0x11a6bea0u));
  /* 11a61bed push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61bef push 0x11a6be28 */
  push32((uint32_t)(0x11a6be28u));
  /* 11a61bf4 push 0x11a6be18 */
  push32((uint32_t)(0x11a6be18u));
  /* 11a61bf9 push 0x11a6bfc8 */
  push32((uint32_t)(0x11a6bfc8u));
  /* 11a61bfe call dword ptr [0x11a68174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68174))), 0x11a61c04u);
  /* 11a61c04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61c06 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a61c07 call esi */
  call_ind((uint32_t)(ESI), 0x11a61c09u);
  /* 11a61c09 mov edx, 5 */
  EDX = (0x5u);
  /* 11a61c0e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61c11 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a61c13 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11a61c15 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a61c17 jl 0x11a61be6 */
  if ((C.sf!=C.of)) goto L_11a61be6;
L_11a61c19:;
  /* 11a61c19 mov edi, dword ptr [0x11a6817c] */
  EDI = (r32((uint32_t)(0x11a6817c)));
  /* 11a61c1f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11a61c21 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11a61c23 call edi */
  call_ind((uint32_t)(EDI), 0x11a61c25u);
  /* 11a61c25 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11a61c27 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11a61c29 call edi */
  call_ind((uint32_t)(EDI), 0x11a61c2bu);
  /* 11a61c2b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11a61c2d push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11a61c2f call edi */
  call_ind((uint32_t)(EDI), 0x11a61c31u);
  /* 11a61c31 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11a61c33 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11a61c35 call edi */
  call_ind((uint32_t)(EDI), 0x11a61c37u);
  /* 11a61c37 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11a61c39 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a61c3b call edi */
  call_ind((uint32_t)(EDI), 0x11a61c3du);
  /* 11a61c3d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11a61c3f push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a61c41 call edi */
  call_ind((uint32_t)(EDI), 0x11a61c43u);
  /* 11a61c43 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11a61c45 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11a61c47 call edi */
  call_ind((uint32_t)(EDI), 0x11a61c49u);
  /* 11a61c49 mov edi, dword ptr [0x11a68100] */
  EDI = (r32((uint32_t)(0x11a68100)));
  /* 11a61c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61c51 push 0x11a6bfe0 */
  push32((uint32_t)(0x11a6bfe0u));
  /* 11a61c56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61c58 call edi */
  call_ind((uint32_t)(EDI), 0x11a61c5au);
  /* 11a61c5a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61c5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61c5f push 0x11a6bfe8 */
  push32((uint32_t)(0x11a6bfe8u));
  /* 11a61c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61c66 call edi */
  call_ind((uint32_t)(EDI), 0x11a61c68u);
  /* 11a61c68 mov edi, dword ptr [0x11a68104] */
  EDI = (r32((uint32_t)(0x11a68104)));
  /* 11a61c6e push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11a61c70 call edi */
  call_ind((uint32_t)(EDI), 0x11a61c72u);
  /* 11a61c72 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11a61c74 call edi */
  call_ind((uint32_t)(EDI), 0x11a61c76u);
  /* 11a61c76 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11a61c78 call ebx */
  call_ind((uint32_t)(EBX), 0x11a61c7au);
  /* 11a61c7a push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11a61c7c call ebx */
  call_ind((uint32_t)(EBX), 0x11a61c7eu);
  /* 11a61c7e push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11a61c80 call ebx */
  call_ind((uint32_t)(EBX), 0x11a61c82u);
  /* 11a61c82 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11a61c84 call edi */
  call_ind((uint32_t)(EDI), 0x11a61c86u);
  /* 11a61c86 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11a61c88 call edi */
  call_ind((uint32_t)(EDI), 0x11a61c8au);
  /* 11a61c8a push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11a61c8c call edi */
  call_ind((uint32_t)(EDI), 0x11a61c8eu);
  /* 11a61c8e push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11a61c90 call ebx */
  call_ind((uint32_t)(EBX), 0x11a61c92u);
  /* 11a61c92 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11a61c94 call edi */
  call_ind((uint32_t)(EDI), 0x11a61c96u);
  /* 11a61c96 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11a61c98 call ebx */
  call_ind((uint32_t)(EBX), 0x11a61c9au);
  /* 11a61c9a push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11a61c9c call ebx */
  call_ind((uint32_t)(EBX), 0x11a61c9eu);
  /* 11a61c9e push 0x11a693b0 */
  push32((uint32_t)(0x11a693b0u));
  /* 11a61ca3 call dword ptr [0x11a68108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68108))), 0x11a61ca9u);
  /* 11a61ca9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61cac jmp 0x11a61cb4 */
  goto L_11a61cb4;
L_11a61cae:;
  /* 11a61cae mov edi, dword ptr [0x11a68104] */
  EDI = (r32((uint32_t)(0x11a68104)));
L_11a61cb4:;
  /* 11a61cb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a61cb6 call dword ptr [0x11a680e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680e4))), 0x11a61cbcu);
  /* 11a61cbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61cbf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a61cc1 je 0x11a61e1b */
  if (C.zf) goto L_11a61e1b;
  /* 11a61cc7 push 0x11a6bdc0 */
  push32((uint32_t)(0x11a6bdc0u));
  /* 11a61ccc call dword ptr [0x11a68164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68164))), 0x11a61cd2u);
  /* 11a61cd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61cd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a61cd7 jne 0x11a61e1b */
  if (!C.zf) goto L_11a61e1b;
  /* 11a61cdd push eax */
  push32((uint32_t)(EAX));
  /* 11a61cde push 0x11a6c028 */
  push32((uint32_t)(0x11a6c028u));
  /* 11a61ce3 push eax */
  push32((uint32_t)(EAX));
  /* 11a61ce4 call dword ptr [0x11a6810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6810c))), 0x11a61ceau);
  /* 11a61cea push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61cec push 2 */
  push32((uint32_t)(0x2u));
  /* 11a61cee call dword ptr [0x11a680ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680ec))), 0x11a61cf4u);
  /* 11a61cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61cf6 call esi */
  call_ind((uint32_t)(ESI), 0x11a61cf8u);
  /* 11a61cf8 mov ecx, 5 */
  ECX = (0x5u);
  /* 11a61cfd sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a61cff lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11a61d02 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a61d05 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a61d08 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11a61d0b push eax */
  push32((uint32_t)(EAX));
  /* 11a61d0c push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11a61d0e call dword ptr [0x11a6817c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6817c))), 0x11a61d14u);
  /* 11a61d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61d16 push 0x11a6be30 */
  push32((uint32_t)(0x11a6be30u));
  /* 11a61d1b call ebp */
  call_ind((uint32_t)(EBP), 0x11a61d1du);
  /* 11a61d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61d1f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a61d21 call dword ptr [0x11a68110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68110))), 0x11a61d27u);
  /* 11a61d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61d29 push 0x11a6be30 */
  push32((uint32_t)(0x11a6be30u));
  /* 11a61d2e call ebp */
  call_ind((uint32_t)(EBP), 0x11a61d30u);
  /* 11a61d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61d32 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a61d34 call dword ptr [0x11a68110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68110))), 0x11a61d3au);
  /* 11a61d3a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61d3f push 0x11a6bf80 */
  push32((uint32_t)(0x11a6bf80u));
  /* 11a61d44 call ebp */
  call_ind((uint32_t)(EBP), 0x11a61d46u);
  /* 11a61d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61d48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a61d4a call dword ptr [0x11a68110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68110))), 0x11a61d50u);
  /* 11a61d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61d52 push 0x11a6bf80 */
  push32((uint32_t)(0x11a6bf80u));
  /* 11a61d57 call ebp */
  call_ind((uint32_t)(EBP), 0x11a61d59u);
  /* 11a61d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61d5b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a61d5d call dword ptr [0x11a68110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68110))), 0x11a61d63u);
  /* 11a61d63 push 0x11a693a4 */
  push32((uint32_t)(0x11a693a4u));
  /* 11a61d68 call dword ptr [0x11a68108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68108))), 0x11a61d6eu);
  /* 11a61d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61d70 call esi */
  call_ind((uint32_t)(ESI), 0x11a61d72u);
  /* 11a61d72 mov ecx, 5 */
  ECX = (0x5u);
  /* 11a61d77 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a61d79 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11a61d7c lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a61d7f lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11a61d82 shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a61d85 push ecx */
  push32((uint32_t)(ECX));
  /* 11a61d86 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a61d88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61d8a call dword ptr [0x11a68114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68114))), 0x11a61d90u);
  /* 11a61d90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61d92 call esi */
  call_ind((uint32_t)(ESI), 0x11a61d94u);
  /* 11a61d94 mov ecx, 5 */
  ECX = (0x5u);
  /* 11a61d99 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a61d9b lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11a61d9e lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a61da1 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11a61da4 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11a61da7 push edx */
  push32((uint32_t)(EDX));
  /* 11a61da8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a61daa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61dac call dword ptr [0x11a68114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68114))), 0x11a61db2u);
  /* 11a61db2 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61db5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61db7 call esi */
  call_ind((uint32_t)(ESI), 0x11a61db9u);
  /* 11a61db9 mov ecx, 5 */
  ECX = (0x5u);
  /* 11a61dbe sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a61dc0 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11a61dc3 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a61dc6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a61dc9 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11a61dcc push eax */
  push32((uint32_t)(EAX));
  /* 11a61dcd push 4 */
  push32((uint32_t)(0x4u));
  /* 11a61dcf push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61dd1 call dword ptr [0x11a68114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68114))), 0x11a61dd7u);
  /* 11a61dd7 push 0x11a69398 */
  push32((uint32_t)(0x11a69398u));
  /* 11a61ddc call dword ptr [0x11a68108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68108))), 0x11a61de2u);
  /* 11a61de2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a61de4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a61de6 call dword ptr [0x11a680ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680ec))), 0x11a61decu);
  /* 11a61dec push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61dee push 0x11a6c028 */
  push32((uint32_t)(0x11a6c028u));
  /* 11a61df3 call ebp */
  call_ind((uint32_t)(EBP), 0x11a61df5u);
  /* 11a61df5 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11a61df7 call edi */
  call_ind((uint32_t)(EDI), 0x11a61df9u);
  /* 11a61df9 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11a61dfb call edi */
  call_ind((uint32_t)(EDI), 0x11a61dfdu);
  /* 11a61dfd push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11a61dff call ebx */
  call_ind((uint32_t)(EBX), 0x11a61e01u);
  /* 11a61e01 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11a61e03 call ebx */
  call_ind((uint32_t)(EBX), 0x11a61e05u);
  /* 11a61e05 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11a61e07 call ebx */
  call_ind((uint32_t)(EBX), 0x11a61e09u);
  /* 11a61e09 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11a61e0b call ebx */
  call_ind((uint32_t)(EBX), 0x11a61e0du);
  /* 11a61e0d push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11a61e0f call edi */
  call_ind((uint32_t)(EDI), 0x11a61e11u);
  /* 11a61e11 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61e14 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11a61e16 call edi */
  call_ind((uint32_t)(EDI), 0x11a61e18u);
  /* 11a61e18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a61e1b:;
  /* 11a61e1b push 8 */
  push32((uint32_t)(0x8u));
  /* 11a61e1d call dword ptr [0x11a680e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680e4))), 0x11a61e23u);
  /* 11a61e23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61e26 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a61e28 je 0x11a61e4e */
  if (C.zf) goto L_11a61e4e;
  /* 11a61e2a push 0x11a6c0f8 */
  push32((uint32_t)(0x11a6c0f8u));
  /* 11a61e2f call dword ptr [0x11a68164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68164))), 0x11a61e35u);
  /* 11a61e35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61e38 cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a61e3b jge 0x11a61e4e */
  if ((C.sf==C.of)) goto L_11a61e4e;
  /* 11a61e3d push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11a61e3f call ebx */
  call_ind((uint32_t)(EBX), 0x11a61e41u);
  /* 11a61e41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61e43 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a61e45 call dword ptr [0x11a680ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680ec))), 0x11a61e4bu);
  /* 11a61e4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a61e4e:;
  /* 11a61e4e push 5 */
  push32((uint32_t)(0x5u));
  /* 11a61e50 call dword ptr [0x11a680e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680e4))), 0x11a61e56u);
  /* 11a61e56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61e59 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a61e5b je 0x11a61f1a */
  if (C.zf) goto L_11a61f1a;
  /* 11a61e61 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a61e63 call dword ptr [0x11a680e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680e4))), 0x11a61e69u);
  /* 11a61e69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61e6c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a61e6e je 0x11a61ef6 */
  if (C.zf) goto L_11a61ef6;
  /* 11a61e74 push 0x11a6bff8 */
  push32((uint32_t)(0x11a6bff8u));
  /* 11a61e79 push 0x11a6bdc8 */
  push32((uint32_t)(0x11a6bdc8u));
  /* 11a61e7e call dword ptr [0x11a6814c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6814c))), 0x11a61e84u);
  /* 11a61e84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61e87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a61e89 je 0x11a61ef6 */
  if (C.zf) goto L_11a61ef6;
  /* 11a61e8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61e8d push 3 */
  push32((uint32_t)(0x3u));
  /* 11a61e8f call dword ptr [0x11a680ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680ec))), 0x11a61e95u);
  /* 11a61e95 push 0x11a6c0f8 */
  push32((uint32_t)(0x11a6c0f8u));
  /* 11a61e9a call dword ptr [0x11a68164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68164))), 0x11a61ea0u);
  /* 11a61ea0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61ea3 cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a61ea6 jge 0x11a61ee4 */
  if ((C.sf==C.of)) goto L_11a61ee4;
  /* 11a61ea8 push 0x11a6938c */
  push32((uint32_t)(0x11a6938cu));
  /* 11a61ead call dword ptr [0x11a68118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68118))), 0x11a61eb3u);
  /* 11a61eb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61eb6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a61eb8 je 0x11a61ef6 */
  if (C.zf) goto L_11a61ef6;
  /* 11a61eba push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61ebc push 0x11a6be10 */
  push32((uint32_t)(0x11a6be10u));
  /* 11a61ec1 call ebp */
  call_ind((uint32_t)(EBP), 0x11a61ec3u);
  /* 11a61ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61ec5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a61ec7 call dword ptr [0x11a680ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680ec))), 0x11a61ecdu);
  /* 11a61ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61ecf push 5 */
  push32((uint32_t)(0x5u));
  /* 11a61ed1 call dword ptr [0x11a680ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680ec))), 0x11a61ed7u);
  /* 11a61ed7 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11a61ed9 call ebx */
  call_ind((uint32_t)(EBX), 0x11a61edbu);
  /* 11a61edb push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11a61edd call ebx */
  call_ind((uint32_t)(EBX), 0x11a61edfu);
  /* 11a61edf add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61ee2 jmp 0x11a61ef6 */
  goto L_11a61ef6;
L_11a61ee4:;
  /* 11a61ee4 push 0x11a69380 */
  push32((uint32_t)(0x11a69380u));
  /* 11a61ee9 call dword ptr [0x11a68108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68108))), 0x11a61eefu);
  /* 11a61eef push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11a61ef1 call edi */
  call_ind((uint32_t)(EDI), 0x11a61ef3u);
  /* 11a61ef3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a61ef6:;
  /* 11a61ef6 push 0x11a6bff8 */
  push32((uint32_t)(0x11a6bff8u));
  /* 11a61efb push 0x11a6bdc8 */
  push32((uint32_t)(0x11a6bdc8u));
  /* 11a61f00 call dword ptr [0x11a6814c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6814c))), 0x11a61f06u);
  /* 11a61f06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61f09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a61f0b jne 0x11a61f1a */
  if (!C.zf) goto L_11a61f1a;
  /* 11a61f0d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a61f0f push 3 */
  push32((uint32_t)(0x3u));
  /* 11a61f11 call dword ptr [0x11a680ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680ec))), 0x11a61f17u);
  /* 11a61f17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a61f1a:;
  /* 11a61f1a push 4 */
  push32((uint32_t)(0x4u));
  /* 11a61f1c call dword ptr [0x11a680e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680e4))), 0x11a61f22u);
  /* 11a61f22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61f25 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a61f27 jne 0x11a61f4a */
  if (!C.zf) goto L_11a61f4a;
  /* 11a61f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61f2b push 0x11a6be10 */
  push32((uint32_t)(0x11a6be10u));
  /* 11a61f30 call ebp */
  call_ind((uint32_t)(EBP), 0x11a61f32u);
  /* 11a61f32 push 0x11a6bdc0 */
  push32((uint32_t)(0x11a6bdc0u));
  /* 11a61f37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a61f39 call dword ptr [0x11a6811c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6811c))), 0x11a61f3fu);
  /* 11a61f3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a61f41 call dword ptr [0x11a68170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68170))), 0x11a61f47u);
  /* 11a61f47 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a61f4a:;
  /* 11a61f4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61f4c call esi */
  call_ind((uint32_t)(ESI), 0x11a61f4eu);
  /* 11a61f4e mov ecx, 4 */
  ECX = (0x4u);
  /* 11a61f53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61f56 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a61f58 mov eax, dword ptr [0x11a6c000] */
  EAX = (r32((uint32_t)(0x11a6c000)));
  /* 11a61f5d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a61f5e lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11a61f61 push 0x11a6be68 */
  push32((uint32_t)(0x11a6be68u));
  /* 11a61f66 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a61f68 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a61f6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61f6c mov dword ptr [0x11a6c104], eax */
  w32((uint32_t)(0x11a6c104), (EAX));
  /* 11a61f71 call esi */
  call_ind((uint32_t)(ESI), 0x11a61f73u);
  /* 11a61f73 mov edx, dword ptr [0x11a6c104] */
  EDX = (r32((uint32_t)(0x11a6c104)));
  /* 11a61f79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61f7c lea ecx, [edx + eax*2] */
  ECX = ((uint32_t)(EDX + EAX*2));
  /* 11a61f7f add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61f81 mov ecx, 0x11a6c030 */
  ECX = (0x11a6c030u);
  /* 11a61f86 push eax */
  push32((uint32_t)(EAX));
  /* 11a61f87 call 0x11a61260 */
  push32(0x11a61f8cu); f_11a61260();
  /* 11a61f8c push 0x11a6be60 */
  push32((uint32_t)(0x11a6be60u));
  /* 11a61f91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61f93 call esi */
  call_ind((uint32_t)(ESI), 0x11a61f95u);
  /* 11a61f95 mov edx, dword ptr [0x11a6c104] */
  EDX = (r32((uint32_t)(0x11a6c104)));
  /* 11a61f9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61f9e lea ecx, [edx + eax*2] */
  ECX = ((uint32_t)(EDX + EAX*2));
  /* 11a61fa1 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61fa3 mov ecx, 0x11a6c070 */
  ECX = (0x11a6c070u);
  /* 11a61fa8 push eax */
  push32((uint32_t)(EAX));
  /* 11a61fa9 call 0x11a61260 */
  push32(0x11a61faeu); f_11a61260();
  /* 11a61fae push 0x11a6bea8 */
  push32((uint32_t)(0x11a6bea8u));
  /* 11a61fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a61fb5 call esi */
  call_ind((uint32_t)(ESI), 0x11a61fb7u);
  /* 11a61fb7 mov edx, dword ptr [0x11a6c104] */
  EDX = (r32((uint32_t)(0x11a6c104)));
  /* 11a61fbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61fc0 lea ecx, [edx + eax*2] */
  ECX = ((uint32_t)(EDX + EAX*2));
  /* 11a61fc3 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a61fc5 mov ecx, 0x11a6c0b0 */
  ECX = (0x11a6c0b0u);
  /* 11a61fca push eax */
  push32((uint32_t)(EAX));
  /* 11a61fcb call 0x11a61260 */
  push32(0x11a61fd0u); f_11a61260();
  /* 11a61fd0 push 0x11a6be38 */
  push32((uint32_t)(0x11a6be38u));
  /* 11a61fd5 push 0x11a6bfa8 */
  push32((uint32_t)(0x11a6bfa8u));
  /* 11a61fda push 0x11a6bfb0 */
  push32((uint32_t)(0x11a6bfb0u));
  /* 11a61fdf push 0x11a6bfb8 */
  push32((uint32_t)(0x11a6bfb8u));
  /* 11a61fe4 mov ecx, 0x11a6c030 */
  ECX = (0x11a6c030u);
  /* 11a61fe9 call 0x11a610f0 */
  push32(0x11a61feeu); f_11a610f0();
  /* 11a61fee push 0x11a6bef8 */
  push32((uint32_t)(0x11a6bef8u));
  /* 11a61ff3 push 0x11a6bdd8 */
  push32((uint32_t)(0x11a6bdd8u));
  /* 11a61ff8 push 0x11a6bde0 */
  push32((uint32_t)(0x11a6bde0u));
  /* 11a61ffd push 0x11a6bdd0 */
  push32((uint32_t)(0x11a6bdd0u));
  /* 11a62002 mov ecx, 0x11a6c070 */
  ECX = (0x11a6c070u);
  /* 11a62007 call 0x11a610f0 */
  push32(0x11a6200cu); f_11a610f0();
  /* 11a6200c push 0x11a6bf48 */
  push32((uint32_t)(0x11a6bf48u));
  /* 11a62011 push 0x11a6be40 */
  push32((uint32_t)(0x11a6be40u));
  /* 11a62016 push 0x11a6be48 */
  push32((uint32_t)(0x11a6be48u));
  /* 11a6201b push 0x11a6be50 */
  push32((uint32_t)(0x11a6be50u));
  /* 11a62020 mov ecx, 0x11a6c0b0 */
  ECX = (0x11a6c0b0u);
  /* 11a62025 call 0x11a610f0 */
  push32(0x11a6202au); f_11a610f0();
  /* 11a6202a push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11a6202c call dword ptr [0x11a68160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68160))), 0x11a62032u);
  /* 11a62032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62035 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a62037 je 0x11a62283 */
  if (C.zf) goto L_11a62283;
  /* 11a6203d mov ebp, dword ptr [0x11a680e4] */
  EBP = (r32((uint32_t)(0x11a680e4)));
  /* 11a62043 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a62045 call ebp */
  call_ind((uint32_t)(EBP), 0x11a62047u);
  /* 11a62047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6204a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a6204c jne 0x11a62283 */
  if (!C.zf) goto L_11a62283;
  /* 11a62052 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a62054 call ebp */
  call_ind((uint32_t)(EBP), 0x11a62056u);
  /* 11a62056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62059 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a6205b je 0x11a62135 */
  if (C.zf) goto L_11a62135;
  /* 11a62061 mov ebp, dword ptr [0x11a680ec] */
  EBP = (r32((uint32_t)(0x11a680ec)));
  /* 11a62067 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a62069 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a6206b call ebp */
  call_ind((uint32_t)(EBP), 0x11a6206du);
  /* 11a6206d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a6206f push 7 */
  push32((uint32_t)(0x7u));
  /* 11a62071 call ebp */
  call_ind((uint32_t)(EBP), 0x11a62073u);
  /* 11a62073 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a62075 call esi */
  call_ind((uint32_t)(ESI), 0x11a62077u);
  /* 11a62077 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6207a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a6207b je 0x11a620fb */
  if (C.zf) goto L_11a620fb;
  /* 11a6207d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a6207e je 0x11a620c1 */
  if (C.zf) goto L_11a620c1;
  /* 11a62080 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a62081 jne 0x11a62135 */
  if (!C.zf) goto L_11a62135;
  /* 11a62087 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11a62089 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11a6208b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a6208d call esi */
  call_ind((uint32_t)(ESI), 0x11a6208fu);
  /* 11a6208f mov ecx, 5 */
  ECX = (0x5u);
  /* 11a62094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62097 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a62099 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a6209c mov ecx, 0x11a6c030 */
  ECX = (0x11a6c030u);
  /* 11a620a1 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a620a4 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11a620a7 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11a620aa push edx */
  push32((uint32_t)(EDX));
  /* 11a620ab push 5 */
  push32((uint32_t)(0x5u));
  /* 11a620ad push 0x11a6bfc0 */
  push32((uint32_t)(0x11a6bfc0u));
  /* 11a620b2 push 0x11a6bfd0 */
  push32((uint32_t)(0x11a6bfd0u));
  /* 11a620b7 push 0x11a6bfd8 */
  push32((uint32_t)(0x11a6bfd8u));
  /* 11a620bc call 0x11a61020 */
  push32(0x11a620c1u); f_11a61020();
L_11a620c1:;
  /* 11a620c1 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11a620c3 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11a620c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a620c7 call esi */
  call_ind((uint32_t)(ESI), 0x11a620c9u);
  /* 11a620c9 mov ecx, 5 */
  ECX = (0x5u);
  /* 11a620ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a620d1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a620d3 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a620d6 mov ecx, 0x11a6c070 */
  ECX = (0x11a6c070u);
  /* 11a620db lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a620de lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a620e1 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11a620e4 push eax */
  push32((uint32_t)(EAX));
  /* 11a620e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a620e7 push 0x11a6be70 */
  push32((uint32_t)(0x11a6be70u));
  /* 11a620ec push 0x11a6be78 */
  push32((uint32_t)(0x11a6be78u));
  /* 11a620f1 push 0x11a6be58 */
  push32((uint32_t)(0x11a6be58u));
  /* 11a620f6 call 0x11a61020 */
  push32(0x11a620fbu); f_11a61020();
L_11a620fb:;
  /* 11a620fb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a620fd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a620ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11a62101 call esi */
  call_ind((uint32_t)(ESI), 0x11a62103u);
  /* 11a62103 mov ecx, 5 */
  ECX = (0x5u);
  /* 11a62108 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6210b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6210d lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a62110 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a62113 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11a62116 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11a62119 push ecx */
  push32((uint32_t)(ECX));
  /* 11a6211a push 5 */
  push32((uint32_t)(0x5u));
  /* 11a6211c push 0x11a6bf90 */
  push32((uint32_t)(0x11a6bf90u));
  /* 11a62121 push 0x11a6bf98 */
  push32((uint32_t)(0x11a6bf98u));
  /* 11a62126 push 0x11a6bfa0 */
  push32((uint32_t)(0x11a6bfa0u));
  /* 11a6212b mov ecx, 0x11a6c0b0 */
  ECX = (0x11a6c0b0u);
  /* 11a62130 call 0x11a61020 */
  push32(0x11a62135u); f_11a61020();
L_11a62135:;
  /* 11a62135 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a62137 call dword ptr [0x11a680e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680e4))), 0x11a6213du);
  /* 11a6213d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62140 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a62142 jne 0x11a62283 */
  if (!C.zf) goto L_11a62283;
  /* 11a62148 mov ecx, 0x11a6c0b0 */
  ECX = (0x11a6c0b0u);
  /* 11a6214d call 0x11a612e0 */
  push32(0x11a62152u); f_11a612e0();
  /* 11a62152 mov ecx, 0x11a6c070 */
  ECX = (0x11a6c070u);
  /* 11a62157 mov ebp, eax */
  EBP = (EAX);
  /* 11a62159 call 0x11a612e0 */
  push32(0x11a6215eu); f_11a612e0();
  /* 11a6215e mov ecx, 0x11a6c030 */
  ECX = (0x11a6c030u);
  /* 11a62163 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62165 call 0x11a612e0 */
  push32(0x11a6216au); f_11a612e0();
  /* 11a6216a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a6216c add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6216e call esi */
  call_ind((uint32_t)(ESI), 0x11a62170u);
  /* 11a62170 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62173 cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62175 jge 0x11a62283 */
  if ((C.sf==C.of)) goto L_11a62283;
  /* 11a6217b mov ebp, dword ptr [0x11a68120] */
  EBP = (r32((uint32_t)(0x11a68120)));
  /* 11a62181 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a62183 push 0x11a6c010 */
  push32((uint32_t)(0x11a6c010u));
  /* 11a62188 call ebp */
  call_ind((uint32_t)(EBP), 0x11a6218au);
  /* 11a6218a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6218d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6218f jne 0x11a621d8 */
  if (!C.zf) goto L_11a621d8;
  /* 11a62191 mov ecx, 0x11a6c030 */
  ECX = (0x11a6c030u);
  /* 11a62196 call 0x11a612e0 */
  push32(0x11a6219bu); f_11a612e0();
  /* 11a6219b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6219d jne 0x11a621d8 */
  if (!C.zf) goto L_11a621d8;
  /* 11a6219f push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11a621a1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11a621a3 push eax */
  push32((uint32_t)(EAX));
  /* 11a621a4 call esi */
  call_ind((uint32_t)(ESI), 0x11a621a6u);
  /* 11a621a6 mov ecx, 5 */
  ECX = (0x5u);
  /* 11a621ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a621ae sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a621b0 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a621b3 mov ecx, 0x11a6c030 */
  ECX = (0x11a6c030u);
  /* 11a621b8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a621bb lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11a621be shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11a621c1 push edx */
  push32((uint32_t)(EDX));
  /* 11a621c2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a621c4 push 0x11a6bfc0 */
  push32((uint32_t)(0x11a6bfc0u));
  /* 11a621c9 push 0x11a6bfd0 */
  push32((uint32_t)(0x11a6bfd0u));
  /* 11a621ce push 0x11a6bfd8 */
  push32((uint32_t)(0x11a6bfd8u));
  /* 11a621d3 jmp 0x11a6227e */
  goto L_11a6227e;
L_11a621d8:;
  /* 11a621d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a621da push 0x11a6c018 */
  push32((uint32_t)(0x11a6c018u));
  /* 11a621df call ebp */
  call_ind((uint32_t)(EBP), 0x11a621e1u);
  /* 11a621e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a621e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a621e6 jne 0x11a6222c */
  if (!C.zf) goto L_11a6222c;
  /* 11a621e8 mov ecx, 0x11a6c070 */
  ECX = (0x11a6c070u);
  /* 11a621ed call 0x11a612e0 */
  push32(0x11a621f2u); f_11a612e0();
  /* 11a621f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a621f4 jne 0x11a6222c */
  if (!C.zf) goto L_11a6222c;
  /* 11a621f6 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11a621f8 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11a621fa push eax */
  push32((uint32_t)(EAX));
  /* 11a621fb call esi */
  call_ind((uint32_t)(ESI), 0x11a621fdu);
  /* 11a621fd mov ecx, 5 */
  ECX = (0x5u);
  /* 11a62202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62205 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a62207 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a6220a mov ecx, 0x11a6c070 */
  ECX = (0x11a6c070u);
  /* 11a6220f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a62212 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a62215 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11a62218 push eax */
  push32((uint32_t)(EAX));
  /* 11a62219 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a6221b push 0x11a6be70 */
  push32((uint32_t)(0x11a6be70u));
  /* 11a62220 push 0x11a6be78 */
  push32((uint32_t)(0x11a6be78u));
  /* 11a62225 push 0x11a6be58 */
  push32((uint32_t)(0x11a6be58u));
  /* 11a6222a jmp 0x11a6227e */
  goto L_11a6227e;
L_11a6222c:;
  /* 11a6222c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a6222e push 0x11a6c020 */
  push32((uint32_t)(0x11a6c020u));
  /* 11a62233 call ebp */
  call_ind((uint32_t)(EBP), 0x11a62235u);
  /* 11a62235 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6223a jne 0x11a62283 */
  if (!C.zf) goto L_11a62283;
  /* 11a6223c mov ecx, 0x11a6c0b0 */
  ECX = (0x11a6c0b0u);
  /* 11a62241 call 0x11a612e0 */
  push32(0x11a62246u); f_11a612e0();
  /* 11a62246 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a62248 jne 0x11a62283 */
  if (!C.zf) goto L_11a62283;
  /* 11a6224a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a6224c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a6224e push eax */
  push32((uint32_t)(EAX));
  /* 11a6224f call esi */
  call_ind((uint32_t)(ESI), 0x11a62251u);
  /* 11a62251 mov ecx, 5 */
  ECX = (0x5u);
  /* 11a62256 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62259 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6225b lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a6225e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a62261 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11a62264 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11a62267 push ecx */
  push32((uint32_t)(ECX));
  /* 11a62268 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a6226a push 0x11a6bf90 */
  push32((uint32_t)(0x11a6bf90u));
  /* 11a6226f push 0x11a6bf98 */
  push32((uint32_t)(0x11a6bf98u));
  /* 11a62274 push 0x11a6bfa0 */
  push32((uint32_t)(0x11a6bfa0u));
  /* 11a62279 mov ecx, 0x11a6c0b0 */
  ECX = (0x11a6c0b0u);
L_11a6227e:;
  /* 11a6227e call 0x11a61020 */
  push32(0x11a62283u); f_11a61020();
L_11a62283:;
  /* 11a62283 push 0x11a6be08 */
  push32((uint32_t)(0x11a6be08u));
  /* 11a62288 push 0x11a6be00 */
  push32((uint32_t)(0x11a6be00u));
  /* 11a6228d push 0x11a6c0f0 */
  push32((uint32_t)(0x11a6c0f0u));
  /* 11a62292 push 0x11a6be20 */
  push32((uint32_t)(0x11a6be20u));
  /* 11a62297 mov ecx, 0x11a6bed8 */
  ECX = (0x11a6bed8u);
  /* 11a6229c call 0x11a61550 */
  push32(0x11a622a1u); f_11a61550();
  /* 11a622a1 push 0x11a6be08 */
  push32((uint32_t)(0x11a6be08u));
  /* 11a622a6 push 0x11a6be00 */
  push32((uint32_t)(0x11a6be00u));
  /* 11a622ab push 0x11a6c0f0 */
  push32((uint32_t)(0x11a6c0f0u));
  /* 11a622b0 push 0x11a6be20 */
  push32((uint32_t)(0x11a6be20u));
  /* 11a622b5 mov ecx, 0x11a6bee8 */
  ECX = (0x11a6bee8u);
  /* 11a622ba call 0x11a61550 */
  push32(0x11a622bfu); f_11a61550();
  /* 11a622bf push 0x11a6be00 */
  push32((uint32_t)(0x11a6be00u));
  /* 11a622c4 push 0x11a6bdf8 */
  push32((uint32_t)(0x11a6bdf8u));
  /* 11a622c9 push 0x11a6c0f0 */
  push32((uint32_t)(0x11a6c0f0u));
  /* 11a622ce push 0x11a6be20 */
  push32((uint32_t)(0x11a6be20u));
  /* 11a622d3 mov ecx, 0x11a6bf28 */
  ECX = (0x11a6bf28u);
  /* 11a622d8 call 0x11a61550 */
  push32(0x11a622ddu); f_11a61550();
  /* 11a622dd push 0x11a6be00 */
  push32((uint32_t)(0x11a6be00u));
  /* 11a622e2 push 0x11a6bdf8 */
  push32((uint32_t)(0x11a6bdf8u));
  /* 11a622e7 push 0x11a6c0f0 */
  push32((uint32_t)(0x11a6c0f0u));
  /* 11a622ec push 0x11a6be20 */
  push32((uint32_t)(0x11a6be20u));
  /* 11a622f1 mov ecx, 0x11a6bf38 */
  ECX = (0x11a6bf38u);
  /* 11a622f6 call 0x11a61550 */
  push32(0x11a622fbu); f_11a61550();
  /* 11a622fb push 0x11a6bdf0 */
  push32((uint32_t)(0x11a6bdf0u));
  /* 11a62300 push 0x11a6bdf8 */
  push32((uint32_t)(0x11a6bdf8u));
  /* 11a62305 push 0x11a6c0f0 */
  push32((uint32_t)(0x11a6c0f0u));
  /* 11a6230a push 0x11a6be20 */
  push32((uint32_t)(0x11a6be20u));
  /* 11a6230f mov ecx, 0x11a6bf50 */
  ECX = (0x11a6bf50u);
  /* 11a62314 call 0x11a61550 */
  push32(0x11a62319u); f_11a61550();
  /* 11a62319 push 0x11a6bdf0 */
  push32((uint32_t)(0x11a6bdf0u));
  /* 11a6231e push 0x11a6bdf8 */
  push32((uint32_t)(0x11a6bdf8u));
  /* 11a62323 push 0x11a6c0f0 */
  push32((uint32_t)(0x11a6c0f0u));
  /* 11a62328 push 0x11a6be20 */
  push32((uint32_t)(0x11a6be20u));
  /* 11a6232d mov ecx, 0x11a6bf68 */
  ECX = (0x11a6bf68u);
  /* 11a62332 call 0x11a61550 */
  push32(0x11a62337u); f_11a61550();
  /* 11a62337 push 0x11a6bde8 */
  push32((uint32_t)(0x11a6bde8u));
  /* 11a6233c push 0x11a6bdf8 */
  push32((uint32_t)(0x11a6bdf8u));
  /* 11a62341 push 0x11a6c0f0 */
  push32((uint32_t)(0x11a6c0f0u));
  /* 11a62346 push 0x11a6be20 */
  push32((uint32_t)(0x11a6be20u));
  /* 11a6234b mov ecx, 0x11a6bf08 */
  ECX = (0x11a6bf08u);
  /* 11a62350 call 0x11a61550 */
  push32(0x11a62355u); f_11a61550();
  /* 11a62355 push 0x11a6bde8 */
  push32((uint32_t)(0x11a6bde8u));
  /* 11a6235a push 0x11a6bdf8 */
  push32((uint32_t)(0x11a6bdf8u));
  /* 11a6235f push 0x11a6c0f0 */
  push32((uint32_t)(0x11a6c0f0u));
  /* 11a62364 push 0x11a6be20 */
  push32((uint32_t)(0x11a6be20u));
  /* 11a62369 mov ecx, 0x11a6bf18 */
  ECX = (0x11a6bf18u);
  /* 11a6236e call 0x11a61550 */
  push32(0x11a62373u); f_11a61550();
  /* 11a62373 push 0x11a6bf00 */
  push32((uint32_t)(0x11a6bf00u));
  /* 11a62378 call dword ptr [0x11a68164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68164))), 0x11a6237eu);
  /* 11a6237e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62381 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a62383 jne 0x11a62396 */
  if (!C.zf) goto L_11a62396;
  /* 11a62385 call dword ptr [0x11a68124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68124))), 0x11a6238bu);
  /* 11a6238b push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11a6238d call ebx */
  call_ind((uint32_t)(EBX), 0x11a6238fu);
  /* 11a6238f push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11a62391 call edi */
  call_ind((uint32_t)(EDI), 0x11a62393u);
  /* 11a62393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a62396:;
  /* 11a62396 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a62398 call dword ptr [0x11a68128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68128))), 0x11a6239eu);
  /* 11a6239e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a623a1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a623a3 pop edi */
  EDI = (pop32());
  /* 11a623a4 pop esi */
  ESI = (pop32());
  /* 11a623a5 pop ebp */
  EBP = (pop32());
  /* 11a623a6 pop ebx */
  EBX = (pop32());
  /* 11a623a7 je 0x11a623af */
  if (C.zf) goto L_11a623af;
  /* 11a623a9 jmp dword ptr [0x11a6812c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a6812c)))); return;
L_11a623af:;
  /* 11a623af ret  */
  ESPCHK(0x11a61a70u, _esp0);
  ESP += 4; return;
}

/* FUN_100023b0 @ 0x11a623b0 (325 bytes, 118 insns) */
void f_11a623b0(void) {
  FTRACE(0x11a623b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a623b0 push esi */
  push32((uint32_t)(ESI));
  /* 11a623b1 push edi */
  push32((uint32_t)(EDI));
  /* 11a623b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a623b4 call 0x11a6252f */
  push32(0x11a623b9u); f_11a6252f();
  /* 11a623b9 push eax */
  push32((uint32_t)(EAX));
  /* 11a623ba call 0x11a62500 */
  push32(0x11a623bfu); f_11a62500();
  /* 11a623bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a623c2 call 0x11a6250d */
  push32(0x11a623c7u); f_11a6250d();
  /* 11a623c7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a623c8 mov ecx, 3 */
  ECX = (0x3u);
  /* 11a623cd mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11a623d1 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a623d3 mov edi, dword ptr [0x11a6816c] */
  EDI = (r32((uint32_t)(0x11a6816c)));
  /* 11a623d9 sub edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a623dc je 0x11a62400 */
  if (C.zf) goto L_11a62400;
  /* 11a623de dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a623df je 0x11a623f2 */
  if (C.zf) goto L_11a623f2;
  /* 11a623e1 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a623e2 jne 0x11a62412 */
  if (!C.zf) goto L_11a62412;
  /* 11a623e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a623e6 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a623eb push 0x11a6bea8 */
  push32((uint32_t)(0x11a6bea8u));
  /* 11a623f0 jmp 0x11a6240c */
  goto L_11a6240c;
L_11a623f2:;
  /* 11a623f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a623f4 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a623f9 push 0x11a6be60 */
  push32((uint32_t)(0x11a6be60u));
  /* 11a623fe jmp 0x11a6240c */
  goto L_11a6240c;
L_11a62400:;
  /* 11a62400 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a62402 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a62407 push 0x11a6be68 */
  push32((uint32_t)(0x11a6be68u));
L_11a6240c:;
  /* 11a6240c push esi */
  push32((uint32_t)(ESI));
  /* 11a6240d call edi */
  call_ind((uint32_t)(EDI), 0x11a6240fu);
  /* 11a6240f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a62412:;
  /* 11a62412 call 0x11a6250d */
  push32(0x11a62417u); f_11a6250d();
  /* 11a62417 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a62418 mov ecx, 3 */
  ECX = (0x3u);
  /* 11a6241d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a6241f sub edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a62422 je 0x11a62446 */
  if (C.zf) goto L_11a62446;
  /* 11a62424 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a62425 je 0x11a62438 */
  if (C.zf) goto L_11a62438;
  /* 11a62427 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a62428 jne 0x11a62458 */
  if (!C.zf) goto L_11a62458;
  /* 11a6242a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a6242c push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a62431 push 0x11a6be88 */
  push32((uint32_t)(0x11a6be88u));
  /* 11a62436 jmp 0x11a62452 */
  goto L_11a62452;
L_11a62438:;
  /* 11a62438 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a6243a push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a6243f push 0x11a6be98 */
  push32((uint32_t)(0x11a6be98u));
  /* 11a62444 jmp 0x11a62452 */
  goto L_11a62452;
L_11a62446:;
  /* 11a62446 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a62448 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a6244d push 0x11a6bea0 */
  push32((uint32_t)(0x11a6bea0u));
L_11a62452:;
  /* 11a62452 push esi */
  push32((uint32_t)(ESI));
  /* 11a62453 call edi */
  call_ind((uint32_t)(EDI), 0x11a62455u);
  /* 11a62455 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a62458:;
  /* 11a62458 call 0x11a6250d */
  push32(0x11a6245du); f_11a6250d();
  /* 11a6245d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a6245e mov ecx, 3 */
  ECX = (0x3u);
  /* 11a62463 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a62465 sub edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a62468 je 0x11a6248c */
  if (C.zf) goto L_11a6248c;
  /* 11a6246a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a6246b je 0x11a6247e */
  if (C.zf) goto L_11a6247e;
  /* 11a6246d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a6246e jne 0x11a6249e */
  if (!C.zf) goto L_11a6249e;
  /* 11a62470 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a62472 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a62477 push 0x11a6beb0 */
  push32((uint32_t)(0x11a6beb0u));
  /* 11a6247c jmp 0x11a62498 */
  goto L_11a62498;
L_11a6247e:;
  /* 11a6247e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a62480 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a62485 push 0x11a6beb8 */
  push32((uint32_t)(0x11a6beb8u));
  /* 11a6248a jmp 0x11a62498 */
  goto L_11a62498;
L_11a6248c:;
  /* 11a6248c push 2 */
  push32((uint32_t)(0x2u));
  /* 11a6248e push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a62493 push 0x11a6bec8 */
  push32((uint32_t)(0x11a6bec8u));
L_11a62498:;
  /* 11a62498 push esi */
  push32((uint32_t)(ESI));
  /* 11a62499 call edi */
  call_ind((uint32_t)(EDI), 0x11a6249bu);
  /* 11a6249b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a6249e:;
  /* 11a6249e call 0x11a6250d */
  push32(0x11a624a3u); f_11a6250d();
  /* 11a624a3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a624a4 mov ecx, 3 */
  ECX = (0x3u);
  /* 11a624a9 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a624ab sub edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a624ae je 0x11a624e0 */
  if (C.zf) goto L_11a624e0;
  /* 11a624b0 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a624b1 je 0x11a624cb */
  if (C.zf) goto L_11a624cb;
  /* 11a624b3 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a624b4 jne 0x11a624f2 */
  if (!C.zf) goto L_11a624f2;
  /* 11a624b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a624b8 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a624bd push 0x11a6bec0 */
  push32((uint32_t)(0x11a6bec0u));
  /* 11a624c2 push esi */
  push32((uint32_t)(ESI));
  /* 11a624c3 call edi */
  call_ind((uint32_t)(EDI), 0x11a624c5u);
  /* 11a624c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a624c8 pop edi */
  EDI = (pop32());
  /* 11a624c9 pop esi */
  ESI = (pop32());
  /* 11a624ca ret  */
  ESPCHK(0x11a623b0u, _esp0);
  ESP += 4; return;
L_11a624cb:;
  /* 11a624cb push 2 */
  push32((uint32_t)(0x2u));
  /* 11a624cd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a624d2 push 0x11a6be80 */
  push32((uint32_t)(0x11a6be80u));
  /* 11a624d7 push esi */
  push32((uint32_t)(ESI));
  /* 11a624d8 call edi */
  call_ind((uint32_t)(EDI), 0x11a624dau);
  /* 11a624da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a624dd pop edi */
  EDI = (pop32());
  /* 11a624de pop esi */
  ESI = (pop32());
  /* 11a624df ret  */
  ESPCHK(0x11a623b0u, _esp0);
  ESP += 4; return;
L_11a624e0:;
  /* 11a624e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a624e2 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a624e7 push 0x11a6be90 */
  push32((uint32_t)(0x11a6be90u));
  /* 11a624ec push esi */
  push32((uint32_t)(ESI));
  /* 11a624ed call edi */
  call_ind((uint32_t)(EDI), 0x11a624efu);
  /* 11a624ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a624f2:;
  /* 11a624f2 pop edi */
  EDI = (pop32());
  /* 11a624f3 pop esi */
  ESI = (pop32());
  /* 11a624f4 ret  */
  ESPCHK(0x11a623b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002500 @ 0x11a62500 (13 bytes, 4 insns) */
void f_11a62500(void) {
  FTRACE(0x11a62500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62500 call 0x11a62839 */
  push32(0x11a62505u); f_11a62839();
  /* 11a62505 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a62509 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11a6250c ret  */
  ESPCHK(0x11a62500u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11a6250d (34 bytes, 9 insns) */
void f_11a6250d(void) {
  FTRACE(0x11a6250du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a6250d call 0x11a62839 */
  push32(0x11a62512u); f_11a62839();
  /* 11a62512 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11a62515 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a6251b add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62521 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11a62524 mov eax, ecx */
  EAX = (ECX);
  /* 11a62526 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a62529 and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a6252e ret  */
  ESPCHK(0x11a6250du, _esp0);
  ESP += 4; return;
}

/* FUN_1000252f @ 0x11a6252f (220 bytes, 75 insns) */
void f_11a6252f(void) {
  FTRACE(0x11a6252fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a6252f push ebp */
  push32((uint32_t)(EBP));
  /* 11a62530 mov ebp, esp */
  EBP = (ESP);
  /* 11a62532 sub esp, 0xcc */
  { uint32_t _a=(ESP),_b=(0xccu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a62538 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11a6253b push eax */
  push32((uint32_t)(EAX));
  /* 11a6253c call dword ptr [0x11a6807c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6807c))), 0x11a62542u);
  /* 11a62542 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11a62545 push eax */
  push32((uint32_t)(EAX));
  /* 11a62546 call dword ptr [0x11a68078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68078))), 0x11a6254cu);
  /* 11a6254c mov ax, word ptr [ebp - 0x16] */
  AX = (r16((uint32_t)(EBP + -0x16)));
  /* 11a62550 cmp ax, word ptr [0x11a6c11a] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11a6c11a))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a62557 jne 0x11a62594 */
  if (!C.zf) goto L_11a62594;
  /* 11a62559 mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11a6255d cmp ax, word ptr [0x11a6c118] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11a6c118))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a62564 jne 0x11a62594 */
  if (!C.zf) goto L_11a62594;
  /* 11a62566 mov ax, word ptr [ebp - 0x1a] */
  AX = (r16((uint32_t)(EBP + -0x1a)));
  /* 11a6256a cmp ax, word ptr [0x11a6c116] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11a6c116))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a62571 jne 0x11a62594 */
  if (!C.zf) goto L_11a62594;
  /* 11a62573 mov ax, word ptr [ebp - 0x1e] */
  AX = (r16((uint32_t)(EBP + -0x1e)));
  /* 11a62577 cmp ax, word ptr [0x11a6c112] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11a6c112))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a6257e jne 0x11a62594 */
  if (!C.zf) goto L_11a62594;
  /* 11a62580 mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11a62584 cmp ax, word ptr [0x11a6c110] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11a6c110))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a6258b jne 0x11a62594 */
  if (!C.zf) goto L_11a62594;
  /* 11a6258d mov eax, dword ptr [0x11a6c108] */
  EAX = (r32((uint32_t)(0x11a6c108)));
  /* 11a62592 jmp 0x11a625d9 */
  goto L_11a625d9;
L_11a62594:;
  /* 11a62594 lea eax, [ebp - 0xcc] */
  EAX = ((uint32_t)(EBP + -0xcc));
  /* 11a6259a push eax */
  push32((uint32_t)(EAX));
  /* 11a6259b call dword ptr [0x11a68074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68074))), 0x11a625a1u);
  /* 11a625a1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a625a4 je 0x11a625c1 */
  if (C.zf) goto L_11a625c1;
  /* 11a625a6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a625a9 jne 0x11a625bd */
  if (!C.zf) goto L_11a625bd;
  /* 11a625ab cmp word ptr [ebp - 0x32], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x32))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a625b0 je 0x11a625bd */
  if (C.zf) goto L_11a625bd;
  /* 11a625b2 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a625b6 je 0x11a625bd */
  if (C.zf) goto L_11a625bd;
  /* 11a625b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a625ba pop eax */
  EAX = (pop32());
  /* 11a625bb jmp 0x11a625c4 */
  goto L_11a625c4;
L_11a625bd:;
  /* 11a625bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a625bf jmp 0x11a625c4 */
  goto L_11a625c4;
L_11a625c1:;
  /* 11a625c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a625c4:;
  /* 11a625c4 push esi */
  push32((uint32_t)(ESI));
  /* 11a625c5 push edi */
  push32((uint32_t)(EDI));
  /* 11a625c6 lea esi, [ebp - 0x20] */
  ESI = ((uint32_t)(EBP + -0x20));
  /* 11a625c9 mov edi, 0x11a6c110 */
  EDI = (0x11a6c110u);
  /* 11a625ce movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a625cf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a625d0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a625d1 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a625d2 pop edi */
  EDI = (pop32());
  /* 11a625d3 mov dword ptr [0x11a6c108], eax */
  w32((uint32_t)(0x11a6c108), (EAX));
  /* 11a625d8 pop esi */
  ESI = (pop32());
L_11a625d9:;
  /* 11a625d9 push eax */
  push32((uint32_t)(EAX));
  /* 11a625da movzx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11a625de push eax */
  push32((uint32_t)(EAX));
  /* 11a625df movzx eax, word ptr [ebp - 6] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11a625e3 push eax */
  push32((uint32_t)(EAX));
  /* 11a625e4 movzx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11a625e8 push eax */
  push32((uint32_t)(EAX));
  /* 11a625e9 movzx eax, word ptr [ebp - 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xa))));
  /* 11a625ed push eax */
  push32((uint32_t)(EAX));
  /* 11a625ee movzx eax, word ptr [ebp - 0xe] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xe))));
  /* 11a625f2 push eax */
  push32((uint32_t)(EAX));
  /* 11a625f3 movzx eax, word ptr [ebp - 0x10] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x10))));
  /* 11a625f7 push eax */
  push32((uint32_t)(EAX));
  /* 11a625f8 call 0x11a62940 */
  push32(0x11a625fdu); f_11a62940();
  /* 11a625fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a62600 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62603 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a62605 je 0x11a62609 */
  if (C.zf) goto L_11a62609;
  /* 11a62607 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11a62609:;
  /* 11a62609 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a6260a ret  */
  ESPCHK(0x11a6252fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000260b @ 0x11a6260b (217 bytes, 57 insns) */
void f_11a6260b(void) {
  FTRACE(0x11a6260bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a6260b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a6260f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62612 jne 0x11a626a0 */
  if (!C.zf) goto L_11a626a0;
  /* 11a62618 call dword ptr [0x11a68084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68084))), 0x11a6261eu);
  /* 11a6261e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a62620 mov dword ptr [0x11a6c138], eax */
  w32((uint32_t)(0x11a6c138), (EAX));
  /* 11a62625 call 0x11a632dd */
  push32(0x11a6262au); f_11a632dd();
  /* 11a6262a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6262c pop ecx */
  ECX = (pop32());
  /* 11a6262d je 0x11a6266b */
  if (C.zf) goto L_11a6266b;
  /* 11a6262f mov eax, dword ptr [0x11a6c138] */
  EAX = (r32((uint32_t)(0x11a6c138)));
  /* 11a62634 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a62636 mov cl, byte ptr [0x11a6c139] */
  CL = (r8((uint32_t)(0x11a6c139)));
  /* 11a6263c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a62641 shr dword ptr [0x11a6c138], 0x10 */
  w32((uint32_t)(0x11a6c138), (sh_shr((uint32_t)(r32((uint32_t)(0x11a6c138))), (0x10u)&0x1f, 32)));
  /* 11a62648 mov dword ptr [0x11a6c140], eax */
  w32((uint32_t)(0x11a6c140), (EAX));
  /* 11a6264d mov dword ptr [0x11a6c144], ecx */
  w32((uint32_t)(0x11a6c144), (ECX));
  /* 11a62653 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a62656 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62658 mov dword ptr [0x11a6c13c], eax */
  w32((uint32_t)(0x11a6c13c), (EAX));
  /* 11a6265d call 0x11a627b4 */
  push32(0x11a62662u); f_11a627b4();
  /* 11a62662 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a62664 jne 0x11a6266f */
  if (!C.zf) goto L_11a6266f;
  /* 11a62666 call 0x11a6333a */
  push32(0x11a6266bu); f_11a6333a();
L_11a6266b:;
  /* 11a6266b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a6266d jmp 0x11a626e1 */
  goto L_11a626e1;
L_11a6266f:;
  /* 11a6266f call dword ptr [0x11a68080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68080))), 0x11a62675u);
  /* 11a62675 mov dword ptr [0x11a6c7f8], eax */
  w32((uint32_t)(0x11a6c7f8), (EAX));
  /* 11a6267a call 0x11a63036 */
  push32(0x11a6267fu); f_11a63036();
  /* 11a6267f mov dword ptr [0x11a6c124], eax */
  w32((uint32_t)(0x11a6c124), (EAX));
  /* 11a62684 call 0x11a62b20 */
  push32(0x11a62689u); f_11a62b20();
  /* 11a62689 call 0x11a62de9 */
  push32(0x11a6268eu); f_11a62de9();
  /* 11a6268e call 0x11a62d30 */
  push32(0x11a62693u); f_11a62d30();
  /* 11a62693 call 0x11a62a02 */
  push32(0x11a62698u); f_11a62a02();
  /* 11a62698 inc dword ptr [0x11a6c120] */
  { uint32_t _r=(r32((uint32_t)(0x11a6c120)))+1; w32((uint32_t)(0x11a6c120), (_r)); fl_inc(_r,32); }
  /* 11a6269e jmp 0x11a626de */
  goto L_11a626de;
L_11a626a0:;
  /* 11a626a0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a626a2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a626a4 jne 0x11a626d2 */
  if (!C.zf) goto L_11a626d2;
  /* 11a626a6 cmp dword ptr [0x11a6c120], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11a6c120))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a626ac jle 0x11a6266b */
  if ((C.zf||C.sf!=C.of)) goto L_11a6266b;
  /* 11a626ae dec dword ptr [0x11a6c120] */
  { uint32_t _r=(r32((uint32_t)(0x11a6c120)))-1; w32((uint32_t)(0x11a6c120), (_r)); fl_dec(_r,32); }
  /* 11a626b4 cmp dword ptr [0x11a6c170], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11a6c170))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a626ba jne 0x11a626c1 */
  if (!C.zf) goto L_11a626c1;
  /* 11a626bc call 0x11a62a40 */
  push32(0x11a626c1u); f_11a62a40();
L_11a626c1:;
  /* 11a626c1 call 0x11a62cdc */
  push32(0x11a626c6u); f_11a62cdc();
  /* 11a626c6 call 0x11a62808 */
  push32(0x11a626cbu); f_11a62808();
  /* 11a626cb call 0x11a6333a */
  push32(0x11a626d0u); f_11a6333a();
  /* 11a626d0 jmp 0x11a626de */
  goto L_11a626de;
L_11a626d2:;
  /* 11a626d2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a626d5 jne 0x11a626de */
  if (!C.zf) goto L_11a626de;
  /* 11a626d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a626d8 call 0x11a628a0 */
  push32(0x11a626ddu); f_11a628a0();
  /* 11a626dd pop ecx */
  ECX = (pop32());
L_11a626de:;
  /* 11a626de push 1 */
  push32((uint32_t)(0x1u));
  /* 11a626e0 pop eax */
  EAX = (pop32());
L_11a626e1:;
  /* 11a626e1 ret 0xc */
  ESPCHK(0x11a6260bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11a626e4 (157 bytes, 73 insns) */
void f_11a626e4(void) {
  FTRACE(0x11a626e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a626e4 push ebp */
  push32((uint32_t)(EBP));
  /* 11a626e5 mov ebp, esp */
  EBP = (ESP);
  /* 11a626e7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a626e8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a626eb push esi */
  push32((uint32_t)(ESI));
  /* 11a626ec mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a626ef push edi */
  push32((uint32_t)(EDI));
  /* 11a626f0 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11a626f3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a626f5 jne 0x11a62700 */
  if (!C.zf) goto L_11a62700;
  /* 11a626f7 cmp dword ptr [0x11a6c120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a626fe jmp 0x11a62726 */
  goto L_11a62726;
L_11a62700:;
  /* 11a62700 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62703 je 0x11a6270a */
  if (C.zf) goto L_11a6270a;
  /* 11a62705 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62708 jne 0x11a6272c */
  if (!C.zf) goto L_11a6272c;
L_11a6270a:;
  /* 11a6270a mov eax, dword ptr [0x11a6c7fc] */
  EAX = (r32((uint32_t)(0x11a6c7fc)));
  /* 11a6270f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a62711 je 0x11a6271c */
  if (C.zf) goto L_11a6271c;
  /* 11a62713 push edi */
  push32((uint32_t)(EDI));
  /* 11a62714 push esi */
  push32((uint32_t)(ESI));
  /* 11a62715 push ebx */
  push32((uint32_t)(EBX));
  /* 11a62716 call eax */
  call_ind((uint32_t)(EAX), 0x11a62718u);
  /* 11a62718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6271a je 0x11a62728 */
  if (C.zf) goto L_11a62728;
L_11a6271c:;
  /* 11a6271c push edi */
  push32((uint32_t)(EDI));
  /* 11a6271d push esi */
  push32((uint32_t)(ESI));
  /* 11a6271e push ebx */
  push32((uint32_t)(EBX));
  /* 11a6271f call 0x11a6260b */
  push32(0x11a62724u); f_11a6260b();
  /* 11a62724 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11a62726:;
  /* 11a62726 jne 0x11a6272c */
  if (!C.zf) goto L_11a6272c;
L_11a62728:;
  /* 11a62728 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a6272a jmp 0x11a6277a */
  goto L_11a6277a;
L_11a6272c:;
  /* 11a6272c push edi */
  push32((uint32_t)(EDI));
  /* 11a6272d push esi */
  push32((uint32_t)(ESI));
  /* 11a6272e push ebx */
  push32((uint32_t)(EBX));
  /* 11a6272f call 0x11a61000 */
  push32(0x11a62734u); f_11a61000();
  /* 11a62734 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62737 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11a6273a jne 0x11a62748 */
  if (!C.zf) goto L_11a62748;
  /* 11a6273c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6273e jne 0x11a62777 */
  if (!C.zf) goto L_11a62777;
  /* 11a62740 push edi */
  push32((uint32_t)(EDI));
  /* 11a62741 push eax */
  push32((uint32_t)(EAX));
  /* 11a62742 push ebx */
  push32((uint32_t)(EBX));
  /* 11a62743 call 0x11a6260b */
  push32(0x11a62748u); f_11a6260b();
L_11a62748:;
  /* 11a62748 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a6274a je 0x11a62751 */
  if (C.zf) goto L_11a62751;
  /* 11a6274c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6274f jne 0x11a62777 */
  if (!C.zf) goto L_11a62777;
L_11a62751:;
  /* 11a62751 push edi */
  push32((uint32_t)(EDI));
  /* 11a62752 push esi */
  push32((uint32_t)(ESI));
  /* 11a62753 push ebx */
  push32((uint32_t)(EBX));
  /* 11a62754 call 0x11a6260b */
  push32(0x11a62759u); f_11a6260b();
  /* 11a62759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6275b jne 0x11a62760 */
  if (!C.zf) goto L_11a62760;
  /* 11a6275d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11a62760:;
  /* 11a62760 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62764 je 0x11a62777 */
  if (C.zf) goto L_11a62777;
  /* 11a62766 mov eax, dword ptr [0x11a6c7fc] */
  EAX = (r32((uint32_t)(0x11a6c7fc)));
  /* 11a6276b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6276d je 0x11a62777 */
  if (C.zf) goto L_11a62777;
  /* 11a6276f push edi */
  push32((uint32_t)(EDI));
  /* 11a62770 push esi */
  push32((uint32_t)(ESI));
  /* 11a62771 push ebx */
  push32((uint32_t)(EBX));
  /* 11a62772 call eax */
  call_ind((uint32_t)(EAX), 0x11a62774u);
  /* 11a62774 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11a62777:;
  /* 11a62777 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11a6277a:;
  /* 11a6277a pop edi */
  EDI = (pop32());
  /* 11a6277b pop esi */
  ESI = (pop32());
  /* 11a6277c pop ebx */
  EBX = (pop32());
  /* 11a6277d pop ebp */
  EBP = (pop32());
  /* 11a6277e ret 0xc */
  ESPCHK(0x11a626e4u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11a62781 (48 bytes, 15 insns) */
void f_11a62781(void) {
  FTRACE(0x11a62781u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62781 mov eax, dword ptr [0x11a6c12c] */
  EAX = (r32((uint32_t)(0x11a6c12c)));
  /* 11a62786 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62789 je 0x11a62798 */
  if (C.zf) goto L_11a62798;
  /* 11a6278b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6278d jne 0x11a6279d */
  if (!C.zf) goto L_11a6279d;
  /* 11a6278f cmp dword ptr [0x11a6c130], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c130))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62796 jne 0x11a6279d */
  if (!C.zf) goto L_11a6279d;
L_11a62798:;
  /* 11a62798 call 0x11a633e2 */
  push32(0x11a6279du); f_11a633e2();
L_11a6279d:;
  /* 11a6279d push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a627a1 call 0x11a6341b */
  push32(0x11a627a6u); f_11a6341b();
  /* 11a627a6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11a627ab call dword ptr [0x11a693c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a693c8))), 0x11a627b1u);
  /* 11a627b1 pop ecx */
  ECX = (pop32());
  /* 11a627b2 pop ecx */
  ECX = (pop32());
  /* 11a627b3 ret  */
  ESPCHK(0x11a62781u, _esp0);
  ESP += 4; return;
}

/* FUN_100027b4 @ 0x11a627b4 (84 bytes, 32 insns) */
void f_11a627b4(void) {
  FTRACE(0x11a627b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a627b4 push esi */
  push32((uint32_t)(ESI));
  /* 11a627b5 call 0x11a636ab */
  push32(0x11a627bau); f_11a636ab();
  /* 11a627ba call dword ptr [0x11a68090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68090))), 0x11a627c0u);
  /* 11a627c0 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a627c3 mov dword ptr [0x11a693cc], eax */
  w32((uint32_t)(0x11a693cc), (EAX));
  /* 11a627c8 je 0x11a62804 */
  if (C.zf) goto L_11a62804;
  /* 11a627ca push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11a627cc push 1 */
  push32((uint32_t)(0x1u));
  /* 11a627ce call 0x11a6356e */
  push32(0x11a627d3u); f_11a6356e();
  /* 11a627d3 mov esi, eax */
  ESI = (EAX);
  /* 11a627d5 pop ecx */
  ECX = (pop32());
  /* 11a627d6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a627d8 pop ecx */
  ECX = (pop32());
  /* 11a627d9 je 0x11a62804 */
  if (C.zf) goto L_11a62804;
  /* 11a627db push esi */
  push32((uint32_t)(ESI));
  /* 11a627dc push dword ptr [0x11a693cc] */
  push32((uint32_t)(r32((uint32_t)(0x11a693cc))));
  /* 11a627e2 call dword ptr [0x11a6808c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6808c))), 0x11a627e8u);
  /* 11a627e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a627ea je 0x11a62804 */
  if (C.zf) goto L_11a62804;
  /* 11a627ec push esi */
  push32((uint32_t)(ESI));
  /* 11a627ed call 0x11a62826 */
  push32(0x11a627f2u); f_11a62826();
  /* 11a627f2 pop ecx */
  ECX = (pop32());
  /* 11a627f3 call dword ptr [0x11a68088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68088))), 0x11a627f9u);
  /* 11a627f9 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a627fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11a627ff mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a62801 pop eax */
  EAX = (pop32());
  /* 11a62802 pop esi */
  ESI = (pop32());
  /* 11a62803 ret  */
  ESPCHK(0x11a627b4u, _esp0);
  ESP += 4; return;
L_11a62804:;
  /* 11a62804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a62806 pop esi */
  ESI = (pop32());
  /* 11a62807 ret  */
  ESPCHK(0x11a627b4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002808 @ 0x11a62808 (30 bytes, 8 insns) */
void f_11a62808(void) {
  FTRACE(0x11a62808u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62808 call 0x11a636d4 */
  push32(0x11a6280du); f_11a636d4();
  /* 11a6280d mov eax, dword ptr [0x11a693cc] */
  EAX = (r32((uint32_t)(0x11a693cc)));
  /* 11a62812 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62815 je 0x11a62825 */
  if (C.zf) goto L_11a62825;
  /* 11a62817 push eax */
  push32((uint32_t)(EAX));
  /* 11a62818 call dword ptr [0x11a68094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68094))), 0x11a6281eu);
  /* 11a6281e or dword ptr [0x11a693cc], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11a693cc)))|(0xffffffffu); w32((uint32_t)(0x11a693cc), (_r)); fl_logic(_r,32); }
L_11a62825:;
  /* 11a62825 ret  */
  ESPCHK(0x11a62808u, _esp0);
  ESP += 4; return;
}

/* FUN_10002826 @ 0x11a62826 (19 bytes, 4 insns) */
void f_11a62826(void) {
  FTRACE(0x11a62826u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62826 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a6282a mov dword ptr [eax + 0x50], 0x11a69548 */
  w32((uint32_t)(EAX + 0x50), (0x11a69548u));
  /* 11a62831 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11a62838 ret  */
  ESPCHK(0x11a62826u, _esp0);
  ESP += 4; return;
}

/* FUN_10002839 @ 0x11a62839 (103 bytes, 38 insns) */
void f_11a62839(void) {
  FTRACE(0x11a62839u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62839 push esi */
  push32((uint32_t)(ESI));
  /* 11a6283a push edi */
  push32((uint32_t)(EDI));
  /* 11a6283b call dword ptr [0x11a680a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680a0))), 0x11a62841u);
  /* 11a62841 push dword ptr [0x11a693cc] */
  push32((uint32_t)(r32((uint32_t)(0x11a693cc))));
  /* 11a62847 mov edi, eax */
  EDI = (EAX);
  /* 11a62849 call dword ptr [0x11a6809c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6809c))), 0x11a6284fu);
  /* 11a6284f mov esi, eax */
  ESI = (EAX);
  /* 11a62851 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a62853 jne 0x11a62894 */
  if (!C.zf) goto L_11a62894;
  /* 11a62855 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11a62857 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a62859 call 0x11a6356e */
  push32(0x11a6285eu); f_11a6356e();
  /* 11a6285e mov esi, eax */
  ESI = (EAX);
  /* 11a62860 pop ecx */
  ECX = (pop32());
  /* 11a62861 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a62863 pop ecx */
  ECX = (pop32());
  /* 11a62864 je 0x11a6288c */
  if (C.zf) goto L_11a6288c;
  /* 11a62866 push esi */
  push32((uint32_t)(ESI));
  /* 11a62867 push dword ptr [0x11a693cc] */
  push32((uint32_t)(r32((uint32_t)(0x11a693cc))));
  /* 11a6286d call dword ptr [0x11a6808c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6808c))), 0x11a62873u);
  /* 11a62873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a62875 je 0x11a6288c */
  if (C.zf) goto L_11a6288c;
  /* 11a62877 push esi */
  push32((uint32_t)(ESI));
  /* 11a62878 call 0x11a62826 */
  push32(0x11a6287du); f_11a62826();
  /* 11a6287d pop ecx */
  ECX = (pop32());
  /* 11a6287e call dword ptr [0x11a68088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68088))), 0x11a62884u);
  /* 11a62884 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a62888 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a6288a jmp 0x11a62894 */
  goto L_11a62894;
L_11a6288c:;
  /* 11a6288c push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a6288e call 0x11a62781 */
  push32(0x11a62893u); f_11a62781();
  /* 11a62893 pop ecx */
  ECX = (pop32());
L_11a62894:;
  /* 11a62894 push edi */
  push32((uint32_t)(EDI));
  /* 11a62895 call dword ptr [0x11a68098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68098))), 0x11a6289bu);
  /* 11a6289b mov eax, esi */
  EAX = (ESI);
  /* 11a6289d pop edi */
  EDI = (pop32());
  /* 11a6289e pop esi */
  ESI = (pop32());
  /* 11a6289f ret  */
  ESPCHK(0x11a62839u, _esp0);
  ESP += 4; return;
}

/* FUN_100028a0 @ 0x11a628a0 (160 bytes, 62 insns) */
void f_11a628a0(void) {
  FTRACE(0x11a628a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a628a0 mov eax, dword ptr [0x11a693cc] */
  EAX = (r32((uint32_t)(0x11a693cc)));
  /* 11a628a5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a628a8 je 0x11a6293f */
  if (C.zf) goto L_11a6293f;
  /* 11a628ae push esi */
  push32((uint32_t)(ESI));
  /* 11a628af mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a628b3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a628b5 jne 0x11a628c4 */
  if (!C.zf) goto L_11a628c4;
  /* 11a628b7 push eax */
  push32((uint32_t)(EAX));
  /* 11a628b8 call dword ptr [0x11a6809c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6809c))), 0x11a628beu);
  /* 11a628be mov esi, eax */
  ESI = (EAX);
  /* 11a628c0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a628c2 je 0x11a62930 */
  if (C.zf) goto L_11a62930;
L_11a628c4:;
  /* 11a628c4 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11a628c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a628c9 je 0x11a628d2 */
  if (C.zf) goto L_11a628d2;
  /* 11a628cb push eax */
  push32((uint32_t)(EAX));
  /* 11a628cc call 0x11a637b6 */
  push32(0x11a628d1u); f_11a637b6();
  /* 11a628d1 pop ecx */
  ECX = (pop32());
L_11a628d2:;
  /* 11a628d2 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11a628d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a628d7 je 0x11a628e0 */
  if (C.zf) goto L_11a628e0;
  /* 11a628d9 push eax */
  push32((uint32_t)(EAX));
  /* 11a628da call 0x11a637b6 */
  push32(0x11a628dfu); f_11a637b6();
  /* 11a628df pop ecx */
  ECX = (pop32());
L_11a628e0:;
  /* 11a628e0 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11a628e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a628e5 je 0x11a628ee */
  if (C.zf) goto L_11a628ee;
  /* 11a628e7 push eax */
  push32((uint32_t)(EAX));
  /* 11a628e8 call 0x11a637b6 */
  push32(0x11a628edu); f_11a637b6();
  /* 11a628ed pop ecx */
  ECX = (pop32());
L_11a628ee:;
  /* 11a628ee mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11a628f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a628f3 je 0x11a628fc */
  if (C.zf) goto L_11a628fc;
  /* 11a628f5 push eax */
  push32((uint32_t)(EAX));
  /* 11a628f6 call 0x11a637b6 */
  push32(0x11a628fbu); f_11a637b6();
  /* 11a628fb pop ecx */
  ECX = (pop32());
L_11a628fc:;
  /* 11a628fc mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11a628ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a62901 je 0x11a6290a */
  if (C.zf) goto L_11a6290a;
  /* 11a62903 push eax */
  push32((uint32_t)(EAX));
  /* 11a62904 call 0x11a637b6 */
  push32(0x11a62909u); f_11a637b6();
  /* 11a62909 pop ecx */
  ECX = (pop32());
L_11a6290a:;
  /* 11a6290a mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11a6290d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6290f je 0x11a62918 */
  if (C.zf) goto L_11a62918;
  /* 11a62911 push eax */
  push32((uint32_t)(EAX));
  /* 11a62912 call 0x11a637b6 */
  push32(0x11a62917u); f_11a637b6();
  /* 11a62917 pop ecx */
  ECX = (pop32());
L_11a62918:;
  /* 11a62918 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11a6291b cmp eax, 0x11a69548 */
  { uint32_t _a=(EAX),_b=(0x11a69548u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62920 je 0x11a62929 */
  if (C.zf) goto L_11a62929;
  /* 11a62922 push eax */
  push32((uint32_t)(EAX));
  /* 11a62923 call 0x11a637b6 */
  push32(0x11a62928u); f_11a637b6();
  /* 11a62928 pop ecx */
  ECX = (pop32());
L_11a62929:;
  /* 11a62929 push esi */
  push32((uint32_t)(ESI));
  /* 11a6292a call 0x11a637b6 */
  push32(0x11a6292fu); f_11a637b6();
  /* 11a6292f pop ecx */
  ECX = (pop32());
L_11a62930:;
  /* 11a62930 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a62932 push dword ptr [0x11a693cc] */
  push32((uint32_t)(r32((uint32_t)(0x11a693cc))));
  /* 11a62938 call dword ptr [0x11a6808c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6808c))), 0x11a6293eu);
  /* 11a6293e pop esi */
  ESI = (pop32());
L_11a6293f:;
  /* 11a6293f ret  */
  ESPCHK(0x11a628a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002940 @ 0x11a62940 (194 bytes, 65 insns) */
void f_11a62940(void) {
  FTRACE(0x11a62940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62940 push ebp */
  push32((uint32_t)(EBP));
  /* 11a62941 mov ebp, esp */
  EBP = (ESP);
  /* 11a62943 sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a62946 push ebx */
  push32((uint32_t)(EBX));
  /* 11a62947 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a6294a sub ebx, 0x76c */
  { uint32_t _a=(EBX),_b=(0x76cu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a62950 cmp ebx, 0x46 */
  { uint32_t _a=(EBX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62953 jl 0x11a629fc */
  if ((C.sf!=C.of)) goto L_11a629fc;
  /* 11a62959 cmp ebx, 0x8a */
  { uint32_t _a=(EBX),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6295f jg 0x11a629fc */
  if ((!C.zf&&C.sf==C.of)) goto L_11a629fc;
  /* 11a62965 push esi */
  push32((uint32_t)(ESI));
  /* 11a62966 push edi */
  push32((uint32_t)(EDI));
  /* 11a62967 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a6296a mov esi, dword ptr [edi*4 + 0x11a696b4] */
  ESI = (r32((uint32_t)(EDI*4 + 0x11a696b4)));
  /* 11a62971 add esi, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62974 test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11a62977 jne 0x11a6297f */
  if (!C.zf) goto L_11a6297f;
  /* 11a62979 cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6297c jle 0x11a6297f */
  if ((C.zf||C.sf!=C.of)) goto L_11a6297f;
  /* 11a6297e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a6297f:;
  /* 11a6297f call 0x11a6389f */
  push32(0x11a62984u); f_11a6389f();
  /* 11a62984 mov eax, ebx */
  EAX = (EBX);
  /* 11a62986 lea ecx, [ebx - 1] */
  ECX = ((uint32_t)(EBX + -0x1));
  /* 11a62989 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a6298f sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a62992 mov edx, esi */
  EDX = (ESI);
  /* 11a62994 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11a62997 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62999 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11a6299c add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6299e mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a629a1 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 11a629a4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a629a7 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a629aa lea ecx, [eax + ecx*8] */
  ECX = ((uint32_t)(EAX + ECX*8));
  /* 11a629ad imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a629b0 add ecx, dword ptr [ebp + 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a629b3 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a629b6 add ecx, dword ptr [0x11a695d0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11a695d0))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a629bc dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a629bd cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a629c1 mov dword ptr [ebp - 0x14], edi */
  w32((uint32_t)(EBP + -0x14), (EDI));
  /* 11a629c4 pop edi */
  EDI = (pop32());
  /* 11a629c5 pop esi */
  ESI = (pop32());
  /* 11a629c6 lea ecx, [ecx + edx + 0x7c558180] */
  ECX = ((uint32_t)(ECX + EDX*1 + 0x7c558180));
  /* 11a629cd mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11a629d0 je 0x11a629f2 */
  if (C.zf) goto L_11a629f2;
  /* 11a629d2 cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a629d6 jne 0x11a629f8 */
  if (!C.zf) goto L_11a629f8;
  /* 11a629d8 cmp dword ptr [0x11a695d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a695d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a629df je 0x11a629f8 */
  if (C.zf) goto L_11a629f8;
  /* 11a629e1 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11a629e4 push eax */
  push32((uint32_t)(EAX));
  /* 11a629e5 call 0x11a63b54 */
  push32(0x11a629eau); f_11a63b54();
  /* 11a629ea pop ecx */
  ECX = (pop32());
  /* 11a629eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a629ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a629f0 je 0x11a629f8 */
  if (C.zf) goto L_11a629f8;
L_11a629f2:;
  /* 11a629f2 add ecx, dword ptr [0x11a695d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11a695d8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11a629f8:;
  /* 11a629f8 mov eax, ecx */
  EAX = (ECX);
  /* 11a629fa jmp 0x11a629ff */
  goto L_11a629ff;
L_11a629fc:;
  /* 11a629fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a629ff:;
  /* 11a629ff pop ebx */
  EBX = (pop32());
  /* 11a62a00 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a62a01 ret  */
  ESPCHK(0x11a62940u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a02 @ 0x11a62a02 (45 bytes, 12 insns) */
void f_11a62a02(void) {
  FTRACE(0x11a62a02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62a02 mov eax, dword ptr [0x11a6c7f4] */
  EAX = (r32((uint32_t)(0x11a6c7f4)));
  /* 11a62a07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a62a09 je 0x11a62a0d */
  if (C.zf) goto L_11a62a0d;
  /* 11a62a0b call eax */
  call_ind((uint32_t)(EAX), 0x11a62a0du);
L_11a62a0d:;
  /* 11a62a0d push 0x11a6903c */
  push32((uint32_t)(0x11a6903cu));
  /* 11a62a12 push 0x11a69034 */
  push32((uint32_t)(0x11a69034u));
  /* 11a62a17 call 0x11a62b06 */
  push32(0x11a62a1cu); f_11a62b06();
  /* 11a62a1c push 0x11a69030 */
  push32((uint32_t)(0x11a69030u));
  /* 11a62a21 push 0x11a69000 */
  push32((uint32_t)(0x11a69000u));
  /* 11a62a26 call 0x11a62b06 */
  push32(0x11a62a2bu); f_11a62b06();
  /* 11a62a2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62a2e ret  */
  ESPCHK(0x11a62a02u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11a62a2f (17 bytes, 6 insns) */
void f_11a62a2f(void) {
  FTRACE(0x11a62a2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a62a31 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a62a33 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a62a37 call 0x11a62a4f */
  push32(0x11a62a3cu); f_11a62a4f();
  /* 11a62a3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62a3f ret  */
  ESPCHK(0x11a62a2fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002a40 @ 0x11a62a40 (15 bytes, 6 insns) */
void f_11a62a40(void) {
  FTRACE(0x11a62a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62a40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a62a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a62a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a62a46 call 0x11a62a4f */
  push32(0x11a62a4bu); f_11a62a4f();
  /* 11a62a4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62a4e ret  */
  ESPCHK(0x11a62a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a4f @ 0x11a62a4f (163 bytes, 53 insns) */
void f_11a62a4f(void) {
  FTRACE(0x11a62a4fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62a4f push edi */
  push32((uint32_t)(EDI));
  /* 11a62a50 call 0x11a62af4 */
  push32(0x11a62a55u); f_11a62af4();
  /* 11a62a55 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a62a57 pop edi */
  EDI = (pop32());
  /* 11a62a58 cmp dword ptr [0x11a6c174], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a6c174))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62a5e jne 0x11a62a71 */
  if (!C.zf) goto L_11a62a71;
  /* 11a62a60 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a62a64 call dword ptr [0x11a680ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680ac))), 0x11a62a6au);
  /* 11a62a6a push eax */
  push32((uint32_t)(EAX));
  /* 11a62a6b call dword ptr [0x11a68000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68000))), 0x11a62a71u);
L_11a62a71:;
  /* 11a62a71 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62a76 push ebx */
  push32((uint32_t)(EBX));
  /* 11a62a77 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a62a7b mov dword ptr [0x11a6c170], edi */
  w32((uint32_t)(0x11a6c170), (EDI));
  /* 11a62a81 mov byte ptr [0x11a6c16c], bl */
  w8((uint32_t)(0x11a6c16c), (BL));
  /* 11a62a87 jne 0x11a62ac5 */
  if (!C.zf) goto L_11a62ac5;
  /* 11a62a89 mov eax, dword ptr [0x11a6c7f0] */
  EAX = (r32((uint32_t)(0x11a6c7f0)));
  /* 11a62a8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a62a90 je 0x11a62ab4 */
  if (C.zf) goto L_11a62ab4;
  /* 11a62a92 mov ecx, dword ptr [0x11a6c7ec] */
  ECX = (r32((uint32_t)(0x11a6c7ec)));
  /* 11a62a98 push esi */
  push32((uint32_t)(ESI));
  /* 11a62a99 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11a62a9c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62a9e jb 0x11a62ab3 */
  if (C.cf) goto L_11a62ab3;
L_11a62aa0:;
  /* 11a62aa0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a62aa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a62aa4 je 0x11a62aa8 */
  if (C.zf) goto L_11a62aa8;
  /* 11a62aa6 call eax */
  call_ind((uint32_t)(EAX), 0x11a62aa8u);
L_11a62aa8:;
  /* 11a62aa8 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a62aab cmp esi, dword ptr [0x11a6c7f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a6c7f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62ab1 jae 0x11a62aa0 */
  if (!C.cf) goto L_11a62aa0;
L_11a62ab3:;
  /* 11a62ab3 pop esi */
  ESI = (pop32());
L_11a62ab4:;
  /* 11a62ab4 push 0x11a69044 */
  push32((uint32_t)(0x11a69044u));
  /* 11a62ab9 push 0x11a69040 */
  push32((uint32_t)(0x11a69040u));
  /* 11a62abe call 0x11a62b06 */
  push32(0x11a62ac3u); f_11a62b06();
  /* 11a62ac3 pop ecx */
  ECX = (pop32());
  /* 11a62ac4 pop ecx */
  ECX = (pop32());
L_11a62ac5:;
  /* 11a62ac5 push 0x11a6904c */
  push32((uint32_t)(0x11a6904cu));
  /* 11a62aca push 0x11a69048 */
  push32((uint32_t)(0x11a69048u));
  /* 11a62acf call 0x11a62b06 */
  push32(0x11a62ad4u); f_11a62b06();
  /* 11a62ad4 pop ecx */
  ECX = (pop32());
  /* 11a62ad5 pop ecx */
  ECX = (pop32());
  /* 11a62ad6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a62ad8 pop ebx */
  EBX = (pop32());
  /* 11a62ad9 je 0x11a62ae2 */
  if (C.zf) goto L_11a62ae2;
  /* 11a62adb call 0x11a62afd */
  push32(0x11a62ae0u); f_11a62afd();
  /* 11a62ae0 pop edi */
  EDI = (pop32());
  /* 11a62ae1 ret  */
  ESPCHK(0x11a62a4fu, _esp0);
  ESP += 4; return;
L_11a62ae2:;
  /* 11a62ae2 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a62ae6 mov dword ptr [0x11a6c174], edi */
  w32((uint32_t)(0x11a6c174), (EDI));
  /* 11a62aec call dword ptr [0x11a68004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68004))), 0x11a62af2u);
  /* 11a62af2 pop edi */
  EDI = (pop32());
  /* 11a62af3 ret  */
  ESPCHK(0x11a62a4fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002af4 @ 0x11a62af4 (9 bytes, 4 insns) */
void f_11a62af4(void) {
  FTRACE(0x11a62af4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62af4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a62af6 call 0x11a63740 */
  push32(0x11a62afbu); f_11a63740();
  /* 11a62afb pop ecx */
  ECX = (pop32());
  /* 11a62afc ret  */
  ESPCHK(0x11a62af4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002afd @ 0x11a62afd (9 bytes, 4 insns) */
void f_11a62afd(void) {
  FTRACE(0x11a62afdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62afd push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a62aff call 0x11a637a1 */
  push32(0x11a62b04u); f_11a637a1();
  /* 11a62b04 pop ecx */
  ECX = (pop32());
  /* 11a62b05 ret  */
  ESPCHK(0x11a62afdu, _esp0);
  ESP += 4; return;
}

/* FUN_10002b06 @ 0x11a62b06 (26 bytes, 12 insns) */
void f_11a62b06(void) {
  FTRACE(0x11a62b06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62b06 push esi */
  push32((uint32_t)(ESI));
  /* 11a62b07 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11a62b0b:;
  /* 11a62b0b cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62b0f jae 0x11a62b1e */
  if (!C.cf) goto L_11a62b1e;
  /* 11a62b11 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a62b13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a62b15 je 0x11a62b19 */
  if (C.zf) goto L_11a62b19;
  /* 11a62b17 call eax */
  call_ind((uint32_t)(EAX), 0x11a62b19u);
L_11a62b19:;
  /* 11a62b19 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62b1c jmp 0x11a62b0b */
  goto L_11a62b0b;
L_11a62b1e:;
  /* 11a62b1e pop esi */
  ESI = (pop32());
  /* 11a62b1f ret  */
  ESPCHK(0x11a62b06u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b20 @ 0x11a62b20 (444 bytes, 150 insns) */
void f_11a62b20(void) {
  FTRACE(0x11a62b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11a62b21 mov ebp, esp */
  EBP = (ESP);
  /* 11a62b23 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a62b26 push ebx */
  push32((uint32_t)(EBX));
  /* 11a62b27 push esi */
  push32((uint32_t)(ESI));
  /* 11a62b28 push edi */
  push32((uint32_t)(EDI));
  /* 11a62b29 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11a62b2e call 0x11a63e61 */
  push32(0x11a62b33u); f_11a63e61();
  /* 11a62b33 mov esi, eax */
  ESI = (EAX);
  /* 11a62b35 pop ecx */
  ECX = (pop32());
  /* 11a62b36 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a62b38 jne 0x11a62b42 */
  if (!C.zf) goto L_11a62b42;
  /* 11a62b3a push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11a62b3c call 0x11a62781 */
  push32(0x11a62b41u); f_11a62781();
  /* 11a62b41 pop ecx */
  ECX = (pop32());
L_11a62b42:;
  /* 11a62b42 mov dword ptr [0x11a6c6e0], esi */
  w32((uint32_t)(0x11a6c6e0), (ESI));
  /* 11a62b48 mov dword ptr [0x11a6c7e0], 0x20 */
  w32((uint32_t)(0x11a6c7e0), (0x20u));
  /* 11a62b52 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11a62b58:;
  /* 11a62b58 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62b5a jae 0x11a62b7a */
  if (!C.cf) goto L_11a62b7a;
  /* 11a62b5c and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a62b60 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a62b63 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a62b67 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11a62b6b mov eax, dword ptr [0x11a6c6e0] */
  EAX = (r32((uint32_t)(0x11a6c6e0)));
  /* 11a62b70 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62b73 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62b78 jmp 0x11a62b58 */
  goto L_11a62b58;
L_11a62b7a:;
  /* 11a62b7a lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11a62b7d push eax */
  push32((uint32_t)(EAX));
  /* 11a62b7e call dword ptr [0x11a680bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680bc))), 0x11a62b84u);
  /* 11a62b84 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a62b89 je 0x11a62c60 */
  if (C.zf) goto L_11a62c60;
  /* 11a62b8f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a62b92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a62b94 je 0x11a62c60 */
  if (C.zf) goto L_11a62c60;
  /* 11a62b9a mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11a62b9c lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11a62b9f lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11a62ba2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a62ba5 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11a62baa cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62bac jl 0x11a62bb0 */
  if ((C.sf!=C.of)) goto L_11a62bb0;
  /* 11a62bae mov edi, eax */
  EDI = (EAX);
L_11a62bb0:;
  /* 11a62bb0 cmp dword ptr [0x11a6c7e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a6c7e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62bb6 jge 0x11a62c0e */
  if ((C.sf==C.of)) goto L_11a62c0e;
  /* 11a62bb8 mov esi, 0x11a6c6e4 */
  ESI = (0x11a6c6e4u);
L_11a62bbd:;
  /* 11a62bbd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11a62bc2 call 0x11a63e61 */
  push32(0x11a62bc7u); f_11a63e61();
  /* 11a62bc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a62bc9 pop ecx */
  ECX = (pop32());
  /* 11a62bca je 0x11a62c08 */
  if (C.zf) goto L_11a62c08;
  /* 11a62bcc add dword ptr [0x11a6c7e0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c7e0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11a6c7e0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a62bd3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a62bd5 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11a62bdb:;
  /* 11a62bdb cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62bdd jae 0x11a62bfb */
  if (!C.cf) goto L_11a62bfb;
  /* 11a62bdf and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a62be3 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a62be6 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a62bea mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11a62bee mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a62bf0 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62bf3 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62bf9 jmp 0x11a62bdb */
  goto L_11a62bdb;
L_11a62bfb:;
  /* 11a62bfb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62bfe cmp dword ptr [0x11a6c7e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a6c7e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62c04 jl 0x11a62bbd */
  if ((C.sf!=C.of)) goto L_11a62bbd;
  /* 11a62c06 jmp 0x11a62c0e */
  goto L_11a62c0e;
L_11a62c08:;
  /* 11a62c08 mov edi, dword ptr [0x11a6c7e0] */
  EDI = (r32((uint32_t)(0x11a6c7e0)));
L_11a62c0e:;
  /* 11a62c0e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a62c10 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a62c12 jle 0x11a62c60 */
  if ((C.zf||C.sf!=C.of)) goto L_11a62c60;
L_11a62c14:;
  /* 11a62c14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a62c17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a62c19 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62c1c je 0x11a62c56 */
  if (C.zf) goto L_11a62c56;
  /* 11a62c1e mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11a62c20 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11a62c22 je 0x11a62c56 */
  if (C.zf) goto L_11a62c56;
  /* 11a62c24 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11a62c26 jne 0x11a62c33 */
  if (!C.zf) goto L_11a62c33;
  /* 11a62c28 push ecx */
  push32((uint32_t)(ECX));
  /* 11a62c29 call dword ptr [0x11a680b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680b8))), 0x11a62c2fu);
  /* 11a62c2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a62c31 je 0x11a62c56 */
  if (C.zf) goto L_11a62c56;
L_11a62c33:;
  /* 11a62c33 mov ecx, esi */
  ECX = (ESI);
  /* 11a62c35 mov eax, esi */
  EAX = (ESI);
  /* 11a62c37 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a62c3a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a62c3d mov ecx, dword ptr [ecx*4 + 0x11a6c6e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a6c6e0)));
  /* 11a62c44 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a62c47 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11a62c4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a62c4d mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11a62c4f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a62c51 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11a62c53 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11a62c56:;
  /* 11a62c56 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a62c5a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a62c5b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a62c5c cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62c5e jl 0x11a62c14 */
  if ((C.sf!=C.of)) goto L_11a62c14;
L_11a62c60:;
  /* 11a62c60 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a62c62:;
  /* 11a62c62 mov ecx, dword ptr [0x11a6c6e0] */
  ECX = (r32((uint32_t)(0x11a6c6e0)));
  /* 11a62c68 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11a62c6b cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62c6f lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11a62c72 jne 0x11a62cc1 */
  if (!C.zf) goto L_11a62cc1;
  /* 11a62c74 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a62c76 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11a62c7a jne 0x11a62c81 */
  if (!C.zf) goto L_11a62c81;
  /* 11a62c7c push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11a62c7e pop eax */
  EAX = (pop32());
  /* 11a62c7f jmp 0x11a62c8b */
  goto L_11a62c8b;
L_11a62c81:;
  /* 11a62c81 mov eax, ebx */
  EAX = (EBX);
  /* 11a62c83 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a62c84 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a62c86 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a62c88 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a62c8b:;
  /* 11a62c8b push eax */
  push32((uint32_t)(EAX));
  /* 11a62c8c call dword ptr [0x11a680b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680b4))), 0x11a62c92u);
  /* 11a62c92 mov edi, eax */
  EDI = (EAX);
  /* 11a62c94 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62c97 je 0x11a62cb0 */
  if (C.zf) goto L_11a62cb0;
  /* 11a62c99 push edi */
  push32((uint32_t)(EDI));
  /* 11a62c9a call dword ptr [0x11a680b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680b8))), 0x11a62ca0u);
  /* 11a62ca0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a62ca2 je 0x11a62cb0 */
  if (C.zf) goto L_11a62cb0;
  /* 11a62ca4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a62ca9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a62cab cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62cae jne 0x11a62cb6 */
  if (!C.zf) goto L_11a62cb6;
L_11a62cb0:;
  /* 11a62cb0 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a62cb4 jmp 0x11a62cc5 */
  goto L_11a62cc5;
L_11a62cb6:;
  /* 11a62cb6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62cb9 jne 0x11a62cc5 */
  if (!C.zf) goto L_11a62cc5;
  /* 11a62cbb or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a62cbf jmp 0x11a62cc5 */
  goto L_11a62cc5;
L_11a62cc1:;
  /* 11a62cc1 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11a62cc5:;
  /* 11a62cc5 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a62cc6 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62cc9 jl 0x11a62c62 */
  if ((C.sf!=C.of)) goto L_11a62c62;
  /* 11a62ccb push dword ptr [0x11a6c7e0] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c7e0))));
  /* 11a62cd1 call dword ptr [0x11a680b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680b0))), 0x11a62cd7u);
  /* 11a62cd7 pop edi */
  EDI = (pop32());
  /* 11a62cd8 pop esi */
  ESI = (pop32());
  /* 11a62cd9 pop ebx */
  EBX = (pop32());
  /* 11a62cda leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a62cdb ret  */
  ESPCHK(0x11a62b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cdc @ 0x11a62cdc (84 bytes, 33 insns) */
void f_11a62cdc(void) {
  FTRACE(0x11a62cdcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62cdc push ebx */
  push32((uint32_t)(EBX));
  /* 11a62cdd push esi */
  push32((uint32_t)(ESI));
  /* 11a62cde push edi */
  push32((uint32_t)(EDI));
  /* 11a62cdf mov esi, 0x11a6c6e0 */
  ESI = (0x11a6c6e0u);
L_11a62ce4:;
  /* 11a62ce4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a62ce6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a62ce8 je 0x11a62d21 */
  if (C.zf) goto L_11a62d21;
  /* 11a62cea mov edi, eax */
  EDI = (EAX);
  /* 11a62cec add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62cf1 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62cf3 jae 0x11a62d16 */
  if (!C.cf) goto L_11a62d16;
  /* 11a62cf5 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11a62cf8:;
  /* 11a62cf8 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62cfc je 0x11a62d05 */
  if (C.zf) goto L_11a62d05;
  /* 11a62cfe push ebx */
  push32((uint32_t)(EBX));
  /* 11a62cff call dword ptr [0x11a680c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680c0))), 0x11a62d05u);
L_11a62d05:;
  /* 11a62d05 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a62d07 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62d0a add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62d0f add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62d12 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62d14 jb 0x11a62cf8 */
  if (C.cf) goto L_11a62cf8;
L_11a62d16:;
  /* 11a62d16 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a62d18 call 0x11a637b6 */
  push32(0x11a62d1du); f_11a637b6();
  /* 11a62d1d and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a62d20 pop ecx */
  ECX = (pop32());
L_11a62d21:;
  /* 11a62d21 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62d24 cmp esi, 0x11a6c7e0 */
  { uint32_t _a=(ESI),_b=(0x11a6c7e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62d2a jl 0x11a62ce4 */
  if ((C.sf!=C.of)) goto L_11a62ce4;
  /* 11a62d2c pop edi */
  EDI = (pop32());
  /* 11a62d2d pop esi */
  ESI = (pop32());
  /* 11a62d2e pop ebx */
  EBX = (pop32());
  /* 11a62d2f ret  */
  ESPCHK(0x11a62cdcu, _esp0);
  ESP += 4; return;
}

/* FUN_10002d30 @ 0x11a62d30 (185 bytes, 71 insns) */
void f_11a62d30(void) {
  FTRACE(0x11a62d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62d30 push ebx */
  push32((uint32_t)(EBX));
  /* 11a62d31 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a62d33 cmp dword ptr [0x11a6c7e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a6c7e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62d39 push esi */
  push32((uint32_t)(ESI));
  /* 11a62d3a push edi */
  push32((uint32_t)(EDI));
  /* 11a62d3b jne 0x11a62d42 */
  if (!C.zf) goto L_11a62d42;
  /* 11a62d3d call 0x11a644e3 */
  push32(0x11a62d42u); f_11a644e3();
L_11a62d42:;
  /* 11a62d42 mov esi, dword ptr [0x11a6c124] */
  ESI = (r32((uint32_t)(0x11a6c124)));
  /* 11a62d48 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11a62d4a:;
  /* 11a62d4a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a62d4c cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62d4e je 0x11a62d62 */
  if (C.zf) goto L_11a62d62;
  /* 11a62d50 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62d52 je 0x11a62d55 */
  if (C.zf) goto L_11a62d55;
  /* 11a62d54 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11a62d55:;
  /* 11a62d55 push esi */
  push32((uint32_t)(ESI));
  /* 11a62d56 call 0x11a64090 */
  push32(0x11a62d5bu); f_11a64090();
  /* 11a62d5b pop ecx */
  ECX = (pop32());
  /* 11a62d5c lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11a62d60 jmp 0x11a62d4a */
  goto L_11a62d4a;
L_11a62d62:;
  /* 11a62d62 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11a62d69 push eax */
  push32((uint32_t)(EAX));
  /* 11a62d6a call 0x11a63e61 */
  push32(0x11a62d6fu); f_11a63e61();
  /* 11a62d6f mov esi, eax */
  ESI = (EAX);
  /* 11a62d71 pop ecx */
  ECX = (pop32());
  /* 11a62d72 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62d74 mov dword ptr [0x11a6c154], esi */
  w32((uint32_t)(0x11a6c154), (ESI));
  /* 11a62d7a jne 0x11a62d84 */
  if (!C.zf) goto L_11a62d84;
  /* 11a62d7c push 9 */
  push32((uint32_t)(0x9u));
  /* 11a62d7e call 0x11a62781 */
  push32(0x11a62d83u); f_11a62781();
  /* 11a62d83 pop ecx */
  ECX = (pop32());
L_11a62d84:;
  /* 11a62d84 mov edi, dword ptr [0x11a6c124] */
  EDI = (r32((uint32_t)(0x11a6c124)));
  /* 11a62d8a cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62d8c je 0x11a62dc7 */
  if (C.zf) goto L_11a62dc7;
  /* 11a62d8e push ebp */
  push32((uint32_t)(EBP));
L_11a62d8f:;
  /* 11a62d8f push edi */
  push32((uint32_t)(EDI));
  /* 11a62d90 call 0x11a64090 */
  push32(0x11a62d95u); f_11a64090();
  /* 11a62d95 mov ebp, eax */
  EBP = (EAX);
  /* 11a62d97 pop ecx */
  ECX = (pop32());
  /* 11a62d98 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a62d99 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62d9c je 0x11a62dc0 */
  if (C.zf) goto L_11a62dc0;
  /* 11a62d9e push ebp */
  push32((uint32_t)(EBP));
  /* 11a62d9f call 0x11a63e61 */
  push32(0x11a62da4u); f_11a63e61();
  /* 11a62da4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62da6 pop ecx */
  ECX = (pop32());
  /* 11a62da7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a62da9 jne 0x11a62db3 */
  if (!C.zf) goto L_11a62db3;
  /* 11a62dab push 9 */
  push32((uint32_t)(0x9u));
  /* 11a62dad call 0x11a62781 */
  push32(0x11a62db2u); f_11a62781();
  /* 11a62db2 pop ecx */
  ECX = (pop32());
L_11a62db3:;
  /* 11a62db3 push edi */
  push32((uint32_t)(EDI));
  /* 11a62db4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a62db6 call 0x11a63fa0 */
  push32(0x11a62dbbu); f_11a63fa0();
  /* 11a62dbb pop ecx */
  ECX = (pop32());
  /* 11a62dbc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62dbf pop ecx */
  ECX = (pop32());
L_11a62dc0:;
  /* 11a62dc0 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62dc2 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62dc4 jne 0x11a62d8f */
  if (!C.zf) goto L_11a62d8f;
  /* 11a62dc6 pop ebp */
  EBP = (pop32());
L_11a62dc7:;
  /* 11a62dc7 push dword ptr [0x11a6c124] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c124))));
  /* 11a62dcd call 0x11a637b6 */
  push32(0x11a62dd2u); f_11a637b6();
  /* 11a62dd2 pop ecx */
  ECX = (pop32());
  /* 11a62dd3 mov dword ptr [0x11a6c124], ebx */
  w32((uint32_t)(0x11a6c124), (EBX));
  /* 11a62dd9 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11a62ddb pop edi */
  EDI = (pop32());
  /* 11a62ddc pop esi */
  ESI = (pop32());
  /* 11a62ddd mov dword ptr [0x11a6c7e4], 1 */
  w32((uint32_t)(0x11a6c7e4), (0x1u));
  /* 11a62de7 pop ebx */
  EBX = (pop32());
  /* 11a62de8 ret  */
  ESPCHK(0x11a62d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002de9 @ 0x11a62de9 (153 bytes, 62 insns) */
void f_11a62de9(void) {
  FTRACE(0x11a62de9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62de9 push ebp */
  push32((uint32_t)(EBP));
  /* 11a62dea mov ebp, esp */
  EBP = (ESP);
  /* 11a62dec push ecx */
  push32((uint32_t)(ECX));
  /* 11a62ded push ecx */
  push32((uint32_t)(ECX));
  /* 11a62dee push ebx */
  push32((uint32_t)(EBX));
  /* 11a62def xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a62df1 cmp dword ptr [0x11a6c7e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a6c7e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62df7 push esi */
  push32((uint32_t)(ESI));
  /* 11a62df8 push edi */
  push32((uint32_t)(EDI));
  /* 11a62df9 jne 0x11a62e00 */
  if (!C.zf) goto L_11a62e00;
  /* 11a62dfb call 0x11a644e3 */
  push32(0x11a62e00u); f_11a644e3();
L_11a62e00:;
  /* 11a62e00 mov esi, 0x11a6c178 */
  ESI = (0x11a6c178u);
  /* 11a62e05 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a62e0a push esi */
  push32((uint32_t)(ESI));
  /* 11a62e0b push ebx */
  push32((uint32_t)(EBX));
  /* 11a62e0c call dword ptr [0x11a680c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680c4))), 0x11a62e12u);
  /* 11a62e12 mov eax, dword ptr [0x11a6c7f8] */
  EAX = (r32((uint32_t)(0x11a6c7f8)));
  /* 11a62e17 mov dword ptr [0x11a6c164], esi */
  w32((uint32_t)(0x11a6c164), (ESI));
  /* 11a62e1d mov edi, esi */
  EDI = (ESI);
  /* 11a62e1f cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62e21 je 0x11a62e25 */
  if (C.zf) goto L_11a62e25;
  /* 11a62e23 mov edi, eax */
  EDI = (EAX);
L_11a62e25:;
  /* 11a62e25 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a62e28 push eax */
  push32((uint32_t)(EAX));
  /* 11a62e29 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a62e2c push eax */
  push32((uint32_t)(EAX));
  /* 11a62e2d push ebx */
  push32((uint32_t)(EBX));
  /* 11a62e2e push ebx */
  push32((uint32_t)(EBX));
  /* 11a62e2f push edi */
  push32((uint32_t)(EDI));
  /* 11a62e30 call 0x11a62e82 */
  push32(0x11a62e35u); f_11a62e82();
  /* 11a62e35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a62e38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a62e3b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11a62e3e push eax */
  push32((uint32_t)(EAX));
  /* 11a62e3f call 0x11a63e61 */
  push32(0x11a62e44u); f_11a63e61();
  /* 11a62e44 mov esi, eax */
  ESI = (EAX);
  /* 11a62e46 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62e49 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62e4b jne 0x11a62e55 */
  if (!C.zf) goto L_11a62e55;
  /* 11a62e4d push 8 */
  push32((uint32_t)(0x8u));
  /* 11a62e4f call 0x11a62781 */
  push32(0x11a62e54u); f_11a62781();
  /* 11a62e54 pop ecx */
  ECX = (pop32());
L_11a62e55:;
  /* 11a62e55 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a62e58 push eax */
  push32((uint32_t)(EAX));
  /* 11a62e59 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a62e5c push eax */
  push32((uint32_t)(EAX));
  /* 11a62e5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a62e60 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11a62e63 push eax */
  push32((uint32_t)(EAX));
  /* 11a62e64 push esi */
  push32((uint32_t)(ESI));
  /* 11a62e65 push edi */
  push32((uint32_t)(EDI));
  /* 11a62e66 call 0x11a62e82 */
  push32(0x11a62e6bu); f_11a62e82();
  /* 11a62e6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a62e6e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62e71 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a62e72 mov dword ptr [0x11a6c14c], esi */
  w32((uint32_t)(0x11a6c14c), (ESI));
  /* 11a62e78 pop edi */
  EDI = (pop32());
  /* 11a62e79 pop esi */
  ESI = (pop32());
  /* 11a62e7a mov dword ptr [0x11a6c148], eax */
  w32((uint32_t)(0x11a6c148), (EAX));
  /* 11a62e7f pop ebx */
  EBX = (pop32());
  /* 11a62e80 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a62e81 ret  */
  ESPCHK(0x11a62de9u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e82 @ 0x11a62e82 (436 bytes, 187 insns) */
void f_11a62e82(void) {
  FTRACE(0x11a62e82u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a62e82 push ebp */
  push32((uint32_t)(EBP));
  /* 11a62e83 mov ebp, esp */
  EBP = (ESP);
  /* 11a62e85 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a62e88 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a62e8b push ebx */
  push32((uint32_t)(EBX));
  /* 11a62e8c push esi */
  push32((uint32_t)(ESI));
  /* 11a62e8d and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a62e90 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11a62e93 push edi */
  push32((uint32_t)(EDI));
  /* 11a62e94 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a62e97 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11a62e9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a62ea0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a62ea2 je 0x11a62eac */
  if (C.zf) goto L_11a62eac;
  /* 11a62ea4 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11a62ea6 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62ea9 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11a62eac:;
  /* 11a62eac cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62eaf jne 0x11a62ef5 */
  if (!C.zf) goto L_11a62ef5;
L_11a62eb1:;
  /* 11a62eb1 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11a62eb4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a62eb5 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62eb8 je 0x11a62ee3 */
  if (C.zf) goto L_11a62ee3;
  /* 11a62eba test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a62ebc je 0x11a62ee3 */
  if (C.zf) goto L_11a62ee3;
  /* 11a62ebe movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11a62ec1 test byte ptr [edx + 0x11a6c5c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11a6c5c1)))&(0x4u); fl_logic(_r,8); }
  /* 11a62ec8 je 0x11a62ed6 */
  if (C.zf) goto L_11a62ed6;
  /* 11a62eca inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a62ecc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a62ece je 0x11a62ed6 */
  if (C.zf) goto L_11a62ed6;
  /* 11a62ed0 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a62ed2 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a62ed4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a62ed5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a62ed6:;
  /* 11a62ed6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a62ed8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a62eda je 0x11a62eb1 */
  if (C.zf) goto L_11a62eb1;
  /* 11a62edc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a62ede mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a62ee0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a62ee1 jmp 0x11a62eb1 */
  goto L_11a62eb1;
L_11a62ee3:;
  /* 11a62ee3 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a62ee5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a62ee7 je 0x11a62eed */
  if (C.zf) goto L_11a62eed;
  /* 11a62ee9 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11a62eec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a62eed:;
  /* 11a62eed cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62ef0 jne 0x11a62f38 */
  if (!C.zf) goto L_11a62f38;
  /* 11a62ef2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a62ef3 jmp 0x11a62f38 */
  goto L_11a62f38;
L_11a62ef5:;
  /* 11a62ef5 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a62ef7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a62ef9 je 0x11a62f00 */
  if (C.zf) goto L_11a62f00;
  /* 11a62efb mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a62efd mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a62eff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a62f00:;
  /* 11a62f00 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a62f02 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a62f03 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11a62f06 test byte ptr [ebx + 0x11a6c5c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11a6c5c1)))&(0x4u); fl_logic(_r,8); }
  /* 11a62f0d je 0x11a62f1b */
  if (C.zf) goto L_11a62f1b;
  /* 11a62f0f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a62f11 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a62f13 je 0x11a62f1a */
  if (C.zf) goto L_11a62f1a;
  /* 11a62f15 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11a62f17 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11a62f19 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a62f1a:;
  /* 11a62f1a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a62f1b:;
  /* 11a62f1b cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62f1e je 0x11a62f29 */
  if (C.zf) goto L_11a62f29;
  /* 11a62f20 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a62f22 je 0x11a62f2d */
  if (C.zf) goto L_11a62f2d;
  /* 11a62f24 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62f27 jne 0x11a62ef5 */
  if (!C.zf) goto L_11a62ef5;
L_11a62f29:;
  /* 11a62f29 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a62f2b jne 0x11a62f30 */
  if (!C.zf) goto L_11a62f30;
L_11a62f2d:;
  /* 11a62f2d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a62f2e jmp 0x11a62f38 */
  goto L_11a62f38;
L_11a62f30:;
  /* 11a62f30 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a62f32 je 0x11a62f38 */
  if (C.zf) goto L_11a62f38;
  /* 11a62f34 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11a62f38:;
  /* 11a62f38 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11a62f3c:;
  /* 11a62f3c cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62f3f je 0x11a63025 */
  if (C.zf) goto L_11a63025;
L_11a62f45:;
  /* 11a62f45 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a62f47 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62f4a je 0x11a62f51 */
  if (C.zf) goto L_11a62f51;
  /* 11a62f4c cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62f4f jne 0x11a62f54 */
  if (!C.zf) goto L_11a62f54;
L_11a62f51:;
  /* 11a62f51 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a62f52 jmp 0x11a62f45 */
  goto L_11a62f45;
L_11a62f54:;
  /* 11a62f54 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62f57 je 0x11a63025 */
  if (C.zf) goto L_11a63025;
  /* 11a62f5d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a62f5f je 0x11a62f69 */
  if (C.zf) goto L_11a62f69;
  /* 11a62f61 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11a62f63 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a62f66 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11a62f69:;
  /* 11a62f69 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a62f6c inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11a62f6e:;
  /* 11a62f6e mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11a62f75 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a62f77:;
  /* 11a62f77 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62f7a jne 0x11a62f80 */
  if (!C.zf) goto L_11a62f80;
  /* 11a62f7c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a62f7d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a62f7e jmp 0x11a62f77 */
  goto L_11a62f77;
L_11a62f80:;
  /* 11a62f80 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62f83 jne 0x11a62fb1 */
  if (!C.zf) goto L_11a62fb1;
  /* 11a62f85 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11a62f88 jne 0x11a62faf */
  if (!C.zf) goto L_11a62faf;
  /* 11a62f8a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a62f8c cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62f8f je 0x11a62f9e */
  if (C.zf) goto L_11a62f9e;
  /* 11a62f91 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62f95 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11a62f98 jne 0x11a62f9e */
  if (!C.zf) goto L_11a62f9e;
  /* 11a62f9a mov eax, edx */
  EAX = (EDX);
  /* 11a62f9c jmp 0x11a62fa1 */
  goto L_11a62fa1;
L_11a62f9e:;
  /* 11a62f9e mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11a62fa1:;
  /* 11a62fa1 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a62fa4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a62fa6 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62fa9 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11a62fac mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11a62faf:;
  /* 11a62faf shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11a62fb1:;
  /* 11a62fb1 mov edx, ebx */
  EDX = (EBX);
  /* 11a62fb3 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a62fb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a62fb6 je 0x11a62fc6 */
  if (C.zf) goto L_11a62fc6;
  /* 11a62fb8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11a62fb9:;
  /* 11a62fb9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a62fbb je 0x11a62fc1 */
  if (C.zf) goto L_11a62fc1;
  /* 11a62fbd mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11a62fc0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a62fc1:;
  /* 11a62fc1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a62fc3 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a62fc4 jne 0x11a62fb9 */
  if (!C.zf) goto L_11a62fb9;
L_11a62fc6:;
  /* 11a62fc6 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a62fc8 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a62fca je 0x11a63016 */
  if (C.zf) goto L_11a63016;
  /* 11a62fcc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62fd0 jne 0x11a62fdc */
  if (!C.zf) goto L_11a62fdc;
  /* 11a62fd2 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62fd5 je 0x11a63016 */
  if (C.zf) goto L_11a63016;
  /* 11a62fd7 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a62fda je 0x11a63016 */
  if (C.zf) goto L_11a63016;
L_11a62fdc:;
  /* 11a62fdc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a62fe0 je 0x11a63010 */
  if (C.zf) goto L_11a63010;
  /* 11a62fe2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a62fe4 je 0x11a62fff */
  if (C.zf) goto L_11a62fff;
  /* 11a62fe6 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11a62fe9 test byte ptr [ebx + 0x11a6c5c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11a6c5c1)))&(0x4u); fl_logic(_r,8); }
  /* 11a62ff0 je 0x11a62ff8 */
  if (C.zf) goto L_11a62ff8;
  /* 11a62ff2 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a62ff4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a62ff5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a62ff6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a62ff8:;
  /* 11a62ff8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a62ffa mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a62ffc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a62ffd jmp 0x11a6300e */
  goto L_11a6300e;
L_11a62fff:;
  /* 11a62fff movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11a63002 test byte ptr [edx + 0x11a6c5c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11a6c5c1)))&(0x4u); fl_logic(_r,8); }
  /* 11a63009 je 0x11a6300e */
  if (C.zf) goto L_11a6300e;
  /* 11a6300b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a6300c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a6300e:;
  /* 11a6300e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a63010:;
  /* 11a63010 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a63011 jmp 0x11a62f6e */
  goto L_11a62f6e;
L_11a63016:;
  /* 11a63016 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a63018 je 0x11a6301e */
  if (C.zf) goto L_11a6301e;
  /* 11a6301a and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11a6301d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a6301e:;
  /* 11a6301e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a63020 jmp 0x11a62f3c */
  goto L_11a62f3c;
L_11a63025:;
  /* 11a63025 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a63027 je 0x11a6302c */
  if (C.zf) goto L_11a6302c;
  /* 11a63029 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11a6302c:;
  /* 11a6302c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a6302f pop edi */
  EDI = (pop32());
  /* 11a63030 pop esi */
  ESI = (pop32());
  /* 11a63031 pop ebx */
  EBX = (pop32());
  /* 11a63032 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11a63034 pop ebp */
  EBP = (pop32());
  /* 11a63035 ret  */
  ESPCHK(0x11a62e82u, _esp0);
  ESP += 4; return;
}

/* FUN_10003036 @ 0x11a63036 (306 bytes, 132 insns) */
void f_11a63036(void) {
  FTRACE(0x11a63036u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63036 push ecx */
  push32((uint32_t)(ECX));
  /* 11a63037 push ecx */
  push32((uint32_t)(ECX));
  /* 11a63038 mov eax, dword ptr [0x11a6c27c] */
  EAX = (r32((uint32_t)(0x11a6c27c)));
  /* 11a6303d push ebx */
  push32((uint32_t)(EBX));
  /* 11a6303e push ebp */
  push32((uint32_t)(EBP));
  /* 11a6303f mov ebp, dword ptr [0x11a680d8] */
  EBP = (r32((uint32_t)(0x11a680d8)));
  /* 11a63045 push esi */
  push32((uint32_t)(ESI));
  /* 11a63046 push edi */
  push32((uint32_t)(EDI));
  /* 11a63047 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a63049 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a6304b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a6304d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6304f jne 0x11a63084 */
  if (!C.zf) goto L_11a63084;
  /* 11a63051 call ebp */
  call_ind((uint32_t)(EBP), 0x11a63053u);
  /* 11a63053 mov esi, eax */
  ESI = (EAX);
  /* 11a63055 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63057 je 0x11a63065 */
  if (C.zf) goto L_11a63065;
  /* 11a63059 mov dword ptr [0x11a6c27c], 1 */
  w32((uint32_t)(0x11a6c27c), (0x1u));
  /* 11a63063 jmp 0x11a6308d */
  goto L_11a6308d;
L_11a63065:;
  /* 11a63065 call dword ptr [0x11a680d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680d4))), 0x11a6306bu);
  /* 11a6306b mov edi, eax */
  EDI = (EAX);
  /* 11a6306d cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6306f je 0x11a6315f */
  if (C.zf) goto L_11a6315f;
  /* 11a63075 mov dword ptr [0x11a6c27c], 2 */
  w32((uint32_t)(0x11a6c27c), (0x2u));
  /* 11a6307f jmp 0x11a63113 */
  goto L_11a63113;
L_11a63084:;
  /* 11a63084 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63087 jne 0x11a6310e */
  if (!C.zf) goto L_11a6310e;
L_11a6308d:;
  /* 11a6308d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6308f jne 0x11a6309d */
  if (!C.zf) goto L_11a6309d;
  /* 11a63091 call ebp */
  call_ind((uint32_t)(EBP), 0x11a63093u);
  /* 11a63093 mov esi, eax */
  ESI = (EAX);
  /* 11a63095 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63097 je 0x11a6315f */
  if (C.zf) goto L_11a6315f;
L_11a6309d:;
  /* 11a6309d cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a630a0 mov eax, esi */
  EAX = (ESI);
  /* 11a630a2 je 0x11a630b2 */
  if (C.zf) goto L_11a630b2;
L_11a630a4:;
  /* 11a630a4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a630a5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a630a6 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a630a9 jne 0x11a630a4 */
  if (!C.zf) goto L_11a630a4;
  /* 11a630ab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a630ac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a630ad cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a630b0 jne 0x11a630a4 */
  if (!C.zf) goto L_11a630a4;
L_11a630b2:;
  /* 11a630b2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a630b4 mov edi, dword ptr [0x11a680d0] */
  EDI = (r32((uint32_t)(0x11a680d0)));
  /* 11a630ba sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a630bc push ebx */
  push32((uint32_t)(EBX));
  /* 11a630bd push ebx */
  push32((uint32_t)(EBX));
  /* 11a630be inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a630bf push ebx */
  push32((uint32_t)(EBX));
  /* 11a630c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a630c1 push eax */
  push32((uint32_t)(EAX));
  /* 11a630c2 push esi */
  push32((uint32_t)(ESI));
  /* 11a630c3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a630c4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a630c5 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11a630c9 call edi */
  call_ind((uint32_t)(EDI), 0x11a630cbu);
  /* 11a630cb mov ebp, eax */
  EBP = (EAX);
  /* 11a630cd cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a630cf je 0x11a63103 */
  if (C.zf) goto L_11a63103;
  /* 11a630d1 push ebp */
  push32((uint32_t)(EBP));
  /* 11a630d2 call 0x11a63e61 */
  push32(0x11a630d7u); f_11a63e61();
  /* 11a630d7 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a630d9 pop ecx */
  ECX = (pop32());
  /* 11a630da mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11a630de je 0x11a63103 */
  if (C.zf) goto L_11a63103;
  /* 11a630e0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a630e1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a630e2 push ebp */
  push32((uint32_t)(EBP));
  /* 11a630e3 push eax */
  push32((uint32_t)(EAX));
  /* 11a630e4 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11a630e8 push esi */
  push32((uint32_t)(ESI));
  /* 11a630e9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a630ea push ebx */
  push32((uint32_t)(EBX));
  /* 11a630eb call edi */
  call_ind((uint32_t)(EDI), 0x11a630edu);
  /* 11a630ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a630ef jne 0x11a630ff */
  if (!C.zf) goto L_11a630ff;
  /* 11a630f1 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a630f5 call 0x11a637b6 */
  push32(0x11a630fau); f_11a637b6();
  /* 11a630fa pop ecx */
  ECX = (pop32());
  /* 11a630fb mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11a630ff:;
  /* 11a630ff mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11a63103:;
  /* 11a63103 push esi */
  push32((uint32_t)(ESI));
  /* 11a63104 call dword ptr [0x11a680cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680cc))), 0x11a6310au);
  /* 11a6310a mov eax, ebx */
  EAX = (EBX);
  /* 11a6310c jmp 0x11a63161 */
  goto L_11a63161;
L_11a6310e:;
  /* 11a6310e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63111 jne 0x11a6315f */
  if (!C.zf) goto L_11a6315f;
L_11a63113:;
  /* 11a63113 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63115 jne 0x11a63123 */
  if (!C.zf) goto L_11a63123;
  /* 11a63117 call dword ptr [0x11a680d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680d4))), 0x11a6311du);
  /* 11a6311d mov edi, eax */
  EDI = (EAX);
  /* 11a6311f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63121 je 0x11a6315f */
  if (C.zf) goto L_11a6315f;
L_11a63123:;
  /* 11a63123 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63125 mov eax, edi */
  EAX = (EDI);
  /* 11a63127 je 0x11a63133 */
  if (C.zf) goto L_11a63133;
L_11a63129:;
  /* 11a63129 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a6312a cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a6312c jne 0x11a63129 */
  if (!C.zf) goto L_11a63129;
  /* 11a6312e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a6312f cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63131 jne 0x11a63129 */
  if (!C.zf) goto L_11a63129;
L_11a63133:;
  /* 11a63133 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a63135 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a63136 mov ebp, eax */
  EBP = (EAX);
  /* 11a63138 push ebp */
  push32((uint32_t)(EBP));
  /* 11a63139 call 0x11a63e61 */
  push32(0x11a6313eu); f_11a63e61();
  /* 11a6313e mov esi, eax */
  ESI = (EAX);
  /* 11a63140 pop ecx */
  ECX = (pop32());
  /* 11a63141 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63143 jne 0x11a63149 */
  if (!C.zf) goto L_11a63149;
  /* 11a63145 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a63147 jmp 0x11a63154 */
  goto L_11a63154;
L_11a63149:;
  /* 11a63149 push ebp */
  push32((uint32_t)(EBP));
  /* 11a6314a push edi */
  push32((uint32_t)(EDI));
  /* 11a6314b push esi */
  push32((uint32_t)(ESI));
  /* 11a6314c call 0x11a64500 */
  push32(0x11a63151u); f_11a64500();
  /* 11a63151 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a63154:;
  /* 11a63154 push edi */
  push32((uint32_t)(EDI));
  /* 11a63155 call dword ptr [0x11a680c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680c8))), 0x11a6315bu);
  /* 11a6315b mov eax, esi */
  EAX = (ESI);
  /* 11a6315d jmp 0x11a63161 */
  goto L_11a63161;
L_11a6315f:;
  /* 11a6315f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a63161:;
  /* 11a63161 pop edi */
  EDI = (pop32());
  /* 11a63162 pop esi */
  ESI = (pop32());
  /* 11a63163 pop ebp */
  EBP = (pop32());
  /* 11a63164 pop ebx */
  EBX = (pop32());
  /* 11a63165 pop ecx */
  ECX = (pop32());
  /* 11a63166 pop ecx */
  ECX = (pop32());
  /* 11a63167 ret  */
  ESPCHK(0x11a63036u, _esp0);
  ESP += 4; return;
}

/* FUN_10003168 @ 0x11a63168 (45 bytes, 17 insns) */
void f_11a63168(void) {
  FTRACE(0x11a63168u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63168 push esi */
  push32((uint32_t)(ESI));
  /* 11a63169 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a6316d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a6316f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a63172 call dword ptr [0x11a680dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680dc))), 0x11a63178u);
  /* 11a63178 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a6317d jne 0x11a63193 */
  if (!C.zf) goto L_11a63193;
  /* 11a6317f mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11a63182 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a63184 je 0x11a63193 */
  if (C.zf) goto L_11a63193;
  /* 11a63186 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63188 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11a6318b mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11a6318d mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11a63190 mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11a63193:;
  /* 11a63193 pop esi */
  ESI = (pop32());
  /* 11a63194 ret  */
  ESPCHK(0x11a63168u, _esp0);
  ESP += 4; return;
}

/* FUN_10003195 @ 0x11a63195 (328 bytes, 115 insns) */
void f_11a63195(void) {
  FTRACE(0x11a63195u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63195 push ebp */
  push32((uint32_t)(EBP));
  /* 11a63196 mov ebp, esp */
  EBP = (ESP);
  /* 11a63198 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11a6319d call 0x11a64bf0 */
  push32(0x11a631a2u); f_11a64bf0();
  /* 11a631a2 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11a631a8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a631a9 push eax */
  push32((uint32_t)(EAX));
  /* 11a631aa mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11a631b4 call dword ptr [0x11a680a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680a8))), 0x11a631bau);
  /* 11a631ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a631bc je 0x11a631d8 */
  if (C.zf) goto L_11a631d8;
  /* 11a631be cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a631c5 jne 0x11a631d8 */
  if (!C.zf) goto L_11a631d8;
  /* 11a631c7 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a631ce jb 0x11a631d8 */
  if (C.cf) goto L_11a631d8;
  /* 11a631d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a631d2 pop eax */
  EAX = (pop32());
  /* 11a631d3 jmp 0x11a632da */
  goto L_11a632da;
L_11a631d8:;
  /* 11a631d8 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11a631de push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11a631e3 push eax */
  push32((uint32_t)(EAX));
  /* 11a631e4 push 0x11a681a0 */
  push32((uint32_t)(0x11a681a0u));
  /* 11a631e9 call dword ptr [0x11a680a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680a4))), 0x11a631efu);
  /* 11a631ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a631f1 je 0x11a632c7 */
  if (C.zf) goto L_11a632c7;
  /* 11a631f7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a631f9 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11a631ff cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63205 je 0x11a6321a */
  if (C.zf) goto L_11a6321a;
L_11a63207:;
  /* 11a63207 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a63209 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a6320b jl 0x11a63215 */
  if ((C.sf!=C.of)) goto L_11a63215;
  /* 11a6320d cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a6320f jg 0x11a63215 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a63215;
  /* 11a63211 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a63213 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11a63215:;
  /* 11a63215 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a63216 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63218 jne 0x11a63207 */
  if (!C.zf) goto L_11a63207;
L_11a6321a:;
  /* 11a6321a lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11a63220 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11a63222 push eax */
  push32((uint32_t)(EAX));
  /* 11a63223 push 0x11a68188 */
  push32((uint32_t)(0x11a68188u));
  /* 11a63228 call 0x11a64bb0 */
  push32(0x11a6322du); f_11a64bb0();
  /* 11a6322d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63230 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a63232 jne 0x11a6323c */
  if (!C.zf) goto L_11a6323c;
  /* 11a63234 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11a6323a jmp 0x11a63285 */
  goto L_11a63285;
L_11a6323c:;
  /* 11a6323c lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11a63242 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a63247 push eax */
  push32((uint32_t)(EAX));
  /* 11a63248 push ebx */
  push32((uint32_t)(EBX));
  /* 11a63249 call dword ptr [0x11a680c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680c4))), 0x11a6324fu);
  /* 11a6324f cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63255 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11a6325b je 0x11a63270 */
  if (C.zf) goto L_11a63270;
L_11a6325d:;
  /* 11a6325d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a6325f cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63261 jl 0x11a6326b */
  if ((C.sf!=C.of)) goto L_11a6326b;
  /* 11a63263 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63265 jg 0x11a6326b */
  if ((!C.zf&&C.sf==C.of)) goto L_11a6326b;
  /* 11a63267 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a63269 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11a6326b:;
  /* 11a6326b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a6326c cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a6326e jne 0x11a6325d */
  if (!C.zf) goto L_11a6325d;
L_11a63270:;
  /* 11a63270 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11a63276 push eax */
  push32((uint32_t)(EAX));
  /* 11a63277 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11a6327d push eax */
  push32((uint32_t)(EAX));
  /* 11a6327e call 0x11a64b30 */
  push32(0x11a63283u); f_11a64b30();
  /* 11a63283 pop ecx */
  ECX = (pop32());
  /* 11a63284 pop ecx */
  ECX = (pop32());
L_11a63285:;
  /* 11a63285 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63287 je 0x11a632c7 */
  if (C.zf) goto L_11a632c7;
  /* 11a63289 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11a6328b push eax */
  push32((uint32_t)(EAX));
  /* 11a6328c call 0x11a64a70 */
  push32(0x11a63291u); f_11a64a70();
  /* 11a63291 pop ecx */
  ECX = (pop32());
  /* 11a63292 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63294 pop ecx */
  ECX = (pop32());
  /* 11a63295 je 0x11a632c7 */
  if (C.zf) goto L_11a632c7;
  /* 11a63297 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a63298 mov ecx, eax */
  ECX = (EAX);
  /* 11a6329a cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a6329c je 0x11a632ac */
  if (C.zf) goto L_11a632ac;
L_11a6329e:;
  /* 11a6329e cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a632a1 jne 0x11a632a7 */
  if (!C.zf) goto L_11a632a7;
  /* 11a632a3 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11a632a5 jmp 0x11a632a8 */
  goto L_11a632a8;
L_11a632a7:;
  /* 11a632a7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11a632a8:;
  /* 11a632a8 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a632aa jne 0x11a6329e */
  if (!C.zf) goto L_11a6329e;
L_11a632ac:;
  /* 11a632ac push 0xa */
  push32((uint32_t)(0xau));
  /* 11a632ae push ebx */
  push32((uint32_t)(EBX));
  /* 11a632af push eax */
  push32((uint32_t)(EAX));
  /* 11a632b0 call 0x11a64835 */
  push32(0x11a632b5u); f_11a64835();
  /* 11a632b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a632b8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a632bb je 0x11a632da */
  if (C.zf) goto L_11a632da;
  /* 11a632bd cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a632c0 je 0x11a632da */
  if (C.zf) goto L_11a632da;
  /* 11a632c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a632c5 je 0x11a632da */
  if (C.zf) goto L_11a632da;
L_11a632c7:;
  /* 11a632c7 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a632ca push eax */
  push32((uint32_t)(EAX));
  /* 11a632cb call 0x11a63168 */
  push32(0x11a632d0u); f_11a63168();
  /* 11a632d0 cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a632d4 pop ecx */
  ECX = (pop32());
  /* 11a632d5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a632d7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a632da:;
  /* 11a632da pop ebx */
  EBX = (pop32());
  /* 11a632db leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a632dc ret  */
  ESPCHK(0x11a63195u, _esp0);
  ESP += 4; return;
}

/* FUN_100032dd @ 0x11a632dd (93 bytes, 30 insns) */
void f_11a632dd(void) {
  FTRACE(0x11a632ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a632dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a632df push 0 */
  push32((uint32_t)(0x0u));
  /* 11a632e1 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a632e5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a632ea sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11a632ed push eax */
  push32((uint32_t)(EAX));
  /* 11a632ee call dword ptr [0x11a6806c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6806c))), 0x11a632f4u);
  /* 11a632f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a632f6 mov dword ptr [0x11a6c6c8], eax */
  w32((uint32_t)(0x11a6c6c8), (EAX));
  /* 11a632fb je 0x11a63333 */
  if (C.zf) goto L_11a63333;
  /* 11a632fd call 0x11a63195 */
  push32(0x11a63302u); f_11a63195();
  /* 11a63302 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63305 mov dword ptr [0x11a6c6cc], eax */
  w32((uint32_t)(0x11a6c6cc), (EAX));
  /* 11a6330a jne 0x11a63319 */
  if (!C.zf) goto L_11a63319;
  /* 11a6330c push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11a63311 call 0x11a64c1f */
  push32(0x11a63316u); f_11a64c1f();
  /* 11a63316 pop ecx */
  ECX = (pop32());
  /* 11a63317 jmp 0x11a63323 */
  goto L_11a63323;
L_11a63319:;
  /* 11a63319 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6331c jne 0x11a63336 */
  if (!C.zf) goto L_11a63336;
  /* 11a6331e call 0x11a65766 */
  push32(0x11a63323u); f_11a65766();
L_11a63323:;
  /* 11a63323 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a63325 jne 0x11a63336 */
  if (!C.zf) goto L_11a63336;
  /* 11a63327 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a6332d call dword ptr [0x11a68070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68070))), 0x11a63333u);
L_11a63333:;
  /* 11a63333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a63335 ret  */
  ESPCHK(0x11a632ddu, _esp0);
  ESP += 4; return;
L_11a63336:;
  /* 11a63336 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a63338 pop eax */
  EAX = (pop32());
  /* 11a63339 ret  */
  ESPCHK(0x11a632ddu, _esp0);
  ESP += 4; return;
}

/* FUN_1000333a @ 0x11a6333a (168 bytes, 56 insns) */
void f_11a6333a(void) {
  FTRACE(0x11a6333au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a6333a mov eax, dword ptr [0x11a6c6cc] */
  EAX = (r32((uint32_t)(0x11a6c6cc)));
  /* 11a6333f push esi */
  push32((uint32_t)(ESI));
  /* 11a63340 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63343 push edi */
  push32((uint32_t)(EDI));
  /* 11a63344 jne 0x11a633ac */
  if (!C.zf) goto L_11a633ac;
  /* 11a63346 push ebx */
  push32((uint32_t)(EBX));
  /* 11a63347 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a63349 cmp dword ptr [0x11a6c48c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a6c48c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6334f push ebp */
  push32((uint32_t)(EBP));
  /* 11a63350 mov ebp, dword ptr [0x11a68064] */
  EBP = (r32((uint32_t)(0x11a68064)));
  /* 11a63356 jle 0x11a63398 */
  if ((C.zf||C.sf!=C.of)) goto L_11a63398;
  /* 11a63358 mov eax, dword ptr [0x11a6c490] */
  EAX = (r32((uint32_t)(0x11a6c490)));
  /* 11a6335d mov edi, dword ptr [0x11a68068] */
  EDI = (r32((uint32_t)(0x11a68068)));
  /* 11a63363 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11a63366:;
  /* 11a63366 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a6336b push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11a63370 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a63372 call edi */
  call_ind((uint32_t)(EDI), 0x11a63374u);
  /* 11a63374 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a63379 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a6337b push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a6337d call edi */
  call_ind((uint32_t)(EDI), 0x11a6337fu);
  /* 11a6337f push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11a63382 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a63384 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a6338a call ebp */
  call_ind((uint32_t)(EBP), 0x11a6338cu);
  /* 11a6338c add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6338f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a63390 cmp ebx, dword ptr [0x11a6c48c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a6c48c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63396 jl 0x11a63366 */
  if ((C.sf!=C.of)) goto L_11a63366;
L_11a63398:;
  /* 11a63398 push dword ptr [0x11a6c490] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c490))));
  /* 11a6339e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a633a0 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a633a6 call ebp */
  call_ind((uint32_t)(EBP), 0x11a633a8u);
  /* 11a633a8 pop ebp */
  EBP = (pop32());
  /* 11a633a9 pop ebx */
  EBX = (pop32());
  /* 11a633aa jmp 0x11a633d3 */
  goto L_11a633d3;
L_11a633ac:;
  /* 11a633ac cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a633af jne 0x11a633d3 */
  if (!C.zf) goto L_11a633d3;
  /* 11a633b1 mov edi, 0x11a697f0 */
  EDI = (0x11a697f0u);
  /* 11a633b6 mov esi, edi */
  ESI = (EDI);
L_11a633b8:;
  /* 11a633b8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a633bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a633bd je 0x11a633cd */
  if (C.zf) goto L_11a633cd;
  /* 11a633bf push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a633c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a633c6 push eax */
  push32((uint32_t)(EAX));
  /* 11a633c7 call dword ptr [0x11a68068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68068))), 0x11a633cdu);
L_11a633cd:;
  /* 11a633cd mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11a633cf cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a633d1 jne 0x11a633b8 */
  if (!C.zf) goto L_11a633b8;
L_11a633d3:;
  /* 11a633d3 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a633d9 call dword ptr [0x11a68070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68070))), 0x11a633dfu);
  /* 11a633df pop edi */
  EDI = (pop32());
  /* 11a633e0 pop esi */
  ESI = (pop32());
  /* 11a633e1 ret  */
  ESPCHK(0x11a6333au, _esp0);
  ESP += 4; return;
}

/* FUN_100033e2 @ 0x11a633e2 (57 bytes, 18 insns) */
void f_11a633e2(void) {
  FTRACE(0x11a633e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a633e2 mov eax, dword ptr [0x11a6c12c] */
  EAX = (r32((uint32_t)(0x11a6c12c)));
  /* 11a633e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a633ea je 0x11a633f9 */
  if (C.zf) goto L_11a633f9;
  /* 11a633ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a633ee jne 0x11a6341a */
  if (!C.zf) goto L_11a6341a;
  /* 11a633f0 cmp dword ptr [0x11a6c130], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c130))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a633f7 jne 0x11a6341a */
  if (!C.zf) goto L_11a6341a;
L_11a633f9:;
  /* 11a633f9 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11a633fe call 0x11a6341b */
  push32(0x11a63403u); f_11a6341b();
  /* 11a63403 mov eax, dword ptr [0x11a6c280] */
  EAX = (r32((uint32_t)(0x11a6c280)));
  /* 11a63408 pop ecx */
  ECX = (pop32());
  /* 11a63409 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6340b je 0x11a6340f */
  if (C.zf) goto L_11a6340f;
  /* 11a6340d call eax */
  call_ind((uint32_t)(EAX), 0x11a6340fu);
L_11a6340f:;
  /* 11a6340f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11a63414 call 0x11a6341b */
  push32(0x11a63419u); f_11a6341b();
  /* 11a63419 pop ecx */
  ECX = (pop32());
L_11a6341a:;
  /* 11a6341a ret  */
  ESPCHK(0x11a633e2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000341b @ 0x11a6341b (339 bytes, 100 insns) */
void f_11a6341b(void) {
  FTRACE(0x11a6341bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a6341b push ebp */
  push32((uint32_t)(EBP));
  /* 11a6341c mov ebp, esp */
  EBP = (ESP);
  /* 11a6341e sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a63424 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a63427 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a63429 mov eax, 0x11a693f8 */
  EAX = (0x11a693f8u);
L_11a6342e:;
  /* 11a6342e cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63430 je 0x11a6343d */
  if (C.zf) goto L_11a6343d;
  /* 11a63432 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63435 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a63436 cmp eax, 0x11a69488 */
  { uint32_t _a=(EAX),_b=(0x11a69488u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6343b jl 0x11a6342e */
  if ((C.sf!=C.of)) goto L_11a6342e;
L_11a6343d:;
  /* 11a6343d push esi */
  push32((uint32_t)(ESI));
  /* 11a6343e mov esi, ecx */
  ESI = (ECX);
  /* 11a63440 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11a63443 cmp edx, dword ptr [esi + 0x11a693f8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11a693f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63449 jne 0x11a6356b */
  if (!C.zf) goto L_11a6356b;
  /* 11a6344f mov eax, dword ptr [0x11a6c12c] */
  EAX = (r32((uint32_t)(0x11a6c12c)));
  /* 11a63454 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63457 je 0x11a63545 */
  if (C.zf) goto L_11a63545;
  /* 11a6345d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6345f jne 0x11a6346e */
  if (!C.zf) goto L_11a6346e;
  /* 11a63461 cmp dword ptr [0x11a6c130], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c130))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63468 je 0x11a63545 */
  if (C.zf) goto L_11a63545;
L_11a6346e:;
  /* 11a6346e cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63474 je 0x11a6356b */
  if (C.zf) goto L_11a6356b;
  /* 11a6347a lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a63480 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a63485 push eax */
  push32((uint32_t)(EAX));
  /* 11a63486 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a63488 call dword ptr [0x11a680c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680c4))), 0x11a6348eu);
  /* 11a6348e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a63490 jne 0x11a634a5 */
  if (!C.zf) goto L_11a634a5;
  /* 11a63492 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a63498 push 0x11a68490 */
  push32((uint32_t)(0x11a68490u));
  /* 11a6349d push eax */
  push32((uint32_t)(EAX));
  /* 11a6349e call 0x11a63fa0 */
  push32(0x11a634a3u); f_11a63fa0();
  /* 11a634a3 pop ecx */
  ECX = (pop32());
  /* 11a634a4 pop ecx */
  ECX = (pop32());
L_11a634a5:;
  /* 11a634a5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a634ab push edi */
  push32((uint32_t)(EDI));
  /* 11a634ac push eax */
  push32((uint32_t)(EAX));
  /* 11a634ad lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11a634b3 call 0x11a64090 */
  push32(0x11a634b8u); f_11a64090();
  /* 11a634b8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a634b9 pop ecx */
  ECX = (pop32());
  /* 11a634ba cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a634bd jbe 0x11a634e8 */
  if ((C.cf||C.zf)) goto L_11a634e8;
  /* 11a634bf lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a634c5 push eax */
  push32((uint32_t)(EAX));
  /* 11a634c6 call 0x11a64090 */
  push32(0x11a634cbu); f_11a64090();
  /* 11a634cb mov edi, eax */
  EDI = (EAX);
  /* 11a634cd lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a634d3 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a634d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a634d8 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a634da push 0x11a6848c */
  push32((uint32_t)(0x11a6848cu));
  /* 11a634df push edi */
  push32((uint32_t)(EDI));
  /* 11a634e0 call 0x11a65ec0 */
  push32(0x11a634e5u); f_11a65ec0();
  /* 11a634e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a634e8:;
  /* 11a634e8 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a634ee push 0x11a68470 */
  push32((uint32_t)(0x11a68470u));
  /* 11a634f3 push eax */
  push32((uint32_t)(EAX));
  /* 11a634f4 call 0x11a63fa0 */
  push32(0x11a634f9u); f_11a63fa0();
  /* 11a634f9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a634ff push edi */
  push32((uint32_t)(EDI));
  /* 11a63500 push eax */
  push32((uint32_t)(EAX));
  /* 11a63501 call 0x11a63fb0 */
  push32(0x11a63506u); f_11a63fb0();
  /* 11a63506 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a6350c push 0x11a6846c */
  push32((uint32_t)(0x11a6846cu));
  /* 11a63511 push eax */
  push32((uint32_t)(EAX));
  /* 11a63512 call 0x11a63fb0 */
  push32(0x11a63517u); f_11a63fb0();
  /* 11a63517 push dword ptr [esi + 0x11a693fc] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11a693fc))));
  /* 11a6351d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a63523 push eax */
  push32((uint32_t)(EAX));
  /* 11a63524 call 0x11a63fb0 */
  push32(0x11a63529u); f_11a63fb0();
  /* 11a63529 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11a6352e lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a63534 push 0x11a68444 */
  push32((uint32_t)(0x11a68444u));
  /* 11a63539 push eax */
  push32((uint32_t)(EAX));
  /* 11a6353a call 0x11a65e33 */
  push32(0x11a6353fu); f_11a65e33();
  /* 11a6353f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63542 pop edi */
  EDI = (pop32());
  /* 11a63543 jmp 0x11a6356b */
  goto L_11a6356b;
L_11a63545:;
  /* 11a63545 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a63548 lea esi, [esi + 0x11a693fc] */
  ESI = ((uint32_t)(ESI + 0x11a693fc));
  /* 11a6354e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a63550 push eax */
  push32((uint32_t)(EAX));
  /* 11a63551 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a63553 call 0x11a64090 */
  push32(0x11a63558u); f_11a64090();
  /* 11a63558 pop ecx */
  ECX = (pop32());
  /* 11a63559 push eax */
  push32((uint32_t)(EAX));
  /* 11a6355a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a6355c push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11a6355e call dword ptr [0x11a680b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680b4))), 0x11a63564u);
  /* 11a63564 push eax */
  push32((uint32_t)(EAX));
  /* 11a63565 call dword ptr [0x11a68060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68060))), 0x11a6356bu);
L_11a6356b:;
  /* 11a6356b pop esi */
  ESI = (pop32());
  /* 11a6356c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a6356d ret  */
  ESPCHK(0x11a6341bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000356e @ 0x11a6356e (289 bytes, 98 insns) */
void f_11a6356e(void) {
  FTRACE(0x11a6356eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a6356e push ebp */
  push32((uint32_t)(EBP));
  /* 11a6356f mov ebp, esp */
  EBP = (ESP);
  /* 11a63571 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a63573 push 0x11a684a8 */
  push32((uint32_t)(0x11a684a8u));
  /* 11a63578 push 0x11a66130 */
  push32((uint32_t)(0x11a66130u));
  /* 11a6357d mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a63583 push eax */
  push32((uint32_t)(EAX));
  /* 11a63584 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a6358b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6358e push ebx */
  push32((uint32_t)(EBX));
  /* 11a6358f push esi */
  push32((uint32_t)(ESI));
  /* 11a63590 push edi */
  push32((uint32_t)(EDI));
  /* 11a63591 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a63594 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63598 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11a6359b mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11a6359e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a635a1 ja 0x11a635b7 */
  if ((!C.cf&&!C.zf)) goto L_11a635b7;
  /* 11a635a3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a635a5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a635a7 jne 0x11a635ac */
  if (!C.zf) goto L_11a635ac;
  /* 11a635a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a635ab pop esi */
  ESI = (pop32());
L_11a635ac:;
  /* 11a635ac add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a635af and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11a635b2 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11a635b5 jmp 0x11a635b9 */
  goto L_11a635b9;
L_11a635b7:;
  /* 11a635b7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a635b9:;
  /* 11a635b9 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11a635bc cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a635bf ja 0x11a6366d */
  if ((!C.cf&&!C.zf)) goto L_11a6366d;
  /* 11a635c5 mov eax, dword ptr [0x11a6c6cc] */
  EAX = (r32((uint32_t)(0x11a6c6cc)));
  /* 11a635ca cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a635cd jne 0x11a63610 */
  if (!C.zf) goto L_11a63610;
  /* 11a635cf mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a635d2 cmp edi, dword ptr [0x11a6c494] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11a6c494))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a635d8 ja 0x11a63656 */
  if ((!C.cf&&!C.zf)) goto L_11a63656;
  /* 11a635da push 9 */
  push32((uint32_t)(0x9u));
  /* 11a635dc call 0x11a63740 */
  push32(0x11a635e1u); f_11a63740();
  /* 11a635e1 pop ecx */
  ECX = (pop32());
  /* 11a635e2 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11a635e5 push edi */
  push32((uint32_t)(EDI));
  /* 11a635e6 call 0x11a64fbb */
  push32(0x11a635ebu); f_11a64fbb();
  /* 11a635eb pop ecx */
  ECX = (pop32());
  /* 11a635ec mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a635ef or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a635f3 call 0x11a63607 */
  push32(0x11a635f8u); f_11a63607();
  /* 11a635f8 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a635fb je 0x11a6365b */
  if (C.zf) goto L_11a6365b;
  /* 11a635fd push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11a63600 jmp 0x11a6364a */
  goto L_11a6364a;
  /* 11a63602 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a63604 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a63607 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a63609 call 0x11a637a1 */
  push32(0x11a6360eu); f_11a637a1();
  /* 11a6360e pop ecx */
  ECX = (pop32());
  /* 11a6360f ret  */
  ESPCHK(0x11a6356eu, _esp0);
  ESP += 4; return;
L_11a63610:;
  /* 11a63610 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63613 jne 0x11a63656 */
  if (!C.zf) goto L_11a63656;
  /* 11a63615 cmp esi, dword ptr [0x11a6b814] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a6b814))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6361b ja 0x11a63656 */
  if ((!C.cf&&!C.zf)) goto L_11a63656;
  /* 11a6361d push 9 */
  push32((uint32_t)(0x9u));
  /* 11a6361f call 0x11a63740 */
  push32(0x11a63624u); f_11a63740();
  /* 11a63624 pop ecx */
  ECX = (pop32());
  /* 11a63625 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a6362c mov eax, esi */
  EAX = (ESI);
  /* 11a6362e shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a63631 push eax */
  push32((uint32_t)(EAX));
  /* 11a63632 call 0x11a65a5e */
  push32(0x11a63637u); f_11a65a5e();
  /* 11a63637 pop ecx */
  ECX = (pop32());
  /* 11a63638 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a6363b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a6363f call 0x11a63690 */
  push32(0x11a63644u); f_11a63690();
  /* 11a63644 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63647 je 0x11a6365b */
  if (C.zf) goto L_11a6365b;
  /* 11a63649 push esi */
  push32((uint32_t)(ESI));
L_11a6364a:;
  /* 11a6364a push ebx */
  push32((uint32_t)(EBX));
  /* 11a6364b push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11a6364e call 0x11a65fe0 */
  push32(0x11a63653u); f_11a65fe0();
  /* 11a63653 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a63656:;
  /* 11a63656 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63659 jne 0x11a63699 */
  if (!C.zf) { jmp_ind(0x11a63699u); return; }
L_11a6365b:;
  /* 11a6365b push esi */
  push32((uint32_t)(ESI));
  /* 11a6365c push 8 */
  push32((uint32_t)(0x8u));
  /* 11a6365e push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a63664 call dword ptr [0x11a6805c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6805c))), 0x11a6366au);
  /* 11a6366a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11a6366d:;
  /* 11a6366d cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63670 jne 0x11a63699 */
  if (!C.zf) { jmp_ind(0x11a63699u); return; }
  /* 11a63672 cmp dword ptr [0x11a6c3bc], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a6c3bc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63678 je 0x11a63699 */
  if (C.zf) { jmp_ind(0x11a63699u); return; }
  /* 11a6367a push esi */
  push32((uint32_t)(ESI));
  /* 11a6367b call 0x11a65fbe */
  push32(0x11a63680u); f_11a65fbe();
  /* 11a63680 pop ecx */
  ECX = (pop32());
  /* 11a63681 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a63683 jne 0x11a635b9 */
  if (!C.zf) goto L_11a635b9;
  /* 11a63689 jmp 0x11a6369c */
  jmp_ind(0x11a6369cu); return;
  /* 11a6368b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10003607 @ 0x11a63607 (9 bytes, 4 insns) */
void f_11a63607(void) {
  FTRACE(0x11a63607u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63607 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a63609 call 0x11a637a1 */
  push32(0x11a6360eu); f_11a637a1();
  /* 11a6360e pop ecx */
  ECX = (pop32());
  /* 11a6360f ret  */
  ESPCHK(0x11a63607u, _esp0);
  ESP += 4; return;
}

/* FUN_10003690 @ 0x11a63690 (9 bytes, 4 insns) */
void f_11a63690(void) {
  FTRACE(0x11a63690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63690 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a63692 call 0x11a637a1 */
  push32(0x11a63697u); f_11a637a1();
  /* 11a63697 pop ecx */
  ECX = (pop32());
  /* 11a63698 ret  */
  ESPCHK(0x11a63690u, _esp0);
  ESP += 4; return;
}

/* FUN_100036ab @ 0x11a636ab (41 bytes, 12 insns) */
void f_11a636ab(void) {
  FTRACE(0x11a636abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a636ab push esi */
  push32((uint32_t)(ESI));
  /* 11a636ac mov esi, dword ptr [0x11a68058] */
  ESI = (r32((uint32_t)(0x11a68058)));
  /* 11a636b2 push dword ptr [0x11a694cc] */
  push32((uint32_t)(r32((uint32_t)(0x11a694cc))));
  /* 11a636b8 call esi */
  call_ind((uint32_t)(ESI), 0x11a636bau);
  /* 11a636ba push dword ptr [0x11a694bc] */
  push32((uint32_t)(r32((uint32_t)(0x11a694bc))));
  /* 11a636c0 call esi */
  call_ind((uint32_t)(ESI), 0x11a636c2u);
  /* 11a636c2 push dword ptr [0x11a694ac] */
  push32((uint32_t)(r32((uint32_t)(0x11a694ac))));
  /* 11a636c8 call esi */
  call_ind((uint32_t)(ESI), 0x11a636cau);
  /* 11a636ca push dword ptr [0x11a6948c] */
  push32((uint32_t)(r32((uint32_t)(0x11a6948c))));
  /* 11a636d0 call esi */
  call_ind((uint32_t)(ESI), 0x11a636d2u);
  /* 11a636d2 pop esi */
  ESI = (pop32());
  /* 11a636d3 ret  */
  ESPCHK(0x11a636abu, _esp0);
  ESP += 4; return;
}

/* FUN_100036d4 @ 0x11a636d4 (108 bytes, 34 insns) */
void f_11a636d4(void) {
  FTRACE(0x11a636d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a636d4 push esi */
  push32((uint32_t)(ESI));
  /* 11a636d5 push edi */
  push32((uint32_t)(EDI));
  /* 11a636d6 mov edi, dword ptr [0x11a680c0] */
  EDI = (r32((uint32_t)(0x11a680c0)));
  /* 11a636dc mov esi, 0x11a69488 */
  ESI = (0x11a69488u);
L_11a636e1:;
  /* 11a636e1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a636e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a636e5 je 0x11a63712 */
  if (C.zf) goto L_11a63712;
  /* 11a636e7 cmp esi, 0x11a694cc */
  { uint32_t _a=(ESI),_b=(0x11a694ccu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a636ed je 0x11a63712 */
  if (C.zf) goto L_11a63712;
  /* 11a636ef cmp esi, 0x11a694bc */
  { uint32_t _a=(ESI),_b=(0x11a694bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a636f5 je 0x11a63712 */
  if (C.zf) goto L_11a63712;
  /* 11a636f7 cmp esi, 0x11a694ac */
  { uint32_t _a=(ESI),_b=(0x11a694acu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a636fd je 0x11a63712 */
  if (C.zf) goto L_11a63712;
  /* 11a636ff cmp esi, 0x11a6948c */
  { uint32_t _a=(ESI),_b=(0x11a6948cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63705 je 0x11a63712 */
  if (C.zf) goto L_11a63712;
  /* 11a63707 push eax */
  push32((uint32_t)(EAX));
  /* 11a63708 call edi */
  call_ind((uint32_t)(EDI), 0x11a6370au);
  /* 11a6370a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a6370c call 0x11a637b6 */
  push32(0x11a63711u); f_11a637b6();
  /* 11a63711 pop ecx */
  ECX = (pop32());
L_11a63712:;
  /* 11a63712 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63715 cmp esi, 0x11a69548 */
  { uint32_t _a=(ESI),_b=(0x11a69548u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6371b jl 0x11a636e1 */
  if ((C.sf!=C.of)) goto L_11a636e1;
  /* 11a6371d push dword ptr [0x11a694ac] */
  push32((uint32_t)(r32((uint32_t)(0x11a694ac))));
  /* 11a63723 call edi */
  call_ind((uint32_t)(EDI), 0x11a63725u);
  /* 11a63725 push dword ptr [0x11a694bc] */
  push32((uint32_t)(r32((uint32_t)(0x11a694bc))));
  /* 11a6372b call edi */
  call_ind((uint32_t)(EDI), 0x11a6372du);
  /* 11a6372d push dword ptr [0x11a694cc] */
  push32((uint32_t)(r32((uint32_t)(0x11a694cc))));
  /* 11a63733 call edi */
  call_ind((uint32_t)(EDI), 0x11a63735u);
  /* 11a63735 push dword ptr [0x11a6948c] */
  push32((uint32_t)(r32((uint32_t)(0x11a6948c))));
  /* 11a6373b call edi */
  call_ind((uint32_t)(EDI), 0x11a6373du);
  /* 11a6373d pop edi */
  EDI = (pop32());
  /* 11a6373e pop esi */
  ESI = (pop32());
  /* 11a6373f ret  */
  ESPCHK(0x11a636d4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003740 @ 0x11a63740 (97 bytes, 37 insns) */
void f_11a63740(void) {
  FTRACE(0x11a63740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63740 push ebp */
  push32((uint32_t)(EBP));
  /* 11a63741 mov ebp, esp */
  EBP = (ESP);
  /* 11a63743 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a63746 push esi */
  push32((uint32_t)(ESI));
  /* 11a63747 cmp dword ptr [eax*4 + 0x11a69488], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11a69488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6374f lea esi, [eax*4 + 0x11a69488] */
  ESI = ((uint32_t)(EAX*4 + 0x11a69488));
  /* 11a63756 jne 0x11a63796 */
  if (!C.zf) goto L_11a63796;
  /* 11a63758 push edi */
  push32((uint32_t)(EDI));
  /* 11a63759 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a6375b call 0x11a63e61 */
  push32(0x11a63760u); f_11a63e61();
  /* 11a63760 mov edi, eax */
  EDI = (EAX);
  /* 11a63762 pop ecx */
  ECX = (pop32());
  /* 11a63763 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a63765 jne 0x11a6376f */
  if (!C.zf) goto L_11a6376f;
  /* 11a63767 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a63769 call 0x11a62781 */
  push32(0x11a6376eu); f_11a62781();
  /* 11a6376e pop ecx */
  ECX = (pop32());
L_11a6376f:;
  /* 11a6376f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a63771 call 0x11a63740 */
  push32(0x11a63776u); f_11a63740();
  /* 11a63776 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63779 pop ecx */
  ECX = (pop32());
  /* 11a6377a push edi */
  push32((uint32_t)(EDI));
  /* 11a6377b jne 0x11a63787 */
  if (!C.zf) goto L_11a63787;
  /* 11a6377d call dword ptr [0x11a68058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68058))), 0x11a63783u);
  /* 11a63783 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a63785 jmp 0x11a6378d */
  goto L_11a6378d;
L_11a63787:;
  /* 11a63787 call 0x11a637b6 */
  push32(0x11a6378cu); f_11a637b6();
  /* 11a6378c pop ecx */
  ECX = (pop32());
L_11a6378d:;
  /* 11a6378d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a6378f call 0x11a637a1 */
  push32(0x11a63794u); f_11a637a1();
  /* 11a63794 pop ecx */
  ECX = (pop32());
  /* 11a63795 pop edi */
  EDI = (pop32());
L_11a63796:;
  /* 11a63796 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a63798 call dword ptr [0x11a68054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68054))), 0x11a6379eu);
  /* 11a6379e pop esi */
  ESI = (pop32());
  /* 11a6379f pop ebp */
  EBP = (pop32());
  /* 11a637a0 ret  */
  ESPCHK(0x11a63740u, _esp0);
  ESP += 4; return;
}

/* FUN_100037a1 @ 0x11a637a1 (21 bytes, 7 insns) */
void f_11a637a1(void) {
  FTRACE(0x11a637a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a637a1 push ebp */
  push32((uint32_t)(EBP));
  /* 11a637a2 mov ebp, esp */
  EBP = (ESP);
  /* 11a637a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a637a7 push dword ptr [eax*4 + 0x11a69488] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11a69488))));
  /* 11a637ae call dword ptr [0x11a68050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68050))), 0x11a637b4u);
  /* 11a637b4 pop ebp */
  EBP = (pop32());
  /* 11a637b5 ret  */
  ESPCHK(0x11a637a1u, _esp0);
  ESP += 4; return;
}

/* FUN_100037b6 @ 0x11a637b6 (215 bytes, 75 insns) */
void f_11a637b6(void) {
  FTRACE(0x11a637b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a637b6 push ebp */
  push32((uint32_t)(EBP));
  /* 11a637b7 mov ebp, esp */
  EBP = (ESP);
  /* 11a637b9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a637bb push 0x11a684c0 */
  push32((uint32_t)(0x11a684c0u));
  /* 11a637c0 push 0x11a66130 */
  push32((uint32_t)(0x11a66130u));
  /* 11a637c5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a637cb push eax */
  push32((uint32_t)(EAX));
  /* 11a637cc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a637d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a637d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a637d7 push esi */
  push32((uint32_t)(ESI));
  /* 11a637d8 push edi */
  push32((uint32_t)(EDI));
  /* 11a637d9 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a637dc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a637de je 0x11a63890 */
  if (C.zf) { jmp_ind(0x11a63890u); return; }
  /* 11a637e4 mov eax, dword ptr [0x11a6c6cc] */
  EAX = (r32((uint32_t)(0x11a6c6cc)));
  /* 11a637e9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a637ec jne 0x11a63829 */
  if (!C.zf) goto L_11a63829;
  /* 11a637ee push 9 */
  push32((uint32_t)(0x9u));
  /* 11a637f0 call 0x11a63740 */
  push32(0x11a637f5u); f_11a63740();
  /* 11a637f5 pop ecx */
  ECX = (pop32());
  /* 11a637f6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a637fa push esi */
  push32((uint32_t)(ESI));
  /* 11a637fb call 0x11a64c67 */
  push32(0x11a63800u); f_11a64c67();
  /* 11a63800 pop ecx */
  ECX = (pop32());
  /* 11a63801 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a63804 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a63806 je 0x11a63811 */
  if (C.zf) goto L_11a63811;
  /* 11a63808 push esi */
  push32((uint32_t)(ESI));
  /* 11a63809 push eax */
  push32((uint32_t)(EAX));
  /* 11a6380a call 0x11a64c92 */
  push32(0x11a6380fu); f_11a64c92();
  /* 11a6380f pop ecx */
  ECX = (pop32());
  /* 11a63810 pop ecx */
  ECX = (pop32());
L_11a63811:;
  /* 11a63811 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a63815 call 0x11a63820 */
  push32(0x11a6381au); f_11a63820();
  /* 11a6381a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6381e jmp 0x11a63871 */
  goto L_11a63871;
  /* 11a63820 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a63822 call 0x11a637a1 */
  push32(0x11a63827u); f_11a637a1();
  /* 11a63827 pop ecx */
  ECX = (pop32());
  /* 11a63828 ret  */
  ESPCHK(0x11a637b6u, _esp0);
  ESP += 4; return;
L_11a63829:;
  /* 11a63829 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6382c jne 0x11a63881 */
  if (!C.zf) goto L_11a63881;
  /* 11a6382e push 9 */
  push32((uint32_t)(0x9u));
  /* 11a63830 call 0x11a63740 */
  push32(0x11a63835u); f_11a63740();
  /* 11a63835 pop ecx */
  ECX = (pop32());
  /* 11a63836 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a6383d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11a63840 push eax */
  push32((uint32_t)(EAX));
  /* 11a63841 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11a63844 push eax */
  push32((uint32_t)(EAX));
  /* 11a63845 push esi */
  push32((uint32_t)(ESI));
  /* 11a63846 call 0x11a659c2 */
  push32(0x11a6384bu); f_11a659c2();
  /* 11a6384b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6384e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a63851 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a63853 je 0x11a63864 */
  if (C.zf) goto L_11a63864;
  /* 11a63855 push eax */
  push32((uint32_t)(EAX));
  /* 11a63856 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11a63859 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11a6385c call 0x11a65a19 */
  push32(0x11a63861u); f_11a65a19();
  /* 11a63861 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a63864:;
  /* 11a63864 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a63868 call 0x11a63878 */
  push32(0x11a6386du); f_11a63878();
  /* 11a6386d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a63871:;
  /* 11a63871 jne 0x11a63890 */
  if (!C.zf) { jmp_ind(0x11a63890u); return; }
  /* 11a63873 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a63876 jmp 0x11a63882 */
  goto L_11a63882;
  /* 11a63878 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a6387a call 0x11a637a1 */
  push32(0x11a6387fu); f_11a637a1();
  /* 11a6387f pop ecx */
  ECX = (pop32());
  /* 11a63880 ret  */
  ESPCHK(0x11a637b6u, _esp0);
  ESP += 4; return;
L_11a63881:;
  /* 11a63881 push esi */
  push32((uint32_t)(ESI));
L_11a63882:;
  /* 11a63882 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a63884 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
}

/* FUN_10003820 @ 0x11a63820 (9 bytes, 4 insns) */
void f_11a63820(void) {
  FTRACE(0x11a63820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63820 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a63822 call 0x11a637a1 */
  push32(0x11a63827u); f_11a637a1();
  /* 11a63827 pop ecx */
  ECX = (pop32());
  /* 11a63828 ret  */
  ESPCHK(0x11a63820u, _esp0);
  ESP += 4; return;
}

/* FUN_10003878 @ 0x11a63878 (9 bytes, 4 insns) */
void f_11a63878(void) {
  FTRACE(0x11a63878u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63878 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a6387a call 0x11a637a1 */
  push32(0x11a6387fu); f_11a637a1();
  /* 11a6387f pop ecx */
  ECX = (pop32());
  /* 11a63880 ret  */
  ESPCHK(0x11a63878u, _esp0);
  ESP += 4; return;
}

/* FUN_1000389f @ 0x11a6389f (46 bytes, 13 insns) */
void f_11a6389f(void) {
  FTRACE(0x11a6389fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a6389f cmp dword ptr [0x11a6c3a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c3a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a638a6 jne 0x11a638cc */
  if (!C.zf) goto L_11a638cc;
  /* 11a638a8 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a638aa call 0x11a63740 */
  push32(0x11a638afu); f_11a63740();
  /* 11a638af cmp dword ptr [0x11a6c3a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c3a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a638b6 pop ecx */
  ECX = (pop32());
  /* 11a638b7 jne 0x11a638c4 */
  if (!C.zf) goto L_11a638c4;
  /* 11a638b9 call 0x11a638cd */
  push32(0x11a638beu); f_11a638cd();
  /* 11a638be inc dword ptr [0x11a6c3a0] */
  { uint32_t _r=(r32((uint32_t)(0x11a6c3a0)))+1; w32((uint32_t)(0x11a6c3a0), (_r)); fl_inc(_r,32); }
L_11a638c4:;
  /* 11a638c4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a638c6 call 0x11a637a1 */
  push32(0x11a638cbu); f_11a637a1();
  /* 11a638cb pop ecx */
  ECX = (pop32());
L_11a638cc:;
  /* 11a638cc ret  */
  ESPCHK(0x11a6389fu, _esp0);
  ESP += 4; return;
}

/* FUN_100038cd @ 0x11a638cd (647 bytes, 207 insns) */
void f_11a638cd(void) {
  FTRACE(0x11a638cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a638cd push ebp */
  push32((uint32_t)(EBP));
  /* 11a638ce mov ebp, esp */
  EBP = (ESP);
  /* 11a638d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a638d1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a638d2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a638d3 push esi */
  push32((uint32_t)(ESI));
  /* 11a638d4 push edi */
  push32((uint32_t)(EDI));
  /* 11a638d5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a638d7 pop edi */
  EDI = (pop32());
  /* 11a638d8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a638da push edi */
  push32((uint32_t)(EDI));
  /* 11a638db mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11a638de call 0x11a63740 */
  push32(0x11a638e3u); f_11a63740();
  /* 11a638e3 or dword ptr [0x11a69678], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11a69678)))|(0xffffffffu); w32((uint32_t)(0x11a69678), (_r)); fl_logic(_r,32); }
  /* 11a638ea or dword ptr [0x11a69668], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11a69668)))|(0xffffffffu); w32((uint32_t)(0x11a69668), (_r)); fl_logic(_r,32); }
  /* 11a638f1 mov dword ptr [0x11a6c2e8], ebx */
  w32((uint32_t)(0x11a6c2e8), (EBX));
  /* 11a638f7 mov dword ptr [esp], 0x11a68518 */
  w32((uint32_t)(ESP), (0x11a68518u));
  /* 11a638fe call 0x11a66324 */
  push32(0x11a63903u); f_11a66324();
  /* 11a63903 mov esi, eax */
  ESI = (EAX);
  /* 11a63905 pop ecx */
  ECX = (pop32());
  /* 11a63906 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63908 jne 0x11a63a0b */
  if (!C.zf) goto L_11a63a0b;
  /* 11a6390e push edi */
  push32((uint32_t)(EDI));
  /* 11a6390f call 0x11a637a1 */
  push32(0x11a63914u); f_11a637a1();
  /* 11a63914 mov dword ptr [esp], 0x11a6c2f0 */
  w32((uint32_t)(ESP), (0x11a6c2f0u));
  /* 11a6391b call dword ptr [0x11a68074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68074))), 0x11a63921u);
  /* 11a63921 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63924 je 0x11a63b4f */
  if (C.zf) goto L_11a63b4f;
  /* 11a6392a mov eax, dword ptr [0x11a6c2f0] */
  EAX = (r32((uint32_t)(0x11a6c2f0)));
  /* 11a6392f mov ecx, dword ptr [0x11a6c344] */
  ECX = (r32((uint32_t)(0x11a6c344)));
  /* 11a63935 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63938 cmp word ptr [0x11a6c336], bx */
  { uint32_t _a=(r16((uint32_t)(0x11a6c336))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a6393f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a63941 pop edx */
  EDX = (pop32());
  /* 11a63942 mov dword ptr [0x11a695d0], eax */
  w32((uint32_t)(0x11a695d0), (EAX));
  /* 11a63947 mov dword ptr [0x11a6c2e8], edx */
  w32((uint32_t)(0x11a6c2e8), (EDX));
  /* 11a6394d je 0x11a6395b */
  if (C.zf) goto L_11a6395b;
  /* 11a6394f mov esi, ecx */
  ESI = (ECX);
  /* 11a63951 imul esi, esi, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(0x3cu); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63954 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63956 mov dword ptr [0x11a695d0], eax */
  w32((uint32_t)(0x11a695d0), (EAX));
L_11a6395b:;
  /* 11a6395b cmp word ptr [0x11a6c38a], bx */
  { uint32_t _a=(r16((uint32_t)(0x11a6c38a))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a63962 je 0x11a6397f */
  if (C.zf) goto L_11a6397f;
  /* 11a63964 mov eax, dword ptr [0x11a6c398] */
  EAX = (r32((uint32_t)(0x11a6c398)));
  /* 11a63969 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6396b je 0x11a6397f */
  if (C.zf) goto L_11a6397f;
  /* 11a6396d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6396f mov dword ptr [0x11a695d4], edx */
  w32((uint32_t)(0x11a695d4), (EDX));
  /* 11a63975 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63978 mov dword ptr [0x11a695d8], eax */
  w32((uint32_t)(0x11a695d8), (EAX));
  /* 11a6397d jmp 0x11a6398b */
  goto L_11a6398b;
L_11a6397f:;
  /* 11a6397f mov dword ptr [0x11a695d4], ebx */
  w32((uint32_t)(0x11a695d4), (EBX));
  /* 11a63985 mov dword ptr [0x11a695d8], ebx */
  w32((uint32_t)(0x11a695d8), (EBX));
L_11a6398b:;
  /* 11a6398b lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a6398e mov esi, dword ptr [0x11a680d0] */
  ESI = (r32((uint32_t)(0x11a680d0)));
  /* 11a63994 push eax */
  push32((uint32_t)(EAX));
  /* 11a63995 push ebx */
  push32((uint32_t)(EBX));
  /* 11a63996 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a63998 mov edi, 0x220 */
  EDI = (0x220u);
  /* 11a6399d push dword ptr [0x11a6965c] */
  push32((uint32_t)(r32((uint32_t)(0x11a6965c))));
  /* 11a639a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a639a5 push 0x11a6c2f4 */
  push32((uint32_t)(0x11a6c2f4u));
  /* 11a639aa push edi */
  push32((uint32_t)(EDI));
  /* 11a639ab push dword ptr [0x11a6c3d8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c3d8))));
  /* 11a639b1 call esi */
  call_ind((uint32_t)(ESI), 0x11a639b3u);
  /* 11a639b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a639b5 je 0x11a639c7 */
  if (C.zf) goto L_11a639c7;
  /* 11a639b7 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a639ba jne 0x11a639c7 */
  if (!C.zf) goto L_11a639c7;
  /* 11a639bc mov eax, dword ptr [0x11a6965c] */
  EAX = (r32((uint32_t)(0x11a6965c)));
  /* 11a639c1 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11a639c5 jmp 0x11a639cf */
  goto L_11a639cf;
L_11a639c7:;
  /* 11a639c7 mov eax, dword ptr [0x11a6965c] */
  EAX = (r32((uint32_t)(0x11a6965c)));
  /* 11a639cc and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
L_11a639cf:;
  /* 11a639cf lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a639d2 push eax */
  push32((uint32_t)(EAX));
  /* 11a639d3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a639d4 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a639d6 push dword ptr [0x11a69660] */
  push32((uint32_t)(r32((uint32_t)(0x11a69660))));
  /* 11a639dc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a639de push 0x11a6c348 */
  push32((uint32_t)(0x11a6c348u));
  /* 11a639e3 push edi */
  push32((uint32_t)(EDI));
  /* 11a639e4 push dword ptr [0x11a6c3d8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c3d8))));
  /* 11a639ea call esi */
  call_ind((uint32_t)(ESI), 0x11a639ecu);
  /* 11a639ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a639ee je 0x11a63b3e */
  if (C.zf) goto L_11a63b3e;
  /* 11a639f4 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a639f7 jne 0x11a63b3e */
  if (!C.zf) goto L_11a63b3e;
  /* 11a639fd mov eax, dword ptr [0x11a69660] */
  EAX = (r32((uint32_t)(0x11a69660)));
  /* 11a63a02 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11a63a06 jmp 0x11a63b4f */
  goto L_11a63b4f;
L_11a63a0b:;
  /* 11a63a0b cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63a0e je 0x11a63b48 */
  if (C.zf) goto L_11a63b48;
  /* 11a63a14 mov eax, dword ptr [0x11a6c39c] */
  EAX = (r32((uint32_t)(0x11a6c39c)));
  /* 11a63a19 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63a1b je 0x11a63a2e */
  if (C.zf) goto L_11a63a2e;
  /* 11a63a1d push eax */
  push32((uint32_t)(EAX));
  /* 11a63a1e push esi */
  push32((uint32_t)(ESI));
  /* 11a63a1f call 0x11a662a0 */
  push32(0x11a63a24u); f_11a662a0();
  /* 11a63a24 pop ecx */
  ECX = (pop32());
  /* 11a63a25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a63a27 pop ecx */
  ECX = (pop32());
  /* 11a63a28 je 0x11a63b48 */
  if (C.zf) goto L_11a63b48;
L_11a63a2e:;
  /* 11a63a2e push dword ptr [0x11a6c39c] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c39c))));
  /* 11a63a34 call 0x11a637b6 */
  push32(0x11a63a39u); f_11a637b6();
  /* 11a63a39 push esi */
  push32((uint32_t)(ESI));
  /* 11a63a3a call 0x11a64090 */
  push32(0x11a63a3fu); f_11a64090();
  /* 11a63a3f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a63a40 push eax */
  push32((uint32_t)(EAX));
  /* 11a63a41 call 0x11a63e61 */
  push32(0x11a63a46u); f_11a63e61();
  /* 11a63a46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63a49 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63a4b mov dword ptr [0x11a6c39c], eax */
  w32((uint32_t)(0x11a6c39c), (EAX));
  /* 11a63a50 je 0x11a63b48 */
  if (C.zf) goto L_11a63b48;
  /* 11a63a56 push esi */
  push32((uint32_t)(ESI));
  /* 11a63a57 push eax */
  push32((uint32_t)(EAX));
  /* 11a63a58 call 0x11a63fa0 */
  push32(0x11a63a5du); f_11a63fa0();
  /* 11a63a5d push edi */
  push32((uint32_t)(EDI));
  /* 11a63a5e call 0x11a637a1 */
  push32(0x11a63a63u); f_11a637a1();
  /* 11a63a63 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a63a65 push esi */
  push32((uint32_t)(ESI));
  /* 11a63a66 push dword ptr [0x11a6965c] */
  push32((uint32_t)(r32((uint32_t)(0x11a6965c))));
  /* 11a63a6c call 0x11a65ec0 */
  push32(0x11a63a71u); f_11a65ec0();
  /* 11a63a71 mov eax, dword ptr [0x11a6965c] */
  EAX = (r32((uint32_t)(0x11a6965c)));
  /* 11a63a76 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63a79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63a7c and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11a63a80 cmp byte ptr [esi], 0x2d */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63a83 jne 0x11a63a8d */
  if (!C.zf) goto L_11a63a8d;
  /* 11a63a85 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11a63a8c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a63a8d:;
  /* 11a63a8d push esi */
  push32((uint32_t)(ESI));
  /* 11a63a8e call 0x11a66208 */
  push32(0x11a63a93u); f_11a66208();
  /* 11a63a93 pop ecx */
  ECX = (pop32());
  /* 11a63a94 mov bl, 0x30 */
  BL = (0x30u);
  /* 11a63a96 mov ecx, eax */
  ECX = (EAX);
  /* 11a63a98 imul ecx, ecx, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xe10u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63a9e mov dword ptr [0x11a695d0], ecx */
  w32((uint32_t)(0x11a695d0), (ECX));
L_11a63aa4:;
  /* 11a63aa4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a63aa6 cmp al, 0x2b */
  { uint32_t _a=(AL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63aa8 je 0x11a63ab2 */
  if (C.zf) goto L_11a63ab2;
  /* 11a63aaa cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63aac jl 0x11a63ab5 */
  if ((C.sf!=C.of)) goto L_11a63ab5;
  /* 11a63aae cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63ab0 jg 0x11a63ab5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a63ab5;
L_11a63ab2:;
  /* 11a63ab2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a63ab3 jmp 0x11a63aa4 */
  goto L_11a63aa4;
L_11a63ab5:;
  /* 11a63ab5 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63ab8 jne 0x11a63b08 */
  if (!C.zf) goto L_11a63b08;
  /* 11a63aba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a63abb push esi */
  push32((uint32_t)(ESI));
  /* 11a63abc call 0x11a66208 */
  push32(0x11a63ac1u); f_11a66208();
  /* 11a63ac1 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63ac4 pop ecx */
  ECX = (pop32());
  /* 11a63ac5 mov ecx, dword ptr [0x11a695d0] */
  ECX = (r32((uint32_t)(0x11a695d0)));
  /* 11a63acb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63acd mov dword ptr [0x11a695d0], ecx */
  w32((uint32_t)(0x11a695d0), (ECX));
L_11a63ad3:;
  /* 11a63ad3 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a63ad5 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63ad7 jl 0x11a63ae0 */
  if ((C.sf!=C.of)) goto L_11a63ae0;
  /* 11a63ad9 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63adb jg 0x11a63ae0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a63ae0;
  /* 11a63add inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a63ade jmp 0x11a63ad3 */
  goto L_11a63ad3;
L_11a63ae0:;
  /* 11a63ae0 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63ae3 jne 0x11a63b08 */
  if (!C.zf) goto L_11a63b08;
  /* 11a63ae5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a63ae6 push esi */
  push32((uint32_t)(ESI));
  /* 11a63ae7 call 0x11a66208 */
  push32(0x11a63aecu); f_11a66208();
  /* 11a63aec pop ecx */
  ECX = (pop32());
  /* 11a63aed mov ecx, dword ptr [0x11a695d0] */
  ECX = (r32((uint32_t)(0x11a695d0)));
  /* 11a63af3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63af5 mov dword ptr [0x11a695d0], ecx */
  w32((uint32_t)(0x11a695d0), (ECX));
L_11a63afb:;
  /* 11a63afb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a63afd cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63aff jl 0x11a63b08 */
  if ((C.sf!=C.of)) goto L_11a63b08;
  /* 11a63b01 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a63b03 jg 0x11a63b08 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a63b08;
  /* 11a63b05 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a63b06 jmp 0x11a63afb */
  goto L_11a63afb;
L_11a63b08:;
  /* 11a63b08 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63b0c je 0x11a63b16 */
  if (C.zf) goto L_11a63b16;
  /* 11a63b0e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a63b10 mov dword ptr [0x11a695d0], ecx */
  w32((uint32_t)(0x11a695d0), (ECX));
L_11a63b16:;
  /* 11a63b16 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11a63b19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a63b1b mov dword ptr [0x11a695d4], eax */
  w32((uint32_t)(0x11a695d4), (EAX));
  /* 11a63b20 je 0x11a63b3e */
  if (C.zf) goto L_11a63b3e;
  /* 11a63b22 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a63b24 push esi */
  push32((uint32_t)(ESI));
  /* 11a63b25 push dword ptr [0x11a69660] */
  push32((uint32_t)(r32((uint32_t)(0x11a69660))));
  /* 11a63b2b call 0x11a65ec0 */
  push32(0x11a63b30u); f_11a65ec0();
  /* 11a63b30 mov eax, dword ptr [0x11a69660] */
  EAX = (r32((uint32_t)(0x11a69660)));
  /* 11a63b35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63b38 and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11a63b3c jmp 0x11a63b4f */
  goto L_11a63b4f;
L_11a63b3e:;
  /* 11a63b3e mov eax, dword ptr [0x11a69660] */
  EAX = (r32((uint32_t)(0x11a69660)));
  /* 11a63b43 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11a63b46 jmp 0x11a63b4f */
  goto L_11a63b4f;
L_11a63b48:;
  /* 11a63b48 push edi */
  push32((uint32_t)(EDI));
  /* 11a63b49 call 0x11a637a1 */
  push32(0x11a63b4eu); f_11a637a1();
  /* 11a63b4e pop ecx */
  ECX = (pop32());
L_11a63b4f:;
  /* 11a63b4f pop edi */
  EDI = (pop32());
  /* 11a63b50 pop esi */
  ESI = (pop32());
  /* 11a63b51 pop ebx */
  EBX = (pop32());
  /* 11a63b52 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a63b53 ret  */
  ESPCHK(0x11a638cdu, _esp0);
  ESP += 4; return;
}

/* FUN_10003b54 @ 0x11a63b54 (33 bytes, 12 insns) */
void f_11a63b54(void) {
  FTRACE(0x11a63b54u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63b54 push esi */
  push32((uint32_t)(ESI));
  /* 11a63b55 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a63b57 call 0x11a63740 */
  push32(0x11a63b5cu); f_11a63740();
  /* 11a63b5c push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a63b60 call 0x11a63b75 */
  push32(0x11a63b65u); f_11a63b75();
  /* 11a63b65 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a63b67 mov esi, eax */
  ESI = (EAX);
  /* 11a63b69 call 0x11a637a1 */
  push32(0x11a63b6eu); f_11a637a1();
  /* 11a63b6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63b71 mov eax, esi */
  EAX = (ESI);
  /* 11a63b73 pop esi */
  ESI = (pop32());
  /* 11a63b74 ret  */
  ESPCHK(0x11a63b54u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b75 @ 0x11a63b75 (428 bytes, 149 insns) */
void f_11a63b75(void) {
  FTRACE(0x11a63b75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63b75 push ebx */
  push32((uint32_t)(EBX));
  /* 11a63b76 push esi */
  push32((uint32_t)(ESI));
  /* 11a63b77 push edi */
  push32((uint32_t)(EDI));
  /* 11a63b78 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a63b7a cmp dword ptr [0x11a695d4], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a695d4))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63b80 jne 0x11a63b89 */
  if (!C.zf) goto L_11a63b89;
L_11a63b82:;
  /* 11a63b82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a63b84 jmp 0x11a63cd5 */
  goto L_11a63cd5;
L_11a63b89:;
  /* 11a63b89 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a63b8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a63b8f pop ebx */
  EBX = (pop32());
  /* 11a63b90 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11a63b93 cmp eax, dword ptr [0x11a69668] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a69668))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63b99 jne 0x11a63ba7 */
  if (!C.zf) goto L_11a63ba7;
  /* 11a63b9b cmp eax, dword ptr [0x11a69678] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a69678))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63ba1 je 0x11a63ca9 */
  if (C.zf) goto L_11a63ca9;
L_11a63ba7:;
  /* 11a63ba7 cmp dword ptr [0x11a6c2e8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a6c2e8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63bad je 0x11a63c7f */
  if (C.zf) goto L_11a63c7f;
  /* 11a63bb3 movzx ecx, word ptr [0x11a6c396] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11a6c396))));
  /* 11a63bba push ecx */
  push32((uint32_t)(ECX));
  /* 11a63bbb cmp word ptr [0x11a6c388], di */
  { uint32_t _a=(r16((uint32_t)(0x11a6c388))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a63bc2 movzx ecx, word ptr [0x11a6c394] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11a6c394))));
  /* 11a63bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a63bca movzx ecx, word ptr [0x11a6c392] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11a6c392))));
  /* 11a63bd1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a63bd2 movzx ecx, word ptr [0x11a6c390] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11a6c390))));
  /* 11a63bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a63bda jne 0x11a63bf9 */
  if (!C.zf) goto L_11a63bf9;
  /* 11a63bdc movzx ecx, word ptr [0x11a6c38c] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11a6c38c))));
  /* 11a63be3 push edi */
  push32((uint32_t)(EDI));
  /* 11a63be4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a63be5 movzx ecx, word ptr [0x11a6c38e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11a6c38e))));
  /* 11a63bec push ecx */
  push32((uint32_t)(ECX));
  /* 11a63bed movzx ecx, word ptr [0x11a6c38a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11a6c38a))));
  /* 11a63bf4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a63bf5 push eax */
  push32((uint32_t)(EAX));
  /* 11a63bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a63bf7 jmp 0x11a63c0d */
  goto L_11a63c0d;
L_11a63bf9:;
  /* 11a63bf9 movzx ecx, word ptr [0x11a6c38e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11a6c38e))));
  /* 11a63c00 push ecx */
  push32((uint32_t)(ECX));
  /* 11a63c01 push edi */
  push32((uint32_t)(EDI));
  /* 11a63c02 movzx ecx, word ptr [0x11a6c38a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11a6c38a))));
  /* 11a63c09 push edi */
  push32((uint32_t)(EDI));
  /* 11a63c0a push ecx */
  push32((uint32_t)(ECX));
  /* 11a63c0b push eax */
  push32((uint32_t)(EAX));
  /* 11a63c0c push edi */
  push32((uint32_t)(EDI));
L_11a63c0d:;
  /* 11a63c0d push ebx */
  push32((uint32_t)(EBX));
  /* 11a63c0e call 0x11a63d21 */
  push32(0x11a63c13u); f_11a63d21();
  /* 11a63c13 movzx eax, word ptr [0x11a6c342] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11a6c342))));
  /* 11a63c1a add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63c1d cmp word ptr [0x11a6c334], di */
  { uint32_t _a=(r16((uint32_t)(0x11a6c334))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a63c24 push eax */
  push32((uint32_t)(EAX));
  /* 11a63c25 movzx eax, word ptr [0x11a6c340] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11a6c340))));
  /* 11a63c2c push eax */
  push32((uint32_t)(EAX));
  /* 11a63c2d movzx eax, word ptr [0x11a6c33e] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11a6c33e))));
  /* 11a63c34 push eax */
  push32((uint32_t)(EAX));
  /* 11a63c35 movzx eax, word ptr [0x11a6c33c] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11a6c33c))));
  /* 11a63c3c push eax */
  push32((uint32_t)(EAX));
  /* 11a63c3d jne 0x11a63c67 */
  if (!C.zf) goto L_11a63c67;
  /* 11a63c3f movzx eax, word ptr [0x11a6c338] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11a6c338))));
  /* 11a63c46 push edi */
  push32((uint32_t)(EDI));
  /* 11a63c47 push eax */
  push32((uint32_t)(EAX));
  /* 11a63c48 movzx eax, word ptr [0x11a6c33a] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11a6c33a))));
  /* 11a63c4f push eax */
  push32((uint32_t)(EAX));
  /* 11a63c50 movzx eax, word ptr [0x11a6c336] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11a6c336))));
  /* 11a63c57 push eax */
  push32((uint32_t)(EAX));
  /* 11a63c58 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11a63c5b push ebx */
  push32((uint32_t)(EBX));
L_11a63c5c:;
  /* 11a63c5c push edi */
  push32((uint32_t)(EDI));
  /* 11a63c5d call 0x11a63d21 */
  push32(0x11a63c62u); f_11a63d21();
  /* 11a63c62 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63c65 jmp 0x11a63ca9 */
  goto L_11a63ca9;
L_11a63c67:;
  /* 11a63c67 movzx eax, word ptr [0x11a6c33a] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11a6c33a))));
  /* 11a63c6e push eax */
  push32((uint32_t)(EAX));
  /* 11a63c6f push edi */
  push32((uint32_t)(EDI));
  /* 11a63c70 movzx eax, word ptr [0x11a6c336] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11a6c336))));
  /* 11a63c77 push edi */
  push32((uint32_t)(EDI));
  /* 11a63c78 push eax */
  push32((uint32_t)(EAX));
  /* 11a63c79 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11a63c7c push edi */
  push32((uint32_t)(EDI));
  /* 11a63c7d jmp 0x11a63c5c */
  goto L_11a63c5c;
L_11a63c7f:;
  /* 11a63c7f push edi */
  push32((uint32_t)(EDI));
  /* 11a63c80 push edi */
  push32((uint32_t)(EDI));
  /* 11a63c81 push edi */
  push32((uint32_t)(EDI));
  /* 11a63c82 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a63c84 push edi */
  push32((uint32_t)(EDI));
  /* 11a63c85 push edi */
  push32((uint32_t)(EDI));
  /* 11a63c86 push ebx */
  push32((uint32_t)(EBX));
  /* 11a63c87 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a63c89 push eax */
  push32((uint32_t)(EAX));
  /* 11a63c8a push ebx */
  push32((uint32_t)(EBX));
  /* 11a63c8b push ebx */
  push32((uint32_t)(EBX));
  /* 11a63c8c call 0x11a63d21 */
  push32(0x11a63c91u); f_11a63d21();
  /* 11a63c91 push edi */
  push32((uint32_t)(EDI));
  /* 11a63c92 push edi */
  push32((uint32_t)(EDI));
  /* 11a63c93 push edi */
  push32((uint32_t)(EDI));
  /* 11a63c94 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a63c96 push edi */
  push32((uint32_t)(EDI));
  /* 11a63c97 push edi */
  push32((uint32_t)(EDI));
  /* 11a63c98 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a63c9a push 0xa */
  push32((uint32_t)(0xau));
  /* 11a63c9c push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11a63c9f push ebx */
  push32((uint32_t)(EBX));
  /* 11a63ca0 push edi */
  push32((uint32_t)(EDI));
  /* 11a63ca1 call 0x11a63d21 */
  push32(0x11a63ca6u); f_11a63d21();
  /* 11a63ca6 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a63ca9:;
  /* 11a63ca9 mov edx, dword ptr [0x11a6966c] */
  EDX = (r32((uint32_t)(0x11a6966c)));
  /* 11a63caf mov eax, dword ptr [0x11a6967c] */
  EAX = (r32((uint32_t)(0x11a6967c)));
  /* 11a63cb4 mov ecx, dword ptr [esi + 0x1c] */
  ECX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11a63cb7 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63cb9 jge 0x11a63cd9 */
  if ((C.sf==C.of)) goto L_11a63cd9;
  /* 11a63cbb cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63cbd jl 0x11a63b82 */
  if ((C.sf!=C.of)) goto L_11a63b82;
  /* 11a63cc3 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63cc5 jg 0x11a63b82 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a63b82;
  /* 11a63ccb cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63ccd jle 0x11a63ced */
  if ((C.zf||C.sf!=C.of)) goto L_11a63ced;
  /* 11a63ccf cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63cd1 jge 0x11a63ced */
  if ((C.sf==C.of)) goto L_11a63ced;
L_11a63cd3:;
  /* 11a63cd3 mov eax, ebx */
  EAX = (EBX);
L_11a63cd5:;
  /* 11a63cd5 pop edi */
  EDI = (pop32());
  /* 11a63cd6 pop esi */
  ESI = (pop32());
  /* 11a63cd7 pop ebx */
  EBX = (pop32());
  /* 11a63cd8 ret  */
  ESPCHK(0x11a63b75u, _esp0);
  ESP += 4; return;
L_11a63cd9:;
  /* 11a63cd9 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63cdb jl 0x11a63cd3 */
  if ((C.sf!=C.of)) goto L_11a63cd3;
  /* 11a63cdd cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63cdf jg 0x11a63cd3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a63cd3;
  /* 11a63ce1 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63ce3 jle 0x11a63ced */
  if ((C.zf||C.sf!=C.of)) goto L_11a63ced;
  /* 11a63ce5 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63ce7 jl 0x11a63b82 */
  if ((C.sf!=C.of)) goto L_11a63b82;
L_11a63ced:;
  /* 11a63ced mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11a63cf0 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63cf3 add eax, dword ptr [esi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63cf6 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63cf9 add eax, dword ptr [esi] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63cfb imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63d01 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63d03 jne 0x11a63d14 */
  if (!C.zf) goto L_11a63d14;
  /* 11a63d05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a63d07 cmp eax, dword ptr [0x11a69670] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a69670))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63d0d setge cl */
  CL = (((C.sf==C.of)) ? 1u : 0u);
L_11a63d10:;
  /* 11a63d10 mov eax, ecx */
  EAX = (ECX);
  /* 11a63d12 jmp 0x11a63cd5 */
  goto L_11a63cd5;
L_11a63d14:;
  /* 11a63d14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a63d16 cmp eax, dword ptr [0x11a69680] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a69680))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63d1c setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11a63d1f jmp 0x11a63d10 */
  goto L_11a63d10;
}

/* FUN_10003d21 @ 0x11a63d21 (320 bytes, 101 insns) */
void f_11a63d21(void) {
  FTRACE(0x11a63d21u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63d21 push ebp */
  push32((uint32_t)(EBP));
  /* 11a63d22 mov ebp, esp */
  EBP = (ESP);
  /* 11a63d24 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63d28 push ebx */
  push32((uint32_t)(EBX));
  /* 11a63d29 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a63d2c push esi */
  push32((uint32_t)(ESI));
  /* 11a63d2d jne 0x11a63dbc */
  if (!C.zf) goto L_11a63dbc;
  /* 11a63d33 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a63d36 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11a63d39 and dword ptr [ebp + 0x10], 3 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))&(0x3u); w32((uint32_t)(EBP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11a63d3d mov esi, eax */
  ESI = (EAX);
  /* 11a63d3f jne 0x11a63d4c */
  if (!C.zf) goto L_11a63d4c;
  /* 11a63d41 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a63d44 mov eax, dword ptr [esi + 0x11a69680] */
  EAX = (r32((uint32_t)(ESI + 0x11a69680)));
  /* 11a63d4a jmp 0x11a63d55 */
  goto L_11a63d55;
L_11a63d4c:;
  /* 11a63d4c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a63d4f mov eax, dword ptr [esi + 0x11a696b4] */
  EAX = (r32((uint32_t)(ESI + 0x11a696b4)));
L_11a63d55:;
  /* 11a63d55 mov edx, ebx */
  EDX = (EBX);
  /* 11a63d57 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11a63d5a imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63d60 lea eax, [ebx - 1] */
  EAX = ((uint32_t)(EBX + -0x1));
  /* 11a63d63 push edi */
  push32((uint32_t)(EDI));
  /* 11a63d64 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a63d67 mov edi, ecx */
  EDI = (ECX);
  /* 11a63d69 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a63d6b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63d6d lea eax, [edx + edi - 0x63db] */
  EAX = ((uint32_t)(EDX + EDI*1 + -0x63db));
  /* 11a63d74 pop edi */
  EDI = (pop32());
  /* 11a63d75 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a63d76 idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a63d78 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a63d7b pop edi */
  EDI = (pop32());
  /* 11a63d7c cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63d7f jg 0x11a63d8f */
  if ((!C.zf&&C.sf==C.of)) goto L_11a63d8f;
  /* 11a63d81 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63d84 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a63d86 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63d89 lea ecx, [ecx + eax - 7] */
  ECX = ((uint32_t)(ECX + EAX*1 + -0x7));
  /* 11a63d8d jmp 0x11a63d99 */
  goto L_11a63d99;
L_11a63d8f:;
  /* 11a63d8f imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63d92 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a63d94 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63d97 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11a63d99:;
  /* 11a63d99 cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63d9d jne 0x11a63dd7 */
  if (!C.zf) goto L_11a63dd7;
  /* 11a63d9f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63da3 jne 0x11a63dad */
  if (!C.zf) goto L_11a63dad;
  /* 11a63da5 mov esi, dword ptr [esi + 0x11a69684] */
  ESI = (r32((uint32_t)(ESI + 0x11a69684)));
  /* 11a63dab jmp 0x11a63db3 */
  goto L_11a63db3;
L_11a63dad:;
  /* 11a63dad mov esi, dword ptr [esi + 0x11a696b8] */
  ESI = (r32((uint32_t)(ESI + 0x11a696b8)));
L_11a63db3:;
  /* 11a63db3 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63db5 jle 0x11a63dd7 */
  if ((C.zf||C.sf!=C.of)) goto L_11a63dd7;
  /* 11a63db7 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a63dba jmp 0x11a63dd7 */
  goto L_11a63dd7;
L_11a63dbc:;
  /* 11a63dbc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a63dbf test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11a63dc2 jne 0x11a63dcd */
  if (!C.zf) goto L_11a63dcd;
  /* 11a63dc4 mov ecx, dword ptr [eax*4 + 0x11a69680] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11a69680)));
  /* 11a63dcb jmp 0x11a63dd4 */
  goto L_11a63dd4;
L_11a63dcd:;
  /* 11a63dcd mov ecx, dword ptr [eax*4 + 0x11a696b4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11a696b4)));
L_11a63dd4:;
  /* 11a63dd4 add ecx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11a63dd7:;
  /* 11a63dd7 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63ddb jne 0x11a63e08 */
  if (!C.zf) goto L_11a63e08;
  /* 11a63ddd mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11a63de0 mov dword ptr [0x11a6966c], ecx */
  w32((uint32_t)(0x11a6966c), (ECX));
  /* 11a63de6 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63de9 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63dec mov dword ptr [0x11a69668], ebx */
  w32((uint32_t)(0x11a69668), (EBX));
  /* 11a63df2 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63df5 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63df8 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63dfe add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63e01 mov dword ptr [0x11a69670], eax */
  w32((uint32_t)(0x11a69670), (EAX));
  /* 11a63e06 jmp 0x11a63e5d */
  goto L_11a63e5d;
L_11a63e08:;
  /* 11a63e08 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11a63e0b mov dword ptr [0x11a6967c], ecx */
  w32((uint32_t)(0x11a6967c), (ECX));
  /* 11a63e11 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63e14 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63e17 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63e1a add eax, dword ptr [0x11a695d8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a695d8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63e20 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63e23 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a63e29 add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63e2c mov dword ptr [0x11a69680], eax */
  w32((uint32_t)(0x11a69680), (EAX));
  /* 11a63e31 jns 0x11a63e40 */
  if (!C.sf) goto L_11a63e40;
  /* 11a63e33 add eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63e38 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a63e39 mov dword ptr [0x11a69680], eax */
  w32((uint32_t)(0x11a69680), (EAX));
  /* 11a63e3e jmp 0x11a63e51 */
  goto L_11a63e51;
L_11a63e40:;
  /* 11a63e40 mov edx, 0x5265c00 */
  EDX = (0x5265c00u);
  /* 11a63e45 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63e47 jl 0x11a63e57 */
  if ((C.sf!=C.of)) goto L_11a63e57;
  /* 11a63e49 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a63e4b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a63e4c mov dword ptr [0x11a69680], eax */
  w32((uint32_t)(0x11a69680), (EAX));
L_11a63e51:;
  /* 11a63e51 mov dword ptr [0x11a6967c], ecx */
  w32((uint32_t)(0x11a6967c), (ECX));
L_11a63e57:;
  /* 11a63e57 mov dword ptr [0x11a69678], ebx */
  w32((uint32_t)(0x11a69678), (EBX));
L_11a63e5d:;
  /* 11a63e5d pop esi */
  ESI = (pop32());
  /* 11a63e5e pop ebx */
  EBX = (pop32());
  /* 11a63e5f pop ebp */
  EBP = (pop32());
  /* 11a63e60 ret  */
  ESPCHK(0x11a63d21u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11a63e61 (18 bytes, 6 insns) */
void f_11a63e61(void) {
  FTRACE(0x11a63e61u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63e61 push dword ptr [0x11a6c3bc] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c3bc))));
  /* 11a63e67 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a63e6b call 0x11a63e73 */
  push32(0x11a63e70u); f_11a63e73();
  /* 11a63e70 pop ecx */
  ECX = (pop32());
  /* 11a63e71 pop ecx */
  ECX = (pop32());
  /* 11a63e72 ret  */
  ESPCHK(0x11a63e61u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11a63e73 (44 bytes, 16 insns) */
void f_11a63e73(void) {
  FTRACE(0x11a63e73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63e73 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63e78 ja 0x11a63e9c */
  if ((!C.cf&&!C.zf)) goto L_11a63e9c;
L_11a63e7a:;
  /* 11a63e7a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a63e7e call 0x11a63e9f */
  push32(0x11a63e83u); f_11a63e9f();
  /* 11a63e83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a63e85 pop ecx */
  ECX = (pop32());
  /* 11a63e86 jne 0x11a63e9e */
  if (!C.zf) goto L_11a63e9e;
  /* 11a63e88 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63e8c je 0x11a63e9e */
  if (C.zf) goto L_11a63e9e;
  /* 11a63e8e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a63e92 call 0x11a65fbe */
  push32(0x11a63e97u); f_11a65fbe();
  /* 11a63e97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a63e99 pop ecx */
  ECX = (pop32());
  /* 11a63e9a jne 0x11a63e7a */
  if (!C.zf) goto L_11a63e7a;
L_11a63e9c:;
  /* 11a63e9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a63e9e:;
  /* 11a63e9e ret  */
  ESPCHK(0x11a63e73u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e9f @ 0x11a63e9f (231 bytes, 81 insns) */
void f_11a63e9f(void) {
  FTRACE(0x11a63e9fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63e9f push ebp */
  push32((uint32_t)(EBP));
  /* 11a63ea0 mov ebp, esp */
  EBP = (ESP);
  /* 11a63ea2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a63ea4 push 0x11a68520 */
  push32((uint32_t)(0x11a68520u));
  /* 11a63ea9 push 0x11a66130 */
  push32((uint32_t)(0x11a66130u));
  /* 11a63eae mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a63eb4 push eax */
  push32((uint32_t)(EAX));
  /* 11a63eb5 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a63ebc sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a63ebf push ebx */
  push32((uint32_t)(EBX));
  /* 11a63ec0 push esi */
  push32((uint32_t)(ESI));
  /* 11a63ec1 push edi */
  push32((uint32_t)(EDI));
  /* 11a63ec2 mov eax, dword ptr [0x11a6c6cc] */
  EAX = (r32((uint32_t)(0x11a6c6cc)));
  /* 11a63ec7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63eca jne 0x11a63f0f */
  if (!C.zf) goto L_11a63f0f;
  /* 11a63ecc mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a63ecf cmp esi, dword ptr [0x11a6c494] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a6c494))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63ed5 ja 0x11a63f6e */
  if ((!C.cf&&!C.zf)) goto L_11a63f6e;
  /* 11a63edb push 9 */
  push32((uint32_t)(0x9u));
  /* 11a63edd call 0x11a63740 */
  push32(0x11a63ee2u); f_11a63740();
  /* 11a63ee2 pop ecx */
  ECX = (pop32());
  /* 11a63ee3 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a63ee7 push esi */
  push32((uint32_t)(ESI));
  /* 11a63ee8 call 0x11a64fbb */
  push32(0x11a63eedu); f_11a64fbb();
  /* 11a63eed pop ecx */
  ECX = (pop32());
  /* 11a63eee mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a63ef1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a63ef5 call 0x11a63f06 */
  push32(0x11a63efau); f_11a63f06();
  /* 11a63efa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a63efd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a63eff je 0x11a63f6e */
  if (C.zf) goto L_11a63f6e;
  /* 11a63f01 jmp 0x11a63f8c */
  jmp_ind(0x11a63f8cu); return;
  /* 11a63f06 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a63f08 call 0x11a637a1 */
  push32(0x11a63f0du); f_11a637a1();
  /* 11a63f0d pop ecx */
  ECX = (pop32());
  /* 11a63f0e ret  */
  ESPCHK(0x11a63e9fu, _esp0);
  ESP += 4; return;
L_11a63f0f:;
  /* 11a63f0f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63f12 jne 0x11a63f6e */
  if (!C.zf) goto L_11a63f6e;
  /* 11a63f14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a63f17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a63f19 je 0x11a63f23 */
  if (C.zf) goto L_11a63f23;
  /* 11a63f1b lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11a63f1e and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11a63f21 jmp 0x11a63f26 */
  goto L_11a63f26;
L_11a63f23:;
  /* 11a63f23 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a63f25 pop esi */
  ESI = (pop32());
L_11a63f26:;
  /* 11a63f26 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11a63f29 cmp esi, dword ptr [0x11a6b814] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a6b814))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a63f2f ja 0x11a63f5f */
  if ((!C.cf&&!C.zf)) goto L_11a63f5f;
  /* 11a63f31 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a63f33 call 0x11a63740 */
  push32(0x11a63f38u); f_11a63740();
  /* 11a63f38 pop ecx */
  ECX = (pop32());
  /* 11a63f39 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a63f40 mov eax, esi */
  EAX = (ESI);
  /* 11a63f42 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a63f45 push eax */
  push32((uint32_t)(EAX));
  /* 11a63f46 call 0x11a65a5e */
  push32(0x11a63f4bu); f_11a65a5e();
  /* 11a63f4b pop ecx */
  ECX = (pop32());
  /* 11a63f4c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a63f4f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a63f53 call 0x11a63f65 */
  push32(0x11a63f58u); f_11a63f65();
  /* 11a63f58 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a63f5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a63f5d jne 0x11a63f8c */
  if (!C.zf) { jmp_ind(0x11a63f8cu); return; }
L_11a63f5f:;
  /* 11a63f5f push esi */
  push32((uint32_t)(ESI));
  /* 11a63f60 jmp 0x11a63f7e */
  goto L_11a63f7e;
  /* 11a63f62 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a63f65 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a63f67 call 0x11a637a1 */
  push32(0x11a63f6cu); f_11a637a1();
  /* 11a63f6c pop ecx */
  ECX = (pop32());
  /* 11a63f6d ret  */
  ESPCHK(0x11a63e9fu, _esp0);
  ESP += 4; return;
L_11a63f6e:;
  /* 11a63f6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a63f71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a63f73 jne 0x11a63f78 */
  if (!C.zf) goto L_11a63f78;
  /* 11a63f75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a63f77 pop eax */
  EAX = (pop32());
L_11a63f78:;
  /* 11a63f78 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63f7b and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11a63f7d push eax */
  push32((uint32_t)(EAX));
L_11a63f7e:;
  /* 11a63f7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a63f80 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
}

/* FUN_10003f06 @ 0x11a63f06 (9 bytes, 4 insns) */
void f_11a63f06(void) {
  FTRACE(0x11a63f06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63f06 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a63f08 call 0x11a637a1 */
  push32(0x11a63f0du); f_11a637a1();
  /* 11a63f0d pop ecx */
  ECX = (pop32());
  /* 11a63f0e ret  */
  ESPCHK(0x11a63f06u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f65 @ 0x11a63f65 (9 bytes, 4 insns) */
void f_11a63f65(void) {
  FTRACE(0x11a63f65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63f65 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a63f67 call 0x11a637a1 */
  push32(0x11a63f6cu); f_11a637a1();
  /* 11a63f6c pop ecx */
  ECX = (pop32());
  /* 11a63f6d ret  */
  ESPCHK(0x11a63f65u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fa0 @ 0x11a63fa0 (7 bytes, 3 insns) */
void f_11a63fa0(void) {
  FTRACE(0x11a63fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63fa0 push edi */
  push32((uint32_t)(EDI));
  /* 11a63fa1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a63fa5 jmp 0x11a64011 */
  jmp_ind(0x11a64011u); return;
}

/* FUN_10003fb0 @ 0x11a63fb0 (224 bytes, 84 insns) */
void f_11a63fb0(void) {
  FTRACE(0x11a63fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a63fb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a63fb4 push edi */
  push32((uint32_t)(EDI));
  /* 11a63fb5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a63fbb je 0x11a63fcc */
  if (C.zf) goto L_11a63fcc;
L_11a63fbd:;
  /* 11a63fbd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a63fbf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a63fc0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a63fc2 je 0x11a63fff */
  if (C.zf) goto L_11a63fff;
  /* 11a63fc4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a63fca jne 0x11a63fbd */
  if (!C.zf) goto L_11a63fbd;
L_11a63fcc:;
  /* 11a63fcc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a63fce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a63fd3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63fd5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a63fd8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a63fda add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a63fdd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a63fe2 je 0x11a63fcc */
  if (C.zf) goto L_11a63fcc;
  /* 11a63fe4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a63fe7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a63fe9 je 0x11a6400e */
  if (C.zf) goto L_11a6400e;
  /* 11a63feb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a63fed je 0x11a64009 */
  if (C.zf) goto L_11a64009;
  /* 11a63fef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a63ff4 je 0x11a64004 */
  if (C.zf) goto L_11a64004;
  /* 11a63ff6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a63ffb je 0x11a63fff */
  if (C.zf) goto L_11a63fff;
  /* 11a63ffd jmp 0x11a63fcc */
  goto L_11a63fcc;
L_11a63fff:;
  /* 11a63fff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11a64002 jmp 0x11a64011 */
  goto L_11a64011;
L_11a64004:;
  /* 11a64004 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11a64007 jmp 0x11a64011 */
  goto L_11a64011;
L_11a64009:;
  /* 11a64009 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11a6400c jmp 0x11a64011 */
  goto L_11a64011;
L_11a6400e:;
  /* 11a6400e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11a64011:;
  /* 11a64011 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a64015 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a6401b je 0x11a64036 */
  if (C.zf) goto L_11a64036;
L_11a6401d:;
  /* 11a6401d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a6401f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a64020 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a64022 je 0x11a64088 */
  if (C.zf) goto L_11a64088;
  /* 11a64024 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a64026 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a64027 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a6402d jne 0x11a6401d */
  if (!C.zf) goto L_11a6401d;
  /* 11a6402f jmp 0x11a64036 */
  goto L_11a64036;
L_11a64031:;
  /* 11a64031 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a64033 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a64036:;
  /* 11a64036 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a6403b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a6403d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6403f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a64042 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a64044 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a64046 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64049 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a6404e je 0x11a64031 */
  if (C.zf) goto L_11a64031;
  /* 11a64050 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a64052 je 0x11a64088 */
  if (C.zf) goto L_11a64088;
  /* 11a64054 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a64056 je 0x11a6407f */
  if (C.zf) goto L_11a6407f;
  /* 11a64058 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a6405e je 0x11a64072 */
  if (C.zf) goto L_11a64072;
  /* 11a64060 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a64066 je 0x11a6406a */
  if (C.zf) goto L_11a6406a;
  /* 11a64068 jmp 0x11a64031 */
  goto L_11a64031;
L_11a6406a:;
  /* 11a6406a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a6406c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a64070 pop edi */
  EDI = (pop32());
  /* 11a64071 ret  */
  ESPCHK(0x11a63fb0u, _esp0);
  ESP += 4; return;
L_11a64072:;
  /* 11a64072 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11a64075 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a64079 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11a6407d pop edi */
  EDI = (pop32());
  /* 11a6407e ret  */
  ESPCHK(0x11a63fb0u, _esp0);
  ESP += 4; return;
L_11a6407f:;
  /* 11a6407f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11a64082 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a64086 pop edi */
  EDI = (pop32());
  /* 11a64087 ret  */
  ESPCHK(0x11a63fb0u, _esp0);
  ESP += 4; return;
L_11a64088:;
  /* 11a64088 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a6408a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a6408e pop edi */
  EDI = (pop32());
  /* 11a6408f ret  */
  ESPCHK(0x11a63fb0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11a64090 (123 bytes, 44 insns) */
void f_11a64090(void) {
  FTRACE(0x11a64090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a64090 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a64094 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a6409a je 0x11a640b0 */
  if (C.zf) goto L_11a640b0;
L_11a6409c:;
  /* 11a6409c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a6409e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a6409f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a640a1 je 0x11a640e3 */
  if (C.zf) goto L_11a640e3;
  /* 11a640a3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a640a9 jne 0x11a6409c */
  if (!C.zf) goto L_11a6409c;
  /* 11a640ab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a640b0:;
  /* 11a640b0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a640b2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a640b7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a640b9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a640bc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a640be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a640c1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a640c6 je 0x11a640b0 */
  if (C.zf) goto L_11a640b0;
  /* 11a640c8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a640cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a640cd je 0x11a64101 */
  if (C.zf) goto L_11a64101;
  /* 11a640cf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a640d1 je 0x11a640f7 */
  if (C.zf) goto L_11a640f7;
  /* 11a640d3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a640d8 je 0x11a640ed */
  if (C.zf) goto L_11a640ed;
  /* 11a640da test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a640df je 0x11a640e3 */
  if (C.zf) goto L_11a640e3;
  /* 11a640e1 jmp 0x11a640b0 */
  goto L_11a640b0;
L_11a640e3:;
  /* 11a640e3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11a640e6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a640ea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a640ec ret  */
  ESPCHK(0x11a64090u, _esp0);
  ESP += 4; return;
L_11a640ed:;
  /* 11a640ed lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11a640f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a640f4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a640f6 ret  */
  ESPCHK(0x11a64090u, _esp0);
  ESP += 4; return;
L_11a640f7:;
  /* 11a640f7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11a640fa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a640fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64100 ret  */
  ESPCHK(0x11a64090u, _esp0);
  ESP += 4; return;
L_11a64101:;
  /* 11a64101 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11a64104 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a64108 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6410a ret  */
  ESPCHK(0x11a64090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000410b @ 0x11a6410b (429 bytes, 143 insns) */
void f_11a6410b(void) {
  FTRACE(0x11a6410bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a6410b push ebp */
  push32((uint32_t)(EBP));
  /* 11a6410c mov ebp, esp */
  EBP = (ESP);
  /* 11a6410e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64111 push ebx */
  push32((uint32_t)(EBX));
  /* 11a64112 push esi */
  push32((uint32_t)(ESI));
  /* 11a64113 push edi */
  push32((uint32_t)(EDI));
  /* 11a64114 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a64116 call 0x11a63740 */
  push32(0x11a6411bu); f_11a63740();
  /* 11a6411b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a6411e call 0x11a642b8 */
  push32(0x11a64123u); f_11a642b8();
  /* 11a64123 mov ebx, eax */
  EBX = (EAX);
  /* 11a64125 pop ecx */
  ECX = (pop32());
  /* 11a64126 cmp ebx, dword ptr [0x11a6c498] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a6c498))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6412c pop ecx */
  ECX = (pop32());
  /* 11a6412d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a64130 jne 0x11a64139 */
  if (!C.zf) goto L_11a64139;
L_11a64132:;
  /* 11a64132 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a64134 jmp 0x11a642a9 */
  goto L_11a642a9;
L_11a64139:;
  /* 11a64139 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a6413b je 0x11a64297 */
  if (C.zf) goto L_11a64297;
  /* 11a64141 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a64143 mov eax, 0x11a696f8 */
  EAX = (0x11a696f8u);
L_11a64148:;
  /* 11a64148 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6414a je 0x11a641c0 */
  if (C.zf) goto L_11a641c0;
  /* 11a6414c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6414f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a64150 cmp eax, 0x11a697e8 */
  { uint32_t _a=(EAX),_b=(0x11a697e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64155 jl 0x11a64148 */
  if ((C.sf!=C.of)) goto L_11a64148;
  /* 11a64157 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11a6415a push eax */
  push32((uint32_t)(EAX));
  /* 11a6415b push ebx */
  push32((uint32_t)(EBX));
  /* 11a6415c call dword ptr [0x11a6804c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6804c))), 0x11a64162u);
  /* 11a64162 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a64164 pop esi */
  ESI = (pop32());
  /* 11a64165 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64167 jne 0x11a6428e */
  if (!C.zf) goto L_11a6428e;
  /* 11a6416d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a6416f and dword ptr [0x11a6c6c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a6c6c4)))&(0x0u); w32((uint32_t)(0x11a6c6c4), (_r)); fl_logic(_r,32); }
  /* 11a64176 pop ecx */
  ECX = (pop32());
  /* 11a64177 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a64179 mov edi, 0x11a6c5c0 */
  EDI = (0x11a6c5c0u);
  /* 11a6417e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64181 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a64183 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a64184 mov dword ptr [0x11a6c498], ebx */
  w32((uint32_t)(0x11a6c498), (EBX));
  /* 11a6418a jbe 0x11a6427b */
  if ((C.cf||C.zf)) goto L_11a6427b;
  /* 11a64190 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64194 je 0x11a64256 */
  if (C.zf) goto L_11a64256;
  /* 11a6419a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11a6419d:;
  /* 11a6419d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a6419f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a641a1 je 0x11a64256 */
  if (C.zf) goto L_11a64256;
  /* 11a641a7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11a641ab movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11a641ae:;
  /* 11a641ae cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a641b0 ja 0x11a6424a */
  if ((!C.cf&&!C.zf)) goto L_11a6424a;
  /* 11a641b6 or byte ptr [eax + 0x11a6c5c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a6c5c1)))|(0x4u); w8((uint32_t)(EAX + 0x11a6c5c1), (_r)); fl_logic(_r,8); }
  /* 11a641bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a641be jmp 0x11a641ae */
  goto L_11a641ae;
L_11a641c0:;
  /* 11a641c0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a641c4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a641c6 pop ecx */
  ECX = (pop32());
  /* 11a641c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a641c9 mov edi, 0x11a6c5c0 */
  EDI = (0x11a6c5c0u);
  /* 11a641ce lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11a641d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a641d3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11a641d6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a641d7 lea ebx, [esi + 0x11a69708] */
  EBX = ((uint32_t)(ESI + 0x11a69708));
L_11a641dd:;
  /* 11a641dd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a641e0 mov ecx, ebx */
  ECX = (EBX);
  /* 11a641e2 je 0x11a64210 */
  if (C.zf) goto L_11a64210;
L_11a641e4:;
  /* 11a641e4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11a641e7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a641e9 je 0x11a64210 */
  if (C.zf) goto L_11a64210;
  /* 11a641eb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11a641ee movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11a641f1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a641f3 ja 0x11a64209 */
  if ((!C.cf&&!C.zf)) goto L_11a64209;
  /* 11a641f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a641f8 mov dl, byte ptr [edx + 0x11a696f0] */
  DL = (r8((uint32_t)(EDX + 0x11a696f0)));
L_11a641fe:;
  /* 11a641fe or byte ptr [eax + 0x11a6c5c1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a6c5c1)))|(DL); w8((uint32_t)(EAX + 0x11a6c5c1), (_r)); fl_logic(_r,8); }
  /* 11a64204 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a64205 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64207 jbe 0x11a641fe */
  if ((C.cf||C.zf)) goto L_11a641fe;
L_11a64209:;
  /* 11a64209 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a6420a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a6420b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a6420e jne 0x11a641e4 */
  if (!C.zf) goto L_11a641e4;
L_11a64210:;
  /* 11a64210 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a64213 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64216 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6421a jb 0x11a641dd */
  if (C.cf) goto L_11a641dd;
  /* 11a6421c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a6421f mov dword ptr [0x11a6c4ac], 1 */
  w32((uint32_t)(0x11a6c4ac), (0x1u));
  /* 11a64229 push eax */
  push32((uint32_t)(EAX));
  /* 11a6422a mov dword ptr [0x11a6c498], eax */
  w32((uint32_t)(0x11a6c498), (EAX));
  /* 11a6422f call 0x11a64302 */
  push32(0x11a64234u); f_11a64302();
  /* 11a64234 lea esi, [esi + 0x11a696fc] */
  ESI = ((uint32_t)(ESI + 0x11a696fc));
  /* 11a6423a mov edi, 0x11a6c4a0 */
  EDI = (0x11a6c4a0u);
  /* 11a6423f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a64240 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a64241 pop ecx */
  ECX = (pop32());
  /* 11a64242 mov dword ptr [0x11a6c6c4], eax */
  w32((uint32_t)(0x11a6c6c4), (EAX));
  /* 11a64247 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a64248 jmp 0x11a6429c */
  goto L_11a6429c;
L_11a6424a:;
  /* 11a6424a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a6424b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a6424c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64250 jne 0x11a6419d */
  if (!C.zf) goto L_11a6419d;
L_11a64256:;
  /* 11a64256 mov eax, esi */
  EAX = (ESI);
L_11a64258:;
  /* 11a64258 or byte ptr [eax + 0x11a6c5c1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a6c5c1)))|(0x8u); w8((uint32_t)(EAX + 0x11a6c5c1), (_r)); fl_logic(_r,8); }
  /* 11a6425f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a64260 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64265 jb 0x11a64258 */
  if (C.cf) goto L_11a64258;
  /* 11a64267 push ebx */
  push32((uint32_t)(EBX));
  /* 11a64268 call 0x11a64302 */
  push32(0x11a6426du); f_11a64302();
  /* 11a6426d pop ecx */
  ECX = (pop32());
  /* 11a6426e mov dword ptr [0x11a6c6c4], eax */
  w32((uint32_t)(0x11a6c6c4), (EAX));
  /* 11a64273 mov dword ptr [0x11a6c4ac], esi */
  w32((uint32_t)(0x11a6c4ac), (ESI));
  /* 11a64279 jmp 0x11a64282 */
  goto L_11a64282;
L_11a6427b:;
  /* 11a6427b and dword ptr [0x11a6c4ac], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a6c4ac)))&(0x0u); w32((uint32_t)(0x11a6c4ac), (_r)); fl_logic(_r,32); }
L_11a64282:;
  /* 11a64282 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a64284 mov edi, 0x11a6c4a0 */
  EDI = (0x11a6c4a0u);
  /* 11a64289 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a6428a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a6428b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a6428c jmp 0x11a6429c */
  goto L_11a6429c;
L_11a6428e:;
  /* 11a6428e cmp dword ptr [0x11a6c3a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c3a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64295 je 0x11a642a6 */
  if (C.zf) goto L_11a642a6;
L_11a64297:;
  /* 11a64297 call 0x11a64335 */
  push32(0x11a6429cu); f_11a64335();
L_11a6429c:;
  /* 11a6429c call 0x11a6435e */
  push32(0x11a642a1u); f_11a6435e();
  /* 11a642a1 jmp 0x11a64132 */
  goto L_11a64132;
L_11a642a6:;
  /* 11a642a6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11a642a9:;
  /* 11a642a9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a642ab call 0x11a637a1 */
  push32(0x11a642b0u); f_11a637a1();
  /* 11a642b0 pop ecx */
  ECX = (pop32());
  /* 11a642b1 mov eax, esi */
  EAX = (ESI);
  /* 11a642b3 pop edi */
  EDI = (pop32());
  /* 11a642b4 pop esi */
  ESI = (pop32());
  /* 11a642b5 pop ebx */
  EBX = (pop32());
  /* 11a642b6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a642b7 ret  */
  ESPCHK(0x11a6410bu, _esp0);
  ESP += 4; return;
}

/* FUN_100042b8 @ 0x11a642b8 (74 bytes, 15 insns) */
void f_11a642b8(void) {
  FTRACE(0x11a642b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a642b8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a642bc and dword ptr [0x11a6c3a4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a6c3a4)))&(0x0u); w32((uint32_t)(0x11a6c3a4), (_r)); fl_logic(_r,32); }
  /* 11a642c3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a642c6 jne 0x11a642d8 */
  if (!C.zf) goto L_11a642d8;
  /* 11a642c8 mov dword ptr [0x11a6c3a4], 1 */
  w32((uint32_t)(0x11a6c3a4), (0x1u));
  /* 11a642d2 jmp dword ptr [0x11a68044] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a68044)))); return;
L_11a642d8:;
  /* 11a642d8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a642db jne 0x11a642ed */
  if (!C.zf) goto L_11a642ed;
  /* 11a642dd mov dword ptr [0x11a6c3a4], 1 */
  w32((uint32_t)(0x11a6c3a4), (0x1u));
  /* 11a642e7 jmp dword ptr [0x11a68048] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a68048)))); return;
L_11a642ed:;
  /* 11a642ed cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a642f0 jne 0x11a64301 */
  if (!C.zf) goto L_11a64301;
  /* 11a642f2 mov eax, dword ptr [0x11a6c3d8] */
  EAX = (r32((uint32_t)(0x11a6c3d8)));
  /* 11a642f7 mov dword ptr [0x11a6c3a4], 1 */
  w32((uint32_t)(0x11a6c3a4), (0x1u));
L_11a64301:;
  /* 11a64301 ret  */
  ESPCHK(0x11a642b8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004302 @ 0x11a64302 (51 bytes, 19 insns) */
void f_11a64302(void) {
  FTRACE(0x11a64302u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a64302 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a64306 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6430b je 0x11a6432f */
  if (C.zf) goto L_11a6432f;
  /* 11a6430d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64310 je 0x11a64329 */
  if (C.zf) goto L_11a64329;
  /* 11a64312 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64315 je 0x11a64323 */
  if (C.zf) goto L_11a64323;
  /* 11a64317 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a64318 je 0x11a6431d */
  if (C.zf) goto L_11a6431d;
  /* 11a6431a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a6431c ret  */
  ESPCHK(0x11a64302u, _esp0);
  ESP += 4; return;
L_11a6431d:;
  /* 11a6431d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11a64322 ret  */
  ESPCHK(0x11a64302u, _esp0);
  ESP += 4; return;
L_11a64323:;
  /* 11a64323 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11a64328 ret  */
  ESPCHK(0x11a64302u, _esp0);
  ESP += 4; return;
L_11a64329:;
  /* 11a64329 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11a6432e ret  */
  ESPCHK(0x11a64302u, _esp0);
  ESP += 4; return;
L_11a6432f:;
  /* 11a6432f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11a64334 ret  */
  ESPCHK(0x11a64302u, _esp0);
  ESP += 4; return;
}

/* FUN_10004335 @ 0x11a64335 (41 bytes, 17 insns) */
void f_11a64335(void) {
  FTRACE(0x11a64335u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a64335 push edi */
  push32((uint32_t)(EDI));
  /* 11a64336 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a64338 pop ecx */
  ECX = (pop32());
  /* 11a64339 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a6433b mov edi, 0x11a6c5c0 */
  EDI = (0x11a6c5c0u);
  /* 11a64340 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a64342 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a64343 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a64345 mov edi, 0x11a6c4a0 */
  EDI = (0x11a6c4a0u);
  /* 11a6434a mov dword ptr [0x11a6c498], eax */
  w32((uint32_t)(0x11a6c498), (EAX));
  /* 11a6434f mov dword ptr [0x11a6c4ac], eax */
  w32((uint32_t)(0x11a6c4ac), (EAX));
  /* 11a64354 mov dword ptr [0x11a6c6c4], eax */
  w32((uint32_t)(0x11a6c6c4), (EAX));
  /* 11a64359 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a6435a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a6435b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a6435c pop edi */
  EDI = (pop32());
  /* 11a6435d ret  */
  ESPCHK(0x11a64335u, _esp0);
  ESP += 4; return;
}

/* FUN_1000435e @ 0x11a6435e (389 bytes, 124 insns) */
void f_11a6435e(void) {
  FTRACE(0x11a6435eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a6435e push ebp */
  push32((uint32_t)(EBP));
  /* 11a6435f mov ebp, esp */
  EBP = (ESP);
  /* 11a64361 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64367 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11a6436a push esi */
  push32((uint32_t)(ESI));
  /* 11a6436b push eax */
  push32((uint32_t)(EAX));
  /* 11a6436c push dword ptr [0x11a6c498] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c498))));
  /* 11a64372 call dword ptr [0x11a6804c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6804c))), 0x11a64378u);
  /* 11a64378 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6437b jne 0x11a64497 */
  if (!C.zf) goto L_11a64497;
  /* 11a64381 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a64383 mov esi, 0x100 */
  ESI = (0x100u);
L_11a64388:;
  /* 11a64388 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11a6438f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a64390 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64392 jb 0x11a64388 */
  if (C.cf) goto L_11a64388;
  /* 11a64394 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11a64397 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11a6439e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a643a0 je 0x11a643d9 */
  if (C.zf) goto L_11a643d9;
  /* 11a643a2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a643a3 push edi */
  push32((uint32_t)(EDI));
  /* 11a643a4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11a643a7:;
  /* 11a643a7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11a643aa movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11a643ad cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a643af ja 0x11a643ce */
  if ((!C.cf&&!C.zf)) goto L_11a643ce;
  /* 11a643b1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a643b3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11a643ba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a643bb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11a643c0 mov ebx, ecx */
  EBX = (ECX);
  /* 11a643c2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a643c5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a643c7 mov ecx, ebx */
  ECX = (EBX);
  /* 11a643c9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a643cc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11a643ce:;
  /* 11a643ce inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a643cf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a643d0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11a643d3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a643d5 jne 0x11a643a7 */
  if (!C.zf) goto L_11a643a7;
  /* 11a643d7 pop edi */
  EDI = (pop32());
  /* 11a643d8 pop ebx */
  EBX = (pop32());
L_11a643d9:;
  /* 11a643d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a643db lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11a643e1 push dword ptr [0x11a6c6c4] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c4))));
  /* 11a643e7 push dword ptr [0x11a6c498] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c498))));
  /* 11a643ed push eax */
  push32((uint32_t)(EAX));
  /* 11a643ee lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a643f4 push esi */
  push32((uint32_t)(ESI));
  /* 11a643f5 push eax */
  push32((uint32_t)(EAX));
  /* 11a643f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a643f8 call 0x11a665f0 */
  push32(0x11a643fdu); f_11a665f0();
  /* 11a643fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a643ff lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11a64405 push dword ptr [0x11a6c498] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c498))));
  /* 11a6440b push esi */
  push32((uint32_t)(ESI));
  /* 11a6440c push eax */
  push32((uint32_t)(EAX));
  /* 11a6440d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a64413 push esi */
  push32((uint32_t)(ESI));
  /* 11a64414 push eax */
  push32((uint32_t)(EAX));
  /* 11a64415 push esi */
  push32((uint32_t)(ESI));
  /* 11a64416 push dword ptr [0x11a6c6c4] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c4))));
  /* 11a6441c call 0x11a663a1 */
  push32(0x11a64421u); f_11a663a1();
  /* 11a64421 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a64423 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11a64429 push dword ptr [0x11a6c498] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c498))));
  /* 11a6442f push esi */
  push32((uint32_t)(ESI));
  /* 11a64430 push eax */
  push32((uint32_t)(EAX));
  /* 11a64431 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a64437 push esi */
  push32((uint32_t)(ESI));
  /* 11a64438 push eax */
  push32((uint32_t)(EAX));
  /* 11a64439 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11a6443e push dword ptr [0x11a6c6c4] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c4))));
  /* 11a64444 call 0x11a663a1 */
  push32(0x11a64449u); f_11a663a1();
  /* 11a64449 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6444c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a6444e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11a64454:;
  /* 11a64454 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11a64457 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11a6445a je 0x11a64472 */
  if (C.zf) goto L_11a64472;
  /* 11a6445c or byte ptr [eax + 0x11a6c5c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a6c5c1)))|(0x10u); w8((uint32_t)(EAX + 0x11a6c5c1), (_r)); fl_logic(_r,8); }
  /* 11a64463 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11a6446a:;
  /* 11a6446a mov byte ptr [eax + 0x11a6c4c0], dl */
  w8((uint32_t)(EAX + 0x11a6c4c0), (DL));
  /* 11a64470 jmp 0x11a6448e */
  goto L_11a6448e;
L_11a64472:;
  /* 11a64472 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11a64475 je 0x11a64487 */
  if (C.zf) goto L_11a64487;
  /* 11a64477 or byte ptr [eax + 0x11a6c5c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a6c5c1)))|(0x20u); w8((uint32_t)(EAX + 0x11a6c5c1), (_r)); fl_logic(_r,8); }
  /* 11a6447e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11a64485 jmp 0x11a6446a */
  goto L_11a6446a;
L_11a64487:;
  /* 11a64487 and byte ptr [eax + 0x11a6c4c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a6c4c0)))&(0x0u); w8((uint32_t)(EAX + 0x11a6c4c0), (_r)); fl_logic(_r,8); }
L_11a6448e:;
  /* 11a6448e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a6448f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a64490 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a64491 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64493 jb 0x11a64454 */
  if (C.cf) goto L_11a64454;
  /* 11a64495 jmp 0x11a644e0 */
  goto L_11a644e0;
L_11a64497:;
  /* 11a64497 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a64499 mov esi, 0x100 */
  ESI = (0x100u);
L_11a6449e:;
  /* 11a6449e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a644a1 jb 0x11a644bc */
  if (C.cf) goto L_11a644bc;
  /* 11a644a3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a644a6 ja 0x11a644bc */
  if ((!C.cf&&!C.zf)) goto L_11a644bc;
  /* 11a644a8 or byte ptr [eax + 0x11a6c5c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a6c5c1)))|(0x10u); w8((uint32_t)(EAX + 0x11a6c5c1), (_r)); fl_logic(_r,8); }
  /* 11a644af mov cl, al */
  CL = (AL);
  /* 11a644b1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11a644b4:;
  /* 11a644b4 mov byte ptr [eax + 0x11a6c4c0], cl */
  w8((uint32_t)(EAX + 0x11a6c4c0), (CL));
  /* 11a644ba jmp 0x11a644db */
  goto L_11a644db;
L_11a644bc:;
  /* 11a644bc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a644bf jb 0x11a644d4 */
  if (C.cf) goto L_11a644d4;
  /* 11a644c1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a644c4 ja 0x11a644d4 */
  if ((!C.cf&&!C.zf)) goto L_11a644d4;
  /* 11a644c6 or byte ptr [eax + 0x11a6c5c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a6c5c1)))|(0x20u); w8((uint32_t)(EAX + 0x11a6c5c1), (_r)); fl_logic(_r,8); }
  /* 11a644cd mov cl, al */
  CL = (AL);
  /* 11a644cf sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a644d2 jmp 0x11a644b4 */
  goto L_11a644b4;
L_11a644d4:;
  /* 11a644d4 and byte ptr [eax + 0x11a6c4c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a6c4c0)))&(0x0u); w8((uint32_t)(EAX + 0x11a6c4c0), (_r)); fl_logic(_r,8); }
L_11a644db:;
  /* 11a644db inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a644dc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a644de jb 0x11a6449e */
  if (C.cf) goto L_11a6449e;
L_11a644e0:;
  /* 11a644e0 pop esi */
  ESI = (pop32());
  /* 11a644e1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a644e2 ret  */
  ESPCHK(0x11a6435eu, _esp0);
  ESP += 4; return;
}

/* FUN_100044e3 @ 0x11a644e3 (28 bytes, 7 insns) */
void f_11a644e3(void) {
  FTRACE(0x11a644e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a644e3 cmp dword ptr [0x11a6c7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a644ea jne 0x11a644fe */
  if (!C.zf) goto L_11a644fe;
  /* 11a644ec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11a644ee call 0x11a6410b */
  push32(0x11a644f3u); f_11a6410b();
  /* 11a644f3 pop ecx */
  ECX = (pop32());
  /* 11a644f4 mov dword ptr [0x11a6c7e8], 1 */
  w32((uint32_t)(0x11a6c7e8), (0x1u));
L_11a644fe:;
  /* 11a644fe ret  */
  ESPCHK(0x11a644e3u, _esp0);
  ESP += 4; return;
}

/* FUN_10004500 @ 0x11a64500 (664 bytes, 260 insns) [15 switch table(s)] */
void f_11a64500(void) {
  FTRACE(0x11a64500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a64500 push ebp */
  push32((uint32_t)(EBP));
  /* 11a64501 mov ebp, esp */
  EBP = (ESP);
  /* 11a64503 push edi */
  push32((uint32_t)(EDI));
  /* 11a64504 push esi */
  push32((uint32_t)(ESI));
  /* 11a64505 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a64508 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a6450b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a6450e mov eax, ecx */
  EAX = (ECX);
  /* 11a64510 mov edx, ecx */
  EDX = (ECX);
  /* 11a64512 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64514 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64516 jbe 0x11a64520 */
  if ((C.cf||C.zf)) goto L_11a64520;
  /* 11a64518 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6451a jb 0x11a64698 */
  if (C.cf) goto L_11a64698;
L_11a64520:;
  /* 11a64520 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a64526 jne 0x11a6453c */
  if (!C.zf) goto L_11a6453c;
  /* 11a64528 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a6452b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a6452e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64531 jb 0x11a6455c */
  if (C.cf) goto L_11a6455c;
  /* 11a64533 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a64535 jmp dword ptr [edx*4 + 0x11a64648] */
  switch (EDX) {
    case 0: goto L_11a64658;
    case 1: goto L_11a64660;
    case 2: goto L_11a6466c;
    case 3: goto L_11a64680;
    default: x86_unimpl("switch@0x11a64535 out of table"); return;
  }
L_11a6453c:;
  /* 11a6453c mov eax, edi */
  EAX = (EDI);
  /* 11a6453e mov edx, 3 */
  EDX = (0x3u);
  /* 11a64543 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64546 jb 0x11a64554 */
  if (C.cf) goto L_11a64554;
  /* 11a64548 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a6454b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6454d jmp dword ptr [eax*4 + 0x11a64560] */
  switch (EAX) {
    case 1: goto L_11a64570;
    case 2: goto L_11a6459c;
    case 3: goto L_11a645c0;
    default: x86_unimpl("switch@0x11a6454d out of table"); return;
  }
L_11a64554:;
  /* 11a64554 jmp dword ptr [ecx*4 + 0x11a64658] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11a64658)))); return;
  /* 11a6455b nop  */
  /* nop */
L_11a6455c:;
  /* 11a6455c jmp dword ptr [ecx*4 + 0x11a645dc] */
  switch (ECX) {
    case 0: goto L_11a6463f;
    case 1: goto L_11a6462c;
    case 2: goto L_11a64624;
    case 3: goto L_11a6461c;
    case 4: goto L_11a64614;
    case 5: goto L_11a6460c;
    case 6: goto L_11a64604;
    case 7: goto L_11a645fc;
    default: x86_unimpl("switch@0x11a6455c out of table"); return;
  }
  /* 11a64563 nop  */
  /* nop */
L_11a64570:;
  /* 11a64570 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a64572 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a64574 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a64576 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a64579 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a6457c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a6457f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a64582 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a64585 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64588 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6458b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6458e jb 0x11a6455c */
  if (C.cf) goto L_11a6455c;
  /* 11a64590 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a64592 jmp dword ptr [edx*4 + 0x11a64648] */
  switch (EDX) {
    case 0: goto L_11a64658;
    case 1: goto L_11a64660;
    case 2: goto L_11a6466c;
    case 3: goto L_11a64680;
    default: x86_unimpl("switch@0x11a64592 out of table"); return;
  }
  /* 11a64599 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a6459c:;
  /* 11a6459c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a6459e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a645a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a645a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a645a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a645a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a645ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a645ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a645b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a645b4 jb 0x11a6455c */
  if (C.cf) goto L_11a6455c;
  /* 11a645b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a645b8 jmp dword ptr [edx*4 + 0x11a64648] */
  switch (EDX) {
    case 0: goto L_11a64658;
    case 1: goto L_11a64660;
    case 2: goto L_11a6466c;
    case 3: goto L_11a64680;
    default: x86_unimpl("switch@0x11a645b8 out of table"); return;
  }
  /* 11a645bf nop  */
  /* nop */
L_11a645c0:;
  /* 11a645c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a645c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a645c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a645c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a645c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a645ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a645cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a645ce jb 0x11a6455c */
  if (C.cf) goto L_11a6455c;
  /* 11a645d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a645d2 jmp dword ptr [edx*4 + 0x11a64648] */
  switch (EDX) {
    case 0: goto L_11a64658;
    case 1: goto L_11a64660;
    case 2: goto L_11a6466c;
    case 3: goto L_11a64680;
    default: x86_unimpl("switch@0x11a645d2 out of table"); return;
  }
  /* 11a645d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a645fc:;
  /* 11a645fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11a64600 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11a64604:;
  /* 11a64604 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11a64608 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11a6460c:;
  /* 11a6460c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11a64610 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11a64614:;
  /* 11a64614 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11a64618 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11a6461c:;
  /* 11a6461c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11a64620 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11a64624:;
  /* 11a64624 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11a64628 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11a6462c:;
  /* 11a6462c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11a64630 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11a64634 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a6463b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6463d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a6463f:;
  /* 11a6463f jmp dword ptr [edx*4 + 0x11a64648] */
  switch (EDX) {
    case 0: goto L_11a64658;
    case 1: goto L_11a64660;
    case 2: goto L_11a6466c;
    case 3: goto L_11a64680;
    default: x86_unimpl("switch@0x11a6463f out of table"); return;
  }
  /* 11a64646 mov edi, edi */
  EDI = (EDI);
L_11a64658:;
  /* 11a64658 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a6465b pop esi */
  ESI = (pop32());
  /* 11a6465c pop edi */
  EDI = (pop32());
  /* 11a6465d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a6465e ret  */
  ESPCHK(0x11a64500u, _esp0);
  ESP += 4; return;
  /* 11a6465f nop  */
  /* nop */
L_11a64660:;
  /* 11a64660 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a64662 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a64664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64667 pop esi */
  ESI = (pop32());
  /* 11a64668 pop edi */
  EDI = (pop32());
  /* 11a64669 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a6466a ret  */
  ESPCHK(0x11a64500u, _esp0);
  ESP += 4; return;
  /* 11a6466b nop  */
  /* nop */
L_11a6466c:;
  /* 11a6466c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a6466e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a64670 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a64673 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a64676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64679 pop esi */
  ESI = (pop32());
  /* 11a6467a pop edi */
  EDI = (pop32());
  /* 11a6467b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a6467c ret  */
  ESPCHK(0x11a64500u, _esp0);
  ESP += 4; return;
  /* 11a6467d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a64680:;
  /* 11a64680 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a64682 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a64684 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a64687 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a6468a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a6468d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a64690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64693 pop esi */
  ESI = (pop32());
  /* 11a64694 pop edi */
  EDI = (pop32());
  /* 11a64695 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a64696 ret  */
  ESPCHK(0x11a64500u, _esp0);
  ESP += 4; return;
  /* 11a64697 nop  */
  /* nop */
L_11a64698:;
  /* 11a64698 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11a6469c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11a646a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a646a6 jne 0x11a646cc */
  if (!C.zf) goto L_11a646cc;
  /* 11a646a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a646ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a646ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a646b1 jb 0x11a646c0 */
  if (C.cf) goto L_11a646c0;
  /* 11a646b3 std  */
  C.df=1;
  /* 11a646b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a646b6 cld  */
  C.df=0;
  /* 11a646b7 jmp dword ptr [edx*4 + 0x11a647e0] */
  switch (EDX) {
    case 0: goto L_11a647f0;
    case 1: goto L_11a647f8;
    case 2: goto L_11a64808;
    case 3: goto L_11a6481c;
    default: x86_unimpl("switch@0x11a646b7 out of table"); return;
  }
  /* 11a646be mov edi, edi */
  EDI = (EDI);
L_11a646c0:;
  /* 11a646c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a646c2 jmp dword ptr [ecx*4 + 0x11a64790] */
  switch (ECX) {
    case 0: goto L_11a647d7;
    default: x86_unimpl("switch@0x11a646c2 out of table"); return;
  }
  /* 11a646c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a646cc:;
  /* 11a646cc mov eax, edi */
  EAX = (EDI);
  /* 11a646ce mov edx, 3 */
  EDX = (0x3u);
  /* 11a646d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a646d6 jb 0x11a646e4 */
  if (C.cf) goto L_11a646e4;
  /* 11a646d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a646db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a646dd jmp dword ptr [eax*4 + 0x11a646e8] */
  switch (EAX) {
    case 1: goto L_11a646f8;
    case 2: goto L_11a64718;
    case 3: goto L_11a64740;
    default: x86_unimpl("switch@0x11a646dd out of table"); return;
  }
L_11a646e4:;
  /* 11a646e4 jmp dword ptr [ecx*4 + 0x11a647e0] */
  switch (ECX) {
    case 0: goto L_11a647f0;
    case 1: goto L_11a647f8;
    case 2: goto L_11a64808;
    case 3: goto L_11a6481c;
    default: x86_unimpl("switch@0x11a646e4 out of table"); return;
  }
  /* 11a646eb nop  */
  /* nop */
L_11a646f8:;
  /* 11a646f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a646fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a646fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a64700 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a64701 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a64704 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a64705 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64708 jb 0x11a646c0 */
  if (C.cf) goto L_11a646c0;
  /* 11a6470a std  */
  C.df=1;
  /* 11a6470b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a6470d cld  */
  C.df=0;
  /* 11a6470e jmp dword ptr [edx*4 + 0x11a647e0] */
  switch (EDX) {
    case 0: goto L_11a647f0;
    case 1: goto L_11a647f8;
    case 2: goto L_11a64808;
    case 3: goto L_11a6481c;
    default: x86_unimpl("switch@0x11a6470e out of table"); return;
  }
  /* 11a64715 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a64718:;
  /* 11a64718 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a6471b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a6471d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a64720 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a64723 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a64726 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a64729 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6472c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6472f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64732 jb 0x11a646c0 */
  if (C.cf) goto L_11a646c0;
  /* 11a64734 std  */
  C.df=1;
  /* 11a64735 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a64737 cld  */
  C.df=0;
  /* 11a64738 jmp dword ptr [edx*4 + 0x11a647e0] */
  switch (EDX) {
    case 0: goto L_11a647f0;
    case 1: goto L_11a647f8;
    case 2: goto L_11a64808;
    case 3: goto L_11a6481c;
    default: x86_unimpl("switch@0x11a64738 out of table"); return;
  }
  /* 11a6473f nop  */
  /* nop */
L_11a64740:;
  /* 11a64740 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a64743 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a64745 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a64748 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a6474b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a6474e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a64751 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a64754 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a64757 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6475a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6475d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64760 jb 0x11a646c0 */
  if (C.cf) goto L_11a646c0;
  /* 11a64766 std  */
  C.df=1;
  /* 11a64767 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a64769 cld  */
  C.df=0;
  /* 11a6476a jmp dword ptr [edx*4 + 0x11a647e0] */
  switch (EDX) {
    case 0: goto L_11a647f0;
    case 1: goto L_11a647f8;
    case 2: goto L_11a64808;
    case 3: goto L_11a6481c;
    default: x86_unimpl("switch@0x11a6476a out of table"); return;
  }
  /* 11a64771 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11a64774 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11a64775 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a64776 cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a64777 adc dword ptr [edi + eax*2 + 0x47a411a6], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + EAX*2 + 0x47a411a6))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EAX*2 + 0x47a411a6), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a6477e cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a6477f adc dword ptr [edi + eax*2 + 0x47b411a6], ebp */
  { uint32_t _a=(r32((uint32_t)(EDI + EAX*2 + 0x47b411a6))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EAX*2 + 0x47b411a6), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a64786 cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a64787 adc dword ptr [edi + eax*2 + 0x47c411a6], edi */
  { uint32_t _a=(r32((uint32_t)(EDI + EAX*2 + 0x47c411a6))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EAX*2 + 0x47c411a6), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a6478e cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a64794 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11a64798 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11a6479c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11a647a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11a647a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11a647a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11a647ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11a647b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11a647b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11a647b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11a647bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11a647c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11a647c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11a647c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11a647cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a647d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a647d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a647d7:;
  /* 11a647d7 jmp dword ptr [edx*4 + 0x11a647e0] */
  switch (EDX) {
    case 0: goto L_11a647f0;
    case 1: goto L_11a647f8;
    case 2: goto L_11a64808;
    case 3: goto L_11a6481c;
    default: x86_unimpl("switch@0x11a647d7 out of table"); return;
  }
  /* 11a647de mov edi, edi */
  EDI = (EDI);
L_11a647f0:;
  /* 11a647f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a647f3 pop esi */
  ESI = (pop32());
  /* 11a647f4 pop edi */
  EDI = (pop32());
  /* 11a647f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a647f6 ret  */
  ESPCHK(0x11a64500u, _esp0);
  ESP += 4; return;
  /* 11a647f7 nop  */
  /* nop */
L_11a647f8:;
  /* 11a647f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a647fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a647fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64801 pop esi */
  ESI = (pop32());
  /* 11a64802 pop edi */
  EDI = (pop32());
  /* 11a64803 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a64804 ret  */
  ESPCHK(0x11a64500u, _esp0);
  ESP += 4; return;
  /* 11a64805 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a64808:;
  /* 11a64808 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a6480b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a6480e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a64811 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a64814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64817 pop esi */
  ESI = (pop32());
  /* 11a64818 pop edi */
  EDI = (pop32());
  /* 11a64819 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a6481a ret  */
  ESPCHK(0x11a64500u, _esp0);
  ESP += 4; return;
  /* 11a6481b nop  */
  /* nop */
L_11a6481c:;
  /* 11a6481c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a6481f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a64822 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a64825 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a64828 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a6482b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a6482e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64831 pop esi */
  ESI = (pop32());
  /* 11a64832 pop edi */
  EDI = (pop32());
  /* 11a64833 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a64834 ret  */
  ESPCHK(0x11a64500u, _esp0);
  ESP += 4; return;
}

/* FUN_10004835 @ 0x11a64835 (23 bytes, 7 insns) */
void f_11a64835(void) {
  FTRACE(0x11a64835u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a64835 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a64837 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a6483b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a6483f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a64843 call 0x11a6484c */
  push32(0x11a64848u); f_11a6484c();
  /* 11a64848 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6484b ret  */
  ESPCHK(0x11a64835u, _esp0);
  ESP += 4; return;
}

/* FUN_1000484c @ 0x11a6484c (517 bytes, 195 insns) */
void f_11a6484c(void) {
  FTRACE(0x11a6484cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a6484c push ebp */
  push32((uint32_t)(EBP));
  /* 11a6484d mov ebp, esp */
  EBP = (ESP);
  /* 11a6484f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64852 push ebx */
  push32((uint32_t)(EBX));
  /* 11a64853 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a64857 push esi */
  push32((uint32_t)(ESI));
  /* 11a64858 push edi */
  push32((uint32_t)(EDI));
  /* 11a64859 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a6485c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11a6485e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11a64861 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11a64864:;
  /* 11a64864 cmp dword ptr [0x11a6bba4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a6bba4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6486b jle 0x11a6487c */
  if ((C.zf||C.sf!=C.of)) goto L_11a6487c;
  /* 11a6486d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11a64870 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a64872 push eax */
  push32((uint32_t)(EAX));
  /* 11a64873 call 0x11a6687d */
  push32(0x11a64878u); f_11a6687d();
  /* 11a64878 pop ecx */
  ECX = (pop32());
  /* 11a64879 pop ecx */
  ECX = (pop32());
  /* 11a6487a jmp 0x11a6488b */
  goto L_11a6488b;
L_11a6487c:;
  /* 11a6487c mov ecx, dword ptr [0x11a6b998] */
  ECX = (r32((uint32_t)(0x11a6b998)));
  /* 11a64882 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11a64885 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11a64888 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11a6488b:;
  /* 11a6488b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6488d je 0x11a64894 */
  if (C.zf) goto L_11a64894;
  /* 11a6488f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11a64891 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a64892 jmp 0x11a64864 */
  goto L_11a64864;
L_11a64894:;
  /* 11a64894 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64897 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11a6489a jne 0x11a648a2 */
  if (!C.zf) goto L_11a648a2;
  /* 11a6489c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11a648a0 jmp 0x11a648a7 */
  goto L_11a648a7;
L_11a648a2:;
  /* 11a648a2 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a648a5 jne 0x11a648ad */
  if (!C.zf) goto L_11a648ad;
L_11a648a7:;
  /* 11a648a7 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11a648a9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a648aa mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11a648ad:;
  /* 11a648ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a648b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a648b2 jl 0x11a64a41 */
  if ((C.sf!=C.of)) goto L_11a64a41;
  /* 11a648b8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a648bb je 0x11a64a41 */
  if (C.zf) goto L_11a64a41;
  /* 11a648c1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a648c4 jg 0x11a64a41 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a64a41;
  /* 11a648ca push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a648cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a648ce pop ecx */
  ECX = (pop32());
  /* 11a648cf jne 0x11a648f5 */
  if (!C.zf) goto L_11a648f5;
  /* 11a648d1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a648d4 je 0x11a648df */
  if (C.zf) goto L_11a648df;
  /* 11a648d6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 11a648dd jmp 0x11a64911 */
  goto L_11a64911;
L_11a648df:;
  /* 11a648df mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a648e1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a648e3 je 0x11a648f2 */
  if (C.zf) goto L_11a648f2;
  /* 11a648e5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a648e7 je 0x11a648f2 */
  if (C.zf) goto L_11a648f2;
  /* 11a648e9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 11a648f0 jmp 0x11a64911 */
  goto L_11a64911;
L_11a648f2:;
  /* 11a648f2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11a648f5:;
  /* 11a648f5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a648f8 jne 0x11a64911 */
  if (!C.zf) goto L_11a64911;
  /* 11a648fa cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a648fd jne 0x11a64911 */
  if (!C.zf) goto L_11a64911;
  /* 11a648ff mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a64901 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64903 je 0x11a64909 */
  if (C.zf) goto L_11a64909;
  /* 11a64905 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64907 jne 0x11a64911 */
  if (!C.zf) goto L_11a64911;
L_11a64909:;
  /* 11a64909 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a6490c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a6490d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a6490e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11a64911:;
  /* 11a64911 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a64914 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a64916 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a64919 mov edi, 0x103 */
  EDI = (0x103u);
  /* 11a6491e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11a64921:;
  /* 11a64921 cmp dword ptr [0x11a6bba4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a6bba4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64928 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11a6492b jle 0x11a64939 */
  if ((C.zf||C.sf!=C.of)) goto L_11a64939;
  /* 11a6492d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a6492f push esi */
  push32((uint32_t)(ESI));
  /* 11a64930 call 0x11a6687d */
  push32(0x11a64935u); f_11a6687d();
  /* 11a64935 pop ecx */
  ECX = (pop32());
  /* 11a64936 pop ecx */
  ECX = (pop32());
  /* 11a64937 jmp 0x11a64944 */
  goto L_11a64944;
L_11a64939:;
  /* 11a64939 mov eax, dword ptr [0x11a6b998] */
  EAX = (r32((uint32_t)(0x11a6b998)));
  /* 11a6493e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11a64941 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11a64944:;
  /* 11a64944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a64946 je 0x11a64950 */
  if (C.zf) goto L_11a64950;
  /* 11a64948 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11a6494b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6494e jmp 0x11a64982 */
  goto L_11a64982;
L_11a64950:;
  /* 11a64950 cmp dword ptr [0x11a6bba4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a6bba4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64957 jle 0x11a64964 */
  if ((C.zf||C.sf!=C.of)) goto L_11a64964;
  /* 11a64959 push edi */
  push32((uint32_t)(EDI));
  /* 11a6495a push esi */
  push32((uint32_t)(ESI));
  /* 11a6495b call 0x11a6687d */
  push32(0x11a64960u); f_11a6687d();
  /* 11a64960 pop ecx */
  ECX = (pop32());
  /* 11a64961 pop ecx */
  ECX = (pop32());
  /* 11a64962 jmp 0x11a6496f */
  goto L_11a6496f;
L_11a64964:;
  /* 11a64964 mov eax, dword ptr [0x11a6b998] */
  EAX = (r32((uint32_t)(0x11a6b998)));
  /* 11a64969 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11a6496d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11a6496f:;
  /* 11a6496f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a64971 je 0x11a649bd */
  if (C.zf) goto L_11a649bd;
  /* 11a64973 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11a64976 push eax */
  push32((uint32_t)(EAX));
  /* 11a64977 call 0x11a66742 */
  push32(0x11a6497cu); f_11a66742();
  /* 11a6497c pop ecx */
  ECX = (pop32());
  /* 11a6497d mov ecx, eax */
  ECX = (EAX);
  /* 11a6497f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11a64982:;
  /* 11a64982 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64985 jae 0x11a649bd */
  if (!C.cf) goto L_11a649bd;
  /* 11a64987 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11a6498a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11a6498e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64991 jb 0x11a649a7 */
  if (C.cf) goto L_11a649a7;
  /* 11a64993 jne 0x11a649a1 */
  if (!C.zf) goto L_11a649a1;
  /* 11a64995 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a64998 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a6499a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a6499d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6499f jbe 0x11a649a7 */
  if ((C.cf||C.zf)) goto L_11a649a7;
L_11a649a1:;
  /* 11a649a1 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11a649a5 jmp 0x11a649b0 */
  goto L_11a649b0;
L_11a649a7:;
  /* 11a649a7 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a649ab add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a649ad mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11a649b0:;
  /* 11a649b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a649b3 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a649b6 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11a649b8 jmp 0x11a64921 */
  goto L_11a64921;
L_11a649bd:;
  /* 11a649bd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a649c0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11a649c3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a649c6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11a649c8 jne 0x11a649da */
  if (!C.zf) goto L_11a649da;
  /* 11a649ca test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a649cc je 0x11a649d4 */
  if (C.zf) goto L_11a649d4;
  /* 11a649ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a649d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a649d4:;
  /* 11a649d4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a649d8 jmp 0x11a64a25 */
  goto L_11a64a25;
L_11a649da:;
  /* 11a649da test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11a649dc mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11a649e1 jne 0x11a649fe */
  if (!C.zf) goto L_11a649fe;
  /* 11a649e3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11a649e5 jne 0x11a64a25 */
  if (!C.zf) goto L_11a64a25;
  /* 11a649e7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11a649ea je 0x11a649f5 */
  if (C.zf) goto L_11a649f5;
  /* 11a649ec cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a649f3 ja 0x11a649fe */
  if ((!C.cf&&!C.zf)) goto L_11a649fe;
L_11a649f5:;
  /* 11a649f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a649f7 jne 0x11a64a25 */
  if (!C.zf) goto L_11a64a25;
  /* 11a649f9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a649fc jbe 0x11a64a25 */
  if ((C.cf||C.zf)) goto L_11a64a25;
L_11a649fe:;
  /* 11a649fe call 0x11a66739 */
  push32(0x11a64a03u); f_11a66739();
  /* 11a64a03 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11a64a07 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11a64a0d je 0x11a64a15 */
  if (C.zf) goto L_11a64a15;
  /* 11a64a0f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a64a13 jmp 0x11a64a25 */
  goto L_11a64a25;
L_11a64a15:;
  /* 11a64a15 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a64a18 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11a64a1a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11a64a1c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64a1e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a64a20 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64a22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a64a25:;
  /* 11a64a25 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a64a27 je 0x11a64a2e */
  if (C.zf) goto L_11a64a2e;
  /* 11a64a29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a64a2c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11a64a2e:;
  /* 11a64a2e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11a64a32 je 0x11a64a3c */
  if (C.zf) goto L_11a64a3c;
  /* 11a64a34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a64a37 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a64a39 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a64a3c:;
  /* 11a64a3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a64a3f jmp 0x11a64a4c */
  goto L_11a64a4c;
L_11a64a41:;
  /* 11a64a41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a64a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a64a46 je 0x11a64a4a */
  if (C.zf) goto L_11a64a4a;
  /* 11a64a48 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11a64a4a:;
  /* 11a64a4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a64a4c:;
  /* 11a64a4c pop edi */
  EDI = (pop32());
  /* 11a64a4d pop esi */
  ESI = (pop32());
  /* 11a64a4e pop ebx */
  EBX = (pop32());
  /* 11a64a4f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a64a50 ret  */
  ESPCHK(0x11a6484cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11a64a70 (193 bytes, 90 insns) */
void f_11a64a70(void) {
  FTRACE(0x11a64a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a64a70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a64a72 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11a64a76 push ebx */
  push32((uint32_t)(EBX));
  /* 11a64a77 mov ebx, eax */
  EBX = (EAX);
  /* 11a64a79 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a64a7c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a64a80 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11a64a86 je 0x11a64a9b */
  if (C.zf) goto L_11a64a9b;
L_11a64a88:;
  /* 11a64a88 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11a64a8a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a64a8b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64a8d je 0x11a64a60 */
  if (C.zf) { jmp_ind(0x11a64a60u); return; }
  /* 11a64a8f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11a64a91 je 0x11a64ae4 */
  if (C.zf) goto L_11a64ae4;
  /* 11a64a93 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11a64a99 jne 0x11a64a88 */
  if (!C.zf) goto L_11a64a88;
L_11a64a9b:;
  /* 11a64a9b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11a64a9d push edi */
  push32((uint32_t)(EDI));
  /* 11a64a9e mov eax, ebx */
  EAX = (EBX);
  /* 11a64aa0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11a64aa3 push esi */
  push32((uint32_t)(ESI));
  /* 11a64aa4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11a64aa6:;
  /* 11a64aa6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11a64aa8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11a64aad mov eax, ecx */
  EAX = (ECX);
  /* 11a64aaf mov esi, edi */
  ESI = (EDI);
  /* 11a64ab1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11a64ab3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64ab5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64ab7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a64aba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a64abd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a64abf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11a64ac1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64ac4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11a64aca jne 0x11a64ae8 */
  if (!C.zf) goto L_11a64ae8;
  /* 11a64acc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11a64ad1 je 0x11a64aa6 */
  if (C.zf) goto L_11a64aa6;
  /* 11a64ad3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11a64ad8 jne 0x11a64ae2 */
  if (!C.zf) goto L_11a64ae2;
  /* 11a64ada and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11a64ae0 jne 0x11a64aa6 */
  if (!C.zf) goto L_11a64aa6;
L_11a64ae2:;
  /* 11a64ae2 pop esi */
  ESI = (pop32());
  /* 11a64ae3 pop edi */
  EDI = (pop32());
L_11a64ae4:;
  /* 11a64ae4 pop ebx */
  EBX = (pop32());
  /* 11a64ae5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a64ae7 ret  */
  ESPCHK(0x11a64a70u, _esp0);
  ESP += 4; return;
L_11a64ae8:;
  /* 11a64ae8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11a64aeb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64aed je 0x11a64b25 */
  if (C.zf) goto L_11a64b25;
  /* 11a64aef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a64af1 je 0x11a64ae2 */
  if (C.zf) goto L_11a64ae2;
  /* 11a64af3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64af5 je 0x11a64b1e */
  if (C.zf) goto L_11a64b1e;
  /* 11a64af7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a64af9 je 0x11a64ae2 */
  if (C.zf) goto L_11a64ae2;
  /* 11a64afb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a64afe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64b00 je 0x11a64b17 */
  if (C.zf) goto L_11a64b17;
  /* 11a64b02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a64b04 je 0x11a64ae2 */
  if (C.zf) goto L_11a64ae2;
  /* 11a64b06 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64b08 je 0x11a64b10 */
  if (C.zf) goto L_11a64b10;
  /* 11a64b0a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a64b0c je 0x11a64ae2 */
  if (C.zf) goto L_11a64ae2;
  /* 11a64b0e jmp 0x11a64aa6 */
  goto L_11a64aa6;
L_11a64b10:;
  /* 11a64b10 pop esi */
  ESI = (pop32());
  /* 11a64b11 pop edi */
  EDI = (pop32());
  /* 11a64b12 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11a64b15 pop ebx */
  EBX = (pop32());
  /* 11a64b16 ret  */
  ESPCHK(0x11a64a70u, _esp0);
  ESP += 4; return;
L_11a64b17:;
  /* 11a64b17 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11a64b1a pop esi */
  ESI = (pop32());
  /* 11a64b1b pop edi */
  EDI = (pop32());
  /* 11a64b1c pop ebx */
  EBX = (pop32());
  /* 11a64b1d ret  */
  ESPCHK(0x11a64a70u, _esp0);
  ESP += 4; return;
L_11a64b1e:;
  /* 11a64b1e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11a64b21 pop esi */
  ESI = (pop32());
  /* 11a64b22 pop edi */
  EDI = (pop32());
  /* 11a64b23 pop ebx */
  EBX = (pop32());
  /* 11a64b24 ret  */
  ESPCHK(0x11a64a70u, _esp0);
  ESP += 4; return;
L_11a64b25:;
  /* 11a64b25 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11a64b28 pop esi */
  ESI = (pop32());
  /* 11a64b29 pop edi */
  EDI = (pop32());
  /* 11a64b2a pop ebx */
  EBX = (pop32());
  /* 11a64b2b ret  */
  ESPCHK(0x11a64a70u, _esp0);
  ESP += 4; return;
  /* 11a64b2c int3  */
  x86_unimpl("int3 @ 0x11a64b2c");
  /* 11a64b2d int3  */
  x86_unimpl("int3 @ 0x11a64b2d");
  /* 11a64b2e int3  */
  x86_unimpl("int3 @ 0x11a64b2e");
  /* 11a64b2f int3  */
  x86_unimpl("int3 @ 0x11a64b2f");
}

/* _strstr @ 0x11a64b30 (128 bytes, 66 insns) */
void f_11a64b30(void) {
  FTRACE(0x11a64b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a64b30 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a64b34 push edi */
  push32((uint32_t)(EDI));
  /* 11a64b35 push ebx */
  push32((uint32_t)(EBX));
  /* 11a64b36 push esi */
  push32((uint32_t)(ESI));
  /* 11a64b37 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a64b39 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a64b3d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a64b3f je 0x11a64baa */
  if (C.zf) goto L_11a64baa;
  /* 11a64b41 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11a64b44 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a64b46 je 0x11a64b97 */
  if (C.zf) goto L_11a64b97;
L_11a64b48:;
  /* 11a64b48 mov esi, edi */
  ESI = (EDI);
  /* 11a64b4a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a64b4e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11a64b50 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a64b51 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64b53 je 0x11a64b6a */
  if (C.zf) goto L_11a64b6a;
  /* 11a64b55 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a64b57 je 0x11a64b64 */
  if (C.zf) goto L_11a64b64;
L_11a64b59:;
  /* 11a64b59 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a64b5b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a64b5c:;
  /* 11a64b5c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64b5e je 0x11a64b6a */
  if (C.zf) goto L_11a64b6a;
  /* 11a64b60 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a64b62 jne 0x11a64b59 */
  if (!C.zf) goto L_11a64b59;
L_11a64b64:;
  /* 11a64b64 pop esi */
  ESI = (pop32());
  /* 11a64b65 pop ebx */
  EBX = (pop32());
  /* 11a64b66 pop edi */
  EDI = (pop32());
  /* 11a64b67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a64b69 ret  */
  ESPCHK(0x11a64b30u, _esp0);
  ESP += 4; return;
L_11a64b6a:;
  /* 11a64b6a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a64b6c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a64b6d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64b6f jne 0x11a64b5c */
  if (!C.zf) goto L_11a64b5c;
  /* 11a64b71 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11a64b74:;
  /* 11a64b74 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11a64b77 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a64b79 je 0x11a64ba3 */
  if (C.zf) goto L_11a64ba3;
  /* 11a64b7b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a64b7d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64b80 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64b82 jne 0x11a64b48 */
  if (!C.zf) goto L_11a64b48;
  /* 11a64b84 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11a64b87 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a64b89 je 0x11a64ba3 */
  if (C.zf) goto L_11a64ba3;
  /* 11a64b8b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11a64b8e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64b91 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64b93 je 0x11a64b74 */
  if (C.zf) goto L_11a64b74;
  /* 11a64b95 jmp 0x11a64b48 */
  goto L_11a64b48;
L_11a64b97:;
  /* 11a64b97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a64b99 pop esi */
  ESI = (pop32());
  /* 11a64b9a pop ebx */
  EBX = (pop32());
  /* 11a64b9b pop edi */
  EDI = (pop32());
  /* 11a64b9c mov al, dl */
  AL = (DL);
  /* 11a64b9e jmp 0x11a64a76 */
  jmp_ind(0x11a64a76u); return;
L_11a64ba3:;
  /* 11a64ba3 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11a64ba6 pop esi */
  ESI = (pop32());
  /* 11a64ba7 pop ebx */
  EBX = (pop32());
  /* 11a64ba8 pop edi */
  EDI = (pop32());
  /* 11a64ba9 ret  */
  ESPCHK(0x11a64b30u, _esp0);
  ESP += 4; return;
L_11a64baa:;
  /* 11a64baa mov eax, edi */
  EAX = (EDI);
  /* 11a64bac pop esi */
  ESI = (pop32());
  /* 11a64bad pop ebx */
  EBX = (pop32());
  /* 11a64bae pop edi */
  EDI = (pop32());
  /* 11a64baf ret  */
  ESPCHK(0x11a64b30u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11a64bb0 (56 bytes, 31 insns) */
void f_11a64bb0(void) {
  FTRACE(0x11a64bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a64bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a64bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11a64bb3 push edi */
  push32((uint32_t)(EDI));
  /* 11a64bb4 push esi */
  push32((uint32_t)(ESI));
  /* 11a64bb5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a64bb6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a64bb9 jecxz 0x11a64be1 */
  x86_unimpl("jecxz @ 0x11a64bb9");
  /* 11a64bbb mov ebx, ecx */
  EBX = (ECX);
  /* 11a64bbd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64bc0 mov esi, edi */
  ESI = (EDI);
  /* 11a64bc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a64bc4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a64bc6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a64bc8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64bca mov edi, esi */
  EDI = (ESI);
  /* 11a64bcc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a64bcf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11a64bd1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11a64bd4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a64bd6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64bd9 ja 0x11a64bdf */
  if ((!C.cf&&!C.zf)) goto L_11a64bdf;
  /* 11a64bdb je 0x11a64be1 */
  if (C.zf) goto L_11a64be1;
  /* 11a64bdd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a64bde dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11a64bdf:;
  /* 11a64bdf not ecx */
  ECX = (~(ECX));
L_11a64be1:;
  /* 11a64be1 mov eax, ecx */
  EAX = (ECX);
  /* 11a64be3 pop ebx */
  EBX = (pop32());
  /* 11a64be4 pop esi */
  ESI = (pop32());
  /* 11a64be5 pop edi */
  EDI = (pop32());
  /* 11a64be6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a64be7 ret  */
  ESPCHK(0x11a64bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bf0 @ 0x11a64bf0 (47 bytes, 17 insns) */
void f_11a64bf0(void) {
  FTRACE(0x11a64bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a64bf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a64bf1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64bf6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11a64bfa jb 0x11a64c10 */
  if (C.cf) goto L_11a64c10;
L_11a64bfc:;
  /* 11a64bfc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64c02 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64c07 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11a64c09 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64c0e jae 0x11a64bfc */
  if (!C.cf) goto L_11a64bfc;
L_11a64c10:;
  /* 11a64c10 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64c12 mov eax, esp */
  EAX = (ESP);
  /* 11a64c14 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11a64c16 mov esp, ecx */
  ESP = (ECX);
  /* 11a64c18 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a64c1a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a64c1d push eax */
  push32((uint32_t)(EAX));
  /* 11a64c1e ret  */
  ESPCHK(0x11a64bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c1f @ 0x11a64c1f (72 bytes, 17 insns) */
void f_11a64c1f(void) {
  FTRACE(0x11a64c1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a64c1f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11a64c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a64c26 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a64c2c call dword ptr [0x11a6805c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6805c))), 0x11a64c32u);
  /* 11a64c32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a64c34 mov dword ptr [0x11a6c490], eax */
  w32((uint32_t)(0x11a6c490), (EAX));
  /* 11a64c39 jne 0x11a64c3c */
  if (!C.zf) goto L_11a64c3c;
  /* 11a64c3b ret  */
  ESPCHK(0x11a64c1fu, _esp0);
  ESP += 4; return;
L_11a64c3c:;
  /* 11a64c3c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a64c40 and dword ptr [0x11a6c488], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a6c488)))&(0x0u); w32((uint32_t)(0x11a6c488), (_r)); fl_logic(_r,32); }
  /* 11a64c47 and dword ptr [0x11a6c48c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a6c48c)))&(0x0u); w32((uint32_t)(0x11a6c48c), (_r)); fl_logic(_r,32); }
  /* 11a64c4e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a64c50 mov dword ptr [0x11a6c484], eax */
  w32((uint32_t)(0x11a6c484), (EAX));
  /* 11a64c55 mov dword ptr [0x11a6c494], ecx */
  w32((uint32_t)(0x11a6c494), (ECX));
  /* 11a64c5b mov dword ptr [0x11a6c47c], 0x10 */
  w32((uint32_t)(0x11a6c47c), (0x10u));
  /* 11a64c65 pop eax */
  EAX = (pop32());
  /* 11a64c66 ret  */
  ESPCHK(0x11a64c1fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004c67 @ 0x11a64c67 (43 bytes, 14 insns) */
void f_11a64c67(void) {
  FTRACE(0x11a64c67u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a64c67 mov eax, dword ptr [0x11a6c48c] */
  EAX = (r32((uint32_t)(0x11a6c48c)));
  /* 11a64c6c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11a64c6f mov eax, dword ptr [0x11a6c490] */
  EAX = (r32((uint32_t)(0x11a6c490)));
  /* 11a64c74 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11a64c77:;
  /* 11a64c77 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64c79 jae 0x11a64c8f */
  if (!C.cf) goto L_11a64c8f;
  /* 11a64c7b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a64c7f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64c82 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64c88 jb 0x11a64c91 */
  if (C.cf) goto L_11a64c91;
  /* 11a64c8a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64c8d jmp 0x11a64c77 */
  goto L_11a64c77;
L_11a64c8f:;
  /* 11a64c8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a64c91:;
  /* 11a64c91 ret  */
  ESPCHK(0x11a64c67u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c92 @ 0x11a64c92 (809 bytes, 265 insns) */
void f_11a64c92(void) {
  FTRACE(0x11a64c92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a64c92 push ebp */
  push32((uint32_t)(EBP));
  /* 11a64c93 mov ebp, esp */
  EBP = (ESP);
  /* 11a64c95 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64c98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64c9b push ebx */
  push32((uint32_t)(EBX));
  /* 11a64c9c push esi */
  push32((uint32_t)(ESI));
  /* 11a64c9d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a64ca0 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11a64ca3 push edi */
  push32((uint32_t)(EDI));
  /* 11a64ca4 mov edi, esi */
  EDI = (ESI);
  /* 11a64ca6 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64ca9 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64cac shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11a64caf mov ecx, edi */
  ECX = (EDI);
  /* 11a64cb1 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a64cb7 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a64cbe mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a64cc1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a64cc3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a64cc4 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11a64cc7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a64cca jne 0x11a64fb6 */
  if (!C.zf) goto L_11a64fb6;
  /* 11a64cd0 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11a64cd3 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11a64cd6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a64cd9 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11a64cdc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a64cdf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a64ce2 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11a64ce5 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11a64ce8 jne 0x11a64d68 */
  if (!C.zf) goto L_11a64d68;
  /* 11a64cea sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a64ced dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a64cee cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64cf1 jbe 0x11a64cf6 */
  if ((C.cf||C.zf)) goto L_11a64cf6;
  /* 11a64cf3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a64cf5 pop edx */
  EDX = (pop32());
L_11a64cf6:;
  /* 11a64cf6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a64cf9 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64cfc jne 0x11a64d4a */
  if (!C.zf) goto L_11a64d4a;
  /* 11a64cfe cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64d01 jae 0x11a64d21 */
  if (!C.cf) goto L_11a64d21;
  /* 11a64d03 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a64d08 mov ecx, edx */
  ECX = (EDX);
  /* 11a64d0a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a64d0c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11a64d10 not ebx */
  EBX = (~(EBX));
  /* 11a64d12 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a64d16 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a64d18 jne 0x11a64d42 */
  if (!C.zf) goto L_11a64d42;
  /* 11a64d1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64d1d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a64d1f jmp 0x11a64d42 */
  goto L_11a64d42;
L_11a64d21:;
  /* 11a64d21 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11a64d24 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a64d29 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a64d2b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11a64d2f not ebx */
  EBX = (~(EBX));
  /* 11a64d31 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a64d38 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a64d3a jne 0x11a64d42 */
  if (!C.zf) goto L_11a64d42;
  /* 11a64d3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64d3f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a64d42:;
  /* 11a64d42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a64d45 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a64d48 jmp 0x11a64d4d */
  goto L_11a64d4d;
L_11a64d4a:;
  /* 11a64d4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11a64d4d:;
  /* 11a64d4d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11a64d50 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a64d53 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64d56 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11a64d59 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a64d5c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a64d5f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a64d62 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a64d65 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11a64d68:;
  /* 11a64d68 mov edx, ecx */
  EDX = (ECX);
  /* 11a64d6a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a64d6d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a64d6e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64d71 jbe 0x11a64d76 */
  if ((C.cf||C.zf)) goto L_11a64d76;
  /* 11a64d73 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a64d75 pop edx */
  EDX = (pop32());
L_11a64d76:;
  /* 11a64d76 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a64d79 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 11a64d7c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11a64d7f jne 0x11a64e19 */
  if (!C.zf) goto L_11a64e19;
  /* 11a64d85 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64d88 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a64d8b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11a64d8e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a64d90 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11a64d93 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a64d94 pop esi */
  ESI = (pop32());
  /* 11a64d95 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64d97 jbe 0x11a64d9b */
  if ((C.cf||C.zf)) goto L_11a64d9b;
  /* 11a64d99 mov ebx, esi */
  EBX = (ESI);
L_11a64d9b:;
  /* 11a64d9b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64d9e mov edx, ecx */
  EDX = (ECX);
  /* 11a64da0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a64da3 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a64da6 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a64da7 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64da9 jbe 0x11a64dad */
  if ((C.cf||C.zf)) goto L_11a64dad;
  /* 11a64dab mov edx, esi */
  EDX = (ESI);
L_11a64dad:;
  /* 11a64dad cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64daf je 0x11a64e14 */
  if (C.zf) goto L_11a64e14;
  /* 11a64db1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a64db4 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11a64db7 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64dba jne 0x11a64dfc */
  if (!C.zf) goto L_11a64dfc;
  /* 11a64dbc cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64dbf jae 0x11a64ddd */
  if (!C.cf) goto L_11a64ddd;
  /* 11a64dc1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11a64dc6 mov ecx, ebx */
  ECX = (EBX);
  /* 11a64dc8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a64dca not esi */
  ESI = (~(ESI));
  /* 11a64dcc and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a64dd0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11a64dd4 jne 0x11a64dfc */
  if (!C.zf) goto L_11a64dfc;
  /* 11a64dd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64dd9 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a64ddb jmp 0x11a64dfc */
  goto L_11a64dfc;
L_11a64ddd:;
  /* 11a64ddd lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11a64de0 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11a64de5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a64de7 not esi */
  ESI = (~(ESI));
  /* 11a64de9 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a64df0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11a64df4 jne 0x11a64dfc */
  if (!C.zf) goto L_11a64dfc;
  /* 11a64df6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64df9 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a64dfc:;
  /* 11a64dfc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a64dff mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 11a64e02 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a64e05 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11a64e08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a64e0b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11a64e0e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a64e11 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11a64e14:;
  /* 11a64e14 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a64e17 jmp 0x11a64e1c */
  goto L_11a64e1c;
L_11a64e19:;
  /* 11a64e19 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a64e1c:;
  /* 11a64e1c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64e20 jne 0x11a64e2a */
  if (!C.zf) goto L_11a64e2a;
  /* 11a64e22 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64e24 je 0x11a64eab */
  if (C.zf) goto L_11a64eab;
L_11a64e2a:;
  /* 11a64e2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a64e2d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11a64e31 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11a64e34 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11a64e37 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11a64e3a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11a64e3d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a64e40 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11a64e43 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a64e46 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64e49 jne 0x11a64eab */
  if (!C.zf) goto L_11a64eab;
  /* 11a64e4b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11a64e4f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64e52 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11a64e55 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a64e57 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11a64e5b jae 0x11a64e82 */
  if (!C.cf) goto L_11a64e82;
  /* 11a64e5d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64e61 jne 0x11a64e71 */
  if (!C.zf) goto L_11a64e71;
  /* 11a64e63 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a64e68 mov ecx, edx */
  ECX = (EDX);
  /* 11a64e6a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a64e6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64e6f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11a64e71:;
  /* 11a64e71 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a64e76 mov ecx, edx */
  ECX = (EDX);
  /* 11a64e78 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a64e7a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 11a64e7e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a64e80 jmp 0x11a64eab */
  goto L_11a64eab;
L_11a64e82:;
  /* 11a64e82 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64e86 jne 0x11a64e98 */
  if (!C.zf) goto L_11a64e98;
  /* 11a64e88 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11a64e8b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a64e90 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a64e92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64e95 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a64e98:;
  /* 11a64e98 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11a64e9b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a64ea0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a64ea2 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11a64ea9 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11a64eab:;
  /* 11a64eab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a64eae mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a64eb0 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11a64eb4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a64eb7 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11a64eb9 jne 0x11a64fb6 */
  if (!C.zf) goto L_11a64fb6;
  /* 11a64ebf mov eax, dword ptr [0x11a6c488] */
  EAX = (r32((uint32_t)(0x11a6c488)));
  /* 11a64ec4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a64ec6 je 0x11a64fa8 */
  if (C.zf) goto L_11a64fa8;
  /* 11a64ecc mov ecx, dword ptr [0x11a6c480] */
  ECX = (r32((uint32_t)(0x11a6c480)));
  /* 11a64ed2 mov esi, dword ptr [0x11a68068] */
  ESI = (r32((uint32_t)(0x11a68068)));
  /* 11a64ed8 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11a64edb add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64ede mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11a64ee3 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a64ee8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a64ee9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a64eea call esi */
  call_ind((uint32_t)(ESI), 0x11a64eecu);
  /* 11a64eec mov ecx, dword ptr [0x11a6c480] */
  ECX = (r32((uint32_t)(0x11a6c480)));
  /* 11a64ef2 mov eax, dword ptr [0x11a6c488] */
  EAX = (r32((uint32_t)(0x11a6c488)));
  /* 11a64ef7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a64efc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a64efe or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a64f01 mov eax, dword ptr [0x11a6c488] */
  EAX = (r32((uint32_t)(0x11a6c488)));
  /* 11a64f06 mov ecx, dword ptr [0x11a6c480] */
  ECX = (r32((uint32_t)(0x11a6c480)));
  /* 11a64f0c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a64f0f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a64f17 mov eax, dword ptr [0x11a6c488] */
  EAX = (r32((uint32_t)(0x11a6c488)));
  /* 11a64f1c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a64f1f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11a64f22 mov eax, dword ptr [0x11a6c488] */
  EAX = (r32((uint32_t)(0x11a6c488)));
  /* 11a64f27 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a64f2a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a64f2e jne 0x11a64f39 */
  if (!C.zf) goto L_11a64f39;
  /* 11a64f30 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a64f34 mov eax, dword ptr [0x11a6c488] */
  EAX = (r32((uint32_t)(0x11a6c488)));
L_11a64f39:;
  /* 11a64f39 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64f3d jne 0x11a64fa8 */
  if (!C.zf) goto L_11a64fa8;
  /* 11a64f3f push ebx */
  push32((uint32_t)(EBX));
  /* 11a64f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a64f42 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11a64f45 call esi */
  call_ind((uint32_t)(ESI), 0x11a64f47u);
  /* 11a64f47 mov eax, dword ptr [0x11a6c488] */
  EAX = (r32((uint32_t)(0x11a6c488)));
  /* 11a64f4c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11a64f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a64f51 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a64f57 call dword ptr [0x11a68064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68064))), 0x11a64f5du);
  /* 11a64f5d mov eax, dword ptr [0x11a6c48c] */
  EAX = (r32((uint32_t)(0x11a6c48c)));
  /* 11a64f62 mov edx, dword ptr [0x11a6c490] */
  EDX = (r32((uint32_t)(0x11a6c490)));
  /* 11a64f68 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a64f6b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a64f6e mov ecx, eax */
  ECX = (EAX);
  /* 11a64f70 mov eax, dword ptr [0x11a6c488] */
  EAX = (r32((uint32_t)(0x11a6c488)));
  /* 11a64f75 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64f77 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11a64f7b push ecx */
  push32((uint32_t)(ECX));
  /* 11a64f7c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11a64f7f push ecx */
  push32((uint32_t)(ECX));
  /* 11a64f80 push eax */
  push32((uint32_t)(EAX));
  /* 11a64f81 call 0x11a66900 */
  push32(0x11a64f86u); f_11a66900();
  /* 11a64f86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64f89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64f8c dec dword ptr [0x11a6c48c] */
  { uint32_t _r=(r32((uint32_t)(0x11a6c48c)))-1; w32((uint32_t)(0x11a6c48c), (_r)); fl_dec(_r,32); }
  /* 11a64f92 cmp eax, dword ptr [0x11a6c488] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a6c488))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64f98 jbe 0x11a64f9e */
  if ((C.cf||C.zf)) goto L_11a64f9e;
  /* 11a64f9a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_11a64f9e:;
  /* 11a64f9e mov eax, dword ptr [0x11a6c490] */
  EAX = (r32((uint32_t)(0x11a6c490)));
  /* 11a64fa3 mov dword ptr [0x11a6c484], eax */
  w32((uint32_t)(0x11a6c484), (EAX));
L_11a64fa8:;
  /* 11a64fa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64fab mov dword ptr [0x11a6c480], edi */
  w32((uint32_t)(0x11a6c480), (EDI));
  /* 11a64fb1 mov dword ptr [0x11a6c488], eax */
  w32((uint32_t)(0x11a6c488), (EAX));
L_11a64fb6:;
  /* 11a64fb6 pop edi */
  EDI = (pop32());
  /* 11a64fb7 pop esi */
  ESI = (pop32());
  /* 11a64fb8 pop ebx */
  EBX = (pop32());
  /* 11a64fb9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a64fba ret  */
  ESPCHK(0x11a64c92u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fbb @ 0x11a64fbb (777 bytes, 275 insns) */
void f_11a64fbb(void) {
  FTRACE(0x11a64fbbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a64fbb push ebp */
  push32((uint32_t)(EBP));
  /* 11a64fbc mov ebp, esp */
  EBP = (ESP);
  /* 11a64fbe sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a64fc1 mov eax, dword ptr [0x11a6c48c] */
  EAX = (r32((uint32_t)(0x11a6c48c)));
  /* 11a64fc6 mov edx, dword ptr [0x11a6c490] */
  EDX = (r32((uint32_t)(0x11a6c490)));
  /* 11a64fcc push ebx */
  push32((uint32_t)(EBX));
  /* 11a64fcd push esi */
  push32((uint32_t)(ESI));
  /* 11a64fce lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a64fd1 push edi */
  push32((uint32_t)(EDI));
  /* 11a64fd2 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11a64fd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a64fd8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a64fdb lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11a64fde and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11a64fe1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a64fe4 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a64fe7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a64fe8 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a64feb jge 0x11a64ffb */
  if ((C.sf==C.of)) goto L_11a64ffb;
  /* 11a64fed or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11a64ff0 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a64ff2 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a64ff6 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11a64ff9 jmp 0x11a6500b */
  goto L_11a6500b;
L_11a64ffb:;
  /* 11a64ffb add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a64ffe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a65001 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a65003 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a65005 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11a65008 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a6500b:;
  /* 11a6500b mov eax, dword ptr [0x11a6c484] */
  EAX = (r32((uint32_t)(0x11a6c484)));
  /* 11a65010 mov ebx, eax */
  EBX = (EAX);
  /* 11a65012 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65014 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a65017 jae 0x11a65032 */
  if (!C.cf) goto L_11a65032;
L_11a65019:;
  /* 11a65019 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a6501c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11a6501e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a65021 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a65023 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a65025 jne 0x11a65032 */
  if (!C.zf) goto L_11a65032;
  /* 11a65027 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6502a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6502d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a65030 jb 0x11a65019 */
  if (C.cf) goto L_11a65019;
L_11a65032:;
  /* 11a65032 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65035 jne 0x11a650b0 */
  if (!C.zf) goto L_11a650b0;
  /* 11a65037 mov ebx, edx */
  EBX = (EDX);
L_11a65039:;
  /* 11a65039 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6503b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a6503e jae 0x11a65055 */
  if (!C.cf) goto L_11a65055;
  /* 11a65040 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a65043 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11a65045 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a65048 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a6504a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a6504c jne 0x11a65053 */
  if (!C.zf) goto L_11a65053;
  /* 11a6504e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65051 jmp 0x11a65039 */
  goto L_11a65039;
L_11a65053:;
  /* 11a65053 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a65055:;
  /* 11a65055 jne 0x11a650b0 */
  if (!C.zf) goto L_11a650b0;
L_11a65057:;
  /* 11a65057 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6505a jae 0x11a6506d */
  if (!C.cf) goto L_11a6506d;
  /* 11a6505c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65060 jne 0x11a6506a */
  if (!C.zf) goto L_11a6506a;
  /* 11a65062 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65065 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a65068 jmp 0x11a65057 */
  goto L_11a65057;
L_11a6506a:;
  /* 11a6506a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a6506d:;
  /* 11a6506d jne 0x11a65095 */
  if (!C.zf) goto L_11a65095;
  /* 11a6506f mov ebx, edx */
  EBX = (EDX);
L_11a65071:;
  /* 11a65071 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65073 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a65076 jae 0x11a65085 */
  if (!C.cf) goto L_11a65085;
  /* 11a65078 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6507c jne 0x11a65083 */
  if (!C.zf) goto L_11a65083;
  /* 11a6507e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65081 jmp 0x11a65071 */
  goto L_11a65071;
L_11a65083:;
  /* 11a65083 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a65085:;
  /* 11a65085 jne 0x11a65095 */
  if (!C.zf) goto L_11a65095;
  /* 11a65087 call 0x11a652c4 */
  push32(0x11a6508cu); f_11a652c4();
  /* 11a6508c mov ebx, eax */
  EBX = (EAX);
  /* 11a6508e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a65090 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a65093 je 0x11a650a9 */
  if (C.zf) goto L_11a650a9;
L_11a65095:;
  /* 11a65095 push ebx */
  push32((uint32_t)(EBX));
  /* 11a65096 call 0x11a65375 */
  push32(0x11a6509bu); f_11a65375();
  /* 11a6509b pop ecx */
  ECX = (pop32());
  /* 11a6509c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a6509f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a650a1 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a650a4 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a650a7 jne 0x11a650b0 */
  if (!C.zf) goto L_11a650b0;
L_11a650a9:;
  /* 11a650a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a650ab jmp 0x11a652bf */
  goto L_11a652bf;
L_11a650b0:;
  /* 11a650b0 mov dword ptr [0x11a6c484], ebx */
  w32((uint32_t)(0x11a6c484), (EBX));
  /* 11a650b6 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a650b9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11a650bb cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a650be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a650c1 je 0x11a650d7 */
  if (C.zf) goto L_11a650d7;
  /* 11a650c3 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11a650ca mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11a650ce and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a650d1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a650d3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a650d5 jne 0x11a6510e */
  if (!C.zf) goto L_11a6510e;
L_11a650d7:;
  /* 11a650d7 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11a650dd mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11a650e0 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a650e3 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11a650e6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a650ea lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11a650ed or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11a650ef mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11a650f2 jne 0x11a6510b */
  if (!C.zf) goto L_11a6510b;
L_11a650f4:;
  /* 11a650f4 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11a650fa inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a650fd and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a65100 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65103 mov edi, esi */
  EDI = (ESI);
  /* 11a65105 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11a65107 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11a65109 je 0x11a650f4 */
  if (C.zf) goto L_11a650f4;
L_11a6510b:;
  /* 11a6510b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11a6510e:;
  /* 11a6510e mov ecx, edx */
  ECX = (EDX);
  /* 11a65110 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a65112 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a65118 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a6511f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a65122 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11a65126 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11a65128 jne 0x11a65137 */
  if (!C.zf) goto L_11a65137;
  /* 11a6512a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11a65131 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11a65133 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a65136 pop edi */
  EDI = (pop32());
L_11a65137:;
  /* 11a65137 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a65139 jl 0x11a65140 */
  if ((C.sf!=C.of)) goto L_11a65140;
  /* 11a6513b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a6513d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a6513e jmp 0x11a65137 */
  goto L_11a65137;
L_11a65140:;
  /* 11a65140 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a65143 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11a65147 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11a65149 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6514c mov esi, ecx */
  ESI = (ECX);
  /* 11a6514e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a65151 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11a65154 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a65155 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65158 jle 0x11a6515d */
  if ((C.zf||C.sf!=C.of)) goto L_11a6515d;
  /* 11a6515a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a6515c pop esi */
  ESI = (pop32());
L_11a6515d:;
  /* 11a6515d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6515f je 0x11a65272 */
  if (C.zf) goto L_11a65272;
  /* 11a65165 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a65168 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6516b jne 0x11a651ce */
  if (!C.zf) goto L_11a651ce;
  /* 11a6516d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65170 jge 0x11a6519d */
  if ((C.sf==C.of)) goto L_11a6519d;
  /* 11a65172 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a65177 mov ecx, edi */
  ECX = (EDI);
  /* 11a65179 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a6517b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a6517e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11a65182 not ebx */
  EBX = (~(EBX));
  /* 11a65184 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11a65187 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11a6518b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11a6518f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11a65191 jne 0x11a651cb */
  if (!C.zf) goto L_11a651cb;
  /* 11a65193 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a65196 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a65199 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11a6519b jmp 0x11a651ce */
  goto L_11a651ce;
L_11a6519d:;
  /* 11a6519d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11a651a0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a651a5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a651a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a651aa lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11a651ae lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11a651b5 not ebx */
  EBX = (~(EBX));
  /* 11a651b7 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a651b9 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11a651bb mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11a651be jne 0x11a651cb */
  if (!C.zf) goto L_11a651cb;
  /* 11a651c0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a651c3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a651c6 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a651c9 jmp 0x11a651ce */
  goto L_11a651ce;
L_11a651cb:;
  /* 11a651cb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a651ce:;
  /* 11a651ce mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a651d1 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11a651d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a651d8 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11a651db mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a651de mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11a651e1 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11a651e4 je 0x11a6527e */
  if (C.zf) goto L_11a6527e;
  /* 11a651ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a651ed mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11a651f1 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11a651f4 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11a651f7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a651fa mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a651fd mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a65200 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11a65203 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a65206 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65209 jne 0x11a6526f */
  if (!C.zf) goto L_11a6526f;
  /* 11a6520b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11a6520f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65212 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11a65215 jge 0x11a65240 */
  if ((C.sf==C.of)) goto L_11a65240;
  /* 11a65217 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a65219 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a6521d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11a65221 jne 0x11a6522e */
  if (!C.zf) goto L_11a6522e;
  /* 11a65223 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a65228 mov ecx, esi */
  ECX = (ESI);
  /* 11a6522a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a6522c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11a6522e:;
  /* 11a6522e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a65233 mov ecx, esi */
  ECX = (ESI);
  /* 11a65235 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a65237 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a6523a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a6523e jmp 0x11a6526f */
  goto L_11a6526f;
L_11a65240:;
  /* 11a65240 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a65242 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a65246 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11a6524a jne 0x11a65259 */
  if (!C.zf) goto L_11a65259;
  /* 11a6524c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11a6524f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a65254 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a65256 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11a65259:;
  /* 11a65259 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a6525c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11a65263 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11a65266 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11a6526b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a6526d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11a6526f:;
  /* 11a6526f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11a65272:;
  /* 11a65272 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a65274 je 0x11a65281 */
  if (C.zf) goto L_11a65281;
  /* 11a65276 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a65278 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11a6527c jmp 0x11a65281 */
  goto L_11a65281;
L_11a6527e:;
  /* 11a6527e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11a65281:;
  /* 11a65281 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11a65284 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65286 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11a65289 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a6528b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11a6528f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11a65292 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a65294 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a65296 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11a65299 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a6529b jne 0x11a652b7 */
  if (!C.zf) goto L_11a652b7;
  /* 11a6529d cmp ebx, dword ptr [0x11a6c488] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a6c488))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a652a3 jne 0x11a652b7 */
  if (!C.zf) goto L_11a652b7;
  /* 11a652a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a652a8 cmp ecx, dword ptr [0x11a6c480] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11a6c480))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a652ae jne 0x11a652b7 */
  if (!C.zf) goto L_11a652b7;
  /* 11a652b0 and dword ptr [0x11a6c488], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a6c488)))&(0x0u); w32((uint32_t)(0x11a6c488), (_r)); fl_logic(_r,32); }
L_11a652b7:;
  /* 11a652b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a652ba mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a652bc lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11a652bf:;
  /* 11a652bf pop edi */
  EDI = (pop32());
  /* 11a652c0 pop esi */
  ESI = (pop32());
  /* 11a652c1 pop ebx */
  EBX = (pop32());
  /* 11a652c2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a652c3 ret  */
  ESPCHK(0x11a64fbbu, _esp0);
  ESP += 4; return;
}

/* FUN_100052c4 @ 0x11a652c4 (177 bytes, 53 insns) */
void f_11a652c4(void) {
  FTRACE(0x11a652c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a652c4 mov eax, dword ptr [0x11a6c48c] */
  EAX = (r32((uint32_t)(0x11a6c48c)));
  /* 11a652c9 mov ecx, dword ptr [0x11a6c47c] */
  ECX = (r32((uint32_t)(0x11a6c47c)));
  /* 11a652cf push esi */
  push32((uint32_t)(ESI));
  /* 11a652d0 push edi */
  push32((uint32_t)(EDI));
  /* 11a652d1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a652d3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a652d5 jne 0x11a65307 */
  if (!C.zf) goto L_11a65307;
  /* 11a652d7 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11a652db shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a652de push eax */
  push32((uint32_t)(EAX));
  /* 11a652df push dword ptr [0x11a6c490] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c490))));
  /* 11a652e5 push edi */
  push32((uint32_t)(EDI));
  /* 11a652e6 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a652ec call dword ptr [0x11a6803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6803c))), 0x11a652f2u);
  /* 11a652f2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a652f4 je 0x11a65357 */
  if (C.zf) goto L_11a65357;
  /* 11a652f6 add dword ptr [0x11a6c47c], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c47c))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11a6c47c), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a652fd mov dword ptr [0x11a6c490], eax */
  w32((uint32_t)(0x11a6c490), (EAX));
  /* 11a65302 mov eax, dword ptr [0x11a6c48c] */
  EAX = (r32((uint32_t)(0x11a6c48c)));
L_11a65307:;
  /* 11a65307 mov ecx, dword ptr [0x11a6c490] */
  ECX = (r32((uint32_t)(0x11a6c490)));
  /* 11a6530d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11a65312 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a65314 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a65317 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a6531d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11a65320 call dword ptr [0x11a6805c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6805c))), 0x11a65326u);
  /* 11a65326 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65328 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11a6532b je 0x11a65357 */
  if (C.zf) goto L_11a65357;
  /* 11a6532d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a6532f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11a65334 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11a65339 push edi */
  push32((uint32_t)(EDI));
  /* 11a6533a call dword ptr [0x11a68040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68040))), 0x11a65340u);
  /* 11a65340 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65342 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a65345 jne 0x11a6535b */
  if (!C.zf) goto L_11a6535b;
  /* 11a65347 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a6534a push edi */
  push32((uint32_t)(EDI));
  /* 11a6534b push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a65351 call dword ptr [0x11a68064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68064))), 0x11a65357u);
L_11a65357:;
  /* 11a65357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a65359 jmp 0x11a65372 */
  goto L_11a65372;
L_11a6535b:;
  /* 11a6535b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a6535f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a65361 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11a65364 inc dword ptr [0x11a6c48c] */
  { uint32_t _r=(r32((uint32_t)(0x11a6c48c)))+1; w32((uint32_t)(0x11a6c48c), (_r)); fl_inc(_r,32); }
  /* 11a6536a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a6536d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a65370 mov eax, esi */
  EAX = (ESI);
L_11a65372:;
  /* 11a65372 pop edi */
  EDI = (pop32());
  /* 11a65373 pop esi */
  ESI = (pop32());
  /* 11a65374 ret  */
  ESPCHK(0x11a652c4u, _esp0);
  ESP += 4; return;
}

/* FUN_10005375 @ 0x11a65375 (251 bytes, 85 insns) */
void f_11a65375(void) {
  FTRACE(0x11a65375u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a65375 push ebp */
  push32((uint32_t)(EBP));
  /* 11a65376 mov ebp, esp */
  EBP = (ESP);
  /* 11a65378 push ecx */
  push32((uint32_t)(ECX));
  /* 11a65379 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a6537c push ebx */
  push32((uint32_t)(EBX));
  /* 11a6537d push esi */
  push32((uint32_t)(ESI));
  /* 11a6537e push edi */
  push32((uint32_t)(EDI));
  /* 11a6537f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11a65382 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a65385 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a65387:;
  /* 11a65387 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a65389 jl 0x11a65390 */
  if ((C.sf!=C.of)) goto L_11a65390;
  /* 11a6538b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a6538d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a6538e jmp 0x11a65387 */
  goto L_11a65387;
L_11a65390:;
  /* 11a65390 mov eax, ebx */
  EAX = (EBX);
  /* 11a65392 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a65394 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a6539a pop edx */
  EDX = (pop32());
  /* 11a6539b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11a653a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a653a5:;
  /* 11a653a5 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11a653a8 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11a653ab add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a653ae dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a653af jne 0x11a653a5 */
  if (!C.zf) goto L_11a653a5;
  /* 11a653b1 mov edi, ebx */
  EDI = (EBX);
  /* 11a653b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a653b5 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11a653b8 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a653bb push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a653c0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a653c5 push edi */
  push32((uint32_t)(EDI));
  /* 11a653c6 call dword ptr [0x11a68040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68040))), 0x11a653ccu);
  /* 11a653cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a653ce jne 0x11a653d8 */
  if (!C.zf) goto L_11a653d8;
  /* 11a653d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a653d3 jmp 0x11a6546b */
  goto L_11a6546b;
L_11a653d8:;
  /* 11a653d8 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11a653de cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a653e0 ja 0x11a6541e */
  if ((!C.cf&&!C.zf)) goto L_11a6541e;
  /* 11a653e2 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11a653e5:;
  /* 11a653e5 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a653e9 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11a653f0 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11a653f6 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11a653fd mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a653ff lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11a65405 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a65408 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11a65412 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65417 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11a6541a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6541c jbe 0x11a653e5 */
  if ((C.cf||C.zf)) goto L_11a653e5;
L_11a6541e:;
  /* 11a6541e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a65421 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11a65424 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65429 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a6542b pop edi */
  EDI = (pop32());
  /* 11a6542c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a6542f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11a65432 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11a65435 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11a65438 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a6543b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a65440 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11a65447 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11a6544a mov cl, al */
  CL = (AL);
  /* 11a6544c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a6544e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a65450 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a65453 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11a65456 jne 0x11a6545b */
  if (!C.zf) goto L_11a6545b;
  /* 11a65458 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11a6545b:;
  /* 11a6545b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a65460 mov ecx, ebx */
  ECX = (EBX);
  /* 11a65462 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a65464 not edx */
  EDX = (~(EDX));
  /* 11a65466 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a65469 mov eax, ebx */
  EAX = (EBX);
L_11a6546b:;
  /* 11a6546b pop edi */
  EDI = (pop32());
  /* 11a6546c pop esi */
  ESI = (pop32());
  /* 11a6546d pop ebx */
  EBX = (pop32());
  /* 11a6546e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a6546f ret  */
  ESPCHK(0x11a65375u, _esp0);
  ESP += 4; return;
}

/* FUN_10005470 @ 0x11a65470 (758 bytes, 259 insns) */
void f_11a65470(void) {
  FTRACE(0x11a65470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a65470 push ebp */
  push32((uint32_t)(EBP));
  /* 11a65471 mov ebp, esp */
  EBP = (ESP);
  /* 11a65473 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65476 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a65479 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a6547c push ebx */
  push32((uint32_t)(EBX));
  /* 11a6547d push esi */
  push32((uint32_t)(ESI));
  /* 11a6547e push edi */
  push32((uint32_t)(EDI));
  /* 11a6547f mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a65482 mov edx, edi */
  EDX = (EDI);
  /* 11a65484 lea esi, [eax + 0x17] */
  ESI = ((uint32_t)(EAX + 0x17));
  /* 11a65487 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6548a mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11a6548d and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11a65490 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11a65493 mov ecx, edx */
  ECX = (EDX);
  /* 11a65495 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a6549b lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a654a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a654a5 mov ecx, dword ptr [edi - 4] */
  ECX = (r32((uint32_t)(EDI + -0x4)));
  /* 11a654a8 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a654a9 cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a654ab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11a654ae mov ebx, dword ptr [ecx + edi - 4] */
  EBX = (r32((uint32_t)(ECX + EDI*1 + -0x4)));
  /* 11a654b2 lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11a654b6 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11a654b9 jle 0x11a6561e */
  if ((C.zf||C.sf!=C.of)) goto L_11a6561e;
  /* 11a654bf test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11a654c2 jne 0x11a65617 */
  if (!C.zf) goto L_11a65617;
  /* 11a654c8 add ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a654ca cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a654cc jg 0x11a65617 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a65617;
  /* 11a654d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a654d5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a654d8 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a654d9 cmp ecx, 0x3f */
  { uint32_t _a=(ECX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a654dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a654df jbe 0x11a654e7 */
  if ((C.cf||C.zf)) goto L_11a654e7;
  /* 11a654e1 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a654e3 pop ecx */
  ECX = (pop32());
  /* 11a654e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11a654e7:;
  /* 11a654e7 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11a654ea cmp ebx, dword ptr [edi + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a654ed jne 0x11a65537 */
  if (!C.zf) goto L_11a65537;
  /* 11a654ef cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a654f2 jae 0x11a65513 */
  if (!C.cf) goto L_11a65513;
  /* 11a654f4 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a654f9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a654fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a654fe lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11a65502 not ebx */
  EBX = (~(EBX));
  /* 11a65504 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a65508 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a6550a jne 0x11a65537 */
  if (!C.zf) goto L_11a65537;
  /* 11a6550c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a6550f and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a65511 jmp 0x11a65537 */
  goto L_11a65537;
L_11a65513:;
  /* 11a65513 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65516 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a6551b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a6551d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a65520 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11a65524 not ebx */
  EBX = (~(EBX));
  /* 11a65526 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a6552d dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a6552f jne 0x11a65537 */
  if (!C.zf) goto L_11a65537;
  /* 11a65531 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a65534 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a65537:;
  /* 11a65537 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11a6553a mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11a6553d mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11a65540 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11a65543 mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 11a65546 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11a65549 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a6554c sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6554e add dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a65551 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65555 jle 0x11a65605 */
  if ((C.zf||C.sf!=C.of)) goto L_11a65605;
  /* 11a6555b mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11a6555e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a65561 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11a65564 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a65565 lea ecx, [ecx + esi - 4] */
  ECX = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11a65569 cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6556c jbe 0x11a65571 */
  if ((C.cf||C.zf)) goto L_11a65571;
  /* 11a6556e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a65570 pop edi */
  EDI = (pop32());
L_11a65571:;
  /* 11a65571 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a65574 lea ebx, [ebx + edi*8] */
  EBX = ((uint32_t)(EBX + EDI*8));
  /* 11a65577 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11a6557a mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a6557d mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11a65580 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a65583 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11a65586 mov dword ptr [ebx + 4], ecx */
  w32((uint32_t)(EBX + 0x4), (ECX));
  /* 11a65589 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a6558c mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11a6558f mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a65592 cmp ebx, dword ptr [ecx + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65595 jne 0x11a655f3 */
  if (!C.zf) goto L_11a655f3;
  /* 11a65597 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11a6559b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6559e mov byte ptr [ebp + 0x13], cl */
  w8((uint32_t)(EBP + 0x13), (CL));
  /* 11a655a1 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a655a3 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11a655a7 jae 0x11a655ca */
  if (!C.cf) goto L_11a655ca;
  /* 11a655a9 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a655ad jne 0x11a655bd */
  if (!C.zf) goto L_11a655bd;
  /* 11a655af mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a655b4 mov ecx, edi */
  ECX = (EDI);
  /* 11a655b6 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a655b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a655bb or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11a655bd:;
  /* 11a655bd lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11a655c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a655c6 mov ecx, edi */
  ECX = (EDI);
  /* 11a655c8 jmp 0x11a655ef */
  goto L_11a655ef;
L_11a655ca:;
  /* 11a655ca cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a655ce jne 0x11a655e0 */
  if (!C.zf) goto L_11a655e0;
  /* 11a655d0 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11a655d3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a655d8 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a655da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a655dd or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a655e0:;
  /* 11a655e0 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11a655e7 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11a655ea mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11a655ef:;
  /* 11a655ef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a655f1 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11a655f3:;
  /* 11a655f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a655f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a655f9 lea eax, [edx + esi - 4] */
  EAX = ((uint32_t)(EDX + ESI*1 + -0x4));
  /* 11a655fd mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a655ff mov dword ptr [ecx + eax - 4], ecx */
  w32((uint32_t)(ECX + EAX*1 + -0x4), (ECX));
  /* 11a65603 jmp 0x11a65608 */
  goto L_11a65608;
L_11a65605:;
  /* 11a65605 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
L_11a65608:;
  /* 11a65608 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11a6560b mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
  /* 11a6560e mov dword ptr [edx + esi - 8], eax */
  w32((uint32_t)(EDX + ESI*1 + -0x8), (EAX));
  /* 11a65612 jmp 0x11a6575e */
  goto L_11a6575e;
L_11a65617:;
  /* 11a65617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a65619 jmp 0x11a65761 */
  goto L_11a65761;
L_11a6561e:;
  /* 11a6561e jge 0x11a6575e */
  if ((C.sf==C.of)) goto L_11a6575e;
  /* 11a65624 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a65627 sub dword ptr [ebp + 0x10], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a6562a lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11a6562d mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11a65630 lea ebx, [ebx + esi - 4] */
  EBX = ((uint32_t)(EBX + ESI*1 + -0x4));
  /* 11a65634 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11a65637 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11a6563a sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11a6563d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a6563e mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11a65641 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65644 jbe 0x11a65649 */
  if ((C.cf||C.zf)) goto L_11a65649;
  /* 11a65646 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a65648 pop esi */
  ESI = (pop32());
L_11a65649:;
  /* 11a65649 test byte ptr [ebp - 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a6564d jne 0x11a656d8 */
  if (!C.zf) goto L_11a656d8;
  /* 11a65653 mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 11a65656 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11a65659 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a6565a cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6565d jbe 0x11a65662 */
  if ((C.cf||C.zf)) goto L_11a65662;
  /* 11a6565f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a65661 pop esi */
  ESI = (pop32());
L_11a65662:;
  /* 11a65662 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11a65665 cmp ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65668 jne 0x11a656b1 */
  if (!C.zf) goto L_11a656b1;
  /* 11a6566a cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6566d jae 0x11a6568d */
  if (!C.cf) goto L_11a6568d;
  /* 11a6566f mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a65674 mov ecx, esi */
  ECX = (ESI);
  /* 11a65676 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a65678 lea esi, [esi + eax + 4] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11a6567c not ebx */
  EBX = (~(EBX));
  /* 11a6567e and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a65682 dec byte ptr [esi] */
  { uint32_t _r=(r8((uint32_t)(ESI)))-1; w8((uint32_t)(ESI), (_r)); fl_dec(_r,8); }
  /* 11a65684 jne 0x11a656ae */
  if (!C.zf) goto L_11a656ae;
  /* 11a65686 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a65689 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a6568b jmp 0x11a656ae */
  goto L_11a656ae;
L_11a6568d:;
  /* 11a6568d lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11a65690 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a65695 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a65697 lea ecx, [esi + eax + 4] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11a6569b not ebx */
  EBX = (~(EBX));
  /* 11a6569d and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a656a4 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a656a6 jne 0x11a656ae */
  if (!C.zf) goto L_11a656ae;
  /* 11a656a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a656ab and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a656ae:;
  /* 11a656ae mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_11a656b1:;
  /* 11a656b1 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11a656b4 mov esi, dword ptr [edi + 4] */
  ESI = (r32((uint32_t)(EDI + 0x4)));
  /* 11a656b7 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11a656ba mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11a656bd mov esi, dword ptr [edi + 8] */
  ESI = (r32((uint32_t)(EDI + 0x8)));
  /* 11a656c0 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11a656c3 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11a656c6 add esi, dword ptr [ebp - 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a656c9 mov dword ptr [ebp + 0x10], esi */
  w32((uint32_t)(EBP + 0x10), (ESI));
  /* 11a656cc sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11a656cf dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a656d0 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a656d3 jbe 0x11a656d8 */
  if ((C.cf||C.zf)) goto L_11a656d8;
  /* 11a656d5 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a656d7 pop esi */
  ESI = (pop32());
L_11a656d8:;
  /* 11a656d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a656db mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11a656df lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11a656e2 mov dword ptr [ebx + 4], edi */
  w32((uint32_t)(EBX + 0x4), (EDI));
  /* 11a656e5 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11a656e8 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11a656eb mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a656ee mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11a656f1 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a656f4 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a656f7 jne 0x11a65755 */
  if (!C.zf) goto L_11a65755;
  /* 11a656f9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11a656fd cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65700 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11a65703 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a65705 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11a65709 jae 0x11a6572c */
  if (!C.cf) goto L_11a6572c;
  /* 11a6570b cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a6570f jne 0x11a6571f */
  if (!C.zf) goto L_11a6571f;
  /* 11a65711 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a65716 mov ecx, esi */
  ECX = (ESI);
  /* 11a65718 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a6571a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a6571d or dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11a6571f:;
  /* 11a6571f lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11a65723 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a65728 mov ecx, esi */
  ECX = (ESI);
  /* 11a6572a jmp 0x11a65751 */
  goto L_11a65751;
L_11a6572c:;
  /* 11a6572c cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a65730 jne 0x11a65742 */
  if (!C.zf) goto L_11a65742;
  /* 11a65732 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11a65735 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a6573a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a6573c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a6573f or dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a65742:;
  /* 11a65742 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11a65749 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11a6574c mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11a65751:;
  /* 11a65751 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a65753 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11a65755:;
  /* 11a65755 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a65758 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11a6575a mov dword ptr [eax + ebx - 4], eax */
  w32((uint32_t)(EAX + EBX*1 + -0x4), (EAX));
L_11a6575e:;
  /* 11a6575e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a65760 pop eax */
  EAX = (pop32());
L_11a65761:;
  /* 11a65761 pop edi */
  EDI = (pop32());
  /* 11a65762 pop esi */
  ESI = (pop32());
  /* 11a65763 pop ebx */
  EBX = (pop32());
  /* 11a65764 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a65765 ret  */
  ESPCHK(0x11a65470u, _esp0);
  ESP += 4; return;
}

/* FUN_10005766 @ 0x11a65766 (324 bytes, 102 insns) */
void f_11a65766(void) {
  FTRACE(0x11a65766u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a65766 cmp dword ptr [0x11a69800], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11a69800))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6576d push ebx */
  push32((uint32_t)(EBX));
  /* 11a6576e push ebp */
  push32((uint32_t)(EBP));
  /* 11a6576f push esi */
  push32((uint32_t)(ESI));
  /* 11a65770 push edi */
  push32((uint32_t)(EDI));
  /* 11a65771 jne 0x11a6577a */
  if (!C.zf) goto L_11a6577a;
  /* 11a65773 mov esi, 0x11a697f0 */
  ESI = (0x11a697f0u);
  /* 11a65778 jmp 0x11a65797 */
  goto L_11a65797;
L_11a6577a:;
  /* 11a6577a push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11a6577f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a65781 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a65787 call dword ptr [0x11a6805c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6805c))), 0x11a6578du);
  /* 11a6578d mov esi, eax */
  ESI = (EAX);
  /* 11a6578f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a65791 je 0x11a658a3 */
  if (C.zf) goto L_11a658a3;
L_11a65797:;
  /* 11a65797 mov ebp, dword ptr [0x11a68040] */
  EBP = (r32((uint32_t)(0x11a68040)));
  /* 11a6579d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a6579f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11a657a4 push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11a657a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a657ab call ebp */
  call_ind((uint32_t)(EBP), 0x11a657adu);
  /* 11a657ad mov edi, eax */
  EDI = (EAX);
  /* 11a657af test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a657b1 je 0x11a6588c */
  if (C.zf) goto L_11a6588c;
  /* 11a657b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a657b9 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11a657be push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a657c3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a657c4 push edi */
  push32((uint32_t)(EDI));
  /* 11a657c5 call ebp */
  call_ind((uint32_t)(EBP), 0x11a657c7u);
  /* 11a657c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a657c9 je 0x11a6587e */
  if (C.zf) goto L_11a6587e;
  /* 11a657cf mov eax, 0x11a697f0 */
  EAX = (0x11a697f0u);
  /* 11a657d4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a657d6 jne 0x11a657f6 */
  if (!C.zf) goto L_11a657f6;
  /* 11a657d8 cmp dword ptr [0x11a697f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a697f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a657df jne 0x11a657e6 */
  if (!C.zf) goto L_11a657e6;
  /* 11a657e1 mov dword ptr [0x11a697f0], eax */
  w32((uint32_t)(0x11a697f0), (EAX));
L_11a657e6:;
  /* 11a657e6 cmp dword ptr [0x11a697f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a697f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a657ed jne 0x11a6580b */
  if (!C.zf) goto L_11a6580b;
  /* 11a657ef mov dword ptr [0x11a697f4], eax */
  w32((uint32_t)(0x11a697f4), (EAX));
  /* 11a657f4 jmp 0x11a6580b */
  goto L_11a6580b;
L_11a657f6:;
  /* 11a657f6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a657f8 mov eax, dword ptr [0x11a697f4] */
  EAX = (r32((uint32_t)(0x11a697f4)));
  /* 11a657fd mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11a65800 mov dword ptr [0x11a697f4], esi */
  w32((uint32_t)(0x11a697f4), (ESI));
  /* 11a65806 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a65809 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11a6580b:;
  /* 11a6580b lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11a65811 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11a65817 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11a6581a lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11a6581d mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11a65820 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11a65823 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11a65826 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11a65828 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_11a6582d:;
  /* 11a6582d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a6582f cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65832 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11a65835 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a65836 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a65838 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a65839 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a6583a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a6583c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a6583f add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65842 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65848 jl 0x11a6582d */
  if ((C.sf!=C.of)) goto L_11a6582d;
  /* 11a6584a push ebx */
  push32((uint32_t)(EBX));
  /* 11a6584b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a6584d push edi */
  push32((uint32_t)(EDI));
  /* 11a6584e call 0x11a65fe0 */
  push32(0x11a65853u); f_11a65fe0();
  /* 11a65853 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a65856:;
  /* 11a65856 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a65859 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6585b cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6585d jae 0x11a6587a */
  if (!C.cf) goto L_11a6587a;
  /* 11a6585f or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11a65866 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11a65869 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11a6586b mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 11a65872 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65878 jmp 0x11a65856 */
  goto L_11a65856;
L_11a6587a:;
  /* 11a6587a mov eax, esi */
  EAX = (ESI);
  /* 11a6587c jmp 0x11a658a5 */
  goto L_11a658a5;
L_11a6587e:;
  /* 11a6587e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a65883 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a65885 push edi */
  push32((uint32_t)(EDI));
  /* 11a65886 call dword ptr [0x11a68068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68068))), 0x11a6588cu);
L_11a6588c:;
  /* 11a6588c cmp esi, 0x11a697f0 */
  { uint32_t _a=(ESI),_b=(0x11a697f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65892 je 0x11a658a3 */
  if (C.zf) goto L_11a658a3;
  /* 11a65894 push esi */
  push32((uint32_t)(ESI));
  /* 11a65895 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a65897 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a6589d call dword ptr [0x11a68064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68064))), 0x11a658a3u);
L_11a658a3:;
  /* 11a658a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a658a5:;
  /* 11a658a5 pop edi */
  EDI = (pop32());
  /* 11a658a6 pop esi */
  ESI = (pop32());
  /* 11a658a7 pop ebp */
  EBP = (pop32());
  /* 11a658a8 pop ebx */
  EBX = (pop32());
  /* 11a658a9 ret  */
  ESPCHK(0x11a65766u, _esp0);
  ESP += 4; return;
}

/* FUN_100058aa @ 0x11a658aa (86 bytes, 27 insns) */
void f_11a658aa(void) {
  FTRACE(0x11a658aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a658aa push esi */
  push32((uint32_t)(ESI));
  /* 11a658ab mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a658af push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a658b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a658b6 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a658b9 call dword ptr [0x11a68068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68068))), 0x11a658bfu);
  /* 11a658bf cmp dword ptr [0x11a6b810], esi */
  { uint32_t _a=(r32((uint32_t)(0x11a6b810))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a658c5 jne 0x11a658cf */
  if (!C.zf) goto L_11a658cf;
  /* 11a658c7 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a658ca mov dword ptr [0x11a6b810], eax */
  w32((uint32_t)(0x11a6b810), (EAX));
L_11a658cf:;
  /* 11a658cf cmp esi, 0x11a697f0 */
  { uint32_t _a=(ESI),_b=(0x11a697f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a658d5 je 0x11a658f7 */
  if (C.zf) goto L_11a658f7;
  /* 11a658d7 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a658da mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a658dc push esi */
  push32((uint32_t)(ESI));
  /* 11a658dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a658df mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a658e1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a658e3 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a658e6 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a658e9 push dword ptr [0x11a6c6c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c8))));
  /* 11a658ef call dword ptr [0x11a68064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68064))), 0x11a658f5u);
  /* 11a658f5 pop esi */
  ESI = (pop32());
  /* 11a658f6 ret  */
  ESPCHK(0x11a658aau, _esp0);
  ESP += 4; return;
L_11a658f7:;
  /* 11a658f7 or dword ptr [0x11a69800], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11a69800)))|(0xffffffffu); w32((uint32_t)(0x11a69800), (_r)); fl_logic(_r,32); }
  /* 11a658fe pop esi */
  ESI = (pop32());
  /* 11a658ff ret  */
  ESPCHK(0x11a658aau, _esp0);
  ESP += 4; return;
}

/* FUN_10005900 @ 0x11a65900 (194 bytes, 66 insns) */
void f_11a65900(void) {
  FTRACE(0x11a65900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a65900 push ebp */
  push32((uint32_t)(EBP));
  /* 11a65901 mov ebp, esp */
  EBP = (ESP);
  /* 11a65903 push ecx */
  push32((uint32_t)(ECX));
  /* 11a65904 push ebx */
  push32((uint32_t)(EBX));
  /* 11a65905 push esi */
  push32((uint32_t)(ESI));
  /* 11a65906 mov esi, dword ptr [0x11a697f4] */
  ESI = (r32((uint32_t)(0x11a697f4)));
  /* 11a6590c push edi */
  push32((uint32_t)(EDI));
L_11a6590d:;
  /* 11a6590d cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65911 je 0x11a659ab */
  if (C.zf) goto L_11a659ab;
  /* 11a65917 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a6591b lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11a65921 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11a65926:;
  /* 11a65926 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6592c jne 0x11a65967 */
  if (!C.zf) goto L_11a65967;
  /* 11a6592e mov eax, ebx */
  EAX = (EBX);
  /* 11a65930 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a65935 add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65938 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a6593d push eax */
  push32((uint32_t)(EAX));
  /* 11a6593e call dword ptr [0x11a68068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68068))), 0x11a65944u);
  /* 11a65944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a65946 je 0x11a65967 */
  if (C.zf) goto L_11a65967;
  /* 11a65948 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11a6594b dec dword ptr [0x11a6c3a8] */
  { uint32_t _r=(r32((uint32_t)(0x11a6c3a8)))-1; w32((uint32_t)(0x11a6c3a8), (_r)); fl_dec(_r,32); }
  /* 11a65951 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a65954 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a65956 je 0x11a6595c */
  if (C.zf) goto L_11a6595c;
  /* 11a65958 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6595a jbe 0x11a6595f */
  if ((C.cf||C.zf)) goto L_11a6595f;
L_11a6595c:;
  /* 11a6595c mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11a6595f:;
  /* 11a6595f inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a65962 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11a65965 je 0x11a65974 */
  if (C.zf) goto L_11a65974;
L_11a65967:;
  /* 11a65967 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6596d sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65970 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a65972 jge 0x11a65926 */
  if ((C.sf==C.of)) goto L_11a65926;
L_11a65974:;
  /* 11a65974 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65978 mov ecx, esi */
  ECX = (ESI);
  /* 11a6597a mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11a6597d je 0x11a659ab */
  if (C.zf) goto L_11a659ab;
  /* 11a6597f cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65983 jne 0x11a659ab */
  if (!C.zf) goto L_11a659ab;
  /* 11a65985 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a65987 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11a6598a pop edx */
  EDX = (pop32());
L_11a6598b:;
  /* 11a6598b cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6598e jne 0x11a6599c */
  if (!C.zf) goto L_11a6599c;
  /* 11a65990 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a65991 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65994 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6599a jl 0x11a6598b */
  if ((C.sf!=C.of)) goto L_11a6598b;
L_11a6599c:;
  /* 11a6599c cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a659a2 jne 0x11a659ab */
  if (!C.zf) goto L_11a659ab;
  /* 11a659a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a659a5 call 0x11a658aa */
  push32(0x11a659aau); f_11a658aa();
  /* 11a659aa pop ecx */
  ECX = (pop32());
L_11a659ab:;
  /* 11a659ab cmp esi, dword ptr [0x11a697f4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a697f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a659b1 je 0x11a659bd */
  if (C.zf) goto L_11a659bd;
  /* 11a659b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a659b7 jg 0x11a6590d */
  if ((!C.zf&&C.sf==C.of)) goto L_11a6590d;
L_11a659bd:;
  /* 11a659bd pop edi */
  EDI = (pop32());
  /* 11a659be pop esi */
  ESI = (pop32());
  /* 11a659bf pop ebx */
  EBX = (pop32());
  /* 11a659c0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a659c1 ret  */
  ESPCHK(0x11a65900u, _esp0);
  ESP += 4; return;
}

/* FUN_100059c2 @ 0x11a659c2 (87 bytes, 34 insns) */
void f_11a659c2(void) {
  FTRACE(0x11a659c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a659c2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a659c6 mov edx, 0x11a697f0 */
  EDX = (0x11a697f0u);
  /* 11a659cb push esi */
  push32((uint32_t)(ESI));
  /* 11a659cc mov ecx, edx */
  ECX = (EDX);
L_11a659ce:;
  /* 11a659ce cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a659d1 jbe 0x11a659d8 */
  if ((C.cf||C.zf)) goto L_11a659d8;
  /* 11a659d3 cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a659d6 jb 0x11a659e0 */
  if (C.cf) goto L_11a659e0;
L_11a659d8:;
  /* 11a659d8 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11a659da cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a659dc je 0x11a65a15 */
  if (C.zf) goto L_11a65a15;
  /* 11a659de jmp 0x11a659ce */
  goto L_11a659ce;
L_11a659e0:;
  /* 11a659e0 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11a659e2 jne 0x11a65a15 */
  if (!C.zf) goto L_11a65a15;
  /* 11a659e4 mov esi, eax */
  ESI = (EAX);
  /* 11a659e6 mov edx, 0x100 */
  EDX = (0x100u);
  /* 11a659eb and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11a659f1 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a659f3 jb 0x11a65a15 */
  if (C.cf) goto L_11a65a15;
  /* 11a659f5 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11a659f9 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11a659fb mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a659ff mov ecx, eax */
  ECX = (EAX);
  /* 11a65a01 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11a65a06 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65a08 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11a65a0a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65a0c pop esi */
  ESI = (pop32());
  /* 11a65a0d sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a65a10 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11a65a14 ret  */
  ESPCHK(0x11a659c2u, _esp0);
  ESP += 4; return;
L_11a65a15:;
  /* 11a65a15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a65a17 pop esi */
  ESI = (pop32());
  /* 11a65a18 ret  */
  ESPCHK(0x11a659c2u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a19 @ 0x11a65a19 (69 bytes, 19 insns) */
void f_11a65a19(void) {
  FTRACE(0x11a65a19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a65a19 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a65a1d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a65a21 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65a24 sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11a65a27 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 11a65a2b mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a65a2f movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11a65a32 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a65a34 and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11a65a37 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65a3d mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11a65a44 jne 0x11a65a5d */
  if (!C.zf) goto L_11a65a5d;
  /* 11a65a46 inc dword ptr [0x11a6c3a8] */
  { uint32_t _r=(r32((uint32_t)(0x11a6c3a8)))+1; w32((uint32_t)(0x11a6c3a8), (_r)); fl_inc(_r,32); }
  /* 11a65a4c cmp dword ptr [0x11a6c3a8], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c3a8))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65a53 jne 0x11a65a5d */
  if (!C.zf) goto L_11a65a5d;
  /* 11a65a55 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a65a57 call 0x11a65900 */
  push32(0x11a65a5cu); f_11a65900();
  /* 11a65a5c pop ecx */
  ECX = (pop32());
L_11a65a5d:;
  /* 11a65a5d ret  */
  ESPCHK(0x11a65a19u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a5e @ 0x11a65a5e (520 bytes, 180 insns) */
void f_11a65a5e(void) {
  FTRACE(0x11a65a5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a65a5e push ebp */
  push32((uint32_t)(EBP));
  /* 11a65a5f mov ebp, esp */
  EBP = (ESP);
  /* 11a65a61 push ecx */
  push32((uint32_t)(ECX));
  /* 11a65a62 push ecx */
  push32((uint32_t)(ECX));
  /* 11a65a63 push ebx */
  push32((uint32_t)(EBX));
  /* 11a65a64 push esi */
  push32((uint32_t)(ESI));
  /* 11a65a65 mov esi, dword ptr [0x11a6b810] */
  ESI = (r32((uint32_t)(0x11a6b810)));
  /* 11a65a6b push edi */
  push32((uint32_t)(EDI));
L_11a65a6c:;
  /* 11a65a6c mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a65a6f cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65a72 je 0x11a65b17 */
  if (C.zf) goto L_11a65b17;
  /* 11a65a78 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11a65a7b lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11a65a81 mov eax, edi */
  EAX = (EDI);
  /* 11a65a83 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65a85 sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65a88 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11a65a8b shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11a65a8e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65a90 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65a92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a65a95 jae 0x11a65ad1 */
  if (!C.cf) goto L_11a65ad1;
L_11a65a97:;
  /* 11a65a97 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11a65a99 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a65a9c cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65a9e jl 0x11a65aba */
  if ((C.sf!=C.of)) goto L_11a65aba;
  /* 11a65aa0 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65aa3 jbe 0x11a65aba */
  if ((C.cf||C.zf)) goto L_11a65aba;
  /* 11a65aa5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a65aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a65aa7 push eax */
  push32((uint32_t)(EAX));
  /* 11a65aa8 call 0x11a65c66 */
  push32(0x11a65aadu); f_11a65c66();
  /* 11a65aad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65ab0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a65ab2 jne 0x11a65b29 */
  if (!C.zf) goto L_11a65b29;
  /* 11a65ab4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a65ab7 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11a65aba:;
  /* 11a65aba add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65abd lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11a65ac3 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65ac8 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65aca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a65acd jb 0x11a65a97 */
  if (C.cf) goto L_11a65a97;
  /* 11a65acf jmp 0x11a65ad4 */
  goto L_11a65ad4;
L_11a65ad1:;
  /* 11a65ad1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a65ad4:;
  /* 11a65ad4 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11a65ad7 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a65ada lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11a65add mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a65ae0 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65ae2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a65ae5 jae 0x11a65b1a */
  if (!C.cf) goto L_11a65b1a;
L_11a65ae7:;
  /* 11a65ae7 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a65ae9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65aeb jl 0x11a65b06 */
  if ((C.sf!=C.of)) goto L_11a65b06;
  /* 11a65aed cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65af0 jbe 0x11a65b06 */
  if ((C.cf||C.zf)) goto L_11a65b06;
  /* 11a65af2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a65af3 push eax */
  push32((uint32_t)(EAX));
  /* 11a65af4 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11a65af7 call 0x11a65c66 */
  push32(0x11a65afcu); f_11a65c66();
  /* 11a65afc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65aff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a65b01 jne 0x11a65b29 */
  if (!C.zf) goto L_11a65b29;
  /* 11a65b03 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11a65b06:;
  /* 11a65b06 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a65b0d add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65b10 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65b13 jb 0x11a65ae7 */
  if (C.cf) goto L_11a65ae7;
  /* 11a65b15 jmp 0x11a65b1a */
  goto L_11a65b1a;
L_11a65b17:;
  /* 11a65b17 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a65b1a:;
  /* 11a65b1a mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11a65b1c cmp esi, dword ptr [0x11a6b810] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a6b810))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65b22 je 0x11a65b39 */
  if (C.zf) goto L_11a65b39;
  /* 11a65b24 jmp 0x11a65a6c */
  goto L_11a65a6c;
L_11a65b29:;
  /* 11a65b29 mov dword ptr [0x11a6b810], esi */
  w32((uint32_t)(0x11a6b810), (ESI));
  /* 11a65b2f sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a65b31 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11a65b34 jmp 0x11a65c61 */
  goto L_11a65c61;
L_11a65b39:;
  /* 11a65b39 mov eax, 0x11a697f0 */
  EAX = (0x11a697f0u);
  /* 11a65b3e mov edi, eax */
  EDI = (EAX);
L_11a65b40:;
  /* 11a65b40 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65b44 je 0x11a65b4c */
  if (C.zf) goto L_11a65b4c;
  /* 11a65b46 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65b4a jne 0x11a65b58 */
  if (!C.zf) goto L_11a65b58;
L_11a65b4c:;
  /* 11a65b4c mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11a65b4e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65b50 je 0x11a65c2d */
  if (C.zf) goto L_11a65c2d;
  /* 11a65b56 jmp 0x11a65b40 */
  goto L_11a65b40;
L_11a65b58:;
  /* 11a65b58 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11a65b5b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a65b5f mov esi, ebx */
  ESI = (EBX);
  /* 11a65b61 mov eax, ebx */
  EAX = (EBX);
  /* 11a65b63 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65b65 sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65b68 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11a65b6b shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11a65b6e add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65b71 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65b74 jne 0x11a65b87 */
  if (!C.zf) goto L_11a65b87;
L_11a65b76:;
  /* 11a65b76 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65b7a jge 0x11a65b87 */
  if ((C.sf==C.of)) goto L_11a65b87;
  /* 11a65b7c add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65b7f inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a65b82 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65b85 je 0x11a65b76 */
  if (C.zf) goto L_11a65b76;
L_11a65b87:;
  /* 11a65b87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a65b8a push 4 */
  push32((uint32_t)(0x4u));
  /* 11a65b8c shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11a65b8f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a65b94 push eax */
  push32((uint32_t)(EAX));
  /* 11a65b95 push esi */
  push32((uint32_t)(ESI));
  /* 11a65b96 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a65b99 call dword ptr [0x11a68040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68040))), 0x11a65b9fu);
  /* 11a65b9f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65ba1 jne 0x11a65c5f */
  if (!C.zf) goto L_11a65c5f;
  /* 11a65ba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a65ba9 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11a65bac push esi */
  push32((uint32_t)(ESI));
  /* 11a65bad call 0x11a65fe0 */
  push32(0x11a65bb2u); f_11a65fe0();
  /* 11a65bb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a65bb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65bb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a65bba mov ecx, ebx */
  ECX = (EBX);
  /* 11a65bbc jle 0x11a65bee */
  if ((C.zf||C.sf!=C.of)) goto L_11a65bee;
  /* 11a65bbe lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11a65bc1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a65bc4:;
  /* 11a65bc4 or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11a65bcb lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11a65bce mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11a65bd1 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11a65bd6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a65bd8 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a65bda mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11a65be1 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65be6 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65be9 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11a65bec jne 0x11a65bc4 */
  if (!C.zf) goto L_11a65bc4;
L_11a65bee:;
  /* 11a65bee mov dword ptr [0x11a6b810], edi */
  w32((uint32_t)(0x11a6b810), (EDI));
  /* 11a65bf4 lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11a65bfa:;
  /* 11a65bfa cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65bfc jae 0x11a65c0a */
  if (!C.cf) goto L_11a65c0a;
  /* 11a65bfe cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65c01 je 0x11a65c08 */
  if (C.zf) goto L_11a65c08;
  /* 11a65c03 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65c06 jmp 0x11a65bfa */
  goto L_11a65bfa;
L_11a65c08:;
  /* 11a65c08 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a65c0a:;
  /* 11a65c0a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65c0c and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11a65c0e mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11a65c11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a65c14 mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11a65c17 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11a65c1a sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a65c1c sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a65c1f lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11a65c23 lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11a65c29 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11a65c2b jmp 0x11a65c61 */
  goto L_11a65c61;
L_11a65c2d:;
  /* 11a65c2d call 0x11a65766 */
  push32(0x11a65c32u); f_11a65766();
  /* 11a65c32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a65c34 je 0x11a65c5f */
  if (C.zf) goto L_11a65c5f;
  /* 11a65c36 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a65c39 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11a65c3c lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11a65c40 mov dword ptr [0x11a6b810], eax */
  w32((uint32_t)(0x11a6b810), (EAX));
  /* 11a65c45 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a65c47 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11a65c4c sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65c4e mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a65c51 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11a65c54 sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a65c57 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11a65c5d jmp 0x11a65c61 */
  goto L_11a65c61;
L_11a65c5f:;
  /* 11a65c5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a65c61:;
  /* 11a65c61 pop edi */
  EDI = (pop32());
  /* 11a65c62 pop esi */
  ESI = (pop32());
  /* 11a65c63 pop ebx */
  EBX = (pop32());
  /* 11a65c64 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a65c65 ret  */
  ESPCHK(0x11a65a5eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005c66 @ 0x11a65c66 (292 bytes, 125 insns) */
void f_11a65c66(void) {
  FTRACE(0x11a65c66u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a65c66 push ebp */
  push32((uint32_t)(EBP));
  /* 11a65c67 mov ebp, esp */
  EBP = (ESP);
  /* 11a65c69 push ecx */
  push32((uint32_t)(ECX));
  /* 11a65c6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a65c6d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a65c70 push ebx */
  push32((uint32_t)(EBX));
  /* 11a65c71 push esi */
  push32((uint32_t)(ESI));
  /* 11a65c72 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11a65c75 push edi */
  push32((uint32_t)(EDI));
  /* 11a65c76 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11a65c78 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11a65c7e cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65c80 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a65c83 mov eax, edi */
  EAX = (EDI);
  /* 11a65c85 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a65c88 jb 0x11a65cab */
  if (C.cf) goto L_11a65cab;
  /* 11a65c8a lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11a65c8d mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a65c8f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65c91 jae 0x11a65c9a */
  if (!C.cf) goto L_11a65c9a;
  /* 11a65c93 add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a65c95 sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a65c98 jmp 0x11a65ca3 */
  goto L_11a65ca3;
L_11a65c9a:;
  /* 11a65c9a and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a65c9e lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11a65ca1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11a65ca3:;
  /* 11a65ca3 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11a65ca6 jmp 0x11a65d79 */
  goto L_11a65d79;
L_11a65cab:;
  /* 11a65cab add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65cad cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a65cb0 je 0x11a65cb4 */
  if (C.zf) goto L_11a65cb4;
  /* 11a65cb2 mov eax, esi */
  EAX = (ESI);
L_11a65cb4:;
  /* 11a65cb4 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11a65cb7 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65cb9 jae 0x11a65cfe */
  if (!C.cf) goto L_11a65cfe;
L_11a65cbb:;
  /* 11a65cbb mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11a65cbd test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11a65cbf jne 0x11a65cf1 */
  if (!C.zf) goto L_11a65cf1;
  /* 11a65cc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a65cc3 lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11a65cc6 pop esi */
  ESI = (pop32());
L_11a65cc7:;
  /* 11a65cc7 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a65cca jne 0x11a65cd0 */
  if (!C.zf) goto L_11a65cd0;
  /* 11a65ccc inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a65ccd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a65cce jmp 0x11a65cc7 */
  goto L_11a65cc7;
L_11a65cd0:;
  /* 11a65cd0 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65cd2 jae 0x11a65d22 */
  if (!C.cf) goto L_11a65d22;
  /* 11a65cd4 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65cd7 jne 0x11a65cde */
  if (!C.zf) goto L_11a65cde;
  /* 11a65cd9 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11a65cdc jmp 0x11a65cea */
  goto L_11a65cea;
L_11a65cde:;
  /* 11a65cde sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a65ce1 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65ce4 jb 0x11a65d83 */
  if (C.cf) goto L_11a65d83;
L_11a65cea:;
  /* 11a65cea mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11a65ced mov eax, ebx */
  EAX = (EBX);
  /* 11a65cef jmp 0x11a65cf6 */
  goto L_11a65cf6;
L_11a65cf1:;
  /* 11a65cf1 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11a65cf4 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a65cf6:;
  /* 11a65cf6 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11a65cf9 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65cfc jb 0x11a65cbb */
  if (C.cf) goto L_11a65cbb;
L_11a65cfe:;
  /* 11a65cfe lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11a65d01:;
  /* 11a65d01 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65d03 jae 0x11a65d83 */
  if (!C.cf) goto L_11a65d83;
  /* 11a65d05 lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11a65d08 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65d0b jae 0x11a65d83 */
  if (!C.cf) goto L_11a65d83;
  /* 11a65d0d mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a65d0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a65d11 jne 0x11a65d53 */
  if (!C.zf) goto L_11a65d53;
  /* 11a65d13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a65d15 lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11a65d18 pop eax */
  EAX = (pop32());
L_11a65d19:;
  /* 11a65d19 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a65d1c jne 0x11a65d43 */
  if (!C.zf) goto L_11a65d43;
  /* 11a65d1e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a65d1f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a65d20 jmp 0x11a65d19 */
  goto L_11a65d19;
L_11a65d22:;
  /* 11a65d22 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11a65d25 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65d28 jae 0x11a65d33 */
  if (!C.cf) goto L_11a65d33;
  /* 11a65d2a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65d2c mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11a65d2e mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11a65d31 jmp 0x11a65d3c */
  goto L_11a65d3c;
L_11a65d33:;
  /* 11a65d33 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a65d37 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11a65d3a mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11a65d3c:;
  /* 11a65d3c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a65d3e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65d41 jmp 0x11a65d79 */
  goto L_11a65d79;
L_11a65d43:;
  /* 11a65d43 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65d45 jae 0x11a65d5a */
  if (!C.cf) goto L_11a65d5a;
  /* 11a65d47 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a65d4a cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65d4d jb 0x11a65d83 */
  if (C.cf) goto L_11a65d83;
  /* 11a65d4f mov esi, ebx */
  ESI = (EBX);
  /* 11a65d51 jmp 0x11a65d01 */
  goto L_11a65d01;
L_11a65d53:;
  /* 11a65d53 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11a65d56 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65d58 jmp 0x11a65d01 */
  goto L_11a65d01;
L_11a65d5a:;
  /* 11a65d5a lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11a65d5d cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65d60 jae 0x11a65d6b */
  if (!C.cf) goto L_11a65d6b;
  /* 11a65d62 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65d64 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11a65d66 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a65d69 jmp 0x11a65d74 */
  goto L_11a65d74;
L_11a65d6b:;
  /* 11a65d6b and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a65d6f lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11a65d72 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11a65d74:;
  /* 11a65d74 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a65d76 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11a65d79:;
  /* 11a65d79 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a65d7c shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a65d7f sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65d81 jmp 0x11a65d85 */
  goto L_11a65d85;
L_11a65d83:;
  /* 11a65d83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a65d85:;
  /* 11a65d85 pop edi */
  EDI = (pop32());
  /* 11a65d86 pop esi */
  ESI = (pop32());
  /* 11a65d87 pop ebx */
  EBX = (pop32());
  /* 11a65d88 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a65d89 ret  */
  ESPCHK(0x11a65c66u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d8a @ 0x11a65d8a (169 bytes, 69 insns) */
void f_11a65d8a(void) {
  FTRACE(0x11a65d8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a65d8a push ebp */
  push32((uint32_t)(EBP));
  /* 11a65d8b mov ebp, esp */
  EBP = (ESP);
  /* 11a65d8d push ecx */
  push32((uint32_t)(ECX));
  /* 11a65d8e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a65d91 push ebx */
  push32((uint32_t)(EBX));
  /* 11a65d92 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a65d95 push esi */
  push32((uint32_t)(ESI));
  /* 11a65d96 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11a65d99 push edi */
  push32((uint32_t)(EDI));
  /* 11a65d9a mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a65d9d and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a65da1 mov eax, ebx */
  EAX = (EBX);
  /* 11a65da3 sub eax, dword ptr [edi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65da6 sar eax, 0xc */
  EAX = (sh_sar((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11a65da9 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65dac lea edi, [edi + eax*8 + 0x18] */
  EDI = ((uint32_t)(EDI + EAX*8 + 0x18));
  /* 11a65db0 jbe 0x11a65dc4 */
  if ((C.cf||C.zf)) goto L_11a65dc4;
  /* 11a65db2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a65db5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65db7 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11a65db9 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a65dbb mov dword ptr [edi + 4], 0xf1 */
  w32((uint32_t)(EDI + 0x4), (0xf1u));
  /* 11a65dc2 jmp 0x11a65e24 */
  goto L_11a65e24;
L_11a65dc4:;
  /* 11a65dc4 jae 0x11a65e2b */
  if (!C.cf) goto L_11a65e2b;
  /* 11a65dc6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a65dc9 lea esi, [edx + eax] */
  ESI = ((uint32_t)(EDX + EAX*1));
  /* 11a65dcc lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11a65dd2 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65dd4 jb 0x11a65e2b */
  if (C.cf) goto L_11a65e2b;
  /* 11a65dd6 lea eax, [ecx + edx] */
  EAX = ((uint32_t)(ECX + EDX*1));
L_11a65dd9:;
  /* 11a65dd9 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65ddb jae 0x11a65de7 */
  if (!C.cf) goto L_11a65de7;
  /* 11a65ddd cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a65de0 jne 0x11a65de5 */
  if (!C.zf) goto L_11a65de5;
  /* 11a65de2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a65de3 jmp 0x11a65dd9 */
  goto L_11a65dd9;
L_11a65de5:;
  /* 11a65de5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a65de7:;
  /* 11a65de7 jne 0x11a65e2b */
  if (!C.zf) goto L_11a65e2b;
  /* 11a65de9 mov al, byte ptr [ebp + 0x14] */
  AL = (r8((uint32_t)(EBP + 0x14)));
  /* 11a65dec mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11a65dee mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a65df0 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65df2 ja 0x11a65e1f */
  if ((!C.cf&&!C.zf)) goto L_11a65e1f;
  /* 11a65df4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65df6 jbe 0x11a65e1f */
  if ((C.cf||C.zf)) goto L_11a65e1f;
  /* 11a65df8 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11a65dfe cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65e00 jae 0x11a65e16 */
  if (!C.cf) goto L_11a65e16;
  /* 11a65e02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a65e04 mov dword ptr [ebx], esi */
  w32((uint32_t)(EBX), (ESI));
  /* 11a65e06 cmp byte ptr [esi], al */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a65e08 jne 0x11a65e11 */
  if (!C.zf) goto L_11a65e11;
L_11a65e0a:;
  /* 11a65e0a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a65e0b cmp byte ptr [esi + eax], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a65e0f je 0x11a65e0a */
  if (C.zf) goto L_11a65e0a;
L_11a65e11:;
  /* 11a65e11 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11a65e14 jmp 0x11a65e1f */
  goto L_11a65e1f;
L_11a65e16:;
  /* 11a65e16 and dword ptr [ebx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(0x0u); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a65e1a lea eax, [ebx + 8] */
  EAX = ((uint32_t)(EBX + 0x8));
  /* 11a65e1d mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11a65e1f:;
  /* 11a65e1f sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a65e22 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
L_11a65e24:;
  /* 11a65e24 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11a65e2b:;
  /* 11a65e2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a65e2e pop edi */
  EDI = (pop32());
  /* 11a65e2f pop esi */
  ESI = (pop32());
  /* 11a65e30 pop ebx */
  EBX = (pop32());
  /* 11a65e31 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a65e32 ret  */
  ESPCHK(0x11a65d8au, _esp0);
  ESP += 4; return;
}

/* FUN_10005e33 @ 0x11a65e33 (137 bytes, 50 insns) */
void f_11a65e33(void) {
  FTRACE(0x11a65e33u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a65e33 push ebx */
  push32((uint32_t)(EBX));
  /* 11a65e34 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a65e36 cmp dword ptr [0x11a6c3ac], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a6c3ac))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65e3c push esi */
  push32((uint32_t)(ESI));
  /* 11a65e3d push edi */
  push32((uint32_t)(EDI));
  /* 11a65e3e jne 0x11a65e82 */
  if (!C.zf) goto L_11a65e82;
  /* 11a65e40 push 0x11a68568 */
  push32((uint32_t)(0x11a68568u));
  /* 11a65e45 call dword ptr [0x11a68034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68034))), 0x11a65e4bu);
  /* 11a65e4b mov edi, eax */
  EDI = (EAX);
  /* 11a65e4d cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65e4f je 0x11a65eb8 */
  if (C.zf) goto L_11a65eb8;
  /* 11a65e51 mov esi, dword ptr [0x11a68038] */
  ESI = (r32((uint32_t)(0x11a68038)));
  /* 11a65e57 push 0x11a6855c */
  push32((uint32_t)(0x11a6855cu));
  /* 11a65e5c push edi */
  push32((uint32_t)(EDI));
  /* 11a65e5d call esi */
  call_ind((uint32_t)(ESI), 0x11a65e5fu);
  /* 11a65e5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a65e61 mov dword ptr [0x11a6c3ac], eax */
  w32((uint32_t)(0x11a6c3ac), (EAX));
  /* 11a65e66 je 0x11a65eb8 */
  if (C.zf) goto L_11a65eb8;
  /* 11a65e68 push 0x11a6854c */
  push32((uint32_t)(0x11a6854cu));
  /* 11a65e6d push edi */
  push32((uint32_t)(EDI));
  /* 11a65e6e call esi */
  call_ind((uint32_t)(ESI), 0x11a65e70u);
  /* 11a65e70 push 0x11a68538 */
  push32((uint32_t)(0x11a68538u));
  /* 11a65e75 push edi */
  push32((uint32_t)(EDI));
  /* 11a65e76 mov dword ptr [0x11a6c3b0], eax */
  w32((uint32_t)(0x11a6c3b0), (EAX));
  /* 11a65e7b call esi */
  call_ind((uint32_t)(ESI), 0x11a65e7du);
  /* 11a65e7d mov dword ptr [0x11a6c3b4], eax */
  w32((uint32_t)(0x11a6c3b4), (EAX));
L_11a65e82:;
  /* 11a65e82 mov eax, dword ptr [0x11a6c3b0] */
  EAX = (r32((uint32_t)(0x11a6c3b0)));
  /* 11a65e87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a65e89 je 0x11a65ea1 */
  if (C.zf) goto L_11a65ea1;
  /* 11a65e8b call eax */
  call_ind((uint32_t)(EAX), 0x11a65e8du);
  /* 11a65e8d mov ebx, eax */
  EBX = (EAX);
  /* 11a65e8f test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a65e91 je 0x11a65ea1 */
  if (C.zf) goto L_11a65ea1;
  /* 11a65e93 mov eax, dword ptr [0x11a6c3b4] */
  EAX = (r32((uint32_t)(0x11a6c3b4)));
  /* 11a65e98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a65e9a je 0x11a65ea1 */
  if (C.zf) goto L_11a65ea1;
  /* 11a65e9c push ebx */
  push32((uint32_t)(EBX));
  /* 11a65e9d call eax */
  call_ind((uint32_t)(EAX), 0x11a65e9fu);
  /* 11a65e9f mov ebx, eax */
  EBX = (EAX);
L_11a65ea1:;
  /* 11a65ea1 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a65ea5 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a65ea9 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a65ead push ebx */
  push32((uint32_t)(EBX));
  /* 11a65eae call dword ptr [0x11a6c3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6c3ac))), 0x11a65eb4u);
L_11a65eb4:;
  /* 11a65eb4 pop edi */
  EDI = (pop32());
  /* 11a65eb5 pop esi */
  ESI = (pop32());
  /* 11a65eb6 pop ebx */
  EBX = (pop32());
  /* 11a65eb7 ret  */
  ESPCHK(0x11a65e33u, _esp0);
  ESP += 4; return;
L_11a65eb8:;
  /* 11a65eb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a65eba jmp 0x11a65eb4 */
  goto L_11a65eb4;
}

/* _strncpy @ 0x11a65ec0 (254 bytes, 109 insns) */
void f_11a65ec0(void) {
  FTRACE(0x11a65ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a65ec0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a65ec4 push edi */
  push32((uint32_t)(EDI));
  /* 11a65ec5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a65ec7 je 0x11a65f43 */
  if (C.zf) goto L_11a65f43;
  /* 11a65ec9 push esi */
  push32((uint32_t)(ESI));
  /* 11a65eca push ebx */
  push32((uint32_t)(EBX));
  /* 11a65ecb mov ebx, ecx */
  EBX = (ECX);
  /* 11a65ecd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11a65ed1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11a65ed7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a65edb jne 0x11a65ee4 */
  if (!C.zf) goto L_11a65ee4;
  /* 11a65edd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a65ee0 jne 0x11a65f51 */
  if (!C.zf) goto L_11a65f51;
  /* 11a65ee2 jmp 0x11a65f05 */
  goto L_11a65f05;
L_11a65ee4:;
  /* 11a65ee4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a65ee6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a65ee7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a65ee9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a65eea dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a65eeb je 0x11a65f12 */
  if (C.zf) goto L_11a65f12;
  /* 11a65eed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a65eef je 0x11a65f1a */
  if (C.zf) goto L_11a65f1a;
  /* 11a65ef1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11a65ef7 jne 0x11a65ee4 */
  if (!C.zf) goto L_11a65ee4;
  /* 11a65ef9 mov ebx, ecx */
  EBX = (ECX);
  /* 11a65efb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a65efe jne 0x11a65f51 */
  if (!C.zf) goto L_11a65f51;
L_11a65f00:;
  /* 11a65f00 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11a65f03 je 0x11a65f12 */
  if (C.zf) goto L_11a65f12;
L_11a65f05:;
  /* 11a65f05 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a65f07 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a65f08 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a65f0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a65f0b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a65f0d je 0x11a65f3e */
  if (C.zf) goto L_11a65f3e;
  /* 11a65f0f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a65f10 jne 0x11a65f05 */
  if (!C.zf) goto L_11a65f05;
L_11a65f12:;
  /* 11a65f12 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a65f16 pop ebx */
  EBX = (pop32());
  /* 11a65f17 pop esi */
  ESI = (pop32());
  /* 11a65f18 pop edi */
  EDI = (pop32());
  /* 11a65f19 ret  */
  ESPCHK(0x11a65ec0u, _esp0);
  ESP += 4; return;
L_11a65f1a:;
  /* 11a65f1a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a65f20 je 0x11a65f34 */
  if (C.zf) goto L_11a65f34;
L_11a65f22:;
  /* 11a65f22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a65f24 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a65f25 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a65f26 je 0x11a65fb6 */
  if (C.zf) goto L_11a65fb6;
  /* 11a65f2c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a65f32 jne 0x11a65f22 */
  if (!C.zf) goto L_11a65f22;
L_11a65f34:;
  /* 11a65f34 mov ebx, ecx */
  EBX = (ECX);
  /* 11a65f36 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a65f39 jne 0x11a65fa7 */
  if (!C.zf) goto L_11a65fa7;
L_11a65f3b:;
  /* 11a65f3b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a65f3d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11a65f3e:;
  /* 11a65f3e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a65f3f jne 0x11a65f3b */
  if (!C.zf) goto L_11a65f3b;
  /* 11a65f41 pop ebx */
  EBX = (pop32());
  /* 11a65f42 pop esi */
  ESI = (pop32());
L_11a65f43:;
  /* 11a65f43 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a65f47 pop edi */
  EDI = (pop32());
  /* 11a65f48 ret  */
  ESPCHK(0x11a65ec0u, _esp0);
  ESP += 4; return;
L_11a65f49:;
  /* 11a65f49 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a65f4b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65f4e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a65f4f je 0x11a65f00 */
  if (C.zf) goto L_11a65f00;
L_11a65f51:;
  /* 11a65f51 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a65f56 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a65f58 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65f5a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a65f5d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a65f5f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11a65f61 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65f64 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a65f69 je 0x11a65f49 */
  if (C.zf) goto L_11a65f49;
  /* 11a65f6b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a65f6d je 0x11a65f9b */
  if (C.zf) goto L_11a65f9b;
  /* 11a65f6f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a65f71 je 0x11a65f91 */
  if (C.zf) goto L_11a65f91;
  /* 11a65f73 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a65f79 je 0x11a65f87 */
  if (C.zf) goto L_11a65f87;
  /* 11a65f7b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a65f81 jne 0x11a65f49 */
  if (!C.zf) goto L_11a65f49;
  /* 11a65f83 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a65f85 jmp 0x11a65f9f */
  goto L_11a65f9f;
L_11a65f87:;
  /* 11a65f87 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a65f8d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a65f8f jmp 0x11a65f9f */
  goto L_11a65f9f;
L_11a65f91:;
  /* 11a65f91 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a65f97 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a65f99 jmp 0x11a65f9f */
  goto L_11a65f9f;
L_11a65f9b:;
  /* 11a65f9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a65f9d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11a65f9f:;
  /* 11a65f9f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65fa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a65fa4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a65fa5 je 0x11a65fb1 */
  if (C.zf) goto L_11a65fb1;
L_11a65fa7:;
  /* 11a65fa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a65fa9:;
  /* 11a65fa9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11a65fab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a65fae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a65faf jne 0x11a65fa9 */
  if (!C.zf) goto L_11a65fa9;
L_11a65fb1:;
  /* 11a65fb1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11a65fb4 jne 0x11a65f3b */
  if (!C.zf) goto L_11a65f3b;
L_11a65fb6:;
  /* 11a65fb6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a65fba pop ebx */
  EBX = (pop32());
  /* 11a65fbb pop esi */
  ESI = (pop32());
  /* 11a65fbc pop edi */
  EDI = (pop32());
  /* 11a65fbd ret  */
  ESPCHK(0x11a65ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fbe @ 0x11a65fbe (27 bytes, 13 insns) */
void f_11a65fbe(void) {
  FTRACE(0x11a65fbeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a65fbe mov eax, dword ptr [0x11a6c3b8] */
  EAX = (r32((uint32_t)(0x11a6c3b8)));
  /* 11a65fc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a65fc5 je 0x11a65fd6 */
  if (C.zf) goto L_11a65fd6;
  /* 11a65fc7 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a65fcb call eax */
  call_ind((uint32_t)(EAX), 0x11a65fcdu);
  /* 11a65fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a65fcf pop ecx */
  ECX = (pop32());
  /* 11a65fd0 je 0x11a65fd6 */
  if (C.zf) goto L_11a65fd6;
  /* 11a65fd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a65fd4 pop eax */
  EAX = (pop32());
  /* 11a65fd5 ret  */
  ESPCHK(0x11a65fbeu, _esp0);
  ESP += 4; return;
L_11a65fd6:;
  /* 11a65fd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a65fd8 ret  */
  ESPCHK(0x11a65fbeu, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11a65fe0 (88 bytes, 40 insns) */
void f_11a65fe0(void) {
  FTRACE(0x11a65fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a65fe0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a65fe4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a65fe8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a65fea je 0x11a66033 */
  if (C.zf) goto L_11a66033;
  /* 11a65fec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a65fee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11a65ff2 push edi */
  push32((uint32_t)(EDI));
  /* 11a65ff3 mov edi, ecx */
  EDI = (ECX);
  /* 11a65ff5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a65ff8 jb 0x11a66027 */
  if (C.cf) goto L_11a66027;
  /* 11a65ffa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a65ffc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a65fff je 0x11a66009 */
  if (C.zf) goto L_11a66009;
  /* 11a66001 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11a66003:;
  /* 11a66003 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a66005 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a66006 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a66007 jne 0x11a66003 */
  if (!C.zf) goto L_11a66003;
L_11a66009:;
  /* 11a66009 mov ecx, eax */
  ECX = (EAX);
  /* 11a6600b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a6600e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66010 mov ecx, eax */
  ECX = (EAX);
  /* 11a66012 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a66015 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66017 mov ecx, edx */
  ECX = (EDX);
  /* 11a66019 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a6601c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a6601f je 0x11a66027 */
  if (C.zf) goto L_11a66027;
  /* 11a66021 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a66023 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a66025 je 0x11a6602d */
  if (C.zf) goto L_11a6602d;
L_11a66027:;
  /* 11a66027 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a66029 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a6602a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a6602b jne 0x11a66027 */
  if (!C.zf) goto L_11a66027;
L_11a6602d:;
  /* 11a6602d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a66031 pop edi */
  EDI = (pop32());
  /* 11a66032 ret  */
  ESPCHK(0x11a65fe0u, _esp0);
  ESP += 4; return;
L_11a66033:;
  /* 11a66033 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a66037 ret  */
  ESPCHK(0x11a65fe0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11a66038 (32 bytes, 18 insns) */
void f_11a66038(void) {
  FTRACE(0x11a66038u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a66038 push ebp */
  push32((uint32_t)(EBP));
  /* 11a66039 mov ebp, esp */
  EBP = (ESP);
  /* 11a6603b push ebx */
  push32((uint32_t)(EBX));
  /* 11a6603c push esi */
  push32((uint32_t)(ESI));
  /* 11a6603d push edi */
  push32((uint32_t)(EDI));
  /* 11a6603e push ebp */
  push32((uint32_t)(EBP));
  /* 11a6603f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a66041 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a66043 push 0x11a66050 */
  push32((uint32_t)(0x11a66050u));
  /* 11a66048 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a6604b call 0x11a679f0 */
  push32(0x11a66050u); f_11a679f0();
  /* 11a66050 pop ebp */
  EBP = (pop32());
  /* 11a66051 pop edi */
  EDI = (pop32());
  /* 11a66052 pop esi */
  ESI = (pop32());
  /* 11a66053 pop ebx */
  EBX = (pop32());
  /* 11a66054 mov esp, ebp */
  ESP = (EBP);
  /* 11a66056 pop ebp */
  EBP = (pop32());
  /* 11a66057 ret  */
  ESPCHK(0x11a66038u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11a6607a (104 bytes, 33 insns) */
void f_11a6607a(void) {
  FTRACE(0x11a6607au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a6607a push ebx */
  push32((uint32_t)(EBX));
  /* 11a6607b push esi */
  push32((uint32_t)(ESI));
  /* 11a6607c push edi */
  push32((uint32_t)(EDI));
  /* 11a6607d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a66081 push eax */
  push32((uint32_t)(EAX));
  /* 11a66082 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11a66084 push 0x11a66058 */
  push32((uint32_t)(0x11a66058u));
  /* 11a66089 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11a66090 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11a66097:;
  /* 11a66097 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11a6609b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a6609e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11a660a1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a660a4 je 0x11a660d4 */
  if (C.zf) goto L_11a660d4;
  /* 11a660a6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a660aa je 0x11a660d4 */
  if (C.zf) goto L_11a660d4;
  /* 11a660ac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11a660af mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11a660b2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11a660b6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11a660b9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a660be jne 0x11a660d2 */
  if (!C.zf) goto L_11a660d2;
  /* 11a660c0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11a660c5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11a660c9 call 0x11a6610e */
  push32(0x11a660ceu); f_11a6610e();
  /* 11a660ce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11a660d2u);
L_11a660d2:;
  /* 11a660d2 jmp 0x11a66097 */
  goto L_11a66097;
L_11a660d4:;
  /* 11a660d4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11a660db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a660de pop edi */
  EDI = (pop32());
  /* 11a660df pop esi */
  ESI = (pop32());
  /* 11a660e0 pop ebx */
  EBX = (pop32());
  /* 11a660e1 ret  */
  ESPCHK(0x11a6607au, _esp0);
  ESP += 4; return;
}

/* FUN_1000610e @ 0x11a6610e (24 bytes, 10 insns) */
void f_11a6610e(void) {
  FTRACE(0x11a6610eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a6610e push ebx */
  push32((uint32_t)(EBX));
  /* 11a6610f push ecx */
  push32((uint32_t)(ECX));
  /* 11a66110 mov ebx, 0x11a6b820 */
  EBX = (0x11a6b820u);
  /* 11a66115 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a66118 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11a6611b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11a6611e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11a66121 pop ecx */
  ECX = (pop32());
  /* 11a66122 pop ebx */
  EBX = (pop32());
  /* 11a66123 ret 4 */
  ESPCHK(0x11a6610eu, _esp0);
  ESP += 8; return;
}

/* FUN_100061ed @ 0x11a661ed (27 bytes, 11 insns) */
void f_11a661ed(void) {
  FTRACE(0x11a661edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a661ed push ebp */
  push32((uint32_t)(EBP));
  /* 11a661ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a661f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11a661f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11a661f7 push eax */
  push32((uint32_t)(EAX));
  /* 11a661f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11a661fb push eax */
  push32((uint32_t)(EAX));
  /* 11a661fc call 0x11a6607a */
  push32(0x11a66201u); f_11a6607a();
  /* 11a66201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66204 pop ebp */
  EBP = (pop32());
  /* 11a66205 ret 4 */
  ESPCHK(0x11a661edu, _esp0);
  ESP += 8; return;
}

/* FUN_10006208 @ 0x11a66208 (139 bytes, 59 insns) */
void f_11a66208(void) {
  FTRACE(0x11a66208u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a66208 push ebx */
  push32((uint32_t)(EBX));
  /* 11a66209 push ebp */
  push32((uint32_t)(EBP));
  /* 11a6620a push esi */
  push32((uint32_t)(ESI));
  /* 11a6620b push edi */
  push32((uint32_t)(EDI));
  /* 11a6620c mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
L_11a66210:;
  /* 11a66210 cmp dword ptr [0x11a6bba4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a6bba4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66217 jle 0x11a66228 */
  if ((C.zf||C.sf!=C.of)) goto L_11a66228;
  /* 11a66219 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11a6621c push 8 */
  push32((uint32_t)(0x8u));
  /* 11a6621e push eax */
  push32((uint32_t)(EAX));
  /* 11a6621f call 0x11a6687d */
  push32(0x11a66224u); f_11a6687d();
  /* 11a66224 pop ecx */
  ECX = (pop32());
  /* 11a66225 pop ecx */
  ECX = (pop32());
  /* 11a66226 jmp 0x11a66237 */
  goto L_11a66237;
L_11a66228:;
  /* 11a66228 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11a6622b mov ecx, dword ptr [0x11a6b998] */
  ECX = (r32((uint32_t)(0x11a6b998)));
  /* 11a66231 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11a66234 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11a66237:;
  /* 11a66237 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66239 je 0x11a6623e */
  if (C.zf) goto L_11a6623e;
  /* 11a6623b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a6623c jmp 0x11a66210 */
  goto L_11a66210;
L_11a6623e:;
  /* 11a6623e movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11a66241 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a66242 cmp esi, 0x2d */
  { uint32_t _a=(ESI),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66245 mov ebp, esi */
  EBP = (ESI);
  /* 11a66247 je 0x11a6624e */
  if (C.zf) goto L_11a6624e;
  /* 11a66249 cmp esi, 0x2b */
  { uint32_t _a=(ESI),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6624c jne 0x11a66252 */
  if (!C.zf) goto L_11a66252;
L_11a6624e:;
  /* 11a6624e movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11a66251 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11a66252:;
  /* 11a66252 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a66254:;
  /* 11a66254 cmp dword ptr [0x11a6bba4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a6bba4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6625b jle 0x11a66269 */
  if ((C.zf||C.sf!=C.of)) goto L_11a66269;
  /* 11a6625d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a6625f push esi */
  push32((uint32_t)(ESI));
  /* 11a66260 call 0x11a6687d */
  push32(0x11a66265u); f_11a6687d();
  /* 11a66265 pop ecx */
  ECX = (pop32());
  /* 11a66266 pop ecx */
  ECX = (pop32());
  /* 11a66267 jmp 0x11a66274 */
  goto L_11a66274;
L_11a66269:;
  /* 11a66269 mov eax, dword ptr [0x11a6b998] */
  EAX = (r32((uint32_t)(0x11a6b998)));
  /* 11a6626e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11a66271 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11a66274:;
  /* 11a66274 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66276 je 0x11a66285 */
  if (C.zf) goto L_11a66285;
  /* 11a66278 lea eax, [ebx + ebx*4] */
  EAX = ((uint32_t)(EBX + EBX*4));
  /* 11a6627b lea ebx, [esi + eax*2 - 0x30] */
  EBX = ((uint32_t)(ESI + EAX*2 + -0x30));
  /* 11a6627f movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11a66282 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a66283 jmp 0x11a66254 */
  goto L_11a66254;
L_11a66285:;
  /* 11a66285 cmp ebp, 0x2d */
  { uint32_t _a=(EBP),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66288 mov eax, ebx */
  EAX = (EBX);
  /* 11a6628a jne 0x11a6628e */
  if (!C.zf) goto L_11a6628e;
  /* 11a6628c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11a6628e:;
  /* 11a6628e pop edi */
  EDI = (pop32());
  /* 11a6628f pop esi */
  ESI = (pop32());
  /* 11a66290 pop ebp */
  EBP = (pop32());
  /* 11a66291 pop ebx */
  EBX = (pop32());
  /* 11a66292 ret  */
  ESPCHK(0x11a66208u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11a662a0 (129 bytes, 56 insns) */
void f_11a662a0(void) {
  FTRACE(0x11a662a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a662a0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a662a4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a662a8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11a662ae jne 0x11a662ec */
  if (!C.zf) goto L_11a662ec;
L_11a662b0:;
  /* 11a662b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a662b2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a662b4 jne 0x11a662e4 */
  if (!C.zf) goto L_11a662e4;
  /* 11a662b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a662b8 je 0x11a662e0 */
  if (C.zf) goto L_11a662e0;
  /* 11a662ba cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a662bd jne 0x11a662e4 */
  if (!C.zf) goto L_11a662e4;
  /* 11a662bf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11a662c1 je 0x11a662e0 */
  if (C.zf) goto L_11a662e0;
  /* 11a662c3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a662c6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a662c9 jne 0x11a662e4 */
  if (!C.zf) goto L_11a662e4;
  /* 11a662cb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a662cd je 0x11a662e0 */
  if (C.zf) goto L_11a662e0;
  /* 11a662cf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a662d2 jne 0x11a662e4 */
  if (!C.zf) goto L_11a662e4;
  /* 11a662d4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a662d7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a662da or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11a662dc jne 0x11a662b0 */
  if (!C.zf) goto L_11a662b0;
  /* 11a662de mov edi, edi */
  EDI = (EDI);
L_11a662e0:;
  /* 11a662e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a662e2 ret  */
  ESPCHK(0x11a662a0u, _esp0);
  ESP += 4; return;
  /* 11a662e3 nop  */
  /* nop */
L_11a662e4:;
  /* 11a662e4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a662e6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a662e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a662e9 ret  */
  ESPCHK(0x11a662a0u, _esp0);
  ESP += 4; return;
  /* 11a662ea mov edi, edi */
  EDI = (EDI);
L_11a662ec:;
  /* 11a662ec test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11a662f2 je 0x11a66308 */
  if (C.zf) goto L_11a66308;
  /* 11a662f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a662f6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a662f7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a662f9 jne 0x11a662e4 */
  if (!C.zf) goto L_11a662e4;
  /* 11a662fb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a662fc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a662fe je 0x11a662e0 */
  if (C.zf) goto L_11a662e0;
  /* 11a66300 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11a66306 je 0x11a662b0 */
  if (C.zf) goto L_11a662b0;
L_11a66308:;
  /* 11a66308 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11a6630b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6630e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a66310 jne 0x11a662e4 */
  if (!C.zf) goto L_11a662e4;
  /* 11a66312 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a66314 je 0x11a662e0 */
  if (C.zf) goto L_11a662e0;
  /* 11a66316 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a66319 jne 0x11a662e4 */
  if (!C.zf) goto L_11a662e4;
  /* 11a6631b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11a6631d je 0x11a662e0 */
  if (C.zf) goto L_11a662e0;
  /* 11a6631f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66322 jmp 0x11a662b0 */
  goto L_11a662b0;
}

/* FUN_10006324 @ 0x11a66324 (125 bytes, 51 insns) */
void f_11a66324(void) {
  FTRACE(0x11a66324u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a66324 cmp dword ptr [0x11a6c7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6632b push ebx */
  push32((uint32_t)(EBX));
  /* 11a6632c push esi */
  push32((uint32_t)(ESI));
  /* 11a6632d mov esi, dword ptr [0x11a6c154] */
  ESI = (r32((uint32_t)(0x11a6c154)));
  /* 11a66333 push edi */
  push32((uint32_t)(EDI));
  /* 11a66334 je 0x11a6639b */
  if (C.zf) goto L_11a6639b;
  /* 11a66336 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a66338 jne 0x11a66355 */
  if (!C.zf) goto L_11a66355;
  /* 11a6633a cmp dword ptr [0x11a6c15c], esi */
  { uint32_t _a=(r32((uint32_t)(0x11a6c15c))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66340 je 0x11a6639b */
  if (C.zf) goto L_11a6639b;
  /* 11a66342 call 0x11a66cb3 */
  push32(0x11a66347u); f_11a66cb3();
  /* 11a66347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66349 jne 0x11a6639b */
  if (!C.zf) goto L_11a6639b;
  /* 11a6634b mov esi, dword ptr [0x11a6c154] */
  ESI = (r32((uint32_t)(0x11a6c154)));
  /* 11a66351 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a66353 je 0x11a6639b */
  if (C.zf) goto L_11a6639b;
L_11a66355:;
  /* 11a66355 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a66359 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a6635b je 0x11a6639b */
  if (C.zf) goto L_11a6639b;
  /* 11a6635d push ebx */
  push32((uint32_t)(EBX));
  /* 11a6635e call 0x11a64090 */
  push32(0x11a66363u); f_11a64090();
  /* 11a66363 pop ecx */
  ECX = (pop32());
  /* 11a66364 mov edi, eax */
  EDI = (EAX);
L_11a66366:;
  /* 11a66366 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a66368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6636a je 0x11a6639b */
  if (C.zf) goto L_11a6639b;
  /* 11a6636c push eax */
  push32((uint32_t)(EAX));
  /* 11a6636d call 0x11a64090 */
  push32(0x11a66372u); f_11a64090();
  /* 11a66372 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66374 pop ecx */
  ECX = (pop32());
  /* 11a66375 jbe 0x11a6638e */
  if ((C.cf||C.zf)) goto L_11a6638e;
  /* 11a66377 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a66379 cmp byte ptr [eax + edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*1))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a6637d jne 0x11a6638e */
  if (!C.zf) goto L_11a6638e;
  /* 11a6637f push edi */
  push32((uint32_t)(EDI));
  /* 11a66380 push ebx */
  push32((uint32_t)(EBX));
  /* 11a66381 push eax */
  push32((uint32_t)(EAX));
  /* 11a66382 call 0x11a66c74 */
  push32(0x11a66387u); f_11a66c74();
  /* 11a66387 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6638a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6638c je 0x11a66393 */
  if (C.zf) goto L_11a66393;
L_11a6638e:;
  /* 11a6638e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66391 jmp 0x11a66366 */
  goto L_11a66366;
L_11a66393:;
  /* 11a66393 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a66395 lea eax, [eax + edi + 1] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0x1));
  /* 11a66399 jmp 0x11a6639d */
  goto L_11a6639d;
L_11a6639b:;
  /* 11a6639b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a6639d:;
  /* 11a6639d pop edi */
  EDI = (pop32());
  /* 11a6639e pop esi */
  ESI = (pop32());
  /* 11a6639f pop ebx */
  EBX = (pop32());
  /* 11a663a0 ret  */
  ESPCHK(0x11a66324u, _esp0);
  ESP += 4; return;
}

/* FUN_100063a1 @ 0x11a663a1 (511 bytes, 193 insns) */
void f_11a663a1(void) {
  FTRACE(0x11a663a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a663a1 push ebp */
  push32((uint32_t)(EBP));
  /* 11a663a2 mov ebp, esp */
  EBP = (ESP);
  /* 11a663a4 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a663a6 push 0x11a68580 */
  push32((uint32_t)(0x11a68580u));
  /* 11a663ab push 0x11a66130 */
  push32((uint32_t)(0x11a66130u));
  /* 11a663b0 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a663b6 push eax */
  push32((uint32_t)(EAX));
  /* 11a663b7 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a663be sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a663c1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a663c2 push esi */
  push32((uint32_t)(ESI));
  /* 11a663c3 push edi */
  push32((uint32_t)(EDI));
  /* 11a663c4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a663c7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a663c9 cmp dword ptr [0x11a6c3e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a6c3e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a663cf jne 0x11a66417 */
  if (!C.zf) goto L_11a66417;
  /* 11a663d1 push edi */
  push32((uint32_t)(EDI));
  /* 11a663d2 push edi */
  push32((uint32_t)(EDI));
  /* 11a663d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a663d5 pop ebx */
  EBX = (pop32());
  /* 11a663d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a663d7 push 0x11a68578 */
  push32((uint32_t)(0x11a68578u));
  /* 11a663dc mov esi, 0x100 */
  ESI = (0x100u);
  /* 11a663e1 push esi */
  push32((uint32_t)(ESI));
  /* 11a663e2 push edi */
  push32((uint32_t)(EDI));
  /* 11a663e3 call dword ptr [0x11a68024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68024))), 0x11a663e9u);
  /* 11a663e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a663eb je 0x11a663f5 */
  if (C.zf) goto L_11a663f5;
  /* 11a663ed mov dword ptr [0x11a6c3e0], ebx */
  w32((uint32_t)(0x11a6c3e0), (EBX));
  /* 11a663f3 jmp 0x11a66417 */
  goto L_11a66417;
L_11a663f5:;
  /* 11a663f5 push edi */
  push32((uint32_t)(EDI));
  /* 11a663f6 push edi */
  push32((uint32_t)(EDI));
  /* 11a663f7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a663f8 push 0x11a68574 */
  push32((uint32_t)(0x11a68574u));
  /* 11a663fd push esi */
  push32((uint32_t)(ESI));
  /* 11a663fe push edi */
  push32((uint32_t)(EDI));
  /* 11a663ff call dword ptr [0x11a68028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68028))), 0x11a66405u);
  /* 11a66405 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66407 je 0x11a6652f */
  if (C.zf) goto L_11a6652f;
  /* 11a6640d mov dword ptr [0x11a6c3e0], 2 */
  w32((uint32_t)(0x11a6c3e0), (0x2u));
L_11a66417:;
  /* 11a66417 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6641a jle 0x11a6642c */
  if ((C.zf||C.sf!=C.of)) goto L_11a6642c;
  /* 11a6641c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a6641f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a66422 call 0x11a665c5 */
  push32(0x11a66427u); f_11a665c5();
  /* 11a66427 pop ecx */
  ECX = (pop32());
  /* 11a66428 pop ecx */
  ECX = (pop32());
  /* 11a66429 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11a6642c:;
  /* 11a6642c mov eax, dword ptr [0x11a6c3e0] */
  EAX = (r32((uint32_t)(0x11a6c3e0)));
  /* 11a66431 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66434 jne 0x11a66453 */
  if (!C.zf) goto L_11a66453;
  /* 11a66436 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a66439 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a6643c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a6643f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a66442 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a66445 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a66448 call dword ptr [0x11a68028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68028))), 0x11a6644eu);
  /* 11a6644e jmp 0x11a66531 */
  goto L_11a66531;
L_11a66453:;
  /* 11a66453 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66456 jne 0x11a6652f */
  if (!C.zf) goto L_11a6652f;
  /* 11a6645c cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6645f jne 0x11a66469 */
  if (!C.zf) goto L_11a66469;
  /* 11a66461 mov eax, dword ptr [0x11a6c3d8] */
  EAX = (r32((uint32_t)(0x11a6c3d8)));
  /* 11a66466 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11a66469:;
  /* 11a66469 push edi */
  push32((uint32_t)(EDI));
  /* 11a6646a push edi */
  push32((uint32_t)(EDI));
  /* 11a6646b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a6646e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a66471 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11a66474 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a66476 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a66478 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11a6647b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a6647c push eax */
  push32((uint32_t)(EAX));
  /* 11a6647d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a66480 call dword ptr [0x11a6802c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6802c))), 0x11a66486u);
  /* 11a66486 mov ebx, eax */
  EBX = (EAX);
  /* 11a66488 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11a6648b cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6648d je 0x11a6652f */
  if (C.zf) goto L_11a6652f;
  /* 11a66493 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a66496 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11a66499 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6649c and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a6649e call 0x11a64bf0 */
  push32(0x11a664a3u); f_11a64bf0();
  /* 11a664a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a664a6 mov eax, esp */
  EAX = (ESP);
  /* 11a664a8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a664ab or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a664af jmp 0x11a664c4 */
  goto L_11a664c4;
  /* 11a664b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a664b3 pop eax */
  EAX = (pop32());
  /* 11a664b4 ret  */
  ESPCHK(0x11a663a1u, _esp0);
  ESP += 4; return;
  /* 11a664b5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a664b8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a664ba mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11a664bd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a664c1 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11a664c4:;
  /* 11a664c4 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a664c7 je 0x11a6652f */
  if (C.zf) goto L_11a6652f;
  /* 11a664c9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a664ca push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a664cd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a664d0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a664d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a664d5 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a664d8 call dword ptr [0x11a6802c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6802c))), 0x11a664deu);
  /* 11a664de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a664e0 je 0x11a6652f */
  if (C.zf) goto L_11a6652f;
  /* 11a664e2 push edi */
  push32((uint32_t)(EDI));
  /* 11a664e3 push edi */
  push32((uint32_t)(EDI));
  /* 11a664e4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a664e5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a664e8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a664eb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a664ee call dword ptr [0x11a68024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68024))), 0x11a664f4u);
  /* 11a664f4 mov esi, eax */
  ESI = (EAX);
  /* 11a664f6 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11a664f9 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a664fb je 0x11a6652f */
  if (C.zf) goto L_11a6652f;
  /* 11a664fd test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11a66501 je 0x11a66543 */
  if (C.zf) goto L_11a66543;
  /* 11a66503 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66506 je 0x11a665be */
  if (C.zf) goto L_11a665be;
  /* 11a6650c cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6650f jg 0x11a6652f */
  if ((!C.zf&&C.sf==C.of)) goto L_11a6652f;
  /* 11a66511 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a66514 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a66517 push ebx */
  push32((uint32_t)(EBX));
  /* 11a66518 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a6651b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a6651e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a66521 call dword ptr [0x11a68024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68024))), 0x11a66527u);
  /* 11a66527 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66529 jne 0x11a665be */
  if (!C.zf) goto L_11a665be;
L_11a6652f:;
  /* 11a6652f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a66531:;
  /* 11a66531 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11a66534 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a66537 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a6653e pop edi */
  EDI = (pop32());
  /* 11a6653f pop esi */
  ESI = (pop32());
  /* 11a66540 pop ebx */
  EBX = (pop32());
  /* 11a66541 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a66542 ret  */
  ESPCHK(0x11a663a1u, _esp0);
  ESP += 4; return;
L_11a66543:;
  /* 11a66543 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a6654a lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11a6654d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66550 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a66552 call 0x11a64bf0 */
  push32(0x11a66557u); f_11a64bf0();
  /* 11a66557 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a6655a mov ebx, esp */
  EBX = (ESP);
  /* 11a6655c mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11a6655f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a66563 jmp 0x11a66577 */
  goto L_11a66577;
  /* 11a66565 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a66567 pop eax */
  EAX = (pop32());
  /* 11a66568 ret  */
  ESPCHK(0x11a663a1u, _esp0);
  ESP += 4; return;
  /* 11a66569 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a6656c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a6656e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a66570 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a66574 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11a66577:;
  /* 11a66577 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66579 je 0x11a6652f */
  if (C.zf) goto L_11a6652f;
  /* 11a6657b push esi */
  push32((uint32_t)(ESI));
  /* 11a6657c push ebx */
  push32((uint32_t)(EBX));
  /* 11a6657d push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11a66580 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a66583 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a66586 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a66589 call dword ptr [0x11a68024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68024))), 0x11a6658fu);
  /* 11a6658f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66591 je 0x11a6652f */
  if (C.zf) goto L_11a6652f;
  /* 11a66593 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66596 push edi */
  push32((uint32_t)(EDI));
  /* 11a66597 push edi */
  push32((uint32_t)(EDI));
  /* 11a66598 jne 0x11a6659e */
  if (!C.zf) goto L_11a6659e;
  /* 11a6659a push edi */
  push32((uint32_t)(EDI));
  /* 11a6659b push edi */
  push32((uint32_t)(EDI));
  /* 11a6659c jmp 0x11a665a4 */
  goto L_11a665a4;
L_11a6659e:;
  /* 11a6659e push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a665a1 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11a665a4:;
  /* 11a665a4 push esi */
  push32((uint32_t)(ESI));
  /* 11a665a5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a665a6 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11a665ab push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a665ae call dword ptr [0x11a680d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a680d0))), 0x11a665b4u);
  /* 11a665b4 mov esi, eax */
  ESI = (EAX);
  /* 11a665b6 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a665b8 je 0x11a6652f */
  if (C.zf) goto L_11a6652f;
L_11a665be:;
  /* 11a665be mov eax, esi */
  EAX = (ESI);
  /* 11a665c0 jmp 0x11a66531 */
  goto L_11a66531;
}

/* FUN_100065c5 @ 0x11a665c5 (43 bytes, 20 insns) */
void f_11a665c5(void) {
  FTRACE(0x11a665c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a665c5 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a665c9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a665cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a665cf push esi */
  push32((uint32_t)(ESI));
  /* 11a665d0 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11a665d3 je 0x11a665e2 */
  if (C.zf) goto L_11a665e2;
L_11a665d5:;
  /* 11a665d5 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a665d8 je 0x11a665e2 */
  if (C.zf) goto L_11a665e2;
  /* 11a665da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a665db mov esi, ecx */
  ESI = (ECX);
  /* 11a665dd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a665de test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a665e0 jne 0x11a665d5 */
  if (!C.zf) goto L_11a665d5;
L_11a665e2:;
  /* 11a665e2 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a665e5 pop esi */
  ESI = (pop32());
  /* 11a665e6 jne 0x11a665ed */
  if (!C.zf) goto L_11a665ed;
  /* 11a665e8 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a665ec ret  */
  ESPCHK(0x11a665c5u, _esp0);
  ESP += 4; return;
L_11a665ed:;
  /* 11a665ed mov eax, edx */
  EAX = (EDX);
  /* 11a665ef ret  */
  ESPCHK(0x11a665c5u, _esp0);
  ESP += 4; return;
}

/* FUN_100065f0 @ 0x11a665f0 (318 bytes, 123 insns) */
void f_11a665f0(void) {
  FTRACE(0x11a665f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a665f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a665f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a665f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a665f5 push 0x11a68598 */
  push32((uint32_t)(0x11a68598u));
  /* 11a665fa push 0x11a66130 */
  push32((uint32_t)(0x11a66130u));
  /* 11a665ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a66605 push eax */
  push32((uint32_t)(EAX));
  /* 11a66606 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a6660d sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a66610 push ebx */
  push32((uint32_t)(EBX));
  /* 11a66611 push esi */
  push32((uint32_t)(ESI));
  /* 11a66612 push edi */
  push32((uint32_t)(EDI));
  /* 11a66613 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a66616 mov eax, dword ptr [0x11a6c3e4] */
  EAX = (r32((uint32_t)(0x11a6c3e4)));
  /* 11a6661b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a6661d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6661f jne 0x11a6665f */
  if (!C.zf) goto L_11a6665f;
  /* 11a66621 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a66624 push eax */
  push32((uint32_t)(EAX));
  /* 11a66625 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a66627 pop esi */
  ESI = (pop32());
  /* 11a66628 push esi */
  push32((uint32_t)(ESI));
  /* 11a66629 push 0x11a68578 */
  push32((uint32_t)(0x11a68578u));
  /* 11a6662e push esi */
  push32((uint32_t)(ESI));
  /* 11a6662f call dword ptr [0x11a6801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6801c))), 0x11a66635u);
  /* 11a66635 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66637 je 0x11a6663d */
  if (C.zf) goto L_11a6663d;
  /* 11a66639 mov eax, esi */
  EAX = (ESI);
  /* 11a6663b jmp 0x11a6665a */
  goto L_11a6665a;
L_11a6663d:;
  /* 11a6663d lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a66640 push eax */
  push32((uint32_t)(EAX));
  /* 11a66641 push esi */
  push32((uint32_t)(ESI));
  /* 11a66642 push 0x11a68574 */
  push32((uint32_t)(0x11a68574u));
  /* 11a66647 push esi */
  push32((uint32_t)(ESI));
  /* 11a66648 push ebx */
  push32((uint32_t)(EBX));
  /* 11a66649 call dword ptr [0x11a68020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68020))), 0x11a6664fu);
  /* 11a6664f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66651 je 0x11a66725 */
  if (C.zf) goto L_11a66725;
  /* 11a66657 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a66659 pop eax */
  EAX = (pop32());
L_11a6665a:;
  /* 11a6665a mov dword ptr [0x11a6c3e4], eax */
  w32((uint32_t)(0x11a6c3e4), (EAX));
L_11a6665f:;
  /* 11a6665f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66662 jne 0x11a66688 */
  if (!C.zf) goto L_11a66688;
  /* 11a66664 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a66667 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66669 jne 0x11a66670 */
  if (!C.zf) goto L_11a66670;
  /* 11a6666b mov eax, dword ptr [0x11a6c3c8] */
  EAX = (r32((uint32_t)(0x11a6c3c8)));
L_11a66670:;
  /* 11a66670 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a66673 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a66676 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a66679 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a6667c push eax */
  push32((uint32_t)(EAX));
  /* 11a6667d call dword ptr [0x11a68020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68020))), 0x11a66683u);
  /* 11a66683 jmp 0x11a66727 */
  goto L_11a66727;
L_11a66688:;
  /* 11a66688 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6668b jne 0x11a66725 */
  if (!C.zf) goto L_11a66725;
  /* 11a66691 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66694 jne 0x11a6669e */
  if (!C.zf) goto L_11a6669e;
  /* 11a66696 mov eax, dword ptr [0x11a6c3d8] */
  EAX = (r32((uint32_t)(0x11a6c3d8)));
  /* 11a6669b mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11a6669e:;
  /* 11a6669e push ebx */
  push32((uint32_t)(EBX));
  /* 11a6669f push ebx */
  push32((uint32_t)(EBX));
  /* 11a666a0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a666a3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a666a6 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a666a9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a666ab sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a666ad and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11a666b0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a666b1 push eax */
  push32((uint32_t)(EAX));
  /* 11a666b2 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a666b5 call dword ptr [0x11a6802c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6802c))), 0x11a666bbu);
  /* 11a666bb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a666be cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a666c0 je 0x11a66725 */
  if (C.zf) goto L_11a66725;
  /* 11a666c2 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11a666c5 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11a666c8 mov eax, edi */
  EAX = (EDI);
  /* 11a666ca add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a666cd and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a666cf call 0x11a64bf0 */
  push32(0x11a666d4u); f_11a64bf0();
  /* 11a666d4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a666d7 mov esi, esp */
  ESI = (ESP);
  /* 11a666d9 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11a666dc push edi */
  push32((uint32_t)(EDI));
  /* 11a666dd push ebx */
  push32((uint32_t)(EBX));
  /* 11a666de push esi */
  push32((uint32_t)(ESI));
  /* 11a666df call 0x11a65fe0 */
  push32(0x11a666e4u); f_11a65fe0();
  /* 11a666e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a666e7 jmp 0x11a666f4 */
  goto L_11a666f4;
  /* 11a666e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a666eb pop eax */
  EAX = (pop32());
  /* 11a666ec ret  */
  ESPCHK(0x11a665f0u, _esp0);
  ESP += 4; return;
  /* 11a666ed mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a666f0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a666f2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11a666f4:;
  /* 11a666f4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a666f8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a666fa je 0x11a66725 */
  if (C.zf) goto L_11a66725;
  /* 11a666fc push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11a666ff push esi */
  push32((uint32_t)(ESI));
  /* 11a66700 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a66703 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a66706 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a66708 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a6670b call dword ptr [0x11a6802c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6802c))), 0x11a66711u);
  /* 11a66711 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66713 je 0x11a66725 */
  if (C.zf) goto L_11a66725;
  /* 11a66715 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a66718 push eax */
  push32((uint32_t)(EAX));
  /* 11a66719 push esi */
  push32((uint32_t)(ESI));
  /* 11a6671a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a6671d call dword ptr [0x11a6801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6801c))), 0x11a66723u);
  /* 11a66723 jmp 0x11a66727 */
  goto L_11a66727;
L_11a66725:;
  /* 11a66725 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a66727:;
  /* 11a66727 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11a6672a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a6672d mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a66734 pop edi */
  EDI = (pop32());
  /* 11a66735 pop esi */
  ESI = (pop32());
  /* 11a66736 pop ebx */
  EBX = (pop32());
  /* 11a66737 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a66738 ret  */
  ESPCHK(0x11a665f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006739 @ 0x11a66739 (9 bytes, 3 insns) */
void f_11a66739(void) {
  FTRACE(0x11a66739u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a66739 call 0x11a62839 */
  push32(0x11a6673eu); f_11a62839();
  /* 11a6673e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66741 ret  */
  ESPCHK(0x11a66739u, _esp0);
  ESP += 4; return;
}

/* FUN_10006742 @ 0x11a66742 (111 bytes, 44 insns) */
void f_11a66742(void) {
  FTRACE(0x11a66742u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a66742 push ebx */
  push32((uint32_t)(EBX));
  /* 11a66743 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a66745 cmp dword ptr [0x11a6c3c8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a6c3c8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6674b jne 0x11a66760 */
  if (!C.zf) goto L_11a66760;
  /* 11a6674d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a66751 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66754 jl 0x11a667af */
  if ((C.sf!=C.of)) goto L_11a667af;
  /* 11a66756 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66759 jg 0x11a667af */
  if ((!C.zf&&C.sf==C.of)) goto L_11a667af;
  /* 11a6675b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6675e pop ebx */
  EBX = (pop32());
  /* 11a6675f ret  */
  ESPCHK(0x11a66742u, _esp0);
  ESP += 4; return;
L_11a66760:;
  /* 11a66760 push esi */
  push32((uint32_t)(ESI));
  /* 11a66761 mov esi, 0x11a6c478 */
  ESI = (0x11a6c478u);
  /* 11a66766 push edi */
  push32((uint32_t)(EDI));
  /* 11a66767 push esi */
  push32((uint32_t)(ESI));
  /* 11a66768 call dword ptr [0x11a68014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68014))), 0x11a6676eu);
  /* 11a6676e cmp dword ptr [0x11a6c474], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a6c474))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66774 mov edi, dword ptr [0x11a68018] */
  EDI = (r32((uint32_t)(0x11a68018)));
  /* 11a6677a je 0x11a6678a */
  if (C.zf) goto L_11a6678a;
  /* 11a6677c push esi */
  push32((uint32_t)(ESI));
  /* 11a6677d call edi */
  call_ind((uint32_t)(EDI), 0x11a6677fu);
  /* 11a6677f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a66781 call 0x11a63740 */
  push32(0x11a66786u); f_11a63740();
  /* 11a66786 pop ecx */
  ECX = (pop32());
  /* 11a66787 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a66789 pop ebx */
  EBX = (pop32());
L_11a6678a:;
  /* 11a6678a push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a6678e call 0x11a667b1 */
  push32(0x11a66793u); f_11a667b1();
  /* 11a66793 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a66795 pop ecx */
  ECX = (pop32());
  /* 11a66796 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11a6679a je 0x11a667a6 */
  if (C.zf) goto L_11a667a6;
  /* 11a6679c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a6679e call 0x11a637a1 */
  push32(0x11a667a3u); f_11a637a1();
  /* 11a667a3 pop ecx */
  ECX = (pop32());
  /* 11a667a4 jmp 0x11a667a9 */
  goto L_11a667a9;
L_11a667a6:;
  /* 11a667a6 push esi */
  push32((uint32_t)(ESI));
  /* 11a667a7 call edi */
  call_ind((uint32_t)(EDI), 0x11a667a9u);
L_11a667a9:;
  /* 11a667a9 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a667ad pop edi */
  EDI = (pop32());
  /* 11a667ae pop esi */
  ESI = (pop32());
L_11a667af:;
  /* 11a667af pop ebx */
  EBX = (pop32());
  /* 11a667b0 ret  */
  ESPCHK(0x11a66742u, _esp0);
  ESP += 4; return;
}

/* FUN_100067b1 @ 0x11a667b1 (204 bytes, 71 insns) */
void f_11a667b1(void) {
  FTRACE(0x11a667b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a667b1 push ebp */
  push32((uint32_t)(EBP));
  /* 11a667b2 mov ebp, esp */
  EBP = (ESP);
  /* 11a667b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a667b5 cmp dword ptr [0x11a6c3c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a6c3c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a667bc push ebx */
  push32((uint32_t)(EBX));
  /* 11a667bd jne 0x11a667dc */
  if (!C.zf) goto L_11a667dc;
  /* 11a667bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a667c2 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a667c5 jl 0x11a6687a */
  if ((C.sf!=C.of)) goto L_11a6687a;
  /* 11a667cb cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a667ce jg 0x11a6687a */
  if ((!C.zf&&C.sf==C.of)) goto L_11a6687a;
  /* 11a667d4 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a667d7 jmp 0x11a6687a */
  goto L_11a6687a;
L_11a667dc:;
  /* 11a667dc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a667df cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a667e5 jge 0x11a6680f */
  if ((C.sf==C.of)) goto L_11a6680f;
  /* 11a667e7 cmp dword ptr [0x11a6bba4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a6bba4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a667ee jle 0x11a667fc */
  if ((C.zf||C.sf!=C.of)) goto L_11a667fc;
  /* 11a667f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a667f2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a667f3 call 0x11a6687d */
  push32(0x11a667f8u); f_11a6687d();
  /* 11a667f8 pop ecx */
  ECX = (pop32());
  /* 11a667f9 pop ecx */
  ECX = (pop32());
  /* 11a667fa jmp 0x11a66807 */
  goto L_11a66807;
L_11a667fc:;
  /* 11a667fc mov eax, dword ptr [0x11a6b998] */
  EAX = (r32((uint32_t)(0x11a6b998)));
  /* 11a66801 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11a66804 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_11a66807:;
  /* 11a66807 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66809 jne 0x11a6680f */
  if (!C.zf) goto L_11a6680f;
L_11a6680b:;
  /* 11a6680b mov eax, ebx */
  EAX = (EBX);
  /* 11a6680d jmp 0x11a6687a */
  goto L_11a6687a;
L_11a6680f:;
  /* 11a6680f mov edx, dword ptr [0x11a6b998] */
  EDX = (r32((uint32_t)(0x11a6b998)));
  /* 11a66815 mov eax, ebx */
  EAX = (EBX);
  /* 11a66817 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a6681a movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11a6681d test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11a66822 je 0x11a66832 */
  if (C.zf) goto L_11a66832;
  /* 11a66824 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11a66828 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11a6682b mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11a6682e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a66830 jmp 0x11a6683b */
  goto L_11a6683b;
L_11a66832:;
  /* 11a66832 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11a66836 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11a66839 push 1 */
  push32((uint32_t)(0x1u));
L_11a6683b:;
  /* 11a6683b pop eax */
  EAX = (pop32());
  /* 11a6683c lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11a6683f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a66841 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a66843 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a66845 push ecx */
  push32((uint32_t)(ECX));
  /* 11a66846 push eax */
  push32((uint32_t)(EAX));
  /* 11a66847 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a6684a push eax */
  push32((uint32_t)(EAX));
  /* 11a6684b push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11a66850 push dword ptr [0x11a6c3c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c3c8))));
  /* 11a66856 call 0x11a663a1 */
  push32(0x11a6685bu); f_11a663a1();
  /* 11a6685b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6685e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66860 je 0x11a6680b */
  if (C.zf) goto L_11a6680b;
  /* 11a66862 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66865 jne 0x11a6686d */
  if (!C.zf) goto L_11a6686d;
  /* 11a66867 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a6686b jmp 0x11a6687a */
  goto L_11a6687a;
L_11a6686d:;
  /* 11a6686d movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11a66871 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a66875 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a66878 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11a6687a:;
  /* 11a6687a pop ebx */
  EBX = (pop32());
  /* 11a6687b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a6687c ret  */
  ESPCHK(0x11a667b1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000687d @ 0x11a6687d (117 bytes, 46 insns) */
void f_11a6687d(void) {
  FTRACE(0x11a6687du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a6687d push ebp */
  push32((uint32_t)(EBP));
  /* 11a6687e mov ebp, esp */
  EBP = (ESP);
  /* 11a66880 push ecx */
  push32((uint32_t)(ECX));
  /* 11a66881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a66884 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11a66887 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6688d ja 0x11a6689b */
  if ((!C.cf&&!C.zf)) goto L_11a6689b;
  /* 11a6688f mov ecx, dword ptr [0x11a6b998] */
  ECX = (r32((uint32_t)(0x11a6b998)));
  /* 11a66895 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11a66899 jmp 0x11a668ed */
  goto L_11a668ed;
L_11a6689b:;
  /* 11a6689b mov ecx, eax */
  ECX = (EAX);
  /* 11a6689d push esi */
  push32((uint32_t)(ESI));
  /* 11a6689e mov esi, dword ptr [0x11a6b998] */
  ESI = (r32((uint32_t)(0x11a6b998)));
  /* 11a668a4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11a668a7 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 11a668aa test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11a668af pop esi */
  ESI = (pop32());
  /* 11a668b0 je 0x11a668c0 */
  if (C.zf) goto L_11a668c0;
  /* 11a668b2 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 11a668b6 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11a668b9 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 11a668bc push 2 */
  push32((uint32_t)(0x2u));
  /* 11a668be jmp 0x11a668c9 */
  goto L_11a668c9;
L_11a668c0:;
  /* 11a668c0 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 11a668c4 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11a668c7 push 1 */
  push32((uint32_t)(0x1u));
L_11a668c9:;
  /* 11a668c9 pop eax */
  EAX = (pop32());
  /* 11a668ca lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 11a668cd push 1 */
  push32((uint32_t)(0x1u));
  /* 11a668cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11a668d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a668d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a668d4 push eax */
  push32((uint32_t)(EAX));
  /* 11a668d5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a668d8 push eax */
  push32((uint32_t)(EAX));
  /* 11a668d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a668db call 0x11a665f0 */
  push32(0x11a668e0u); f_11a665f0();
  /* 11a668e0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a668e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a668e5 jne 0x11a668e9 */
  if (!C.zf) goto L_11a668e9;
  /* 11a668e7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a668e8 ret  */
  ESPCHK(0x11a6687du, _esp0);
  ESP += 4; return;
L_11a668e9:;
  /* 11a668e9 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_11a668ed:;
  /* 11a668ed and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11a668f0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a668f1 ret  */
  ESPCHK(0x11a6687du, _esp0);
  ESP += 4; return;
}

/* FUN_10006900 @ 0x11a66900 (664 bytes, 259 insns) [15 switch table(s)] */
void f_11a66900(void) {
  FTRACE(0x11a66900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a66900 push ebp */
  push32((uint32_t)(EBP));
  /* 11a66901 mov ebp, esp */
  EBP = (ESP);
  /* 11a66903 push edi */
  push32((uint32_t)(EDI));
  /* 11a66904 push esi */
  push32((uint32_t)(ESI));
  /* 11a66905 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a66908 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a6690b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a6690e mov eax, ecx */
  EAX = (ECX);
  /* 11a66910 mov edx, ecx */
  EDX = (ECX);
  /* 11a66912 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66914 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66916 jbe 0x11a66920 */
  if ((C.cf||C.zf)) goto L_11a66920;
  /* 11a66918 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6691a jb 0x11a66a98 */
  if (C.cf) goto L_11a66a98;
L_11a66920:;
  /* 11a66920 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a66926 jne 0x11a6693c */
  if (!C.zf) goto L_11a6693c;
  /* 11a66928 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a6692b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a6692e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66931 jb 0x11a6695c */
  if (C.cf) goto L_11a6695c;
  /* 11a66933 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a66935 jmp dword ptr [edx*4 + 0x11a66a48] */
  switch (EDX) {
    case 0: goto L_11a66a58;
    case 1: goto L_11a66a60;
    case 2: goto L_11a66a6c;
    case 3: goto L_11a66a80;
    default: x86_unimpl("switch@0x11a66935 out of table"); return;
  }
L_11a6693c:;
  /* 11a6693c mov eax, edi */
  EAX = (EDI);
  /* 11a6693e mov edx, 3 */
  EDX = (0x3u);
  /* 11a66943 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a66946 jb 0x11a66954 */
  if (C.cf) goto L_11a66954;
  /* 11a66948 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a6694b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6694d jmp dword ptr [eax*4 + 0x11a66960] */
  switch (EAX) {
    case 1: goto L_11a66970;
    case 2: goto L_11a6699c;
    case 3: goto L_11a669c0;
    default: x86_unimpl("switch@0x11a6694d out of table"); return;
  }
L_11a66954:;
  /* 11a66954 jmp dword ptr [ecx*4 + 0x11a66a58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11a66a58)))); return;
  /* 11a6695b nop  */
  /* nop */
L_11a6695c:;
  /* 11a6695c jmp dword ptr [ecx*4 + 0x11a669dc] */
  switch (ECX) {
    case 0: goto L_11a66a3f;
    case 1: goto L_11a66a2c;
    case 2: goto L_11a66a24;
    case 3: goto L_11a66a1c;
    case 4: goto L_11a66a14;
    case 5: goto L_11a66a0c;
    case 6: goto L_11a66a04;
    case 7: goto L_11a669fc;
    default: x86_unimpl("switch@0x11a6695c out of table"); return;
  }
  /* 11a66963 nop  */
  /* nop */
L_11a66970:;
  /* 11a66970 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a66972 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a66974 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a66976 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a66979 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a6697c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a6697f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a66982 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a66985 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66988 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6698b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6698e jb 0x11a6695c */
  if (C.cf) goto L_11a6695c;
  /* 11a66990 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a66992 jmp dword ptr [edx*4 + 0x11a66a48] */
  switch (EDX) {
    case 0: goto L_11a66a58;
    case 1: goto L_11a66a60;
    case 2: goto L_11a66a6c;
    case 3: goto L_11a66a80;
    default: x86_unimpl("switch@0x11a66992 out of table"); return;
  }
  /* 11a66999 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a6699c:;
  /* 11a6699c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a6699e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a669a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a669a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a669a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a669a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a669ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a669ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a669b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a669b4 jb 0x11a6695c */
  if (C.cf) goto L_11a6695c;
  /* 11a669b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a669b8 jmp dword ptr [edx*4 + 0x11a66a48] */
  switch (EDX) {
    case 0: goto L_11a66a58;
    case 1: goto L_11a66a60;
    case 2: goto L_11a66a6c;
    case 3: goto L_11a66a80;
    default: x86_unimpl("switch@0x11a669b8 out of table"); return;
  }
  /* 11a669bf nop  */
  /* nop */
L_11a669c0:;
  /* 11a669c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a669c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a669c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a669c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a669c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a669ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a669cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a669ce jb 0x11a6695c */
  if (C.cf) goto L_11a6695c;
  /* 11a669d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a669d2 jmp dword ptr [edx*4 + 0x11a66a48] */
  switch (EDX) {
    case 0: goto L_11a66a58;
    case 1: goto L_11a66a60;
    case 2: goto L_11a66a6c;
    case 3: goto L_11a66a80;
    default: x86_unimpl("switch@0x11a669d2 out of table"); return;
  }
  /* 11a669d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a669fc:;
  /* 11a669fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11a66a00 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11a66a04:;
  /* 11a66a04 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11a66a08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11a66a0c:;
  /* 11a66a0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11a66a10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11a66a14:;
  /* 11a66a14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11a66a18 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11a66a1c:;
  /* 11a66a1c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11a66a20 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11a66a24:;
  /* 11a66a24 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11a66a28 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11a66a2c:;
  /* 11a66a2c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11a66a30 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11a66a34 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a66a3b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66a3d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a66a3f:;
  /* 11a66a3f jmp dword ptr [edx*4 + 0x11a66a48] */
  switch (EDX) {
    case 0: goto L_11a66a58;
    case 1: goto L_11a66a60;
    case 2: goto L_11a66a6c;
    case 3: goto L_11a66a80;
    default: x86_unimpl("switch@0x11a66a3f out of table"); return;
  }
  /* 11a66a46 mov edi, edi */
  EDI = (EDI);
L_11a66a58:;
  /* 11a66a58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a66a5b pop esi */
  ESI = (pop32());
  /* 11a66a5c pop edi */
  EDI = (pop32());
  /* 11a66a5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a66a5e ret  */
  ESPCHK(0x11a66900u, _esp0);
  ESP += 4; return;
  /* 11a66a5f nop  */
  /* nop */
L_11a66a60:;
  /* 11a66a60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a66a62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a66a64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a66a67 pop esi */
  ESI = (pop32());
  /* 11a66a68 pop edi */
  EDI = (pop32());
  /* 11a66a69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a66a6a ret  */
  ESPCHK(0x11a66900u, _esp0);
  ESP += 4; return;
  /* 11a66a6b nop  */
  /* nop */
L_11a66a6c:;
  /* 11a66a6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a66a6e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a66a70 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a66a73 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a66a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a66a79 pop esi */
  ESI = (pop32());
  /* 11a66a7a pop edi */
  EDI = (pop32());
  /* 11a66a7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a66a7c ret  */
  ESPCHK(0x11a66900u, _esp0);
  ESP += 4; return;
  /* 11a66a7d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a66a80:;
  /* 11a66a80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a66a82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a66a84 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a66a87 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a66a8a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a66a8d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a66a90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a66a93 pop esi */
  ESI = (pop32());
  /* 11a66a94 pop edi */
  EDI = (pop32());
  /* 11a66a95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a66a96 ret  */
  ESPCHK(0x11a66900u, _esp0);
  ESP += 4; return;
  /* 11a66a97 nop  */
  /* nop */
L_11a66a98:;
  /* 11a66a98 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11a66a9c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11a66aa0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a66aa6 jne 0x11a66acc */
  if (!C.zf) goto L_11a66acc;
  /* 11a66aa8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a66aab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a66aae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66ab1 jb 0x11a66ac0 */
  if (C.cf) goto L_11a66ac0;
  /* 11a66ab3 std  */
  C.df=1;
  /* 11a66ab4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a66ab6 cld  */
  C.df=0;
  /* 11a66ab7 jmp dword ptr [edx*4 + 0x11a66be0] */
  switch (EDX) {
    case 0: goto L_11a66bf0;
    case 1: goto L_11a66bf8;
    case 2: goto L_11a66c08;
    case 3: goto L_11a66c1c;
    default: x86_unimpl("switch@0x11a66ab7 out of table"); return;
  }
  /* 11a66abe mov edi, edi */
  EDI = (EDI);
L_11a66ac0:;
  /* 11a66ac0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a66ac2 jmp dword ptr [ecx*4 + 0x11a66b90] */
  switch (ECX) {
    case 0: goto L_11a66bd7;
    default: x86_unimpl("switch@0x11a66ac2 out of table"); return;
  }
  /* 11a66ac9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a66acc:;
  /* 11a66acc mov eax, edi */
  EAX = (EDI);
  /* 11a66ace mov edx, 3 */
  EDX = (0x3u);
  /* 11a66ad3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66ad6 jb 0x11a66ae4 */
  if (C.cf) goto L_11a66ae4;
  /* 11a66ad8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a66adb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a66add jmp dword ptr [eax*4 + 0x11a66ae8] */
  switch (EAX) {
    case 1: goto L_11a66af8;
    case 2: goto L_11a66b18;
    case 3: goto L_11a66b40;
    default: x86_unimpl("switch@0x11a66add out of table"); return;
  }
L_11a66ae4:;
  /* 11a66ae4 jmp dword ptr [ecx*4 + 0x11a66be0] */
  switch (ECX) {
    case 0: goto L_11a66bf0;
    case 1: goto L_11a66bf8;
    case 2: goto L_11a66c08;
    case 3: goto L_11a66c1c;
    default: x86_unimpl("switch@0x11a66ae4 out of table"); return;
  }
  /* 11a66aeb nop  */
  /* nop */
L_11a66af8:;
  /* 11a66af8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a66afb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a66afd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a66b00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a66b01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a66b04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a66b05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66b08 jb 0x11a66ac0 */
  if (C.cf) goto L_11a66ac0;
  /* 11a66b0a std  */
  C.df=1;
  /* 11a66b0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a66b0d cld  */
  C.df=0;
  /* 11a66b0e jmp dword ptr [edx*4 + 0x11a66be0] */
  switch (EDX) {
    case 0: goto L_11a66bf0;
    case 1: goto L_11a66bf8;
    case 2: goto L_11a66c08;
    case 3: goto L_11a66c1c;
    default: x86_unimpl("switch@0x11a66b0e out of table"); return;
  }
  /* 11a66b15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a66b18:;
  /* 11a66b18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a66b1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a66b1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a66b20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a66b23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a66b26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a66b29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a66b2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a66b2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66b32 jb 0x11a66ac0 */
  if (C.cf) goto L_11a66ac0;
  /* 11a66b34 std  */
  C.df=1;
  /* 11a66b35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a66b37 cld  */
  C.df=0;
  /* 11a66b38 jmp dword ptr [edx*4 + 0x11a66be0] */
  switch (EDX) {
    case 0: goto L_11a66bf0;
    case 1: goto L_11a66bf8;
    case 2: goto L_11a66c08;
    case 3: goto L_11a66c1c;
    default: x86_unimpl("switch@0x11a66b38 out of table"); return;
  }
  /* 11a66b3f nop  */
  /* nop */
L_11a66b40:;
  /* 11a66b40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a66b43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a66b45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a66b48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a66b4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a66b4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a66b51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a66b54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a66b57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a66b5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a66b5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66b60 jb 0x11a66ac0 */
  if (C.cf) goto L_11a66ac0;
  /* 11a66b66 std  */
  C.df=1;
  /* 11a66b67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a66b69 cld  */
  C.df=0;
  /* 11a66b6a jmp dword ptr [edx*4 + 0x11a66be0] */
  switch (EDX) {
    case 0: goto L_11a66bf0;
    case 1: goto L_11a66bf8;
    case 2: goto L_11a66c08;
    case 3: goto L_11a66c1c;
    default: x86_unimpl("switch@0x11a66b6a out of table"); return;
  }
  /* 11a66b71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11a66b74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11a66b75 imul esp, dword ptr [esi - 0x599463ef], 0x11 */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESI + -0x599463ef)))*(int64_t)(int32_t)(0x11u); ESP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a66b7c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a66b7d imul esp, dword ptr [esi - 0x599453ef], 0x11 */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESI + -0x599453ef)))*(int64_t)(int32_t)(0x11u); ESP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a66b84 mov ah, 0x6b */
  AH = (0x6bu);
  /* 11a66b86 cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a66b87 adc dword ptr [ebx + ebp*2 + 0x6bc411a6], edi */
  { uint32_t _a=(r32((uint32_t)(EBX + EBP*2 + 0x6bc411a6))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EBX + EBP*2 + 0x6bc411a6), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a66b8e cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a66b94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11a66b98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11a66b9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11a66ba0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11a66ba4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11a66ba8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11a66bac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11a66bb0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11a66bb4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11a66bb8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11a66bbc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11a66bc0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11a66bc4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11a66bc8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11a66bcc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a66bd3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66bd5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a66bd7:;
  /* 11a66bd7 jmp dword ptr [edx*4 + 0x11a66be0] */
  switch (EDX) {
    case 0: goto L_11a66bf0;
    case 1: goto L_11a66bf8;
    case 2: goto L_11a66c08;
    case 3: goto L_11a66c1c;
    default: x86_unimpl("switch@0x11a66bd7 out of table"); return;
  }
  /* 11a66bde mov edi, edi */
  EDI = (EDI);
L_11a66bf0:;
  /* 11a66bf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a66bf3 pop esi */
  ESI = (pop32());
  /* 11a66bf4 pop edi */
  EDI = (pop32());
  /* 11a66bf5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a66bf6 ret  */
  ESPCHK(0x11a66900u, _esp0);
  ESP += 4; return;
  /* 11a66bf7 nop  */
  /* nop */
L_11a66bf8:;
  /* 11a66bf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a66bfb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a66bfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a66c01 pop esi */
  ESI = (pop32());
  /* 11a66c02 pop edi */
  EDI = (pop32());
  /* 11a66c03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a66c04 ret  */
  ESPCHK(0x11a66900u, _esp0);
  ESP += 4; return;
  /* 11a66c05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a66c08:;
  /* 11a66c08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a66c0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a66c0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a66c11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a66c14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a66c17 pop esi */
  ESI = (pop32());
  /* 11a66c18 pop edi */
  EDI = (pop32());
  /* 11a66c19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a66c1a ret  */
  ESPCHK(0x11a66900u, _esp0);
  ESP += 4; return;
  /* 11a66c1b nop  */
  /* nop */
L_11a66c1c:;
  /* 11a66c1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a66c1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a66c22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a66c25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a66c28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a66c2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a66c2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a66c31 pop esi */
  ESI = (pop32());
  /* 11a66c32 pop edi */
  EDI = (pop32());
  /* 11a66c33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a66c34 ret  */
  ESPCHK(0x11a66900u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11a66c74 (63 bytes, 24 insns) */
void f_11a66c74(void) {
  FTRACE(0x11a66c74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a66c74 push ebp */
  push32((uint32_t)(EBP));
  /* 11a66c75 mov ebp, esp */
  EBP = (ESP);
  /* 11a66c77 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66c7b jne 0x11a66c81 */
  if (!C.zf) goto L_11a66c81;
  /* 11a66c7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a66c7f pop ebp */
  EBP = (pop32());
  /* 11a66c80 ret  */
  ESPCHK(0x11a66c74u, _esp0);
  ESP += 4; return;
L_11a66c81:;
  /* 11a66c81 push dword ptr [0x11a6c498] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c498))));
  /* 11a66c87 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a66c8a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a66c8d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a66c90 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a66c93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a66c95 push dword ptr [0x11a6c6c4] */
  push32((uint32_t)(r32((uint32_t)(0x11a6c6c4))));
  /* 11a66c9b call 0x11a66d21 */
  push32(0x11a66ca0u); f_11a66d21();
  /* 11a66ca0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66ca3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66ca5 jne 0x11a66cae */
  if (!C.zf) goto L_11a66cae;
  /* 11a66ca7 mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11a66cac pop ebp */
  EBP = (pop32());
  /* 11a66cad ret  */
  ESPCHK(0x11a66c74u, _esp0);
  ESP += 4; return;
L_11a66cae:;
  /* 11a66cae add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66cb1 pop ebp */
  EBP = (pop32());
  /* 11a66cb2 ret  */
  ESPCHK(0x11a66c74u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cb3 @ 0x11a66cb3 (110 bytes, 58 insns) */
void f_11a66cb3(void) {
  FTRACE(0x11a66cb3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a66cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a66cb4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a66cb5 push ebp */
  push32((uint32_t)(EBP));
  /* 11a66cb6 push esi */
  push32((uint32_t)(ESI));
  /* 11a66cb7 mov esi, dword ptr [0x11a6c15c] */
  ESI = (r32((uint32_t)(0x11a6c15c)));
  /* 11a66cbd push edi */
  push32((uint32_t)(EDI));
  /* 11a66cbe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a66cc0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a66cc2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66cc4 je 0x11a66d14 */
  if (C.zf) goto L_11a66d14;
  /* 11a66cc6 mov ebx, dword ptr [0x11a680d0] */
  EBX = (r32((uint32_t)(0x11a680d0)));
L_11a66ccc:;
  /* 11a66ccc push edi */
  push32((uint32_t)(EDI));
  /* 11a66ccd push edi */
  push32((uint32_t)(EDI));
  /* 11a66cce push edi */
  push32((uint32_t)(EDI));
  /* 11a66ccf push edi */
  push32((uint32_t)(EDI));
  /* 11a66cd0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a66cd2 push eax */
  push32((uint32_t)(EAX));
  /* 11a66cd3 push edi */
  push32((uint32_t)(EDI));
  /* 11a66cd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a66cd6 call ebx */
  call_ind((uint32_t)(EBX), 0x11a66cd8u);
  /* 11a66cd8 mov ebp, eax */
  EBP = (EAX);
  /* 11a66cda cmp ebp, edi */
  { uint32_t _a=(EBP),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66cdc je 0x11a66d1c */
  if (C.zf) goto L_11a66d1c;
  /* 11a66cde push ebp */
  push32((uint32_t)(EBP));
  /* 11a66cdf call 0x11a63e61 */
  push32(0x11a66ce4u); f_11a63e61();
  /* 11a66ce4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66ce6 pop ecx */
  ECX = (pop32());
  /* 11a66ce7 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11a66ceb je 0x11a66d1c */
  if (C.zf) goto L_11a66d1c;
  /* 11a66ced push edi */
  push32((uint32_t)(EDI));
  /* 11a66cee push edi */
  push32((uint32_t)(EDI));
  /* 11a66cef push ebp */
  push32((uint32_t)(EBP));
  /* 11a66cf0 push eax */
  push32((uint32_t)(EAX));
  /* 11a66cf1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a66cf3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a66cf5 push edi */
  push32((uint32_t)(EDI));
  /* 11a66cf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a66cf8 call ebx */
  call_ind((uint32_t)(EBX), 0x11a66cfau);
  /* 11a66cfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66cfc je 0x11a66d1c */
  if (C.zf) goto L_11a66d1c;
  /* 11a66cfe push edi */
  push32((uint32_t)(EDI));
  /* 11a66cff push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11a66d03 call 0x11a66f9e */
  push32(0x11a66d08u); f_11a66f9e();
  /* 11a66d08 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a66d0b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66d0e pop ecx */
  ECX = (pop32());
  /* 11a66d0f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66d11 pop ecx */
  ECX = (pop32());
  /* 11a66d12 jne 0x11a66ccc */
  if (!C.zf) goto L_11a66ccc;
L_11a66d14:;
  /* 11a66d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a66d16:;
  /* 11a66d16 pop edi */
  EDI = (pop32());
  /* 11a66d17 pop esi */
  ESI = (pop32());
  /* 11a66d18 pop ebp */
  EBP = (pop32());
  /* 11a66d19 pop ebx */
  EBX = (pop32());
  /* 11a66d1a pop ecx */
  ECX = (pop32());
  /* 11a66d1b ret  */
  ESPCHK(0x11a66cb3u, _esp0);
  ESP += 4; return;
L_11a66d1c:;
  /* 11a66d1c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a66d1f jmp 0x11a66d16 */
  goto L_11a66d16;
}

/* FUN_10006d21 @ 0x11a66d21 (597 bytes, 239 insns) */
void f_11a66d21(void) {
  FTRACE(0x11a66d21u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a66d21 push ebp */
  push32((uint32_t)(EBP));
  /* 11a66d22 mov ebp, esp */
  EBP = (ESP);
  /* 11a66d24 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a66d26 push 0x11a685a8 */
  push32((uint32_t)(0x11a685a8u));
  /* 11a66d2b push 0x11a66130 */
  push32((uint32_t)(0x11a66130u));
  /* 11a66d30 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a66d36 push eax */
  push32((uint32_t)(EAX));
  /* 11a66d37 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a66d3e sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a66d41 push ebx */
  push32((uint32_t)(EBX));
  /* 11a66d42 push esi */
  push32((uint32_t)(ESI));
  /* 11a66d43 push edi */
  push32((uint32_t)(EDI));
  /* 11a66d44 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a66d47 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a66d49 cmp dword ptr [0x11a6c3f4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a6c3f4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66d4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a66d51 pop edi */
  EDI = (pop32());
  /* 11a66d52 jne 0x11a66d94 */
  if (!C.zf) goto L_11a66d94;
  /* 11a66d54 push edi */
  push32((uint32_t)(EDI));
  /* 11a66d55 mov eax, 0x11a68578 */
  EAX = (0x11a68578u);
  /* 11a66d5a push eax */
  push32((uint32_t)(EAX));
  /* 11a66d5b push edi */
  push32((uint32_t)(EDI));
  /* 11a66d5c push eax */
  push32((uint32_t)(EAX));
  /* 11a66d5d push ebx */
  push32((uint32_t)(EBX));
  /* 11a66d5e push ebx */
  push32((uint32_t)(EBX));
  /* 11a66d5f call dword ptr [0x11a6800c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6800c))), 0x11a66d65u);
  /* 11a66d65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66d67 je 0x11a66d71 */
  if (C.zf) goto L_11a66d71;
  /* 11a66d69 mov dword ptr [0x11a6c3f4], edi */
  w32((uint32_t)(0x11a6c3f4), (EDI));
  /* 11a66d6f jmp 0x11a66d94 */
  goto L_11a66d94;
L_11a66d71:;
  /* 11a66d71 push edi */
  push32((uint32_t)(EDI));
  /* 11a66d72 mov eax, 0x11a68574 */
  EAX = (0x11a68574u);
  /* 11a66d77 push eax */
  push32((uint32_t)(EAX));
  /* 11a66d78 push edi */
  push32((uint32_t)(EDI));
  /* 11a66d79 push eax */
  push32((uint32_t)(EAX));
  /* 11a66d7a push ebx */
  push32((uint32_t)(EBX));
  /* 11a66d7b push ebx */
  push32((uint32_t)(EBX));
  /* 11a66d7c call dword ptr [0x11a68010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68010))), 0x11a66d82u);
  /* 11a66d82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66d84 je 0x11a66f8a */
  if (C.zf) goto L_11a66f8a;
  /* 11a66d8a mov dword ptr [0x11a6c3f4], 2 */
  w32((uint32_t)(0x11a6c3f4), (0x2u));
L_11a66d94:;
  /* 11a66d94 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11a66d97 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66d99 jle 0x11a66dab */
  if ((C.zf||C.sf!=C.of)) goto L_11a66dab;
  /* 11a66d9b push esi */
  push32((uint32_t)(ESI));
  /* 11a66d9c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a66d9f call 0x11a665c5 */
  push32(0x11a66da4u); f_11a665c5();
  /* 11a66da4 pop ecx */
  ECX = (pop32());
  /* 11a66da5 pop ecx */
  ECX = (pop32());
  /* 11a66da6 mov esi, eax */
  ESI = (EAX);
  /* 11a66da8 mov dword ptr [ebp + 0x14], esi */
  w32((uint32_t)(EBP + 0x14), (ESI));
L_11a66dab:;
  /* 11a66dab cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66dae jle 0x11a66dc0 */
  if ((C.zf||C.sf!=C.of)) goto L_11a66dc0;
  /* 11a66db0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a66db3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a66db6 call 0x11a665c5 */
  push32(0x11a66dbbu); f_11a665c5();
  /* 11a66dbb pop ecx */
  ECX = (pop32());
  /* 11a66dbc pop ecx */
  ECX = (pop32());
  /* 11a66dbd mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11a66dc0:;
  /* 11a66dc0 mov eax, dword ptr [0x11a6c3f4] */
  EAX = (r32((uint32_t)(0x11a6c3f4)));
  /* 11a66dc5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66dc8 jne 0x11a66de5 */
  if (!C.zf) goto L_11a66de5;
  /* 11a66dca push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a66dcd push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a66dd0 push esi */
  push32((uint32_t)(ESI));
  /* 11a66dd1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a66dd4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a66dd7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a66dda call dword ptr [0x11a68010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68010))), 0x11a66de0u);
  /* 11a66de0 jmp 0x11a66f8c */
  goto L_11a66f8c;
L_11a66de5:;
  /* 11a66de5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66de7 jne 0x11a66f8a */
  if (!C.zf) goto L_11a66f8a;
  /* 11a66ded cmp dword ptr [ebp + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66df0 jne 0x11a66dfa */
  if (!C.zf) goto L_11a66dfa;
  /* 11a66df2 mov eax, dword ptr [0x11a6c3d8] */
  EAX = (r32((uint32_t)(0x11a6c3d8)));
  /* 11a66df7 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11a66dfa:;
  /* 11a66dfa cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66dfc je 0x11a66e07 */
  if (C.zf) goto L_11a66e07;
  /* 11a66dfe cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66e01 jne 0x11a66e9f */
  if (!C.zf) goto L_11a66e9f;
L_11a66e07:;
  /* 11a66e07 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66e0a jne 0x11a66e14 */
  if (!C.zf) goto L_11a66e14;
L_11a66e0c:;
  /* 11a66e0c push 2 */
  push32((uint32_t)(0x2u));
L_11a66e0e:;
  /* 11a66e0e pop eax */
  EAX = (pop32());
  /* 11a66e0f jmp 0x11a66f8c */
  goto L_11a66f8c;
L_11a66e14:;
  /* 11a66e14 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66e17 jle 0x11a66e20 */
  if ((C.zf||C.sf!=C.of)) goto L_11a66e20;
L_11a66e19:;
  /* 11a66e19 mov eax, edi */
  EAX = (EDI);
  /* 11a66e1b jmp 0x11a66f8c */
  goto L_11a66f8c;
L_11a66e20:;
  /* 11a66e20 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66e22 jg 0x11a66e65 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a66e65;
  /* 11a66e24 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11a66e27 push eax */
  push32((uint32_t)(EAX));
  /* 11a66e28 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a66e2b call dword ptr [0x11a6804c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6804c))), 0x11a66e31u);
  /* 11a66e31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66e33 je 0x11a66f8a */
  if (C.zf) goto L_11a66f8a;
  /* 11a66e39 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66e3b jle 0x11a66e69 */
  if ((C.zf||C.sf!=C.of)) goto L_11a66e69;
  /* 11a66e3d cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66e41 jb 0x11a66e65 */
  if (C.cf) goto L_11a66e65;
  /* 11a66e43 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11a66e46 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a66e49 je 0x11a66e65 */
  if (C.zf) goto L_11a66e65;
L_11a66e4b:;
  /* 11a66e4b mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11a66e4e cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a66e50 je 0x11a66e65 */
  if (C.zf) goto L_11a66e65;
  /* 11a66e52 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a66e55 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11a66e57 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a66e59 jb 0x11a66e5f */
  if (C.cf) goto L_11a66e5f;
  /* 11a66e5b cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a66e5d jbe 0x11a66e0c */
  if ((C.cf||C.zf)) goto L_11a66e0c;
L_11a66e5f:;
  /* 11a66e5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a66e60 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a66e61 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a66e63 jne 0x11a66e4b */
  if (!C.zf) goto L_11a66e4b;
L_11a66e65:;
  /* 11a66e65 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a66e67 jmp 0x11a66e0e */
  goto L_11a66e0e;
L_11a66e69:;
  /* 11a66e69 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66e6c jle 0x11a66e9f */
  if ((C.zf||C.sf!=C.of)) goto L_11a66e9f;
  /* 11a66e6e cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66e72 jb 0x11a66e19 */
  if (C.cf) goto L_11a66e19;
  /* 11a66e74 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11a66e77 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a66e7a je 0x11a66e19 */
  if (C.zf) goto L_11a66e19;
L_11a66e7c:;
  /* 11a66e7c mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11a66e7f cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a66e81 je 0x11a66e19 */
  if (C.zf) goto L_11a66e19;
  /* 11a66e83 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a66e86 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11a66e88 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a66e8a jb 0x11a66e94 */
  if (C.cf) goto L_11a66e94;
  /* 11a66e8c cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a66e8e jbe 0x11a66e0c */
  if ((C.cf||C.zf)) goto L_11a66e0c;
L_11a66e94:;
  /* 11a66e94 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a66e95 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a66e96 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a66e98 jne 0x11a66e7c */
  if (!C.zf) goto L_11a66e7c;
  /* 11a66e9a jmp 0x11a66e19 */
  goto L_11a66e19;
L_11a66e9f:;
  /* 11a66e9f push ebx */
  push32((uint32_t)(EBX));
  /* 11a66ea0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a66ea1 push esi */
  push32((uint32_t)(ESI));
  /* 11a66ea2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a66ea5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a66ea7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a66eaa call dword ptr [0x11a6802c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6802c))), 0x11a66eb0u);
  /* 11a66eb0 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a66eb3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66eb5 je 0x11a66f8a */
  if (C.zf) goto L_11a66f8a;
  /* 11a66ebb mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11a66ebe add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66ec0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66ec3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a66ec5 call 0x11a64bf0 */
  push32(0x11a66ecau); f_11a64bf0();
  /* 11a66eca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a66ecd mov eax, esp */
  EAX = (ESP);
  /* 11a66ecf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a66ed2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a66ed6 jmp 0x11a66eee */
  goto L_11a66eee;
  /* 11a66ed8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a66eda pop eax */
  EAX = (pop32());
  /* 11a66edb ret  */
  ESPCHK(0x11a66d21u, _esp0);
  ESP += 4; return;
  /* 11a66edc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a66edf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a66ee1 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11a66ee4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a66ee8 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11a66eeb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a66eed pop edi */
  EDI = (pop32());
L_11a66eee:;
  /* 11a66eee cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66ef1 je 0x11a66f8a */
  if (C.zf) goto L_11a66f8a;
  /* 11a66ef7 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11a66efa push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a66efd push esi */
  push32((uint32_t)(ESI));
  /* 11a66efe push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a66f01 push edi */
  push32((uint32_t)(EDI));
  /* 11a66f02 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a66f05 mov esi, dword ptr [0x11a6802c] */
  ESI = (r32((uint32_t)(0x11a6802c)));
  /* 11a66f0b call esi */
  call_ind((uint32_t)(ESI), 0x11a66f0du);
  /* 11a66f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66f0f je 0x11a66f8a */
  if (C.zf) goto L_11a66f8a;
  /* 11a66f11 push ebx */
  push32((uint32_t)(EBX));
  /* 11a66f12 push ebx */
  push32((uint32_t)(EBX));
  /* 11a66f13 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a66f16 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a66f19 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a66f1b push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a66f1e call esi */
  call_ind((uint32_t)(ESI), 0x11a66f20u);
  /* 11a66f20 mov esi, eax */
  ESI = (EAX);
  /* 11a66f22 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 11a66f25 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66f27 je 0x11a66f8a */
  if (C.zf) goto L_11a66f8a;
  /* 11a66f29 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a66f2c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11a66f2f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a66f32 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a66f34 call 0x11a64bf0 */
  push32(0x11a66f39u); f_11a64bf0();
  /* 11a66f39 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a66f3c mov edi, esp */
  EDI = (ESP);
  /* 11a66f3e mov dword ptr [ebp - 0x28], edi */
  w32((uint32_t)(EBP + -0x28), (EDI));
  /* 11a66f41 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a66f45 jmp 0x11a66f59 */
  goto L_11a66f59;
  /* 11a66f47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a66f49 pop eax */
  EAX = (pop32());
  /* 11a66f4a ret  */
  ESPCHK(0x11a66d21u, _esp0);
  ESP += 4; return;
  /* 11a66f4b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a66f4e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a66f50 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a66f52 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a66f56 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_11a66f59:;
  /* 11a66f59 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66f5b je 0x11a66f8a */
  if (C.zf) goto L_11a66f8a;
  /* 11a66f5d push esi */
  push32((uint32_t)(ESI));
  /* 11a66f5e push edi */
  push32((uint32_t)(EDI));
  /* 11a66f5f push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a66f62 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a66f65 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a66f67 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a66f6a call dword ptr [0x11a6802c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6802c))), 0x11a66f70u);
  /* 11a66f70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a66f72 je 0x11a66f8a */
  if (C.zf) goto L_11a66f8a;
  /* 11a66f74 push esi */
  push32((uint32_t)(ESI));
  /* 11a66f75 push edi */
  push32((uint32_t)(EDI));
  /* 11a66f76 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11a66f79 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a66f7c push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a66f7f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a66f82 call dword ptr [0x11a6800c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a6800c))), 0x11a66f88u);
  /* 11a66f88 jmp 0x11a66f8c */
  goto L_11a66f8c;
L_11a66f8a:;
  /* 11a66f8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a66f8c:;
  /* 11a66f8c lea esp, [ebp - 0x4c] */
  ESP = ((uint32_t)(EBP + -0x4c));
  /* 11a66f8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a66f92 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a66f99 pop edi */
  EDI = (pop32());
  /* 11a66f9a pop esi */
  ESI = (pop32());
  /* 11a66f9b pop ebx */
  EBX = (pop32());
  /* 11a66f9c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a66f9d ret  */
  ESPCHK(0x11a66d21u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f9e @ 0x11a66f9e (391 bytes, 155 insns) */
void f_11a66f9e(void) {
  FTRACE(0x11a66f9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a66f9e push ebp */
  push32((uint32_t)(EBP));
  /* 11a66f9f mov ebp, esp */
  EBP = (ESP);
  /* 11a66fa1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a66fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 11a66fa3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a66fa4 push esi */
  push32((uint32_t)(ESI));
  /* 11a66fa5 push edi */
  push32((uint32_t)(EDI));
  /* 11a66fa6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a66fa8 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66fab je 0x11a67002 */
  if (C.zf) goto L_11a67002;
  /* 11a66fad push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11a66faf push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a66fb2 call 0x11a67599 */
  push32(0x11a66fb7u); f_11a67599();
  /* 11a66fb7 mov esi, eax */
  ESI = (EAX);
  /* 11a66fb9 pop ecx */
  ECX = (pop32());
  /* 11a66fba cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66fbc pop ecx */
  ECX = (pop32());
  /* 11a66fbd mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11a66fc0 je 0x11a67002 */
  if (C.zf) goto L_11a67002;
  /* 11a66fc2 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66fc5 je 0x11a67002 */
  if (C.zf) goto L_11a67002;
  /* 11a66fc7 mov eax, dword ptr [0x11a6c154] */
  EAX = (r32((uint32_t)(0x11a6c154)));
  /* 11a66fcc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a66fce cmp byte ptr [esi + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x1))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a66fd1 sete bl */
  BL = ((C.zf) ? 1u : 0u);
  /* 11a66fd4 cmp eax, dword ptr [0x11a6c158] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a6c158))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66fda jne 0x11a66fe8 */
  if (!C.zf) goto L_11a66fe8;
  /* 11a66fdc push eax */
  push32((uint32_t)(EAX));
  /* 11a66fdd call 0x11a6717d */
  push32(0x11a66fe2u); f_11a6717d();
  /* 11a66fe2 pop ecx */
  ECX = (pop32());
  /* 11a66fe3 mov dword ptr [0x11a6c154], eax */
  w32((uint32_t)(0x11a6c154), (EAX));
L_11a66fe8:;
  /* 11a66fe8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66fea jne 0x11a67040 */
  if (!C.zf) goto L_11a67040;
  /* 11a66fec cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66fef je 0x11a6700a */
  if (C.zf) goto L_11a6700a;
  /* 11a66ff1 cmp dword ptr [0x11a6c15c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a6c15c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a66ff7 je 0x11a6700a */
  if (C.zf) goto L_11a6700a;
  /* 11a66ff9 call 0x11a66cb3 */
  push32(0x11a66ffeu); f_11a66cb3();
  /* 11a66ffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a67000 je 0x11a67040 */
  if (C.zf) goto L_11a67040;
L_11a67002:;
  /* 11a67002 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a67005:;
  /* 11a67005 pop edi */
  EDI = (pop32());
  /* 11a67006 pop esi */
  ESI = (pop32());
  /* 11a67007 pop ebx */
  EBX = (pop32());
  /* 11a67008 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a67009 ret  */
  ESPCHK(0x11a66f9eu, _esp0);
  ESP += 4; return;
L_11a6700a:;
  /* 11a6700a cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6700c jne 0x11a6711e */
  if (!C.zf) goto L_11a6711e;
  /* 11a67012 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a67014 call 0x11a63e61 */
  push32(0x11a67019u); f_11a63e61();
  /* 11a67019 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6701b pop ecx */
  ECX = (pop32());
  /* 11a6701c mov dword ptr [0x11a6c154], eax */
  w32((uint32_t)(0x11a6c154), (EAX));
  /* 11a67021 je 0x11a67002 */
  if (C.zf) goto L_11a67002;
  /* 11a67023 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11a67025 cmp dword ptr [0x11a6c15c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a6c15c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a6702b jne 0x11a67040 */
  if (!C.zf) goto L_11a67040;
  /* 11a6702d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a6702f call 0x11a63e61 */
  push32(0x11a67034u); f_11a63e61();
  /* 11a67034 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67036 pop ecx */
  ECX = (pop32());
  /* 11a67037 mov dword ptr [0x11a6c15c], eax */
  w32((uint32_t)(0x11a6c15c), (EAX));
  /* 11a6703c je 0x11a67002 */
  if (C.zf) goto L_11a67002;
  /* 11a6703e mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11a67040:;
  /* 11a67040 sub esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a67043 mov edi, dword ptr [0x11a6c154] */
  EDI = (r32((uint32_t)(0x11a6c154)));
  /* 11a67049 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a6704c push esi */
  push32((uint32_t)(ESI));
  /* 11a6704d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a67050 call 0x11a67125 */
  push32(0x11a67055u); f_11a67125();
  /* 11a67055 mov esi, eax */
  ESI = (EAX);
  /* 11a67057 pop ecx */
  ECX = (pop32());
  /* 11a67058 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a6705a pop ecx */
  ECX = (pop32());
  /* 11a6705b jl 0x11a670a0 */
  if ((C.sf!=C.of)) goto L_11a670a0;
  /* 11a6705d cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67060 je 0x11a670a0 */
  if (C.zf) goto L_11a670a0;
  /* 11a67062 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a67064 je 0x11a67098 */
  if (C.zf) goto L_11a67098;
  /* 11a67066 push dword ptr [edi + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EDI + ESI*4))));
  /* 11a67069 lea edi, [edi + esi*4] */
  EDI = ((uint32_t)(EDI + ESI*4));
  /* 11a6706c call 0x11a637b6 */
  push32(0x11a67071u); f_11a637b6();
  /* 11a67071 pop ecx */
  ECX = (pop32());
L_11a67072:;
  /* 11a67072 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a67075 je 0x11a67082 */
  if (C.zf) goto L_11a67082;
  /* 11a67077 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11a6707a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a6707b mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11a6707d add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a67080 jmp 0x11a67072 */
  goto L_11a67072;
L_11a67082:;
  /* 11a67082 mov eax, esi */
  EAX = (ESI);
  /* 11a67084 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a67087 push eax */
  push32((uint32_t)(EAX));
  /* 11a67088 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11a6708b call 0x11a6726a */
  push32(0x11a67090u); f_11a6726a();
  /* 11a67090 pop ecx */
  ECX = (pop32());
  /* 11a67091 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a67093 pop ecx */
  ECX = (pop32());
  /* 11a67094 je 0x11a670d2 */
  if (C.zf) goto L_11a670d2;
  /* 11a67096 jmp 0x11a670cd */
  goto L_11a670cd;
L_11a67098:;
  /* 11a67098 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a6709b mov dword ptr [edi + esi*4], eax */
  w32((uint32_t)(EDI + ESI*4), (EAX));
  /* 11a6709e jmp 0x11a670d2 */
  goto L_11a670d2;
L_11a670a0:;
  /* 11a670a0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a670a2 jne 0x11a6711e */
  if (!C.zf) goto L_11a6711e;
  /* 11a670a4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a670a6 jge 0x11a670aa */
  if ((C.sf==C.of)) goto L_11a670aa;
  /* 11a670a8 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
L_11a670aa:;
  /* 11a670aa lea eax, [esi*4 + 8] */
  EAX = ((uint32_t)(ESI*4 + 0x8));
  /* 11a670b1 push eax */
  push32((uint32_t)(EAX));
  /* 11a670b2 push edi */
  push32((uint32_t)(EDI));
  /* 11a670b3 call 0x11a6726a */
  push32(0x11a670b8u); f_11a6726a();
  /* 11a670b8 pop ecx */
  ECX = (pop32());
  /* 11a670b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a670bb pop ecx */
  ECX = (pop32());
  /* 11a670bc je 0x11a67002 */
  if (C.zf) goto L_11a67002;
  /* 11a670c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a670c5 mov dword ptr [eax + esi*4], ecx */
  w32((uint32_t)(EAX + ESI*4), (ECX));
  /* 11a670c8 and dword ptr [eax + esi*4 + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x4)))&(0x0u); w32((uint32_t)(EAX + ESI*4 + 0x4), (_r)); fl_logic(_r,32); }
L_11a670cd:;
  /* 11a670cd mov dword ptr [0x11a6c154], eax */
  w32((uint32_t)(0x11a6c154), (EAX));
L_11a670d2:;
  /* 11a670d2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a670d6 je 0x11a6711e */
  if (C.zf) goto L_11a6711e;
  /* 11a670d8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a670db call 0x11a64090 */
  push32(0x11a670e0u); f_11a64090();
  /* 11a670e0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a670e1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a670e2 push eax */
  push32((uint32_t)(EAX));
  /* 11a670e3 call 0x11a63e61 */
  push32(0x11a670e8u); f_11a63e61();
  /* 11a670e8 mov esi, eax */
  ESI = (EAX);
  /* 11a670ea pop ecx */
  ECX = (pop32());
  /* 11a670eb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a670ed pop ecx */
  ECX = (pop32());
  /* 11a670ee je 0x11a6711e */
  if (C.zf) goto L_11a6711e;
  /* 11a670f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a670f3 push esi */
  push32((uint32_t)(ESI));
  /* 11a670f4 call 0x11a63fa0 */
  push32(0x11a670f9u); f_11a63fa0();
  /* 11a670f9 mov eax, esi */
  EAX = (ESI);
  /* 11a670fb pop ecx */
  ECX = (pop32());
  /* 11a670fc sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a670ff pop ecx */
  ECX = (pop32());
  /* 11a67100 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a67103 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11a67106 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a67107 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a67109 sbb ebx, ebx */
  { uint32_t _a=(EBX),_b=(EBX),_r=_a-_b-C.cf; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a6710b not ebx */
  EBX = (~(EBX));
  /* 11a6710d and ebx, eax */
  { uint32_t _r=(EBX)&(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11a6710f push ebx */
  push32((uint32_t)(EBX));
  /* 11a67110 push esi */
  push32((uint32_t)(ESI));
  /* 11a67111 call dword ptr [0x11a68008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a68008))), 0x11a67117u);
  /* 11a67117 push esi */
  push32((uint32_t)(ESI));
  /* 11a67118 call 0x11a637b6 */
  push32(0x11a6711du); f_11a637b6();
  /* 11a6711d pop ecx */
  ECX = (pop32());
L_11a6711e:;
  /* 11a6711e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a67120 jmp 0x11a67005 */
  goto L_11a67005;
}

/* FUN_10007125 @ 0x11a67125 (88 bytes, 35 insns) */
void f_11a67125(void) {
  FTRACE(0x11a67125u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a67125 push esi */
  push32((uint32_t)(ESI));
  /* 11a67126 mov esi, dword ptr [0x11a6c154] */
  ESI = (r32((uint32_t)(0x11a6c154)));
  /* 11a6712c push edi */
  push32((uint32_t)(EDI));
  /* 11a6712d mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a6712f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a67131 je 0x11a67160 */
  if (C.zf) goto L_11a67160;
  /* 11a67133 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_11a67137:;
  /* 11a67137 push edi */
  push32((uint32_t)(EDI));
  /* 11a67138 push eax */
  push32((uint32_t)(EAX));
  /* 11a67139 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11a6713d call 0x11a66c74 */
  push32(0x11a67142u); f_11a66c74();
  /* 11a67142 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a67145 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a67147 jne 0x11a67156 */
  if (!C.zf) goto L_11a67156;
  /* 11a67149 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a6714b mov al, byte ptr [eax + edi] */
  AL = (r8((uint32_t)(EAX + EDI*1)));
  /* 11a6714e cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a67150 je 0x11a67170 */
  if (C.zf) goto L_11a67170;
  /* 11a67152 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a67154 je 0x11a67170 */
  if (C.zf) goto L_11a67170;
L_11a67156:;
  /* 11a67156 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a67159 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a6715c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a6715e jne 0x11a67137 */
  if (!C.zf) goto L_11a67137;
L_11a67160:;
  /* 11a67160 mov eax, esi */
  EAX = (ESI);
  /* 11a67162 sub eax, dword ptr [0x11a6c154] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a6c154))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a67168 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a6716b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11a6716d:;
  /* 11a6716d pop edi */
  EDI = (pop32());
  /* 11a6716e pop esi */
  ESI = (pop32());
  /* 11a6716f ret  */
  ESPCHK(0x11a67125u, _esp0);
  ESP += 4; return;
L_11a67170:;
  /* 11a67170 mov eax, esi */
  EAX = (ESI);
  /* 11a67172 sub eax, dword ptr [0x11a6c154] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a6c154))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a67178 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a6717b jmp 0x11a6716d */
  goto L_11a6716d;
}

