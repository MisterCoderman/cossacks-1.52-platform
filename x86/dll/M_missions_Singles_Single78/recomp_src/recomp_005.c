#include "recomp.h"

/* FUN_1001efc0 @ 0x11cdefc0 (939 bytes, 266 insns) */
void f_11cdefc0(void) {
  FTRACE(0x11cdefc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdefc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdefc1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdefc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdefc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cdefcd push 0xc */
  push32((uint32_t)(0xcu));
  /* 11cdefcf call 0x11ccb3c0 */
  push32(0x11cdefd4u); f_11ccb3c0();
  /* 11cdefd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdefd7 mov dword ptr [0x11cff6f8], 0 */
  w32((uint32_t)(0x11cff6f8), (0x0u));
  /* 11cdefe1 mov dword ptr [0x11cfe620], 0xffffffff */
  w32((uint32_t)(0x11cfe620), (0xffffffffu));
  /* 11cdefeb mov eax, dword ptr [0x11cfe620] */
  EAX = (r32((uint32_t)(0x11cfe620)));
  /* 11cdeff0 mov dword ptr [0x11cfe610], eax */
  w32((uint32_t)(0x11cfe610), (EAX));
  /* 11cdeff5 push 0x11cfad5c */
  push32((uint32_t)(0x11cfad5cu));
  /* 11cdeffa call 0x11cdfc60 */
  push32(0x11cdefffu); f_11cdfc60();
  /* 11cdefff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf002 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cdf005 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf009 jne 0x11cdf143 */
  if (!C.zf) goto L_11cdf143;
  /* 11cdf00f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11cdf011 call 0x11ccb460 */
  push32(0x11cdf016u); f_11ccb460();
  /* 11cdf016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf019 push 0x11cff700 */
  push32((uint32_t)(0x11cff700u));
  /* 11cdf01e call dword ptr [0x11d01308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01308))), 0x11cdf024u);
  /* 11cdf024 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf027 je 0x11cdf13e */
  if (C.zf) goto L_11cdf13e;
  /* 11cdf02d mov dword ptr [0x11cff6f8], 1 */
  w32((uint32_t)(0x11cff6f8), (0x1u));
  /* 11cdf037 mov ecx, dword ptr [0x11cff700] */
  ECX = (r32((uint32_t)(0x11cff700)));
  /* 11cdf03d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf040 mov dword ptr [0x11cfe57c], ecx */
  w32((uint32_t)(0x11cfe57c), (ECX));
  /* 11cdf046 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdf048 mov dx, word ptr [0x11cff746] */
  DX = (r16((uint32_t)(0x11cff746)));
  /* 11cdf04f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cdf051 je 0x11cdf069 */
  if (C.zf) goto L_11cdf069;
  /* 11cdf053 mov eax, dword ptr [0x11cff754] */
  EAX = (r32((uint32_t)(0x11cff754)));
  /* 11cdf058 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf05b mov ecx, dword ptr [0x11cfe57c] */
  ECX = (r32((uint32_t)(0x11cfe57c)));
  /* 11cdf061 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf063 mov dword ptr [0x11cfe57c], ecx */
  w32((uint32_t)(0x11cfe57c), (ECX));
L_11cdf069:;
  /* 11cdf069 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdf06b mov dx, word ptr [0x11cff79a] */
  DX = (r16((uint32_t)(0x11cff79a)));
  /* 11cdf072 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cdf074 je 0x11cdf09e */
  if (C.zf) goto L_11cdf09e;
  /* 11cdf076 cmp dword ptr [0x11cff7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf07d je 0x11cdf09e */
  if (C.zf) goto L_11cdf09e;
  /* 11cdf07f mov dword ptr [0x11cfe580], 1 */
  w32((uint32_t)(0x11cfe580), (0x1u));
  /* 11cdf089 mov eax, dword ptr [0x11cff7a8] */
  EAX = (r32((uint32_t)(0x11cff7a8)));
  /* 11cdf08e sub eax, dword ptr [0x11cff754] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cff754))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdf094 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf097 mov dword ptr [0x11cfe584], eax */
  w32((uint32_t)(0x11cfe584), (EAX));
  /* 11cdf09c jmp 0x11cdf0b2 */
  goto L_11cdf0b2;
L_11cdf09e:;
  /* 11cdf09e mov dword ptr [0x11cfe580], 0 */
  w32((uint32_t)(0x11cfe580), (0x0u));
  /* 11cdf0a8 mov dword ptr [0x11cfe584], 0 */
  w32((uint32_t)(0x11cfe584), (0x0u));
L_11cdf0b2:;
  /* 11cdf0b2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11cdf0b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf0b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf0b8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11cdf0ba mov edx, dword ptr [0x11cfe608] */
  EDX = (r32((uint32_t)(0x11cfe608)));
  /* 11cdf0c0 push edx */
  push32((uint32_t)(EDX));
  /* 11cdf0c1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cdf0c3 push 0x11cff704 */
  push32((uint32_t)(0x11cff704u));
  /* 11cdf0c8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11cdf0cd mov eax, dword ptr [0x11cff674] */
  EAX = (r32((uint32_t)(0x11cff674)));
  /* 11cdf0d2 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf0d3 call dword ptr [0x11d0139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0139c))), 0x11cdf0d9u);
  /* 11cdf0d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdf0db je 0x11cdf0ef */
  if (C.zf) goto L_11cdf0ef;
  /* 11cdf0dd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf0e1 jne 0x11cdf0ef */
  if (!C.zf) goto L_11cdf0ef;
  /* 11cdf0e3 mov ecx, dword ptr [0x11cfe608] */
  ECX = (r32((uint32_t)(0x11cfe608)));
  /* 11cdf0e9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11cdf0ed jmp 0x11cdf0f8 */
  goto L_11cdf0f8;
L_11cdf0ef:;
  /* 11cdf0ef mov edx, dword ptr [0x11cfe608] */
  EDX = (r32((uint32_t)(0x11cfe608)));
  /* 11cdf0f5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11cdf0f8:;
  /* 11cdf0f8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11cdf0fb push eax */
  push32((uint32_t)(EAX));
  /* 11cdf0fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf0fe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11cdf100 mov ecx, dword ptr [0x11cfe60c] */
  ECX = (r32((uint32_t)(0x11cfe60c)));
  /* 11cdf106 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf107 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cdf109 push 0x11cff758 */
  push32((uint32_t)(0x11cff758u));
  /* 11cdf10e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11cdf113 mov edx, dword ptr [0x11cff674] */
  EDX = (r32((uint32_t)(0x11cff674)));
  /* 11cdf119 push edx */
  push32((uint32_t)(EDX));
  /* 11cdf11a call dword ptr [0x11d0139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0139c))), 0x11cdf120u);
  /* 11cdf120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdf122 je 0x11cdf135 */
  if (C.zf) goto L_11cdf135;
  /* 11cdf124 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf128 jne 0x11cdf135 */
  if (!C.zf) goto L_11cdf135;
  /* 11cdf12a mov eax, dword ptr [0x11cfe60c] */
  EAX = (r32((uint32_t)(0x11cfe60c)));
  /* 11cdf12f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11cdf133 jmp 0x11cdf13e */
  goto L_11cdf13e;
L_11cdf135:;
  /* 11cdf135 mov ecx, dword ptr [0x11cfe60c] */
  ECX = (r32((uint32_t)(0x11cfe60c)));
  /* 11cdf13b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11cdf13e:;
  /* 11cdf13e jmp 0x11cdf367 */
  goto L_11cdf367;
L_11cdf143:;
  /* 11cdf143 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf146 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cdf149 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdf14b je 0x11cdf16d */
  if (C.zf) goto L_11cdf16d;
  /* 11cdf14d cmp dword ptr [0x11cff7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf154 je 0x11cdf17c */
  if (C.zf) goto L_11cdf17c;
  /* 11cdf156 mov ecx, dword ptr [0x11cff7ac] */
  ECX = (r32((uint32_t)(0x11cff7ac)));
  /* 11cdf15c push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf15d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf160 push edx */
  push32((uint32_t)(EDX));
  /* 11cdf161 call 0x11cd4f90 */
  push32(0x11cdf166u); f_11cd4f90();
  /* 11cdf166 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf169 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdf16b jne 0x11cdf17c */
  if (!C.zf) goto L_11cdf17c;
L_11cdf16d:;
  /* 11cdf16d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11cdf16f call 0x11ccb460 */
  push32(0x11cdf174u); f_11ccb460();
  /* 11cdf174 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf177 jmp 0x11cdf367 */
  goto L_11cdf367;
L_11cdf17c:;
  /* 11cdf17c push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdf17e mov eax, dword ptr [0x11cff7ac] */
  EAX = (r32((uint32_t)(0x11cff7ac)));
  /* 11cdf183 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf184 call 0x11ccbf50 */
  push32(0x11cdf189u); f_11ccbf50();
  /* 11cdf189 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf18c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11cdf191 push 0x11cfad54 */
  push32((uint32_t)(0x11cfad54u));
  /* 11cdf196 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdf198 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf19b push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf19c call 0x11cd0a80 */
  push32(0x11cdf1a1u); f_11cd0a80();
  /* 11cdf1a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf1a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf1a7 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf1a8 call 0x11ccb4c0 */
  push32(0x11cdf1adu); f_11ccb4c0();
  /* 11cdf1ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf1b0 mov dword ptr [0x11cff7ac], eax */
  w32((uint32_t)(0x11cff7ac), (EAX));
  /* 11cdf1b5 cmp dword ptr [0x11cff7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf1bc jne 0x11cdf1cd */
  if (!C.zf) goto L_11cdf1cd;
  /* 11cdf1be push 0xc */
  push32((uint32_t)(0xcu));
  /* 11cdf1c0 call 0x11ccb460 */
  push32(0x11cdf1c5u); f_11ccb460();
  /* 11cdf1c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf1c8 jmp 0x11cdf367 */
  goto L_11cdf367;
L_11cdf1cd:;
  /* 11cdf1cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf1d0 push edx */
  push32((uint32_t)(EDX));
  /* 11cdf1d1 mov eax, dword ptr [0x11cff7ac] */
  EAX = (r32((uint32_t)(0x11cff7ac)));
  /* 11cdf1d6 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf1d7 call 0x11cd0c00 */
  push32(0x11cdf1dcu); f_11cd0c00();
  /* 11cdf1dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf1df push 0xc */
  push32((uint32_t)(0xcu));
  /* 11cdf1e1 call 0x11ccb460 */
  push32(0x11cdf1e6u); f_11ccb460();
  /* 11cdf1e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf1e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cdf1eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf1ee push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf1ef mov edx, dword ptr [0x11cfe608] */
  EDX = (r32((uint32_t)(0x11cfe608)));
  /* 11cdf1f5 push edx */
  push32((uint32_t)(EDX));
  /* 11cdf1f6 call 0x11cd1470 */
  push32(0x11cdf1fbu); f_11cd1470();
  /* 11cdf1fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf1fe mov eax, dword ptr [0x11cfe608] */
  EAX = (r32((uint32_t)(0x11cfe608)));
  /* 11cdf203 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11cdf207 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf20a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf20d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdf210 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf213 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cdf216 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf219 jne 0x11cdf22d */
  if (!C.zf) goto L_11cdf22d;
  /* 11cdf21b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdf21e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf221 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cdf224 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf227 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf22a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11cdf22d:;
  /* 11cdf22d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf230 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf231 call 0x11cdeb40 */
  push32(0x11cdf236u); f_11cdeb40();
  /* 11cdf236 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf239 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf23f mov dword ptr [0x11cfe57c], eax */
  w32((uint32_t)(0x11cfe57c), (EAX));
L_11cdf244:;
  /* 11cdf244 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf247 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cdf24a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf24d je 0x11cdf265 */
  if (C.zf) goto L_11cdf265;
  /* 11cdf24f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf252 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cdf255 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf258 jl 0x11cdf270 */
  if ((C.sf!=C.of)) goto L_11cdf270;
  /* 11cdf25a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf25d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cdf260 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf263 jg 0x11cdf270 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdf270;
L_11cdf265:;
  /* 11cdf265 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf268 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf26b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdf26e jmp 0x11cdf244 */
  goto L_11cdf244;
L_11cdf270:;
  /* 11cdf270 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf273 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cdf276 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf279 jne 0x11cdf315 */
  if (!C.zf) goto L_11cdf315;
  /* 11cdf27f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf282 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf285 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdf288 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf28b push edx */
  push32((uint32_t)(EDX));
  /* 11cdf28c call 0x11cdeb40 */
  push32(0x11cdf291u); f_11cdeb40();
  /* 11cdf291 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf294 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf297 mov ecx, dword ptr [0x11cfe57c] */
  ECX = (r32((uint32_t)(0x11cfe57c)));
  /* 11cdf29d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf29f mov dword ptr [0x11cfe57c], ecx */
  w32((uint32_t)(0x11cfe57c), (ECX));
L_11cdf2a5:;
  /* 11cdf2a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf2a8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cdf2ab cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf2ae jl 0x11cdf2c6 */
  if ((C.sf!=C.of)) goto L_11cdf2c6;
  /* 11cdf2b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf2b3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cdf2b6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf2b9 jg 0x11cdf2c6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdf2c6;
  /* 11cdf2bb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf2be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf2c1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cdf2c4 jmp 0x11cdf2a5 */
  goto L_11cdf2a5;
L_11cdf2c6:;
  /* 11cdf2c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf2c9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cdf2cc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf2cf jne 0x11cdf315 */
  if (!C.zf) goto L_11cdf315;
  /* 11cdf2d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf2d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf2d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cdf2da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf2dd push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf2de call 0x11cdeb40 */
  push32(0x11cdf2e3u); f_11cdeb40();
  /* 11cdf2e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf2e6 mov edx, dword ptr [0x11cfe57c] */
  EDX = (r32((uint32_t)(0x11cfe57c)));
  /* 11cdf2ec add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf2ee mov dword ptr [0x11cfe57c], edx */
  w32((uint32_t)(0x11cfe57c), (EDX));
L_11cdf2f4:;
  /* 11cdf2f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf2f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cdf2fa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf2fd jl 0x11cdf315 */
  if ((C.sf!=C.of)) goto L_11cdf315;
  /* 11cdf2ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf302 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cdf305 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf308 jg 0x11cdf315 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cdf315;
  /* 11cdf30a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf30d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf310 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cdf313 jmp 0x11cdf2f4 */
  goto L_11cdf2f4;
L_11cdf315:;
  /* 11cdf315 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf319 je 0x11cdf329 */
  if (C.zf) goto L_11cdf329;
  /* 11cdf31b mov edx, dword ptr [0x11cfe57c] */
  EDX = (r32((uint32_t)(0x11cfe57c)));
  /* 11cdf321 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cdf323 mov dword ptr [0x11cfe57c], edx */
  w32((uint32_t)(0x11cfe57c), (EDX));
L_11cdf329:;
  /* 11cdf329 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf32c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cdf32f mov dword ptr [0x11cfe580], ecx */
  w32((uint32_t)(0x11cfe580), (ECX));
  /* 11cdf335 cmp dword ptr [0x11cfe580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cfe580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf33c je 0x11cdf35e */
  if (C.zf) goto L_11cdf35e;
  /* 11cdf33e push 3 */
  push32((uint32_t)(0x3u));
  /* 11cdf340 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf343 push edx */
  push32((uint32_t)(EDX));
  /* 11cdf344 mov eax, dword ptr [0x11cfe60c] */
  EAX = (r32((uint32_t)(0x11cfe60c)));
  /* 11cdf349 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf34a call 0x11cd1470 */
  push32(0x11cdf34fu); f_11cd1470();
  /* 11cdf34f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf352 mov ecx, dword ptr [0x11cfe60c] */
  ECX = (r32((uint32_t)(0x11cfe60c)));
  /* 11cdf358 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11cdf35c jmp 0x11cdf367 */
  goto L_11cdf367;
L_11cdf35e:;
  /* 11cdf35e mov edx, dword ptr [0x11cfe60c] */
  EDX = (r32((uint32_t)(0x11cfe60c)));
  /* 11cdf364 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11cdf367:;
  /* 11cdf367 mov esp, ebp */
  ESP = (EBP);
  /* 11cdf369 pop ebp */
  EBP = (pop32());
  /* 11cdf36a ret  */
  ESPCHK(0x11cdefc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f370 @ 0x11cdf370 (46 bytes, 18 insns) */
void f_11cdf370(void) {
  FTRACE(0x11cdf370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdf370 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdf371 mov ebp, esp */
  EBP = (ESP);
  /* 11cdf373 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf374 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11cdf376 call 0x11ccb3c0 */
  push32(0x11cdf37bu); f_11ccb3c0();
  /* 11cdf37b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf37e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf381 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf382 call 0x11cdf3a0 */
  push32(0x11cdf387u); f_11cdf3a0();
  /* 11cdf387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf38a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdf38d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11cdf38f call 0x11ccb460 */
  push32(0x11cdf394u); f_11ccb460();
  /* 11cdf394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdf39a mov esp, ebp */
  ESP = (EBP);
  /* 11cdf39c pop ebp */
  EBP = (pop32());
  /* 11cdf39d ret  */
  ESPCHK(0x11cdf370u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f3a0 @ 0x11cdf3a0 (762 bytes, 246 insns) */
void f_11cdf3a0(void) {
  FTRACE(0x11cdf3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdf3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdf3a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdf3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf3a4 cmp dword ptr [0x11cfe580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cfe580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf3ab jne 0x11cdf3b4 */
  if (!C.zf) goto L_11cdf3b4;
  /* 11cdf3ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf3af jmp 0x11cdf696 */
  goto L_11cdf696;
L_11cdf3b4:;
  /* 11cdf3b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf3b7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11cdf3ba cmp ecx, dword ptr [0x11cfe610] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11cfe610))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf3c0 jne 0x11cdf3d4 */
  if (!C.zf) goto L_11cdf3d4;
  /* 11cdf3c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf3c5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11cdf3c8 cmp eax, dword ptr [0x11cfe620] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cfe620))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf3ce je 0x11cdf59b */
  if (C.zf) goto L_11cdf59b;
L_11cdf3d4:;
  /* 11cdf3d4 cmp dword ptr [0x11cff6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf3db je 0x11cdf555 */
  if (C.zf) goto L_11cdf555;
  /* 11cdf3e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdf3e3 mov cx, word ptr [0x11cff798] */
  CX = (r16((uint32_t)(0x11cff798)));
  /* 11cdf3ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdf3ec jne 0x11cdf449 */
  if (!C.zf) goto L_11cdf449;
  /* 11cdf3ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdf3f0 mov dx, word ptr [0x11cff7a6] */
  DX = (r16((uint32_t)(0x11cff7a6)));
  /* 11cdf3f7 push edx */
  push32((uint32_t)(EDX));
  /* 11cdf3f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf3fa mov ax, word ptr [0x11cff7a4] */
  AX = (r16((uint32_t)(0x11cff7a4)));
  /* 11cdf400 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf401 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdf403 mov cx, word ptr [0x11cff7a2] */
  CX = (r16((uint32_t)(0x11cff7a2)));
  /* 11cdf40a push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf40b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdf40d mov dx, word ptr [0x11cff7a0] */
  DX = (r16((uint32_t)(0x11cff7a0)));
  /* 11cdf414 push edx */
  push32((uint32_t)(EDX));
  /* 11cdf415 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf417 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf419 mov ax, word ptr [0x11cff79c] */
  AX = (r16((uint32_t)(0x11cff79c)));
  /* 11cdf41f push eax */
  push32((uint32_t)(EAX));
  /* 11cdf420 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdf422 mov cx, word ptr [0x11cff79e] */
  CX = (r16((uint32_t)(0x11cff79e)));
  /* 11cdf429 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf42a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdf42c mov dx, word ptr [0x11cff79a] */
  DX = (r16((uint32_t)(0x11cff79a)));
  /* 11cdf433 push edx */
  push32((uint32_t)(EDX));
  /* 11cdf434 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf437 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11cdf43a push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf43b push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdf43d push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdf43f call 0x11cdf6a0 */
  push32(0x11cdf444u); f_11cdf6a0();
  /* 11cdf444 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf447 jmp 0x11cdf49a */
  goto L_11cdf49a;
L_11cdf449:;
  /* 11cdf449 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdf44b mov dx, word ptr [0x11cff7a6] */
  DX = (r16((uint32_t)(0x11cff7a6)));
  /* 11cdf452 push edx */
  push32((uint32_t)(EDX));
  /* 11cdf453 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf455 mov ax, word ptr [0x11cff7a4] */
  AX = (r16((uint32_t)(0x11cff7a4)));
  /* 11cdf45b push eax */
  push32((uint32_t)(EAX));
  /* 11cdf45c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdf45e mov cx, word ptr [0x11cff7a2] */
  CX = (r16((uint32_t)(0x11cff7a2)));
  /* 11cdf465 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf466 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdf468 mov dx, word ptr [0x11cff7a0] */
  DX = (r16((uint32_t)(0x11cff7a0)));
  /* 11cdf46f push edx */
  push32((uint32_t)(EDX));
  /* 11cdf470 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf472 mov ax, word ptr [0x11cff79e] */
  AX = (r16((uint32_t)(0x11cff79e)));
  /* 11cdf478 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf479 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf47b push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf47d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdf47f mov cx, word ptr [0x11cff79a] */
  CX = (r16((uint32_t)(0x11cff79a)));
  /* 11cdf486 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf487 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf48a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11cdf48d push eax */
  push32((uint32_t)(EAX));
  /* 11cdf48e push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf490 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdf492 call 0x11cdf6a0 */
  push32(0x11cdf497u); f_11cdf6a0();
  /* 11cdf497 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdf49a:;
  /* 11cdf49a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdf49c mov cx, word ptr [0x11cff744] */
  CX = (r16((uint32_t)(0x11cff744)));
  /* 11cdf4a3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdf4a5 jne 0x11cdf502 */
  if (!C.zf) goto L_11cdf502;
  /* 11cdf4a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdf4a9 mov dx, word ptr [0x11cff752] */
  DX = (r16((uint32_t)(0x11cff752)));
  /* 11cdf4b0 push edx */
  push32((uint32_t)(EDX));
  /* 11cdf4b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf4b3 mov ax, word ptr [0x11cff750] */
  AX = (r16((uint32_t)(0x11cff750)));
  /* 11cdf4b9 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf4ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdf4bc mov cx, word ptr [0x11cff74e] */
  CX = (r16((uint32_t)(0x11cff74e)));
  /* 11cdf4c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf4c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdf4c6 mov dx, word ptr [0x11cff74c] */
  DX = (r16((uint32_t)(0x11cff74c)));
  /* 11cdf4cd push edx */
  push32((uint32_t)(EDX));
  /* 11cdf4ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf4d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf4d2 mov ax, word ptr [0x11cff748] */
  AX = (r16((uint32_t)(0x11cff748)));
  /* 11cdf4d8 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf4d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdf4db mov cx, word ptr [0x11cff74a] */
  CX = (r16((uint32_t)(0x11cff74a)));
  /* 11cdf4e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf4e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdf4e5 mov dx, word ptr [0x11cff746] */
  DX = (r16((uint32_t)(0x11cff746)));
  /* 11cdf4ec push edx */
  push32((uint32_t)(EDX));
  /* 11cdf4ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf4f0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11cdf4f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf4f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdf4f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf4f8 call 0x11cdf6a0 */
  push32(0x11cdf4fdu); f_11cdf6a0();
  /* 11cdf4fd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf500 jmp 0x11cdf553 */
  goto L_11cdf553;
L_11cdf502:;
  /* 11cdf502 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdf504 mov dx, word ptr [0x11cff752] */
  DX = (r16((uint32_t)(0x11cff752)));
  /* 11cdf50b push edx */
  push32((uint32_t)(EDX));
  /* 11cdf50c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf50e mov ax, word ptr [0x11cff750] */
  AX = (r16((uint32_t)(0x11cff750)));
  /* 11cdf514 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf515 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdf517 mov cx, word ptr [0x11cff74e] */
  CX = (r16((uint32_t)(0x11cff74e)));
  /* 11cdf51e push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf51f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdf521 mov dx, word ptr [0x11cff74c] */
  DX = (r16((uint32_t)(0x11cff74c)));
  /* 11cdf528 push edx */
  push32((uint32_t)(EDX));
  /* 11cdf529 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf52b mov ax, word ptr [0x11cff74a] */
  AX = (r16((uint32_t)(0x11cff74a)));
  /* 11cdf531 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf532 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf534 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf536 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdf538 mov cx, word ptr [0x11cff746] */
  CX = (r16((uint32_t)(0x11cff746)));
  /* 11cdf53f push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf540 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf543 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11cdf546 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf547 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf549 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf54b call 0x11cdf6a0 */
  push32(0x11cdf550u); f_11cdf6a0();
  /* 11cdf550 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdf553:;
  /* 11cdf553 jmp 0x11cdf59b */
  goto L_11cdf59b;
L_11cdf555:;
  /* 11cdf555 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf557 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf559 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf55b push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdf55d push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf55f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf561 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdf563 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cdf565 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf568 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11cdf56b push edx */
  push32((uint32_t)(EDX));
  /* 11cdf56c push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdf56e push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdf570 call 0x11cdf6a0 */
  push32(0x11cdf575u); f_11cdf6a0();
  /* 11cdf575 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf578 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf57a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf57c push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf57e push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdf580 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf582 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf584 push 5 */
  push32((uint32_t)(0x5u));
  /* 11cdf586 push 0xa */
  push32((uint32_t)(0xau));
  /* 11cdf588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf58b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11cdf58e push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf58f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdf591 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf593 call 0x11cdf6a0 */
  push32(0x11cdf598u); f_11cdf6a0();
  /* 11cdf598 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cdf59b:;
  /* 11cdf59b mov edx, dword ptr [0x11cfe614] */
  EDX = (r32((uint32_t)(0x11cfe614)));
  /* 11cdf5a1 cmp edx, dword ptr [0x11cfe624] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11cfe624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf5a7 jge 0x11cdf5f4 */
  if ((C.sf==C.of)) goto L_11cdf5f4;
  /* 11cdf5a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf5ac mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11cdf5af cmp ecx, dword ptr [0x11cfe614] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11cfe614))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf5b5 jl 0x11cdf5c5 */
  if ((C.sf!=C.of)) goto L_11cdf5c5;
  /* 11cdf5b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf5ba mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11cdf5bd cmp eax, dword ptr [0x11cfe624] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cfe624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf5c3 jle 0x11cdf5cc */
  if ((C.zf||C.sf!=C.of)) goto L_11cdf5cc;
L_11cdf5c5:;
  /* 11cdf5c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf5c7 jmp 0x11cdf696 */
  goto L_11cdf696;
L_11cdf5cc:;
  /* 11cdf5cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf5cf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11cdf5d2 cmp edx, dword ptr [0x11cfe614] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11cfe614))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf5d8 jle 0x11cdf5f2 */
  if ((C.zf||C.sf!=C.of)) goto L_11cdf5f2;
  /* 11cdf5da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf5dd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11cdf5e0 cmp ecx, dword ptr [0x11cfe624] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11cfe624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf5e6 jge 0x11cdf5f2 */
  if ((C.sf==C.of)) goto L_11cdf5f2;
  /* 11cdf5e8 mov eax, 1 */
  EAX = (0x1u);
  /* 11cdf5ed jmp 0x11cdf696 */
  goto L_11cdf696;
L_11cdf5f2:;
  /* 11cdf5f2 jmp 0x11cdf637 */
  goto L_11cdf637;
L_11cdf5f4:;
  /* 11cdf5f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf5f7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11cdf5fa cmp eax, dword ptr [0x11cfe624] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cfe624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf600 jl 0x11cdf610 */
  if ((C.sf!=C.of)) goto L_11cdf610;
  /* 11cdf602 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf605 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11cdf608 cmp edx, dword ptr [0x11cfe614] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11cfe614))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf60e jle 0x11cdf617 */
  if ((C.zf||C.sf!=C.of)) goto L_11cdf617;
L_11cdf610:;
  /* 11cdf610 mov eax, 1 */
  EAX = (0x1u);
  /* 11cdf615 jmp 0x11cdf696 */
  goto L_11cdf696;
L_11cdf617:;
  /* 11cdf617 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf61a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11cdf61d cmp ecx, dword ptr [0x11cfe624] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11cfe624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf623 jle 0x11cdf637 */
  if ((C.zf||C.sf!=C.of)) goto L_11cdf637;
  /* 11cdf625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf628 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11cdf62b cmp eax, dword ptr [0x11cfe614] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cfe614))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf631 jge 0x11cdf637 */
  if ((C.sf==C.of)) goto L_11cdf637;
  /* 11cdf633 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf635 jmp 0x11cdf696 */
  goto L_11cdf696;
L_11cdf637:;
  /* 11cdf637 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf63a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cdf63d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf640 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf643 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cdf645 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf647 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf64a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cdf64d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf653 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf655 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf65b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cdf65e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf661 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11cdf664 cmp edx, dword ptr [0x11cfe614] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11cfe614))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf66a jne 0x11cdf682 */
  if (!C.zf) goto L_11cdf682;
  /* 11cdf66c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdf66f cmp eax, dword ptr [0x11cfe618] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cfe618))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf675 jl 0x11cdf67e */
  if ((C.sf!=C.of)) goto L_11cdf67e;
  /* 11cdf677 mov eax, 1 */
  EAX = (0x1u);
  /* 11cdf67c jmp 0x11cdf696 */
  goto L_11cdf696;
L_11cdf67e:;
  /* 11cdf67e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf680 jmp 0x11cdf696 */
  goto L_11cdf696;
L_11cdf682:;
  /* 11cdf682 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdf685 cmp ecx, dword ptr [0x11cfe628] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11cfe628))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf68b jge 0x11cdf694 */
  if ((C.sf==C.of)) goto L_11cdf694;
  /* 11cdf68d mov eax, 1 */
  EAX = (0x1u);
  /* 11cdf692 jmp 0x11cdf696 */
  goto L_11cdf696;
L_11cdf694:;
  /* 11cdf694 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cdf696:;
  /* 11cdf696 mov esp, ebp */
  ESP = (EBP);
  /* 11cdf698 pop ebp */
  EBP = (pop32());
  /* 11cdf699 ret  */
  ESPCHK(0x11cdf3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f6a0 @ 0x11cdf6a0 (504 bytes, 145 insns) */
void f_11cdf6a0(void) {
  FTRACE(0x11cdf6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdf6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdf6a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdf6a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdf6a6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf6aa jne 0x11cdf77c */
  if (!C.zf) goto L_11cdf77c;
  /* 11cdf6b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdf6b3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf6b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdf6b8 jne 0x11cdf6c9 */
  if (!C.zf) goto L_11cdf6c9;
  /* 11cdf6ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdf6bd mov edx, dword ptr [ecx*4 + 0x11cfe62c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11cfe62c)));
  /* 11cdf6c4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11cdf6c7 jmp 0x11cdf6d6 */
  goto L_11cdf6d6;
L_11cdf6c9:;
  /* 11cdf6c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdf6cc mov ecx, dword ptr [eax*4 + 0x11cfe660] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11cfe660)));
  /* 11cdf6d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11cdf6d6:;
  /* 11cdf6d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdf6d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf6dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cdf6df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdf6e2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdf6e5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf6eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdf6ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf6f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdf6f3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdf6f6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11cdf6f9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11cdf6fd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cdf6fe mov ecx, 7 */
  ECX = (0x7u);
  /* 11cdf703 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cdf705 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cdf708 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdf70b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf70e jge 0x11cdf729 */
  if ((C.sf==C.of)) goto L_11cdf729;
  /* 11cdf710 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cdf713 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdf716 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdf719 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdf71c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf71f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf722 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf724 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdf727 jmp 0x11cdf73d */
  goto L_11cdf73d;
L_11cdf729:;
  /* 11cdf729 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cdf72c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdf72f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdf732 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf735 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf738 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf73a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11cdf73d:;
  /* 11cdf73d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf741 jne 0x11cdf77a */
  if (!C.zf) goto L_11cdf77a;
  /* 11cdf743 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdf746 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11cdf749 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cdf74b jne 0x11cdf75c */
  if (!C.zf) goto L_11cdf75c;
  /* 11cdf74d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdf750 mov eax, dword ptr [edx*4 + 0x11cfe630] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11cfe630)));
  /* 11cdf757 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cdf75a jmp 0x11cdf769 */
  goto L_11cdf769;
L_11cdf75c:;
  /* 11cdf75c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdf75f mov edx, dword ptr [ecx*4 + 0x11cfe664] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11cfe664)));
  /* 11cdf766 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11cdf769:;
  /* 11cdf769 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdf76c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf76f jle 0x11cdf77a */
  if ((C.zf||C.sf!=C.of)) goto L_11cdf77a;
  /* 11cdf771 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdf774 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdf777 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11cdf77a:;
  /* 11cdf77a jmp 0x11cdf7b1 */
  goto L_11cdf7b1;
L_11cdf77c:;
  /* 11cdf77c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdf77f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11cdf782 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cdf784 jne 0x11cdf795 */
  if (!C.zf) goto L_11cdf795;
  /* 11cdf786 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdf789 mov ecx, dword ptr [eax*4 + 0x11cfe62c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11cfe62c)));
  /* 11cdf790 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cdf793 jmp 0x11cdf7a2 */
  goto L_11cdf7a2;
L_11cdf795:;
  /* 11cdf795 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdf798 mov eax, dword ptr [edx*4 + 0x11cfe660] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11cfe660)));
  /* 11cdf79f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11cdf7a2:;
  /* 11cdf7a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cdf7a5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cdf7a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdf7ab add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf7ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11cdf7b1:;
  /* 11cdf7b1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf7b5 jne 0x11cdf7f1 */
  if (!C.zf) goto L_11cdf7f1;
  /* 11cdf7b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdf7ba mov dword ptr [0x11cfe614], eax */
  w32((uint32_t)(0x11cfe614), (EAX));
  /* 11cdf7bf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11cdf7c2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf7c5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11cdf7c8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf7ca imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf7cd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11cdf7d0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf7d2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf7d8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11cdf7db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf7dd mov dword ptr [0x11cfe618], ecx */
  w32((uint32_t)(0x11cfe618), (ECX));
  /* 11cdf7e3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdf7e6 mov dword ptr [0x11cfe610], edx */
  w32((uint32_t)(0x11cfe610), (EDX));
  /* 11cdf7ec jmp 0x11cdf894 */
  goto L_11cdf894;
L_11cdf7f1:;
  /* 11cdf7f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdf7f4 mov dword ptr [0x11cfe624], eax */
  w32((uint32_t)(0x11cfe624), (EAX));
  /* 11cdf7f9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11cdf7fc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf7ff mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11cdf802 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf804 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf807 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11cdf80a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf80c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf812 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11cdf815 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf817 mov dword ptr [0x11cfe628], ecx */
  w32((uint32_t)(0x11cfe628), (ECX));
  /* 11cdf81d mov edx, dword ptr [0x11cfe584] */
  EDX = (r32((uint32_t)(0x11cfe584)));
  /* 11cdf823 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cdf829 mov eax, dword ptr [0x11cfe628] */
  EAX = (r32((uint32_t)(0x11cfe628)));
  /* 11cdf82e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf830 mov dword ptr [0x11cfe628], eax */
  w32((uint32_t)(0x11cfe628), (EAX));
  /* 11cdf835 cmp dword ptr [0x11cfe628], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cfe628))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf83c jge 0x11cdf861 */
  if ((C.sf==C.of)) goto L_11cdf861;
  /* 11cdf83e mov ecx, dword ptr [0x11cfe628] */
  ECX = (r32((uint32_t)(0x11cfe628)));
  /* 11cdf844 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf84a mov dword ptr [0x11cfe628], ecx */
  w32((uint32_t)(0x11cfe628), (ECX));
  /* 11cdf850 mov edx, dword ptr [0x11cfe624] */
  EDX = (r32((uint32_t)(0x11cfe624)));
  /* 11cdf856 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdf859 mov dword ptr [0x11cfe624], edx */
  w32((uint32_t)(0x11cfe624), (EDX));
  /* 11cdf85f jmp 0x11cdf88b */
  goto L_11cdf88b;
L_11cdf861:;
  /* 11cdf861 cmp dword ptr [0x11cfe628], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11cfe628))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf86b jl 0x11cdf88b */
  if ((C.sf!=C.of)) goto L_11cdf88b;
  /* 11cdf86d mov eax, dword ptr [0x11cfe628] */
  EAX = (r32((uint32_t)(0x11cfe628)));
  /* 11cdf872 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdf877 mov dword ptr [0x11cfe628], eax */
  w32((uint32_t)(0x11cfe628), (EAX));
  /* 11cdf87c mov ecx, dword ptr [0x11cfe624] */
  ECX = (r32((uint32_t)(0x11cfe624)));
  /* 11cdf882 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf885 mov dword ptr [0x11cfe624], ecx */
  w32((uint32_t)(0x11cfe624), (ECX));
L_11cdf88b:;
  /* 11cdf88b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdf88e mov dword ptr [0x11cfe620], edx */
  w32((uint32_t)(0x11cfe620), (EDX));
L_11cdf894:;
  /* 11cdf894 mov esp, ebp */
  ESP = (EBP);
  /* 11cdf896 pop ebp */
  EBP = (pop32());
  /* 11cdf897 ret  */
  ESPCHK(0x11cdf6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f8a0 @ 0x11cdf8a0 (382 bytes, 135 insns) */
void f_11cdf8a0(void) {
  FTRACE(0x11cdf8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdf8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdf8a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cdf8a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cdf8a5 push 0x11cfad60 */
  push32((uint32_t)(0x11cfad60u));
  /* 11cdf8aa push 0x11cd501c */
  push32((uint32_t)(0x11cd501cu));
  /* 11cdf8af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11cdf8b5 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf8b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11cdf8bd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf8c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11cdf8c1 push esi */
  push32((uint32_t)(ESI));
  /* 11cdf8c2 push edi */
  push32((uint32_t)(EDI));
  /* 11cdf8c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cdf8c6 cmp dword ptr [0x11cff7b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf8cd jne 0x11cdf912 */
  if (!C.zf) goto L_11cdf912;
  /* 11cdf8cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf8d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf8d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdf8d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf8d7 call dword ptr [0x11d01304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01304))), 0x11cdf8ddu);
  /* 11cdf8dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdf8df je 0x11cdf8ed */
  if (C.zf) goto L_11cdf8ed;
  /* 11cdf8e1 mov dword ptr [0x11cff7b4], 1 */
  w32((uint32_t)(0x11cff7b4), (0x1u));
  /* 11cdf8eb jmp 0x11cdf912 */
  goto L_11cdf912;
L_11cdf8ed:;
  /* 11cdf8ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf8ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf8f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdf8f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf8f5 call dword ptr [0x11d01320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01320))), 0x11cdf8fbu);
  /* 11cdf8fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdf8fd je 0x11cdf90b */
  if (C.zf) goto L_11cdf90b;
  /* 11cdf8ff mov dword ptr [0x11cff7b4], 2 */
  w32((uint32_t)(0x11cff7b4), (0x2u));
  /* 11cdf909 jmp 0x11cdf912 */
  goto L_11cdf912;
L_11cdf90b:;
  /* 11cdf90b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf90d jmp 0x11cdfa21 */
  goto L_11cdfa21;
L_11cdf912:;
  /* 11cdf912 cmp dword ptr [0x11cff7b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf919 jne 0x11cdf936 */
  if (!C.zf) goto L_11cdf936;
  /* 11cdf91b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdf91e push eax */
  push32((uint32_t)(EAX));
  /* 11cdf91f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdf922 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf923 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdf926 push edx */
  push32((uint32_t)(EDX));
  /* 11cdf927 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf92a push eax */
  push32((uint32_t)(EAX));
  /* 11cdf92b call dword ptr [0x11d01304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01304))), 0x11cdf931u);
  /* 11cdf931 jmp 0x11cdfa21 */
  goto L_11cdfa21;
L_11cdf936:;
  /* 11cdf936 cmp dword ptr [0x11cff7b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf93d jne 0x11cdfa1f */
  if (!C.zf) goto L_11cdfa1f;
  /* 11cdf943 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf947 jne 0x11cdf952 */
  if (!C.zf) goto L_11cdf952;
  /* 11cdf949 mov ecx, dword ptr [0x11cff674] */
  ECX = (r32((uint32_t)(0x11cff674)));
  /* 11cdf94f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11cdf952:;
  /* 11cdf952 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf954 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf956 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdf959 push edx */
  push32((uint32_t)(EDX));
  /* 11cdf95a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf95d push eax */
  push32((uint32_t)(EAX));
  /* 11cdf95e call dword ptr [0x11d01320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01320))), 0x11cdf964u);
  /* 11cdf964 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11cdf967 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf96b jne 0x11cdf974 */
  if (!C.zf) goto L_11cdf974;
  /* 11cdf96d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf96f jmp 0x11cdfa21 */
  goto L_11cdfa21;
L_11cdf974:;
  /* 11cdf974 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cdf97b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cdf97e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdf981 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11cdf983 call 0x11cd0df0 */
  push32(0x11cdf988u); f_11cd0df0();
  /* 11cdf988 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11cdf98b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cdf98e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cdf991 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11cdf994 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11cdf99b jmp 0x11cdf9b4 */
  goto L_11cdf9b4;
  /* 11cdf99d mov eax, 1 */
  EAX = (0x1u);
  /* 11cdf9a2 ret  */
  ESPCHK(0x11cdf8a0u, _esp0);
  ESP += 4; return;
  /* 11cdf9a3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdf9a6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11cdf9ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11cdf9b4:;
  /* 11cdf9b4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf9b8 jne 0x11cdf9be */
  if (!C.zf) goto L_11cdf9be;
  /* 11cdf9ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf9bc jmp 0x11cdfa21 */
  goto L_11cdfa21;
L_11cdf9be:;
  /* 11cdf9be mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cdf9c1 push edx */
  push32((uint32_t)(EDX));
  /* 11cdf9c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cdf9c5 push eax */
  push32((uint32_t)(EAX));
  /* 11cdf9c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdf9c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf9ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdf9cd push edx */
  push32((uint32_t)(EDX));
  /* 11cdf9ce call dword ptr [0x11d01320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01320))), 0x11cdf9d4u);
  /* 11cdf9d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdf9d6 jne 0x11cdf9dc */
  if (!C.zf) goto L_11cdf9dc;
  /* 11cdf9d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdf9da jmp 0x11cdfa21 */
  goto L_11cdfa21;
L_11cdf9dc:;
  /* 11cdf9dc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdf9e0 jne 0x11cdf9fd */
  if (!C.zf) goto L_11cdf9fd;
  /* 11cdf9e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf9e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdf9e6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cdf9e8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cdf9eb push eax */
  push32((uint32_t)(EAX));
  /* 11cdf9ec push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdf9ee mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdf9f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdf9f2 call dword ptr [0x11d01344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01344))), 0x11cdf9f8u);
  /* 11cdf9f8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11cdf9fb jmp 0x11cdfa1a */
  goto L_11cdfa1a;
L_11cdf9fd:;
  /* 11cdf9fd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdfa00 push edx */
  push32((uint32_t)(EDX));
  /* 11cdfa01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdfa04 push eax */
  push32((uint32_t)(EAX));
  /* 11cdfa05 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cdfa07 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cdfa0a push ecx */
  push32((uint32_t)(ECX));
  /* 11cdfa0b push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdfa0d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdfa10 push edx */
  push32((uint32_t)(EDX));
  /* 11cdfa11 call dword ptr [0x11d01344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01344))), 0x11cdfa17u);
  /* 11cdfa17 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11cdfa1a:;
  /* 11cdfa1a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cdfa1d jmp 0x11cdfa21 */
  goto L_11cdfa21;
L_11cdfa1f:;
  /* 11cdfa1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cdfa21:;
  /* 11cdfa21 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11cdfa24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdfa27 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11cdfa2e pop edi */
  EDI = (pop32());
  /* 11cdfa2f pop esi */
  ESI = (pop32());
  /* 11cdfa30 pop ebx */
  EBX = (pop32());
  /* 11cdfa31 mov esp, ebp */
  ESP = (EBP);
  /* 11cdfa33 pop ebp */
  EBP = (pop32());
  /* 11cdfa34 ret  */
  ESPCHK(0x11cdf8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fa40 @ 0x11cdfa40 (398 bytes, 140 insns) */
void f_11cdfa40(void) {
  FTRACE(0x11cdfa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdfa40 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdfa41 mov ebp, esp */
  EBP = (ESP);
  /* 11cdfa43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cdfa45 push 0x11cfad70 */
  push32((uint32_t)(0x11cfad70u));
  /* 11cdfa4a push 0x11cd501c */
  push32((uint32_t)(0x11cd501cu));
  /* 11cdfa4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11cdfa55 push eax */
  push32((uint32_t)(EAX));
  /* 11cdfa56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11cdfa5d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfa60 push ebx */
  push32((uint32_t)(EBX));
  /* 11cdfa61 push esi */
  push32((uint32_t)(ESI));
  /* 11cdfa62 push edi */
  push32((uint32_t)(EDI));
  /* 11cdfa63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cdfa66 cmp dword ptr [0x11cff7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfa6d jne 0x11cdfab2 */
  if (!C.zf) goto L_11cdfab2;
  /* 11cdfa6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfa71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfa73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdfa75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfa77 call dword ptr [0x11d01304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01304))), 0x11cdfa7du);
  /* 11cdfa7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdfa7f je 0x11cdfa8d */
  if (C.zf) goto L_11cdfa8d;
  /* 11cdfa81 mov dword ptr [0x11cff7b8], 1 */
  w32((uint32_t)(0x11cff7b8), (0x1u));
  /* 11cdfa8b jmp 0x11cdfab2 */
  goto L_11cdfab2;
L_11cdfa8d:;
  /* 11cdfa8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfa8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfa91 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdfa93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfa95 call dword ptr [0x11d01320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01320))), 0x11cdfa9bu);
  /* 11cdfa9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdfa9d je 0x11cdfaab */
  if (C.zf) goto L_11cdfaab;
  /* 11cdfa9f mov dword ptr [0x11cff7b8], 2 */
  w32((uint32_t)(0x11cff7b8), (0x2u));
  /* 11cdfaa9 jmp 0x11cdfab2 */
  goto L_11cdfab2;
L_11cdfaab:;
  /* 11cdfaab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdfaad jmp 0x11cdfbd1 */
  goto L_11cdfbd1;
L_11cdfab2:;
  /* 11cdfab2 cmp dword ptr [0x11cff7b8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7b8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfab9 jne 0x11cdfad6 */
  if (!C.zf) goto L_11cdfad6;
  /* 11cdfabb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdfabe push eax */
  push32((uint32_t)(EAX));
  /* 11cdfabf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdfac2 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdfac3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdfac6 push edx */
  push32((uint32_t)(EDX));
  /* 11cdfac7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdfaca push eax */
  push32((uint32_t)(EAX));
  /* 11cdfacb call dword ptr [0x11d01320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01320))), 0x11cdfad1u);
  /* 11cdfad1 jmp 0x11cdfbd1 */
  goto L_11cdfbd1;
L_11cdfad6:;
  /* 11cdfad6 cmp dword ptr [0x11cff7b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfadd jne 0x11cdfbcf */
  if (!C.zf) goto L_11cdfbcf;
  /* 11cdfae3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfae7 jne 0x11cdfaf2 */
  if (!C.zf) goto L_11cdfaf2;
  /* 11cdfae9 mov ecx, dword ptr [0x11cff674] */
  ECX = (r32((uint32_t)(0x11cff674)));
  /* 11cdfaef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11cdfaf2:;
  /* 11cdfaf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfaf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfaf6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdfaf9 push edx */
  push32((uint32_t)(EDX));
  /* 11cdfafa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdfafd push eax */
  push32((uint32_t)(EAX));
  /* 11cdfafe call dword ptr [0x11d01304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01304))), 0x11cdfb04u);
  /* 11cdfb04 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11cdfb07 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfb0b jne 0x11cdfb14 */
  if (!C.zf) goto L_11cdfb14;
  /* 11cdfb0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdfb0f jmp 0x11cdfbd1 */
  goto L_11cdfbd1;
L_11cdfb14:;
  /* 11cdfb14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cdfb1b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cdfb1e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cdfb20 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfb23 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11cdfb25 call 0x11cd0df0 */
  push32(0x11cdfb2au); f_11cd0df0();
  /* 11cdfb2a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11cdfb2d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cdfb30 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cdfb33 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11cdfb36 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11cdfb3d jmp 0x11cdfb56 */
  goto L_11cdfb56;
  /* 11cdfb3f mov eax, 1 */
  EAX = (0x1u);
  /* 11cdfb44 ret  */
  ESPCHK(0x11cdfa40u, _esp0);
  ESP += 4; return;
  /* 11cdfb45 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11cdfb48 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11cdfb4f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11cdfb56:;
  /* 11cdfb56 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfb5a jne 0x11cdfb60 */
  if (!C.zf) goto L_11cdfb60;
  /* 11cdfb5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdfb5e jmp 0x11cdfbd1 */
  goto L_11cdfbd1;
L_11cdfb60:;
  /* 11cdfb60 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cdfb63 push edx */
  push32((uint32_t)(EDX));
  /* 11cdfb64 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cdfb67 push eax */
  push32((uint32_t)(EAX));
  /* 11cdfb68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdfb6b push ecx */
  push32((uint32_t)(ECX));
  /* 11cdfb6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdfb6f push edx */
  push32((uint32_t)(EDX));
  /* 11cdfb70 call dword ptr [0x11d01304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01304))), 0x11cdfb76u);
  /* 11cdfb76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdfb78 jne 0x11cdfb7e */
  if (!C.zf) goto L_11cdfb7e;
  /* 11cdfb7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdfb7c jmp 0x11cdfbd1 */
  goto L_11cdfbd1;
L_11cdfb7e:;
  /* 11cdfb7e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfb82 jne 0x11cdfba6 */
  if (!C.zf) goto L_11cdfba6;
  /* 11cdfb84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfb86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfb88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfb8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfb8c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cdfb8e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cdfb91 push eax */
  push32((uint32_t)(EAX));
  /* 11cdfb92 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11cdfb97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdfb9a push ecx */
  push32((uint32_t)(ECX));
  /* 11cdfb9b call dword ptr [0x11d0139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0139c))), 0x11cdfba1u);
  /* 11cdfba1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11cdfba4 jmp 0x11cdfbca */
  goto L_11cdfbca;
L_11cdfba6:;
  /* 11cdfba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfbaa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdfbad push edx */
  push32((uint32_t)(EDX));
  /* 11cdfbae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdfbb1 push eax */
  push32((uint32_t)(EAX));
  /* 11cdfbb2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cdfbb4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cdfbb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdfbb8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11cdfbbd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdfbc0 push edx */
  push32((uint32_t)(EDX));
  /* 11cdfbc1 call dword ptr [0x11d0139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0139c))), 0x11cdfbc7u);
  /* 11cdfbc7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11cdfbca:;
  /* 11cdfbca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cdfbcd jmp 0x11cdfbd1 */
  goto L_11cdfbd1;
L_11cdfbcf:;
  /* 11cdfbcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cdfbd1:;
  /* 11cdfbd1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11cdfbd4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cdfbd7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11cdfbde pop edi */
  EDI = (pop32());
  /* 11cdfbdf pop esi */
  ESI = (pop32());
  /* 11cdfbe0 pop ebx */
  EBX = (pop32());
  /* 11cdfbe1 mov esp, ebp */
  ESP = (EBP);
  /* 11cdfbe3 pop ebp */
  EBP = (pop32());
  /* 11cdfbe4 ret  */
  ESPCHK(0x11cdfa40u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11cdfbf0 (52 bytes, 19 insns) */
void f_11cdfbf0(void) {
  FTRACE(0x11cdfbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdfbf0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cdfbf4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11cdfbf8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cdfbfa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11cdfbfe jne 0x11cdfc09 */
  if (!C.zf) goto L_11cdfc09;
  /* 11cdfc00 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cdfc04 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11cdfc06 ret 0x10 */
  ESPCHK(0x11cdfbf0u, _esp0);
  ESP += 20; return;
L_11cdfc09:;
  /* 11cdfc09 push ebx */
  push32((uint32_t)(EBX));
  /* 11cdfc0a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11cdfc0c mov ebx, eax */
  EBX = (EAX);
  /* 11cdfc0e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cdfc12 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11cdfc16 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfc18 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cdfc1c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11cdfc1e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfc20 pop ebx */
  EBX = (pop32());
  /* 11cdfc21 ret 0x10 */
  ESPCHK(0x11cdfbf0u, _esp0);
  ESP += 20; return;
}

/* FUN_1001fc30 @ 0x11cdfc30 (46 bytes, 18 insns) */
void f_11cdfc30(void) {
  FTRACE(0x11cdfc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdfc30 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdfc31 mov ebp, esp */
  EBP = (ESP);
  /* 11cdfc33 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdfc34 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11cdfc36 call 0x11ccb3c0 */
  push32(0x11cdfc3bu); f_11ccb3c0();
  /* 11cdfc3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfc3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdfc41 push eax */
  push32((uint32_t)(EAX));
  /* 11cdfc42 call 0x11cdfc60 */
  push32(0x11cdfc47u); f_11cdfc60();
  /* 11cdfc47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfc4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdfc4d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11cdfc4f call 0x11ccb460 */
  push32(0x11cdfc54u); f_11ccb460();
  /* 11cdfc54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfc57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdfc5a mov esp, ebp */
  ESP = (EBP);
  /* 11cdfc5c pop ebp */
  EBP = (pop32());
  /* 11cdfc5d ret  */
  ESPCHK(0x11cdfc30u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11cdfc60 (198 bytes, 69 insns) */
void f_11cdfc60(void) {
  FTRACE(0x11cdfc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdfc60 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdfc61 mov ebp, esp */
  EBP = (ESP);
  /* 11cdfc63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdfc66 mov eax, dword ptr [0x11cff4e4] */
  EAX = (r32((uint32_t)(0x11cff4e4)));
  /* 11cdfc6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cdfc6e cmp dword ptr [0x11d00f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d00f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfc75 jne 0x11cdfc7e */
  if (!C.zf) goto L_11cdfc7e;
  /* 11cdfc77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdfc79 jmp 0x11cdfd22 */
  goto L_11cdfd22;
L_11cdfc7e:;
  /* 11cdfc7e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfc82 jne 0x11cdfca6 */
  if (!C.zf) goto L_11cdfca6;
  /* 11cdfc84 cmp dword ptr [0x11cff4ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff4ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfc8b je 0x11cdfca6 */
  if (C.zf) goto L_11cdfca6;
  /* 11cdfc8d call 0x11cdfd80 */
  push32(0x11cdfc92u); f_11cdfd80();
  /* 11cdfc92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdfc94 je 0x11cdfc9d */
  if (C.zf) goto L_11cdfc9d;
  /* 11cdfc96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdfc98 jmp 0x11cdfd22 */
  goto L_11cdfd22;
L_11cdfc9d:;
  /* 11cdfc9d mov ecx, dword ptr [0x11cff4e4] */
  ECX = (r32((uint32_t)(0x11cff4e4)));
  /* 11cdfca3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11cdfca6:;
  /* 11cdfca6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfcaa je 0x11cdfd20 */
  if (C.zf) goto L_11cdfd20;
  /* 11cdfcac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfcb0 je 0x11cdfd20 */
  if (C.zf) goto L_11cdfd20;
  /* 11cdfcb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdfcb5 push edx */
  push32((uint32_t)(EDX));
  /* 11cdfcb6 call 0x11cd0a80 */
  push32(0x11cdfcbbu); f_11cd0a80();
  /* 11cdfcbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfcbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cdfcc1:;
  /* 11cdfcc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdfcc4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfcc7 je 0x11cdfd20 */
  if (C.zf) goto L_11cdfd20;
  /* 11cdfcc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdfccc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cdfcce push edx */
  push32((uint32_t)(EDX));
  /* 11cdfccf call 0x11cd0a80 */
  push32(0x11cdfcd4u); f_11cd0a80();
  /* 11cdfcd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfcd7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfcda jbe 0x11cdfd15 */
  if ((C.cf||C.zf)) goto L_11cdfd15;
  /* 11cdfcdc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdfcdf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cdfce1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdfce4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11cdfce8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfceb jne 0x11cdfd15 */
  if (!C.zf) goto L_11cdfd15;
  /* 11cdfced mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdfcf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdfcf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdfcf4 push edx */
  push32((uint32_t)(EDX));
  /* 11cdfcf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdfcf8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cdfcfa push ecx */
  push32((uint32_t)(ECX));
  /* 11cdfcfb call 0x11cdfd30 */
  push32(0x11cdfd00u); f_11cdfd30();
  /* 11cdfd00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfd03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdfd05 jne 0x11cdfd15 */
  if (!C.zf) goto L_11cdfd15;
  /* 11cdfd07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdfd0a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cdfd0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdfd0f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11cdfd13 jmp 0x11cdfd22 */
  goto L_11cdfd22;
L_11cdfd15:;
  /* 11cdfd15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdfd18 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfd1b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cdfd1e jmp 0x11cdfcc1 */
  goto L_11cdfcc1;
L_11cdfd20:;
  /* 11cdfd20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cdfd22:;
  /* 11cdfd22 mov esp, ebp */
  ESP = (EBP);
  /* 11cdfd24 pop ebp */
  EBP = (pop32());
  /* 11cdfd25 ret  */
  ESPCHK(0x11cdfc60u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11cdfd30 (79 bytes, 32 insns) */
void f_11cdfd30(void) {
  FTRACE(0x11cdfd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdfd30 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdfd31 mov ebp, esp */
  EBP = (ESP);
  /* 11cdfd33 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdfd34 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfd38 jne 0x11cdfd3e */
  if (!C.zf) goto L_11cdfd3e;
  /* 11cdfd3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdfd3c jmp 0x11cdfd7b */
  goto L_11cdfd7b;
L_11cdfd3e:;
  /* 11cdfd3e mov eax, dword ptr [0x11cff7e8] */
  EAX = (r32((uint32_t)(0x11cff7e8)));
  /* 11cdfd43 push eax */
  push32((uint32_t)(EAX));
  /* 11cdfd44 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdfd47 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdfd48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdfd4b push edx */
  push32((uint32_t)(EDX));
  /* 11cdfd4c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdfd4f push eax */
  push32((uint32_t)(EAX));
  /* 11cdfd50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdfd53 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdfd54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdfd56 mov edx, dword ptr [0x11cffa84] */
  EDX = (r32((uint32_t)(0x11cffa84)));
  /* 11cdfd5c push edx */
  push32((uint32_t)(EDX));
  /* 11cdfd5d call 0x11cdfe30 */
  push32(0x11cdfd62u); f_11cdfe30();
  /* 11cdfd62 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfd65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cdfd68 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfd6c jne 0x11cdfd75 */
  if (!C.zf) goto L_11cdfd75;
  /* 11cdfd6e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11cdfd73 jmp 0x11cdfd7b */
  goto L_11cdfd7b;
L_11cdfd75:;
  /* 11cdfd75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdfd78 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11cdfd7b:;
  /* 11cdfd7b mov esp, ebp */
  ESP = (EBP);
  /* 11cdfd7d pop ebp */
  EBP = (pop32());
  /* 11cdfd7e ret  */
  ESPCHK(0x11cdfd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fd80 @ 0x11cdfd80 (174 bytes, 66 insns) */
void f_11cdfd80(void) {
  FTRACE(0x11cdfd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdfd80 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdfd81 mov ebp, esp */
  EBP = (ESP);
  /* 11cdfd83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cdfd86 mov eax, dword ptr [0x11cff4ec] */
  EAX = (r32((uint32_t)(0x11cff4ec)));
  /* 11cdfd8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cdfd8e:;
  /* 11cdfd8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdfd91 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfd94 je 0x11cdfe28 */
  if (C.zf) goto L_11cdfe28;
  /* 11cdfd9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfd9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfd9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfda0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfda2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cdfda4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdfda7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cdfda9 push eax */
  push32((uint32_t)(EAX));
  /* 11cdfdaa push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfdac push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdfdae call dword ptr [0x11d0139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0139c))), 0x11cdfdb4u);
  /* 11cdfdb4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cdfdb7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfdbb jne 0x11cdfdc2 */
  if (!C.zf) goto L_11cdfdc2;
  /* 11cdfdbd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdfdc0 jmp 0x11cdfe2a */
  goto L_11cdfe2a;
L_11cdfdc2:;
  /* 11cdfdc2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11cdfdc4 push 0x11cfad7c */
  push32((uint32_t)(0x11cfad7cu));
  /* 11cdfdc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdfdcb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdfdce push ecx */
  push32((uint32_t)(ECX));
  /* 11cdfdcf call 0x11ccb4c0 */
  push32(0x11cdfdd4u); f_11ccb4c0();
  /* 11cdfdd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfdd7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cdfdda cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfdde jne 0x11cdfde5 */
  if (!C.zf) goto L_11cdfde5;
  /* 11cdfde0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdfde3 jmp 0x11cdfe2a */
  goto L_11cdfe2a;
L_11cdfde5:;
  /* 11cdfde5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfde7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfde9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cdfdec push edx */
  push32((uint32_t)(EDX));
  /* 11cdfded mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdfdf0 push eax */
  push32((uint32_t)(EAX));
  /* 11cdfdf1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cdfdf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdfdf6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cdfdf8 push edx */
  push32((uint32_t)(EDX));
  /* 11cdfdf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfdfb push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdfdfd call dword ptr [0x11d0139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0139c))), 0x11cdfe03u);
  /* 11cdfe03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdfe05 jne 0x11cdfe0c */
  if (!C.zf) goto L_11cdfe0c;
  /* 11cdfe07 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cdfe0a jmp 0x11cdfe2a */
  goto L_11cdfe2a;
L_11cdfe0c:;
  /* 11cdfe0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfe0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cdfe11 push eax */
  push32((uint32_t)(EAX));
  /* 11cdfe12 call 0x11ce0280 */
  push32(0x11cdfe17u); f_11ce0280();
  /* 11cdfe17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfe1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cdfe1d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfe20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cdfe23 jmp 0x11cdfd8e */
  goto L_11cdfd8e;
L_11cdfe28:;
  /* 11cdfe28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cdfe2a:;
  /* 11cdfe2a mov esp, ebp */
  ESP = (EBP);
  /* 11cdfe2c pop ebp */
  EBP = (pop32());
  /* 11cdfe2d ret  */
  ESPCHK(0x11cdfd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fe30 @ 0x11cdfe30 (970 bytes, 340 insns) */
void f_11cdfe30(void) {
  FTRACE(0x11cdfe30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cdfe30 push ebp */
  push32((uint32_t)(EBP));
  /* 11cdfe31 mov ebp, esp */
  EBP = (ESP);
  /* 11cdfe33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11cdfe35 push 0x11cfadd0 */
  push32((uint32_t)(0x11cfadd0u));
  /* 11cdfe3a push 0x11cd501c */
  push32((uint32_t)(0x11cd501cu));
  /* 11cdfe3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11cdfe45 push eax */
  push32((uint32_t)(EAX));
  /* 11cdfe46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11cdfe4d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfe50 push ebx */
  push32((uint32_t)(EBX));
  /* 11cdfe51 push esi */
  push32((uint32_t)(ESI));
  /* 11cdfe52 push edi */
  push32((uint32_t)(EDI));
  /* 11cdfe53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11cdfe56 cmp dword ptr [0x11cff7bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfe5d jne 0x11cdfeb6 */
  if (!C.zf) goto L_11cdfeb6;
  /* 11cdfe5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdfe61 push 0x11cfa420 */
  push32((uint32_t)(0x11cfa420u));
  /* 11cdfe66 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdfe68 push 0x11cfa420 */
  push32((uint32_t)(0x11cfa420u));
  /* 11cdfe6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfe6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfe71 call dword ptr [0x11d01300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01300))), 0x11cdfe77u);
  /* 11cdfe77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdfe79 je 0x11cdfe87 */
  if (C.zf) goto L_11cdfe87;
  /* 11cdfe7b mov dword ptr [0x11cff7bc], 1 */
  w32((uint32_t)(0x11cff7bc), (0x1u));
  /* 11cdfe85 jmp 0x11cdfeb6 */
  goto L_11cdfeb6;
L_11cdfe87:;
  /* 11cdfe87 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdfe89 push 0x11cfa41c */
  push32((uint32_t)(0x11cfa41cu));
  /* 11cdfe8e push 1 */
  push32((uint32_t)(0x1u));
  /* 11cdfe90 push 0x11cfa41c */
  push32((uint32_t)(0x11cfa41cu));
  /* 11cdfe95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfe97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdfe99 call dword ptr [0x11d0130c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0130c))), 0x11cdfe9fu);
  /* 11cdfe9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdfea1 je 0x11cdfeaf */
  if (C.zf) goto L_11cdfeaf;
  /* 11cdfea3 mov dword ptr [0x11cff7bc], 2 */
  w32((uint32_t)(0x11cff7bc), (0x2u));
  /* 11cdfead jmp 0x11cdfeb6 */
  goto L_11cdfeb6;
L_11cdfeaf:;
  /* 11cdfeaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdfeb1 jmp 0x11ce0214 */
  goto L_11ce0214;
L_11cdfeb6:;
  /* 11cdfeb6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfeba jle 0x11cdfecf */
  if ((C.zf||C.sf!=C.of)) goto L_11cdfecf;
  /* 11cdfebc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdfebf push eax */
  push32((uint32_t)(EAX));
  /* 11cdfec0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdfec3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdfec4 call 0x11ce0230 */
  push32(0x11cdfec9u); f_11ce0230();
  /* 11cdfec9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfecc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11cdfecf:;
  /* 11cdfecf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfed3 jle 0x11cdfee8 */
  if ((C.zf||C.sf!=C.of)) goto L_11cdfee8;
  /* 11cdfed5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cdfed8 push edx */
  push32((uint32_t)(EDX));
  /* 11cdfed9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdfedc push eax */
  push32((uint32_t)(EAX));
  /* 11cdfedd call 0x11ce0230 */
  push32(0x11cdfee2u); f_11ce0230();
  /* 11cdfee2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdfee5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11cdfee8:;
  /* 11cdfee8 cmp dword ptr [0x11cff7bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdfeef jne 0x11cdff14 */
  if (!C.zf) goto L_11cdff14;
  /* 11cdfef1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cdfef4 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdfef5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cdfef8 push edx */
  push32((uint32_t)(EDX));
  /* 11cdfef9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdfefc push eax */
  push32((uint32_t)(EAX));
  /* 11cdfefd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cdff00 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdff01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cdff04 push edx */
  push32((uint32_t)(EDX));
  /* 11cdff05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cdff08 push eax */
  push32((uint32_t)(EAX));
  /* 11cdff09 call dword ptr [0x11d0130c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0130c))), 0x11cdff0fu);
  /* 11cdff0f jmp 0x11ce0214 */
  goto L_11ce0214;
L_11cdff14:;
  /* 11cdff14 cmp dword ptr [0x11cff7bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdff1b jne 0x11ce0212 */
  if (!C.zf) goto L_11ce0212;
  /* 11cdff21 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdff25 jne 0x11cdff30 */
  if (!C.zf) goto L_11cdff30;
  /* 11cdff27 mov ecx, dword ptr [0x11cff674] */
  ECX = (r32((uint32_t)(0x11cff674)));
  /* 11cdff2d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11cdff30:;
  /* 11cdff30 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdff34 je 0x11cdff40 */
  if (C.zf) goto L_11cdff40;
  /* 11cdff36 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdff3a jne 0x11ce00bc */
  if (!C.zf) goto L_11ce00bc;
L_11cdff40:;
  /* 11cdff40 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cdff43 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdff46 jne 0x11cdff52 */
  if (!C.zf) goto L_11cdff52;
  /* 11cdff48 mov eax, 2 */
  EAX = (0x2u);
  /* 11cdff4d jmp 0x11ce0214 */
  goto L_11ce0214;
L_11cdff52:;
  /* 11cdff52 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdff56 jle 0x11cdff62 */
  if ((C.zf||C.sf!=C.of)) goto L_11cdff62;
  /* 11cdff58 mov eax, 1 */
  EAX = (0x1u);
  /* 11cdff5d jmp 0x11ce0214 */
  goto L_11ce0214;
L_11cdff62:;
  /* 11cdff62 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdff66 jle 0x11cdff72 */
  if ((C.zf||C.sf!=C.of)) goto L_11cdff72;
  /* 11cdff68 mov eax, 3 */
  EAX = (0x3u);
  /* 11cdff6d jmp 0x11ce0214 */
  goto L_11ce0214;
L_11cdff72:;
  /* 11cdff72 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11cdff75 push eax */
  push32((uint32_t)(EAX));
  /* 11cdff76 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11cdff79 push ecx */
  push32((uint32_t)(ECX));
  /* 11cdff7a call dword ptr [0x11d01360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01360))), 0x11cdff80u);
  /* 11cdff80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdff82 jne 0x11cdff8b */
  if (!C.zf) goto L_11cdff8b;
  /* 11cdff84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdff86 jmp 0x11ce0214 */
  goto L_11ce0214;
L_11cdff8b:;
  /* 11cdff8b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdff8f jne 0x11cdff97 */
  if (!C.zf) goto L_11cdff97;
  /* 11cdff91 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdff95 je 0x11cdffc4 */
  if (C.zf) goto L_11cdffc4;
L_11cdff97:;
  /* 11cdff97 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdff9b jne 0x11cdffa3 */
  if (!C.zf) goto L_11cdffa3;
  /* 11cdff9d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdffa1 je 0x11cdffc4 */
  if (C.zf) goto L_11cdffc4;
L_11cdffa3:;
  /* 11cdffa3 push 0x11cfad90 */
  push32((uint32_t)(0x11cfad90u));
  /* 11cdffa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cdffaa push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11cdffaf push 0x11cfad88 */
  push32((uint32_t)(0x11cfad88u));
  /* 11cdffb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cdffb6 call 0x11cca080 */
  push32(0x11cdffbbu); f_11cca080();
  /* 11cdffbb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdffbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdffc1 jne 0x11cdffc4 */
  if (!C.zf) goto L_11cdffc4;
  /* 11cdffc3 int3  */
  x86_unimpl("int3 @ 0x11cdffc3");
L_11cdffc4:;
  /* 11cdffc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cdffc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cdffc8 jne 0x11cdff8b */
  if (!C.zf) goto L_11cdff8b;
  /* 11cdffca cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdffce jle 0x11ce0043 */
  if ((C.zf||C.sf!=C.of)) goto L_11ce0043;
  /* 11cdffd0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cdffd4 jae 0x11cdffe0 */
  if (!C.cf) goto L_11cdffe0;
  /* 11cdffd6 mov eax, 3 */
  EAX = (0x3u);
  /* 11cdffdb jmp 0x11ce0214 */
  goto L_11ce0214;
L_11cdffe0:;
  /* 11cdffe0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11cdffe3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11cdffe6 jmp 0x11cdfff1 */
  goto L_11cdfff1;
L_11cdffe8:;
  /* 11cdffe8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11cdffeb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cdffee mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11cdfff1:;
  /* 11cdfff1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11cdfff4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cdfff6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cdfff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cdfffa je 0x11ce0039 */
  if (C.zf) goto L_11ce0039;
  /* 11cdfffc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11cdffff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ce0001 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11ce0004 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ce0006 je 0x11ce0039 */
  if (C.zf) goto L_11ce0039;
  /* 11ce0008 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ce000b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ce000d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ce000f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ce0012 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ce0014 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ce0016 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce0018 jl 0x11ce0037 */
  if ((C.sf!=C.of)) goto L_11ce0037;
  /* 11ce001a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ce001d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ce001f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ce0021 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ce0024 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ce0026 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11ce0029 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce002b jg 0x11ce0037 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ce0037;
  /* 11ce002d mov eax, 2 */
  EAX = (0x2u);
  /* 11ce0032 jmp 0x11ce0214 */
  goto L_11ce0214;
L_11ce0037:;
  /* 11ce0037 jmp 0x11cdffe8 */
  goto L_11cdffe8;
L_11ce0039:;
  /* 11ce0039 mov eax, 3 */
  EAX = (0x3u);
  /* 11ce003e jmp 0x11ce0214 */
  goto L_11ce0214;
L_11ce0043:;
  /* 11ce0043 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce0047 jle 0x11ce00bc */
  if ((C.zf||C.sf!=C.of)) goto L_11ce00bc;
  /* 11ce0049 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce004d jae 0x11ce0059 */
  if (!C.cf) goto L_11ce0059;
  /* 11ce004f mov eax, 1 */
  EAX = (0x1u);
  /* 11ce0054 jmp 0x11ce0214 */
  goto L_11ce0214;
L_11ce0059:;
  /* 11ce0059 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11ce005c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11ce005f jmp 0x11ce006a */
  goto L_11ce006a;
L_11ce0061:;
  /* 11ce0061 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ce0064 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0067 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11ce006a:;
  /* 11ce006a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ce006d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ce006f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ce0071 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ce0073 je 0x11ce00b2 */
  if (C.zf) goto L_11ce00b2;
  /* 11ce0075 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ce0078 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ce007a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11ce007d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ce007f je 0x11ce00b2 */
  if (C.zf) goto L_11ce00b2;
  /* 11ce0081 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ce0084 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ce0086 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ce0088 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ce008b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ce008d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ce008f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce0091 jl 0x11ce00b0 */
  if ((C.sf!=C.of)) goto L_11ce00b0;
  /* 11ce0093 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ce0096 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ce0098 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ce009a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ce009d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ce009f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ce00a2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce00a4 jg 0x11ce00b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ce00b0;
  /* 11ce00a6 mov eax, 2 */
  EAX = (0x2u);
  /* 11ce00ab jmp 0x11ce0214 */
  goto L_11ce0214;
L_11ce00b0:;
  /* 11ce00b0 jmp 0x11ce0061 */
  goto L_11ce0061;
L_11ce00b2:;
  /* 11ce00b2 mov eax, 1 */
  EAX = (0x1u);
  /* 11ce00b7 jmp 0x11ce0214 */
  goto L_11ce0214;
L_11ce00bc:;
  /* 11ce00bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11ce00be push 0 */
  push32((uint32_t)(0x0u));
  /* 11ce00c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ce00c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ce00c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ce00c7 push edx */
  push32((uint32_t)(EDX));
  /* 11ce00c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ce00ca mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ce00cd push eax */
  push32((uint32_t)(EAX));
  /* 11ce00ce call dword ptr [0x11d01344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01344))), 0x11ce00d4u);
  /* 11ce00d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ce00d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce00db jne 0x11ce00e4 */
  if (!C.zf) goto L_11ce00e4;
  /* 11ce00dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ce00df jmp 0x11ce0214 */
  goto L_11ce0214;
L_11ce00e4:;
  /* 11ce00e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ce00eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ce00ee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ce00f0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce00f3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ce00f5 call 0x11cd0df0 */
  push32(0x11ce00fau); f_11cd0df0();
  /* 11ce00fa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11ce00fd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ce0100 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ce0103 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ce0106 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ce010d jmp 0x11ce0126 */
  goto L_11ce0126;
  /* 11ce010f mov eax, 1 */
  EAX = (0x1u);
  /* 11ce0114 ret  */
  ESPCHK(0x11cdfe30u, _esp0);
  ESP += 4; return;
  /* 11ce0115 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ce0118 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ce011f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ce0126:;
  /* 11ce0126 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce012a jne 0x11ce0133 */
  if (!C.zf) goto L_11ce0133;
  /* 11ce012c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ce012e jmp 0x11ce0214 */
  goto L_11ce0214;
L_11ce0133:;
  /* 11ce0133 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ce0136 push edx */
  push32((uint32_t)(EDX));
  /* 11ce0137 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ce013a push eax */
  push32((uint32_t)(EAX));
  /* 11ce013b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ce013e push ecx */
  push32((uint32_t)(ECX));
  /* 11ce013f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ce0142 push edx */
  push32((uint32_t)(EDX));
  /* 11ce0143 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ce0145 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ce0148 push eax */
  push32((uint32_t)(EAX));
  /* 11ce0149 call dword ptr [0x11d01344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01344))), 0x11ce014fu);
  /* 11ce014f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ce0151 jne 0x11ce015a */
  if (!C.zf) goto L_11ce015a;
  /* 11ce0153 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ce0155 jmp 0x11ce0214 */
  goto L_11ce0214;
L_11ce015a:;
  /* 11ce015a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ce015c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ce015e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ce0161 push ecx */
  push32((uint32_t)(ECX));
  /* 11ce0162 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ce0165 push edx */
  push32((uint32_t)(EDX));
  /* 11ce0166 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ce0168 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ce016b push eax */
  push32((uint32_t)(EAX));
  /* 11ce016c call dword ptr [0x11d01344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01344))), 0x11ce0172u);
  /* 11ce0172 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ce0175 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce0179 jne 0x11ce0182 */
  if (!C.zf) goto L_11ce0182;
  /* 11ce017b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ce017d jmp 0x11ce0214 */
  goto L_11ce0214;
L_11ce0182:;
  /* 11ce0182 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ce0189 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ce018c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ce018e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0191 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11ce0193 call 0x11cd0df0 */
  push32(0x11ce0198u); f_11cd0df0();
  /* 11ce0198 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11ce019b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11ce019e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ce01a1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11ce01a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11ce01ab jmp 0x11ce01c4 */
  goto L_11ce01c4;
  /* 11ce01ad mov eax, 1 */
  EAX = (0x1u);
  /* 11ce01b2 ret  */
  ESPCHK(0x11cdfe30u, _esp0);
  ESP += 4; return;
  /* 11ce01b3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11ce01b6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11ce01bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11ce01c4:;
  /* 11ce01c4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce01c8 jne 0x11ce01ce */
  if (!C.zf) goto L_11ce01ce;
  /* 11ce01ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ce01cc jmp 0x11ce0214 */
  goto L_11ce0214;
L_11ce01ce:;
  /* 11ce01ce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ce01d1 push edx */
  push32((uint32_t)(EDX));
  /* 11ce01d2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ce01d5 push eax */
  push32((uint32_t)(EAX));
  /* 11ce01d6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ce01d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ce01da mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ce01dd push edx */
  push32((uint32_t)(EDX));
  /* 11ce01de push 1 */
  push32((uint32_t)(0x1u));
  /* 11ce01e0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ce01e3 push eax */
  push32((uint32_t)(EAX));
  /* 11ce01e4 call dword ptr [0x11d01344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01344))), 0x11ce01eau);
  /* 11ce01ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ce01ec jne 0x11ce01f2 */
  if (!C.zf) goto L_11ce01f2;
  /* 11ce01ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ce01f0 jmp 0x11ce0214 */
  goto L_11ce0214;
L_11ce01f2:;
  /* 11ce01f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ce01f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ce01f6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ce01f9 push edx */
  push32((uint32_t)(EDX));
  /* 11ce01fa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ce01fd push eax */
  push32((uint32_t)(EAX));
  /* 11ce01fe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ce0201 push ecx */
  push32((uint32_t)(ECX));
  /* 11ce0202 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ce0205 push edx */
  push32((uint32_t)(EDX));
  /* 11ce0206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce0209 push eax */
  push32((uint32_t)(EAX));
  /* 11ce020a call dword ptr [0x11d01300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01300))), 0x11ce0210u);
  /* 11ce0210 jmp 0x11ce0214 */
  goto L_11ce0214;
L_11ce0212:;
  /* 11ce0212 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ce0214:;
  /* 11ce0214 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11ce0217 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ce021a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11ce0221 pop edi */
  EDI = (pop32());
  /* 11ce0222 pop esi */
  ESI = (pop32());
  /* 11ce0223 pop ebx */
  EBX = (pop32());
  /* 11ce0224 mov esp, ebp */
  ESP = (EBP);
  /* 11ce0226 pop ebp */
  EBP = (pop32());
  /* 11ce0227 ret  */
  ESPCHK(0x11cdfe30u, _esp0);
  ESP += 4; return;
}

/* FUN_10020230 @ 0x11ce0230 (80 bytes, 32 insns) */
void f_11ce0230(void) {
  FTRACE(0x11ce0230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ce0230 push ebp */
  push32((uint32_t)(EBP));
  /* 11ce0231 mov ebp, esp */
  EBP = (ESP);
  /* 11ce0233 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ce0236 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ce0239 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ce023c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce023f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ce0242:;
  /* 11ce0242 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce0245 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce0248 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ce024b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ce024e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ce0250 je 0x11ce0267 */
  if (C.zf) goto L_11ce0267;
  /* 11ce0252 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce0255 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ce0258 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ce025a je 0x11ce0267 */
  if (C.zf) goto L_11ce0267;
  /* 11ce025c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce025f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0262 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ce0265 jmp 0x11ce0242 */
  goto L_11ce0242;
L_11ce0267:;
  /* 11ce0267 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce026a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ce026d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ce026f jne 0x11ce0279 */
  if (!C.zf) goto L_11ce0279;
  /* 11ce0271 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce0274 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ce0277 jmp 0x11ce027c */
  goto L_11ce027c;
L_11ce0279:;
  /* 11ce0279 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11ce027c:;
  /* 11ce027c mov esp, ebp */
  ESP = (EBP);
  /* 11ce027e pop ebp */
  EBP = (pop32());
  /* 11ce027f ret  */
  ESPCHK(0x11ce0230u, _esp0);
  ESP += 4; return;
}

/* FUN_10020280 @ 0x11ce0280 (736 bytes, 224 insns) */
void f_11ce0280(void) {
  FTRACE(0x11ce0280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ce0280 push ebp */
  push32((uint32_t)(EBP));
  /* 11ce0281 mov ebp, esp */
  EBP = (ESP);
  /* 11ce0283 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ce0286 push esi */
  push32((uint32_t)(ESI));
  /* 11ce0287 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce028b je 0x11ce02ac */
  if (C.zf) goto L_11ce02ac;
  /* 11ce028d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11ce028f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce0292 push eax */
  push32((uint32_t)(EAX));
  /* 11ce0293 call 0x11ce06d0 */
  push32(0x11ce0298u); f_11ce06d0();
  /* 11ce0298 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce029b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ce029e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce02a2 je 0x11ce02ac */
  if (C.zf) goto L_11ce02ac;
  /* 11ce02a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce02a7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce02aa jne 0x11ce02b4 */
  if (!C.zf) goto L_11ce02b4;
L_11ce02ac:;
  /* 11ce02ac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ce02af jmp 0x11ce055b */
  goto L_11ce055b;
L_11ce02b4:;
  /* 11ce02b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ce02b7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11ce02bb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ce02bd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ce02bf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ce02c0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ce02c3 mov ecx, dword ptr [0x11cff4e4] */
  ECX = (r32((uint32_t)(0x11cff4e4)));
  /* 11ce02c9 cmp ecx, dword ptr [0x11cff4e8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11cff4e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce02cf jne 0x11ce02e5 */
  if (!C.zf) goto L_11ce02e5;
  /* 11ce02d1 mov edx, dword ptr [0x11cff4e4] */
  EDX = (r32((uint32_t)(0x11cff4e4)));
  /* 11ce02d7 push edx */
  push32((uint32_t)(EDX));
  /* 11ce02d8 call 0x11ce05e0 */
  push32(0x11ce02ddu); f_11ce05e0();
  /* 11ce02dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce02e0 mov dword ptr [0x11cff4e4], eax */
  w32((uint32_t)(0x11cff4e4), (EAX));
L_11ce02e5:;
  /* 11ce02e5 cmp dword ptr [0x11cff4e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff4e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce02ec jne 0x11ce03a5 */
  if (!C.zf) goto L_11ce03a5;
  /* 11ce02f2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce02f6 je 0x11ce0317 */
  if (C.zf) goto L_11ce0317;
  /* 11ce02f8 cmp dword ptr [0x11cff4ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff4ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce02ff je 0x11ce0317 */
  if (C.zf) goto L_11ce0317;
  /* 11ce0301 call 0x11cdfd80 */
  push32(0x11ce0306u); f_11cdfd80();
  /* 11ce0306 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ce0308 je 0x11ce0312 */
  if (C.zf) goto L_11ce0312;
  /* 11ce030a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ce030d jmp 0x11ce055b */
  goto L_11ce055b;
L_11ce0312:;
  /* 11ce0312 jmp 0x11ce03a5 */
  goto L_11ce03a5;
L_11ce0317:;
  /* 11ce0317 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce031b je 0x11ce0324 */
  if (C.zf) goto L_11ce0324;
  /* 11ce031d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ce031f jmp 0x11ce055b */
  goto L_11ce055b;
L_11ce0324:;
  /* 11ce0324 cmp dword ptr [0x11cff4e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff4e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce032b jne 0x11ce0364 */
  if (!C.zf) goto L_11ce0364;
  /* 11ce032d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11ce0332 push 0x11cfade8 */
  push32((uint32_t)(0x11cfade8u));
  /* 11ce0337 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ce0339 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ce033b call 0x11ccb4c0 */
  push32(0x11ce0340u); f_11ccb4c0();
  /* 11ce0340 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0343 mov dword ptr [0x11cff4e4], eax */
  w32((uint32_t)(0x11cff4e4), (EAX));
  /* 11ce0348 cmp dword ptr [0x11cff4e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff4e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce034f jne 0x11ce0359 */
  if (!C.zf) goto L_11ce0359;
  /* 11ce0351 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ce0354 jmp 0x11ce055b */
  goto L_11ce055b;
L_11ce0359:;
  /* 11ce0359 mov eax, dword ptr [0x11cff4e4] */
  EAX = (r32((uint32_t)(0x11cff4e4)));
  /* 11ce035e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11ce0364:;
  /* 11ce0364 cmp dword ptr [0x11cff4ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff4ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce036b jne 0x11ce03a5 */
  if (!C.zf) goto L_11ce03a5;
  /* 11ce036d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11ce0372 push 0x11cfade8 */
  push32((uint32_t)(0x11cfade8u));
  /* 11ce0377 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ce0379 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ce037b call 0x11ccb4c0 */
  push32(0x11ce0380u); f_11ccb4c0();
  /* 11ce0380 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0383 mov dword ptr [0x11cff4ec], eax */
  w32((uint32_t)(0x11cff4ec), (EAX));
  /* 11ce0388 cmp dword ptr [0x11cff4ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff4ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce038f jne 0x11ce0399 */
  if (!C.zf) goto L_11ce0399;
  /* 11ce0391 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ce0394 jmp 0x11ce055b */
  goto L_11ce055b;
L_11ce0399:;
  /* 11ce0399 mov ecx, dword ptr [0x11cff4ec] */
  ECX = (r32((uint32_t)(0x11cff4ec)));
  /* 11ce039f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11ce03a5:;
  /* 11ce03a5 mov edx, dword ptr [0x11cff4e4] */
  EDX = (r32((uint32_t)(0x11cff4e4)));
  /* 11ce03ab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ce03ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ce03b1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ce03b4 push eax */
  push32((uint32_t)(EAX));
  /* 11ce03b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce03b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ce03b9 call 0x11ce0560 */
  push32(0x11ce03beu); f_11ce0560();
  /* 11ce03be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce03c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ce03c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce03c8 jl 0x11ce0461 */
  if ((C.sf!=C.of)) goto L_11ce0461;
  /* 11ce03ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce03d1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce03d4 je 0x11ce0461 */
  if (C.zf) goto L_11ce0461;
  /* 11ce03da cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce03de je 0x11ce0453 */
  if (C.zf) goto L_11ce0453;
  /* 11ce03e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ce03e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce03e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce03e8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ce03eb push edx */
  push32((uint32_t)(EDX));
  /* 11ce03ec call 0x11ccbf50 */
  push32(0x11ce03f1u); f_11ccbf50();
  /* 11ce03f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce03f4 jmp 0x11ce03ff */
  goto L_11ce03ff;
L_11ce03f6:;
  /* 11ce03f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce03f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce03fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ce03ff:;
  /* 11ce03ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce0402 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce0405 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce0409 je 0x11ce0420 */
  if (C.zf) goto L_11ce0420;
  /* 11ce040b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce040e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce0411 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce0414 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce0417 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11ce041b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11ce041e jmp 0x11ce03f6 */
  goto L_11ce03f6;
L_11ce0420:;
  /* 11ce0420 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11ce0425 push 0x11cfade8 */
  push32((uint32_t)(0x11cfade8u));
  /* 11ce042a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ce042c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce042f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ce0432 push eax */
  push32((uint32_t)(EAX));
  /* 11ce0433 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce0436 push ecx */
  push32((uint32_t)(ECX));
  /* 11ce0437 call 0x11ccb950 */
  push32(0x11ce043cu); f_11ccb950();
  /* 11ce043c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce043f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ce0442 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce0446 je 0x11ce0451 */
  if (C.zf) goto L_11ce0451;
  /* 11ce0448 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce044b mov dword ptr [0x11cff4e4], edx */
  w32((uint32_t)(0x11cff4e4), (EDX));
L_11ce0451:;
  /* 11ce0451 jmp 0x11ce045f */
  goto L_11ce045f;
L_11ce0453:;
  /* 11ce0453 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce0456 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce0459 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce045c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11ce045f:;
  /* 11ce045f jmp 0x11ce04d4 */
  goto L_11ce04d4;
L_11ce0461:;
  /* 11ce0461 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce0465 jne 0x11ce04cd */
  if (!C.zf) goto L_11ce04cd;
  /* 11ce0467 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce046b jge 0x11ce0475 */
  if ((C.sf==C.of)) goto L_11ce0475;
  /* 11ce046d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce0470 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ce0472 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ce0475:;
  /* 11ce0475 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11ce047a push 0x11cfade8 */
  push32((uint32_t)(0x11cfade8u));
  /* 11ce047f push 2 */
  push32((uint32_t)(0x2u));
  /* 11ce0481 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce0484 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11ce048b push edx */
  push32((uint32_t)(EDX));
  /* 11ce048c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce048f push eax */
  push32((uint32_t)(EAX));
  /* 11ce0490 call 0x11ccb950 */
  push32(0x11ce0495u); f_11ccb950();
  /* 11ce0495 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0498 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ce049b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce049f jne 0x11ce04a9 */
  if (!C.zf) goto L_11ce04a9;
  /* 11ce04a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ce04a4 jmp 0x11ce055b */
  goto L_11ce055b;
L_11ce04a9:;
  /* 11ce04a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce04ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce04af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce04b2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11ce04b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce04b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce04bb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11ce04c3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce04c6 mov dword ptr [0x11cff4e4], eax */
  w32((uint32_t)(0x11cff4e4), (EAX));
  /* 11ce04cb jmp 0x11ce04d4 */
  goto L_11ce04d4;
L_11ce04cd:;
  /* 11ce04cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ce04cf jmp 0x11ce055b */
  goto L_11ce055b;
L_11ce04d4:;
  /* 11ce04d4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce04d8 je 0x11ce0559 */
  if (C.zf) goto L_11ce0559;
  /* 11ce04da push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11ce04df push 0x11cfade8 */
  push32((uint32_t)(0x11cfade8u));
  /* 11ce04e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ce04e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce04e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ce04ea call 0x11cd0a80 */
  push32(0x11ce04efu); f_11cd0a80();
  /* 11ce04ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce04f2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce04f5 push eax */
  push32((uint32_t)(EAX));
  /* 11ce04f6 call 0x11ccb4c0 */
  push32(0x11ce04fbu); f_11ccb4c0();
  /* 11ce04fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce04fe mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ce0501 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce0505 je 0x11ce0559 */
  if (C.zf) goto L_11ce0559;
  /* 11ce0507 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce050a push edx */
  push32((uint32_t)(EDX));
  /* 11ce050b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ce050e push eax */
  push32((uint32_t)(EAX));
  /* 11ce050f call 0x11cd0c00 */
  push32(0x11ce0514u); f_11cd0c00();
  /* 11ce0514 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0517 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ce051a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ce051d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ce0520 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0522 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ce0525 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce0528 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11ce052b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce052e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0531 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ce0534 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ce0537 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ce0539 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ce053b not edx */
  EDX = (~(EDX));
  /* 11ce053d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11ce0540 push edx */
  push32((uint32_t)(EDX));
  /* 11ce0541 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ce0544 push eax */
  push32((uint32_t)(EAX));
  /* 11ce0545 call dword ptr [0x11d012fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d012fc))), 0x11ce054bu);
  /* 11ce054b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ce054d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ce0550 push ecx */
  push32((uint32_t)(ECX));
  /* 11ce0551 call 0x11ccbf50 */
  push32(0x11ce0556u); f_11ccbf50();
  /* 11ce0556 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ce0559:;
  /* 11ce0559 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ce055b:;
  /* 11ce055b pop esi */
  ESI = (pop32());
  /* 11ce055c mov esp, ebp */
  ESP = (EBP);
  /* 11ce055e pop ebp */
  EBP = (pop32());
  /* 11ce055f ret  */
  ESPCHK(0x11ce0280u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11ce0560 (124 bytes, 47 insns) */
void f_11ce0560(void) {
  FTRACE(0x11ce0560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ce0560 push ebp */
  push32((uint32_t)(EBP));
  /* 11ce0561 mov ebp, esp */
  EBP = (ESP);
  /* 11ce0563 push ecx */
  push32((uint32_t)(ECX));
  /* 11ce0564 mov eax, dword ptr [0x11cff4e4] */
  EAX = (r32((uint32_t)(0x11cff4e4)));
  /* 11ce0569 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ce056c jmp 0x11ce0577 */
  goto L_11ce0577;
L_11ce056e:;
  /* 11ce056e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce0571 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0574 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ce0577:;
  /* 11ce0577 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce057a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce057d je 0x11ce05ca */
  if (C.zf) goto L_11ce05ca;
  /* 11ce057f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ce0582 push eax */
  push32((uint32_t)(EAX));
  /* 11ce0583 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce0586 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ce0588 push edx */
  push32((uint32_t)(EDX));
  /* 11ce0589 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce058c push eax */
  push32((uint32_t)(EAX));
  /* 11ce058d call 0x11cdfd30 */
  push32(0x11ce0592u); f_11cdfd30();
  /* 11ce0592 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ce0597 jne 0x11ce05c8 */
  if (!C.zf) goto L_11ce05c8;
  /* 11ce0599 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce059c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ce059e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ce05a1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11ce05a5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce05a8 je 0x11ce05ba */
  if (C.zf) goto L_11ce05ba;
  /* 11ce05aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce05ad mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ce05af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ce05b2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11ce05b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ce05b8 jne 0x11ce05c8 */
  if (!C.zf) goto L_11ce05c8;
L_11ce05ba:;
  /* 11ce05ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce05bd sub eax, dword ptr [0x11cff4e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cff4e4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ce05c3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ce05c6 jmp 0x11ce05d8 */
  goto L_11ce05d8;
L_11ce05c8:;
  /* 11ce05c8 jmp 0x11ce056e */
  goto L_11ce056e;
L_11ce05ca:;
  /* 11ce05ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce05cd sub eax, dword ptr [0x11cff4e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cff4e4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ce05d3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11ce05d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11ce05d8:;
  /* 11ce05d8 mov esp, ebp */
  ESP = (EBP);
  /* 11ce05da pop ebp */
  EBP = (pop32());
  /* 11ce05db ret  */
  ESPCHK(0x11ce0560u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11ce05e0 (238 bytes, 80 insns) */
void f_11ce05e0(void) {
  FTRACE(0x11ce05e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ce05e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ce05e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ce05e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ce05e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ce05ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce05f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ce05f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce05f7 jne 0x11ce0600 */
  if (!C.zf) goto L_11ce0600;
  /* 11ce05f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ce05fb jmp 0x11ce06ca */
  goto L_11ce06ca;
L_11ce0600:;
  /* 11ce0600 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce0603 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ce0605 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce0608 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce060b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ce060e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ce0610 je 0x11ce061d */
  if (C.zf) goto L_11ce061d;
  /* 11ce0612 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ce0615 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0618 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ce061b jmp 0x11ce0600 */
  goto L_11ce0600;
L_11ce061d:;
  /* 11ce061d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11ce0622 push 0x11cfade8 */
  push32((uint32_t)(0x11cfade8u));
  /* 11ce0627 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ce0629 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ce062c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11ce0633 push eax */
  push32((uint32_t)(EAX));
  /* 11ce0634 call 0x11ccb4c0 */
  push32(0x11ce0639u); f_11ccb4c0();
  /* 11ce0639 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce063c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ce063f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce0642 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ce0645 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce0649 jne 0x11ce0655 */
  if (!C.zf) goto L_11ce0655;
  /* 11ce064b push 9 */
  push32((uint32_t)(0x9u));
  /* 11ce064d call 0x11cc9f30 */
  push32(0x11ce0652u); f_11cc9f30();
  /* 11ce0652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ce0655:;
  /* 11ce0655 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce0658 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ce065b:;
  /* 11ce065b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce065e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce0661 je 0x11ce06be */
  if (C.zf) goto L_11ce06be;
  /* 11ce0663 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11ce0668 push 0x11cfade8 */
  push32((uint32_t)(0x11cfade8u));
  /* 11ce066d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ce066f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce0672 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ce0674 push edx */
  push32((uint32_t)(EDX));
  /* 11ce0675 call 0x11cd0a80 */
  push32(0x11ce067au); f_11cd0a80();
  /* 11ce067a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce067d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0680 push eax */
  push32((uint32_t)(EAX));
  /* 11ce0681 call 0x11ccb4c0 */
  push32(0x11ce0686u); f_11ccb4c0();
  /* 11ce0686 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce068c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ce068e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce0691 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce0694 je 0x11ce06aa */
  if (C.zf) goto L_11ce06aa;
  /* 11ce0696 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce0699 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ce069b push ecx */
  push32((uint32_t)(ECX));
  /* 11ce069c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce069f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ce06a1 push eax */
  push32((uint32_t)(EAX));
  /* 11ce06a2 call 0x11cd0c00 */
  push32(0x11ce06a7u); f_11cd0c00();
  /* 11ce06a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ce06aa:;
  /* 11ce06aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ce06ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce06b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ce06b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce06b6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce06b9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ce06bc jmp 0x11ce065b */
  goto L_11ce065b;
L_11ce06be:;
  /* 11ce06be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ce06c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ce06c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ce06ca:;
  /* 11ce06ca mov esp, ebp */
  ESP = (EBP);
  /* 11ce06cc pop ebp */
  EBP = (pop32());
  /* 11ce06cd ret  */
  ESPCHK(0x11ce05e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100206d0 @ 0x11ce06d0 (237 bytes, 81 insns) */
void f_11ce06d0(void) {
  FTRACE(0x11ce06d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ce06d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ce06d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ce06d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ce06d4 cmp dword ptr [0x11cff86c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff86c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce06db jne 0x11ce06f2 */
  if (!C.zf) goto L_11ce06f2;
  /* 11ce06dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ce06e0 push eax */
  push32((uint32_t)(EAX));
  /* 11ce06e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce06e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ce06e5 call 0x11ce07d0 */
  push32(0x11ce06eau); f_11ce07d0();
  /* 11ce06ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce06ed jmp 0x11ce07b9 */
  goto L_11ce07b9;
L_11ce06f2:;
  /* 11ce06f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ce06f4 call 0x11ccb3c0 */
  push32(0x11ce06f9u); f_11ccb3c0();
  /* 11ce06f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce06fc jmp 0x11ce0707 */
  goto L_11ce0707;
L_11ce06fe:;
  /* 11ce06fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce0701 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0704 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11ce0707:;
  /* 11ce0707 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce070a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11ce070e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11ce0712 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce0715 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ce071b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ce071d je 0x11ce079b */
  if (C.zf) goto L_11ce079b;
  /* 11ce071f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce0722 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ce0727 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ce0729 mov cl, byte ptr [eax + 0x11cff981] */
  CL = (r8((uint32_t)(EAX + 0x11cff981)));
  /* 11ce072f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ce0732 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ce0734 je 0x11ce0786 */
  if (C.zf) goto L_11ce0786;
  /* 11ce0736 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce0739 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce073c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ce073f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce0742 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ce0744 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ce0746 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ce0748 jne 0x11ce0758 */
  if (!C.zf) goto L_11ce0758;
  /* 11ce074a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ce074c call 0x11ccb460 */
  push32(0x11ce0751u); f_11ccb460();
  /* 11ce0751 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0754 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ce0756 jmp 0x11ce07b9 */
  goto L_11ce07b9;
L_11ce0758:;
  /* 11ce0758 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce075b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ce0761 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11ce0764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce0767 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ce0769 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ce076b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ce076d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce0770 jne 0x11ce0784 */
  if (!C.zf) goto L_11ce0784;
  /* 11ce0772 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ce0774 call 0x11ccb460 */
  push32(0x11ce0779u); f_11ccb460();
  /* 11ce0779 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce077c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce077f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ce0782 jmp 0x11ce07b9 */
  goto L_11ce07b9;
L_11ce0784:;
  /* 11ce0784 jmp 0x11ce0796 */
  goto L_11ce0796;
L_11ce0786:;
  /* 11ce0786 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce0789 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ce078f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce0792 jne 0x11ce0796 */
  if (!C.zf) goto L_11ce0796;
  /* 11ce0794 jmp 0x11ce079b */
  goto L_11ce079b;
L_11ce0796:;
  /* 11ce0796 jmp 0x11ce06fe */
  goto L_11ce06fe;
L_11ce079b:;
  /* 11ce079b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ce079d call 0x11ccb460 */
  push32(0x11ce07a2u); f_11ccb460();
  /* 11ce07a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce07a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ce07a8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ce07ad cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ce07b0 jne 0x11ce07b7 */
  if (!C.zf) goto L_11ce07b7;
  /* 11ce07b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ce07b5 jmp 0x11ce07b9 */
  goto L_11ce07b9;
L_11ce07b7:;
  /* 11ce07b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ce07b9:;
  /* 11ce07b9 mov esp, ebp */
  ESP = (EBP);
  /* 11ce07bb pop ebp */
  EBP = (pop32());
  /* 11ce07bc ret  */
  ESPCHK(0x11ce06d0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11ce07d0 (193 bytes, 87 insns) */
void f_11ce07d0(void) {
  FTRACE(0x11ce07d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ce07d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ce07d2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11ce07d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ce07d7 mov ebx, eax */
  EBX = (EAX);
  /* 11ce07d9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11ce07dc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ce07e0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11ce07e6 je 0x11ce07fb */
  if (C.zf) goto L_11ce07fb;
L_11ce07e8:;
  /* 11ce07e8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11ce07ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ce07eb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ce07ed je 0x11ce07c0 */
  if (C.zf) { jmp_ind(0x11ce07c0u); return; }
  /* 11ce07ef test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11ce07f1 je 0x11ce0844 */
  if (C.zf) goto L_11ce0844;
  /* 11ce07f3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11ce07f9 jne 0x11ce07e8 */
  if (!C.zf) goto L_11ce07e8;
L_11ce07fb:;
  /* 11ce07fb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11ce07fd push edi */
  push32((uint32_t)(EDI));
  /* 11ce07fe mov eax, ebx */
  EAX = (EBX);
  /* 11ce0800 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11ce0803 push esi */
  push32((uint32_t)(ESI));
  /* 11ce0804 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11ce0806:;
  /* 11ce0806 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11ce0808 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11ce080d mov eax, ecx */
  EAX = (ECX);
  /* 11ce080f mov esi, edi */
  ESI = (EDI);
  /* 11ce0811 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11ce0813 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0815 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0817 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ce081a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ce081d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11ce081f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11ce0821 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ce0824 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11ce082a jne 0x11ce0848 */
  if (!C.zf) goto L_11ce0848;
  /* 11ce082c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11ce0831 je 0x11ce0806 */
  if (C.zf) goto L_11ce0806;
  /* 11ce0833 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11ce0838 jne 0x11ce0842 */
  if (!C.zf) goto L_11ce0842;
  /* 11ce083a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11ce0840 jne 0x11ce0806 */
  if (!C.zf) goto L_11ce0806;
L_11ce0842:;
  /* 11ce0842 pop esi */
  ESI = (pop32());
  /* 11ce0843 pop edi */
  EDI = (pop32());
L_11ce0844:;
  /* 11ce0844 pop ebx */
  EBX = (pop32());
  /* 11ce0845 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ce0847 ret  */
  ESPCHK(0x11ce07d0u, _esp0);
  ESP += 4; return;
L_11ce0848:;
  /* 11ce0848 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11ce084b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ce084d je 0x11ce0885 */
  if (C.zf) goto L_11ce0885;
  /* 11ce084f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ce0851 je 0x11ce0842 */
  if (C.zf) goto L_11ce0842;
  /* 11ce0853 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ce0855 je 0x11ce087e */
  if (C.zf) goto L_11ce087e;
  /* 11ce0857 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11ce0859 je 0x11ce0842 */
  if (C.zf) goto L_11ce0842;
  /* 11ce085b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ce085e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ce0860 je 0x11ce0877 */
  if (C.zf) goto L_11ce0877;
  /* 11ce0862 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ce0864 je 0x11ce0842 */
  if (C.zf) goto L_11ce0842;
  /* 11ce0866 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ce0868 je 0x11ce0870 */
  if (C.zf) goto L_11ce0870;
  /* 11ce086a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11ce086c je 0x11ce0842 */
  if (C.zf) goto L_11ce0842;
  /* 11ce086e jmp 0x11ce0806 */
  goto L_11ce0806;
L_11ce0870:;
  /* 11ce0870 pop esi */
  ESI = (pop32());
  /* 11ce0871 pop edi */
  EDI = (pop32());
  /* 11ce0872 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11ce0875 pop ebx */
  EBX = (pop32());
  /* 11ce0876 ret  */
  ESPCHK(0x11ce07d0u, _esp0);
  ESP += 4; return;
L_11ce0877:;
  /* 11ce0877 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11ce087a pop esi */
  ESI = (pop32());
  /* 11ce087b pop edi */
  EDI = (pop32());
  /* 11ce087c pop ebx */
  EBX = (pop32());
  /* 11ce087d ret  */
  ESPCHK(0x11ce07d0u, _esp0);
  ESP += 4; return;
L_11ce087e:;
  /* 11ce087e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11ce0881 pop esi */
  ESI = (pop32());
  /* 11ce0882 pop edi */
  EDI = (pop32());
  /* 11ce0883 pop ebx */
  EBX = (pop32());
  /* 11ce0884 ret  */
  ESPCHK(0x11ce07d0u, _esp0);
  ESP += 4; return;
L_11ce0885:;
  /* 11ce0885 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11ce0888 pop esi */
  ESI = (pop32());
  /* 11ce0889 pop edi */
  EDI = (pop32());
  /* 11ce088a pop ebx */
  EBX = (pop32());
  /* 11ce088b ret  */
  ESPCHK(0x11ce07d0u, _esp0);
  ESP += 4; return;
  /* 11ce088e rcl byte ptr [ebx], 0xd0 */
  { uint32_t _v=(r8((uint32_t)(EBX)))&0xffu, _cf=C.cf, _n=(0xd0u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>7)&1; _v=((_v<<1)|_cf)&0xffu; _cf=_b; } w8((uint32_t)(EBX), (_v)); C.cf=_cf; }
}

/* RtlUnwind @ 0x11ce088c (6 bytes, 1 insns) */
void f_11ce088c(void) {
  FTRACE(0x11ce088cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ce088c jmp dword ptr [0x11d013c0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11d013c0)))); return;
}

/* Unwind@10027820 @ 0x11ce7820 (11 bytes, 5 insns) */
void f_11ce7820(void) {
  FTRACE(0x11ce7820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ce7820 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ce7823 push eax */
  push32((uint32_t)(EAX));
  /* 11ce7824 call 0x11cc9520 */
  push32(0x11ce7829u); f_11cc9520();
  /* 11ce7829 pop ecx */
  ECX = (pop32());
  /* 11ce782a ret  */
  ESPCHK(0x11ce7820u, _esp0);
  ESP += 4; return;
}

